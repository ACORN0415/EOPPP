#!/usr/bin/env python3
"""
RTPG (Random Test Program Generation) for EOPPP Checker — v3

v2 대비 수정:
  - has_array를 전역 배열로 선언 (이전: 지역 배열).
    이전 버전의 지역 배열은 GCC가 `Constructor` 노드와 `Write conflict: arr`를
    발생시켜 체커가 OpcodeChecker/ConflictChecker로 거부했음.
    EOPPP의 FIR/피보나치 골든 레퍼런스도 전역 배열을 사용하므로
    체커가 받아들이는 패턴과 일치.

  - 배열 이름을 프로그램별 고유(`__arr_<idx>`)로 분리하여 충돌 방지.

Usage:
    python3 gen_rtpg.py [count] [output_dir]
    python3 gen_rtpg.py 10000 rtpg_eval/programs
"""
import os
import sys
import random


N = int(sys.argv[1]) if len(sys.argv) > 1 else 10000
OUTDIR = sys.argv[2] if len(sys.argv) > 2 else "rtpg_eval/programs"
os.makedirs(OUTDIR, exist_ok=True)


# EOPPP Section 5 기준 분류
SUPPORTED = [
    "has_add", "has_sub", "has_mult", "has_const",
    "has_if", "has_for", "has_array","has_shift",
]

UNSUPPORTED = [
    "has_float", "has_pointer", "has_struct", "has_union",
    "has_enum", "has_malloc",
    "has_goto", "has_switch", "has_nested_loop",
    "has_double_idx", "has_recursion",
     "has_unsafe_op",
]


def _pick_two_distinct(vl):
    a = random.choice(vl)
    others = [v for v in vl if v != a]
    b = random.choice(others) if others else a
    return a, b


def gen_supported_snippet(tag, vl):
    """
    지원 기능 snippet. `i` 변수는 함수 상단에 이미 선언되어 있다고 가정.
    has_array는 gen_program에서 직접 처리하므로 여기서는 빈 리스트 반환.
    """
    a = random.choice(vl)
    b = random.choice(vl)
    if tag == "has_add":
        return [f"    {a} = {a} + {b};"]
    elif tag == "has_sub":
        a, b = _pick_two_distinct(vl)
        if a == b:
            return [f"    {a} = {a} + 1;"]
        return [f"    {a} = {a} - {b};"]
    elif tag == "has_mult":
        return [f"    {a} = {a} * {random.randint(2, 10)};"]
    elif tag == "has_const":
        return [f"    {a} = {random.randint(0, 100)};"]
    elif tag == "has_if":
        return [f"    if ({a} > {b}) {{ {a} = {b}; }}"]
    elif tag == "has_for":
        return [
            f"    for (i = 0; i < {random.randint(5, 20)}; i++) {{",
            f"        {a} = {a} + {b};",
            f"    }}",
        ]
    elif tag == "has_array":
        return []  # gen_program에서 직접 처리 (전역 선언 필요)
    return []


def gen_unsupported_snippet(tag, vl):
    """반환: (lines, needs_stdlib, needs_helper)"""
    a = random.choice(vl)

    if tag == "has_float":
        return ([
            f"    float __f = 1.5f;",
            f"    __f = __f + 1.0f;",
        ], False, False)

    elif tag == "has_pointer":
        return ([
            f"    int *__p = &{a};",
            f"    *__p = *__p + 1;",
        ], False, False)

    elif tag == "has_struct":
        return ([
            f"    struct __S {{ int a; int b; }};",
            f"    struct __S __s; __s.a = {a}; __s.b = {a} + 1;",
        ], False, False)

    elif tag == "has_union":
        return ([
            f"    union __U {{ int x; float y; }};",
            f"    union __U __u; __u.x = {a};",
        ], False, False)

    elif tag == "has_enum":
        return ([
            f"    enum __Color {{ __RED, __GREEN, __BLUE }};",
            f"    enum __Color __c = __RED;",
            f"    {a} = (int)__c;",
        ], False, False)

    elif tag == "has_malloc":
        return ([
            f"    int *__pm = (int *)malloc(sizeof(int) * 10);",
            f"    __pm[0] = {a};",
            f"    free(__pm);",
        ], True, False)

    elif tag == "has_goto":
        return ([
            f"    if ({a} > 0) goto __skip;",
            f"    {a} = 999;",
            f"__skip:",
            f"    {a} = {a} + 1;",
        ], False, False)

    elif tag == "has_switch":
        return ([
            f"    switch ({a}) {{",
            f"        case 0: {a} = 1; break;",
            f"        case 1: {a} = 2; break;",
            f"        default: {a} = 0; break;",
            f"    }}",
        ], False, False)

    elif tag == "has_nested_loop":
        return ([
            f"    {{ int __j;",
            f"      for (i = 0; i < 5; i++) {{",
            f"          for (__j = 0; __j < 5; __j++) {{ {a} = {a} + 1; }}",
            f"      }} }}",
        ], False, False)

    elif tag == "has_double_idx":
        # 이중 인덱스도 전역으로 (Constructor 문제 회피)
        return ([
            f"    {a} = __arr_didx[__idx_didx[0]];",
        ], False, False)

    elif tag == "has_recursion":
        return ([
            f"    {a} = __helper({a});",
        ], False, True)

    elif tag == "has_unsafe_op":
        a, b = _pick_two_distinct(vl)
        if a == b:
            return ([], False, False)
        op = random.choice(["/", "%", "&", "|", "^"])
        if op in ("/", "%"):
            return ([f"    {a} = {a} {op} ({b} + 1);"], False, False)
        return ([f"    {a} = {a} {op} {b};"], False, False)

    elif tag == "has_shift":
        op = random.choice(["<<", ">>"])
        return ([f"    {a} = {a} {op} {random.randint(1, 4)};"], False, False)

    return ([], False, False)


