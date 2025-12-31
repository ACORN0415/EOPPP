import re
import json

class CParser:
    def __init__(self, file_path):
        self.file_path = file_path
        self.c_text = self._read_file()

    def _read_file(self):
        try:
            with open(self.file_path, 'rt', encoding='UTF8') as file:
                return file.read()
        except FileNotFoundError:
            raise Exception(f"파일을 찾을 수 없습니다: {self.file_path}")
        except Exception as e:
            raise Exception(f"파일 읽기 오류: {str(e)}")

    def parse_global_variables(self):
        global_vars = {"declarations": [], "initializations": {}}
        lines = self.c_text.split('\n')
        i = 0
        while i < len(lines):
            line = lines[i].strip()
            func_match = re.match(r'(void|int)\s+\w+\s*\(.+\)(\s*\{)?', line)
            if func_match:
                break
            decl_match = re.match(r'(int|float|double|long long int)\s+(\w+)\s*;', line)
            if decl_match:
                type_name, var_name = decl_match.groups()
                if var_name not in global_vars["declarations"]:
                    global_vars["declarations"].append(var_name)
                    global_vars["initializations"][var_name] = None
            init_match = re.match(r'(int|float|double|long long int)\s+(\w+)\s*=\s*(0x[0-9a-fA-F]+|\d*\.?\d+)\s*;', line)
            if init_match:
                type_name, var_name, value = init_match.groups()
                if var_name not in global_vars["declarations"]:
                    global_vars["declarations"].append(var_name)
                if type_name == 'int' or type_name == 'long long int':
                    global_vars["initializations"][var_name] = int(value, 16) if value.startswith('0x') else int(float(value))
                else:
                    global_vars["initializations"][var_name] = float(value)
            array_match = re.match(r'(int|float|double|long long int)\s+(\w+)\s*\[\s*(\w+|\d+)\s*\]\s*(=\s*\{(.+?)\})?\s*;', line)
            if array_match:
                type_name, var_name, size, _, init_values = array_match.groups()
                size = int(size) if size.isdigit() else size
                if var_name not in global_vars["declarations"]:
                    global_vars["declarations"].append(f"{var_name}[{size}]")
                if init_values:
                    values = [v.strip() for v in init_values.split(',') if v.strip()]
                    parsed_values = []
                    for v in values:
                        if v.startswith('0x'):
                            parsed_values.append(int(v, 16))
                        elif v.isdigit() or re.match(r'-?\d*\.?\d+', v):
                            parsed_values.append(float(v) if '.' in v else int(v))
                        else:
                            parsed_values.append(v)
                    if init_values.strip().endswith(',') and isinstance(size, int):
                        while len(parsed_values) < size:
                            parsed_values.append(0)
                    global_vars["initializations"][f"{var_name}[{size}]"] = parsed_values
                else:
                    global_vars["initializations"][f"{var_name}[{size}]"] = None
            i += 1
        return global_vars

    def parse_function(self, text):
        func_match = re.match(r'(void|int)\s+(\w+)\s*\(.*?\)\s*(?:\s*/\*.*?\*/)?\s*\{', text.strip(), re.DOTALL)
        if not func_match:
            print(f"함수 매칭 실패: {text[:50]}...")
            return None
        func_name = func_match.group(2)
        body_match = re.search(r'\{(.+?)\}', text, re.DOTALL)
        body_content = body_match.group(1).strip() if body_match else ""
        
        lines = body_content.split('\n')
        init_lines = []
        body_lines = []
        declared_vars = {}
        in_ifdef = False
        
        for line in lines:
            line = line.strip()
            if line.startswith('#ifdef'):
                in_ifdef = True
                continue
            elif line.startswith('#endif'):
                in_ifdef = False
                continue
            elif in_ifdef:
                continue  # #ifdef와 #endif 사이의 내용은 건너뜀
            
            if re.match(r'(int|float|double|long long int)\s+\w+\s*=.*', line):
                init_lines.append(line)
            elif re.match(r'(int|float|double|long long int)\s+\w+\s*;', line):
                var_match = re.match(r'(int|float|double|long long int)\s+(\w+)\s*;', line)
                if var_match:
                    type_name, var_name = var_match.groups()
                    declared_vars[var_name] = {"type": type_name, "value": None}
            elif line:
                body_lines.append(line)
        
        i = 0
        processed_body = []
        while i < len(body_lines):
            assign_match = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+|\d*\.?\d+)\s*;', body_lines[i])
            if assign_match:
                var_name, value = assign_match.groups()
                if var_name in declared_vars:
                    declared_vars[var_name]["value"] = value
            processed_body.append(body_lines[i])
            i += 1
        
        for var_name, info in declared_vars.items():
            if info["value"] is None:
                init_lines.append(f"{info['type']} {var_name};")
            else:
                init_lines.append(f"{info['type']} {var_name} = {info['value']};")
        
        return {
            "function_name": func_name,
            "initializations": init_lines,
            "body": processed_body
        }

    def parse_initializations(self, init_lines):
        init_dict = {}
        for line in init_lines:
            match = re.match(r'(int|float|double|long long int)\s+(\w+)\s*=\s*(0x[0-9a-fA-F]+|\d*\.?\d+)', line)
            if match:
                type_name, var_name, value = match.groups()
                if type_name == 'int':
                    if value.startswith('0x'):
                        init_dict[var_name] = int(value, 16)
                    else:
                        init_dict[var_name] = int(float(value))
                elif type_name == 'float':
                    init_dict[var_name] = float(value)
                elif type_name == 'double':
                    init_dict[var_name] = float(value)
                elif type_name == 'long long int':
                    if value.startswith('0x'):
                        init_dict[var_name] = int(value, 16)
                    else:
                        init_dict[var_name] = int(float(value))
            else:
                decl_match = re.match(r'(int|float|double|long long int)\s+(\w+)\s*;', line)
                if decl_match:
                    type_name, var_name = decl_match.groups()
                    init_dict[var_name] = None
        return init_dict

    def parse_for_loop(self, body_lines):
        for_loops = []
        i = 0
        while i < len(body_lines):
            item = body_lines[i]
            if isinstance(item, str) and item.strip().startswith('for'):
                for_line = item.strip()
                body_start = i + 1
                for_content = re.search(r'for\s*\((.+?)\)\s*\{', for_line).group(1)
                init, cond, incr = [x.strip() for x in for_content.split(';')]
                
                body_list = []
                brace_count = 1
                i = body_start
                while i < len(body_lines) and brace_count > 0:
                    line = body_lines[i]
                    if isinstance(line, str):
                        if '{' in line:
                            brace_count += 1
                        if '}' in line:
                            brace_count -= 1
                        if brace_count > 0 and line:
                            body_list.append(line)
                    i += 1
                
                for_loops.append({
                    "variable": init,
                    "condition": cond,
                    "increment": incr,
                    "body": body_list
                })
            else:
                i += 1
        return for_loops

    def parse_if(self, body_lines):
        if_stmts = []
        i = 0
        while i < len(body_lines):
            item = body_lines[i]
            if isinstance(item, str) and item.strip().startswith('if'):
                if_line = item.strip()
                body_start = i + 1
                cond = re.search(r'if\s*\((.+?)\)\s*\{', if_line).group(1)
                
                body_list = []
                brace_count = 1
                i = body_start
                while i < len(body_lines) and brace_count > 0:
                    line = body_lines[i]
                    if isinstance(line, str):
                        if '{' in line:
                            brace_count += 1
                        if '}' in line:
                            brace_count -= 1
                        if brace_count > 0 and line:
                            body_list.append(line)
                    i += 1
                
                if_stmts.append({
                    "condition": cond,
                    "body": body_list
                })
            else:
                i += 1
        return if_stmts

    def extract_main_calls(self):
        main_pattern = r'int\s+main\s*\(.+?\)\s*\{(.+?)\}'
        main_match = re.search(main_pattern, self.c_text, re.DOTALL)
        if not main_match:
            print("main 함수를 찾을 수 없습니다.")
            return set()
        
        main_body = main_match.group(1)
        call_pattern = r'(\w+)\s*\([^)]*\)\s*(?:;|\n|$)'
        calls = re.findall(call_pattern, main_body)
        #print(f"main에서 호출된 함수: {calls}")
        return set(calls)

    def parse_multiple_functions(self):
        global_vars = self.parse_global_variables()
        main_calls = self.extract_main_calls()
        function_pattern = r'void\s+(\w+)\s*\(.*?\)\s*(?:\s*/\*.*?\*/)?\s*\{([^}]+(?:\{[^}]*\}[^}]*)*)\}'
        functions = []
        start = 0
        while True:
            match = re.search(function_pattern, self.c_text[start:], re.DOTALL)
            if not match:
                break
            func_name = match.group(1)
            func_body = match.group(2)
            functions.append((func_name, func_body))
            #print(f"탐지된 함수: {func_name}")
            start += match.start(1)

        #print(f"main에서 호출된 함수: {main_calls}")
        #print(f"찾아낸 모든 void 함수: {[func[0] for func in functions]}")
        
        results = []
        processed_funcs = set()
        for func_name, func_body in functions:
            if func_name in main_calls and func_name not in processed_funcs:
                print(f"{func_name} 파싱 중...")
                func_match = re.search(rf'void\s+{func_name}\s*\(.*?\)\s*(?:\s*/\*.*?\*/)?\s*{{([^}}]+(?:{{[^}}]*\}}[^}}]*)*)}}', self.c_text, re.DOTALL)
                if not func_match:
                    print(f"경고: {func_name}의 전체 텍스트를 찾을 수 없습니다.")
                    continue
                func_text = func_match.group(0)
                parsed_func = self.parse_function(func_text)
                if parsed_func is None:
                    print(f"경고: {func_name} 파싱 실패")
                    continue
                init_vars = self.parse_initializations(parsed_func["initializations"])
                for_loops = self.parse_for_loop(parsed_func["body"])
                if_stmts = self.parse_if(parsed_func["body"])
                
                result = {
                    "function_name": parsed_func["function_name"],
                    "initializations": init_vars,
                    "for_loops": [
                        {
                            "variable": for_loop["variable"],
                            "condition": for_loop["condition"],
                            "increment": for_loop["increment"],
                            "body": for_loop["body"]
                        } for for_loop in for_loops
                    ],
                    "if_stmts": [
                        {
                            "condition": if_stmt["condition"],
                            "body": if_stmt["body"]
                        } for if_stmt in if_stmts
                    ]
                }
                results.append(result)
                processed_funcs.add(func_name)
        
        return {"global_variable": global_vars, "functions": results}

    def save_to_json(self, output_file="./parsed_2.json"):
        results = self.parse_multiple_functions()
        try:
            with open(output_file, 'w', encoding='UTF8') as json_file:
                json.dump(results, json_file, indent=4, ensure_ascii=False)
            print(f"파싱 결과가 {output_file}에 저장되었습니다.")
        except Exception as e:
            print(f"JSON 저장 오류: {str(e)}")

if __name__ == "__main__":
    c_file_path = './fft_test.c'
    parser = CParser(c_file_path)
    parser.save_to_json("./parsed_.json")