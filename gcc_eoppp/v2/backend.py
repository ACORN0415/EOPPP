"""
backend.py — 2.0 일반 경로: IR 함수 → 클럭 행(row) 시퀀스 → Z/Y 코드.

docs/EOPPP_v2_execution_model.md 의 가정을 따른다. 코드의 [M*] 표시는 문서의 가정 번호.

단계
  1. 마이크로 연산 선택   한 연산 = 한 코어가 한 클럭에 하는 일 (ADD / SMT / SRSH / A-bank)
  2. 블록 안 스케줄링      의존성(RAW/WAR/WAW)을 지키는 가장 이른 행 (ASAP)
  3. 코어 배치            RCM 초기 순서 → 담금질(윈도우 위반 최소화) → 남은 연결은 빈 슬롯에
                          릴레이 사슬 / 상수 복제본
  4. 블록 레이아웃         진입 블록부터 역후위 순서, 분기 코어(보완 쌍) 배치
  5. 인코딩               행마다 128코어의 Z/Y (쓰지 않는 코어는 self-routing으로 값 유지)
"""

import math
import random
from collections import defaultdict, deque

try:
    from .ir import instr_reads, successors, wrap32
except ImportError:                       # GCC 플러그인 안에서는 패키지 없이 import
    from ir import instr_reads, successors, wrap32

LO, HI = -16, 15                          # [M6] Y-마스크 윈도우 (src - dst)
N_CORES = 126                             # r126/r127 예약
NEG_POOL = 4                              # 부호 반전 임시 코어 수

OP = {"ADD": 0x00, "EQZ": 0x01, "GTZ": 0x02, "NEQZ": 0x04, "GTEZ": 0x06,
      "SMT": 0x08, "SRSH": 0x0A, "LXY": 0x1F}
XD_MEM, HOLD, A_RD, A_WR, A_INC = 1 << 6, 1 << 11, 1 << 12, 1 << 13, 1 << 14
UNVERIFIED = {"SRSH", "EQZ", "NEQZ"}      # ISA 문서에는 있으나 FPGA 미검증

# [3.3] 비교 → (T로 가는 코어, F로 가는 코어). ("a-b") = a + (-b) 합
BRANCH_PAIRS = {
    ">":  (("GTZ", "a-b"), ("GTEZ", "b-a")),
    ">=": (("GTEZ", "a-b"), ("GTZ", "b-a")),
    "<":  (("GTZ", "b-a"), ("GTEZ", "a-b")),
    "<=": (("GTEZ", "b-a"), ("GTZ", "a-b")),
    "==": (("EQZ", "a-b"), ("NEQZ", "a-b")),
    "!=": (("NEQZ", "a-b"), ("EQZ", "a-b")),
}


class V2Error(Exception):
    """2.0 일반 경로로 번역할 수 없음."""


class Micro:
    """한 코어가 한 클럭에 하는 연산."""
    __slots__ = ("kind", "dst", "srcs", "imm", "cmp", "target", "note", "row")

    def __init__(self, kind, dst, srcs=(), imm=0, cmp=None, target=None, note=""):
        self.kind, self.dst, self.srcs = kind, dst, list(srcs)
        self.imm, self.cmp, self.target, self.note, self.row = imm, cmp, target, note, None

    def reads(self):
        r = list(self.srcs)
        if self.kind in ("smt", "srsh"):
            r.append(self.dst)           # 자기 코어 값을 읽는다 [M6]
        return r

    def writes(self):
        return [] if self.kind == "branch" else [self.dst]


