"""
streams.py — 배열 접근이 A-bank 스트림 [M7, M7a] 으로 정확히 표현되는지 IR 위에서 검사한다.

A-bank 는 읽기/쓰기마다 주소가 1 증가하고, 주소는 함수 진입 시(LXY) 0으로 돌아간다.
따라서 C 의미와 같으려면 각 배열 접근 a[i] 가 다음을 만족해야 한다.
  S1  배열마다 접근 지점은 하나 (읽기 전용 또는 쓰기 전용 — 제자리 갱신 불가)
  S2  접근 블록을 품은 루프가 정확히 하나 (깊이 1) — 바깥 루프가 있으면 주소가 다시 0이 되지 않는다
  S3  접근 블록이 그 루프의 모든 latch 를 지배 — 반복마다 정확히 한 번 실행
  S4  i 는 그 루프의 유도 변수: 루프 밖 정의는 모두 'i = 0', 루프 안 정의는 'i = i + 1' 하나뿐이고
      그 정의는 접근 뒤에 실행된다 (같은 블록이면 뒤 순서, 다른 블록이면 접근 블록이 지배)
"""

try:
    from .backend import V2Error
    from .ir import successors
except ImportError:
    from backend import V2Error
    from ir import successors


def dominators(fn):
    blocks = {b["name"]: b for b in fn["blocks"]}
    preds = {n: [] for n in blocks}
    for b in fn["blocks"]:
        for s in successors(b["term"]):
            preds[s].append(b["name"])
    # 도달 가능한 블록만
    reach, stack = set(), [fn["entry"]]
    while stack:
        n = stack.pop()
        if n not in reach:
            reach.add(n)
            stack += successors(blocks[n]["term"])
    dom = {n: set(reach) for n in reach}
    dom[fn["entry"]] = {fn["entry"]}
    changed = True
    while changed:
        changed = False
        for n in reach:
            if n == fn["entry"]:
                continue
            ps = [dom[p] for p in preds[n] if p in reach]
            new = set.intersection(*ps) | {n} if ps else {n}
            if new != dom[n]:
                dom[n], changed = new, True
    return dom, preds, reach


def natural_loops(fn):
    """[(header, body 집합, latch 목록)] — 같은 header 의 back edge 는 합친다."""
    dom, preds, reach = dominators(fn)
    loops = {}
    for n in reach:
        for p in preds[n]:
            if p in reach and n in dom[p]:                  # p → n back edge
                body, stack = {n, p}, [p]
                while stack:
                    m = stack.pop()
                    if m == n:
                        continue
                    for q in preds[m]:
                        if q in reach and q not in body:
                            body.add(q)
                            stack.append(q)
                h = loops.setdefault(n, [set(), []])
                h[0] |= body
                h[1].append(p)
    return dom, [(h, b, l) for h, (b, l) in loops.items()]


def reuse_loads(fn):
    """같은 블록에서 a[i] 를 다시 읽으면(그 사이 i·첫 결과·a 가 바뀌지 않았으면) 첫 결과를 복사한다.
    C 의미는 같고, 접근 지점이 하나로 줄어 S1을 만족할 수 있다."""
    for b in fn["blocks"]:
        seen = {}                                   # (배열, 인덱스) → 첫 load 의 dst
        new = []
        for ins in b["instrs"]:
            fresh_key = None
            if ins["op"] == "load":
                key = (ins["array"], tuple(ins["index"]))
                if key in seen:
                    ins = {"op": "copy", "dst": ins["dst"], "a": ("var", seen[key])}
                else:
                    fresh_key = key
            elif ins["op"] == "store":
                seen = {k: v for k, v in seen.items() if k[0] != ins["array"]}
            d = ins.get("dst")
            if d:                                   # d 가 바뀌면 d 를 값/인덱스로 쓰는 기록은 무효
                seen = {k: v for k, v in seen.items() if v != d and k[1] != ("var", d)}
            if fresh_key and fresh_key[1] != ("var", ins["dst"]):
                seen[fresh_key] = ins["dst"]
            new.append(ins)
        b["instrs"] = new
    return fn


def _reaching_defs(fn, blocks, header, body, var):
    """루프 밖에서 header 로 들어오는 경로마다 마지막 var 정의. 정의 없이 함수 시작(또는
    매개변수)에 닿는 경로가 있으면 None."""
    preds = {n: [] for n in blocks}
    for b in fn["blocks"]:
        for s in successors(b["term"]):
            preds[s].append(b["name"])
    found, seen = [], set()
    stack = [p for p in preds[header] if p not in body]
    while stack:
        n = stack.pop()
        if n in seen:
            continue
        seen.add(n)
        last = next((ins for ins in reversed(blocks[n]["instrs"]) if ins.get("dst") == var), None)
        if last is not None:
            found.append(last)
            continue
        if n == fn["entry"]:
            return None
        stack += preds[n]
    return found


def check_streams(fn):
    blocks = {b["name"]: b for b in fn["blocks"]}
    dom, loops = natural_loops(fn)
    sites = {}
    for b in fn["blocks"]:
        if b["name"] not in dom:
            continue
        for k, ins in enumerate(b["instrs"]):
            if ins["op"] in ("load", "store"):
                sites.setdefault(ins["array"], []).append((b["name"], k, ins))

    def defs_of(var):
        return [(b["name"], k, ins) for b in fn["blocks"] if b["name"] in dom
                for k, ins in enumerate(b["instrs"]) if ins.get("dst") == var]

    for arr, ss in sites.items():
        if len(ss) != 1:
            raise V2Error(f"array '{arr}' is accessed at {len(ss)} places "
                          f"(A-bank stream allows exactly one access site) [S1]")
        bname, k, ins = ss[0]
        what = f"{arr}[{ins['index'][1]}]"
        inside = [lp for lp in loops if bname in lp[1]]
        if len(inside) != 1:
            raise V2Error(f"'{what}' must be inside exactly one loop (depth {len(inside)}) [S2]")
        header, body, latches = inside[0]
        if any(bname not in dom[l] for l in latches):
            raise V2Error(f"'{what}' is not executed on every iteration [S3]")
        idx = ins["index"]
        if idx[0] != "var":
            raise V2Error(f"'{what}': constant index is not a stream [S4]")
        i = idx[1]
        inc = [(db, dk, d) for db, dk, d in defs_of(i) if db in body]
        entry_defs = _reaching_defs(fn, blocks, header, body, i)
        if entry_defs is None or not all(d["op"] == "copy" and tuple(d["a"]) == ("const", 0)
                                         for d in entry_defs):
            raise V2Error(f"'{what}': index '{i}' must start at 0 before the loop [S4]")
        if len(inc) != 1:
            raise V2Error(f"'{what}': index '{i}' must be updated exactly once per iteration [S4]")
        db, dk, d = inc[0]
        if not (d["op"] == "add" and {tuple(d["a"]), tuple(d["b"])} == {("var", i), ("const", 1)}):
            raise V2Error(f"'{what}': index '{i}' must step by +1 [S4]")
        if any(db not in dom[l] for l in latches):
            raise V2Error(f"'{what}': index '{i}' is not updated on every iteration [S4]")
        after = (dk > k) if db == bname else (bname in dom[db] and db != header)
        if not after:
            raise V2Error(f"'{what}': index '{i}' must be updated after the access [S4]")
    return True
