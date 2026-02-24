import gcc

# --- Base Classes ---
class BaseChecker:
    def __init__(self):
        self.errors = []

    def report(self, message):
        self.errors.append(message)

# --- 개별 체커 구현 ---

class OpcodeChecker(BaseChecker):
    def __init__(self):
        super(OpcodeChecker, self).__init__()
        self.supported_codes = [gcc.PlusExpr, gcc.MinusExpr, gcc.MultExpr, gcc.BitAndExpr, 
                                gcc.BitIorExpr, gcc.BitXorExpr, gcc.LshiftExpr, gcc.RshiftExpr]

    def check(self, stmt):
        if isinstance(stmt, gcc.GimpleAssign):
            for op in stmt.rhs:
                if isinstance(op, (gcc.IntegerCst, gcc.SsaName, gcc.VarDecl, gcc.ParmDecl, 
                                   gcc.MemRef, gcc.ComponentRef, gcc.ArrayRef, gcc.AddrExpr)):
                    continue
                if type(op) not in self.supported_codes:
                    self.report(f"지원하지 않는 연산 노드: {type(op)} (Z-code 매핑 불가)")

class VariableChecker(BaseChecker):
    def check(self, fun):
        ssa = getattr(fun, 'gimple_ssa', None)
        if ssa is None: return
        ssa_names = ssa.ssa_names
        active_versions = len([name for name in ssa_names if name is not None])
        if active_versions > 128:
            self.report(f"레지스터 용량 초과: 필요한 SSA 버전 {active_versions}개 (최대 128개)")

class ControlChecker(BaseChecker):
    def check(self, fun):
        if not fun.cfg: return
        for bb in fun.cfg.basic_blocks:
            if not bb.gimple: continue
            last_stmt = bb.gimple[-1]
            if isinstance(last_stmt, gcc.GimpleSwitch):
                self.report(f"Fail: Switch-case is not supported (BB {bb.index})")
            elif isinstance(last_stmt, gcc.GimpleGoto):
                self.report(f"Fail: Goto/Indirect jump is not supported (BB {bb.index})")

class TypeChecker(BaseChecker):
    def check(self, stmt):
        if hasattr(stmt, 'lhs') and stmt.lhs:
            t = stmt.lhs.type
            if str(t) in ['float', 'double', 'char', 'string']:
                 self.report(f"지원하지 않는 자료형 연산: {t}")

class MemoryChecker(BaseChecker):
    def check(self, stmt):
        if not isinstance(stmt, gcc.GimpleAssign): return
        for rhs_op in stmt.rhs:
            t_name = str(type(rhs_op))
            base_ssa = None
            if "ComponentRef" in t_name:
                mem_ref = getattr(rhs_op, 'target', None)
                if mem_ref: base_ssa = self._get_ssa_from_op(mem_ref)
            elif "ArrayRef" in t_name:
                base_ssa = getattr(rhs_op, 'index', None)
            
            if base_ssa and isinstance(base_ssa, gcc.SsaName):
                if self._is_defined_by_memory(base_ssa):
                    if "ArrayRef" in t_name:
                        self.report("무작위 인덱스 감지: 메모리 로드 값을 배열 인덱스로 사용 (A[B[i]])")
                    else:
                        self.report("포인터 체이닝 감지: 메모리 로드 값을 주소로 재사용 (n1->next)")

    def _get_ssa_from_op(self, node):
        op = getattr(node, 'operand', None)
        if op:
            if isinstance(op, (list, tuple)): return op[0]
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

# --- 핵심 수정: 호출 깊이 추적 기능이 포함된 StructureChecker ---
class StructureChecker(BaseChecker):
    def __init__(self, max_depth=2):
        super(StructureChecker, self).__init__()
        self.max_depth = max_depth
        self.ignored_functions = ['printf', '__printf_chk', 'fprintf', 'clock', 'time', 'memset', 'memcpy']

    def check(self, fun, current_stack=None):
        if current_stack is None: current_stack = []
        func_name = fun.decl.name
        
        # 1. 재귀 호출(순환 참조) 감지
        if func_name in current_stack:
            self.report(f"순환 참조(재귀) 감지: {' -> '.join(current_stack)} -> {func_name}")
            return False

        # 2. 호출 깊이 제한 확인
        if len(current_stack) >= self.max_depth:
            self.report(f"호출 깊이 초과 (Max: {self.max_depth}): {' -> '.join(current_stack)} -> {func_name}")
            return False

        current_stack.append(func_name)
        
        if fun.cfg:
            for bb in fun.cfg.basic_blocks:
                for stmt in bb.gimple:
                    if isinstance(stmt, gcc.GimpleCall):
                        fndecl = stmt.fndecl
                        if not fndecl: continue
                        target_name = fndecl.name
                        if target_name in self.ignored_functions: continue
                        
                        target_fun = getattr(fndecl, 'function', None)
                        if target_fun:
                            if not self.check(target_fun, current_stack):
                                return False
                        else:
                            self.report(f"정의되지 않은 함수 호출: {target_name} (인라이닝 불가)")
        
        current_stack.pop()
        return True

