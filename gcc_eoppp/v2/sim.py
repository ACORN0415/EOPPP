"""
sim.py — EOPPP MIF 시뮬레이터 (docs/EOPPP_v2_execution_model.md 의 가정 M1–M8을 그대로 실행)

명세가 나오면 이 파일을 먼저 명세에 맞추고, 그다음 코드 생성을 맞춘다.
의미가 문서화되지 않은 구성(SUM_NEG, Y_LEFT_XD 등)을 만나면 추측하지 않고 예외를 낸다.

Usage (offline):
  python3 sim.py <eflow_out 폴더> [--max-cycles N]
"""

import json
import os
import re
import sys

ADD, EQZ, GTZ, LTZ, NEQZ, LTEZ, GTEZ = 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06
SMT, UMT, SRSH, LSH, LXY = 0x08, 0x09, 0x0A, 0x0B, 0x1F
MESH_RIGHT, XD_MEM, Y_LEFT_XD, SUM_NEG = 1 << 5, 1 << 6, 1 << 7, 1 << 8
XX_LEFT_XD, WRITE_EN, HOLD, A_RD, A_WR = 1 << 9, 1 << 10, 1 << 11, 1 << 12, 1 << 13

BRANCH_TEST = {
    EQZ: lambda s: s == 0, GTZ: lambda s: s > 0, LTZ: lambda s: s < 0,
    NEQZ: lambda s: s != 0, LTEZ: lambda s: s <= 0, GTEZ: lambda s: s >= 0,
}


class UnsupportedSemantics(Exception):
    """시뮬레이터 가정(M1–M8)에 정의되지 않은 구성."""


def s32(x):
    return ((int(x) + (1 << 31)) % (1 << 32)) - (1 << 31)


def read_mif(path):
    words = {}
    for line in open(path, encoding="utf-8"):
        m = re.match(r"\s*(\d+)\s*:\s*([0-9a-fA-F]+)\s*;", line)
        if m:
            words[int(m.group(1))] = int(m.group(2), 16)
    return words


