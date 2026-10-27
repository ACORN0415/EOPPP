#!/usr/bin/env python3
"""
RTPG 태그 재라벨링 도구 (v2).

거짓 양성이 확인된 3개 태그(has_goto, has_float, has_unsafe_op)에 대해,
manifest.csv와 rtpg_results.csv를 실제 .c 파일 스캔 결과로 정정한다.

설계:
- run_eval.sh는 manifest.csv의 features를 grep으로 가져와 rtpg_results.csv에
  그대로 복사한다. 따라서 manifest.csv가 진짜 데이터 원본이고,
  rtpg_results.csv는 manifest의 사본이다. 두 파일을 동시에 정정하면
  run_eval.sh를 재실행해도 안전하다.
- 검증된 3개 태그(has_goto, has_float, has_unsafe_op)만 손대고,
  거짓 양성 0개로 확인된 다른 태그는 보존한다 (휴리스틱 위험 회피).
- 주석/문자열 리터럴 내부의 키워드를 거짓 양성으로 잡지 않도록 strip_noise를
  먼저 적용한다.
- 정정 결과 미지원 태그가 모두 사라진 행에는 'clean' 태그를 자동 부여한다.

사용 예 (둘 다 정정):
    python3 rtpg_relabel.py \\
        --src          eval_programs/rtpg \\
        --csv          eval_programs/rtpg_results.csv \\
        --out-csv      eval_programs/rtpg_results_relabeled.csv \\
        --manifest     eval_programs/rtpg/manifest.csv \\
        --out-manifest eval_programs/rtpg/manifest_relabeled.csv

사용 예 (manifest만 정정 — 이후 run_eval.sh 재실행 권장):
    python3 rtpg_relabel.py \\
        --src eval_programs/rtpg \\
        --manifest     eval_programs/rtpg/manifest.csv \\
        --out-manifest eval_programs/rtpg/manifest_relabeled.csv

manifest.csv 형식 가정:
- 첫 컬럼: filename, 세 번째 컬럼: features (run_eval.sh의 `cut -d',' -f3`와 일치)
- 헤더 존재 여부는 자동 감지 (첫 행의 첫 컬럼이 'filename'이면 헤더로 간주)
- 다른 컬럼이 있더라도 그대로 보존
"""
from __future__ import annotations

import argparse
import csv
import re
from collections import Counter
from pathlib import Path


# ─────────────────────────────────────────────────────────────────────
# 노이즈 제거 (주석 + 문자열/문자 리터럴 → 공백)
# ─────────────────────────────────────────────────────────────────────
_COMMENT_BLOCK = re.compile(r'/\*.*?\*/', re.DOTALL)
_COMMENT_LINE = re.compile(r'//[^\n]*')
_STRING_LIT   = re.compile(r'"(?:\\.|[^"\\])*"')
_CHAR_LIT     = re.compile(r"'(?:\\.|[^'\\])*'")


def strip_noise(src: str) -> str:
    """C 주석과 문자열/문자 리터럴을 공백으로 치환한다."""
    src = _COMMENT_BLOCK.sub(' ', src)
    src = _COMMENT_LINE.sub(' ', src)
    src = _STRING_LIT.sub(' ', src)
    src = _CHAR_LIT.sub(' ', src)
    return src


# ─────────────────────────────────────────────────────────────────────
# 거짓 양성이 확인된 3개 태그의 실제 존재 여부 판정
# ─────────────────────────────────────────────────────────────────────
def has_goto(s: str) -> bool:
    return bool(re.search(r'\bgoto\b', s))


def has_float(s: str) -> bool:
    return bool(re.search(r'\b(float|double|long\s+double)\b', s))


