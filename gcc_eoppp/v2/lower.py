"""
lower.py — GIMPLE SSA (gcc-python-plugin) → 2.0 IR.  GCC 플러그인 안에서만 import 한다.

  변수     SSA 버전을 기본 변수 이름으로 합친다 (out-of-SSA). 같은 이름의 두 버전이 동시에
           살아 있으면(간섭) 뒤 버전에 새 이름(acc.2)을 준다. 이름 없는 임시값은 t.<버전>.
  PHI      선행 블록 끝의 복사로 바꾼다. 선행 블록에 후속이 둘 이상이면(임계 간선) 간선을
           쪼갠 새 블록에 넣는다. 한 간선의 복사들은 병렬 복사이므로 서로 겹치면 임시값을 거친다.
  배열     전역 int 배열의 a[i] 읽기/쓰기 → load/store. 스트림 조건 검사는 인라이닝 뒤 IR에서
           (streams.py).
  호출     본문이 있는 사용자 함수 → call (inline.py 가 펼친다). printf 등 IGNORED 는 버린다.
  타입     32비트 부호 정수만 (2.0 일반 경로). 64비트/부호 없는/포인터/실수는 거부.
"""

import gcc

try:
    from .backend import V2Error
except ImportError:
    from backend import V2Error

ARITH = {"PlusExpr": "add", "MinusExpr": "sub", "MultExpr": "mul",
         "LshiftExpr": "shl", "RshiftExpr": "shr"}
COPY = {"SsaName", "IntegerCst", "NopExpr", "ConvertExpr"}
CMP = {"GtExpr": ">", "GeExpr": ">=", "LtExpr": "<", "LeExpr": "<=",
       "EqExpr": "==", "NeExpr": "!="}
SKIP = (gcc.GimpleLabel, gcc.GimpleNop, gcc.GimplePredict)


def _int32(t):
    return (isinstance(t, gcc.IntegerType) and t.precision == 32 and not t.unsigned)


def _code(s):
    return s.exprcode.__name__


def _is_virtual(name):
    v = getattr(name, "var", None)
    return v is not None and getattr(v, "name", None) == ".MEM"


def _is_default(name):
    return str(name).endswith("(D)")