class ConflictChecker(BaseChecker):
    def check(self, fun):
        if not fun.cfg: return
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign) and stmt.lhs:
                    lhs = stmt.lhs
                    if isinstance(lhs, gcc.VarDecl) and (getattr(lhs, 'context', None) is None):
                        self.report(f"데이터 경합 위험: 전역 변수 '{lhs.name}'에 다중 쓰기 감지.")
                    elif isinstance(lhs, gcc.ArrayRef):
                        try:
                            base = lhs.operand(0)
                            index = lhs.operand(1)
                            if isinstance(base, gcc.VarDecl) and (getattr(base, 'context', None) is None):
                                if isinstance(index, gcc.IntegerCst):
                                    self.report(f"데이터 경합 위험: 전역 배열 '{base.name}' 고정 인덱스[{index.constant}] 쓰기.")
                        except: pass

# --- 통합 검증 마스터 클래스 (validate 메서드 포함) ---
class EOPPPChecker:
    def __init__(self, max_call_depth=2):
        self.checkers = {
            'op': OpcodeChecker(),
            'var': VariableChecker(),
            'ctrl': ControlChecker(),
            'type': TypeChecker(),
            'mem': MemoryChecker(),
            'struct': StructureChecker(max_depth=max_call_depth),
            'conflict': ConflictChecker()
        }

    def validate(self, fun):
        """이 메서드가 main.py에서 호출됩니다."""
        # 에러 리스트 초기화
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
            print(f"\n[EOPPP Checker] {fun.decl.name} 분석 결과: {len(all_errors)}개의 제약 위반")
            for err in all_errors:
                print(f"   - {err}")
            return False
# import gcc

# class BaseChecker:
#     def __init__(self):
#         self.errors = []

#     def report(self, message):
#         self.errors.append(message)
# class CallChecker(BaseChecker):
#     def check(self, stmt):
#         if not isinstance(stmt, gcc.GimpleCall):
#             return

#         # [조건 1 & 2] 무시할 시스템 함수 리스트
#         ignored_functions = [
#             'printf', '__printf_chk', 'fprintf', 
#             'clock', 'time', 'exit', 'abort'
#         ]
        
#         fndecl = stmt.fndecl
#         if fndecl and fndecl.name in ignored_functions:
#             return  # 리포트 없이 통과

#         # 그 외의 일반 함수는 인라이닝 가능 여부 확인
#         if not self._is_inlinable(stmt):
#             self.report(f"External function call: {fndecl.name if fndecl else 'unknown'}")
# # 1. 연산 검증 (Opcode Mapping)
# class OpcodeChecker(BaseChecker):
#     def __init__(self):
#         super(OpcodeChecker, self).__init__()
#         self.supported_codes = [gcc.PlusExpr, gcc.MinusExpr, gcc.MultExpr, gcc.BitAndExpr, 
#                                 gcc.BitIorExpr, gcc.BitXorExpr, gcc.LshiftExpr, gcc.RshiftExpr]

#     def check(self, stmt):
#         if isinstance(stmt, gcc.GimpleAssign):
#             for op in stmt.rhs:
#                 # 메모리 참조 및 주소 연산 노드들을 모두 허용 리스트에 추가
#                 if isinstance(op, (gcc.IntegerCst, gcc.SsaName, gcc.VarDecl, gcc.ParmDecl, 
#                                    gcc.MemRef, gcc.ComponentRef, gcc.ArrayRef, gcc.AddrExpr)):
#                     continue
                
#                 if type(op) not in self.supported_codes:
#                     self.report(f"지원하지 않는 연산 노드: {type(op)} (Z-code 매핑 불가)")

# # 2. 변수 검증 (Register Capacity & SSA Liveness)
# class VariableChecker(BaseChecker):
#     def check(self, fun):
#         # SSA 이름이 있는지 확인 (hasattr 사용)
#         ssa = getattr(fun, 'gimple_ssa', None)
        
