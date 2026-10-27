#!/usr/bin/env python3
"""
rtpg_label_v1.py — RTPG 프로그램의 v1.0 지원 여부를 C 소스에서 직접 판정한다.

기존 manifest.csv 의 expected 는 C 기능 태그(미지원 기능 포함 여부)만 본다.
v1.0 컴파일러는 생성된 MIF가 C 의미를 그대로 재현할 때만 프로그램을 받으므로,
태그만으로는 드러나지 않는 두 가지 구조 조건이 지원 범위에 추가된다.

  1. 계산 루프는 함수당 하나 (GPC 연산 슬롯 하나 = 루프 하나)
  2. 반환 변수를 마지막 루프 뒤에서 다시 대입하지 않는다
     (루프 이후 코드는 매핑되지 않는다; 루프 이전 코드는 상수로 접힌다)

판정은 컴파일러와 독립적으로 소스 텍스트만 본다 (순환 판정 방지).
RTPG 생성기(gen_rtpg.py)의 고정된 코드 형태를 전제로 한다.

Usage:
  python3 rtpg_label_v1.py [--src rtpg_eval/programs] [--out rtpg_eval/programs/manifest_v1.csv]
"""

import argparse
import csv
import os
import re


def body_lines(src):
    m = re.search(r"int test_func\(void\)\s*\{\n(.*?)\n\}\nint main", src, re.S)
    return m.group(1).splitlines() if m else []


def loop_spans(lines):
    """[(시작 줄, 끝 줄)] — 한 줄 루프(has_array)와 여러 줄 루프(has_for) 모두."""
    spans, i = [], 0
    while i < len(lines):
        if re.search(r"\bfor\s*\(", lines[i]):
            if lines[i].rstrip().endswith("}"):
                spans.append((i, i))
            else:
                depth, j = 0, i
                while j < len(lines):
                    depth += lines[j].count("{") - lines[j].count("}")
                    if depth <= 0 and j > i:
                        break
                    j += 1
                spans.append((i, j))
                i = j
        i += 1
    return spans


def label(src, expected_tag):
    if expected_tag != "pass":
        return "reject", "unsupported feature tag"
    lines = body_lines(src)
    spans = loop_spans(lines)
    if len(spans) > 1:
        return "reject", f"{len(spans)} loops (one loop per GPC slot)"
    ret = None
    for ln in lines:
        m = re.match(r"\s*return\s+(v\d+)\s*;", ln)
        if m:
            ret = m.group(1)
    if spans and ret:
        after = lines[spans[-1][1] + 1:]
        # 자기 대입(v0 = v0;)은 값이 바뀌지 않으므로 제외
        if any(re.search(rf"\b{ret}\s*=(?!=)(?!\s*{ret}\s*;)", ln) for ln in after if "return" not in ln):
            return "reject", f"return value '{ret}' assigned after the loop"
    return "pass", ""


def main():
    here = os.path.dirname(os.path.abspath(__file__))
    ap = argparse.ArgumentParser()
    ap.add_argument("--src", default=os.path.join(here, "rtpg_eval/programs"))
    ap.add_argument("--out", default=None)
    a = ap.parse_args()
    out = a.out or os.path.join(a.src, "manifest_v1.csv")

    rows, changed = [], 0
    with open(os.path.join(a.src, "manifest.csv")) as f:
        for row in csv.DictReader(f):
            src = open(os.path.join(a.src, row["filename"])).read()
            exp, why = label(src, row["expected"])
            changed += exp != row["expected"]
            rows.append({"filename": row["filename"], "expected": exp,
                         "features": row["features"], "v0_expected": row["expected"],
                         "v1_reason": why})
    with open(out, "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0]))
        w.writeheader()
        w.writerows(rows)
    n_pass = sum(r["expected"] == "pass" for r in rows)
    print(f"{len(rows)} programs: pass {n_pass}, reject {len(rows) - n_pass} "
          f"({changed} relabeled pass -> reject)")
    reasons = {}
    for r in rows:
        if r["v0_expected"] == "pass" and r["expected"] == "reject":
            key = re.sub(r"'v\d+'", "'vX'", re.sub(r"^\d+ loops", "N loops", r["v1_reason"]))
            reasons[key] = reasons.get(key, 0) + 1
    for k, v in sorted(reasons.items(), key=lambda kv: -kv[1]):
        print(f"  {v:>5}  {k}")
    print(f"written: {out}")


if __name__ == "__main__":
    main()
