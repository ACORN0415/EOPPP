import gcc

# --- Base Classes ---
class BaseChecker:
    def __init__(self):
        self.errors = []

    def report(self, message):
        self.errors.append(message)

# --- 개별 체커 구현 ---

# [수정 1] OpcodeChecker: BitAnd, BitIor, BitXor 제거 (하드웨어 미지원)
class OpcodeChecker(BaseChecker):
    def __init__(self):
        super(OpcodeChecker, self).__init__()
        # 하드웨어 Table 1 기준 지원 연산만 포함:
        #   ADD  → PlusExpr, MinusExpr
        #   SMT  → MultExpr
        #   LSH  → LshiftExpr
        #   SRSH → RshiftExpr
        # 비교 연산은 GimpleCond에서 처리되므로 여기에 포함하지 않음
        self.supported_codes = [
            gcc.PlusExpr,
            gcc.MinusExpr,
            gcc.MultExpr,
            gcc.LshiftExpr,
            gcc.RshiftExpr,
        ]

    # 정확 매칭용 whitelist 문자열 (부분문자열 매칭의 오탐 방지)
    #   예: 부분문자열이면 "plus" ⊂ "pointer_plus_expr", "mult" ⊂ "widen_mult_expr"가
    #   잘못 통과한다. exprcode 이름을 정규화해 집합 완전일치로만 허용한다.
    SUPPORTED_OPS = {"plus_expr", "minus_expr", "mult_expr",
                     "lshift_expr", "rshift_expr"}

    @staticmethod
    def _exprcode_name(exprcode):
        """gcc exprcode(type/str) → 'plus_expr' 형태의 정규화된 이름."""
        s = str(exprcode)
        # "<type 'gcc.PlusExpr'>" / "gcc.PlusExpr" / "plus_expr" 등 모두 대응
        s = s.rsplit(".", 1)[-1].strip("'>\" ")
        # CamelCase(PlusExpr) → snake_case(plus_expr)
        import re as _re
        snake = _re.sub(r"(?<!^)(?=[A-Z])", "_", s).lower()
        return snake

    def check(self, stmt):
        if isinstance(stmt, gcc.GimpleAssign):
            if len(stmt.rhs) == 2:
                # exprcode 타입 완전일치 우선, 실패 시 정규화 이름 완전일치
                is_supported = stmt.exprcode in self.supported_codes
                if not is_supported:
                    name = self._exprcode_name(stmt.exprcode)
                    is_supported = name in self.SUPPORTED_OPS
                if not is_supported:
                    self.report(
                        f"Unsupported operation: {stmt.exprcode} "
                        f"(no Z-code mapping)"
                    )
            else:
                for op in stmt.rhs:
                    if isinstance(op, (gcc.IntegerCst, gcc.SsaName, gcc.VarDecl,
                                       gcc.ParmDecl, gcc.MemRef, gcc.ComponentRef,
                                       gcc.ArrayRef, gcc.AddrExpr)):
                        continue
                    self.report(
                        f"Unsupported operation: {type(op).__name__} "
                        f"(no Z-code mapping)"
                    )


# [수정 2] VariableChecker: 128 → 126 (r126, r127 예약)
class VariableChecker(BaseChecker):
    MAX_CORES = 126  # r0~r125 사용 가능, r126/r127 예약

    def check(self, fun):
        ssa = getattr(fun, 'gimple_ssa', None)
        if ssa is None:
            return
        ssa_names = ssa.ssa_names
        active_versions = len([name for name in ssa_names if name is not None])
        if active_versions > self.MAX_CORES:
            self.report(
                f"Core capacity exceeded: {active_versions} SSA versions "
                f"(max {self.MAX_CORES})"
            )


