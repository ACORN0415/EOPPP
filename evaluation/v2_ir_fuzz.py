#!/usr/bin/env python3
"""
v2_ir_fuzz.py — 2.0 백엔드 무작위 검증.

구조적인 무작위 IR 프로그램(중첩 루프, if/else, 산술 연쇄, 배열 스트림)을 만들고
  IR 인터프리터(C 의미)  vs  2.0 백엔드 → MIF → 시뮬레이터(가정 M1–M8)
의 반환값과 출력 배열을 비교한다.

Usage: python3 v2_ir_fuzz.py [N] [--seed S]
"""

import argparse
import os
import random
import sys
import tempfile

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "gcc_eoppp"))
from v2.ir import Interpreter            # noqa: E402
from v2.program import compile_program   # noqa: E402
from v2.sim import run_dir               # noqa: E402
from v2.backend import V2Error           # noqa: E402

V = lambda n: ("var", n)                 # noqa: E731
C = lambda k: ("const", k)               # noqa: E731
CMPS = [">", ">=", "<", "<=", "==", "!="]


class Gen:
    def __init__(self, rng, nvars=5):
        self.rng = rng
        self.vars = [f"v{i}" for i in range(nvars)]
        self.blocks = []
        self.n = 0
        self.loop_vars = 0
        self.use_stream = False

    def label(self):
        self.n += 1
        return f"B{self.n}"

    def operand(self):
        return V(self.rng.choice(self.vars)) if self.rng.random() < 0.7 else C(self.rng.randint(-9, 9))

    def stmt(self):
        r = self.rng
        d = r.choice(self.vars)
        k = r.random()
        if k < 0.30:
            return {"op": "add", "dst": d, "a": self.operand(), "b": self.operand()}
        if k < 0.50:
            return {"op": "sub", "dst": d, "a": self.operand(), "b": self.operand()}
        if k < 0.65:
            return {"op": "mul", "dst": d, "a": self.operand(), "b": C(r.randint(-4, 4))}
        if k < 0.72:
            return {"op": "shl", "dst": d, "a": V(r.choice(self.vars)), "b": C(r.randint(0, 3))}
        return {"op": "copy", "dst": d, "a": self.operand()}

    def emit(self, name, instrs, term):
        self.blocks.append({"name": name, "instrs": instrs, "term": term})

    def region(self, entry, exit_label, depth):
        """entry 블록에서 시작해 exit_label 로 끝나는 구조적 코드 영역."""
        r = self.rng
        cur, instrs = entry, [self.stmt() for _ in range(r.randint(0, 3))]
        for _ in range(r.randint(1, 3)):
            kind = r.random()
            if depth < 2 and kind < 0.35:                               # for 루프
                self.loop_vars += 1
                iv = f"i{self.loop_vars}"
                hdr, body, nxt = self.label(), self.label(), self.label()
                instrs.append({"op": "copy", "dst": iv, "a": C(0)})
                self.emit(cur, instrs, {"kind": "jump", "target": hdr})
                self.emit(hdr, [], {"kind": "br", "cmp": "<", "a": V(iv), "b": C(r.randint(0, 4)),
                                    "t": body, "f": nxt})
                latch = self.label()
                self.region(body, latch, depth + 1)
                self.emit(latch, [{"op": "add", "dst": iv, "a": V(iv), "b": C(1)}],
                          {"kind": "jump", "target": hdr})
                cur, instrs = nxt, []
            elif depth < 3 and kind < 0.65:                             # if / else
                t, f, join = self.label(), self.label(), self.label()
                self.emit(cur, instrs, {"kind": "br", "cmp": r.choice(CMPS),
                                        "a": V(r.choice(self.vars)), "b": self.operand(),
                                        "t": t, "f": f})
                self.region(t, join, depth + 1)
                self.region(f, join, depth + 1)
                cur, instrs = join, []
            else:
                instrs += [self.stmt() for _ in range(r.randint(1, 3))]
        self.emit(cur, instrs, {"kind": "jump", "target": exit_label})


