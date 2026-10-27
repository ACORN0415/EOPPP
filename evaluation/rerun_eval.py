#!/usr/bin/env python3
"""
rerun_eval.py — 저장된 평가 프로그램을 현재 체커로 다시 돌려 이전 결과와 비교한다.

run_rtpg_eval.sh / run_csmith_eval.sh 는 실행할 때마다 프로그램을 새로 생성하므로
체커 변경의 효과만 보려면 같은 프로그램을 다시 돌려야 한다. 이 스크립트는
  - boundary : eval_programs/boundary/        (manifest의 expected와 비교)
  - rtpg     : rtpg_eval/programs/            (manifest의 expected와 비교)
  - csmith   : csmith_eval/programs/          (csmith_results.csv에 있는 프로그램)
을 병렬로 실행하고, 리젝트 모듈 분류는 기존 쉘 스크립트와 같은 규칙을 쓴다.

Usage:
  python3 rerun_eval.py {boundary|rtpg|csmith} [--workers N] [--limit N]
결과: <suite>_rerun.csv, <suite>_rerun_summary.txt
"""

import argparse
import csv
import os
import re
import shutil
import subprocess
import sys
import time
from collections import Counter
from multiprocessing import Pool

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, os.path.join(ROOT, "gcc_eoppp"))
from prechecker import precheck  # noqa: E402

PLUGIN_SO = os.path.join(ROOT, "gcc-python-plugin", "python.so")
PLUGIN_SCRIPT = os.path.join(ROOT, "main.py")
TMP_ROOT = os.path.join(HERE, ".rerun_tmp")

SUITES = {
    "boundary": {"dir": "eval_programs/boundary", "extra": []},
    "rtpg": {"dir": "rtpg_eval/programs", "extra": []},
    "csmith": {"dir": "csmith_eval/programs", "extra": ["-I/usr/include/csmith"]},
}


def classify_pre(msgs):
    text = "\n".join(msgs)
    if re.search(r"goto", text, re.I):
        return "pre:goto"
    if re.search(r"variable|declaration|count", text, re.I):
        return "pre:varcount"
    return "pre:other"


def classify_generation(clog):
    """v1.0: 체커 통과 후 생성 단계에서 거부된 사유 (생성기가 C 의미대로 번역할 수 없음)."""
    rules = [
        ("generator:core_capacity", r"Generation failed: Core capacity"),
        ("generator:mesh_window", r"Generation failed: Mesh window"),
        ("generator:mac_layout", r"no mesh-valid reduction tree"),
        ("generator:multi_loop", r"Generation failed: \d+ computational loops"),
        ("generator:preloop_nonconst", r"Code before the loop is not compile-time constant"),
        ("generator:post_loop_effect", r"Memory write after the loop|modified after the loop"),
        ("generator:if_in_loop", r"'if' inside the loop body"),
        ("generator:loop_shape", r"Loop-counter condition|Non-counter condition|Both branches|"
                                 r"Loop bound|Unsupported loop bound|update is not a simple|"
                                 r"Loop executes zero times|Cannot verify the first loop test|"
                                 r"after exit condition|Exit condition"),
        ("generator:array_stream", r"Array index|Loop counter '.*' starts|Array '.*' is both"),
        ("generator:nonsum_operand", r"non-summation op must update"),
        ("generator:intra_iteration", r"computed earlier in the same iteration|cannot be expanded|"
                                      r"sums the same core twice|times per iteration|"
                                      r"Constant assignment|has no core"),
        ("generator:return_value", r"Return value|Multiple distinct return"),
    ]
    for name, pat in rules:
        if re.search(pat, clog):
            return name
    return None


def classify_rtpg(clog):
    """run_rtpg_eval.sh 와 같은 순서/패턴 (+ v1.0 비void 반환 → ControlChecker)."""
    rules = [
        ("checker:TypeChecker", r"Unsupported.*type|float|double|pointer.*type"),
        ("checker:OpcodeChecker", r"Unsupported.*operation|exprcode|no Z-code mapping"),
        ("checker:MemoryChecker", r"indirect.*access|indirect.*array|memory access|double.*index|array.*chain"),
        ("checker:VariableChecker", r"variable.*count|exceed.*core|Core capacity"),
        ("checker:ControlChecker", r"nested.*loop|switch|goto detected|Unsupported return"),
        ("checker:StructureChecker", r"Call depth|recursion|recursive"),
        ("checker:ConflictChecker", r"Write conflict|conflict.*global"),
    ]
    for name, pat in rules:
        if re.search(pat, clog, re.I):
            return name
    return "checker:unknown"