# [수정 4] ControlChecker: switch, goto, nested loop 감지
# Natural Loop 분석으로 순차 루프 vs 중첩 루프를 정확히 구분
class ControlChecker(BaseChecker):
    def check(self, fun):
        if not fun.cfg:
            return

        for bb in fun.cfg.basic_blocks:
            if not bb.gimple:
                continue
            last_stmt = bb.gimple[-1]
            if isinstance(last_stmt, gcc.GimpleSwitch):
                self.report(
                    f"Unsupported control flow: switch-case (BB {bb.index})"
                )
            elif isinstance(last_stmt, gcc.GimpleGoto):
                self.report(
                    f"Unsupported control flow: goto (BB {bb.index})"
                )
            elif isinstance(last_stmt, gcc.GimpleReturn):
                # 값을 반환하는 함수는 아직 코드 생성에서 반환값을 다루지 못한다.
                # 체커가 통과시키면 "미지원 기능 수용(false acceptance)"이 되므로
                # 비void 반환은 생성 불가로 간주하고 거부한다(§9 한계 봉합).
                retval = getattr(last_stmt, 'retval', None)
                if retval is not None:
                    self.report(
                        "Unsupported return: non-void return value "
                        "(return-value code generation not implemented)"
                    )

        self._check_nested_loops(fun)

    def _check_nested_loops(self, fun):
        """Natural Loop 분석으로 중첩 루프를 감지한다.

        1) DFS로 back-edge를 찾는다
        2) 각 back-edge에서 natural loop body를 구한다
        3) 한 루프의 header가 다른 루프의 body 안에 있으면 중첩
        """
        if not fun.cfg:
            return

        bbs = list(fun.cfg.basic_blocks)
        if not bbs:
            return

        # ── Step 1: DFS로 back-edge 수집 ──
        visited = set()
        in_stack = set()
        back_edges = []  # (src_bb_index, header_bb_index)

        def dfs(bb):
            visited.add(bb.index)
            in_stack.add(bb.index)
            for edge in getattr(bb, 'succs', []):
                dest = edge.dest
                if dest.index in in_stack:
                    # ancestor로 가는 edge = back-edge (루프)
                    back_edges.append((bb.index, dest.index))
                elif dest.index not in visited:
                    dfs(dest)
            in_stack.discard(bb.index)

        try:
            dfs(bbs[0])
        except RecursionError:
            return

        if len(back_edges) <= 1:
            return  # 루프 0~1개 → 중첩 불가

        # ── Step 2: 각 back-edge의 natural loop body 계산 ──
        bb_map = {bb.index: bb for bb in bbs}
        loops = []  # (header_index, body_set)

        for src_idx, hdr_idx in back_edges:
            # Natural loop = header + {header를 거치지 않고 src에 도달 가능한 모든 노드}
            body = {hdr_idx}
            worklist = [src_idx]
            while worklist:
                n = worklist.pop()
                if n in body:
                    continue
                body.add(n)
                bb = bb_map.get(n)
                if bb:
                    for edge in getattr(bb, 'preds', []):
                        pred_idx = edge.src.index
                        if pred_idx not in body:
                            worklist.append(pred_idx)
            loops.append((hdr_idx, body))

        # ── Step 3: 중첩 검사 ──
        # 루프 A의 body 안에 루프 B의 header가 있으면 B는 A 안에 중첩됨
        for i, (hdr_i, body_i) in enumerate(loops):
            for j, (hdr_j, body_j) in enumerate(loops):
                if i == j:
                    continue
                if hdr_j in body_i and hdr_j != hdr_i:
                    self.report(
                        "Unsupported control flow: nested loop "
                        "(only single-level loops supported)"
                    )
                    return


# [수정 3] TypeChecker: pointer, struct, union, enum 감지 추가
class TypeChecker(BaseChecker):
    def check(self, stmt):
        if not hasattr(stmt, 'lhs') or stmt.lhs is None:
            return

        t = stmt.lhs.type
        if t is None:
            return

        type_str = str(t)
        type_name = type(t).__name__

        # 부동소수점 타입
        if isinstance(t, gcc.RealType):
            self.report(f"Unsupported type: {type_str} (float/double)")
            return

        # 문자열 표현으로도 추가 검사
        if type_str in ('float', 'double'):
            self.report(f"Unsupported type: {type_str}")
            return

        # 포인터 타입
        if isinstance(t, gcc.PointerType):
            self.report(f"Unsupported type: pointer to {t.dereference}")
            return

        # 구조체 타입
        if isinstance(t, gcc.RecordType):
            self.report(f"Unsupported type: struct/union")
            return

        # 열거형 타입
        if isinstance(t, gcc.EnumeralType):
            self.report(f"Unsupported type: enum")
            return

        # ArrayType은 A-bank를 통해 지원되므로 허용
        # IntegerType은 지원


# [수정 5] MemoryChecker: malloc/calloc/realloc/free 감지 추가
class MemoryChecker(BaseChecker):
    ALLOC_FUNCS = {'malloc', 'calloc', 'realloc', 'free',
                   'aligned_alloc', 'posix_memalign'}

    def check(self, stmt):
        # 동적 메모리 할당 감지 (GimpleCall)
        if isinstance(stmt, gcc.GimpleCall):
            fndecl = getattr(stmt, 'fndecl', None)
            if fndecl and getattr(fndecl, 'name', '') in self.ALLOC_FUNCS:
                self.report(
                    f"Unsupported memory operation: {fndecl.name}() "
                    f"(dynamic allocation not supported)"
                )
            return

        # 간접 메모리 접근 감지 (GimpleAssign)
        if not isinstance(stmt, gcc.GimpleAssign):
            return

        for rhs_op in stmt.rhs:
            t_name = str(type(rhs_op))
            base_ssa = None

            if "ComponentRef" in t_name:
                mem_ref = getattr(rhs_op, 'target', None)
                if mem_ref:
                    base_ssa = self._get_ssa_from_op(mem_ref)
            elif "ArrayRef" in t_name:
                base_ssa = getattr(rhs_op, 'index', None)

            if base_ssa and isinstance(base_ssa, gcc.SsaName):
                if self._is_defined_by_memory(base_ssa):
                    if "ArrayRef" in t_name:
                        self.report(
                            "Unsupported memory access: indirect array "
                            "indexing (A[B[i]])"
                        )
                    else:
                        self.report(
                            "Unsupported memory access: pointer chaining "
                            "(node->next)"
                        )

    def _get_ssa_from_op(self, node):
        op = getattr(node, 'operand', None)
        if op:
            if isinstance(op, (list, tuple)):
                return op[0]
            return op
        return None

    def _is_defined_by_memory(self, ssa):
        def_stmt = ssa.def_stmt
        if def_stmt and isinstance(def_stmt, gcc.GimpleAssign):
            for op in def_stmt.rhs:
                t = str(type(op))
                if any(x in t for x in ["ComponentRef", "MemRef", "ArrayRef"]):
                    return True
        return False