#         if ssa is None:
#             # 에러를 던지지 않고, 결과 보고에만 남깁니다.
#             # self.report("SSA 데이터가 생성되지 않은 단계에서 분석이 시도되었습니다.")
#             return

#         ssa_names = ssa.ssa_names
#         # None인 항목을 제외하고 실제 할당된 SSA 이름들만 카운트
#         active_versions = len([name for name in ssa_names if name is not None])
        
#         if active_versions > 128:
#             self.report(f"레지스터 용량 초과: 필요한 SSA 버전 {active_versions}개 (최대 128개)")

# # 3. 제어 검증 (Control Checker) - 호환성 개선 버전
# # 수정 제안: 정말 필요한 것만 남긴 ControlChecker
# class ControlChecker(BaseChecker):
#     def check(self, fun):
#         if not fun.cfg:
#             return

#         for bb in fun.cfg.basic_blocks:
#             last_stmt = bb.gimple[-1] if bb.gimple else None
            
#             # A. 하드웨어가 물리적으로 구현 불가능한 Switch/Goto는 유지
#             if isinstance(last_stmt, gcc.GimpleSwitch):
#                 self.report(f"Fail: Switch-case is not supported (BB {bb.index})")
#             elif isinstance(last_stmt, gcc.GimpleGoto):
#                 self.report(f"Fail: Goto/Indirect jump is not supported (BB {bb.index})")

#             # B. 복잡성(Critical Edge, 비정상 종료)은 report를 주석 처리하여 '무시'
#             # if num_succs == 0 and not isinstance(last_stmt, gcc.GimpleReturn):
#             #     self.report(f"Fail: Abnormal exit") -> 주석 처리로 '복잡성 허용' 실현


# # 4. 타입 검증 (Data Type Support)
# class TypeChecker(BaseChecker):
#     def check(self, stmt):
#         # 지원 자료형: int32 (float, double, char, string 연산 제한)
#         if hasattr(stmt, 'lhs') and stmt.lhs:
#             t = stmt.lhs.type
#             if str(t) in ['float', 'double', 'char', 'string']:
#                  self.report(f"지원하지 않는 자료형 연산: {t}")

# # 5. 메모리 검증 (포인터 체이닝 & 무작위 인덱스)
# class MemoryChecker(BaseChecker):
#     def check(self, stmt):
#         if not isinstance(stmt, gcc.GimpleAssign):
#             return

#         for rhs_op in stmt.rhs:
#             t_name = str(type(rhs_op))
#             base_ssa = None

#             # [CASE 1] 포인터 체이닝 (n1->data)
#             if "ComponentRef" in t_name:
#                 mem_ref = getattr(rhs_op, 'target', None)
#                 if mem_ref:
#                     base_ssa = self._get_ssa_from_op(mem_ref)

#             # [CASE 2] 무작위 인덱스 (A[B[i]])
#             elif "ArrayRef" in t_name:
#                 # ArrayRef는 보통 index 속성이나 operand(1)에 인덱스 SSA가 들어있음
#                 # 로그 확인 결과에 따라 속성명은 'index'일 가능성이 높음
#                 base_ssa = getattr(rhs_op, 'index', None)
#                 if not base_ssa and hasattr(rhs_op, 'operand'):
#                     # operand(1)이 인덱스인 경우가 많음 (0은 배열 베이스)
#                     try: base_ssa = rhs_op.operand[1]
#                     except: pass

#             # 데이터 의존성 검사
#             if base_ssa and isinstance(base_ssa, gcc.SsaName):
#                 if self._is_defined_by_memory(base_ssa):
#                     if "ArrayRef" in t_name:
#                         self.report("무작위 인덱스 감지: 메모리 로드 값을 배열 인덱스로 사용 (A[B[i]])")
#                     else:
#                         self.report("포인터 체이닝 감지: 메모리 로드 값을 주소로 재사용 (n1->next)")

#     def _get_ssa_from_op(self, node):
#         """노드에서 안전하게 SSA_NAME 추출"""
#         op = getattr(node, 'operand', None)
#         if op:
#             if isinstance(op, (list, tuple)): return op[0]
#             if callable(op):
#                 try: return op(0)
#                 except: return None
#             return op
#         return None

#     def _is_defined_by_memory(self, ssa):
#         """SSA의 정의가 메모리 로드인지 확인"""
#         def_stmt = ssa.def_stmt
#         if def_stmt and isinstance(def_stmt, gcc.GimpleAssign):
#             for op in def_stmt.rhs:
#                 t = str(type(op))
#                 if any(x in t for x in ["ComponentRef", "MemRef", "ArrayRef"]):
#                     return True
#         return False

