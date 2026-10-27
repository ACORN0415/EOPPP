#!/usr/bin/env python3
"""
EOPPP Checker Evaluation Code Generator (PATCHED)

이전 버전의 라벨링 거짓 양성 문제를 다음과 같이 수정:

  1. 의도(features)와 실제 삽입(actual)을 분리하여 추적.
     manifest.csv는 실제 코드에 들어간 feature만 기록한다.
     -> has_goto, has_float, has_unsafe_op 등의 거짓 양성 제거.

  2. unsafe op 생성 시 두 피연산자가 같지 않도록 강제.
     -> `x % x`, `y | y` 같은 trivial self-operation이
        GCC -O0에서 단순화되어 unsafe로 감지되지 않는 문제 차단.

  3. has_recursion 분기에서 다른 features를 무시하므로,
     해당 actual도 모두 False로 둔다.

변경 위치는 `# CHANGED:` 주석으로 표시.

Usage (이전과 동일):
  python3 checker_eval.py --rtpg 10000 --outdir eval_programs/
"""

import os
import random
import argparse
from collections import Counter, defaultdict


# ==================================================================
# C Code Building Blocks
# ==================================================================

class ProgramBuilder:

    SAFE_OPS = ["+", "-"]
    SAFE_CMP = ["<", ">", "<=", ">=", "==", "!="]
    UNSAFE_OPS = ["/", "%", "^", "|", "&"]
    UNSAFE_TYPES = ["float", "double"]

    # CHANGED: 추적할 feature 키 목록 (boolean 만)
    FEATURE_KEYS = [
        "has_float", "has_unsafe_op", "has_mult", "has_if",
        "has_array", "has_nested_loop", "has_switch", "has_goto",
        "has_recursion", "has_pointer", "has_double_idx",
        "has_struct", "has_enum", "has_malloc",
    ]

    def __init__(self, seed=None):
        if seed is not None:
            random.seed(seed)

    def _rname(self):
        return random.choice(["x","y","z","a","b","c","v","tmp","val",
            "sum","acc","cur","prev","cnt","lo","hi","res","out","dat"]) + str(random.randint(0,99))

    def _uvars(self, n):
        s = set()
        while len(s) < n:
            s.add(self._rname())
        return list(s)

    def _rc(self):
        return random.choice([random.randint(0,10), random.randint(-50,50),
                              random.randint(1,100), random.randint(1,65536)])

    def _safe_stmt(self, vl):
        dst = random.choice(vl)
        p = random.randint(0, 4)
        if p == 0:
            return f"        {dst} = {random.choice(vl)} {random.choice(self.SAFE_OPS)} {random.choice(vl)};"
        elif p == 1:
            return f"        {dst} = {random.choice(vl)} {random.choice(self.SAFE_OPS)} {self._rc()};"
        elif p == 2:
            return f"        {dst} = {random.choice(vl)};"
        elif p == 3:
            a, b = random.sample(vl, min(2, len(vl)))
            return f"        {dst} = {a} {random.choice(self.SAFE_OPS)} {b};"
        else:
            return f"        {dst} = {dst} {random.choice(self.SAFE_OPS)} {random.randint(1,5)};"

    # CHANGED: self-op 차단된 unsafe statement 생성
    def _unsafe_stmt(self, vl):
        """
        unsafe op 문장을 생성하되, 두 피연산자가 같지 않도록 보장한다.
        vl 의 원소가 1개뿐이면 안전한 stmt로 fallback (이론상 거의 없음).
        """
        if len(vl) < 2:
            return self._safe_stmt(vl), False
        a = random.choice(vl)
        others = [v for v in vl if v != a]
        b = random.choice(others)
        op = random.choice(self.UNSAFE_OPS)
        dst = random.choice(vl)
        return f"        {dst} = {a} {op} {b};", True

    # ==================================================================
    # RTPG: Random Test Program Generation
    # ==================================================================

    def gen_rtpg(self, idx):
        """
        반환: (code, actual)
        actual: 실제로 코드에 들어간 feature 의 dict (var_count 포함)
        """
        # CHANGED: 의도(intent) 결정
        intent = {}
        # CHANGED: 실제 삽입 여부를 추적하는 dict (var_count 외에는 모두 False 시작)
        actual = {k: False for k in self.FEATURE_KEYS}

        # 변수 수
        n_vars = random.choices(
            [random.randint(3, 10), random.randint(10, 50),
             random.randint(50, 126), random.randint(127, 140)],
            weights=[50, 30, 15, 5]
        )[0]
        actual["var_count"] = n_vars

        n_stmts = random.randint(2, random.choice([5, 8, 12]))
        loop_bound = random.randint(5, 100)

        # 각 feature ON/OFF 독립 결정 (의도)
        intent["has_float"] = random.random() < 0.15
        intent["has_unsafe_op"] = random.random() < 0.20
        intent["has_mult"] = random.random() < 0.25
        intent["has_if"] = random.random() < 0.40
        intent["has_array"] = random.random() < 0.30
        intent["has_nested_loop"] = random.random() < 0.10
        intent["has_switch"] = random.random() < 0.08
        intent["has_goto"] = random.random() < 0.05
        intent["has_recursion"] = random.random() < 0.08
        intent["has_pointer"] = random.random() < 0.10
        intent["has_double_idx"] = random.random() < 0.08
        intent["has_struct"] = random.random() < 0.08
        intent["has_enum"] = random.random() < 0.05
        intent["has_malloc"] = random.random() < 0.05

        lines = [f"// RTPG_{idx}: vars={n_vars} stmts={n_stmts}"]

        # ---- 재귀 함수 (별도 경로) ----
        if intent["has_recursion"]:
            param = random.choice(["n", "x", "k"])
            lines.append(f"int test_func(int {param}) {{")
            lines.append(f"    if ({param} <= {random.randint(0,2)}) return {random.randint(0,1)};")
            patterns = [
                f"    return test_func({param} - 1) + test_func({param} - 2);",
                f"    return {random.randint(2,5)} * test_func({param} - 1);",
                f"    return test_func({param} - 1) + {self._rc()};",
            ]
            lines.append(random.choice(patterns))
            lines.append("}")
            # CHANGED: 재귀 분기는 has_recursion 만 실제로 들어감,
            # 다른 features 는 모두 False 로 유지 (init 상태)
            actual["has_recursion"] = True
            return "\n".join(lines), actual

        # ---- 전역 선언 ----
        arr_size = random.choice([16, 32, 64])
        if intent["has_array"]:
            lines.append(f"int xn[{arr_size}];")
            lines.append(f"int yo[{arr_size}];")
            actual["has_array"] = True  # CHANGED

        if intent["has_double_idx"]:
            lines.append(f"int idx_arr[{arr_size}];")
            # CHANGED: double_idx 는 실제 접근 패턴이 들어가야 인정 (아래에서 결정)

        if intent["has_struct"]:
            sn = random.choice(["Point", "Data", "Pair", "Node"])
            lines.append(f"struct {sn} {{ int a; int b; }};")
            actual["has_struct"] = True  # CHANGED

        if intent["has_enum"]:
            enums = random.sample(["RED","GREEN","BLUE","ON","OFF","FAST","SLOW"], 3)
            lines.append(f"enum State {{ {', '.join(enums)} }};")
            actual["has_enum"] = True  # CHANGED

        if intent["has_malloc"]:
            lines.append("#include <stdlib.h>")
            # CHANGED: malloc 호출이 실제 들어가야 인정 (아래에서 결정)

        lines.append("void test_func(void) {")

        # ---- 변수 선언 ----
        if n_vars > 60:
            vl = [f"v{i}" for i in range(n_vars)]
            for v in vl:
                lines.append(f"    int {v} = {random.randint(0, 100)};")
            vl = vl[:15]
            # CHANGED: 이 분기는 float 선언이 절대 안 들어가므로 has_float 는 False
        else:
            vl = self._uvars(n_vars)
            for v in vl:
                if intent["has_float"] and random.random() < 0.25:
                    t = random.choice(self.UNSAFE_TYPES)
                    lines.append(f"    {t} {v} = {random.uniform(0,100):.2f};")
                    actual["has_float"] = True  # CHANGED
                else:
                    lines.append(f"    int {v} = {self._rc()};")

        if intent["has_struct"]:
            lines.append(f"    struct {sn} s; s.a = {self._rc()}; s.b = {self._rc()};")
            # has_struct 는 이미 위에서 actual=True (전역 선언 시)

        if intent["has_enum"]:
            lines.append(f"    enum State st = {enums[0]};")

        if intent["has_pointer"]:
            tv = random.choice(vl)
            lines.append(f"    int *ptr = &{tv};")
            actual["has_pointer"] = True  # CHANGED

        if intent["has_malloc"]:
            msz = random.choice([32, 64])
            lines.append(f"    int *darr = (int *)malloc({msz} * sizeof(int));")
            actual["has_malloc"] = True  # CHANGED

        if intent["has_mult"]:
            n_taps = random.randint(2, max(2, min(4, len(vl) // 2)))
            for t in range(n_taps):
                lines.append(f"    int h{t} = {self._rc()};")
                lines.append(f"    int sv{t} = 0;")
            # CHANGED: mult 변수 선언만으로는 부족, 실제 곱셈 연산이 들어가야 인정
            # 아래 일반 루프 분기에서 곱셈을 만든 후에 actual["has_mult"] = True

        lines.append("    int i;")

        # ---- 루프 구조 ----
        if intent["has_nested_loop"]:
            lb2 = random.randint(5, 20)
            lines.append(f"    for (i = 0; i < {loop_bound}; i++) {{")
            lines.append(f"        int j;")
            lines.append(f"        for (j = 0; j < {lb2}; j++) {{")
            for _ in range(n_stmts):
                lines.append(self._safe_stmt(vl))
            lines.append("        }")
            lines.append("    }")
            actual["has_nested_loop"] = True  # CHANGED
            # CHANGED: 이 분기에서는 unsafe_op, mult, if, array, double_idx,
            # goto, malloc, pointer 의 사용 코드가 들어가지 않으므로
            # 위에서 선언만 들어간 것들은 actual 에 잡혀있지만, 실제 사용은 없음.
            # 보수적으로 처리:
            #   - has_array, has_struct, has_enum, has_pointer, has_malloc 은
            #     선언/할당이 들어갔으므로 actual 유지
            #   - has_mult 는 곱셈 사용이 없으므로 False 유지 (이미 init)
            #   - has_unsafe_op, has_if, has_double_idx, has_goto 는 False 유지

        elif intent["has_switch"]:
            sw = random.choice(vl)
            lines.append(f"    for (i = 0; i < {loop_bound}; i++) {{")
            lines.append(f"        switch ({sw}) {{")
            for c in range(random.randint(2, 4)):
                lines.append(f"            case {c}: {random.choice(vl)} = {self._rc()}; break;")
            lines.append("            default: break;")
            lines.append("        }")
            lines.append(f"        {sw} = {sw} + 1;")
            lines.append("    }")
            actual["has_switch"] = True  # CHANGED

        else:
            lb = arr_size if intent["has_array"] else loop_bound
            lines.append(f"    for (i = 0; i < {lb}; i++) {{")

            if intent["has_array"]:
                lines.append(f"        {random.choice(vl)} = xn[i];")
                # has_array 는 이미 위에서 actual=True

            if intent["has_double_idx"]:
                lines.append(f"        {random.choice(vl)} = xn[idx_arr[i]];")
                actual["has_double_idx"] = True  # CHANGED

            for _ in range(n_stmts):
                if intent["has_unsafe_op"] and random.random() < 0.3:
                    # CHANGED: self-op 차단 helper 사용
                    stmt, ok = self._unsafe_stmt(vl)
                    lines.append(stmt)
                    if ok:
                        actual["has_unsafe_op"] = True
                elif intent["has_mult"] and random.random() < 0.3:
                    lines.append(f"        {random.choice(vl)} = {random.choice(vl)} * {self._rc()};")
                    actual["has_mult"] = True  # CHANGED
                else:
                    lines.append(self._safe_stmt(vl))

            if intent["has_pointer"]:
                lines.append(f"        *ptr = *ptr + {random.randint(1,5)};")
                # has_pointer 는 위에서 actual=True

            if intent["has_struct"]:
                lines.append(f"        s.a = s.a + s.b;")

            if intent["has_malloc"]:
                lines.append(f"        darr[i] = {random.choice(vl)};")

            if intent["has_goto"] and random.random() < 0.5:
                lines.append(f"        if ({random.choice(vl)} > {self._rc()}) goto done;")
                actual["has_goto"] = True  # CHANGED

            if intent["has_if"]:
                cv = random.choice(vl)
                lines.append(f"        if ({cv} {random.choice(self.SAFE_CMP)} {random.randint(-50,100)}) {{")
                lines.append(self._safe_stmt(vl))
                lines.append("        }")
                actual["has_if"] = True  # CHANGED

            if intent["has_array"]:
                lines.append(f"        yo[i] = {random.choice(vl)};")

            lines.append("    }")

        # CHANGED: 루프 밖 goto 라벨/free 처리
        if actual["has_goto"]:
            lines.append("done:")
            lines.append(f"    {random.choice(vl)} = 0;")
        if intent["has_malloc"]:
            lines.append("    free(darr);")

        lines.append("}")
        return "\n".join(lines), actual

    # ==================================================================
    # BOUNDARY VALUE ANALYSIS (변경 없음)
    # ==================================================================

    def gen_boundary_all(self):
        tests = []

        for nv in [50, 100, 125, 126]:
            code = self._make_var_count_program(nv)
            tests.append((code, f"C1_varcount_{nv}", "pass", "C1",
                          f"VariableChecker: {nv} vars (within limit)"))
        for nv in [127, 128, 135, 150]:
            code = self._make_var_count_program(nv)
            tests.append((code, f"C1_varcount_{nv}", "reject", "C1",
                          f"VariableChecker: {nv} vars (exceeds limit)"))

        for op, name in [("+","plus"), ("-","minus"), ("*","mult")]:
            code = self._make_op_program(op)
            tests.append((code, f"C3_op_{name}", "pass", "C3",
                          f"OpcodeChecker: supported op '{op}'"))
        for op, name in [("/","div"), ("%","mod"), ("^","xor"), ("&","bitand"), ("|","bitor")]:
            code = self._make_op_program(op)
            tests.append((code, f"C3_op_{name}", "reject", "C3",
                          f"OpcodeChecker: unsupported op '{op}'"))

        for cmp, name in [("<","lt"),(">","gt"),("<=","le"),(">=","ge"),("==","eq"),("!=","ne")]:
            code = self._make_cmp_program(cmp)
            tests.append((code, f"C3_cmp_{name}", "pass", "C3",
                          f"OpcodeChecker: comparison '{cmp}'"))

        code = self._make_type_program("int", "10")
        tests.append((code, "C3_type_int", "pass", "C3", "TypeChecker: int (supported)"))

        for t, val in [("float","1.5"), ("double","2.718")]:
            code = self._make_type_program(t, val)
            tests.append((code, f"C3_type_{t}", "reject", "C3", f"TypeChecker: {t} (unsupported)"))

        for comp in ["struct", "union", "enum"]:
            code = self._make_composite_program(comp)
            tests.append((code, f"C3_type_{comp}", "reject", "C3", f"TypeChecker: {comp} (unsupported)"))

        code = self._make_pointer_program()
        tests.append((code, "C3_type_pointer", "reject", "C3", "TypeChecker: pointer (unsupported)"))

        code = self._make_simple_array_program()
        tests.append((code, "C3_mem_simple_array", "pass", "C3", "MemoryChecker: simple 1D array"))

        code = self._make_double_index_program()
        tests.append((code, "C3_mem_double_idx", "reject", "C3", "MemoryChecker: double indexing"))

        code = self._make_pointer_deref_program()
        tests.append((code, "C3_mem_ptr_deref", "reject", "C3", "MemoryChecker: pointer dereference"))

        code = self._make_single_loop_program()
        tests.append((code, "C4_ctrl_single_for", "pass", "C4", "ControlChecker: single for loop"))

        code = self._make_for_if_program()
        tests.append((code, "C4_ctrl_for_if", "pass", "C4", "ControlChecker: for + if (not nested)"))

        code = self._make_nested_loop_program()
        tests.append((code, "C4_ctrl_nested", "reject", "C4", "ControlChecker: nested loop"))

        code = self._make_switch_program()
        tests.append((code, "C4_ctrl_switch", "reject", "C4", "ControlChecker: switch-case"))

        code = self._make_goto_program()
        tests.append((code, "C4_ctrl_goto", "reject", "C4", "ControlChecker: goto"))

        code = self._make_no_recursion_program()
        tests.append((code, "C4_struct_no_call", "pass", "C4", "StructureChecker: no recursion"))

        code = self._make_recursion_program()
        tests.append((code, "C4_struct_recursion", "reject", "C4", "StructureChecker: direct recursion"))

        return tests

    # ---- Boundary 헬퍼 함수들 (변경 없음) ----

    def _make_var_count_program(self, n):
        lines = [f"// BOUNDARY: {n} variables"]
        lines.append("void test_func(void) {")
        for v in range(n):
            lines.append(f"    int v{v} = {random.randint(0,100)};")
        lines.append("    int i;")
        lines.append("    for (i = 0; i < 10; i++) {")
        for _ in range(random.randint(2, 4)):
            a, b, d = random.randint(0, min(n-1,20)), random.randint(0, min(n-1,20)), random.randint(0, min(n-1,20))
            lines.append(f"        v{d} = v{a} + v{b};")
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_op_program(self, op):
        vl = self._uvars(random.randint(3, 6))
        lines = [f"// BOUNDARY: operator '{op}'", "void test_func(void) {"]
        for v in vl:
            lines.append(f"    int {v} = {self._rc()};")
        lines.append("    int i;")
        lb = random.randint(10, 50)
        lines.append(f"    for (i = 0; i < {lb}; i++) {{")
        a, b = random.sample(vl, 2)
        lines.append(f"        {random.choice(vl)} = {a} {op} {b};")
        lines.append(self._safe_stmt(vl))
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_cmp_program(self, cmp):
        vl = self._uvars(random.randint(3, 5))
        lines = [f"// BOUNDARY: comparison '{cmp}'", "void test_func(void) {"]
        for v in vl:
            lines.append(f"    int {v} = {self._rc()};")
        lines.append("    int i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,80)}; i++) {{")
        lines.append(self._safe_stmt(vl))
        lines.append(f"        if ({random.choice(vl)} {cmp} {random.randint(-50,100)}) {{")
        lines.append(self._safe_stmt(vl))
        lines.append("        }")
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_type_program(self, typename, val):
        lines = [f"// BOUNDARY: type '{typename}'", "void test_func(void) {"]
        lines.append(f"    {typename} x = {val};")
        lines.append(f"    int y = 0, i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,50)}; i++) {{ y = y + 1; }}")
        lines.append("}")
        return "\n".join(lines)

    def _make_composite_program(self, comp):
        lines = [f"// BOUNDARY: composite type '{comp}'"]
        if comp == "struct":
            lines.append("struct S { int a; int b; };")
            lines.append("void test_func(void) {")
            lines.append(f"    struct S s; s.a = {self._rc()}; s.b = {self._rc()};")
            lines.append("    int i;")
            lines.append(f"    for (i = 0; i < {random.randint(10,30)}; i++) {{ s.a = s.a + s.b; }}")
        elif comp == "union":
            lines.append("union U { int i; float f; };")
            lines.append("void test_func(void) {")
            lines.append(f"    union U u; u.i = {self._rc()};")
            lines.append(f"    int x = 0, i;")
            lines.append(f"    for (i = 0; i < {random.randint(10,30)}; i++) {{ x = x + u.i; }}")
        else:
            enums = random.sample(["A","B","C","X","Y","Z"], 3)
            lines.append(f"enum E {{ {', '.join(enums)} }};")
            lines.append("void test_func(void) {")
            lines.append(f"    enum E e = {enums[0]};")
            lines.append(f"    int x = 0, i;")
            lines.append(f"    for (i = 0; i < {random.randint(10,30)}; i++) {{ x = x + 1; }}")
        lines.append("}")
        return "\n".join(lines)

    def _make_pointer_program(self):
        lines = ["// BOUNDARY: pointer type", "void test_func(void) {"]
        lines.append(f"    int x = {self._rc()};")
        lines.append("    int *p = &x;")
        lines.append("    int i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,30)}; i++) {{ *p = *p + 1; }}")
        lines.append("}")
        return "\n".join(lines)

    def _make_simple_array_program(self):
        sz = random.choice([32, 64])
        lines = ["// BOUNDARY: simple 1D array", f"int arr[{sz}]; int out[{sz}];"]
        lines.append("void test_func(void) {")
        lines.append(f"    int tmp, i;")
        lines.append(f"    for (i = 0; i < {sz}; i++) {{")
        lines.append(f"        tmp = arr[i] + {random.randint(1,10)};")
        lines.append(f"        out[i] = tmp;")
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_double_index_program(self):
        sz = random.choice([32, 64])
        lines = ["// BOUNDARY: double indexing", f"int data[{sz}]; int idx[{sz}];"]
        lines.append("void test_func(void) {")
        lines.append(f"    int tmp, i;")
        lines.append(f"    for (i = 0; i < {sz}; i++) {{ tmp = data[idx[i]]; }}")
        lines.append("}")
        return "\n".join(lines)

    def _make_pointer_deref_program(self):
        lines = ["// BOUNDARY: pointer dereference", "void test_func(void) {"]
        lines.append(f"    int arr[{random.randint(16,64)}]; int *p = arr; int i;")
        lines.append(f"    for (i = 0; i < 10; i++) {{ *(p + i) = i; }}")
        lines.append("}")
        return "\n".join(lines)

    def _make_single_loop_program(self):
        vl = self._uvars(random.randint(3, 6))
        lines = ["// BOUNDARY: single for loop", "void test_func(void) {"]
        for v in vl:
            lines.append(f"    int {v} = {self._rc()};")
        lines.append("    int i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,80)}; i++) {{")
        for _ in range(random.randint(2, 5)):
            lines.append(self._safe_stmt(vl))
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_for_if_program(self):
        vl = self._uvars(random.randint(3, 6))
        lines = ["// BOUNDARY: for + if (not nested loop)", "void test_func(void) {"]
        for v in vl:
            lines.append(f"    int {v} = {self._rc()};")
        lines.append("    int i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,80)}; i++) {{")
        lines.append(self._safe_stmt(vl))
        lines.append(f"        if ({random.choice(vl)} {random.choice(self.SAFE_CMP)} {random.randint(0,50)}) {{")
        lines.append(self._safe_stmt(vl))
        lines.append("        }")
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_nested_loop_program(self):
        lines = ["// BOUNDARY: nested loop", "void test_func(void) {"]
        lines.append(f"    int sum = 0, i, j;")
        b1, b2 = random.randint(5, 15), random.randint(5, 15)
        lines.append(f"    for (i = 0; i < {b1}; i++) {{")
        lines.append(f"        for (j = 0; j < {b2}; j++) {{")
        lines.append(f"            sum = sum + i + j;")
        lines.append("        }")
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_switch_program(self):
        lines = ["// BOUNDARY: switch-case", "void test_func(void) {"]
        lines.append(f"    int x = {random.randint(0,5)}, y = 0, i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,50)}; i++) {{")
        lines.append("        switch (x) {")
        for c in range(random.randint(2, 4)):
            lines.append(f"            case {c}: y = y + {random.randint(1,10)}; break;")
        lines.append("            default: y = y + 1; break;")
        lines.append("        }")
        lines.append("        x = x + 1;")
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_goto_program(self):
        lines = ["// BOUNDARY: goto", "void test_func(void) {"]
        lines.append(f"    int x = 0, i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,50)}; i++) {{")
        lines.append("        x = x + 1;")
        lines.append(f"        if (x > {random.randint(10,30)}) goto done;")
        lines.append("    }")
        lines.append("done:")
        lines.append("    x = 0;")
        lines.append("}")
        return "\n".join(lines)

    def _make_no_recursion_program(self):
        vl = self._uvars(random.randint(3, 6))
        lines = ["// BOUNDARY: no recursion", "void test_func(void) {"]
        for v in vl:
            lines.append(f"    int {v} = {self._rc()};")
        lines.append("    int i;")
        lines.append(f"    for (i = 0; i < {random.randint(10,50)}; i++) {{")
        for _ in range(random.randint(2, 4)):
            lines.append(self._safe_stmt(vl))
        lines.append("    }")
        lines.append("}")
        return "\n".join(lines)

    def _make_recursion_program(self):
        param = random.choice(["n", "x", "k"])
        lines = ["// BOUNDARY: direct recursion"]
        lines.append(f"int test_func(int {param}) {{")
        lines.append(f"    if ({param} <= {random.randint(0,2)}) return {random.randint(0,1)};")
        lines.append(f"    return test_func({param} - 1) + test_func({param} - 2);")
        lines.append("}")
        return "\n".join(lines)


# ==================================================================
# MAIN
# ==================================================================

def main():
    parser = argparse.ArgumentParser(description="EOPPP Checker Evaluation Generator")
    parser.add_argument("--rtpg", type=int, default=100, help="RTPG 랜덤 프로그램 수")
    parser.add_argument("--outdir", type=str, default="eval_programs")
    parser.add_argument("--seed", type=int, default=42)
    args = parser.parse_args()

    builder = ProgramBuilder(seed=args.seed)

    for sub in ["rtpg", "boundary"]:
        os.makedirs(os.path.join(args.outdir, sub), exist_ok=True)

    # ================================================================
    # 1. RTPG
    # ================================================================
    rtpg_manifest = []
    feature_counter = defaultdict(int)

    for i in range(args.rtpg):
        # CHANGED: gen_rtpg 가 이제 actual 을 반환
        code, actual = builder.gen_rtpg(i)
        if "int test_func(int" in code:
            code += "\nint main() { test_func(10); return 0; }\n"
        else:
            code += "\nint main() { test_func(); return 0; }\n"
        fname = f"rtpg_{i:03d}.c"
        with open(os.path.join(args.outdir, "rtpg", fname), "w") as f:
            f.write(code + "\n")

        # CHANGED: actual 만으로 feature 태깅
        active = [k for k in builder.FEATURE_KEYS if actual.get(k) is True]
        for feat in active:
            feature_counter[feat] += 1

        feat_str = "+".join(active) if active else "clean"
        rtpg_manifest.append(f"{fname},{actual['var_count']},{feat_str}")

    with open(os.path.join(args.outdir, "rtpg", "manifest.csv"), "w") as f:
        f.write("filename,var_count,features\n")
        for line in rtpg_manifest:
            f.write(line + "\n")

    # ================================================================
    # 2. BOUNDARY (변경 없음)
    # ================================================================
    boundary_tests = builder.gen_boundary_all()
    boundary_manifest = []

    for code, tag, expected, constraint, desc in boundary_tests:
        if "int test_func(int" in code:
            code += "\nint main() { test_func(10); return 0; }\n"
        else:
            code += "\nint main() { test_func(); return 0; }\n"
        fname = f"{tag}.c"
        with open(os.path.join(args.outdir, "boundary", fname), "w") as f:
            f.write(code + "\n")
        boundary_manifest.append(f"{fname},{expected},{constraint},{desc}")

    with open(os.path.join(args.outdir, "boundary", "manifest.csv"), "w") as f:
        f.write("filename,expected,constraint,description\n")
        for line in boundary_manifest:
            f.write(line + "\n")

    # ================================================================
    # SUMMARY
    # ================================================================
    bnd_pass = sum(1 for _, _, e, _, _ in boundary_tests if e == "pass")
    bnd_reject = len(boundary_tests) - bnd_pass

    print(f"{'='*60}")
    print(f" EOPPP Checker Evaluation Generator (PATCHED)")
    print(f"{'='*60}")
    print(f"")
    print(f" [1] RTPG (Egger et al., LCTES 2018)")
    print(f"     Programs:  {args.rtpg}")
    print(f"     Method:    Random generation, actual feature tracking")
    print(f"     Output:    {args.outdir}/rtpg/")
    print(f"     Features observed (actual):")
    for feat, cnt in sorted(feature_counter.items(), key=lambda x: -x[1]):
        pct = 100 * cnt / args.rtpg
        print(f"       {feat:20s}: {cnt:4d} ({pct:5.1f}%)")
    print(f"")
    print(f" [2] Boundary Value Analysis (Myers et al., 2011)")
    print(f"     Programs:  {len(boundary_tests)} ({bnd_pass} pass + {bnd_reject} reject)")
    print(f"     Method:    Constraint boundary pairs")
    print(f"     Output:    {args.outdir}/boundary/")
    print(f"     Constraints covered:")
    for c in ["C1", "C3", "C4"]:
        c_tests = [(t, e) for _, t, e, cn, _ in boundary_tests if cn == c]
        c_pass = sum(1 for _, e in c_tests if e == "pass")
        c_rej = sum(1 for _, e in c_tests if e == "reject")
        print(f"       {c}: {c_pass} pass + {c_rej} reject = {len(c_tests)}")
    print(f"")
    print(f" Total: {args.rtpg + len(boundary_tests)} programs")
    print(f"{'='*60}")


if __name__ == "__main__":
    main()
