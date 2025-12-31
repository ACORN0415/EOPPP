import json
import re


class MIFGenerator:
    REGS = 128

    def __init__(
        self,
        gimple_json_path: str = "matched_gimple.json",
        parsed_json_path: str = "parsed_.json",
        output_mif_path: str = "test.mif",
        debug: bool = False,
    ):
        self.gimple_json_path = gimple_json_path
        self.parsed_json_path = parsed_json_path
        self.output_mif_path = output_mif_path
        self.debug = debug

        self.mp = self.RegMap()
        self.funcs_parsed = []
        self.funcs_gimple = []
        self.global_vars = {}

    # --------------------------------------------------------------------- #
    # 내부 헬퍼 메서드
    # --------------------------------------------------------------------- #
    def dprint(self, *args, **kwargs):
        if self.debug:
            print(*args, **kwargs)

    @staticmethod
    def to_hex32(val):
        # 32비트 헥사 문자열로 변환
        try:
            intval = int(val)
        except Exception:
            intval = 0
        return f"{(intval & 0xFFFFFFFF):08x}"

    @staticmethod
    def parse_assignment(line: str):
        # 대입문 파싱 a = b + c;' 형태의 대입문에서 왼쪽(LHS)과 오른쪽(RHS)을 분리
        line = line.strip()
        if not line.endswith(";"):
            line += ";"
        m = re.match(r"(\w+)\s*=\s*(.+);", line)
        return m.groups() if m else (None, None)

    @staticmethod
    def parse_condition_parts(cond: str):
        # 조건문 파싱 'a < b' 형태의 조건문에서 왼쪽과 오른쪽을 분리
        m = re.match(r"(\w+)\s*[<>=!]+\s*(.+)", cond)
        return m.groups() if m else (None, None)

    @staticmethod
    def is_temporary_var(var_name):
        # 임시 변수인지 확인 (D.숫자 형태)
        return re.match(r"^D\.\d+$", var_name) is not None

    @staticmethod
    def is_h_constant(var_name):
        # h 상수인지 확인 (h숫자 형태)
        return re.match(r"^h\d+$", var_name) is not None

    @staticmethod
    def constants_in_body(for_loops, if_stmts):
        # 본문 내 상수 추출
        pat = re.compile(r"\w+\s*=\s*\w+\s*\+\s*(\d+)")
        consts = set()
        if_list = if_stmts if isinstance(if_stmts, list) else []
        for blk in for_loops + if_list:
            inc = blk.get("increment", "")
            if inc:
                m = pat.fullmatch(inc.replace(" ", ""))
                if m:
                    consts.add(int(m.group(1)))
        return consts

    @staticmethod
    def rhs_vars_in_conditions(conds):
        # 조건문에서 RHS(오른쪽) 변수 추출
        rhs = set()
        for c in conds:
            m = re.match(r"\w+\s*[<>=!]+\s*(\w+)", c)
            if m and not re.match(r"D\.\d+", m.group(1)):
                rhs.add(m.group(1))
        return rhs

    @staticmethod
    def build_var_expr_map(func):
        # mif c코드 부분 식 변형 
        var_map = {}
        for blk in func.get("for_loops", []):
            for line in blk.get("body", []):
                lhs, rhs = MIFGenerator.parse_assignment(line)
                if lhs and rhs and ("+" in rhs or "-" in rhs):
                    if not MIFGenerator.is_temporary_var(lhs):
                        var_map[lhs.strip()] = rhs.strip().rstrip(";")
        for blk in func.get("for_loops", []) + func.get("if_stmts", []):
            inc = blk.get("increment")
            if inc:
                lhs, rhs = MIFGenerator.parse_assignment(inc)
                if lhs and rhs and ("+" in rhs or "-" in rhs):
                    if not MIFGenerator.is_temporary_var(lhs):
                        var_map[lhs.strip()] = rhs.strip().rstrip(";")
        return var_map

    @staticmethod
    def one_level_substitute(var, var_map):
        # 한 단계 변수 치환
        return var_map.get(var, var)

    @staticmethod
    def parenthesize_if_expr(expr):
        # 식에 덧셈/뺄셈이 포함되면 괄호로 감싸기
        expr = expr.strip()
        return f"({expr})" if ("+" in expr or "-" in expr) else expr

    @staticmethod
    def sum_vars_val(expr, current_vals, rhs_neg):
        # 식 내 변수 값 합산
        parts = [p.strip() for p in expr.split("+")]
        total = 0
        for part in parts:
            if part.lstrip("-").isdigit():
                total += int(part)
            else:
                val = current_vals.get(part, 0)
                total += -val if part in rhs_neg else val
        return total

    @staticmethod
    def evaluate_rhs_val(rhs, current_vals, rhs_neg):
        # RHS 식의 값을 평가
        rhs = rhs.strip()
        if rhs.lstrip("-").isdigit():
            return int(rhs)
        m_var = re.match(r"^(\w+)$", rhs)
        if m_var:
            val = current_vals.get(m_var.group(1), 0)
            return -val if m_var.group(1) in rhs_neg else val
        m_plus = re.match(r"^(\w+)\s*\+\s*(\w+)$", rhs)
        if m_plus:
            v1 = current_vals.get(m_plus.group(1), 0)
            v2 = current_vals.get(m_plus.group(2), 0)
            if m_plus.group(1) in rhs_neg:
                v1 = -v1
            if m_plus.group(2) in rhs_neg:
                v2 = -v2
            return v1 + v2
        return 0

    @staticmethod
    def convert_tmp_var_name(var_name: str, mode=None):
        # 임시 변수 이름 변환 D.숫자 -> t숫자 또는 _숫자
        if var_name.startswith("D."):
            num = var_name.split(".")[1]
            if mode == "t":
                return f"t{num}"
            elif mode == "_":
                return f"_{num}"
            else:
                return f"t{num}"
        return var_name

    @staticmethod
    def convert_rhs_tmp_vars(rhs: str):
        # RHS 식 내 임시 변수 변환
        return re.sub(r"D\.(\d+)", lambda m: MIFGenerator.convert_tmp_var_name(m.group(0)), rhs)

    @staticmethod
    def construct_reg_sum(mp, gpc, expr):
        # 식을 레지스터 조합으로 변환
        parts = [p.strip() for p in expr.split("+")]
        regs = []
        for p in parts:
            if p.lstrip("-").isdigit():
                reg = mp.get_const(gpc, int(p)) or mp.get_const(0, int(p)) or "r0"
            else:
                reg = mp.get_var(gpc, p) or "r0"
            regs.append(reg)
        return "+".join(regs), regs

    @staticmethod
    def make_cmd_for_declare(var, val_str, regname):
        # 선언 명령어 생성
        hex_val = MIFGenerator.to_hex32(int(val_str))
        return f"LXY(01f, {hex_val})"

    @staticmethod
    def make_cmd_for_assign(var_l, rhs, mp, gpc):
        # 대입 명령어 생성 추가 필요
        parts = [p.strip() for p in rhs.split("+") if p.strip()]
        reg_l = mp.get_var(gpc, var_l)
        if not reg_l:
            return "ADD(000, 00080000)"
        if len(parts) == 1:
            p = parts[0]
            if p.lstrip("-").isdigit():
                return f"ADD(000,{MIFGenerator.to_hex32(int(p))})"
            else:
                return "ADD(000, 00080000)"
        return "ADD(000, 00080000)"

    # --------------------------------------------------------------------- #
    # RegMap 클래스
    # --------------------------------------------------------------------- #
    class RegMap:
        def __init__(self):
            self.table = {} # {gpc: {reg_name: (idx, var, desc, val, cmd, reg_combo, cond_ternary)}}
            self.v2r = {} # {(gpc, var): reg_name}
            self.c2r = {} # {(gpc, const): reg_name}

        def add(self, gpc, idx, reg_name, var, desc, val, cmd, reg_combo="", cond_ternary=""):
            self.table.setdefault(gpc, {})[reg_name] = (
                idx,
                var,
                desc,
                val,
                cmd,
                reg_combo,
                cond_ternary,
            )

        def set_var(self, gpc, var, reg):
            self.v2r.setdefault((gpc, var), reg)

        def get_var(self, gpc, var):
            return self.v2r.get((gpc, var))

        def set_const(self, gpc, const, reg):
            self.c2r.setdefault((gpc, const), reg)

        def get_const(self, gpc, const):
            return self.c2r.get((gpc, const))

    # --------------------------------------------------------------------- #
    # JSON 로드 및 전처리
    # --------------------------------------------------------------------- #
    def load_json(self, path: str):
        with open(path, encoding="utf8") as f:
            return json.load(f)

    def init_data(self):
        self.funcs_parsed = self.load_json(self.parsed_json_path).get("functions", [])
        self.funcs_gimple = self.load_json(self.gimple_json_path).get("functions", [])
        self.global_vars = self.get_global_variables(self.funcs_parsed)

    @staticmethod
    def get_global_variables(funcs_parsed):
        globals_all = {}
        for func in funcs_parsed:
            globals_all.update(func.get("globals", {}))
        return globals_all

    # --------------------------------------------------------------------- #
    # build_gpc0 구현
    # --------------------------------------------------------------------- #
    def build_gpc0(self, func, gpc):
        loops = func.get("for_loops", []) or []
        ifs_data = func.get("if_stmts", [])
        ifs = ifs_data if isinstance(ifs_data, list) else []
        init = func.get("initializations", {}) or {}
        conds = {blk.get("condition") for blk in loops + ifs if blk.get("condition")}
        rhs_neg = self.rhs_vars_in_conditions(conds) if conds else set()

        # 1) 초기화 레지스터
        idx = 0
        for var, val in init.items():
            if self.is_temporary_var(var) or (loops and self.is_h_constant(var)):
                continue
            reg = f"r{idx}"
            signed_val = -int(val) if var in rhs_neg else int(val)
            self.mp.set_var(gpc, var, reg)
            cmd = self.make_cmd_for_declare(var, str(signed_val), reg)
            self.mp.add(gpc, idx, reg, var, f"{var} = {signed_val}", str(signed_val), cmd, reg)
            idx += 1

        # 2) 상수 레지스터
        for c in sorted(self.constants_in_body(loops, ifs)):
            if idx >= self.REGS:
                break
            if not self.mp.get_const(gpc, c):
                reg = f"r{idx}"
                self.mp.set_const(gpc, c, reg)
                cmd = f"LXY(01f,{self.to_hex32(c)})"
                self.mp.add(gpc, idx, reg, str(c), str(c), str(c), cmd, reg)
                idx += 1

        # 3) 조건 아웃루프 상수
        for _ in conds:
            if idx >= self.REGS:
                break
            reg = f"r{idx}"
            cmd = "LXY(01f,00000004)"
            self.mp.add(gpc, idx, reg, "4 (outloop)", "4 (outloop)", "4", cmd, reg)
            idx += 1

        # 4) 나머지 레지스터 채우기
        while idx < self.REGS:
            reg = f"r{idx}"
            self.mp.add(gpc, idx, reg, "", "", "0", "", reg)
            idx += 1

    # --------------------------------------------------------------------- #
    # build_standard_gpc1 (build_gpc1) 구현
    # --------------------------------------------------------------------- #
    def build_standard_gpc1(self, func, gpc):
        decl = gpc - 1
        init = func.get("initializations", {}) or {}
        loops = func.get("for_loops", []) or []
        ifs = func.get("if_stmts", []) or []
        var_map = self.build_var_expr_map(func)
        conds = {blk.get("condition") for blk in loops + ifs if blk.get("condition")}
        rhs_neg = self.rhs_vars_in_conditions(conds) if conds else set()

        # 현재 값 초기화
        current_vals = {}
        for var, val in init.items():
            if not self.is_temporary_var(var) and not self.is_h_constant(var):
                signed_val = -int(val) if var in rhs_neg else int(val)
                current_vals[var] = signed_val
                reg = self.mp.get_var(decl, var)
                if reg:
                    self.mp.set_var(gpc, var, reg)
                    entry = self.mp.table[decl][reg]
                    cmd = entry[4]
                    self.mp.add(gpc, int(reg[1:]), reg, var, f"{var} = {entry[3]}", entry[3], cmd, entry[5])

        next_reg_idx = len([v for v in init if not self.is_temporary_var(v) and not self.is_h_constant(v)])

        # 증분 처리
        for blk in loops + ifs:
            inc = blk.get("increment")
            if not inc:
                continue
            lhs, rhs = self.parse_assignment(inc.strip())
            if not lhs or not rhs:
                continue
            rhs_expanded = self.one_level_substitute(rhs.strip(), var_map)
            val_new = self.evaluate_rhs_val(rhs_expanded, current_vals, rhs_neg)
            current_vals[lhs] = val_new
            reg_lhs = self.mp.get_var(gpc, lhs) or f"r{next_reg_idx}"
            if self.mp.get_var(gpc, lhs) is None:
                self.mp.set_var(gpc, lhs, reg_lhs)
                next_reg_idx += 1
            parts = [p.strip() for p in rhs_expanded.split("+")]
            if len(parts) == 1:
                p = parts[0]
                reg_combo = (
                    self.mp.get_const(gpc, int(p)) or self.mp.get_const(decl, int(p))
                    if p.lstrip("-").isdigit()
                    else self.mp.get_var(gpc, p) or self.mp.get_var(decl, p)
                ) or "r0"
            else:
                reg_combo, _ = self.construct_reg_sum(self.mp, decl, rhs_expanded)
            cmd = self.make_cmd_for_assign(lhs, rhs_expanded, self.mp, gpc)
            self.mp.add(gpc, int(reg_lhs[1:]), reg_lhs, lhs, f"{lhs} = {rhs_expanded}", str(val_new), cmd, reg_combo)

        # 본문 처리
        for blk in loops:
            for line in blk.get("body", []):
                lhs, rhs = self.parse_assignment(line)
                if not lhs or not rhs:
                    continue
                if lhs not in current_vals:
                    current_vals[lhs] = 0
                    reg = f"r{next_reg_idx}"
                    self.mp.set_var(gpc, lhs, reg)
                    next_reg_idx += 1
                rhs_expanded = self.one_level_substitute(rhs.strip(), var_map)
                val_new = self.evaluate_rhs_val(rhs_expanded, current_vals, rhs_neg)
                current_vals[lhs] = val_new
                reg_lhs = self.mp.get_var(gpc, lhs)
                parts = [p.strip() for p in rhs_expanded.split("+")]
                if len(parts) == 1:
                    p = parts[0]
                    reg_combo = (
                        self.mp.get_const(gpc, int(p)) or self.mp.get_const(decl, int(p))
                        if p.lstrip("-").isdigit()
                        else self.mp.get_var(gpc, p) or self.mp.get_var(decl, p)
                    ) or "r0"
                else:
                    reg_combo, _ = self.construct_reg_sum(self.mp, decl, rhs_expanded)
                cmd = self.make_cmd_for_assign(lhs, rhs_expanded, self.mp, gpc)
                self.mp.add(gpc, int(reg_lhs[1:]), reg_lhs, lhs, f"{lhs} = {rhs_expanded}", str(val_new), cmd, reg_combo)

        # 조건문 처리
        idx_cond_for = 7
        idx_cond_if = 8
        for loop in loops:
            cond = loop.get("condition")
            if not cond:
                continue
            lhs_var, rhs_expr = self.parse_condition_parts(cond)
            lhs_exp = self.one_level_substitute(lhs_var, var_map)
            rhs_exp = self.one_level_substitute(rhs_expr, var_map)
            reg_str, _ = self.construct_reg_sum(self.mp, decl, f"{lhs_exp}+{rhs_exp}")
            cmd = "GEZ(01f, 00000004)"
            self.mp.add(gpc, idx_cond_for, f"r{idx_cond_for}",
                        f"{lhs_exp}+{rhs_exp} >= 0",
                        f"{lhs_exp}+{rhs_exp} >= 0",
                        str(self.sum_vars_val(lhs_exp, current_vals, set()) + self.sum_vars_val(rhs_exp, current_vals, set())),
                        cmd,
                        reg_combo=f"({reg_str}) >= 0 ? outL:inL",
                        cond_ternary="? outL:inL")
        for ifs in ifs:
            cond = ifs.get("condition")
            if not cond:
                continue
            lhs_var, rhs_expr = self.parse_condition_parts(cond)
            lhs_exp = self.one_level_substitute(lhs_var, var_map)
            rhs_exp = self.one_level_substitute(rhs_expr, var_map)
            reg_str, _ = self.construct_reg_sum(self.mp, decl, f"{lhs_exp}+{rhs_exp}")
            cmd = "GTZ(01f, 00000004)"
            self.mp.add(gpc, idx_cond_if, f"r{idx_cond_if}",
                        f"{lhs_exp}+{rhs_exp} > 0",
                        f"{lhs_exp}+{rhs_exp} > 0",
                        str(self.sum_vars_val(lhs_exp, current_vals, set()) + self.sum_vars_val(rhs_exp, current_vals, set())),
                        cmd,
                        reg_combo=f"({reg_str}) > 0 ? outL:inL",
                        cond_ternary="? outL:inL")

        # 일반 상수 처리 (1 포함 모든 상수)
        consts = self.constants_in_body(loops, ifs)
        for c in sorted(consts):
            if next_reg_idx >= self.REGS:
                break
        if not self.mp.get_const(gpc, c):
            reg = f"r{next_reg_idx}"
            self.mp.set_const(gpc, c, reg)
            desc = str(c)
            cmd = f"LXY(01f,{self.to_hex32(c)})"
            self.mp.add(gpc, next_reg_idx, reg, desc, desc, str(c), cmd, reg)
            next_reg_idx += 1

        # 남은 레지스터 채우기
        used = {int(r[1:]) for (gp, _), r in self.mp.v2r.items() if gp == gpc}
        used |= {int(r[1:]) for (gp, _), r in self.mp.c2r.items() if gp == gpc}
        used |= {7, 8}
        for i in range(self.REGS):
            if i not in used:
                self.mp.add(gpc, i, f"r{i}", "", "", "0", "", f"r{i}")

    def build_gpc1(self, func, gpc):
        self.build_standard_gpc1(func, gpc)

    # --------------------------------------------------------------------- #
    # 레지스터 라인 생성
    # --------------------------------------------------------------------- #
    def lines_for_gpc(self, gpc):
        lines = []
        if gpc not in self.mp.table:
            for i in range(self.REGS):
                addr = gpc * self.REGS + i
                lines.append(f"--{addr:<5}:00000000; -- r{i:<4}")
            return lines
        reg_map = self.mp.table[gpc]
        for i in range(self.REGS):
            rn = f"r{i}"
            if rn in reg_map:
                idx, var, desc, val, cmd, combo, tern = reg_map[rn]
                hex_val = self.to_hex32(val)
                addr = gpc * self.REGS + idx
                lines.append(f"--{addr:<5}:{hex_val:<10}; -- {rn:<4} {desc:<30} {combo:<20} {cmd:<22} {val:<6} GPC={gpc}")
            else:
                addr = gpc * self.REGS + i
                lines.append(f"--{addr:<5}:00000000; -- r{i:<4}")
        return lines

    # --------------------------------------------------------------------- #
    # MIF 저장
    # --------------------------------------------------------------------- #
    def save_mif_file(self, lines):
        with open(self.output_mif_path, "w", encoding="utf-8") as f:
            f.write("DEPTH = 8192;\nWIDTH = 32;\nADDRESS_RADIX = DEC;\nDATA_RADIX = HEX;\nCONTENT\nBEGIN\n")
            f.write("\n".join(lines))
            f.write("\nEND;\n")
        print(f".mif 파일 저장 완료: {self.output_mif_path}")

    # --------------------------------------------------------------------- #
    # 실행 엔트리포인트
    # --------------------------------------------------------------------- #
    def run(self):
        self.init_data()
        for i, func in enumerate(self.funcs_parsed):
            gimp = next((x for x in self.funcs_gimple if x["function_name"] == func["function_name"]), None)
            if gimp:
                self.build_gpc0(gimp, i * 2)
        for i, func in enumerate(self.funcs_parsed):
            gimp = next((x for x in self.funcs_gimple if x["function_name"] == func["function_name"]), None)
            if gimp:
                self.build_gpc1(gimp, i * 2 + 1)
        
        # GPC별 헤더와 라인 생성
        all_lines = []
        max_gpc = max(self.mp.table.keys()) if self.mp.table else -1
        
        for gpc in range(max_gpc + 1):
            # 각 GPC 시작 전에 헤더 추가
            if gpc == 0:
                all_lines.extend([
                    "-- -- GPC 0 --fibonacci sequence --  init",
                    "-- -- LXY(z[k], y[k]), y[127]=32'h00000000, y[126]=32'h00000000,",
                    "-- -- z[k]=12'b{HI, LP_YXA, C_TYPE} = 12'b{10 ,00_000, 1_1111} = 12'h{01f}",
                    "-- -- Each character in {HI, LP_YXA, C_TYPE} except '_'  represents control-bits",
                    "-- -- y[127][31] means branch-indicator if (loopen_1d==1)",
                    "-- -- y[127][30] means branch-indicator if (loopen_2d==1)",
                    "-- -- y[127][15:0] means loopin_offset_1d/loopin_offset_2d if triggered by loopen_1d/loopen_2d",
                    "-- -- y[126][31:0] means return address when return initiated"
                ])
            elif gpc == 1:
                all_lines.extend([
                    "-- -- GPC 1  -- fibonacci sequence",
                    "-- -- ADD(z[k], y[k]),  y[127]= 32'h80000000, y[126]= 32'h00000000,",
                    "-- -- z(k)= 12'b{HI, LP_YXA, C_TYPE} = 12'b{10 ,00_000, 0_0010} = 32'h{802}, ADD-> GTZ",
                    "-- -- Each character in {HI, LP_YXA, C_TYPE} except '_'  represents control-bits",
                    "-- -- y[127][31] means branch-indicator if (loopen_1d==1)",
                    "-- -- y[127][30] means branch-indicator if (loopen_2d==1)",
                    "-- -- y[127][15:0] means loopin_offset_1d/loopin_offset_2d if triggered by loopen_1d/loopen_2d",
                    "-- -- y[126][31:0] means return address when return initiated"
                ])
            elif gpc == 2:
                all_lines.extend([
                    "-- GPC 2  -- FIR  --  init",
                    "-- LXY(z[k], y[k]), y[127]=32'h00000000, y[126]=32'h00000000,",
                    "-- z[k]=12'b{HW, LP_YXA, C_TYPE} = 12'b{10 ,00_000, 1_1111} = 12'h{01f}",
                    "-- Each character in {HI, LP_YXA, C_TYPE} except '_'  represents control-bits",
                    "-- y[127][31] means branch-indicator if (loopen_1d==1)",
                    "-- y[127][30] means branch-indicator if (loopen_2d==1)",
                    "-- y[127][15:0] means loopin_offset_1d/loopin_offset_2d if triggered by loopen_1d/loopen_2d",
                    "-- y[126][31:0] means return address when return initiated"
                ])
            elif gpc == 3:
                all_lines.extend([
                    "-- GPC 3 -- FIR  --  action",
                    "-- ADD(z[k], y[k]),  y[127]= 32'h80000000, y[126]= 32'h00000000,",
                    "-- z(k)= 16'b{HW, LP_YXA, C_TYPE} = 16'b{10 ,00_000, 0_0010} = 32'h{802}, ADD-> GTZ",
                    "-- Each character in {HW, LP_YXA, C_TYPE} except '_'  represents control-bits",
                    "-- y[127][31] indicates branch-indicator if (loopen_1d==1)",
                    "-- y[127][30] indicates branch-indicator if (loopen_2d==1)",
                    "-- y[127][15:0] indicates loopin_offset_1d/loopin_offset_2d if triggered by loopen_1d/loopen_2d",
                    "-- y[126][31:0] indicates return address when return initiated"
                ])
            
            # 해당 GPC의 레지스터 라인들 추가
            all_lines.extend(self.lines_for_gpc(gpc))
        
        self.save_mif_file(all_lines)



if __name__ == "__main__":
    generator = MIFGenerator(debug=True)
    generator.run()