class Lowerer:
    def __init__(self, fun, ignored=()):
        self.fun = fun
        self.fname = fun.decl.name
        self.ignored = set(ignored)
        self.arrays = {}
        self.calls = set()
        self.callees = {}                     # 이름 → gcc.Function (인라이닝용으로 함께 내린다)

    def fail(self, what, why):
        raise V2Error(f"{self.fname}: {why}: '{what}'")

    # ---------------------------------------------------------------- 검사
    def _check_type(self, node, what):
        t = getattr(node, "type", None)
        if not _int32(t):
            self.fail(what, f"type '{t}' is not supported in the 2.0 general path "
                            f"(32-bit signed int only)")

    def _array(self, ref, what):
        arr = ref.array
        if not isinstance(arr, gcc.VarDecl) or not getattr(arr, "static", False):
            self.fail(what, "only global (static storage) arrays can be streamed")
        if not _int32(arr.type.type):
            self.fail(what, f"array element type '{arr.type.type}' is not 32-bit signed int")
        name = arr.name
        if name not in self.arrays:
            size = int(arr.type.range.max_value) + 1 if arr.type.range else 0
            init = [0] * size
            if arr.initial is not None:
                for k, v in arr.initial.elements:
                    if not isinstance(v, gcc.IntegerCst):
                        self.fail(what, "array initializer is not an integer constant")
                    idx = int(k.constant) if isinstance(k, gcc.IntegerCst) else None
                    if idx is None or not 0 <= idx < size:
                        self.fail(what, "array initializer index is not a constant")
                    init[idx] = int(v.constant)
            self.arrays[name] = {"size": size, "init": init}
        return name

    # ---------------------------------------------------- SSA 이름 → 변수 이름
    def _ssa_blocks(self):
        """블록마다 (PHI 목록, 문장 목록), 비가상 PHI만."""
        out = {}
        for bb in self.fun.cfg.basic_blocks:
            phis = [p for p in (bb.phi_nodes or []) if not _is_virtual(p.lhs)]
            out[bb.index] = (bb, phis, list(bb.gimple or []))
        return out

    @staticmethod
    def _uses(s):
        nodes = []
        if isinstance(s, gcc.GimpleAssign):
            nodes = list(s.rhs)
            if isinstance(s.lhs, gcc.ArrayRef):
                nodes.append(s.lhs.index)
            for r in s.rhs:
                if isinstance(r, gcc.ArrayRef):
                    nodes.append(r.index)
        elif isinstance(s, gcc.GimpleCond):
            nodes = [s.lhs, s.rhs]
        elif isinstance(s, gcc.GimpleReturn):
            nodes = [s.retval]
        elif isinstance(s, gcc.GimpleCall):
            nodes = list(s.args)
        return [n for n in nodes if isinstance(n, gcc.SsaName) and not _is_virtual(n)]

    @staticmethod
    def _def(s):
        lhs = getattr(s, "lhs", None) if isinstance(s, (gcc.GimpleAssign, gcc.GimpleCall)) else None
        return lhs if isinstance(lhs, gcc.SsaName) and not _is_virtual(lhs) else None

    def _assign_names(self, blocks):
        """간섭 그래프로 같은 기본 이름의 SSA 버전을 합친다."""
        live_in, live_out = {}, {}
        use_b, def_b, phi_def, phi_use = {}, {}, {}, {}
        for i, (bb, phis, stmts) in blocks.items():
            u, d = set(), set()
            for s in stmts:
                for n in self._uses(s):
                    if n.version not in d:
                        u.add(n.version)
                x = self._def(s)
                if x is not None:
                    d.add(x.version)
            use_b[i], def_b[i] = u, d
            phi_def[i] = {p.lhs.version for p in phis}
            for p in phis:
                for a, e in p.args:
                    if isinstance(a, gcc.SsaName) and not _is_virtual(a):
                        phi_use.setdefault((e.src.index, i), set()).add(a.version)
            live_in[i], live_out[i] = set(), set()
        changed = True
        while changed:
            changed = False
            for i, (bb, _, _) in blocks.items():
                out = set()
                for e in bb.succs:
                    j = e.dest.index
                    out |= (live_in.get(j, set()) - phi_def.get(j, set()))
                    out |= phi_use.get((i, j), set())
                inn = use_b[i] | (out - def_b[i]) | phi_def[i]
                if out != live_out[i] or inn != live_in[i]:
                    live_out[i], live_in[i], changed = out, inn, True

        nodes = {}                                    # version → SsaName
        for i, (bb, phis, stmts) in blocks.items():
            for p in phis:
                nodes[p.lhs.version] = p.lhs
                for a, _ in p.args:
                    if isinstance(a, gcc.SsaName) and not _is_virtual(a):
                        nodes[a.version] = a
            for s in stmts:
                for n in self._uses(s) + [x for x in [self._def(s)] if x is not None]:
                    nodes[n.version] = n

        interf = set()

        def add(a, b):
            if a != b:
                interf.add((min(a, b), max(a, b)))
        for i, (bb, phis, stmts) in blocks.items():
            live = set(live_out[i])
            for s in reversed(stmts):
                x = self._def(s)
                if x is not None:
                    for w in live:
                        add(x.version, w)
                    live.discard(x.version)
                live |= {n.version for n in self._uses(s)}
            pd = phi_def[i]
            for a in pd:
                for w in (live | pd):
                    add(a, w)

        def base(v):
            var = getattr(nodes[v], "var", None)
            return getattr(var, "name", None) if var is not None else None

        self.names, classes = {}, {}
        for v in sorted(nodes):
            b = base(v)
            if b is None:
                self.names[v] = f"t.{v}"
                continue
            for k, members in enumerate(classes.setdefault(b, [])):
                if all((min(v, m), max(v, m)) not in interf for m in members):
                    members.append(v)
                    self.names[v] = b if k == 0 else f"{b}.{k}"
                    break
            else:
                k = len(classes[b])
                classes[b].append([v])
                self.names[v] = b if k == 0 else f"{b}.{k}"
        self.nodes = nodes

    def opnd(self, n, what):
        if isinstance(n, gcc.IntegerCst):
            self._check_type(n, what)
            return ("const", int(n.constant))
        if isinstance(n, gcc.SsaName):
            self._check_type(n, what)
            if _is_default(n) and not isinstance(n.var, gcc.ParmDecl):
                self.fail(what, "reads an uninitialized variable")
            return ("var", self.names[n.version])
        self.fail(what, f"operand '{n}' ({type(n).__name__}) is not a register value "
                        f"(global scalars / pointers are not supported)")

    # ---------------------------------------------------------------- 문장
    def lower_stmt(self, s, out):
        if isinstance(s, SKIP) or type(s).__name__ == "GimpleDebug":
            return
        if isinstance(s, gcc.GimpleCall):
            name = s.fndecl.name if s.fndecl else None
            if name in self.ignored:
                return
            if name is None or getattr(s.fndecl, "function", None) is None:
                self.fail(s, "call to a function without a body")
            self.calls.add(name)
            self.callees[name] = s.fndecl.function
            dst = None
            if s.lhs is not None:
                if not isinstance(s.lhs, gcc.SsaName):
                    self.fail(s, "call result stored to memory")
                self._check_type(s.lhs, s)
                dst = self.names[s.lhs.version]
            out.append({"op": "call", "dst": dst, "func": name,
                        "args": [self.opnd(a, s) for a in s.args]})
            return
        if not isinstance(s, gcc.GimpleAssign):
            self.fail(s, f"unsupported statement {type(s).__name__}")
        code = _code(s)
        if isinstance(s.lhs, gcc.ArrayRef):                         # 배열 쓰기
            arr = self._array(s.lhs, s)
            if len(s.rhs) != 1 or code not in COPY:
                self.fail(s, "array store must store a register value")
            out.append({"op": "store", "array": arr, "index": self.opnd(s.lhs.index, s),
                        "a": self.opnd(s.rhs[0], s)})
            return
        if not isinstance(s.lhs, gcc.SsaName):
            self.fail(s, "store to a global scalar / memory is not supported")
        self._check_type(s.lhs, s)
        d = self.names[s.lhs.version]
        if code == "ArrayRef":                                      # 배열 읽기
            ref = s.rhs[0]
            arr = self._array(ref, s)
            out.append({"op": "load", "dst": d, "array": arr, "index": self.opnd(ref.index, s)})
        elif code in COPY and len(s.rhs) == 1:
            out.append({"op": "copy", "dst": d, "a": self.opnd(s.rhs[0], s)})
        elif code == "NegateExpr":
            out.append({"op": "sub", "dst": d, "a": ("const", 0), "b": self.opnd(s.rhs[0], s)})
        elif code in ARITH and len(s.rhs) == 2:
            out.append({"op": ARITH[code], "dst": d, "a": self.opnd(s.rhs[0], s),
                        "b": self.opnd(s.rhs[1], s)})
        else:
            self.fail(s, f"operation {code} has no 2.0 lowering")

    # ---------------------------------------------------------------- 함수
    def lower(self):
        fun = self.fun
        if fun.decl.result is not None and not isinstance(fun.decl.result.type, gcc.VoidType):
            if not _int32(fun.decl.result.type):
                self.fail(self.fname, f"return type '{fun.decl.result.type}' is not int")
        params = []
        for p in (fun.decl.arguments or []):
            if not _int32(p.type):
                self.fail(p.name, f"parameter type '{p.type}' is not int")
        blocks = self._ssa_blocks()
        self._assign_names(blocks)
        # 매개변수 이름: 기본 정의(D)의 이름. 쓰이지 않는 매개변수도 자리를 둔다.
        dflt = {n.var.name: self.names[v] for v, n in self.nodes.items()
                if _is_default(n) and isinstance(n.var, gcc.ParmDecl)}
        params = [dflt.get(p.name, f"{p.name}.unused") for p in (fun.decl.arguments or [])]

        entry_idx, exit_idx = fun.cfg.entry.index, fun.cfg.exit.index
        ir_blocks, extra = [], []
        n_pc = [0]

        def label(i):
            return f"B{i}"

        def phi_copies(src, dst):
            _, phis, _ = blocks[dst]
            pairs = []
            for p in phis:
                for a, e in p.args:
                    if e.src.index == src:
                        d, o = self.names[p.lhs.version], self.opnd(a, p)
                        if o != ("var", d):
                            pairs.append((d, o))
            if any(("var", d) in [o for _, o in pairs] for d, _ in pairs):  # 병렬 복사 충돌
                tmps = []
                for d, o in pairs:
                    n_pc[0] += 1
                    tmps.append((d, f"pc.{n_pc[0]}", o))
                return ([{"op": "copy", "dst": t, "a": o} for d, t, o in tmps] +
                        [{"op": "copy", "dst": d, "a": ("var", t)} for d, t, o in tmps])
            return [{"op": "copy", "dst": d, "a": o} for d, o in pairs]

        def edge_to(src, dst, multi):
            """src → dst 간선의 목표 라벨. PHI 복사가 필요하면 (임계 간선이면 쪼개서) 넣는다."""
            if dst == exit_idx:
                self.fail(f"BB {src}", "falls off the function end without return")
            cps = phi_copies(src, dst)
            if not cps or not multi:
                return label(dst), cps
            name = f"E{src}_{dst}"
            extra.append({"name": name, "instrs": cps, "term": {"kind": "jump", "target": label(dst)}})
            return name, []

        entry = None
        for i, (bb, phis, stmts) in sorted(blocks.items()):
            if i in (entry_idx, exit_idx):
                continue
            instrs, term = [], None
            for s in stmts:
                if isinstance(s, gcc.GimpleCond):
                    cmp = CMP.get(_code(s))
                    if cmp is None:
                        self.fail(s, f"comparison {_code(s)}")
                    t = f = None
                    for e in bb.succs:
                        if e.true_value:
                            t = e.dest.index
                        elif e.false_value:
                            f = e.dest.index
                    tl, _ = edge_to(i, t, True)
                    fl, _ = edge_to(i, f, True)
                    term = {"kind": "br", "cmp": cmp, "a": self.opnd(s.lhs, s),
                            "b": self.opnd(s.rhs, s), "t": tl, "f": fl}
                elif isinstance(s, gcc.GimpleReturn):
                    rv = s.retval
                    term = {"kind": "ret", "val": self.opnd(rv, s) if rv is not None else None}
                elif isinstance(s, gcc.GimpleSwitch):
                    self.fail(s, "switch statement")
                else:
                    self.lower_stmt(s, instrs)
            if term is None:
                succs = list(bb.succs)
                if len(succs) != 1:
                    self.fail(f"BB {i}", "block with several successors but no condition")
                tl, cps = edge_to(i, succs[0].dest.index, False)
                instrs += cps
                term = {"kind": "jump", "target": tl}
            ir_blocks.append({"name": label(i), "instrs": instrs, "term": term})
        for e in fun.cfg.entry.succs:
            entry = label(e.dest.index)
            if phi_copies(entry_idx, e.dest.index):
                self.fail(f"BB {e.dest.index}", "PHI on the function entry edge")
        return {"name": self.fname, "params": params, "entry": entry,
                "blocks": ir_blocks + extra, "arrays": self.arrays,
                "calls": sorted(self.calls)}


def lower_function(fun, ignored=()):
    return Lowerer(fun, ignored).lower()


def lower_with_callees(fun, ignored=(), library=None):
    """fun 과 fun 이 (간접적으로) 부르는 사용자 함수를 모두 내린다 → (IR, library)."""
    library = {} if library is None else library
    lw = Lowerer(fun, ignored)
    ir = lw.lower()
    library[ir["name"]] = ir
    for name, f in lw.callees.items():
        if name not in library:
            lower_with_callees(f, ignored, library)
    return ir, library
