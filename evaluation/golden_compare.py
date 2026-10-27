#!/usr/bin/env python3
"""
EOPPP Golden Reference MIF Comparator

수작업 MIF(golden)와 컴파일러 생성 MIF를 비트 단위로 비교합니다.

주소:데이터 쌍만 추출하여 비교하며, 주석/공백/헤더는 무시합니다.

Usage:
  python3 golden_compare.py --golden golden_z.mif --generated compiler_z.mif
  python3 golden_compare.py --golden-dir golden/ --gen-dir output/ --all

출력:
  - 주소별 일치/불일치 상세
  - GPC별 정확도
  - 전체 정확도 요약
  - 불일치 목록 (코어 이름, 예상값, 실제값)
"""

import os
import re
import sys
import argparse
from collections import defaultdict


def parse_mif(filepath):
    """
    MIF 파일에서 (address, hex_data, comment) 튜플 리스트를 추출합니다.
    헤더(DEPTH, WIDTH 등), 빈 줄, 순수 주석 줄은 건너뜁니다.
    """
    entries = []
    in_content = False

    with open(filepath, "r") as f:
        for line_num, raw_line in enumerate(f, 1):
            line = raw_line.strip()

            # 빈 줄 건너뛰기
            if not line:
                continue

            # 헤더 건너뛰기
            if line.startswith("DEPTH") or line.startswith("WIDTH") or \
               line.startswith("ADDRESS_RADIX") or line.startswith("DATA_RADIX") or \
               line.startswith("CONTENT"):
                continue

            if line == "BEGIN":
                in_content = True
                continue

            if line.startswith("END"):
                break

            # 순수 주석 줄 건너뛰기 (-- 로 시작)
            if line.startswith("--"):
                continue

            if not in_content:
                continue

            # 데이터 줄 파싱: "address : hex_data ; -- comment"
            match = re.match(r'^\s*(\d+)\s*:\s*([0-9a-fA-F]+)\s*;(.*)$', line)
            if match:
                addr = int(match.group(1))
                data = match.group(2).upper().zfill(8)  # 8자리 hex로 정규화
                comment = match.group(3).strip()
                # 주석에서 -- 제거
                if comment.startswith("--"):
                    comment = comment[2:].strip()
                entries.append((addr, data, comment))

    return entries


def extract_core_name(comment):
    """주석에서 코어 이름과 연산 정보를 추출합니다."""
    # ".r0    cur=0" → "r0: cur=0"
    match = re.match(r'\.?(r\d+)\s+(.*)', comment)
    if match:
        core = match.group(1)
        info = match.group(2).split("r")[0].strip()  # regSet 이전까지
        # 더 깔끔하게: 첫 번째 공백 블록까지
        parts = comment.split()
        if len(parts) >= 2:
            info = parts[1] if len(parts) > 1 else ""
        return core, info
    return "", comment[:30]


def compare_mif(golden_path, generated_path, label=""):
    """
    두 MIF 파일을 비교하고 결과를 반환합니다.
    """
    golden = parse_mif(golden_path)
    generated = parse_mif(generated_path)

    # 딕셔너리로 변환
    golden_dict = {addr: (data, comment) for addr, data, comment in golden}
    gen_dict = {addr: (data, comment) for addr, data, comment in generated}

    all_addrs = sorted(set(golden_dict.keys()) | set(gen_dict.keys()))

    results = {
        "label": label,
        "total": 0,
        "match": 0,
        "mismatch": 0,
        "golden_only": 0,
        "gen_only": 0,
        "mismatches": [],  # (addr, golden_data, gen_data, core_info)
        "per_gpc": defaultdict(lambda: {"total": 0, "match": 0, "mismatch": 0}),
    }

    for addr in all_addrs:
        gpc = addr // 128
        core = addr % 128

        if addr in golden_dict and addr not in gen_dict:
            results["golden_only"] += 1
            continue
        if addr not in golden_dict and addr in gen_dict:
            results["gen_only"] += 1
            continue

        results["total"] += 1
        results["per_gpc"][gpc]["total"] += 1

        g_data, g_comment = golden_dict[addr]
        c_data, c_comment = gen_dict[addr]

        if g_data == c_data:
            results["match"] += 1
            results["per_gpc"][gpc]["match"] += 1
        else:
            results["mismatch"] += 1
            results["per_gpc"][gpc]["mismatch"] += 1
            core_name, core_info = extract_core_name(g_comment)
            results["mismatches"].append({
                "addr": addr,
                "gpc": gpc,
                "core": core,
                "core_name": core_name,
                "core_info": core_info,
                "golden": g_data,
                "generated": c_data,
                "golden_comment": g_comment,
                "gen_comment": c_comment,
            })

    return results