def has_unsafe_op(s: str) -> bool:
    """
    Unsafe 연산 = 비트 연산(<<, >>, &, |, ^), 나눗셈(/), 모듈로(%).
    논리 연산자(&&, ||)와 복합 대입(/=, %= 등)은 제외.
    포인터 주소 연산자(&var)와 산술 곱셈(*)은 별도 태그라 여기서 제외.
    """
    # 시프트
    if re.search(r'<<(?!=)|>>(?!=)', s):
        return True
    # 비트 AND: 좌측이 식별자/숫자/) 인 단일 & (논리 && 및 주소 연산자 제외)
    for m in re.finditer(r'(?<![&])&(?![&=])', s):
        left = s[max(0, m.start() - 8):m.start()].rstrip()
        if left and (left[-1].isalnum() or left[-1] in '_)]'):
            return True
    # 비트 OR (논리 || 및 |= 제외)
    if re.search(r'(?<![|])\|(?![|=])', s):
        return True
    # XOR (^= 제외)
    if re.search(r'\^(?!=)', s):
        return True
    # 나눗셈 (// /* /= 제외)
    if re.search(r'/(?![/*=])', s):
        return True
    # 모듈로 (%= 제외)
    if re.search(r'%(?!=)', s):
        return True
    return False


# ─────────────────────────────────────────────────────────────────────
# 행 단위 재라벨링
# ─────────────────────────────────────────────────────────────────────
SUSPECT_TAGS = ('has_goto', 'has_float', 'has_unsafe_op')

UNSUPPORTED = {
    'has_goto', 'has_switch', 'has_float', 'has_struct',
    'has_enum', 'has_malloc', 'has_unsafe_op', 'has_pointer',
    'has_nested_loop', 'has_double_idx', 'has_recursion',
}


def relabel_features(features: str, src: str) -> tuple[str, Counter]:
    """
    features 문자열에서 거짓 양성 3개 태그를 검증·제거한다.
    반환: (정정된 features 문자열, 제거된 태그 카운트)
    """
    tags = features.split('+') if features else []
    removed: Counter = Counter()

    if not any(t in tags for t in SUSPECT_TAGS):
        return features, removed

    s = strip_noise(src)
    actual = {
        'has_goto':      has_goto(s),
        'has_float':     has_float(s),
        'has_unsafe_op': has_unsafe_op(s),
    }

    new_tags = []
    for t in tags:
        if t in SUSPECT_TAGS:
            if actual[t]:
                new_tags.append(t)
            else:
                removed[t] += 1
        else:
            new_tags.append(t)

    has_any_unsupported = any(t in UNSUPPORTED for t in new_tags)
    if not has_any_unsupported and 'clean' not in new_tags:
        new_tags.append('clean')
    elif has_any_unsupported and 'clean' in new_tags:
        new_tags = [t for t in new_tags if t != 'clean']

    return '+'.join(new_tags), removed


# ─────────────────────────────────────────────────────────────────────
# CSV 처리 공통 루틴
# ─────────────────────────────────────────────────────────────────────
def is_header_row(first_row: list[str]) -> bool:
    """첫 행이 헤더인지 자동 감지."""
    if not first_row:
        return False
    return first_row[0].strip().lower() == 'filename'


def process_csv(
    in_path: Path,
    out_path: Path,
    src_dir: Path,
    features_col: int,
    label: str,
) -> tuple[int, int, Counter, dict]:
    """
    공통 CSV 정정 루프.
    features_col은 features 컬럼의 0-based 인덱스.
    label은 출력 로그에 쓰는 이름 ('rtpg_results.csv' 또는 'manifest.csv').

    반환: (총 행, 정정된 행, 태그별 제거 카운트, 결과별 태그 분포)
    """
    total = 0
    changed = 0
    missing = 0
    total_removed: Counter = Counter()
    # rtpg_results.csv의 경우 PASS/REJECTED 분포 집계용
    result_tag_dist: dict[str, Counter] = {}

    with in_path.open(newline='') as f_in, out_path.open('w', newline='') as f_out:
        reader = csv.reader(f_in)
        writer = csv.writer(f_out)

        rows = list(reader)
        if not rows:
            print(f"[warn] {label}: empty file")
            return 0, 0, total_removed, result_tag_dist

        start_idx = 0
        if is_header_row(rows[0]):
            writer.writerow(rows[0])
            start_idx = 1

        for row in rows[start_idx:]:
            total += 1
            if len(row) <= max(0, features_col):
                writer.writerow(row)
                continue

            filename = row[0]
            features = row[features_col]
            c_path = src_dir / filename

            if not c_path.is_file():
                missing += 1
                writer.writerow(row)
                continue

            try:
                src = c_path.read_text(errors='replace')
            except OSError as e:
                print(f"[warn] cannot read {c_path}: {e}")
                writer.writerow(row)
                continue

            new_features, removed = relabel_features(features, src)
            if removed:
                changed += 1
                for tag, n in removed.items():
                    total_removed[tag] += n

            row[features_col] = new_features
            writer.writerow(row)

            # rtpg_results.csv 형식이면 result 컬럼(인덱스 1)으로 분포 집계
            if features_col == 2 and len(row) > 1:
                result = row[1]
                bucket = result_tag_dist.setdefault(result, Counter())
                for tag in new_features.split('+') if new_features else []:
                    bucket[tag] += 1

    if missing:
        print(f"[warn] {label}: {missing} .c files not found in {src_dir}")
    return total, changed, total_removed, result_tag_dist