# # 6. 함수 구조 검증 (StructureChecker) 수정
# class StructureChecker(BaseChecker):
#     def __init__(self, max_depth=3):
#         super(StructureChecker, self).__init__()
#         self.max_depth = max_depth
#         self.ignored_functions = ['printf', '__printf_chk', 'fprintf', 'clock', 'time', 'memset', 'memcpy']

#     def check(self, fun, current_stack=None):
#         if current_stack is None:
#             current_stack = []
        
#         func_name = fun.decl.name
        
#         # 1. 재귀 호출(순환 참조) 감지
#         if func_name in current_stack:
#             self.report(f"순환 참조(재귀) 감지: {' -> '.join(current_stack)} -> {func_name}")
#             return False

#         # 2. 호출 깊이 제한 확인
#         if len(current_stack) >= self.max_depth:
#             self.report(f"호출 깊이 초과 (Max: {self.max_depth}): {' -> '.join(current_stack)} -> {func_name}")
#             return False

#         current_stack.append(func_name)
        
#         # 3. 함수 내부의 다른 함수 호출 탐색
#         for bb in fun.cfg.basic_blocks:
#             for stmt in bb.gimple:
#                 if isinstance(stmt, gcc.GimpleCall):
#                     fndecl = stmt.fndecl
#                     if not fndecl:
#                         continue
                    
#                     target_name = fndecl.name
#                     if target_name in self.ignored_functions:
#                         continue
                        
#                     # 파일 내에 정의된 함수인지 확인
#                     target_fun = getattr(fndecl, 'function', None)
#                     if target_fun:
#                         # 재귀적으로 다음 깊이 검사
#                         if not self.check(target_fun, current_stack):
#                             # 하위 깊이에서 이미 중단 신호를 보냈다면 위로 전파
#                             return False
#                     else:
#                         # 외부 함수이거나 정의를 찾을 수 없는 경우
#                         self.report(f"정의되지 않은 함수 호출: {target_name} (인라이닝 불가)")
        
#         # 탐색 종료 후 스택에서 제거 (Backtracking)
#         current_stack.pop()
#         return True

# # 7. 경합 검증 (수정 버전: 배열 접근 허용)
# class ConflictChecker(BaseChecker):
#     def check(self, fun):
#         for bb in fun.cfg.basic_blocks:
#             for stmt in bb.gimple:
#                 if isinstance(stmt, gcc.GimpleAssign) and stmt.lhs:
#                     lhs = stmt.lhs
                    
#                     # 1. 스칼라 전역 변수 체크
#                     if isinstance(lhs, gcc.VarDecl):
#                         # 전역 변수는 context가 None이거나 함수 외부에 존재함
#                         is_global = (getattr(lhs, 'context', None) is None)
                        
#                         if is_global:
#                             self.report(f"데이터 경합 위험: 전역 변수 '{lhs.name}'에 다중 쓰기 감지.")
                    
#                     # 2. 전역 배열 변수 체크 (기존 로직 보완)
#                     elif isinstance(lhs, gcc.ArrayRef):
#                         try:
#                             base = lhs.operand(0)
#                             index = lhs.operand(1)
                            
#                             if isinstance(base, gcc.VarDecl):
#                                 is_global = (getattr(base, 'context', None) is None)
#                                 if is_global:
#                                     # 인덱스가 상수면 모든 코어가 같은 칸을 쓰므로 경합
#                                     if isinstance(index, gcc.IntegerCst):
#                                         self.report(f"데이터 경합 위험: 전역 배열 '{base.name}' 고정 인덱스[{index.constant}] 쓰기.")
#                         except:
#                             pass
                
# # --- 통합 검증 마스터 클래스 ---
# class EOPPPChecker:
#     def __init__(self):
#         # 8가지 기준에 따른 모든 체커 등록
#         self.checkers = {
#             'op': OpcodeChecker(),
#             'var': VariableChecker(),
#             'ctrl': ControlChecker(),
#             'type': TypeChecker(),
#             'mem': MemoryChecker(),
#             'struct': StructureChecker(),
#             'conflict': ConflictChecker()
#         }

#     class EOPPPChecker:
#         def __init__(self, max_call_depth=2): # 원하는 깊이 설정
#             self.checkers = {
#                 'op': OpcodeChecker(),
#                 'var': VariableChecker(),
#                 'ctrl': ControlChecker(),
#                 'type': TypeChecker(),
#                 'mem': MemoryChecker(),
#                 'struct': StructureChecker(max_depth=max_call_depth),
#                 'conflict': ConflictChecker()
#             }

