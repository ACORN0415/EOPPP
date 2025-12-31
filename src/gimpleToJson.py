import re
import json
import subprocess
import os

class GimpleParser:
    def __init__(self, c_file_path, json_file_path):
        self.c_file_path = c_file_path
        self.json_file_path = json_file_path
        self.c_text = self._read_file(self.c_file_path)
        self.json_data = self._read_json_file()
        self.gimple_file = self._generate_gimple()

    def _read_file(self, file_path):
        # 파일 읽기
        try:
            with open(file_path, 'rt', encoding='UTF8') as file:
                return file.read()
        except FileNotFoundError:
            raise Exception(f"파일을 찾을 수 없습니다: {file_path}")
        except Exception as e:
            raise Exception(f"파일 읽기 오류: {str(e)}")

    def _read_json_file(self):
        # JSON 파일 읽기
        try:
            with open(self.json_file_path, 'r', encoding='UTF8') as file:
                return json.load(file)
        except FileNotFoundError:
            raise Exception(f"JSON 파일을 찾을 수 없습니다: {self.json_file_path}")
        except Exception as e:
            raise Exception(f"JSON 파일 읽기 오류: {str(e)}")

    def _generate_gimple(self):
        # GIMPLE 파일 생성 또는 기존 파일 사용
        gimple_file = f"{self.c_file_path}.gimple"
        base_name = os.path.splitext(os.path.basename(self.c_file_path))[0]

        if os.path.exists(gimple_file):
            print(f"기존 GIMPLE 파일 발견: {gimple_file}. 이를 사용합니다.")
            return gimple_file

        try:
            print("GCC 버전 확인 중...")
            result = subprocess.run(["gcc", "--version"], check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            print(result.stdout.decode())

            print(f"{self.c_file_path}에 대해 GIMPLE 생성 시도 중...")
            result = subprocess.run(
                ["gcc", "-fdump-tree-gimple", "-c", self.c_file_path],
                check=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE
            )
            print(f"GCC 실행 결과: {result.stdout.decode()}")
            if result.stderr:
                print(f"GCC 에러 출력: {result.stderr.decode()}")

            print("생성된 GIMPLE 파일 검색 중...")
            found = False
            for fname in os.listdir('.'):
                if fname.startswith(base_name) and '.gimple' in fname:
                    print(f"GIMPLE 파일 발견: {fname}")
                    os.rename(fname, gimple_file)
                    found = True
                    break
            if not found:
                raise Exception("GIMPLE 파일이 생성되지 않았습니다. GCC 출력 파일을 확인하세요.")
            return gimple_file
        except FileNotFoundError:
            raise Exception("GCC가 설치되지 않았거나 PATH에 없습니다. MinGW를 설치하고 PATH를 확인하세요.")
        except subprocess.CalledProcessError as e:
            raise Exception(f"GIMPLE 생성 실패: {e.stderr.decode()}")
        except Exception as e:
            raise Exception(f"GIMPLE 파일 처리 오류: {str(e)}")

    def parse_and_match_gimple(self):
        # GIMPLE 파일 읽기 및 JSON 데이터와 매칭
        try:
            with open(self.gimple_file, 'rt', encoding='UTF8') as file:
                gimple_text = file.read()
        except Exception as e:
            raise Exception(f"GIMPLE 파일 읽기 오류: {str(e)}")

        lines = gimple_text.split('\n')
        indexed_lines = [line.strip() for line in lines if line.strip()]

        #print("Indexed lines (first 10):", indexed_lines[:10])

        # 기존 JSON 데이터에서 전역 변수 및 함수 정보 추출
        json_data = self.json_data
        #print("json_data successfully extracted:", json_data)
        if isinstance(json_data, dict) and "global_variable" in json_data:
            global_variables = json_data.get("global_variable", {"declarations": [], "initializations": {}})
            json_functions = json_data.get("functions", [])
            #print("global_variable successfully extracted:", global_variables)
        elif isinstance(json_data, list):
            #print("경고: parsed_.json이 리스트 형태입니다. global_variable가 없으면 기본값 사용.")
            global_variables = {"declarations": [], "initializations": {}}
            json_functions = json_data
        else:
            raise Exception("parsed_.json의 형식이 예상과 다릅니다.")

        # 효율적인 검색을 위해 JSON의 조건문 정보를 딕셔너리로 재정리
        json_for_conditions = {}
        json_if_conditions = {}
        for func in json_functions:
            func_name = func["function_name"]
            for for_loop in func.get("for_loops", []):
                if "condition" in for_loop:
                    condition = for_loop["condition"].strip().replace(" ", "")
                    json_for_conditions[(func_name, condition)] = for_loop.get("increment", "unknown")
            for if_stmt in func.get("if_stmts", []):
                if "condition" in if_stmt:
                    condition = if_stmt["condition"].strip().replace(" ", "")
                    json_if_conditions[(func_name, condition)] = if_stmt.get("increment", "unknown")

        matched_data = []
        current_func = None
        func_line_idx = 0

        i = 0
        while i < len(indexed_lines):
            line = indexed_lines[i]
            # 1. 함수 시작 매칭 (예: main())
            func_match = re.match(r'(\w+)\s*\(\)', line)
            
            # 2. 전역 변수 선언 및 초기화 매칭
            if not current_func and not func_match:
                decl_match = re.match(r'(int|long long int|float|double)\s+(\w+);', line)
                if decl_match:
                    var_name = decl_match.group(2)
                    if var_name not in global_variables["declarations"]:
                        global_variables["declarations"].append(var_name)
                        global_variables["initializations"].setdefault(var_name, None)
                    i += 1
                    continue
                
                
                init_match = re.match(r'(\w+)\s*=\s*([-]?\d+);', line)
                if init_match:
                    var_name, value = init_match.groups()
                    if var_name not in global_variables["declarations"]:
                        global_variables["declarations"].append(var_name)
                    global_variables["initializations"][var_name] = value
                    i += 1
                    continue

                # 전역 변수 선언/초기화 외의 라인은 건너뜀
            if func_match:
                if current_func:
                    matched_data.append(current_func)

                func_name = func_match.group(1)
                json_func = next((f for f in json_functions if f["function_name"] == func_name), None)
                if not json_func:
                    print(f"경고: {func_name} 함수가 JSON에서 발견되지 않았습니다.")
                    json_func = {"function_name": func_name, "initializations": {}, "for_loops": [], "if_stmts": []}

                current_func = {
                    "function_name": func_name,
                    "initializations": {},
                    "for_loops": [],
                    "if_stmts": [],
                    "all_lines": []
                }
                func_line_idx = 0
                i += 1
                continue

                # 함수 내부 라인 매칭
            if current_func:
                current_func["all_lines"].append((func_line_idx, line))
                func_line_idx += 1
                # 초기화 매칭
                init_match = re.match(r'(\w+)\s*=\s*([-]?\d+);', line)
                if init_match and not ('goto' in line or 'if' in line):
                    var_name, value = init_match.groups()
                    json_init = json_func["initializations"].get(var_name)
                    if json_init is not None:
                        current_func["initializations"][var_name] = value
                # 조건문 매칭
                if_match = re.match(r'if \((.*?)\) goto <D\.(\d+)>;\s*else goto <D\.(\d+)>;', line)
                if if_match:
                    condition = if_match.group(1)
                    true_label = f"<D.{if_match.group(2)}>:"
                    false_label = f"<D.{if_match.group(3)}>:"

                    try:
                        true_idx = indexed_lines.index(true_label)
                    except ValueError:
                        true_idx = None
                    try:
                        false_idx = indexed_lines.index(false_label)
                    except ValueError:
                        false_idx = None

                    # 조건 변환
                    # <= 연산자를 < 연산자로 변환하여 JSON과 일치시키기 위한 처리
                    less_eq_match = re.match(r'(\w+)\s*(<=|<|>|=)\s*(\w+|\d+)', condition)
                    if less_eq_match:
                        var, op, bound = less_eq_match.groups()
                        if op == "<=" and bound.isdigit():
                            json_cond = f"{var}<{int(bound) + 1}"
                        else:
                            json_cond = condition.replace(" ", "")
                    else:
                        json_cond = condition.replace(" ", "")

                    # for 루프 처리
                    if true_idx is not None and false_idx is not None:
                        json_for_increment = json_for_conditions.get((current_func["function_name"], json_cond))
                        if json_for_increment is not None:
                            variable_match = re.search(r'\b(\w+)\b', condition)
                            variable = variable_match.group(1) if variable_match else "unknown"
                            body = []
                            body_start = true_idx + 1
                            while body_start < len(indexed_lines):
                                b_line = indexed_lines[body_start]
                                if b_line == false_label or re.match(r'if ', b_line):
                                    break
                                if not re.match(r'(int|long long int|float|double)\s+D\.\d+;', b_line):
                                    body.append(b_line)
                                body_start += 1
                            final_increment = json_for_increment
                            if final_increment == f"{variable}++":
                                final_increment = f"{variable} = {variable} + 1"
                            elif re.match(r'(\w+)=(\w+)([+\-*/])(\w+|\d+)', final_increment):
                                var, left, op, right = re.match(r'(\w+)=(\w+)([+\-*/])(\w+|\d+)', final_increment).groups()
                                final_increment = f"{var} = {left} {op} {right}"
                            for_loop_data = {
                                "variable": variable,
                                "condition": condition,
                                "increment": final_increment,
                                "body": body
                            }
                            current_func["for_loops"].append(for_loop_data)
                            #print(f"Matched for loop in {current_func['function_name']}: condition={condition}, increment={final_increment}")
                        else:

                            # 루프 내부의 if 문 처리
                            json_if_increment = json_if_conditions.get((current_func["function_name"], json_cond), "unknown")
                            variable_match = re.search(r'\b(\w+)\b', condition)
                            variable = variable_match.group(1) if variable_match else "unknown"
                            body = []
                            body_start = true_idx + 1
                            while body_start < len(indexed_lines):
                                b_line = indexed_lines[body_start]
                                if b_line == false_label or re.match(r'if ', b_line):
                                    break
                                if not re.match(r'(int|long long int|float|double)\s+D\.\d+;', b_line):
                                    body.append(b_line)
                                    if "goto" in b_line and false_label not in b_line:  # break 감지
                                        body[-1] = "break;"
                                body_start += 1
                            final_increment = json_if_increment
                            # 조건문의 증감식 변환
                            if final_increment == f"{variable}++":
                                final_increment = f"{variable} = {variable} + 1"
                        
                            elif re.match(r'(\w+)=(\w+)([+\-*/])(\w+|\d+)', final_increment):
                                var, left, op, right = re.match(r'(\w+)=(\w+)([+\-*/])(\w+|\d+)', final_increment).groups()
                                final_increment = f"{var} = {left} {op} {right}"
                            if_stmt_data = {
                                "variable": variable,
                                "condition": condition,
                                "increment": final_increment,
                                "body": body
                            }
                            current_func["if_stmts"].append(if_stmt_data)
                            #print(f"Matched if stmt in {current_func['function_name']}: condition={condition}, increment={final_increment}")

            i += 1

        if current_func:
            matched_data.append(current_func)

        return {"global_variables": global_variables, "functions": matched_data}

    def save_to_json(self, output_file="matched_gimple.json"):
        matched_data = self.parse_and_match_gimple()
        try:
            with open(output_file, 'w', encoding='UTF8') as json_file:
                json.dump(matched_data, json_file, indent=4, ensure_ascii=False)
            print(f"매핑된 GIMPLE 데이터가 {output_file}에 저장되었습니다.")
        except Exception as e:
            print(f"JSON 저장 오류: {str(e)}")
        finally:
            if os.path.exists(self.gimple_file):
                os.remove(self.gimple_file)

if __name__ == "__main__":
    c_file_path = './fft_test.c'
    json_file_path = './parsed_.json'
    parser = GimpleParser(c_file_path, json_file_path)
    parser.save_to_json("matched_gimple.json")