# --- StructureChecker (변경 없음) ---
class StructureChecker(BaseChecker):
    def __init__(self, max_depth=2):
        super(StructureChecker, self).__init__()
        self.max_depth = max_depth
        self.ignored_functions = [
            'printf', '__printf_chk', 'fprintf',
            'clock', 'time', 'memset', 'memcpy'
        ]

    def check(self, fun, current_stack=None):
        if current_stack is None:
            current_stack = []
        func_name = fun.decl.name

        # 1. 재귀 호출(순환 참조) 감지
        if func_name in current_stack:
            self.report(
                f"Recursion detected: "
                f"{' -> '.join(current_stack)} -> {func_name}"
            )
            return False

        # 2. 호출 깊이 제한 확인
        if len(current_stack) >= self.max_depth:
            self.report(
                f"Call depth exceeded (max {self.max_depth}): "
                f"{' -> '.join(current_stack)} -> {func_name}"
            )
            return False

        current_stack.append(func_name)

        if fun.cfg:
            for bb in fun.cfg.basic_blocks:
                if not bb.gimple:
                    continue
                for stmt in bb.gimple:
                    if isinstance(stmt, gcc.GimpleCall):
                        fndecl = stmt.fndecl
                        if not fndecl:
                            continue
                        target_name = fndecl.name
                        if target_name in self.ignored_functions:
                            continue

                        target_fun = getattr(fndecl, 'function', None)
                        if target_fun:
                            if not self.check(target_fun, current_stack):
                                return False
                        else:
                            self.report(
                                f"Undefined function call: {target_name} "
                                f"(cannot inline)"
                            )

        current_stack.pop()
        return True


# --- ConflictChecker (변경 없음) ---
class ConflictChecker(BaseChecker):
    def check(self, fun):
        if not fun.cfg:
            return
        for bb in fun.cfg.basic_blocks:
            if not bb.gimple:
                continue
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign) and stmt.lhs:
                    lhs = stmt.lhs
                    if isinstance(lhs, gcc.VarDecl) and \
                       (getattr(lhs, 'context', None) is None):
                        self.report(
                            f"Write conflict: global variable '{lhs.name}'"
                        )
                    elif isinstance(lhs, gcc.ArrayRef):
                        try:
                            base = lhs.operand(0)
                            index = lhs.operand(1)
                            if isinstance(base, gcc.VarDecl) and \
                               (getattr(base, 'context', None) is None):
                                if isinstance(index, gcc.IntegerCst):
                                    self.report(
                                        f"Write conflict: global array "
                                        f"'{base.name}' fixed index "
                                        f"[{index.constant}]"
                                    )
                        except Exception:
                            pass


# --- 통합 검증 마스터 클래스 ---
class EOPPPChecker:
    def __init__(self, max_call_depth=2):
        self.checkers = {
            'op': OpcodeChecker(),
            'var': VariableChecker(),
            'ctrl': ControlChecker(),
            'type': TypeChecker(),
            'mem': MemoryChecker(),
            'struct': StructureChecker(max_depth=max_call_depth),
            'conflict': ConflictChecker(),
        }

    def validate(self, fun):
        """main.py에서 호출되는 통합 검증 메서드"""
        for c in self.checkers.values():
            c.errors = []

        # 1. 구조적 체크 (함수 호출 깊이 포함)
        self.checkers['struct'].check(fun)

        # 2. 함수 레벨 체크
        self.checkers['var'].check(fun)
        self.checkers['ctrl'].check(fun)
        self.checkers['conflict'].check(fun)

        # 3. 문장 레벨 체크
        if fun.cfg:
            for bb in fun.cfg.basic_blocks:
                if not bb.gimple:
                    continue
                for stmt in bb.gimple:
                    self.checkers['op'].check(stmt)
                    self.checkers['type'].check(stmt)
                    self.checkers['mem'].check(stmt)

        # 결과 취합
        all_errors = []
        for checker in self.checkers.values():
            all_errors.extend(checker.errors)

        if not all_errors:
            return True
        else:
            print(f"\n[EOPPP Checker] {fun.decl.name}: "
                  f"{len(all_errors)} violation(s)")
            for err in all_errors:
                print(f"   - {err}")
            return False