# ─────────────────────────────────────────────────────────────────────
# 메인
# ─────────────────────────────────────────────────────────────────────
def main() -> None:
    ap = argparse.ArgumentParser(description="RTPG tag relabeling tool")
    ap.add_argument('--src', required=True,
                    help=".c 파일 디렉토리 (예: eval_programs/rtpg)")
    ap.add_argument('--csv',          help="입력 rtpg_results.csv")
    ap.add_argument('--out-csv',      help="출력 rtpg_results.csv 경로")
    ap.add_argument('--manifest',     help="입력 manifest.csv")
    ap.add_argument('--out-manifest', help="출력 manifest.csv 경로")
    args = ap.parse_args()

    src_dir = Path(args.src)
    if not src_dir.is_dir():
        raise SystemExit(f"[error] source dir not found: {src_dir}")

    do_csv = bool(args.csv or args.out_csv)
    do_man = bool(args.manifest or args.out_manifest)

    if do_csv and not (args.csv and args.out_csv):
        raise SystemExit("[error] --csv 와 --out-csv 는 함께 지정해야 합니다.")
    if do_man and not (args.manifest and args.out_manifest):
        raise SystemExit("[error] --manifest 와 --out-manifest 는 함께 지정해야 합니다.")
    if not (do_csv or do_man):
        raise SystemExit("[error] --csv/--out-csv 또는 --manifest/--out-manifest 중 하나는 지정해야 합니다.")

    # ── manifest.csv 처리 ──
    if do_man:
        in_p, out_p = Path(args.manifest), Path(args.out_manifest)
        if not in_p.is_file():
            raise SystemExit(f"[error] manifest not found: {in_p}")
        print(f"[1/2] Processing manifest: {in_p}")
        # manifest 형식: filename,?,features,... (run_eval.sh의 cut -f3과 일치)
        total, changed, removed, _ = process_csv(
            in_p, out_p, src_dir, features_col=2, label='manifest.csv'
        )
        print_section('manifest.csv', total, changed, removed, {})
        print(f"  → wrote {out_p}")
        print()

    # ── rtpg_results.csv 처리 ──
    if do_csv:
        in_p, out_p = Path(args.csv), Path(args.out_csv)
        if not in_p.is_file():
            raise SystemExit(f"[error] csv not found: {in_p}")
        print(f"[2/2] Processing results: {in_p}")
        total, changed, removed, dist = process_csv(
            in_p, out_p, src_dir, features_col=2, label='rtpg_results.csv'
        )
        print_section('rtpg_results.csv', total, changed, removed, dist)
        print(f"  → wrote {out_p}")


def print_section(label: str, total: int, changed: int, removed: Counter, dist: dict) -> None:
    print("=" * 60)
    print(f" {label} — Relabeling Summary")
    print("=" * 60)
    print(f"  Total rows:   {total}")
    if total:
        print(f"  Rows changed: {changed}  ({changed*100/total:.2f}%)")
    print()
    print("  False positives removed (by tag):")
    if removed:
        for tag, n in sorted(removed.items(), key=lambda x: -x[1]):
            print(f"    {tag:18s} {n}")
    else:
        print("    (none)")
    if dist:
        print()
        for result, counter in sorted(dist.items()):
            print(f"  Post-relabel tag distribution ({result} rows):")
            for tag, n in sorted(counter.items(), key=lambda x: -x[1]):
                print(f"    {tag:18s} {n}")
    print("=" * 60)


if __name__ == '__main__':
    main()