def make_program(rng, idx):
    g = Gen(rng)
    init = [{"op": "copy", "dst": v, "a": C(rng.randint(-5, 5))} for v in g.vars]
    g.emit("E", init, {"kind": "jump", "target": "R0"})
    g.region("R0", "S", 0)
    # 끝: 스트림 루프 (입력 배열을 읽어 변수와 섞어 출력 배열에 쓴다)
    n = rng.randint(0, 6)
    instrs = [{"op": "copy", "dst": "k", "a": C(0)}]
    g.emit("S", instrs, {"kind": "jump", "target": "SH"})
    g.emit("SH", [], {"kind": "br", "cmp": "<", "a": V("k"), "b": C(n), "t": "SB", "f": "RET"})
    g.emit("SB", [{"op": "load", "dst": "x", "array": "inp", "index": V("k")},
                  {"op": "add", "dst": "x", "a": V("x"), "b": V(rng.choice(g.vars))},
                  {"op": "store", "array": "out", "index": V("k"), "a": V("x")},
                  {"op": "add", "dst": "k", "a": V("k"), "b": C(1)}],
           {"kind": "jump", "target": "SH"})
    acc = [{"op": "copy", "dst": "acc", "a": C(0)}]
    for i, v in enumerate(g.vars):
        acc.append({"op": "mul", "dst": "w", "a": V(v), "b": C(i + 1)})
        acc.append({"op": "add", "dst": "acc", "a": V("acc"), "b": V("w")})
    g.emit("RET", acc, {"kind": "ret", "val": V("acc")})
    inp = [rng.randint(-20, 20) for _ in range(8)]
    return {"name": f"p{idx}", "params": [], "entry": "E", "blocks": g.blocks,
            "arrays": {"inp": {"size": 8, "init": inp}, "out": {"size": 8, "init": []}}}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("n", nargs="?", type=int, default=500)
    ap.add_argument("--seed", type=int, default=1)
    a = ap.parse_args()
    rng = random.Random(a.seed)
    ok = mism = rej = 0
    rows, cycles = [], []
    with tempfile.TemporaryDirectory() as d:
        for i in range(a.n):
            fn = make_program(rng, i)
            arrays = {"inp": list(fn["arrays"]["inp"]["init"]), "out": [0] * 8}
            it = Interpreter([fn], arrays)
            ref = it.run(fn["name"])
            n_out = sum(1 for _ in range(8))
            try:
                sym = compile_program([fn], d)
            except V2Error as e:
                rej += 1
                if rej <= 0:
                    print(f"[reject] p{i}: {e}")
                continue
            m, sym, status, res = run_dir(d)
            r = res.get(fn["name"], {})
            out_sim = r.get("arrays", {}).get("out", [])
            out_ref = it.arrays["out"][:len(out_sim)] if out_sim else []
            written = [x for x in it.arrays["out"]]
            good = (status == "halt" and r.get("return") == ref and not m.warnings
                    and out_sim == written[:len(out_sim)]
                    and all(v == 0 for v in written[len(out_sim):]))
            if good:
                ok += 1
                rows.append(sym["functions"][0]["rows"])
                cycles.append(m.cycles)
            else:
                mism += 1
                if mism <= 5:
                    print(f"[MISMATCH] p{i}: status={status} ref={ref} sim={r.get('return')} "
                          f"out_ref={written} out_sim={out_sim} warnings={m.warnings[:2]}")
    print(f"programs {a.n}: match {ok}, mismatch {mism}, rejected {rej}")
    if rows:
        rows.sort(); cycles.sort()
        print(f"rows/function median {rows[len(rows) // 2]} max {rows[-1]}; "
              f"cycles median {cycles[len(cycles) // 2]} max {cycles[-1]}")


if __name__ == "__main__":
    main()
