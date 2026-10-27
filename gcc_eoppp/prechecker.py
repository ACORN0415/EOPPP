#!/usr/bin/env python3
"""
prechecker.py — C 소스 코드 사전 검사

GCC가 GIMPLE 변환 시 제거/변환하는 패턴을 소스 레벨에서 감지:
  1. 변수 선언 수 > 126 → reject (GCC SSA가 변수를 줄여서 checker가 못 잡음)
  2. goto 키워드 → reject (GCC가 goto를 GimpleCond로 변환해서 checker가 못 잡음)

사용법:
  python3 prechecker.py <source.c>
  종료코드: 0 = PASS, 1 = REJECT
"""

import re
import sys

# 선언 수 기준의 보수적 1차 필터: 사용자 변수 126개(r0~r125) + 루프 카운터 1개.
# 실제 코어 사용량은 GIMPLE 단계의 VariableChecker와 생성기 할당 검사가 확정한다.
MAX_VARS = 127


def remove_comments(code):
    """C 주석 제거 (/* */ 및 //)"""
    # block comments
    code = re.sub(r'/\*.*?\*/', '', code, flags=re.DOTALL)
    # line comments
    code = re.sub(r'//.*?$', '', code, flags=re.MULTILINE)
    return code


def remove_strings(code):
    """문자열 리터럴 제거 (goto가 문자열 안에 있을 수 있음)"""
    code = re.sub(r'"(?:[^"\\]|\\.)*"', '""', code)
    code = re.sub(r"'(?:[^'\\]|\\.)*'", "''", code)
    return code


def count_variable_declarations(code):
    """함수 내 변수 선언 수 카운트 (대략적)"""
    # int/long/short/unsigned/signed/char 타입의 변수 선언 찾기
    # 전역 변수는 제외 (중괄호 안의 선언만 카운트)
    types = r'\b(?:int|long|short|unsigned|signed|char|_Bool)\b'

    # 함수 본문 내 선언만 카운트
    total_vars = 0
    # 각 선언문에서 콤마로 구분된 변수 수 카운트
    for line in code.split('\n'):
        line = line.strip()
        if not line:
            continue
        # 타입으로 시작하는 선언문
        if re.match(types, line):
            # 함수 선언/정의(괄호 포함)는 제외
            if '(' in line and ')' in line:
                continue
            # 콤마 수 + 1 = 변수 수 (대략적)
            # 단, 초기화에 포함된 콤마는 제외하기 어려우므로
            # 세미콜론으로 끝나는 선언문의 변수 수를 센다
            if ';' in line:
                # = 이전의 콤마만 카운트 (초기화 제외)
                decl_part = line.split(';')[0]
                # 배열 선언의 {} 안 콤마 제거
                decl_part = re.sub(r'\{[^}]*\}', '', decl_part)
                # 타입 키워드 제거
                decl_part = re.sub(types, '', decl_part).strip()
                if decl_part:
                    vars_in_line = decl_part.count(',') + 1
                    total_vars += vars_in_line

    return total_vars


def has_goto(code):
    """goto 키워드 감지"""
    # 단어 경계로 goto 찾기 (변수명에 goto가 포함된 경우 제외)
    return bool(re.search(r'\bgoto\b', code))


def precheck(filepath):
    """소스 파일 사전 검사. (passed, errors) 반환"""
    errors = []

    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            raw_code = f.read()
    except Exception as e:
        return False, [f"Cannot read file: {e}"]

    # 주석/문자열 제거 후 검사
    clean = remove_comments(raw_code)
    clean = remove_strings(clean)

    # 1. goto 감지
    if has_goto(clean):
        errors.append("Unsupported control flow: goto detected in source")

    # 2. 변수 선언 수 검사
    var_count = count_variable_declarations(clean)
    if var_count > MAX_VARS:
        errors.append(
            f"Variable count exceeded: {var_count} declarations "
            f"(max {MAX_VARS})"
        )

    passed = len(errors) == 0
    return passed, errors


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <source.c>")
        sys.exit(2)

    filepath = sys.argv[1]
    passed, errors = precheck(filepath)

    if passed:
        sys.exit(0)
    else:
        for err in errors:
            print(f"[PreChecker] {err}")
        sys.exit(1)