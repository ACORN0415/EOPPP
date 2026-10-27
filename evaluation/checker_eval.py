#!/usr/bin/env python3
"""
EOPPP Checker Evaluation Code Generator

Two methodologies:
  1. RTPG (Random Test Program Generation)
     Based on: Egger et al., "Verification of Coarse-Grained
     Reconfigurable Arrays through Random Test Programs," LCTES 2018.
     → 랜덤 프로그램 생성, 사전 분류 없음, 실행 후 분석

  2. Boundary Value Analysis
     Based on: Myers et al., "The Art of Software Testing," 3rd Ed., 2011.
     → 제약 경계에서 pass/reject 쌍 생성, 예상 결과 있음

Usage:
  python3 checker_eval.py --rtpg 100 --outdir eval_programs/
  python3 checker_eval.py --rtpg 200 --seed 123 --outdir eval_programs/
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

    # ==================================================================
    # RTPG: Random Test Program Generation
    #
    # Egger et al. (2018) 방식:
    #   - 하드웨어 지원 범위 내외의 구문을 랜덤 확률로 혼합
    #   - 사전 분류하지 않음 (pass/reject 모름)
    #   - Checker 실행 후 결과를 수집하여 분석
    #   - 각 프로그램에 어떤 feature가 포함되었는지 태깅
    # ==================================================================

    def gen_rtpg(self, idx):
        """
        완전 랜덤 C 프로그램 생성.
        지원/미지원 구문이 독립 확률로 혼합됨.
        반환: (code, features_dict)
        features_dict: 이 프로그램에 포함된 feature 목록
        """
        features = {}

        # 변수 수 결정 (C1 경계 근처도 확률적으로 포함)
        n_vars = random.choices(
            [random.randint(3, 10), random.randint(10, 50),
             random.randint(50, 126), random.randint(127, 140)],
            weights=[50, 30, 15, 5]
        )[0]
        features["var_count"] = n_vars

        n_stmts = random.randint(2, random.choice([5, 8, 12]))
        loop_bound = random.randint(5, 100)

        # 각 feature ON/OFF 독립 결정
        features["has_float"] = random.random() < 0.15
        features["has_unsafe_op"] = random.random() < 0.20
        features["has_mult"] = random.random() < 0.25
        features["has_if"] = random.random() < 0.40
        features["has_array"] = random.random() < 0.30
        features["has_nested_loop"] = random.random() < 0.10
        features["has_switch"] = random.random() < 0.08
        features["has_goto"] = random.random() < 0.05
        features["has_recursion"] = random.random() < 0.08
        features["has_pointer"] = random.random() < 0.10
        features["has_double_idx"] = random.random() < 0.08
        features["has_struct"] = random.random() < 0.08
        features["has_enum"] = random.random() < 0.05
        features["has_malloc"] = random.random() < 0.05

        lines = [f"// RTPG_{idx}: vars={n_vars} stmts={n_stmts}"]

        # ---- 재귀 함수 (별도 경로) ----
        if features["has_recursion"]:
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
            return "\n".join(lines), features

        # ---- 전역 선언 ----
        arr_size = random.choice([16, 32, 64])
        if features["has_array"]:
            lines.append(f"int xn[{arr_size}];")
            lines.append(f"int yo[{arr_size}];")
        if features["has_double_idx"]:
            lines.append(f"int idx_arr[{arr_size}];")
        if features["has_struct"]:
            sn = random.choice(["Point", "Data", "Pair", "Node"])
            lines.append(f"struct {sn} {{ int a; int b; }};")
        if features["has_enum"]:
            enums = random.sample(["RED","GREEN","BLUE","ON","OFF","FAST","SLOW"], 3)
            lines.append(f"enum State {{ {', '.join(enums)} }};")
        if features["has_malloc"]:
            lines.append("#include <stdlib.h>")

        lines.append("void test_func(void) {")

        # ---- 변수 선언 ----
        if n_vars > 60:
            vl = [f"v{i}" for i in range(n_vars)]
            for v in vl:
                lines.append(f"    int {v} = {random.randint(0, 100)};")
            vl = vl[:15]  # 이후 문장에서는 앞 15개만 사용
        else:
            vl = self._uvars(n_vars)
            for v in vl:
                if features["has_float"] and random.random() < 0.25:
                    t = random.choice(self.UNSAFE_TYPES)
                    lines.append(f"    {t} {v} = {random.uniform(0,100):.2f};")
                else:
                    lines.append(f"    int {v} = {self._rc()};")

        if features["has_struct"]:
            lines.append(f"    struct {sn} s; s.a = {self._rc()}; s.b = {self._rc()};")
        if features["has_enum"]:
            lines.append(f"    enum State st = {enums[0]};")
        if features["has_pointer"]:
            tv = random.choice(vl)
            lines.append(f"    int *ptr = &{tv};")
        if features["has_malloc"]:
            msz = random.choice([32, 64])
            lines.append(f"    int *darr = (int *)malloc({msz} * sizeof(int));")

        if features["has_mult"]:
            n_taps = random.randint(2, max(2, min(4, len(vl) // 2)))
            for t in range(n_taps):
                lines.append(f"    int h{t} = {self._rc()};")
                lines.append(f"    int sv{t} = 0;")

        lines.append("    int i;")

        # ---- 루프 구조 ----
        if features["has_nested_loop"]:
            lb2 = random.randint(5, 20)
            lines.append(f"    for (i = 0; i < {loop_bound}; i++) {{")
            lines.append(f"        int j;")
            lines.append(f"        for (j = 0; j < {lb2}; j++) {{")
            for _ in range(n_stmts):
                lines.append(self._safe_stmt(vl))
            lines.append("        }")
            lines.append("    }")

        elif features["has_switch"]:
            sw = random.choice(vl)
            lines.append(f"    for (i = 0; i < {loop_bound}; i++) {{")
            lines.append(f"        switch ({sw}) {{")
            for c in range(random.randint(2, 4)):
                lines.append(f"            case {c}: {random.choice(vl)} = {self._rc()}; break;")
            lines.append("            default: break;")
            lines.append("        }")
            lines.append(f"        {sw} = {sw} + 1;")
            lines.append("    }")

        else:
            lb = arr_size if features["has_array"] else loop_bound
            lines.append(f"    for (i = 0; i < {lb}; i++) {{")

            if features["has_array"]:
                lines.append(f"        {random.choice(vl)} = xn[i];")
            if features["has_double_idx"]:
                lines.append(f"        {random.choice(vl)} = xn[idx_arr[i]];")

            for _ in range(n_stmts):
                if features["has_unsafe_op"] and random.random() < 0.3:
                    a, b = random.choice(vl), random.choice(vl)
                    op = random.choice(self.UNSAFE_OPS)
                    lines.append(f"        {random.choice(vl)} = {a} {op} {b};")
                elif features["has_mult"] and random.random() < 0.3:
                    lines.append(f"        {random.choice(vl)} = {random.choice(vl)} * {self._rc()};")
                else:
                    lines.append(self._safe_stmt(vl))

            if features["has_pointer"]:
                lines.append(f"        *ptr = *ptr + {random.randint(1,5)};")
            if features["has_struct"]:
                lines.append(f"        s.a = s.a + s.b;")
            if features["has_malloc"]:
                lines.append(f"        darr[i] = {random.choice(vl)};")

            if features["has_goto"] and random.random() < 0.5:
                lines.append(f"        if ({random.choice(vl)} > {self._rc()}) goto done;")

            if features["has_if"]:
                cv = random.choice(vl)
                lines.append(f"        if ({cv} {random.choice(self.SAFE_CMP)} {random.randint(-50,100)}) {{")
                lines.append(self._safe_stmt(vl))
                lines.append("        }")

            if features["has_array"]:
                lines.append(f"        yo[i] = {random.choice(vl)};")

            lines.append("    }")

        if features["has_goto"]:
            lines.append("done:")
            lines.append(f"    {random.choice(vl)} = 0;")
        if features["has_malloc"]:
            lines.append("    free(darr);")

        lines.append("}")
        return "\n".join(lines), features

    # ==================================================================
    # BOUNDARY VALUE ANALYSIS
    #
    # Myers et al. (2011) 방식:
    #   - 각 제약(C1~C4)의 경계에서 pass/reject 쌍 생성
    #   - 경계 바로 안(pass)과 바로 밖(reject)
    #   - 예상 결과가 명확함
    # ==================================================================

    def gen_boundary_all(self):
        """
        모든 Checker의 경계값 테스트를 생성합니다.
        반환: [(code, tag, expected_result, constraint, description)]
        expected_result: "pass" or "reject"
        """
        tests = []

        # ============================================================
        # C1: Core Count (VariableChecker)
        # 경계: 126개 이하 pass, 127개 이상 reject
        # ============================================================
        for nv in [50, 100, 125, 126]:
            code = self._make_var_count_program(nv)
            tests.append((code, f"C1_varcount_{nv}", "pass", "C1",
                          f"VariableChecker: {nv} vars (within limit)"))
        for nv in [127, 128, 135, 150]:
            code = self._make_var_count_program(nv)
            tests.append((code, f"C1_varcount_{nv}", "reject", "C1",
                          f"VariableChecker: {nv} vars (exceeds limit)"))

        # ============================================================
        # C3: Instruction Set (OpcodeChecker)
        # 경계: 지원 연산 vs 미지원 연산
        # ============================================================
        for op, name in [("+","plus"), ("-","minus"), ("*","mult")]:
            code = self._make_op_program(op)
            tests.append((code, f"C3_op_{name}", "pass", "C3",
                          f"OpcodeChecker: supported op '{op}'"))
        for op, name in [("/","div"), ("%","mod"), ("^","xor"), ("&","bitand"), ("|","bitor")]:
            code = self._make_op_program(op)
            tests.append((code, f"C3_op_{name}", "reject", "C3",
                          f"OpcodeChecker: unsupported op '{op}'"))

        # C3: Comparison operators (all should pass)
        for cmp, name in [("<","lt"),(">","gt"),("<=","le"),(">=","ge"),("==","eq"),("!=","ne")]:
            code = self._make_cmp_program(cmp)
            tests.append((code, f"C3_cmp_{name}", "pass", "C3",
                          f"OpcodeChecker: comparison '{cmp}'"))

        # ============================================================
        # C3: Type (TypeChecker)
        # 경계: int pass, float/double/pointer/struct/union/enum reject
        # ============================================================
        code = self._make_type_program("int", "10")
        tests.append((code, "C3_type_int", "pass", "C3", "TypeChecker: int (supported)"))

        for t, val in [("float","1.5"), ("double","2.718")]:
            code = self._make_type_program(t, val)
            tests.append((code, f"C3_type_{t}", "reject", "C3", f"TypeChecker: {t} (unsupported)"))

        for comp in ["struct", "union", "enum"]:
            code = self._make_composite_program(comp)
            tests.append((code, f"C3_type_{comp}", "reject", "C3", f"TypeChecker: {comp} (unsupported)"))

        # pointer
        code = self._make_pointer_program()
        tests.append((code, "C3_type_pointer", "reject", "C3", "TypeChecker: pointer (unsupported)"))

        # ============================================================
        # C3: Memory (MemoryChecker)
        # 경계: 단순 배열 pass, 이중 인덱스/포인터 역참조 reject
        # ============================================================
        code = self._make_simple_array_program()
        tests.append((code, "C3_mem_simple_array", "pass", "C3", "MemoryChecker: simple 1D array"))

        code = self._make_double_index_program()
        tests.append((code, "C3_mem_double_idx", "reject", "C3", "MemoryChecker: double indexing"))

        code = self._make_pointer_deref_program()
        tests.append((code, "C3_mem_ptr_deref", "reject", "C3", "MemoryChecker: pointer dereference"))

        # ============================================================
        # C4: GPC Structure (ControlChecker)
        # 경계: 단일 for pass, 중첩 for/switch/goto reject
        # ============================================================
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

        # ============================================================
        # C4: Structure (StructureChecker)
        # 경계: 비재귀 pass, 재귀 reject
        # ============================================================
        code = self._make_no_recursion_program()
        tests.append((code, "C4_struct_no_call", "pass", "C4", "StructureChecker: no recursion"))

        code = self._make_recursion_program()
        tests.append((code, "C4_struct_recursion", "reject", "C4", "StructureChecker: direct recursion"))

        return tests

    # ---- Boundary 헬퍼 함수들 ----

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
        code, features = builder.gen_rtpg(i)
        # main() 래퍼 추가: main.py가 main() 내 호출을 찾아 처리
        if "int test_func(int" in code:
            code += "\nint main() { test_func(10); return 0; }\n"
        else:
            code += "\nint main() { test_func(); return 0; }\n"
        fname = f"rtpg_{i:03d}.c"
        with open(os.path.join(args.outdir, "rtpg", fname), "w") as f:
            f.write(code + "\n")

        # feature 태깅
        active = [k for k, v in features.items() if v is True]
        for feat in active:
            feature_counter[feat] += 1

        feat_str = "+".join(active) if active else "clean"
        rtpg_manifest.append(f"{fname},{features['var_count']},{feat_str}")

    # RTPG manifest
    with open(os.path.join(args.outdir, "rtpg", "manifest.csv"), "w") as f:
        f.write("filename,var_count,features\n")
        for line in rtpg_manifest:
            f.write(line + "\n")

    # ================================================================
    # 2. BOUNDARY
    # ================================================================
    boundary_tests = builder.gen_boundary_all()
    boundary_manifest = []

    for code, tag, expected, constraint, desc in boundary_tests:
        # main() 래퍼 추가
        if "int test_func(int" in code:
            code += "\nint main() { test_func(10); return 0; }\n"
        else:
            code += "\nint main() { test_func(); return 0; }\n"
        fname = f"{tag}.c"
        with open(os.path.join(args.outdir, "boundary", fname), "w") as f:
            f.write(code + "\n")
        boundary_manifest.append(f"{fname},{expected},{constraint},{desc}")

    # Boundary manifest
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
    print(f" EOPPP Checker Evaluation Generator")
    print(f"{'='*60}")
    print(f"")
    print(f" [1] RTPG (Egger et al., LCTES 2018)")
    print(f"     Programs:  {args.rtpg}")
    print(f"     Method:    Random generation, no pre-classification")
    print(f"     Output:    {args.outdir}/rtpg/")
    print(f"     Features observed:")
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