class FunctionBackend:
    def __init__(self, fn, base_gpc, exit_gpc_fn):
        """exit_gpc_fn: 함수가 끝난 뒤 갈 GPC를 레이아웃 후에 돌려주는 함수."""
        self.fn = fn
        self.base_gpc = base_gpc
        self.exit_gpc_fn = exit_gpc_fn
        self.consts = {}                 # 값 → 코어 이름
        self.init = {}                   # 코어 이름 → 초기값 (LXY)
        self.n_tmp = 0
        self.n_neg = 0
        self.unverified = set()
        self.arrays = {}                 # 배열 → {"core", "dir", "init"}

    # ------------------------------------------------------------------ 1. 선택
    def const(self, v):
        v = wrap32(v)
        name = self.consts.get(v)
        if name is None:
            name = f"#{v}"
            self.consts[v] = name
            self.init[name] = v
        return name

    def tmp(self, tag):
        self.n_tmp += 1
        return f"~{tag}{self.n_tmp}"

    def opnd(self, o):
        return self.const(o[1]) if o[0] == "const" else o[1]

    def neg(self, o, out):
        """-o 를 담은 코어 이름. 상수면 상수 코어, 아니면 복사 + SMT ×(−1)."""
        if o[0] == "const":
            return self.const(-o[1])
        # 블록 안에서 바로 소비되는 임시값 → 작은 풀을 돌려 쓴다 (순서는 스케줄러의 WAR/WAW가 보장)
        t = f"~neg{self.n_neg % NEG_POOL}"
        self.n_neg += 1
        out.append(Micro("add", t, [o[1]], note=f"{t}={o[1]}"))
        out.append(Micro("smt", t, imm=-1, note=f"{t}*=-1"))
        return t

    def array_core(self, arr, direction):
        key = f"@{arr}:{direction}"
        info = self.fn.get("arrays", {}).get(arr, {})
        self.arrays.setdefault(arr, {"core": key, "dir": direction, "init": info.get("init", [])})
        if self.arrays[arr]["dir"] != direction:
            raise V2Error(f"array '{arr}' is both read and written (in-place update)")
        return key

    def select_instr(self, ins, out):
        op = ins["op"]
        d = ins.get("dst")
        if op == "copy":
            out.append(Micro("add", d, [self.opnd(ins["a"])], note=f"{d}={self._s(ins['a'])}"))
        elif op == "add":
            a, b = ins["a"], ins["b"]
            if a[0] == b[0] == "const":
                out.append(Micro("add", d, [self.const(a[1] + b[1])], note=f"{d}={a[1] + b[1]}"))
            elif a == b:
                out.append(Micro("add", d, [a[1]], note=f"{d}={a[1]}"))
                out.append(Micro("smt", d, imm=2, note=f"{d}*=2"))
            else:
                out.append(Micro("add", d, [self.opnd(a), self.opnd(b)],
                                 note=f"{d}={self._s(a)}+{self._s(b)}"))
        elif op == "sub":
            a, b = ins["a"], ins["b"]
            if a == b:
                out.append(Micro("add", d, [], note=f"{d}=0"))
            elif a[0] == b[0] == "const":
                out.append(Micro("add", d, [self.const(a[1] - b[1])], note=f"{d}={a[1] - b[1]}"))
            else:
                nb = self.neg(b, out)
                out.append(Micro("add", d, [self.opnd(a), nb], note=f"{d}={self._s(a)}-{self._s(b)}"))
        elif op in ("mul", "shl", "shr"):
            a, b = ins["a"], ins["b"]
            if op == "mul" and a[0] == "const" and b[0] == "var":
                a, b = b, a
            if b[0] != "const":
                raise V2Error(f"'{d} = {self._s(a)} {op} {self._s(b)}': variable × variable "
                              f"has no hardware operation")
            k = b[1]
            if op in ("shl", "shr") and not 0 <= k < 32:
                raise V2Error(f"shift amount {k} out of range")
            if a[0] == "const":
                v = a[1] * k if op == "mul" else (a[1] << k if op == "shl" else a[1] >> k)
                out.append(Micro("add", d, [self.const(v)], note=f"{d}={wrap32(v)}"))
                return
            if a[1] != d:
                out.append(Micro("add", d, [a[1]], note=f"{d}={a[1]}"))
            if op == "shr":
                self.unverified.add("SRSH")
                out.append(Micro("srsh", d, imm=k, note=f"{d}>>={k}"))
            else:
                m = k if op == "mul" else (1 << k)
                out.append(Micro("smt", d, imm=m, note=f"{d}*={wrap32(m)}"))
        elif op == "load":
            core = self.array_core(ins["array"], "in")
            out.append(Micro("aread", core, note=f"{ins['array']}[] read"))
            out.append(Micro("add", d, [core], note=f"{d}={ins['array']}[i]"))
        elif op == "store":
            core = self.array_core(ins["array"], "out")
            out.append(Micro("awrite", core, [self.opnd(ins["a"])],
                             note=f"{ins['array']}[i]={self._s(ins['a'])}"))
        else:
            raise V2Error(f"unsupported IR op '{op}'")

    @staticmethod
    def _s(o):
        return str(o[1])

    # ---------------------------------------------------- 1'. 분기 마이크로 연산
    @staticmethod
    def branch_core(target):
        """분기 코어는 X에 목표 GPC만 들고 있고 자기 행에서만 동작한다 → 목표마다 코어 하나 [M3]."""
        return f"~br:{target}"

    def select_term(self, blk, out):
        t = blk["term"]
        if t["kind"] == "br" and t["t"] == t["f"]:
            return []                     # 양쪽이 같으면 무조건 분기 (compile 에서 jump 처리)
        if t["kind"] == "br":
            pair = BRANCH_PAIRS[t["cmp"]]
            sums = {}
            for _, form in pair:
                if form in sums:
                    continue
                x, yv = (t["a"], t["b"]) if form == "a-b" else (t["b"], t["a"])
                if x[0] == yv[0] == "const":
                    sums[form] = [self.const(x[1] - yv[1])]
                else:
                    sums[form] = [self.opnd(x), self.neg(yv, out)]
            res = []
            for (opname, form), target in zip(pair, (t["t"], t["f"])):
                if opname in UNVERIFIED:
                    self.unverified.add(opname)
                bc = self.branch_core(target)
                res.append(Micro("branch", bc, sums[form], cmp=opname, target=target,
                                 note=f"{opname}({form}) -> {target}"))
            return res
        return []                         # jump/ret 은 레이아웃에서 결정

    # ------------------------------------------------------------- 2. 스케줄링
    @staticmethod
    def schedule(micros, branches):
        """[3.4] 프로그램 순서를 유지하는 ASAP. 분기 코어는 블록의 마지막 행."""
        last_write, last_read = {}, defaultdict(lambda: -1)
        for u in micros:
            row = 0
            for r in u.reads():
                if r in last_write:
                    row = max(row, last_write[r] + 1)                # RAW
            for w in u.writes():
                row = max(row, last_read[w])                         # WAR
                if w in last_write:
                    row = max(row, last_write[w] + 1)                # WAW
            u.row = row
            for r in u.reads():
                last_read[r] = max(last_read[r], row)
            for w in u.writes():
                last_write[w] = row
        n_rows = 1 + max((u.row for u in micros), default=-1)
        if branches:
            brow = max([n_rows - 1, 0] + [last_write[r] + 1 for b in branches
                                          for r in b.srcs if r in last_write])
            for b in branches:
                b.row = brow
            n_rows = brow + 1
        return n_rows

    # -------------------------------------------------------------- 3. 배치
    @staticmethod
    def rcm_order(nodes, edges):
        adj = defaultdict(set)
        for a, b in edges:
            if a != b:
                adj[a].add(b)
                adj[b].add(a)
        seen, order = set(), []
        for start in sorted(nodes, key=lambda n: (len(adj[n]), n)):
            if start in seen:
                continue
            seen.add(start)
            q = deque([start])
            while q:
                n = q.popleft()
                order.append(n)
                for m in sorted(adj[n] - seen, key=lambda x: (len(adj[x]), x)):
                    seen.add(m)
                    q.append(m)
        return order[::-1]

    # ---------------------------------------------------------- 전체 컴파일
    def compile(self):
        fn = self.fn
        blocks = {b["name"]: b for b in fn["blocks"]}
        order = self._block_order(blocks)

        # 진입 블록 앞쪽의 상수 대입은 초기값(LXY)으로 흡수
        entry = blocks[fn["entry"]]
        entry_is_target = any(fn["entry"] in successors(b["term"]) for b in fn["blocks"])
        kept, read_so_far = [], set()
        for ins in entry["instrs"]:
            if (not entry_is_target and ins["op"] == "copy" and ins["a"][0] == "const"
                    and ins["dst"] not in read_so_far and ins["dst"] not in self.init and not kept):
                self.init[ins["dst"]] = wrap32(ins["a"][1])
                continue
            kept.append(ins)
            read_so_far.update(instr_reads(ins))
        entry_instrs = {fn["entry"]: kept}

        per_block = {}
        for name in order:
            b = blocks[name]
            micros = []
            for ins in entry_instrs.get(name, b["instrs"]):
                self.select_instr(ins, micros)
            branches = self.select_term(b, micros)
            per_block[name] = [micros, branches]

        # 무조건 분기 [3.3]: GTZ(상수 1) → 목표. 다음 블록으로 바로 넘어가면 필요 없다 [M2]
        self.need_jump = {}
        for i, name in enumerate(order):
            t = blocks[name]["term"]
            nxt = order[i + 1] if i + 1 < len(order) else None
            if t["kind"] == "br" and t["t"] == t["f"]:
                t = {"kind": "jump", "target": t["t"]}
            if t["kind"] == "jump":
                need = t["target"] != nxt
                target = t["target"]
            elif t["kind"] == "ret":
                need = nxt is not None          # 마지막 블록이면 함수 끝 다음 GPC로 넘어간다
                target = "__exit__"
            else:
                need = False
            self.need_jump[name] = need
            if need:
                bc = self.branch_core(target)
                # 자기 X(= 목표 GPC ≥ 1)를 검사하므로 항상 분기한다 — 상수 코어가 필요 없다
                per_block[name][1].append(
                    Micro("branch", bc, [bc], cmp="GTZ", target=target,
                          note=f"jump -> {target}"))

        self.place(per_block)

        # 블록별 행 수
        sizes = {}
        for name in order:
            micros, branches = per_block[name]
            sizes[name] = self.schedule(micros, branches) if (micros or branches) else 0

        # 레이아웃: 초기화 행 + 블록 행. 분기 없는 블록 끝은 다음 블록으로 넘어가야 한다.
        return self._layout(order, blocks, per_block, sizes)

    def _block_order(self, blocks):
        seen, post = set(), []

        def dfs(n):
            seen.add(n)
            for s in successors(blocks[n]["term"]):
                if s not in seen:
                    dfs(s)
            post.append(n)
        dfs(self.fn["entry"])
        return post[::-1]

    def place(self, per_block):
        """[3.5] 배치. 연결 (소비 코어, 소스)마다 경로를 두고 반복한다:
          담금질로 윈도우 위반 최소화 → 남은 위반 연결에 릴레이 코어(상수는 복제본)를 끼워 넣음
          → 새 코어까지 포함해 다시 담금질 … 위반이 0이 될 때까지.
        끝나면 모든 연결이 윈도우 안이므로, 블록 코드에 릴레이 복사만 넣으면 된다."""
        nodes, links = set(self.init), set()
        for micros, branches in per_block.values():
            for u in micros + branches:
                nodes.add(u.dst)
                nodes.update(u.srcs)
                if u.kind in ("add", "awrite", "branch"):
                    links.update((u.dst, s) for s in u.srcs if s != u.dst)
        for arr in self.arrays.values():
            nodes.add(arr["core"])
        self.via = {k: [] for k in sorted(links)}   # (소비 코어, 소스) → 소스 쪽부터의 경유 코어

        def edges():
            for (d, s), path in self.via.items():
                hops = [s] + path + [d]
                for a, b in zip(hops, hops[1:]):
                    yield (b, a)                   # (읽는 코어, 읽히는 코어)

        pos = None
        for rnd in range(10):
            if len(nodes) > N_CORES:
                raise V2Error(f"needs {len(nodes)} cores (> {N_CORES})")
            es = sorted(set(edges()))
            pos = self.anneal(nodes, es, pos, temp0=24 if rnd == 0 else 6)
            bad = {e for e in es if not LO <= pos[e[1]] - pos[e[0]] <= HI}
            if not bad:
                break
            for (d, s), path in self.via.items():
                hops = [s] + path + [d]
                for i in range(len(hops) - 1):
                    if (hops[i + 1], hops[i]) not in bad:
                        continue
                    if i == 0 and s.startswith("#") and s in self.init:
                        r = f"{s}@{d}"                     # 상수 복제본: LXY 초기값만, 실행 비용 0
                        self.init[r] = self.init[s]
                    else:
                        r = f"~relay{self.n_tmp}"
                        self.n_tmp += 1
                    nodes.add(r)
                    path.insert(i, r)
                    break                                  # 연결당 한 라운드에 하나씩
        else:
            raise V2Error("mesh window: placement did not converge")
        self.pos = pos
        self._route(per_block)

    @staticmethod
    def anneal(nodes, edges, pos=None, temp0=24, iters=30000):
        """코어 슬롯(0..125) 위의 배치. 비용 = 윈도우를 벗어난 연결 수(+초과 거리). 결정적(seed 0).
        pos 가 주어지면 그 배치에서 시작하고, 새 코어는 이웃 가까운 빈 슬롯에 둔다."""
        inc = defaultdict(list)
        for e in edges:
            inc[e[0]].append(e)
            inc[e[1]].append(e)
        if pos is None:
            order = FunctionBackend.rcm_order(nodes, edges)
            # 빈 슬롯이 사이사이에 남도록 고르게 펼쳐 놓는다
            pos = {v: i * N_CORES // len(order) for i, v in enumerate(order)}
        else:
            pos = {v: p for v, p in pos.items() if v in nodes}
            free = set(range(N_CORES)) - set(pos.values())
            for v in sorted(set(nodes) - set(pos)):
                nb = [pos[x] for e in inc[v] for x in e if x != v and x in pos]
                goal = sum(nb) / len(nb) if nb else N_CORES / 2
                q = min(free, key=lambda q: abs(q - goal))
                free.remove(q)
                pos[v] = q

        def cost(e):
            d = pos[e[1]] - pos[e[0]]
            return 0 if LO <= d <= HI else 16 + max(LO - d, d - HI)     # 정수 → 순서 무관

        total = sum(cost(e) for e in edges)
        if total == 0:
            return pos
        occ = {p: v for v, p in pos.items()}
        rng = random.Random(0)
        movable = sorted(v for v in nodes if inc[v])
        for it in range(iters):
            temp = temp0 * (1 - it / iters) + 0.3
            v = rng.choice(movable)
            e = rng.choice(inc[v])
            anchor = pos[e[1] if e[0] == v else e[0]]
            p = min(N_CORES - 1, max(0, anchor + rng.randint(LO + 1, HI - 1)))
            q = pos[v]
            if p == q:
                continue
            w = occ.get(p)
            aff = set(inc[v]) | (set(inc[w]) if w is not None else set())
            before = sum(cost(x) for x in aff)
            pos[v] = p
            if w is not None:
                pos[w] = q
            delta = sum(cost(x) for x in aff) - before
            if delta <= 0 or rng.random() < math.exp(-delta / temp):
                occ[p] = v
                if w is not None:
                    occ[q] = w
                else:
                    del occ[q]
                total += delta
                if total == 0:
                    break
            else:
                pos[v] = q
                if w is not None:
                    pos[w] = p
        return pos

    def _route(self, per_block):
        """경유 코어를 블록 코드에 반영한다. 상수 복제본은 복사가 필요 없고, 릴레이는 소스에서
        차례로 복사한다. 블록 안에서는 소스가 다시 쓰이기 전까지 이미 복사한 경로를 재사용한다."""
        for name, (micros, branches) in per_block.items():
            new, fresh = [], set()
            for u in micros + branches:
                if u.kind in ("add", "awrite", "branch"):
                    srcs = []
                    for s in u.srcs:
                        path = self.via.get((u.dst, s)) or []
                        if not path:
                            srcs.append(s)
                            continue
                        if (u.dst, s) not in fresh:
                            prev = s
                            for r in path:
                                if r.startswith("#"):          # 상수 복제본
                                    prev = r
                                    continue
                                new.append(Micro("add", r, [prev], note=f"{r}={prev}"))
                                prev = r
                            fresh.add((u.dst, s))
                        srcs.append(path[-1])
                    u.srcs = srcs
                for w in u.writes():                     # 소스가 바뀌면 경로는 다시 복사
                    fresh = {k for k in fresh if k[1] != w}
                if u.kind != "branch":
                    new.append(u)
            per_block[name][0] = new

    def _layout(self, order, blocks, per_block, sizes):
        start, g = {}, self.base_gpc + 1                    # base_gpc = 초기화 행
        for name in order:
            start[name] = g
            g += sizes[name]
        end_gpc = g - 1
        exit_gpc = self.exit_gpc_fn(end_gpc)
        # 크기 0인 블록(빈 블록, 다음 블록으로 넘어감)은 다음 블록 시작과 같다
        for i in range(len(order) - 1, -1, -1):
            if sizes[order[i]] == 0:
                start[order[i]] = start[order[i + 1]] if i + 1 < len(order) else exit_gpc
        for name in order:
            for b in per_block[name][1]:
                b.target = exit_gpc if b.target == "__exit__" else start[b.target]
                self.init[b.dst] = b.target                  # [M3] 분기 코어 X = 목표 GPC

        # 초기화 행: 할당된 모든 코어를 LXY (초기값 없으면 0). LXY는 A-bank 주소도 0으로 [M7a]
        rows = {self.base_gpc: {c: ("LXY", self.init.get(n, 0), f"{n}={self.init.get(n, 0)}")
                                for n, c in self.pos.items()}}
        for name in order:
            micros, branches = per_block[name]
            for k in range(sizes[name]):
                rows.setdefault(start[name] + k, {})
            for u in micros + branches:
                rows[start[name] + u.row][self.pos[u.dst]] = self._encode(u)
        self.end_gpc = end_gpc
        self.exit_gpc = exit_gpc
        return rows

    def _encode(self, u):
        mask = 0
        for s in u.srcs:
            mask |= 1 << (16 + self.pos[s] - self.pos[u.dst])
        if u.kind == "add":
            return ("ADD", (OP["ADD"], mask), u.note)
        if u.kind == "smt":
            return ("SMT", (OP["SMT"], wrap32(u.imm) & 0xFFFFFFFF), u.note)
        if u.kind == "srsh":
            return ("SRSH", (OP["SRSH"], u.imm), u.note)
        if u.kind == "aread":                                    # [M7]
            return ("ADD", (OP["ADD"] | XD_MEM | A_RD | A_INC, 1 << 16), u.note)
        if u.kind == "awrite":                                   # [M7]
            return ("ADD", (OP["ADD"] | A_RD | A_WR | A_INC, mask), u.note)
        if u.kind == "branch":                                   # [M2]
            return (u.cmp, (OP[u.cmp] | HOLD, mask), u.note)
        raise V2Error(u.kind)

    # ---------------------------------------------------------- 결과 정리
    def emit_words(self, rows):
        """{GPC: {core: (mnemonic, (z, y) | value, note)}} → {addr: (z, y, note)}.
        쓰지 않는 코어는 self-routing으로 값 유지 [M5]."""
        used = set(self.pos.values())
        words = {}
        for g, cores in rows.items():
            for c in range(128):
                if c in cores:
                    mn, zy, note = cores[c]
                    if mn == "LXY":
                        words[g * 128 + c] = (OP["LXY"], wrap32(zy) & 0xFFFFFFFF, note)
                    else:
                        words[g * 128 + c] = (zy[0], zy[1], note)
                elif c in used:
                    words[g * 128 + c] = (OP["ADD"], 1 << 16, "")
                else:
                    words[g * 128 + c] = (0, 0, "")
        return words

    def symbols(self):
        inv = {c: n for n, c in self.pos.items()}
        ret = None
        for b in self.fn["blocks"]:
            t = b["term"]
            if t["kind"] == "ret" and t.get("val"):
                v = t["val"]
                ret = {"const": v[1]} if v[0] == "const" else {"core": self.pos.get(v[1])}
        return {
            "name": self.fn["name"], "gpc_start": self.base_gpc, "gpc_end": self.end_gpc,
            "exit_gpc": self.exit_gpc, "return": ret,
            "arrays": {a: {"core": self.pos[i["core"]], "dir": i["dir"], "init": i["init"]}
                       for a, i in self.arrays.items()},
            "vars": {n: c for n, c in self.pos.items()
                     if not n.startswith(("#", "~", "@"))},
            "cores_used": len(self.pos), "rows": self.end_gpc - self.base_gpc + 1,
            "unverified_ops": sorted(self.unverified),
            "core_names": {str(c): inv[c] for c in sorted(inv)},
        }