def classify_csmith(clog):
    """run_csmith_eval.sh 와 같은 순서/패턴 (+ v1.0 비void 반환 → ControlChecker)."""
    rules = [
        ("checker:TypeChecker", r"Unsupported.*type|TypeChecker|float|RealType|PointerType|pointer.*type|type.*not supported"),
        ("checker:OpcodeChecker", r"OpcodeChecker|opcode|exprcode|Unsupported.*operation|unsupported.*op"),
        ("checker:MemoryChecker", r"MemoryChecker|memory|malloc|indirect|ArrayRef"),
        ("checker:VariableChecker", r"VariableChecker|variable.*count|exceed.*core|core.*count|Core capacity"),
        ("checker:ControlChecker", r"ControlChecker|control|nested.*loop|switch|goto|Unsupported return"),
        ("checker:StructureChecker", r"StructureChecker|recursion|call.*depth|recursive"),
        ("checker:ConflictChecker", r"ConflictChecker|conflict|global.*write"),
    ]
    for name, pat in rules:
        if re.search(pat, clog, re.I):
            return name
    return "checker:unknown"


def run_one(job):
    suite, path, extra = job
    out_dir = os.path.join(TMP_ROOT, f"w{os.getpid()}")
    os.makedirs(out_dir, exist_ok=True)

    tp = time.time()
    passed, msgs = precheck(path)
    pre_sec = time.time() - tp
    if not passed:
        return {"file": os.path.basename(path), "actual": "REJECTED",
                "module": classify_pre(msgs), "nonvoid": False, "sec": 0.0, "pre_sec": pre_sec}

    for fn in ("total_program_y.mif", "total_program_z.mif", "checker.log"):
        try:
            os.remove(os.path.join(out_dir, fn))
        except FileNotFoundError:
            pass

    # v1.0 평가: 2.0 대체 경로는 끈다 (branch 2.0 의 main.py 기본값은 auto)
    env = dict(os.environ, EOPPP_OUT_DIR=out_dir, PYTHONIOENCODING="utf-8", EOPPP_V2="off")
    t0 = time.time()
    r = subprocess.run(
        ["gcc", f"-fplugin={PLUGIN_SO}", f"-fplugin-arg-python-script={PLUGIN_SCRIPT}",
         "-O0", "-c", *extra, path, "-o", "/dev/null"],
        env=env, capture_output=True, text=True)
    sec = time.time() - t0

    clog_path = os.path.join(out_dir, "checker.log")
    clog = open(clog_path, encoding="utf-8").read() if os.path.exists(clog_path) else ""
    nonvoid = "Unsupported return" in clog

    if r.returncode != 0 and not clog:
        return {"file": os.path.basename(path), "actual": "CRASH",
                "module": "gcc:compile_error", "nonvoid": False, "sec": sec, "pre_sec": pre_sec}
    if os.path.exists(os.path.join(out_dir, "total_program_y.mif")):
        return {"file": os.path.basename(path), "actual": "PASS", "module": "",
                "nonvoid": nonvoid, "sec": sec, "pre_sec": pre_sec}
    # 함수가 여럿이면 체커 위반이 있는 함수가 먼저 원인 → 체커 분류 우선,
    # 체커 위반이 없을 때만 생성 단계 사유로 분류
    checker_part = "\n".join(l for l in clog.splitlines() if "Generation failed" not in l)
    has_checker_violation = re.search(r"^\s+- ", checker_part, re.M) is not None
    if has_checker_violation:
        module = classify_csmith(checker_part) if suite == "csmith" else classify_rtpg(checker_part)
    else:
        module = classify_generation(clog) or "generator:unknown"
    return {"file": os.path.basename(path), "actual": "REJECTED", "module": module,
            "nonvoid": nonvoid, "sec": sec, "pre_sec": pre_sec}