def gen_program(idx):
    features = set()
    needs_stdlib = False
    needs_helper = False
    needs_array = False         # has_array용 전역 선언 필요
    needs_didx = False          # has_double_idx용 전역 선언 필요

    arr_name = f"__arr_{idx}"   # 프로그램별 고유 배열 이름

    # 변수 선언
    nv = random.randint(3, 8)
    var_lines = [f"    int v{i} = {random.randint(0, 100)};" for i in range(nv)]
    vl = [f"v{i}" for i in range(nv)]
    var_lines.append("    int i;")

    body_lines = []
    is_pure = random.random() < 0.30

    # 지원 기능
    n_sup = random.randint(1, 4 if is_pure else 3)
    for tag in random.sample(SUPPORTED, k=min(n_sup, len(SUPPORTED))):
        features.add(tag)
        if tag == "has_array":
            needs_array = True
            a = random.choice(vl)
            body_lines.append(
                f"    for (i = 0; i < 10; i++) {{ {arr_name}[i] = {a} + i; }}"
            )
        else:
            body_lines += gen_supported_snippet(tag, vl)

    # 미지원 기능
    if not is_pure:
        n_unsup = random.randint(1, 3)
        for tag in random.sample(UNSUPPORTED, k=min(n_unsup, len(UNSUPPORTED))):
            snippet, sl, nh = gen_unsupported_snippet(tag, vl)
            if snippet:
                features.add(tag)
                body_lines += snippet
                if sl:
                    needs_stdlib = True
                if nh:
                    needs_helper = True
                if tag == "has_double_idx":
                    needs_didx = True

    body_lines.append(f"    return v0;")

    # ── 프로그램 조립 ──
    header = []
    if needs_stdlib:
        header.append("#include <stdlib.h>")
    if needs_helper:
        header.append("int __helper(int n) {")
        header.append("    if (n <= 1) return n;")
        header.append("    return __helper(n - 1) + __helper(n - 2);")
        header.append("}")
    if needs_array:
        header.append(f"int {arr_name}[10];")
    if needs_didx:
        header.append(f"int __arr_didx[10];")
        header.append(f"int __idx_didx[10];")

    code = ""
    if header:
        code = "\n".join(header) + "\n"
    code += "int test_func(void) {\n"
    code += "\n".join(var_lines) + "\n"
    code += "\n".join(body_lines) + "\n"
    code += "}\n"
    code += "int main(void) { return test_func(); }\n"

    return code, features


def main():
    manifest_path = os.path.join(OUTDIR, "manifest.csv")
    with open(manifest_path, "w") as mf:
        mf.write("filename,expected,features\n")
        for i in range(N):
            code, features = gen_program(i)
            fname = f"rtpg_{i:05d}.c"
            with open(os.path.join(OUTDIR, fname), "w") as f:
                f.write(code)

            has_unsup = bool(features & set(UNSUPPORTED))
            expected = "reject" if has_unsup else "pass"

            ftags = "+".join(sorted(features)) if features else "clean"
            mf.write(f"{fname},{expected},{ftags}\n")

            if (i + 1) % 1000 == 0:
                print(f"  Generated {i + 1}/{N} programs")

    print(f"Done: {N} programs in {OUTDIR}/")
    print(f"Manifest: {manifest_path}")


if __name__ == "__main__":
    main()