#!/usr/bin/env python3
"""
v2_difftest.py — 2.0 경로 종단 간 차등 검증.

  C 소스 ──(GCC + 플러그인, EOPPP_V2=force)──▶ MIF + symbols.json ──▶ sim.py (가정 M1–M8)
  C 소스 ──(gcc -O0 네이티브, 함수마다 새 프로세스)──────────────────▶ 정답

함수마다 반환값과 그 함수가 쓰는 전역 배열의 최종 내용을 비교한다. 각 함수는 C 초기 상태에서
시작한다 (가정 M7a: 함수 진입 시 로더가 배열을 C 초기값으로 채운다). 같은 비교를 IR 인터프리터
(GIMPLE → IR → 인라이닝 결과)에 대해서도 해, 어느 단계에서 어긋났는지 구분한다.

Usage:
  python3 v2_difftest.py [C 파일 ...] [--rtpg DIR] [--limit N] [--jobs J]
"""

import argparse
import glob
import json
import os
import subprocess
import sys
import tempfile
from concurrent.futures import ProcessPoolExecutor

ROOT = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
sys.path.insert(0, os.path.join(ROOT, "gcc_eoppp"))
from v2.ir import Interpreter            # noqa: E402
from v2.sim import run_dir               # noqa: E402

PLUGIN = os.path.join(ROOT, "gcc-python-plugin", "python.so")
MAIN = os.path.join(ROOT, "main.py")
DEFAULT = [os.path.join(ROOT, "gcc_eoppp", f)
           for f in ("eoppp_v2_test.c", "eoppp_v2_kernels.c")]


def compile_v2(src, out):
    env = dict(os.environ, EOPPP_OUT_DIR=out, EOPPP_V2="force",
               PYTHONPATH=os.path.join(ROOT, "gcc_eoppp"), PYTHONIOENCODING="utf-8")
    subprocess.run(["gcc", f"-fplugin={PLUGIN}", f"-fplugin-arg-python-script={MAIN}", "-O0",
                    src, "-c", "-o", "/dev/null"], env=env, cwd=ROOT,
                   stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=300)
    log = os.path.join(out, "v2.log")
    if not os.path.exists(log):
        return None, ["plugin produced no v2.log (crash?)"]
    text = open(log, encoding="utf-8").read()
    irs = [json.loads(l) for l in text.split("# IR (after inlining)\n", 1)[-1].splitlines() if l.strip()]
    fails = [l for l in text.splitlines() if "FAIL" in l]
    if fails or not os.path.exists(os.path.join(out, "total_program_z.mif")):
        return None, fails or ["no MIF"]
    return irs, []


def native(src, irs, work):
    """함수마다 네이티브 실행 결과 {이름: {"return", "arrays"}}."""
    harness = os.path.join(work, "harness.c")
    lines = ["#include <stdio.h>", "#include <string.h>", "#define main eoppp_original_main",
             f'#include "{src}"', "#undef main", "int main(int argc, char **argv) {"]
    for ir in irs:
        has_ret = any(b["term"]["kind"] == "ret" and b["term"].get("val") for b in ir["blocks"])
        lines.append(f'  if (!strcmp(argv[1], "{ir["name"]}")) {{')
        lines.append(f'    {"int r = " if has_ret else ""}{ir["name"]}();')
        lines.append(f'    printf("@@ret %d\\n", {"r" if has_ret else "0"});')
        for a, info in sorted(ir["arrays"].items()):
            lines.append(f'    for (int k = 0; k < {info["size"]}; k++) '
                         f'printf("@@arr {a} %d\\n", (int){a}[k]);')
        lines.append("  }")
    lines += ["  return 0;", "}"]
    open(harness, "w").write("\n".join(lines) + "\n")
    exe = os.path.join(work, "harness")
    r = subprocess.run(["gcc", "-O0", "-w", "-o", exe, harness], capture_output=True, text=True)
    if r.returncode:
        raise RuntimeError(f"native build failed: {r.stderr[:300]}")
    res = {}
    for ir in irs:
        out = subprocess.run([exe, ir["name"]], capture_output=True, text=True, timeout=10).stdout
        ret, arrays = None, {}
        for l in out.splitlines():
            if l.startswith("@@ret "):
                ret = int(l.split()[1])
            elif l.startswith("@@arr "):
                _, a, v = l.split()
                arrays.setdefault(a, []).append(int(v))
        has_ret = any(b["term"]["kind"] == "ret" and b["term"].get("val") for b in ir["blocks"])
        res[ir["name"]] = {"return": ret if has_ret else None, "arrays": arrays}
    return res