def print_report(results, verbose=False):
    """비교 결과를 출력합니다."""
    r = results
    label = r["label"] or "MIF"

    print(f"\n{'='*72}")
    print(f"  Golden Reference Comparison: {label}")
    print(f"{'='*72}")

    total = r["total"]
    if total == 0:
        print("  No data to compare.")
        return

    match_rate = 100 * r["match"] / total if total > 0 else 0

    print(f"\n  Total entries compared:  {total}")
    print(f"  Matched:                {r['match']}")
    print(f"  Mismatched:             {r['mismatch']}")
    if r["golden_only"]:
        print(f"  Golden only:            {r['golden_only']}")
    if r["gen_only"]:
        print(f"  Generated only:         {r['gen_only']}")
    print(f"  Accuracy:               {match_rate:.2f}%")

    if r["match"] == total:
        print(f"\n  *** PERFECT MATCH - All {total} entries identical ***")

    # Per-GPC breakdown
    print(f"\n  Per-GPC Accuracy:")
    print(f"  {'GPC':>5s}  {'Total':>7s}  {'Match':>7s}  {'Mismatch':>9s}  {'Rate':>7s}")
    print(f"  {'-'*5}  {'-'*7}  {'-'*7}  {'-'*9}  {'-'*7}")
    for gpc in sorted(r["per_gpc"].keys()):
        g = r["per_gpc"][gpc]
        rate = 100 * g["match"] / g["total"] if g["total"] > 0 else 0
        marker = "" if g["mismatch"] == 0 else " <<"
        print(f"  {gpc:>5d}  {g['total']:>7d}  {g['match']:>7d}  {g['mismatch']:>9d}  {rate:>6.1f}%{marker}")

    # Mismatch details
    if r["mismatches"]:
        print(f"\n  Mismatch Details ({len(r['mismatches'])} entries):")
        print(f"  {'Addr':>6s}  {'GPC':>4s}  {'Core':>5s}  {'Name':>8s}  {'Golden':>10s}  {'Generated':>10s}  Info")
        print(f"  {'-'*6}  {'-'*4}  {'-'*5}  {'-'*8}  {'-'*10}  {'-'*10}  {'-'*20}")
        show_count = len(r["mismatches"]) if verbose else min(20, len(r["mismatches"]))
        for m in r["mismatches"][:show_count]:
            print(f"  {m['addr']:>6d}  {m['gpc']:>4d}  r{m['core']:<4d}  {m['core_name']:>8s}  "
                  f"{m['golden']:>10s}  {m['generated']:>10s}  {m['core_info'][:25]}")
        if len(r["mismatches"]) > show_count:
            print(f"  ... and {len(r['mismatches']) - show_count} more")


def main():
    parser = argparse.ArgumentParser(description="EOPPP Golden Reference MIF Comparator")
    parser.add_argument("--golden", type=str, help="Golden MIF file path")
    parser.add_argument("--generated", type=str, help="Generated MIF file path")
    parser.add_argument("--golden-dir", type=str, help="Directory with golden MIF files")
    parser.add_argument("--gen-dir", type=str, help="Directory with generated MIF files")
    parser.add_argument("--all", action="store_true", help="Compare all matching files in dirs")
    parser.add_argument("--verbose", "-v", action="store_true", help="Show all mismatches")
    args = parser.parse_args()

    if args.golden and args.generated:
        # Single file comparison
        results = compare_mif(args.golden, args.generated,
                            label=os.path.basename(args.golden))
        print_report(results, verbose=args.verbose)

    elif args.golden_dir and args.gen_dir and args.all:
        # Directory comparison
        golden_files = [f for f in os.listdir(args.golden_dir) if f.endswith(".mif")]
        all_results = []

        for gf in sorted(golden_files):
            golden_path = os.path.join(args.golden_dir, gf)
            gen_path = os.path.join(args.gen_dir, gf)

            if not os.path.exists(gen_path):
                print(f"  SKIP: {gf} (no matching generated file)")
                continue

            results = compare_mif(golden_path, gen_path, label=gf)
            print_report(results, verbose=args.verbose)
            all_results.append(results)

        # Overall summary
        if all_results:
            total_all = sum(r["total"] for r in all_results)
            match_all = sum(r["match"] for r in all_results)
            mismatch_all = sum(r["mismatch"] for r in all_results)
            print(f"\n{'='*72}")
            print(f"  OVERALL SUMMARY ({len(all_results)} files)")
            print(f"{'='*72}")
            print(f"  Total entries:  {total_all}")
            print(f"  Matched:        {match_all}")
            print(f"  Mismatched:     {mismatch_all}")
            print(f"  Accuracy:       {100*match_all/total_all:.2f}%" if total_all > 0 else "")
            if match_all == total_all:
                print(f"\n  *** ALL FILES PERFECT MATCH ***")

    else:
        # Self-test: parse and show stats
        if args.golden:
            entries = parse_mif(args.golden)
            print(f"Parsed {len(entries)} entries from {args.golden}")
            print(f"Address range: {entries[0][0]} ~ {entries[-1][0]}" if entries else "Empty")
            print(f"\nFirst 5 entries:")
            for addr, data, comment in entries[:5]:
                print(f"  [{addr:>4d}] {data}  {comment[:50]}")
            print(f"\nLast 5 entries:")
            for addr, data, comment in entries[-5:]:
                print(f"  [{addr:>4d}] {data}  {comment[:50]}")
        else:
            parser.print_help()


if __name__ == "__main__":
    main()
