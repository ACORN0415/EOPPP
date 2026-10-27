"""
program.py — 2.0 IR 함수들을 GPC 순서대로 이어 붙여 MIF + symbols.json 을 만든다.

  [함수 1: 초기화 행, 블록 행들] [함수 2: …] … [정지: 초기화 행, 정지 행]

정지 행은 자기 자신으로 분기하는 GTZ(상수 1) 코어 하나 [M2, M3].
"""

import copy
import json
import os

try:
    from .backend import FunctionBackend, OP, HOLD
    from .ir import wrap32
except ImportError:
    from backend import FunctionBackend, OP, HOLD
    from ir import wrap32


def halt_words(base):
    """정지 루틴: base = 초기화 행 (r0=1, r1=정지 GPC), base+1 = 정지 행."""
    halt = base + 1
    w = {}
    for c in range(128):
        w[base * 128 + c] = (0, 0, "")
        w[halt * 128 + c] = (0, 0, "")
    w[base * 128 + 0] = (OP["LXY"], 1, "halt: one=1")
    w[base * 128 + 1] = (OP["LXY"], halt, f"halt: target={halt}")
    w[halt * 128 + 0] = (OP["ADD"], 1 << 16, "one")
    w[halt * 128 + 1] = (OP["GTZ"] | HOLD, 1 << 15, f"halt: GTZ(one) -> {halt}")
    return w, halt


def unify_returns(fn):
    """반환 지점마다 값이 다르면 한 변수(ret.v)에 모아 반환한다 — 심볼의 반환 위치가 하나가 되도록."""
    vals = {tuple(b["term"]["val"]) for b in fn["blocks"]
            if b["term"]["kind"] == "ret" and b["term"].get("val")}
    if len(vals) <= 1:
        return fn
    fn = copy.deepcopy(fn)
    for b in fn["blocks"]:
        t = b["term"]
        if t["kind"] == "ret" and t.get("val"):
            b["instrs"].append({"op": "copy", "dst": "ret.v", "a": t["val"]})
            t["val"] = ("var", "ret.v")
    return fn


def compile_functions(functions, base_gpc=0):
    """[(IR 함수)] → (words {addr: (z, y, note)}, [함수 심볼], 다음 GPC)"""
    words, syms, g = {}, [], base_gpc
    for fn in map(unify_returns, functions):
        be = FunctionBackend(fn, g, exit_gpc_fn=lambda end: end + 1)
        rows = be.compile()
        words.update(be.emit_words(rows))
        sym = be.symbols()
        syms.append(sym)
        g = sym["gpc_end"] + 1
    return words, syms, g


def write_mif(path, words, n_rows, bank):
    with open(path, "w", encoding="utf-8") as f:
        f.write(f"-- EOPPP 2.0 {bank}\nDEPTH = {max(16384, n_rows * 128)};\nWIDTH = 32;\n"
                "ADDRESS_RADIX = DEC;\nDATA_RADIX = HEX;\nCONTENT\nBEGIN\n")
        for addr in range(n_rows * 128):
            z, y, note = words.get(addr, (0, 0, ""))
            val = z if bank == "Z" else y
            if addr % 128 == 0:
                f.write(f"-- GPC {addr // 128}\n")
            f.write(f"{addr:<6} : {val & 0xFFFFFFFF:08x}; -- .r{addr % 128:<4} {note}\n")
        f.write("END;\n")


def compile_program(functions, out_dir):
    os.makedirs(out_dir, exist_ok=True)
    words, syms, g = compile_functions(functions)
    hw, halt = halt_words(g)
    words.update(hw)
    n_rows = halt + 1
    write_mif(os.path.join(out_dir, "total_program_z.mif"), words, n_rows, "Z")
    write_mif(os.path.join(out_dir, "total_program_y.mif"), words, n_rows, "Y")
    sym = {"functions": syms, "halt_gpc": halt, "n_rows": n_rows}
    with open(os.path.join(out_dir, "symbols.json"), "w") as f:
        json.dump(sym, f, indent=1)
    return sym