def load_jobs(suite, limit):
    d = os.path.join(HERE, SUITES[suite]["dir"])
    extra = SUITES[suite]["extra"]
    expected, old = {}, {}
    if suite in ("boundary", "rtpg"):
        man = os.path.join(d, "manifest_v1.csv")
        if suite != "rtpg" or not os.path.exists(man):
            man = os.path.join(d, "manifest.csv")
        with open(man) as f:
            for row in csv.DictReader(f):
                expected[row["filename"]] = row["expected"].upper().replace("REJECT", "REJECTED")
        names = list(expected)
        old_csv = {"rtpg": "rtpg_eval/rtpg_results.csv",
                   "boundary": "eval_programs/boundary_results.csv"}[suite]
        if os.path.exists(os.path.join(HERE, old_csv)):
            with open(os.path.join(HERE, old_csv)) as f:
                for row in csv.DictReader(f):
                    old[row["filename"]] = (row.get("actual", ""), row.get("reject_module", ""))
    else:
        names = []
        with open(os.path.join(HERE, "csmith_eval/csmith_results.csv")) as f:
            for row in csv.DictReader(f):
                names.append(row["filename"])
                old[row["filename"]] = (row["result"], row["detail"])
    if limit:
        names = names[:limit]
    jobs = [(suite, os.path.join(d, n), extra) for n in names if os.path.exists(os.path.join(d, n))]
    return jobs, expected, old


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("suite", choices=SUITES)
    ap.add_argument("--workers", type=int, default=max(1, (os.cpu_count() or 2) - 2))
    ap.add_argument("--limit", type=int, default=0)
    a = ap.parse_args()

    jobs, expected, old = load_jobs(a.suite, a.limit)
    shutil.rmtree(TMP_ROOT, ignore_errors=True)
    t0 = time.time()
    with Pool(a.workers) as pool:
        res = pool.map(run_one, jobs, chunksize=8)
    wall = time.time() - t0
    shutil.rmtree(TMP_ROOT, ignore_errors=True)

    out_csv = os.path.join(HERE, f"{a.suite}_rerun.csv")
    with open(out_csv, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["filename", "expected", "actual", "match", "reject_module",
                    "nonvoid_return", "old_actual", "old_module", "gcc_sec", "precheck_sec"])
        for r in res:
            exp = expected.get(r["file"], "")
            match = "" if not exp else ("OK" if exp == r["actual"] else "WRONG")
            oa, om = old.get(r["file"], ("", ""))
            w.writerow([r["file"], exp, r["actual"], match, r["module"], int(r["nonvoid"]),
                        oa, om, f"{r['sec']:.3f}", f"{r['pre_sec']:.4f}"])

    cnt = Counter(r["actual"] for r in res)
    mods = Counter(r["module"] for r in res if r["actual"] == "REJECTED")
    flips = Counter((old.get(r["file"], ("?", ""))[0], r["actual"]) for r in res
                    if old.get(r["file"], ("?", ""))[0] != r["actual"])
    lines = [f"Suite: {a.suite}   programs: {len(res)}   wall: {wall:.1f}s",
             f"PASS {cnt['PASS']}  REJECTED {cnt['REJECTED']}  CRASH {cnt['CRASH']}"]
    if expected:
        ok = sum(1 for r in res if expected.get(r['file']) == r['actual'])
        fa = sum(1 for r in res if expected.get(r['file']) == "REJECTED" and r['actual'] == "PASS")
        fr = sum(1 for r in res if expected.get(r['file']) == "PASS" and r['actual'] == "REJECTED")
        lines.append(f"Correct {ok}/{len(res)}   false acceptance {fa}   false rejection {fr}")
    lines.append("Rejection by module:")
    for m, c in mods.most_common():
        lines.append(f"  {m:<28} {c:>6}  ({100.0 * c / max(1, cnt['REJECTED']):.1f}%)")
    lines.append(f"Programs whose checker.log contains non-void return: "
                 f"{sum(1 for r in res if r['nonvoid'])}")
    lines.append("Changes vs stored results (old -> new): " +
                 (", ".join(f"{o}->{n}: {c}" for (o, n), c in flips.items()) or "none"))
    gsec = [r["sec"] for r in res if r["sec"] > 0]
    if gsec:
        gsec.sort()
        lines.append(f"gcc+plugin time per program: median {gsec[len(gsec) // 2]:.3f}s, "
                     f"max {gsec[-1]:.3f}s")
    psec = sorted(r["pre_sec"] for r in res)
    lines.append(f"pre-checker time per program: median {1000 * psec[len(psec) // 2]:.2f} ms, "
                 f"max {1000 * psec[-1]:.2f} ms")
    text = "\n".join(lines)
    open(os.path.join(HERE, f"{a.suite}_rerun_summary.txt"), "w").write(text + "\n")
    print(text)


if __name__ == "__main__":
    main()