def interp(irs):
    res = {}
    for ir in irs:
        arrays = {a: list(i["init"]) for a, i in ir["arrays"].items()}
        it = Interpreter([ir], arrays)
        r = it.run(ir["name"])
        res[ir["name"]] = {"return": r, "arrays": it.arrays}
    return res


def check_file(src):
    with tempfile.TemporaryDirectory() as work:
        out = os.path.join(work, "out")
        irs, fails = compile_v2(os.path.abspath(src), out)
        if irs is None:
            return {"src": src, "status": "rejected", "detail": fails[:3]}
        ref = native(os.path.abspath(src), irs, work)
        itp = interp(irs)
        m, sym, status, res = run_dir(out)
        problems = []
        if status != "halt":
            problems.append(f"sim status {status}")
        if m.warnings:
            problems.append(f"sim warnings {m.warnings[:2]}")
        for ir in irs:
            n = ir["name"]
            for stage, got in (("ir", itp.get(n)), ("sim", res.get(n))):
                if got is None:
                    problems.append(f"{n}: {stage} did not reach the function exit")
                    continue
                if got["return"] != ref[n]["return"]:
                    problems.append(f"{n}: {stage} return {got['return']} != native {ref[n]['return']}")
                for a, vals in ref[n]["arrays"].items():
                    g = got["arrays"].get(a)
                    if g is None and stage == "sim":
                        continue                              # 입력 배열은 시뮬레이터가 보고하지 않음
                    if list(g or [])[:len(vals)] != vals:
                        problems.append(f"{n}: {stage} array {a} {list(g or [])[:8]}... "
                                        f"!= native {vals[:8]}...")
        funcs = sym["functions"]
        return {"src": src, "status": "mismatch" if problems else "match", "detail": problems[:4],
                "functions": len(funcs), "rows": sym["n_rows"], "cycles": m.cycles,
                "cores": max(f["cores_used"] for f in funcs),
                "unverified": sorted({u for f in funcs for u in f["unverified_ops"]})}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="*")
    ap.add_argument("--rtpg", help="RTPG 프로그램 폴더 (*.c)")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 4)
    ap.add_argument("--quiet", action="store_true")
    a = ap.parse_args()
    files = list(a.files) or ([] if a.rtpg else DEFAULT)
    if a.rtpg:
        files += sorted(glob.glob(os.path.join(a.rtpg, "*.c")))
    if a.limit:
        files = files[:a.limit]
    counts, reasons = {}, {}
    with ProcessPoolExecutor(a.jobs) as ex:
        for r in ex.map(check_file, files):
            counts[r["status"]] = counts.get(r["status"], 0) + 1
            if r["status"] == "rejected":
                key = r["detail"][0].split("FAIL", 1)[-1].strip()[:70] if r["detail"] else "?"
                key = key.split(": ", 1)[-1] if ": " in key else key
                reasons[key] = reasons.get(key, 0) + 1
            if not a.quiet or r["status"] == "mismatch":
                extra = (f" funcs={r['functions']} rows={r['rows']} cycles={r['cycles']} "
                         f"max_cores={r['cores']} unverified={r['unverified']}"
                         if r["status"] != "rejected" else "")
                print(f"[{r['status']}] {os.path.basename(r['src'])}{extra}")
                for d in r["detail"]:
                    print(f"    {d}")
    print("summary:", counts)
    if reasons:
        print("rejection reasons (top):")
        for k, v in sorted(reasons.items(), key=lambda kv: -kv[1])[:12]:
            print(f"  {v:6d}  {k}")


if __name__ == "__main__":
    main()