class Machine:
    def __init__(self, z, y, abanks=None):
        self.Z, self.Y = z, y
        self.n_rows = (max(z) // 128 + 1) if z else 0
        self.X = [0] * 128
        self.A = {c: list(v) for c, v in (abanks or {}).items()}
        self.addr = [0] * 128
        self.gpc = 0
        self.cycles = 0
        self.warnings = []
        self.exits = []          # (cycle, from_gpc, to_gpc, X snapshot)

    def row_is_empty(self, g):
        return all(self.Z.get(g * 128 + c, 0) == 0 and self.Y.get(g * 128 + c, 0) == 0
                   for c in range(128))

    def a_read(self, c):
        bank = self.A.setdefault(c, [])
        v = bank[self.addr[c]] if self.addr[c] < len(bank) else 0
        self.addr[c] += 1
        return s32(v)

    def a_write(self, c, v):
        bank = self.A.setdefault(c, [])
        while len(bank) <= self.addr[c]:
            bank.append(0)
        bank[self.addr[c]] = s32(v)
        self.addr[c] += 1

    def step(self):
        g = self.gpc
        old = self.X
        new = list(old)
        fired, has_branch = [], False
        for c in range(128):
            z = self.Z.get(g * 128 + c, 0)
            y = self.Y.get(g * 128 + c, 0)
            op = z & 0x1F
            if z & (SUM_NEG | Y_LEFT_XD | MESH_RIGHT | WRITE_EN):
                raise UnsupportedSemantics(
                    f"GPC {g} r{c}: control bits {z:#06x} have no defined semantics in M1–M8")
            if op == LXY:                                            # [M6]
                new[c] = s32(y)
                self.addr[c] = 0                                     # [M7a] A-bank 주소 초기화
            elif op <= GTEZ:
                if z & XD_MEM:                                       # [M7] A-bank 읽기
                    res = self.a_read(c) if z & A_RD else 0
                elif z & XX_LEFT_XD:                                 # 1.0 MAC store 코어
                    res = old[c - 1] if c > 0 else 0
                else:
                    res = sum(old[c + b - 16] for b in range(32)
                              if (y >> b) & 1 and 0 <= c + b - 16 < 128)   # [M6] Y-마스크
                res = s32(res)
                if op != ADD:                                        # 분기 코어
                    if not z & HOLD:
                        raise UnsupportedSemantics(f"GPC {g} r{c}: compare without BRGPC_HOLD")
                    has_branch = True
                    if BRANCH_TEST[op](res):
                        fired.append(c)
                    continue                                         # [M3] X 유지
                if z & A_WR:                                         # [M7] A-bank 쓰기
                    self.a_write(c, res)
                new[c] = res
            elif op in (SMT, SRSH, LSH):
                src = old[c - 1] if (z & XX_LEFT_XD and c > 0) else old[c]
                if op == SMT:
                    new[c] = s32(src * s32(y))
                elif op == SRSH:
                    new[c] = s32(src >> (y & 31))
                else:
                    new[c] = s32(src << (y & 31))
            else:
                raise UnsupportedSemantics(f"GPC {g} r{c}: opcode {op:#04x}")
        self.X = new
        self.cycles += 1
        if fired:                                                    # [M2]
            if len(fired) > 1:
                self.warnings.append(f"cycle {self.cycles}: GPC {g} cores {fired} fired together (M8)")
            nxt = old[fired[0]]
        elif has_branch:
            nxt = g
        else:
            nxt = g + 1
        if nxt != g:
            self.exits.append((self.cycles, g, nxt))
        self.gpc = nxt

    def run(self, max_cycles=2_000_000, halt_gpc=None):
        while self.cycles < max_cycles:
            if self.gpc >= self.n_rows or self.row_is_empty(self.gpc):
                return "halt"
            if halt_gpc is not None and self.gpc == halt_gpc:
                return "halt"
            before = self.gpc
            self.step()
            if self.gpc == before and self._self_loop_halt(before):
                return "halt"
        return "timeout"

    def _self_loop_halt(self, g):
        """정지 행: 자기 자신으로만 분기하고 다른 연산이 없는 행."""
        for c in range(128):
            z = self.Z.get(g * 128 + c, 0)
            op = z & 0x1F
            if op not in (ADD,) and not (op <= GTEZ and z & HOLD and self.X[c] == g):
                return False
        return any((self.Z.get(g * 128 + c, 0) & 0x1F) in BRANCH_TEST
                   and self.X[c] == g for c in range(128))


def run_dir(out_dir, inputs=None, max_cycles=2_000_000):
    """eflow_out 폴더의 MIF와 symbols.json으로 프로그램 전체를 실행한다.
    [M7a] 함수에 들어갈 때 그 함수의 입력 A-bank를 채우고, 나올 때 반환값·출력 배열을 기록.
    inputs: {배열 이름: 값 목록} (없으면 C 초기값)"""
    z = read_mif(os.path.join(out_dir, "total_program_z.mif"))
    y = read_mif(os.path.join(out_dir, "total_program_y.mif"))
    sym = json.load(open(os.path.join(out_dir, "symbols.json")))
    m = Machine(z, y)
    funcs = sym["functions"]
    results = {}
    cur = None
    status = "timeout"
    while m.cycles < max_cycles:
        g = m.gpc
        inside = next((f for f in funcs if f["gpc_start"] <= g <= f["gpc_end"]), None)
        if cur is not None and inside is not cur:
            results[cur["name"]] = _snapshot(m, cur)
        if inside is not None and inside is not cur and g == inside["gpc_start"]:
            for arr, info in inside.get("arrays", {}).items():
                # 입력은 읽을 값, 출력은 C 초기값(전역 배열의 초기 내용)으로 채운다
                data = (inputs or {}).get(arr, info.get("init", []))
                m.A[info["core"]] = list(data)
        cur = inside
        if g >= m.n_rows or m.row_is_empty(g) or g == sym.get("halt_gpc"):
            status = "halt"
            break
        m.step()
    if cur is not None and cur["name"] not in results:
        results[cur["name"]] = _snapshot(m, cur)
    return m, sym, status, results


def _snapshot(m, f):
    ret = f.get("return")
    if ret is None:
        rv = None
    elif "const" in ret:
        rv = ret["const"]
    else:
        rv = m.X[ret["core"]]
    outs = {a: list(m.A.get(i["core"], [])) for a, i in f.get("arrays", {}).items()
            if i["dir"] == "out"}
    return {"return": rv, "arrays": outs, "cycles_at_exit": m.cycles}


if __name__ == "__main__":
    d = sys.argv[1]
    m, sym, status, results = run_dir(d)
    print(f"status={status} cycles={m.cycles} gpc={m.gpc}")
    for name, r in results.items():
        print(name, r)
    for w in m.warnings[:5]:
        print("warning:", w)