#         def validate(self, fun):
#             print(f"\n[EOPPP Checker] 분석 중: {fun.decl.name}")
            
#             # 에러 리스트 초기화 (이전 분석 결과 삭제)
#             for c in self.checkers.values():
#                 c.errors = []
                
#             # 1. 함수 구조 및 호출 깊이 체크 (재귀 탐색 포함)
#             self.checkers['struct'].check(fun)
            
#             # 2. 기타 함수 레벨 체크
#             self.checkers['var'].check(fun)
#             self.checkers['ctrl'].check(fun)
#             self.checkers['conflict'].check(fun)
            
#             # 3. 문장 레벨 체크
#             if fun.cfg:
#                 for bb in fun.cfg.basic_blocks:
#                     for stmt in bb.gimple:
#                         self.checkers['op'].check(stmt)
#                         self.checkers['type'].check(stmt)
#                         self.checkers['mem'].check(stmt)
            
#             # 결과 취합
#             all_errors = []
#             for checker in self.checkers.values():
#                 all_errors.extend(checker.errors)
                
#             if not all_errors:
#                 print(f"✅ {fun.decl.name}: 변환 가능 판정")
#                 return True
#             else:
#                 print(f"❌ {fun.decl.name}: 변환 불가 ({len(all_errors)}개의 제약 위반)")
#                 for err in all_errors:
#                     print(f"   - {err}")
#                 return False




# class ControlChecker(BaseChecker):
#     def check(self, fun):
#         if not fun.cfg:
#             return

#         # [기준 1] 루프 중첩 깊이 분석
#         # EOPPP 하드웨어 제어기(GPC)의 스택/레지스터 한계를 고려하여 깊이 제한
#         loop_depth_limit = 3
#         if hasattr(fun, 'loops') and fun.loops:
#             for loop in fun.loops:
#                 depth = 0
#                 curr = loop
#                 while curr.outer:
#                     depth += 1
#                     curr = curr.outer
#                 if depth > loop_depth_limit:
#                     self.report(f"루프 중첩 깊이 초과: 현재 {depth}단계 (최대 {loop_depth_limit}단계)")

#         # [기준 2] 기본 블록(Basic Block) 및 분기 구조 분석
#         for bb in fun.cfg.basic_blocks:
#             last_stmt = bb.gimple[-1] if bb.gimple else None
            
#             # 속성 이름 호환성 확보 (successors -> succs / predecessors -> preds)
#             succs = getattr(bb, 'succs', getattr(bb, 'successors', []))
#             preds = getattr(bb, 'preds', getattr(bb, 'predecessors', []))
#             num_succs = len(succs)
#             num_preds = len(preds)

#             # A. 비정형 다중 분기 (GimpleSwitch) 직접 차단
#             # Pass: 단순 if-else (GimpleCond) / Fail: switch-case (GimpleSwitch)
#             if isinstance(last_stmt, gcc.GimpleSwitch):
#                 self.report(f"Fail: 비정형 다중 분기(Switch) 감지 (BB {bb.index}) - .r127 정적 매핑 불가")

#             # B. 비정형 점프 (Goto/Indirect Jump) 차단
#             elif isinstance(last_stmt, gcc.GimpleGoto):
#                 self.report(f"Fail: 비정형 점프(Goto) 감지 (BB {bb.index}) - 정적 주소 할당 불가")

#             # C. 분기 경로 개수 제한
#             # 단순 if-else는 succs가 2개임. 3개 이상은 복잡한 하드웨어 로직 필요로 거부.
#             if num_succs > 2:
#                 self.report(f"Fail: 과도한 분기 경로 (BB {bb.index}): {num_succs}개")

#             # D. 크리티컬 엣지(Critical Edge) 감지
#             # 분기점(src)에서 합류점(dest)으로 바로 연결되는 구조는 타이밍 분석이 매우 어려움
#             if num_succs > 1:
#                 for edge in succs:
#                     dest_bb = edge.dest
#                     dest_preds = getattr(dest_bb, 'preds', getattr(dest_bb, 'predecessors', []))
#                     if len(dest_preds) > 1:
#                         self.report(f"Fail: Critical Edge 감지 (BB {bb.index} -> BB {dest_bb.index})")

#             # E. 비정상적 제어 흐름 (무한 루프 또는 중간 종료)
#             if num_succs == 0 and not isinstance(last_stmt, gcc.GimpleReturn):
#                 # Return이 아닌데 나가는 경로가 없는 블록은 하드웨어 정지(Stall) 유발
#                 self.report(f"Fail: 비정상적 종료 블록 (BB {bb.index})")