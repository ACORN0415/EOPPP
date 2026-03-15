import gcc      # GCC Python plugin: GIMPLE IR(중간 표현) 파싱용 라이브러리
import os       # 파일/디렉토리 경로 조작
import re       # 정규표현식 (변수명 패턴 매칭에 사용)
import copy     # 깊은 복사 (상태 딕셔너리 독립 복제에 사용)


# =============================================================================
# ┌─────────────────────────────────────────────────────────────────────────┐
# │  기존 함수 → 신규 구조 매핑표                                           │
# │                                                                         │
# │  [기존 함수]                        [신규 위치/함수]              [상태] │
# │  ─────────────────────────────────────────────────────────────────────── │
# │  __init__                        → __init__                         O  │
# │  generate (MAC/Generic 분기)     → generate (통합, _analyze_ir)     △  │
# │  write_all                       → write_all                        O  │
# │  _get_clean_name                 → _get_clean_name                  O  │
# │  _arrayref_parts                 → _arrayref_parts                  O  │
# │  _get_op_symbol                  → _get_op_symbol                   O  │
# │  _build_semantic_names           → _build_semantic_names            O  │
# │  _make_z16                       → _make_z16                        O  │
# │  _z32_word                       → _z32_word                        O  │
# │  _add_mask                       → _add_mask                        O  │
# │  _format_mnemonic                → _format_mnemonic                 O  │
# │  _reg_idx                        → _reg_idx                         O  │
# │  _detect_mac                     → _analyze_ir (통합)               △  │
# │  _build_mac_layout               → [삭제됨 v4] 동적 할당으로 대체     │
# │  _build_mac_reg_map              → [삭제됨 v4] 동적 할당으로 대체     │
# │  _collect_intcst_from_node       → _collect_intcst_from_node        O  │
# │  _augment_regs_from_gimple       → _build_register_map (통합)       △  │
# │  _generate_init_block            → _generate_init_block             O  │
# │  _apply_keep                     → _pass_keep                       O  │
# │  _find_reg                       → _find_reg                        O  │
# │  _generate_op_block_generic      → (pass로 분해)                    X  │
# │  _generate_op_block_fir          → (pass로 분해)                    X  │
# │  (없음)                          → _analyze_ir                      신규│
# │  (없음)                          → _build_register_map              신규│
# │  (없음)                          → _generate_op_block               신규│
# │  (없음)                          → _pass_keep                       신규│
# │  (없음)                          → _pass_mac_pipeline               △  │
# │  (없음)                          → _pass_generic_assign             △  │
# │  (없음)                          → _pass_cond                       △  │
# │  (없음)                          → _is_noncompute_cond              신규│
# │  _add_line                       → _add_line                        O  │
# │  _write_mif_file                 → _write_mif_file                  △  │
# │  (없음)                          → _gpc_header                      신규│
# │  (없음)                          → _gpc_header_yinfo                신규│
# │  (없음)                          → _gpc_header_pst_columns          신규│
# │                                                                         │
# │  O = 기존 로직 그대로 사용                                              │
# │  △ = 기존 로직 일부 재사용 + 구조 변경                                  │
# │  X = 기존 함수 폐기, 새 pass 함수로 대체                                │
# │  신규 = 완전히 새로 작성                                                │
# └─────────────────────────────────────────────────────────────────────────┘
# =============================================================================


# =============================================================================
# EFlowGenerator 클래스 (Pass-Pipeline 리팩토링 버전)
# =============================================================================
# 아키텍처 변경 요약:
#
#   [기존] generate() → _detect_mac() 결과에 따라
#          ├─ MAC 경로:    _generate_op_block_fir()
#          └─ Generic 경로: _generate_op_block_generic()
#
#   [신규] generate() → _analyze_ir()로 feature 플래그 생성
#          ├─ _generate_init_block()   ← 공통 Init (짝수 GPC)
#          └─ _generate_op_block()     ← 통합 Op   (홀수 GPC)
#               ├─ Pass 1: _pass_keep()             (항상 실행)
#               ├─ Pass 2: _pass_mac_pipeline()     (MAC feature일 때만, 동적)
#               ├─ Pass 3: _pass_generic_assign()   (항상, MAC코어 스킵)
#               └─ Pass 4: _pass_cond()             (항상 실행)
#
# 핵심 원칙 (정책 문서 Section A):
#   - 함수당 항상 2개 GPC: 짝수=Init, 홀수=Op
#   - "generic vs MAC" top-level 분기 금지
#   - _analyze_ir()가 feature를 생성하고, Op의 pass들이 feature에 따라 조건부 활성
# =============================================================================
class EFlowGenerator:
    """
    Pass-Pipeline 기반 EFlow Generator

    구조:
      함수당 2-GPC 고정 (짝수=Init LXY, 홀수=Op pass-pipeline)
      Op 내부는 조건부 pass로 구성:
        1) keep pass     - 활성 레지스터 값 유지 (항상)
        2) MAC pass      - MAC 파이프라인 (feature 조건부)
        3) generic pass  - 일반 assign/mul/add (MAC 아닐 때)
        4) cond pass     - 조건문 분기 명령 (항상)

    정책 준수사항:
      - ArrayRef: 항상 base[index] 표기 (상수 인덱스도 접지 않음)
      - SSA: ssa_# 노출 최소화 (semantic name 우선)
      - 상수: 합산(ADD/Cond)에 쓰이는 상수만 cst_# 할당
      - MAC tap 계수(hK): 코어 할당 제외, SMT Y-immediate로 전달
      - outLoop: cond_res 초기값 고정 4
    """

    # =========================================================================
    # [1] __init__: 생성자 - 인스턴스 초기화                              [O]
    # =========================================================================
    # 기존 __init__과 동일. feature 딕셔너리 속성 추가.
    #
    # 역할:
    #   출력 디렉토리 생성, MIF 버퍼 초기화, 분석 상태 변수 초기화
    #
    # 추가된 속성:
    #   - self.features: _analyze_ir()가 채우는 feature 플래그 딕셔너리
    #     예: {"is_mac": True, "coeff_vars": {"h0":10,...}, "output_arrays": {"yo",...}}
    # =========================================================================
    def __init__(self, output_dir="eflow_out"):
        self.output_dir = output_dir
        os.makedirs(self.output_dir, exist_ok=True)

        # MIF 주소 공간 깊이
        self.mif_depth = 16384

        # MIF 데이터 버퍼: 주소(int) → 32비트 hex 문자열
        self.buffer_z = {}    # Z-Bank: 명령어/설정 워드
        self.buffer_y = {}    # Y-Bank: 데이터/ADD-mask/루프제어
        self.buffer_cmt = {}  # 주석 버퍼: 주소 → 주석 문자열

        # SSA 버전 → 의미론적 이름 매핑 (함수별 갱신)
        self.ssa_semantic = {}

        # 조건문 RHS 변수명 (init에서 음수 저장 대상)
        self.cond_rhs_names = set()
        # ADD 연산 참여 변수명
        self.add_mode_vars = set()

        # ★ 신규: IR 분석 결과 feature 딕셔너리
        # _analyze_ir()에서 채워지며, Op의 각 pass가 참조
        self.features = {}

        # ★ GPC 메타데이터: {gpc번호: {"type":"init"/"op", "name":함수명, "is_mac":bool}}
        # _write_mif_file()에서 GPC 헤더를 생성할 때 참조
        self.gpc_meta = {}

    # =========================================================================
    # [2] generate: 핵심 공개 메서드 - 통합 파이프라인                     [△]
    # =========================================================================
    # 기존: _detect_mac() 결과로 MAC/Generic 분기 → 별도 함수 호출
    # 변경: _analyze_ir()로 feature 추출 → 공통 init → 통합 op (pass pipeline)
    #
    # 정책 Section A2:
    #   "generate()에서 MAC/Generic으로 갈라치지 않는다.
    #    대신 _analyze_ir()가 feature를 만들고,
    #    Op 단계의 pass들이 feature에 따라 조건부로 켜진다."
    #
    # 처리 흐름:
    #   1) _build_semantic_names()  → SSA 이름 매핑 구축
    #   2) _analyze_ir()            → feature 플래그 생성 (MAC 여부 등)  ★ 신규
    #   3) _build_register_map()    → 통합 레지스터 맵 생성              ★ 신규
    #   4) _generate_init_block()   → Init GPC (짝수) 코드 생성
    #   5) _generate_op_block()     → Op GPC (홀수) pass pipeline 실행   ★ 신규
    #
    # 매개변수:
    #   fun      : GCC 함수 객체 (gcc.Function)
    #   init_gpc : 짝수 GPC 번호 (Init 블록)
    #   op_gpc   : 홀수 GPC 번호 (Op 블록, = init_gpc + 1)
    #
    # 반환값:
    #   int: 항상 2 (함수당 2-GPC 고정, 정책 Section A1)
    # =========================================================================
    def generate(self, fun, init_gpc, op_gpc):
        # ── Step 1: SSA 의미 이름 매핑 구축 ──
        # ssa_5 → "xn[i]" 등으로 변환하여 출력에서 ssa_# 노출 최소화
        self._build_semantic_names(fun)

        # ── Step 2: IR 분석 → feature 플래그 생성 ──                    ★ 신규
        # 기존 _detect_mac()를 확장. MAC 여부뿐 아니라
        # 향후 추가될 feature(예: MAC, butterfly 등)도 여기서 판별
        self.features = self._analyze_ir(fun)

        # ── GPC 메타데이터 저장 ──
        func_name = str(getattr(fun, "decl", "unknown"))
        is_mac = self.features.get("is_mac", False)
        label = "MAC" if is_mac else func_name
        self.gpc_meta[init_gpc] = {
            "type": "init", "name": label, "is_mac": is_mac
        }
        self.gpc_meta[op_gpc] = {
            "type": "op", "name": label, "is_mac": is_mac
        }

        # ── Step 3: 통합 레지스터 맵 생성 ──                            ★ 신규
        reg_map = self._build_register_map(fun)

        # ── Step 4: Init 블록 생성 (짝수 GPC) ──
        init_state = self._generate_init_block(reg_map, init_gpc)

        # ── Step 5: Op 블록 생성 (홀수 GPC, pass pipeline) ──          ★ 신규
        self._generate_op_block(fun, reg_map, init_state, op_gpc)

        # 정책 Section A1: "generate()는 항상 2를 return해야 함(예외 없음)"
        return 2

    # =========================================================================
    # [3] write_all: MIF 파일 최종 출력                                   [O]
    # =========================================================================
    # 기존과 동일. buffer_z/buffer_y를 MIF 형식으로 파일 기록.
    # =========================================================================
    def write_all(self):
        path_z = os.path.join(self.output_dir, "total_program_z.mif")
        path_y = os.path.join(self.output_dir, "total_program_y.mif")

        self._write_mif_file(
            path_z, self.buffer_z, self.buffer_cmt,
            "Z-Bank (Instruction)", None
        )
        self._write_mif_file(
            path_y, self.buffer_y, self.buffer_cmt,
            "Y-Bank (Data)", None
        )

        print(
            f"\n[Success] Generated: "
            f"{os.path.basename(path_z)} & {os.path.basename(path_y)}"
        )

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     이름 변환 헬퍼 (Naming Helpers)                 │
    # │  정책 Section 1: SSA/ArrayRef 네이밍                                │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [4] _get_clean_name: GCC 노드 → 의미 있는 이름 문자열 변환           [O]
    # =========================================================================
    # 기존과 동일. 정책 Section 1.1의 우선순위 그대로 유지.
    #
    # 우선순위:
    #   1) ssa_semantic 매핑 → 2) SsaName.var 이름 →
    #   3) def_stmt 1-depth 추적 → 4) "ssa_{ver}" 폴백
    #
    # 정책 Section 1.2: ArrayRef는 항상 "base[index]" 형태
    # =========================================================================
    def _get_clean_name(self, node):
        if node is None:
            return "0"
        if isinstance(node, int):
            return str(node)
        if isinstance(node, gcc.IntegerCst):
            return str(node.constant)

        # 정책 1.2: ArrayRef → 항상 "base[index]" (상수 인덱스도 접지 않음)
        if isinstance(node, gcc.ArrayRef):
            base, idx = self._arrayref_parts(node)
            return f"{base}[{idx}]"

        if isinstance(node, gcc.SsaName):
            ver = getattr(node, "version", None)
            # 우선순위 1: ssa_semantic 매핑
            if ver is not None and ver in self.ssa_semantic:
                return self.ssa_semantic[ver]
            # 우선순위 2: 원본 변수명
            var = getattr(node, "var", None)
            if var is not None:
                return self._get_clean_name(var)
            # 우선순위 3: def_stmt 1-depth 추적
            try:
                ds = getattr(node, "def_stmt", None)
                if isinstance(ds, gcc.GimpleAssign) and len(ds.rhs) == 1:
                    return self._get_clean_name(ds.rhs[0])
            except Exception:
                pass
            # 우선순위 4: 폴백
            return f"ssa_{ver}" if ver is not None else "ssa"

        if isinstance(node, (gcc.VarDecl, gcc.ParmDecl)):
            nm = getattr(node, "name", None)
            return nm if nm else "var"

        nm = getattr(node, "name", None)
        return nm if nm else "unknown"

    # =========================================================================
    # [5] _arrayref_parts: ArrayRef → (base_name, index_name)             [O]
    # =========================================================================
    # 기존과 동일. 정책 Section 1.2 지원.
    # =========================================================================
    def _arrayref_parts(self, node):
        base = (getattr(node, "array", None)
                or getattr(node, "operand0", None))
        idx_node = (getattr(node, "index", None)
                    or getattr(node, "operand1", None))
        base_name = self._get_clean_name(base) if base is not None else "arr"
        idx_name = self._get_clean_name(idx_node) if idx_node is not None else "0"
        return str(base_name), str(idx_name)

    # =========================================================================
    # [5-b] _get_base_var_name: SSA semantic 우회 원본 변수명 추출         [신규]
    # =========================================================================
    # _get_clean_name()은 ssa_semantic 해석으로 이름이 바뀜:
    #   xv0_ver2(=xn[i]) → _get_clean_name → "xn[i]" (ssa_semantic)
    #   하지만 원본 변수는 "xv0"
    #
    # 이 메서드는 ssa_semantic을 우회하여 SsaName.var.name을 직접 반환.
    # 용도: 계수/재대입 변수 추적 (동일 변수의 다른 SSA 버전을 같은 이름으로 인식)
    #
    # 반환값:
    #   str: 원본 변수명 ("h0", "xv0" 등)
    #   None: 변수가 아닌 노드 (IntegerCst, ArrayRef 등)
    # =========================================================================
    def _get_base_var_name(self, node):
        if node is None:
            return None
        if isinstance(node, gcc.SsaName):
            var = getattr(node, "var", None)
            if var is not None:
                nm = getattr(var, "name", None)
                return nm if nm else None
            return None
        if isinstance(node, (gcc.VarDecl, gcc.ParmDecl)):
            nm = getattr(node, "name", None)
            return nm if nm else None
        if isinstance(node, gcc.ArrayRef):
            return None
        if isinstance(node, gcc.IntegerCst):
            return None
        # NopExpr 등 래퍼: inner operand 시도
        inner = getattr(node, "operand", None)
        if inner is not None:
            return self._get_base_var_name(inner)
        return None

    # =========================================================================
    # [6] _get_op_symbol: GIMPLE exprcode → 연산자 기호                    [O]
    # =========================================================================
    # 기존과 동일.
    # =========================================================================
    def _get_op_symbol(self, exprcode):
        try:
            s = str(exprcode).lower()
            if "rshift" in s: return ">>"
            if "lshift" in s: return "<<"
            if "plus" in s:  return "+"
            if "minus" in s: return "-"
            if "mult" in s:  return "*"
            if "ge" in s:    return ">="
            if "le" in s:    return "<="
            if "gt" in s:    return ">"
            if "lt" in s:    return "<"
            if "eq" in s:    return "=="
            if "ne" in s:    return "!="
        except Exception:
            pass
        return "+"

    # =========================================================================
    # [7] _build_semantic_names: SSA 버전 → 의미 이름 매핑 구축            [O]
    # =========================================================================
    # 기존과 동일. Pass 1(직접 매핑) + Pass 2(전파).
    # 정책 Section 1.1: ssa_# 노출 최소화.
    # =========================================================================
    def _build_semantic_names(self, fun):
        self.ssa_semantic = {}
        if not getattr(fun, "cfg", None):
            return

        # Pass 1: 직접 매핑 (ArrayRef, VarDecl/ParmDecl)
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                lhs = stmt.lhs
                if not isinstance(lhs, gcc.SsaName):
                    continue
                ver = getattr(lhs, "version", None)
                if ver is None or ver in self.ssa_semantic:
                    continue
                if len(stmt.rhs) == 1:
                    rhs0 = stmt.rhs[0]
                    if isinstance(rhs0, gcc.ArrayRef):
                        base, idx = self._arrayref_parts(rhs0)
                        self.ssa_semantic[ver] = f"{base}[{idx}]"
                        continue
                    op1 = getattr(rhs0, "operand1", None)
                    if isinstance(op1, gcc.ArrayRef):
                        base, idx = self._arrayref_parts(op1)
                        self.ssa_semantic[ver] = f"{base}[{idx}]"
                        continue
                    if isinstance(rhs0, (gcc.VarDecl, gcc.ParmDecl)):
                        self.ssa_semantic[ver] = self._get_clean_name(rhs0)
                        continue

        # Pass 2: SSA → SSA 복사 전파
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                lhs = stmt.lhs
                if not isinstance(lhs, gcc.SsaName):
                    continue
                ver = getattr(lhs, "version", None)
                if ver is None or ver in self.ssa_semantic:
                    continue
                if (len(stmt.rhs) == 1
                        and isinstance(stmt.rhs[0], gcc.SsaName)):
                    src_ver = getattr(stmt.rhs[0], "version", None)
                    if src_ver in self.ssa_semantic:
                        self.ssa_semantic[ver] = self.ssa_semantic[src_ver]

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     Z/Y 인코딩 헬퍼                                 │
    # │  정책 Section 5: Z/Y 인코딩 및 출력 규칙                            │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [8] _make_z16: Z-Bank 16비트 명령어 워드 조합                        [O]
    # =========================================================================
    # 기존과 동일. 정책 Section 5.1 준수.
    # Z[15:0] 비트 필드:
    #   [4:0] opcode, [5] mesh_right, [6] xd_mem, [7] y_left_xd,
    #   [8] sum_neg, [9] xx_left_xd, [10] write_en, [11] branch_hold,
    #   [12] a_bank_rd, [13] a_bank_wr, [15:14] a_addr_mode
    # =========================================================================
    def _make_z16(
        self, opcode_hex,
        mesh_right=False, xd_mem=False, y_left_xd=False,
        sum_neg=False, xx_left_xd=False, write_en=False,
        branch_hold=False, a_bank_rd=False, a_bank_wr=False,
        a_addr_mode=0,
    ):
        opcode = int(opcode_hex, 16) & 0x1F
        z = opcode
        if mesh_right:   z |= (1 << 5)
        if xd_mem:       z |= (1 << 6)
        if y_left_xd:    z |= (1 << 7)
        if sum_neg:      z |= (1 << 8)
        if xx_left_xd:   z |= (1 << 9)
        if write_en:     z |= (1 << 10)
        if branch_hold:  z |= (1 << 11)
        if a_bank_rd:    z |= (1 << 12)
        if a_bank_wr:    z |= (1 << 13)
        z |= ((a_addr_mode & 0x3) << 14)
        return z & 0xFFFF

    # =========================================================================
    # [9] _z32_word: 16비트 Z → 32비트 MIF hex 문자열                      [O]
    # =========================================================================
    # 정책 Section 5.1: "하위 16비트에만 패킹하여 32-bit hex로 기록"
    # =========================================================================
    def _z32_word(self, z16):
        return f"{(z16 & 0xFFFF):08x}"

    # =========================================================================
    # [10] _add_mask: ADD 명령의 Y-Bank 비트마스크 계산                     [O]
    # =========================================================================
    # 정책 Section 5.2: bit_index = 16 + (src_core - dst_core)
    # ADD-path 제약: src는 dst±16 범위 내 (정책 Section 3.2)
    # =========================================================================
    def _add_mask(self, dst_idx, src_indices):
        mask = 0
        for s in src_indices:
            if s is None:
                continue
            bit = 16 + (s - dst_idx)
            if 0 <= bit <= 31:
                mask |= (1 << bit)
        return mask & 0xFFFFFFFF

    # =========================================================================
    # [11] _format_mnemonic: 명령어 니모닉 포맷팅                          [O]
    # =========================================================================
    # 형식: "CMD(Z_HEX, Y_HEX)"
    # =========================================================================
    def _format_mnemonic(self, cmd, z_hex, y_val):
        try:
            y_int = int(y_val)
            y_hex = f"{y_int & 0xFFFFFFFF:08x}"
        except Exception:
            y_hex = "00000000"
        return f"{cmd}({z_hex}, {y_hex})"

    # =========================================================================
    # [12] _reg_idx: 레지스터 문자열("r5") → 정수 인덱스(5)                [O]
    # =========================================================================
    def _reg_idx(self, reg_str):
        if not reg_str:
            return None
        if reg_str.startswith("r") and reg_str[1:].isdigit():
            return int(reg_str[1:])
        return None

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     IR 분석 (Feature Detection)                     │
    # │  정책 Section A2, D: top-level 분기 금지, feature 기반 조건부 pass   │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [13] _analyze_ir: GIMPLE IR 분석 → feature 플래그 생성            [△v4]
    # =========================================================================
    # v4: 이름 패턴(h#, xv#, yo*) 기반 감지 → 구조적 감지로 전면 교체.
    #
    # 역할:
    #   함수의 GIMPLE IR을 순회하여 다음 feature를 판별:
    #     - is_mac (bool):        MAC 혼합연산 패턴 감지 여부 (구조적)
    #     - coeff_vars (dict):    계수 변수 {변수이름: 상수값}
    #     - output_arrays (set):  배열 쓰기(ArrayRef LHS) base 이름
    #     - input_arrays (set):   배열 읽기(ArrayRef RHS) base 이름
    #     - mult_results (set):   곱셈 결과 변수 이름 (LHS)
    #     - has_mult (bool):      곱셈 연산 존재 여부
    #     - cond_count (int):     조건문 개수
    #     - skip_cond_indices:    비연산 조건문 인덱스
    #
    # 구조적 MAC 활성 조건 (이름 패턴 무관):
    #   1) 출력 배열이 존재 (ArrayRef LHS)
    #   2) 상수 대입 후 곱셈에 사용된 변수(계수)가 5개 이상
    #   3) 계수 사용 곱셈이 5개 이상
    #
    # 계수 판별 과정 (2-pass):
    #   Pass 1: var = IntegerCst → const_assigns에 수집
    #           var = expr (비상수) → reassigned_vars에 수집
    #           true_consts = const_assigns - reassigned_vars
    #   Pass 2: a * b에서 a 또는 b가 true_consts에 있으면 → coeff_vars로 승격
    #
    # ★ 핵심: reassigned_vars 필터링이 없으면 xv0=0 (초기화)이
    #   const_assigns에 포함되어 곱셈에서 xv가 계수로 오판됨
    #
    # 향후 확장 포인트:
    #   - MAC(Multiply-Accumulate) 패턴 감지
    #   - Butterfly(FFT) 패턴 감지
    #   - 다중 루프 패턴 감지
    #
    # 매개변수:
    #   fun: GCC 함수 객체
    #
    # 반환값:
    #   dict: feature 플래그 딕셔너리
    # =========================================================================
    def _analyze_ir(self, fun):
        features = {
            "is_mac": False,
            "coeff_vars": {},        # 구조적 계수: {이름: 상수값}
            "output_arrays": set(),  # ArrayRef LHS 배열 base 이름
            "input_arrays": set(),   # ArrayRef RHS 배열 base 이름
            "mult_results": set(),   # 곱셈 결과 변수 이름 (LHS)
            "has_mult": False,
            "cond_count": 0,
            "skip_cond_indices": set(),
        }

        if not getattr(fun, "cfg", None):
            return features

        # ── Phase 1: 상수 대입 수집 ──
        # ★ _get_base_var_name() 사용: SSA semantic 우회하여 원본 변수명 추적
        #   xv0_ver1=0 → base_var="xv0", xv0_ver2=xn[i] → base_var="xv0"
        #   → 같은 "xv0"로 추적 (ssa_semantic이 "xn[i]"로 바꿔도 무관)
        const_assigns = {}        # {원본변수명: 상수값}
        reassigned_vars = set()   # 비상수 대입이 있는 원본변수명

        # ── Phase 2에서 채워질 변수들 ──
        coeff_vars = {}       # 곱셈에 사용된 상수 변수 → 계수
        mult_results = set()  # 곱셈 LHS 변수 이름
        output_arrays = set() # ArrayRef LHS의 base 이름
        input_arrays = set()  # ArrayRef RHS의 base 이름
        has_any_mult = False
        coeff_mult_cnt = 0    # 계수 사용 곱셈 횟수
        cond_count = 0
        skip_cond_indices = set()

        # ── Pass 1: 상수 대입 + 배열 접근 + 조건문 수집 ──
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                # ── 조건문 카운팅 + 비연산 조건 감지 ──
                if isinstance(stmt, gcc.GimpleCond):
                    if self._is_noncompute_cond(bb, stmt):
                        skip_cond_indices.add(cond_count)
                    cond_count += 1
                    continue

                if not isinstance(stmt, gcc.GimpleAssign):
                    continue

                # ★ 원본 변수명 (SSA semantic 우회)
                lhs_base = self._get_base_var_name(stmt.lhs)

                # [구조적 감지 1] 상수 대입: var = IntegerCst
                if (len(stmt.rhs) == 1
                        and isinstance(stmt.rhs[0], gcc.IntegerCst)):
                    if lhs_base:
                        const_assigns[lhs_base] = int(stmt.rhs[0].constant)
                else:
                    # 비상수 대입 추적 (SSA self-copy 제외)
                    # h0_v2 = h0_v1 → base="h0","h0" → self-copy → 스킵
                    # xv0_v2 = xn[i] → base="xv0","xn" → 다름 → 재대입
                    # t0 = xv0 * h0 → 이항 → is_selfcopy=False → 재대입
                    if lhs_base:
                        is_selfcopy = False
                        if len(stmt.rhs) == 1:
                            rhs_base = self._get_base_var_name(stmt.rhs[0])
                            if rhs_base is not None and rhs_base == lhs_base:
                                is_selfcopy = True
                        if not is_selfcopy:
                            reassigned_vars.add(lhs_base)

                # [구조적 감지 2] 배열 쓰기: LHS가 ArrayRef
                if isinstance(stmt.lhs, gcc.ArrayRef):
                    base, _ = self._arrayref_parts(stmt.lhs)
                    output_arrays.add(str(base))

                # [구조적 감지 3] 배열 읽기: RHS에 ArrayRef
                for rhs_op in stmt.rhs:
                    arr_node = None
                    if isinstance(rhs_op, gcc.ArrayRef):
                        arr_node = rhs_op
                    elif hasattr(rhs_op, "operand"):
                        inner = getattr(rhs_op, "operand", None)
                        if isinstance(inner, gcc.ArrayRef):
                            arr_node = inner
                    if arr_node is not None:
                        base, _ = self._arrayref_parts(arr_node)
                        input_arrays.add(str(base))

        # ── 진짜 상수 필터링 ──
        # const_assigns에만 있고 reassigned_vars에 없는 변수 = 진짜 상수
        # 예: h0=-1  → const만 (재대입 없음) → 진짜 상수 ✓
        #     xv0=0  → const + xv0=xn[i](재대입) → 가짜 → 제외
        #     i=0    → const + i=i+1(재대입)     → 가짜 → 제외
        true_consts = {
            k: v for k, v in const_assigns.items()
            if k not in reassigned_vars
        }

        # ── 헬퍼: 노드에서 상수값 해석 (3-strategy) ──
        def _resolve_const(node, name):
            """곱셈 피연산자에서 계수(상수값)를 해석.
            Returns: (is_coeff, value, coeff_name) or (False, None, None)

            coeff_name은 가능하면 원래 변수명(h0 등)을 반환하여
            ignore_names에 포함시킬 수 있게 함.
            """
            # Strategy 1: 변수 이름이 true_consts에 있음
            if name in true_consts:
                return (True, true_consts[name], name)

            # Strategy 2: 직접 IntegerCst (GCC 상수 전파)
            if isinstance(node, gcc.IntegerCst):
                val = int(node.constant)
                # GCC가 상수를 인라인했더라도 원래 변수명 복원 시도
                # true_consts에서 같은 값을 가진 변수 찾기
                for tc_k, tc_v in true_consts.items():
                    if tc_v == val and tc_k not in coeff_vars:
                        return (True, val, tc_k)
                # 매칭 실패 시 값 문자열 사용
                return (True, val, f"imm={val}")

            # Strategy 3: SsaName의 def_stmt이 상수 대입
            if isinstance(node, gcc.SsaName):
                ds = getattr(node, "def_stmt", None)
                if (isinstance(ds, gcc.GimpleAssign)
                        and len(ds.rhs) == 1
                        and isinstance(ds.rhs[0], gcc.IntegerCst)):
                    val = int(ds.rhs[0].constant)
                    # def_stmt의 원본 변수 이름 사용
                    ds_lhs_name = self._get_clean_name(ds.lhs)
                    if ds_lhs_name not in reassigned_vars:
                        return (True, val, ds_lhs_name)

            return (False, None, None)

        # ── Pass 2: 곱셈 분석 → 계수 변수 승격 (3-strategy) ──
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                sym = self._get_op_symbol(stmt.exprcode)

                if sym == "*" and len(stmt.rhs) == 2:
                    has_any_mult = True
                    lhs = self._get_clean_name(stmt.lhs)
                    mult_results.add(lhs)

                    a_name = self._get_clean_name(stmt.rhs[0])
                    b_name = self._get_clean_name(stmt.rhs[1])

                    # 양쪽 피연산자에 대해 계수 해석 시도
                    # 우선순위: rhs[1]을 먼저 시도 (일반적으로 GCC가 상수를 뒤에 놓음)
                    found = False
                    for node, name in [
                        (stmt.rhs[1], b_name),
                        (stmt.rhs[0], a_name),
                    ]:
                        is_c, val, c_name = _resolve_const(node, name)
                        if is_c:
                            coeff_vars[c_name] = val
                            coeff_mult_cnt += 1
                            found = True
                            break

        # ── Feature 플래그 설정 (2단계 MAC 감지) ──
        #
        # MAC(Multiply-ACcumulate) 혼합연산 패턴 감지:
        #   GIMPLE을 분석하여 아래 구조를 동적으로 감지
        #     ① 시프트 체인: var_k = var_{k-1} (단순 대입 체인)
        #     ② 상수 곱셈:   t_k = var_k * const_k
        #     ③ 합산:        result = t_0 + t_1 + ... + t_N
        #     ④ 배열 출력:   out[i] = result
        #
        # ★ 주 조건 (strict): 상수곱셈 기반
        #   output_arrays > 0 AND coeff_vars >= 5 AND coeff_mult_cnt >= 5
        #
        # ★ 폴백 조건 (relaxed): 구조적 감지
        #   output_arrays > 0 AND true_consts >= 5 AND (has_any_mult OR input_arrays > 0)
        #   → GCC가 곱셈을 shift/negate로 최적화해도 감지 가능
        is_mac_strict = (len(output_arrays) > 0
                         and len(coeff_vars) >= 5
                         and coeff_mult_cnt >= 5)

        is_mac_relaxed = (not is_mac_strict
                          and len(output_arrays) > 0
                          and len(true_consts) >= 5
                          and (has_any_mult or len(input_arrays) > 0))

        is_mac = is_mac_strict or is_mac_relaxed

        # ── 폴백: coeff_vars 보충 ──
        # 곱셈 감지가 불완전한 경우 true_consts 전체를 계수로 사용
        if is_mac and len(coeff_vars) < len(true_consts):
            for tc_k, tc_v in true_consts.items():
                if tc_k not in coeff_vars:
                    coeff_vars[tc_k] = tc_v

        # ── [DEBUG v4] 진단 출력 ──
        import sys
        print("=" * 60, file=sys.stderr)
        print(f"[DEBUG _analyze_ir]", file=sys.stderr)
        print(f"  const_assigns ({len(const_assigns)}):", file=sys.stderr)
        for k, v in sorted(const_assigns.items()):
            re_mark = " [RE]" if k in reassigned_vars else ""
            tc_mark = " [TRUE_CONST]" if k in true_consts else ""
            print(f"    {k} = {v}{re_mark}{tc_mark}", file=sys.stderr)
        print(f"  reassigned_vars ({len(reassigned_vars)}): "
              f"{sorted(reassigned_vars)}", file=sys.stderr)
        print(f"  true_consts ({len(true_consts)}): "
              f"{sorted(true_consts.keys())}", file=sys.stderr)
        print(f"  output_arrays: {output_arrays}", file=sys.stderr)
        print(f"  input_arrays:  {input_arrays}", file=sys.stderr)
        print(f"  coeff_vars ({len(coeff_vars)}):", file=sys.stderr)
        for k, v in sorted(coeff_vars.items()):
            print(f"    {k} = {v}", file=sys.stderr)
        print(f"  mult_results:  {mult_results}", file=sys.stderr)
        print(f"  coeff_mult_cnt: {coeff_mult_cnt}", file=sys.stderr)
        print(f"  has_any_mult:   {has_any_mult}", file=sys.stderr)
        # ── 곱셈 statement 상세 ──
        print(f"  [MULT DETAIL]:", file=sys.stderr)
        mult_found_any = False
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                s2 = self._get_op_symbol(stmt.exprcode)
                if s2 == "*" and len(stmt.rhs) == 2:
                    mult_found_any = True
                    l2 = self._get_clean_name(stmt.lhs)
                    a2 = self._get_clean_name(stmt.rhs[0])
                    b2 = self._get_clean_name(stmt.rhs[1])
                    at = type(stmt.rhs[0]).__name__
                    bt = type(stmt.rhs[1]).__name__
                    a_tc = a2 in true_consts
                    b_tc = b2 in true_consts
                    print(f"    {l2} = {a2}({at},tc={a_tc}) "
                          f"* {b2}({bt},tc={b_tc})", file=sys.stderr)
        if not mult_found_any:
            print(f"    (no MULT_EXPR found in GIMPLE)", file=sys.stderr)
        # ── 모든 이항 연산 덤프 (곱셈 누락 원인 추적) ──
        print(f"  [ALL BINARY OPS]:", file=sys.stderr)
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                if len(stmt.rhs) == 2:
                    raw_ec = str(getattr(stmt, "exprcode", "?"))
                    s2 = self._get_op_symbol(stmt.exprcode)
                    l2 = self._get_clean_name(stmt.lhs)
                    a2 = self._get_clean_name(stmt.rhs[0])
                    b2 = self._get_clean_name(stmt.rhs[1])
                    print(f"    {l2} = {a2} {s2} {b2}  "
                          f"[ec={raw_ec}]", file=sys.stderr)
        print(f"  → is_mac_strict  = {is_mac_strict}", file=sys.stderr)
        print(f"  → is_mac_relaxed = {is_mac_relaxed}", file=sys.stderr)
        print(f"  → is_mac = {is_mac}", file=sys.stderr)
        print("=" * 60, file=sys.stderr)

        features["is_mac"] = is_mac
        features["coeff_vars"] = coeff_vars
        features["output_arrays"] = output_arrays
        features["input_arrays"] = input_arrays
        features["mult_results"] = mult_results
        features["has_mult"] = has_any_mult
        features["cond_count"] = cond_count
        features["skip_cond_indices"] = skip_cond_indices

        if skip_cond_indices:
            print(f"  → skip_cond_indices (no arithmetic): "
                  f"{sorted(skip_cond_indices)} / {cond_count} total",
                  file=sys.stderr)

        return features

    # =========================================================================
    # [13-b] _is_noncompute_cond: 비연산 조건문 판별                       [v9]
    # =========================================================================
    # 정책:
    #   "조건문(if/for) 본체에 의미있는 사칙연산(+, -, *)이 없으면
    #    해당 조건은 코어에 할당하지 않고,
    #    조건문 안 상수도 코어에 할당하지 않는다."
    #
    # 판별 방법 (후속 BB 본체만 검사):
    #   ★ 조건 표현식 자체는 검사하지 않음 (GCC 최적화 오판 방지)
    #   ★ 루프 카운터 증감(i=i+1) 자동 제외
    #   ★ GimpleCall(printf 등) BB에서 SSA 임시변수 산술 제외
    #     (배열 인덱스 포인터 계산: _1=i*4, _2=&xn+_1)
    #     → GimpleCall 없는 BB(FIR 본체 등)에서는 SSA도 의미있는 산술
    #
    # 예:
    #   for(i<32) { xv*h+... }          → 산술(GimpleCall 없음) → 할당 ✓
    #   for(i<15) { printf(xn[i]); }    → SSA산술+Call BB → 스킵 ✗
    #   if(curT==100) { x=y+z; }        → 산술(Call 없음) → 할당 ✓
    #   if(curT==100) { printf(); }     → Call만 → 스킵 ✗
    # =========================================================================
    def _is_noncompute_cond(self, bb, stmt=None):
        ARITH_OPS = {"+", "-", "*"}

        try:
            # ── GimpleCond 찾기 ──
            if stmt is None:
                for s in bb.gimple:
                    if isinstance(s, gcc.GimpleCond):
                        stmt = s
                        break
            if stmt is None:
                return False

            # 조건 변수 이름 수집 (카운터 증감 판별용)
            cond_names = set()
            for side in (stmt.lhs, stmt.rhs):
                nm = self._get_clean_name(side)
                if nm and nm not in ("0", "unknown"):
                    cond_names.add(nm)
                # base 변수명도 추가 (SSA→원본)
                base = self._get_base_var_name(side)
                if base:
                    cond_names.add(base)

            # ── 후속 BB 본체 검사 ──
            # 의미있는 사칙연산이 있으면 → 연산 조건 (할당 대상)
            # 제외 대상:
            #   1) 루프 카운터 증감 (i=i+1)
            #   2) GimpleCall이 있는 BB에서 SSA 임시변수 산술
            #      (배열 인덱스 계산: _1=i*4 for printf(xn[i]) 등)
            #      ★ GimpleCall이 없는 BB(FIR본체 등)에서는 무시하지 않음
            succs = getattr(bb, "succs", [])
            for edge in succs:
                dest_bb = getattr(edge, "dest", None)
                if dest_bb is None:
                    continue

                # BB에 GimpleCall(printf 등)이 있는지 선확인
                has_call = any(
                    isinstance(s, gcc.GimpleCall)
                    for s in dest_bb.gimple
                )

                for s in dest_bb.gimple:
                    if not isinstance(s, gcc.GimpleAssign):
                        continue
                    sym = self._get_op_symbol(s.exprcode)
                    if sym not in ARITH_OPS:
                        continue
                    # 사칙연산 발견 → 의미있는지 판별
                    lhs_base = self._get_base_var_name(s.lhs)

                    # ★ GimpleCall BB에서 SSA 임시변수 산술 → 인자 준비용 → 무시
                    #    (printf(xn[i]) → _1=i*4, _2=&xn+_1 등)
                    #    GimpleCall 없는 BB(FIR 등)에서는 SSA도 의미있는 산술
                    if has_call and lhs_base is None:
                        continue

                    # ★ 루프 카운터 증감 (i=i+1) → 무시
                    if lhs_base and lhs_base in cond_names:
                        is_counter = False
                        for rhs_node in s.rhs:
                            rhs_base = self._get_base_var_name(rhs_node)
                            if rhs_base == lhs_base:
                                is_counter = True
                                break
                        if is_counter:
                            continue

                    # 실제 의미있는 산술 → 할당 대상
                    return False

            # 의미있는 사칙연산 없음 → 비연산 조건
            return True

        except Exception:
            return False

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     레지스터 맵 생성                                 │
    # │  정책 Section 2: 레지스터(코어) 할당 정책                            │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [14] _build_register_map: 통합 레지스터 맵 생성                     [△v4]
    # =========================================================================
    # v4: MAC/Generic 분기 제거. 모든 모드에서 동일한 동적 GIMPLE 기반 할당.
    #
    # 모든 모드 → _augment_regs_from_gimple() 단일 경로
    # MAC일 때: coeff_vars(계수 변수)만 코어 할당에서 제외
    #           (계수는 SMT의 Y-immediate로 전달되므로 코어 불필요)
    #
    # 정책 준수:
    #   - Section 2.1: init↔op 사이 코어 고정
    #   - Section 2.2: 합산에 쓰이는 상수만 cst_# 할당
    #   - Section B2: 단항 초기화 상수는 Init(LXY)로만 처리
    #   - Section B4: cond_res 초기값 고정 4 (outLoop)
    # =========================================================================
    def _build_register_map(self, fun):
        import sys
        reg_map = {}

        if self.features.get("is_mac"):
            # ── MAC(혼합연산) 전용 레이아웃 생성 ──
            # 3-core 그룹 [shift][mult][store] + 분할누적기 + 입력배열
            self._build_mac_layout(fun, reg_map)

            # 나머지 (i, constants, conditions)는 MAC 블록 뒤에 배치
            mac_ignore = set(self.features.get("coeff_vars", {}).keys())
            mac_ignore.update(getattr(self, "_mac_all_var_names", set()))
            self._augment_regs_from_gimple(
                fun, reg_map,
                allow_constants=True,
                ignore_names=mac_ignore
            )
        else:
            coeff_names = set(self.features.get("coeff_vars", {}).keys())
            self._augment_regs_from_gimple(
                fun, reg_map,
                allow_constants=True,
                ignore_names=coeff_names
            )

        print(f"[DEBUG _build_register_map] "
              f"reg_map keys ({len(reg_map)}): "
              f"{sorted(reg_map.keys())}", file=sys.stderr)
        return reg_map

    # =========================================================================
    # [14-b] _build_mac_layout: MAC(혼합연산) 코어 배치                    [v6]
    # =========================================================================
    # GIMPLE에서 감지된 MAC 패턴을 3-core 그룹으로 배치.
    #
    # 동적 감지 흐름:
    #   1) 곱셈 피연산자에서 시프트 변수/상수 분리
    #   2) 시프트 변수의 def_stmt 역추적 → 시프트 체인 구축
    #   3) 탭 인덱스: h(\d+) 패턴 또는 GIMPLE 등장 순서
    #   4) 3-core 그룹 배치 (역순):
    #      [shift(pSt=1)] [mult(pSt=2)] [store(pSt=3)]
    #   5) 분할 누적기 (multi-source ADD) + 최종 출력 (A-bank write)
    #
    # 배치 제약:
    #   - 누적기의 모든 _store 소스가 ±16 범위 내
    #   - _store는 매 3번째 코어 → 누적기당 최대 ~11개 탭
    #   - 최종 출력은 모든 누적기가 ±16 범위 내
    # =========================================================================
    def _build_mac_layout(self, fun, reg_map):
        import sys
        coeff_vars = self.features.get("coeff_vars", {})
        mult_results = self.features.get("mult_results", set())
        output_arrays = self.features.get("output_arrays", set())
        input_arrays = self.features.get("input_arrays", set())

        N = len(coeff_vars)

        # ── 출력/입력 배열 base 이름 동적 결정 ──
        out_base = sorted(output_arrays)[0] if output_arrays else "out"
        # 입력 배열: output_arrays에 포함되지 않는 것
        in_base = None
        for ia in sorted(input_arrays):
            if ia not in output_arrays:
                in_base = ia
                break
        if in_base is None:
            in_base = sorted(input_arrays)[0] if input_arrays else "in"

        # ── Step 1: GIMPLE에서 곱셈 정보 수집 ──
        # mult_ssa → (src_var_name, coeff_name, coeff_val)
        # ★ src에는 _get_base_var_name 사용 (SSA semantic 미적용)
        #   → xv0_ver2를 "xn[i]"가 아닌 "xv0"로 보존
        #   coeff 매칭은 _get_clean_name 유지 (coeff_vars 키와 일치)
        mult_info = {}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                sym = self._get_op_symbol(stmt.exprcode)
                if sym == "*" and len(stmt.rhs) == 2:
                    lhs = self._get_clean_name(stmt.lhs)
                    if lhs in mult_results:
                        a_clean = self._get_clean_name(stmt.rhs[0])
                        b_clean = self._get_clean_name(stmt.rhs[1])
                        a_base = self._get_base_var_name(stmt.rhs[0])
                        b_base = self._get_base_var_name(stmt.rhs[1])
                        if b_clean in coeff_vars:
                            src = a_base if a_base else a_clean
                            mult_info[lhs] = (src, b_clean, coeff_vars[b_clean])
                        elif a_clean in coeff_vars:
                            src = b_base if b_base else b_clean
                            mult_info[lhs] = (src, a_clean, coeff_vars[a_clean])

        # ── Step 2: 시프트 체인 수집 (동적 역추적) ──
        # 곱셈의 비계수 피연산자(src)로부터 역추적:
        #   src = "xv1" → xv1의 정의가 "xv1 = xv0" → shift_chain["xv1"]="xv0"
        #   src = "xv0" → xv0의 정의가 "xv0 = xn[i]" → shift_chain["xv0"]="xn[i]"
        # ★ 변수명 패턴에 의존하지 않음 (xv, buf, delay 등 무관)

        # 2a) 모든 단항 대입을 수집 (이름 무관)
        # ★ lhs는 _get_base_var_name 사용 (SSA semantic 미적용)
        #   → xv0=xn[i]에서 lhs가 "xv0"로 보존 (not "xn[i]")
        all_single_assigns = {}  # {lhs_base_name: rhs_name_or_"base[idx]"}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                if len(stmt.rhs) != 1:
                    continue
                lhs_base = self._get_base_var_name(stmt.lhs)
                if not lhs_base:
                    lhs_base = self._get_clean_name(stmt.lhs)
                if lhs_base in coeff_vars:
                    continue
                rhs0 = stmt.rhs[0]
                actual_rhs = rhs0
                if (hasattr(rhs0, "operand")
                        and not isinstance(rhs0, gcc.ArrayRef)):
                    actual_rhs = getattr(rhs0, "operand", rhs0)
                if isinstance(actual_rhs, gcc.ArrayRef):
                    base, idx = self._arrayref_parts(actual_rhs)
                    all_single_assigns[lhs_base] = f"{base}[{idx}]"
                else:
                    rhs_base = self._get_base_var_name(actual_rhs)
                    all_single_assigns[lhs_base] = (
                        rhs_base if rhs_base else
                        self._get_clean_name(actual_rhs))

        # 2b) 곱셈 소스 변수에서 시작하여 체인 역추적
        mult_src_vars = set(src for src, _, _ in mult_info.values())
        shift_chain = {}     # {var: source_var_or_arrayref}
        shift_all_vars = set()  # 시프트 체인에 참여하는 모든 변수

        to_trace = set(mult_src_vars)
        while to_trace:
            var = to_trace.pop()
            if var in shift_all_vars:
                continue
            shift_all_vars.add(var)
            if var in all_single_assigns:
                src = all_single_assigns[var]
                shift_chain[var] = src
                # ArrayRef가 아닌 일반 변수면 계속 추적
                if "[" not in src:
                    to_trace.add(src)

        # ── Step 3: 탭 목록 구성 (동적) ──
        # 인덱스 추출: h(\d+) 패턴이 있으면 사용 (계수 명명 규칙),
        #              없으면 GIMPLE 등장 순서(0, 1, 2...)로 자동 번호 부여
        # 시프트 변수: 곱셈의 비계수 피연산자에서 직접 추출 (이름 무관)
        taps = []
        seq_idx = 0  # h(\d+) 미매칭 시 순차 인덱스
        for mult_ssa, (src, coeff_name, coeff_val) in mult_info.items():
            # 계수 이름에서 인덱스 추출 (h0, h1, ... 패턴)
            m = re.match(r"h(\d+)", coeff_name)
            if m:
                tap_idx = int(m.group(1))
            else:
                tap_idx = seq_idx
            seq_idx += 1

            # ★ 동적: 실제 GIMPLE 변수명 사용
            shift_name = src  # 곱셈의 비계수 피연산자 = 실제 시프트 변수명
            shift_src = shift_chain.get(shift_name, "")

            taps.append({
                'idx': tap_idx,
                'mult_ssa': mult_ssa,
                'src': src,
                'coeff': coeff_name,
                'coeff_val': coeff_val,
                'shift_var': shift_name,
                'shift_src': shift_src,
                # 표시명: MIF 주석용 (한 곳에서 관리)
                'mult_name': f"t{tap_idx}",    # 곱셈 결과
                'store_name': f"_{tap_idx}",   # 저장 임시
            })
        taps.sort(key=lambda t: t['idx'])
        N = len(taps)

        # ── Step 4: 분할 전략 계산 ──
        # 누적기당 최대 탭 수: before(6) + after(5) = 11
        MAX_PER_ACC = 11
        if N <= MAX_PER_ACC:
            # 단일 누적기
            splits = [N]
        else:
            # 2분할: 첫 번째 11, 나머지
            first = MAX_PER_ACC
            second = N - first
            if second > MAX_PER_ACC:
                # 3분할 이상 필요 (향후 확장)
                splits = [MAX_PER_ACC, MAX_PER_ACC, N - 2 * MAX_PER_ACC]
            else:
                splits = [first, second]

        # ── Step 5: 코어 배치 (역순 그룹) ──
        taps_rev = list(reversed(taps))
        core = 0  # 시작 코어

        # 배치 결과 저장
        groups = []           # 3-core 그룹 정보
        accumulators = []     # 분할 누적기 정보
        final_core = None  # 최종 출력 코어

        tap_ptr = 0  # taps_rev 내 현재 위치

        for acc_idx, n_taps in enumerate(splits):
            # 이 누적기에 속하는 탭
            chunk_taps = taps_rev[tap_ptr:tap_ptr + n_taps]
            tap_ptr += n_taps

            # before/after 분배:
            #   acc0: before ≤ 6, after ≤ 5 (누적기 자체 범위)
            #   acc1+: before ≤ 4 (final→acc 거리 ≤ 15)
            #          after ≤ 5
            if acc_idx == 0:
                n_before = min(6, n_taps)
            else:
                # final→acc 거리 = n_before*3+1 ≤ 15
                n_before = min(4, n_taps)
            n_after = n_taps - n_before

            # before 그룹 배치
            before_taps = chunk_taps[:n_before]
            for t in before_taps:
                g = {
                    'shift_core': core,
                    'mult_core': core + 1,
                    'store_core': core + 2,
                    'tap': t,
                }
                groups.append(g)
                core += 3

            # 누적기 배치
            acc_core = core
            acc_info = {
                'core': acc_core,
                'name': (f"{out_base}{acc_idx}[i]"
                         if len(splits) > 1
                         else f"{out_base}[i]"),
                'taps': chunk_taps,
                'store_cores': [],
            }
            core += 1

            # after 그룹 배치
            after_taps = chunk_taps[n_before:]
            for t in after_taps:
                g = {
                    'shift_core': core,
                    'mult_core': core + 1,
                    'store_core': core + 2,
                    'tap': t,
                }
                groups.append(g)
                core += 3

            # 누적기의 소스 = 모든 _store 코어
            for g in groups[-n_taps:]:
                acc_info['store_cores'].append(g['store_core'])
            accumulators.append(acc_info)

            # final_core 배치 (첫 번째 누적기 뒤, 다분할인 경우)
            if acc_idx == 0 and len(splits) > 1:
                final_core = core
                core += 1

        # 단일 누적기인 경우 final_core = 누적기 자체
        if len(splits) == 1:
            final_core = accumulators[0]['core']

        # ── Step 6: 입력 배열 코어 배치 ──
        input_core = core
        # 입력 배열 키 결정
        input_key = None
        for ia in input_arrays:
            if ia != list(output_arrays)[0] if output_arrays else "":
                input_key = f"{ia}[i]"
                break
        if input_key is None:
            input_key = f"{in_base}[i]"
        core += 1

        # ── Step 7: reg_map에 등록 ──
        self._mac_all_var_names = set()

        # 입력 배열
        reg_map[input_key] = {
            "reg": f"r{input_core}", "idx": input_core, "val": 0,
            "name": input_key, "type": "var", "pst": "1"
        }
        self._mac_all_var_names.add(input_key)

        # 각 3-core 그룹
        for g in groups:
            t = g['tap']
            sv = t['shift_var']
            mult_ssa = t['mult_ssa']
            mult_name = t['mult_name']    # 동적 표시명
            store_name = t['store_name']  # 동적 표시명

            # shift core: 시프트 변수
            reg_map[sv] = {
                "reg": f"r{g['shift_core']}", "idx": g['shift_core'],
                "val": 0, "name": sv, "type": "var", "pst": "1"
            }
            self._mac_all_var_names.add(sv)

            # mult core: ssa (곱셈 결과)
            reg_map[mult_ssa] = {
                "reg": f"r{g['mult_core']}", "idx": g['mult_core'],
                "val": 0, "name": mult_name, "type": "var", "pst": "2"
            }
            self._mac_all_var_names.add(mult_ssa)

            # store core
            store_key = f"_store_{t['idx']}"
            reg_map[store_key] = {
                "reg": f"r{g['store_core']}", "idx": g['store_core'],
                "val": 0, "name": store_name, "type": "var", "pst": "3"
            }
            self._mac_all_var_names.add(store_key)

        # 누적기
        for acc in accumulators:
            acc_key = acc['name']
            reg_map[acc_key] = {
                "reg": f"r{acc['core']}", "idx": acc['core'],
                "val": 0, "name": acc_key, "type": "var", "pst": "3"
            }
            self._mac_all_var_names.add(acc_key)

        # final_core (다분할일 때만 별도)
        if len(splits) > 1:
            final_key = f"{out_base}[i]"
            reg_map[final_key] = {
                "reg": f"r{final_core}",
                "idx": final_core,
                "val": 0, "name": final_key, "type": "var", "pst": "4"
            }
            self._mac_all_var_names.add(final_key)

        # ── Step 8: 레이아웃 정보 저장 (pipeline pass용) ──
        self._mac_layout = {
            'groups': groups,
            'accumulators': accumulators,
            'final_core': final_core,
            'input_core': input_core,
            'input_key': input_key,
            'splits': splits,
            'N': N,
            'out_base': out_base,
            'in_base': in_base,
        }

        # ── 디버그 출력 ──
        print(f"[DEBUG _build_mac_layout] N={N}, "
              f"splits={splits}, total_cores={core}",
              file=sys.stderr)
        print(f"  Layout:", file=sys.stderr)
        for g in groups:
            t = g['tap']
            print(f"    r{g['shift_core']}: {t['shift_var']}={t['shift_src']} "
                  f"[shift]", file=sys.stderr)
            print(f"    r{g['mult_core']}: {t['mult_name']}="
                  f"{t['shift_var']}*{t['coeff']} [SMT]", file=sys.stderr)
            print(f"    r{g['store_core']}: {t['store_name']}="
                  f"{t['mult_name']} [store]", file=sys.stderr)
        for acc in accumulators:
            tap_ids = [t['idx'] for t in acc['taps']]
            print(f"    r{acc['core']}: {acc['name']} = sum("
                  f"taps {tap_ids}) [ACC]", file=sys.stderr)
        if len(splits) > 1:
            acc_cores = [a['core'] for a in accumulators]
            print(f"    r{final_core}: {out_base}[i] = sum("
                  f"acc {acc_cores}) [FINAL]", file=sys.stderr)
        print(f"    r{input_core}: {input_key} [A-bank read]",
              file=sys.stderr)

    # =========================================================================
    # [17] _collect_intcst_from_node: 노드에서 정수 상수 재귀 수집          [O]
    # =========================================================================
    # 기존과 동일. 복합 표현식 내부의 모든 IntegerCst를 재귀 수집.
    # =========================================================================
    def _collect_intcst_from_node(self, node, out_set):
        if node is None:
            return
        if isinstance(node, gcc.IntegerCst):
            out_set.add(int(node.constant))
            return
        op1 = getattr(node, "operand1", None)
        op2 = getattr(node, "operand2", None)
        if op1 is not None:
            self._collect_intcst_from_node(op1, out_set)
        if op2 is not None:
            self._collect_intcst_from_node(op2, out_set)

    # =========================================================================
    # [18] _augment_regs_from_gimple: GIMPLE 분석으로 레지스터 맵 보강      [△v4]
    # =========================================================================
    # v4: ignore_h_taps(이름 패턴) → ignore_names(구조적 세트)로 변경.
    #
    # 정책 Section B2: 합산에 쓰이는 상수만 cst_# 할당
    # 정책 Section B4: cond_res 초기값 고정 4 (outLoop)
    # 정책 Section 2.3: 단항 상수 대입은 init의 LXY로 처리
    #
    # 수행 내용:
    #   1) ADD/뺄셈 참여 변수 수집 → 레지스터 할당
    #   2) 합산/조건 사용 상수 수집 → cst_# 할당
    #   3) 초기 상수값 대입 감지 → reg_map val 설정
    #   4) cond_res_# 할당 (초기값=4)
    #
    # 매개변수:
    #   ignore_names: 코어 할당에서 제외할 변수 이름 set
    #                 (MAC 계수 등, SMT Y-immediate로 전달되는 변수)
    # =========================================================================
    def _augment_regs_from_gimple(self, fun, reg_map,
                                   allow_constants=True,
                                   ignore_names=None):
        if ignore_names is None:
            ignore_names = set()
        self.cond_rhs_names = set()
        self.add_mode_vars = set()
        add_constants = set()
        cond_count = 0

        if not getattr(fun, "cfg", None):
            return

        def is_ignored(name: str) -> bool:
            """코어 할당에서 제외할 변수 판별 (구조적)"""
            return str(name) in ignore_names

        def is_ssa(name: str) -> bool:
            """ssa_숫자 패턴 판별
            정책 Section B1: ssa_#는 레지스터/코어 할당 대상에서 제외."""
            return re.match(r"^ssa_\d+$", str(name)) is not None

        # ── GIMPLE 순회: 변수/상수 수집 ──
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign):
                    lhs = self._get_clean_name(stmt.lhs)
                    if is_ignored(lhs):
                        pass
                    elif is_ssa(lhs):
                        pass
                    else:
                        if lhs not in ("0", "unknown"):
                            self.add_mode_vars.add(lhs)

                    sym = self._get_op_symbol(stmt.exprcode)

                    # 이항 +/- 피연산자 수집
                    if len(stmt.rhs) == 2 and sym in ("+", "-"):
                        for op in stmt.rhs:
                            nm = self._get_clean_name(op)
                            if not is_ignored(nm):
                                if (nm not in ("0", "unknown")
                                        and not is_ssa(nm)):
                                    self.add_mode_vars.add(nm)
                            if allow_constants and isinstance(op, gcc.IntegerCst):
                                v = int(op.constant)
                                add_constants.add(v)
                                if sym == "-":
                                    add_constants.add(-v)

                    # 단항 RHS expr 노드 수집
                    if len(stmt.rhs) == 1:
                        rhs0 = stmt.rhs[0]
                        nm0 = self._get_clean_name(rhs0)
                        if not is_ignored(nm0):
                            if (nm0 not in ("0", "unknown")
                                    and not is_ssa(nm0)):
                                self.add_mode_vars.add(nm0)
                        sym0 = self._get_op_symbol(
                            getattr(rhs0, "exprcode", stmt.exprcode))
                        if allow_constants and sym0 in ("+", "-"):
                            tmp = set()
                            self._collect_intcst_from_node(rhs0, tmp)
                            for v in tmp:
                                add_constants.add(v)
                                if sym0 == "-":
                                    add_constants.add(-v)

                elif isinstance(stmt, gcc.GimpleCond):
                    skip_set = self.features.get("skip_cond_indices", set())
                    if cond_count in skip_set:
                        cond_count += 1
                        continue

                    lhs = self._get_clean_name(stmt.lhs)
                    rhs = self._get_clean_name(stmt.rhs)
                    if (lhs not in ("0", "unknown")
                            and not is_ssa(lhs)):
                        self.add_mode_vars.add(lhs)
                    if (rhs not in ("0", "unknown")
                            and not is_ssa(rhs)):
                        self.add_mode_vars.add(rhs)
                    if (not isinstance(stmt.rhs, gcc.IntegerCst)
                            and not rhs.lstrip("-").isdigit()):
                        self.cond_rhs_names.add(rhs)
                    if allow_constants and isinstance(stmt.rhs, gcc.IntegerCst):
                        v = int(stmt.rhs.constant)
                        lhs_cond = self._get_clean_name(stmt.lhs)
                        if lhs_cond == "i":
                            # ★ 루프 변수 조건: 정규화 후 -(v+1)만 사용
                            #   GCC: i<=31 → 반전: >31 → 정규화: >=32
                            #   Init에 필요: -32 = -(31+1) 하나만
                            add_constants.add(-(v + 1))
                        else:
                            # 일반 조건: v와 -v 모두 필요
                            add_constants.add(v)
                            add_constants.add(-v)
                    cond_count += 1

        # ── 레지스터 인덱스 할당 ──
        used = set(v["idx"] for v in reg_map.values()) if reg_map else set()
        next_free = 0

        def alloc_idx():
            nonlocal next_free
            while next_free in used or next_free >= 126:
                next_free += 1
            if next_free >= 126:
                return None
            used.add(next_free)
            idx = next_free
            next_free += 1
            return idx

        # 변수 레지스터 할당
        for name in sorted([
            v for v in self.add_mode_vars
            if (not v.lstrip("-").isdigit()
                and v != "unknown"
                and not v.startswith("cst_")
                and not re.match(r"^ssa_\d+$", v)
                and v not in ignore_names)
        ]):
            if name in reg_map:
                continue
            idx = alloc_idx()
            if idx is None:
                break
            reg_map[name] = {
                "reg": f"r{idx}", "idx": idx, "val": 0,
                "name": name, "type": "var"
            }

        # 초기 상수값 설정
        # ── [정책 v3-2] 마이너스 치환(- → +이항) ──
        # 조건문 RHS 변수는 Init에서 음수로 저장한다.
        # 이유: 현재 소프트웨어에서 뺄셈(SUB)을 직접 구현할 수 없으므로,
        #       RHS 값을 미리 -로 치환해 두면 Op에서 ADD(+)만으로
        #       (lhs - rhs)와 동일한 결과를 얻을 수 있다.
        # 예: if(i < 15) → cond_rhs "15"
        #     → Init: val = -15 (음수 치환)
        #     → Op:   ADD(i + (-15)) = i - 15
        #     즉, 이항 시 "-"가 아닌 "+"로 이항된다.
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign):
                    lhs = self._get_clean_name(stmt.lhs)
                    if (lhs in reg_map
                            and len(stmt.rhs) == 1
                            and isinstance(stmt.rhs[0], gcc.IntegerCst)):
                        raw = int(stmt.rhs[0].constant)
                        reg_map[lhs]["val"] = (
                            -raw if lhs in self.cond_rhs_names else raw
                        )

        # 상수 레지스터 할당 (정책 B2: 합산에 쓰이는 상수만)
        if allow_constants:
            for v in sorted(set(add_constants)):
                if v == 0:
                    continue
                key = f"cst_{v}"
                if key in reg_map:
                    continue
                idx = alloc_idx()
                if idx is None:
                    break
                reg_map[key] = {
                    "reg": f"r{idx}", "idx": idx, "val": int(v),
                    "name": str(v), "type": "const"
                }

        # cond_res 할당 (정책 B4: 초기값 고정 4 = outLoop)
        # 정책 v3: 비연산 조건(skip_cond_indices)은 cond_res 할당하지 않음
        skip_set = self.features.get("skip_cond_indices", set())
        for k in range(cond_count):
            if k in skip_set:
                continue
            key = f"cond_res_{k}"
            if key in reg_map:
                continue
            idx = alloc_idx()
            if idx is None:
                break
            reg_map[key] = {
                "reg": f"r{idx}", "idx": idx, "val": 4,
                "name": "4 (outLoop)", "type": "cond"
            }

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     Init 블록 생성                                  │
    # │  정책 Section A1: "짝수 GPC = Init, 선언/초기화(LXY)만 수행"        │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [19] _generate_init_block: Init(LXY) 블록 생성                       [O]
    # =========================================================================
    # 기존과 동일.
    # 각 코어에 초기값을 LXY 명령으로 로드.
    # 코어 126=return address, 127=branch address (예약)
    #
    # 반환값:
    #   dict: 초기 상태 {코어인덱스: 상태정보}
    #         Op 블록의 pass들이 이 상태를 복제하여 수정
    # =========================================================================
    def _generate_init_block(self, reg_map, init_gpc):
        idx_to_info = {v["idx"]: v for v in reg_map.values()}
        init_state = {}
        base = init_gpc * 128

        z16_lxy = self._make_z16("1f")
        z_word = self._z32_word(z16_lxy)
        z_hex = f"{z16_lxy:03x}"

        for i in range(128):
            addr = base + i
            reg_name = f"r{i}"
            z, y = "00000000", "00000000"
            c_code, rc, cmd, res = "", reg_name, "", "0"
            active = False
            pst = ""

            if i == 126:
                c_code = "return address"
            elif i == 127:
                c_code = "branch address"
            elif i in idx_to_info:
                info = idx_to_info[i]
                val = int(info.get("val", 0))
                c_code = (f"{info['name']}={val}"
                          if info["type"] == "var"
                          else f"{info['name']}")
                z = z_word
                y = f"{val & 0xFFFFFFFF:08x}"
                cmd = self._format_mnemonic("LXY", z_hex, val)
                res = str(val)
                active = True
                # 할당된 코어: MAC pSt가 있으면 사용, 없으면 "0"
                pst = info.get("pst", "0")

            self._add_line(
                addr, z, y, f".{reg_name}", c_code, rc, cmd, res,
                init_gpc, pst=pst
            )
            init_state[i] = {
                "z": z, "y": y, "core": f".{reg_name}",
                "c": c_code, "rc": rc, "cmd": cmd,
                "res": res, "is_active": active, "pst": pst
            }

        return init_state

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     Op 블록: 통합 Pass Pipeline                     │
    # │  정책 Section C: keep → MAC? → generic? → cond                      │
    # │  "Op 단계는 다음 순서로 pass를 실행한다(공통)"                       │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [20] _generate_op_block: 통합 Op 블록 생성 (Pass Pipeline 컨트롤러)  [신규]
    # =========================================================================
    # 기존 _generate_op_block_generic / _generate_op_block_fir 를 대체.
    #
    # 역할:
    #   init_state를 복제한 후, 정책 Section C의 순서대로 pass를 실행:
    #     Pass 1: _pass_keep()           → 활성 레지스터 값 유지 (항상)
    #     Pass 2: _pass_mac_pipeline()   → 동적 MAC 파이프라인 (feature 조건부)
    #     Pass 3: _pass_generic_assign() → 일반 assign/mul/add (항상, MAC코어 스킵)
    #     Pass 4: _pass_cond()           → 조건문 분기 명령 (항상)
    #
    # 핵심 변경점:
    #   기존에는 MAC/Generic 경로가 완전 분리되어 코드 중복이 있었으나,
    #   이제 pass pipeline으로 통합되어:
    #   - 공통 로직(keep, cond)은 한 곳에서 관리
    #   - MAC/Generic 전용 로직만 조건부 실행
    #   - 향후 새 feature(MAC, FFT 등) 추가 시 pass만 추가하면 됨
    #
    # 매개변수:
    #   fun        : GCC 함수 객체
    #   reg_map    : 통합 레지스터 맵
    #   init_state : _generate_init_block() 반환값
    #   op_gpc     : Op 블록 GPC 번호 (홀수)
    # =========================================================================
    def _generate_op_block(self, fun, reg_map, init_state, op_gpc):
        base = op_gpc * 128

        # init 상태를 깊은 복사 → pass들이 수정할 작업 상태
        # 정책 Section 2.1: "init↔op 사이 코어 고정" (init_state 원본 보존)
        st = copy.deepcopy(init_state)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Pass 1: Keep (항상 실행)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # 활성 코어는 self-ADD(keep) 적용, 비활성은 빈 상태
        # 정책 Section 6.2: "keep 주석 덮어쓰기 금지"
        #   → c_code는 init_state 값 유지, Z/Y만 keep으로 설정
        self._pass_keep(st)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Pass 2: MAC Pipeline (feature 조건부)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # 정책 Section D: MAC 활성 조건이 충족될 때만 실행
        # GIMPLE IR을 동적 순회하여 MAC 연산 추출 (정책 v4)
        mac_managed = set()
        if self.features.get("is_mac"):
            mac_managed = self._pass_mac_pipeline(fun, st, reg_map)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Pass 3: Generic Assign/Mul/Add (항상 실행)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # GimpleAssign을 ADD/SMT 명령으로 변환
        # MAC일 때: MAC 파이프라인이 관리하는 코어는 스킵하되
        #           루프 변수(i=i+1) 등 일반 연산은 처리
        self._pass_generic_assign(fun, st, reg_map,
                                  skip_indices=mac_managed)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Pass 4: Cond (항상 실행)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # GimpleCond → 분기 명령 (GTZ/GEZ/EQZ/NEQZ)
        # 정책 Section B3: LTZ/LEZ 직접 사용 금지, GEZ/GTZ+SUM_NEG로 변환
        # 정책 Section 4.2: MAC에서도 조건 누락 방지
        self._pass_cond(fun, st, reg_map)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Flush: 최종 상태 → MIF 버퍼 기록
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        for i in range(128):
            extra = st[i].get("_extra_cmt")
            self._add_line(
                base + i, st[i]["z"], st[i]["y"], st[i]["core"],
                st[i].get("c", ""), st[i].get("rc", ""),
                st[i].get("cmd", ""), st[i].get("res", ""),
                op_gpc, pst=st[i].get("pst", "0" if st[i].get("is_active") else ""),
                extra_lines=extra
            )

    # =========================================================================
    # [21] _pass_keep: Pass 1 - 값 유지 (항상 실행)                       [신규]
    # =========================================================================
    # 기존 _apply_keep()을 pass 형태로 래핑.
    #
    # 역할:
    #   init에서 활성화된 코어에 self-ADD(keep) 패턴을 적용하고,
    #   비활성 코어는 빈 상태(NOP)로 초기화한다.
    #
    # 정책 Section 6.2:
    #   "keep 주석 덮어쓰기 금지"
    #   → c_code(주석)는 init_state 값을 그대로 유지
    #   → Z/Y만 self-keep으로 설정
    #
    # 매개변수:
    #   st (dict): 128개 코어의 작업 상태 (in-place 수정)
    # =========================================================================
    def _pass_keep(self, st):
        for i in range(128):
            if st[i]["is_active"]:
                # self-ADD: 자기 자신의 값을 유지하는 ADD 명령
                z16 = self._make_z16("00")
                y = self._add_mask(i, [i])
                st[i].update({
                    "z": self._z32_word(z16),
                    "y": f"{y:08x}",
                    "cmd": self._format_mnemonic("ADD", f"{z16:03x}", y),
                    "rc": f"r{i}",
                    # 정책 6.2: c_code는 건드리지 않음 (init 주석 유지)
                })
            else:
                # 비활성 코어: 빈 상태
                st[i].update({
                    "z": "00000000", "y": "00000000",
                    "cmd": "", "res": ""
                })

    # =========================================================================
    # [22] _pass_mac_pipeline: MAC(혼합연산) MIF 생성                      [v6]
    # =========================================================================
    # _build_mac_layout이 생성한 레이아웃 기반 MIF 엔트리 생성.
    #
    # 구조 (3-core 그룹, 역순):
    #   [shift(pSt=1)] [mult(pSt=2)] [store(pSt=3)]
    #   ...
    #   [accumulator]  (multi-source ADD of store cores)
    #   [final_output] (sum of accumulators, A-bank write)
    #   [input_array]  (A-bank read)
    # =========================================================================
    def _pass_mac_pipeline(self, fun, st, reg_map):
        import sys
        managed = set()

        layout = getattr(self, "_mac_layout", None)
        if layout is None:
            return managed

        groups = layout['groups']
        accumulators = layout['accumulators']
        final_core = layout['final_core']
        input_core = layout['input_core']
        input_key = layout['input_key']
        splits = layout['splits']
        out_base = layout.get('out_base', 'out')
        coeff_vars = self.features.get("coeff_vars", {})

        print(f"[DEBUG _pass_mac_pipeline] ENTERED (v5 layout)",
              file=sys.stderr)
        print(f"  groups={len(groups)}, accumulators={len(accumulators)}, "
              f"splits={splits}", file=sys.stderr)

        # ── 1) 각 3-core 그룹 MIF 생성 ──
        for g in groups:
            t = g['tap']
            sc = g['shift_core']   # shift
            mc = g['mult_core']    # t mult (SMT)
            uc = g['store_core']   # _store

            # ─── 1a) Shift core: shift_var = shift_src ───
            shift_src_name = t['shift_src']
            r_src = self._find_reg(shift_src_name, reg_map)
            i_src = self._reg_idx(r_src)
            if i_src is None:
                i_src = sc  # fallback: self

            y_shift = self._add_mask(sc, [i_src])
            z_shift = self._make_z16("00")

            st[sc].update({
                "z": self._z32_word(z_shift),
                "y": f"{y_shift:08x}",
                "c": f"{t['shift_var']}={shift_src_name}",
                "rc": f"r{i_src}",
                "cmd": self._format_mnemonic(
                    "ADD", f"{z_shift:03x}", y_shift),
                "res": "0",
                "pst": "1",
            })
            managed.add(sc)

            # ─── 1b) Mult core: mult_name = shift_var * coeff (SMT) ───
            coeff_val = t['coeff_val']
            h_hex = f"{int(coeff_val) & 0xFFFFFFFF:08x}"
            z_mult = self._make_z16("08", xx_left_xd=True)
            mn = t['mult_name']   # 동적 표시명

            st[mc].update({
                "z": self._z32_word(z_mult),
                "y": h_hex,
                "c": f"{mn}={t['shift_var']}*{t['coeff']}",
                "rc": f"r{mc}*[{t['coeff']}={h_hex}]",
                "cmd": self._format_mnemonic(
                    "SMT", f"{z_mult:03x}", coeff_val),
                "res": "0",
                "pst": "2",
            })
            managed.add(mc)

            # ─── 1c) Store core: store = mult_result ───
            y_store = self._add_mask(uc, [uc])  # bit 16 = self
            z_store = self._make_z16("00", xx_left_xd=True)
            sn = t['store_name']  # 동적 표시명

            st[uc].update({
                "z": self._z32_word(z_store),
                "y": f"{y_store:08x}",
                "c": f"{sn}={mn}",
                "rc": f"r{uc}",
                "cmd": self._format_mnemonic(
                    "ADD", f"{z_store:03x}", y_store),
                "res": "0",
                "pst": "3",
            })
            managed.add(uc)

        # ── 2) 누적기 MIF 생성 (multi-source ADD) ──
        for acc in accumulators:
            ac = acc['core']
            store_cores = acc['store_cores']

            y_acc = self._add_mask(ac, store_cores)
            z_acc = self._make_z16("00")

            tap_names = "+".join(
                t['mult_name'] for t in acc['taps'])
            r_names = "+".join(f"r{s}" for s in store_cores)

            st[ac].update({
                "z": self._z32_word(z_acc),
                "y": f"{y_acc:08x}",
                "c": f"{acc['name']}= {tap_names}",
                "rc": r_names,
                "cmd": self._format_mnemonic(
                    "ADD", f"{z_acc:03x}", y_acc),
                "res": "0",
                "pst": "3",
            })
            managed.add(ac)

            # 소스가 6개 이상이면 줄바꿈 주석 추가
            if len(acc['taps']) > 6:
                first_taps = "+".join(
                    t['mult_name'] for t in acc['taps'][:6])
                rest_taps = "+".join(
                    t['mult_name'] for t in acc['taps'][6:])
                first_regs = "+".join(
                    f"r{s}" for s in store_cores[:6])
                rest_regs = "+".join(
                    f"r{s}" for s in store_cores[6:])
                st[ac]["c"] = f"{acc['name']}= {first_taps}"
                st[ac]["rc"] = first_regs
                st[ac]["_extra_cmt"] = [
                    f"--{' ' * 34}+{rest_taps}"
                    f"{' ' * 12}+{rest_regs}"]

        # ── 3) 최종 출력 MIF 생성 ──
        if len(splits) > 1:
            acc_cores = [a['core'] for a in accumulators]
            y_final = self._add_mask(final_core, acc_cores)
            z_final = self._make_z16(
                "00",
                a_bank_rd=True, a_bank_wr=True, a_addr_mode=1)

            acc_names = "+".join(a['name'] for a in accumulators)
            r_names = "+".join(f"r{c}" for c in acc_cores)

            st[final_core].update({
                "z": self._z32_word(z_final),
                "y": f"{y_final:08x}",
                "c": f"{out_base}[i]={acc_names}",
                "rc": r_names,
                "cmd": self._format_mnemonic(
                    "ADD", f"{z_final:03x}", y_final),
                "res": "0",
                "pst": "4",
            })
            managed.add(final_core)
        else:
            ac = final_core
            z_final = self._make_z16(
                "00",
                a_bank_rd=True, a_bank_wr=True, a_addr_mode=1)
            st[ac]["z"] = self._z32_word(z_final)
            st[ac]["cmd"] = self._format_mnemonic(
                "ADD", f"{z_final:03x}",
                int(st[ac]["y"], 16))
            st[ac]["res"] = "0"
            st[ac]["pst"] = "4"

        # ── 4) 입력 배열 코어 MIF 생성 (A-bank read) ──
        z_input = self._make_z16(
            "00", xd_mem=True,
            a_bank_rd=True, a_addr_mode=1)

        st[input_core].update({
            "z": self._z32_word(z_input),
            "y": "00000000",
            "c": input_key,
            "rc": f"r{input_core}",
            "cmd": self._format_mnemonic(
                "ADD", f"{z_input:03x}", 0),
            "res": "0",
            "pst": "1",
        })
        managed.add(input_core)

        # ── 디버그 ──
        print(f"[DEBUG _pass_mac_pipeline] EXIT "
              f"managed ({len(managed)}): {sorted(managed)}",
              file=sys.stderr)

        return managed


    # =========================================================================
    # [23] _pass_generic_assign: Pass 3 - 일반 대입/연산                   [△]
    # =========================================================================
    # GimpleAssign → ADD/SMT 명령으로 변환.
    # MAC/Generic 모두에서 실행됨. skip_indices로 MAC 관리 코어 스킵.
    # =========================================================================
    def _pass_generic_assign(self, fun, st, reg_map,
                             skip_indices=None):
        if skip_indices is None:
            skip_indices = set()
        if not getattr(fun, "cfg", None):
            return

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue

                lhs = self._get_clean_name(stmt.lhs)
                if lhs not in reg_map:
                    continue

                dst = reg_map[lhs]["idx"]

                if dst in skip_indices:
                    continue

                if (len(stmt.rhs) == 1
                        and isinstance(stmt.rhs[0], gcc.IntegerCst)):
                    continue

                op1, op2, sym = None, None, ""

                if len(stmt.rhs) == 2:
                    op1 = self._get_clean_name(stmt.rhs[0])
                    op2 = self._get_clean_name(stmt.rhs[1])
                    sym = self._get_op_symbol(stmt.exprcode)
                elif len(stmt.rhs) == 1:
                    rhs0 = stmt.rhs[0]
                    if isinstance(rhs0, (
                        gcc.SsaName, gcc.VarDecl, gcc.ParmDecl,
                        gcc.IntegerCst, gcc.ArrayRef
                    )):
                        op1 = self._get_clean_name(rhs0)
                    elif hasattr(rhs0, "operand1"):
                        op1 = self._get_clean_name(rhs0.operand1)
                        op2 = (
                            self._get_clean_name(rhs0.operand2)
                            if getattr(rhs0, "operand2", None)
                            is not None else None)
                        sym = self._get_op_symbol(
                            getattr(rhs0, "exprcode",
                                    stmt.exprcode))

                if not op1:
                    continue

                r1 = self._find_reg(op1, reg_map)
                r2 = (self._find_reg(op2, reg_map)
                      if op2 else None)
                i1 = self._reg_idx(r1) if r1 else None
                i2 = self._reg_idx(r2) if r2 else None
                srcs = [x for x in (i1, i2) if x is not None]

                if sym == "*":
                    z16 = self._make_z16("08")
                    y_word = 0
                    if op2 is not None:
                        try:
                            y_word = int(str(op2), 0)
                        except Exception:
                            if op2 in reg_map:
                                y_word = int(
                                    reg_map[op2].get("val", 0))
                    st[dst].update({
                        "z": self._z32_word(z16),
                        "y": f"{y_word & 0xFFFFFFFF:08x}",
                        "c": f"{lhs}={op1}*{op2}",
                        "rc": f"{r1}*{(r2 if r2 else op2)}",
                        "cmd": self._format_mnemonic(
                            "SMT", f"{z16:03x}", y_word),
                        "res": "0",
                    })
                else:
                    if not srcs:
                        srcs = [dst]
                    y_mask = self._add_mask(dst, srcs)
                    z16 = self._make_z16("00")
                    st[dst].update({
                        "z": self._z32_word(z16),
                        "y": f"{y_mask:08x}",
                        "c": (f"{lhs}={op1}"
                              + (f"{sym}{op2}" if op2 else "")),
                        "rc": (f"{(r1 if r1 else op1)}"
                               + (f"{sym}{(r2 if r2 else op2)}"
                                  if op2 else "")),
                        "cmd": self._format_mnemonic(
                            "ADD", f"{z16:03x}", y_mask),
                        "res": "0",
                    })

    # =========================================================================
    # [24] _pass_cond: Pass 4 - 조건문 분기 명령 (항상 실행)              [신규]
    # =========================================================================
    # 기존 _generate_op_block_generic / _fir의 GimpleCond 처리를 통합 추출.
    #
    # 역할:
    #   GimpleCond를 EFlow 분기 명령으로 변환.
    #   MAC/Generic 모두에서 공통으로 실행됨 → 조건 누락 방지 (정책 Section 4.2)
    #
    # 정책 Section B3 (조건문 opcode 정책):
    #   >  → GTZ (opcode 0x02)
    #   >= → GEZ (opcode 0x06)
    #   <  → GTZ + SUM_NEG
    #   <= → GEZ + SUM_NEG
    #   == → EQZ (opcode 0x01)
    #   != → NEQZ (opcode 0x04)
    #
    # 정책 Section B3 (loop 조건 반전):
    #   lhs가 "i"이면 탈출 조건으로 뒤집기
    #   예: i < 15 → i >= 15 (탈출 시 분기)
    #
    # 정책 v3-1 (비연산 조건문 스킵):
    #   후속 BB에 printf 등 비연산 함수만 있으면 해당 조건 emit 안 함
    #
    # 정책 v3-2 (마이너스 치환 → + 이항):
    #   현재 소프트웨어에서 뺄셈(-)을 직접 구현할 수 없으므로,
    #   조건문 RHS 값을 Init에서 이미 음수로 치환(-raw)해 두고,
    #   Op에서는 ADD(+)로 이항한다.
    #   예: if(i < 15) → Init: (-15) 저장 → Op: (i) + (-15) >= 0
    #   따라서 c_code 주석도 "-"가 아닌 "+"로 표기.
    #
    # 매개변수:
    #   fun     : GCC 함수 객체
    #   st      : 128개 코어의 작업 상태 (in-place 수정)
    #   reg_map : 레지스터 맵
    # =========================================================================
    def _pass_cond(self, fun, st, reg_map):
        if not getattr(fun, "cfg", None):
            return

        # 비교 연산자 → EFlow 명령 매핑 테이블
        # 정책 B3: LTZ/LEZ 직접 사용 금지
        COND_MAP = {
            ">":  ("GTZ",  "02", False),
            ">=": ("GEZ",  "06", False),
            "<":  ("GTZ",  "02", True),   # GTZ + SUM_NEG
            "<=": ("GEZ",  "06", True),   # GEZ + SUM_NEG
            "==": ("EQZ",  "01", False),
            "!=": ("NEQZ", "04", False),
        }

        # 루프 변수 조건 반전 테이블
        INVERT = {
            "<": ">=", "<=": ">",
            ">": "<=", ">=": "<",
            "==": "!=", "!=": "=="
        }

        # ── depth-1 확장 맵 구축 ──
        # 이항 GimpleAssign을 스캔하여 변수의 소스 피연산자를 기록
        # 예: cur = p0 + p1 → assign_expand["cur"] = ("p0", "p1", "+")
        #     i = i + 1     → assign_expand["i"] = ("i", "1", "+")
        assign_expand = {}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign):
                    continue
                if len(stmt.rhs) != 2:
                    continue
                lhs = self._get_clean_name(stmt.lhs)
                if lhs not in reg_map:
                    continue
                sym = self._get_op_symbol(stmt.exprcode)
                if sym in ("+", "-"):
                    op1 = self._get_clean_name(stmt.rhs[0])
                    op2 = self._get_clean_name(stmt.rhs[1])
                    assign_expand[lhs] = (op1, op2, sym)

        cond_count = 0
        skip_set = self.features.get("skip_cond_indices", set())

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleCond):
                    continue

                # ── [정책 v3] 비연산 조건문 스킵 ──
                if cond_count in skip_set:
                    cond_count += 1
                    continue

                lhs_nm = self._get_clean_name(stmt.lhs)
                rhs_nm = self._get_clean_name(stmt.rhs)
                op_raw = self._get_op_symbol(stmt.exprcode)

                # 루프 변수 조건 반전 (정책 B3)
                is_loop = (lhs_nm == "i")
                rhs_adjust = 0
                if is_loop:
                    op_use = INVERT.get(op_raw, op_raw)
                    # ★ 정수 비교 정규화:
                    #   GCC가 i<32 → i<=31로 변환 시 INVERT가 ">"를 줌
                    #   정수에서 i>31 = i>=32 이므로 ">=" + RHS+1로 정규화
                    #   결과: GEZ + (-32) = 견본과 동일
                    if (op_use == ">"
                            and isinstance(stmt.rhs, gcc.IntegerCst)):
                        op_use = ">="
                        rhs_adjust = 1
                else:
                    op_use = op_raw

                # 조건 명령 선택
                cmd_name, opcode, sum_neg = COND_MAP.get(
                    op_use, ("GEZ", "06", False)
                )

                # cond_res_# 레지스터 매칭
                key = f"cond_res_{cond_count}"
                if key not in reg_map:
                    cond_count += 1
                    continue

                dst = reg_map[key]["idx"]

                # ── depth-1 확장: LHS 소스 레지스터 수집 ──
                # 예: cur → (p0, p1, "+") → [r_p0, r_p1]
                #     i  → (i, 1, "+")   → [r_i, r_1]
                if lhs_nm in assign_expand:
                    exp_op1, exp_op2, exp_sym = assign_expand[lhs_nm]
                    lhs_src_names = [exp_op1, exp_op2]
                    lhs_display = f"{exp_op1}{exp_sym}{exp_op2}"
                else:
                    lhs_src_names = [lhs_nm]
                    lhs_display = lhs_nm

                # LHS 소스 레지스터 인덱스 수집
                lhs_srcs = []
                for name in lhs_src_names:
                    r = self._find_reg(name, reg_map)
                    idx = self._reg_idx(r)
                    if idx is not None:
                        lhs_srcs.append(idx)

                # RHS 레지스터 인덱스
                # ── [정책 v3] 마이너스 치환에 의한 + 이항 ──
                # RHS 값은 Init에서 이미 음수로 치환되어 있으므로
                # ADD(+)로 이항하는 방식.
                # ★ rhs_adjust: 정수 정규화로 인한 상수 보정
                if isinstance(stmt.rhs, gcc.IntegerCst):
                    v = int(stmt.rhs.constant) + rhs_adjust
                    rhs_idx = self._reg_idx(
                        self._find_reg(str(-v), reg_map))
                else:
                    rhs_idx = self._reg_idx(
                        self._find_reg(rhs_nm, reg_map))

                # 전체 소스 = LHS 확장 + RHS
                srcs = list(lhs_srcs)
                if rhs_idx is not None:
                    srcs.append(rhs_idx)
                if not srcs:
                    srcs = [dst]

                # ADD 마스크 및 조건 명령 Z 워드 생성
                y = self._add_mask(dst, srcs)
                z16c = self._make_z16(
                    opcode, branch_hold=True, sum_neg=sum_neg
                )

                # ── c_code 주석 생성 ──
                # RHS는 이미 음수로 치환되어 있으므로 +로 표기
                # depth-1 확장: (p0+p1)+curT>0, (i+1)+iT>=0
                # ★ 루프 정규화 시 조정된 값 표시: i+1>=32 (not (i+1)+31>0)
                if rhs_adjust and isinstance(stmt.rhs, gcc.IntegerCst):
                    adj_v = int(stmt.rhs.constant) + rhs_adjust
                    c_code = f"{lhs_display}{op_use}{adj_v}"
                else:
                    c_code = f"({lhs_display})+{rhs_nm}{op_use}0"

                # ── regSet 주석 생성 ──
                # (r4+r5)+r3>0 ? outL:inL
                lhs_regs = "+".join(f"r{i}" for i in lhs_srcs)
                rhs_reg = f"r{rhs_idx}" if rhs_idx is not None else ""
                rc = (f"({lhs_regs})+{rhs_reg}"
                      f"{op_use}0 ? outL:inL")

                # ── res: 소스 레지스터 Init값을 대입하여 계산 ──
                # Op에서 ADD 연산의 초기 결과값을 구한다.
                # 각 소스 코어의 Init 값(val)을 합산.
                # 예: (p0=0)+(p1=1)+(curT=-100) = -99
                #     (i=0)+(cst_1=1)+(cst_-32=-32) = -31
                idx_to_info = {v["idx"]: v for v in reg_map.values()}
                cond_val = 0
                for src_idx in srcs:
                    if src_idx in idx_to_info:
                        cond_val += int(idx_to_info[src_idx].get("val", 0))

                st[dst].update({
                    "z": self._z32_word(z16c),
                    "y": f"{y:08x}",
                    "c": c_code,
                    "rc": rc,
                    "cmd": self._format_mnemonic(
                        cmd_name, f"{z16c:03x}", y),
                    "res": str(cond_val),
                })
                cond_count += 1

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     레지스터 검색 헬퍼                               │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [25] _find_reg: 변수/상수 이름으로 레지스터 검색                      [O]
    # =========================================================================
    # 기존과 동일. 이름 → reg_map 직접 검색 → cst_# 검색 순.
    # =========================================================================
    def _find_reg(self, clean_name, reg_map):
        if clean_name is None:
            return None
        if clean_name in reg_map:
            return reg_map[clean_name]["reg"]
        try:
            v = int(str(clean_name), 0)
            key = f"cst_{v}"
            if key in reg_map:
                return reg_map[key]["reg"]
        except Exception:
            pass
        return None

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     MIF 출력 (Writer)                               │
    # │  정책 Section 5, 6: 출력 규칙 / 주석 정책                           │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [26] _add_line: MIF 라인 버퍼 추가                                   [O]
    # =========================================================================
    # 기존과 동일. 주소별 Z/Y 데이터 + 주석을 버퍼에 저장.
    # =========================================================================
    def _add_line(self, addr, z_val, y_val, core, c_code,
                  reg_comb, cmd, res_val, gpc, pst="",
                  extra_lines=None):
        self.buffer_z[addr] = z_val
        self.buffer_y[addr] = y_val
        # 칼럼 순서: binFile | Mnemonic | pSt | regSet | cmd | val | gpc
        pst_col = f"{pst:<4}" if pst else "    "
        base = (f"{core:<6} {c_code:<30} {pst_col}"
                f"{reg_comb:<30} "
                f"{cmd:<20} {str(res_val):<8} GPC={gpc}")
        if extra_lines:
            if isinstance(extra_lines, str):
                extra_lines = [extra_lines]
            base = base + "\n" + "\n".join(extra_lines)
        self.buffer_cmt[addr] = base

    # =========================================================================
    # [27] _write_mif_file: MIF 파일 디스크 기록                           [△]
    # =========================================================================
    # 정책 v3 수정:
    #   - 모든 GPC(Generic/MAC/패딩)가 동일하게 실제 MIF 데이터로 출력
    #   - 16 GPC(0~15)까지 패딩
    #   - GPC 헤더에 init/action, 함수명, Z/Y 필드 설명 포함
    #   - MAC GPC에는 pSt(pipeline stage) 칼럼 헤더 추가
    # =========================================================================
    def _write_mif_file(self, path, data_dict, cmt_dict, desc, header):
        total_gpcs = 16   # GPC 0~15 (128 × 16 = 2048 주소)
        end_addr = total_gpcs * 128 - 1

        with open(path, "w", encoding="utf-8") as f:
            # ── MIF 파일 헤더 ──
            f.write("-- single-line comment\n")
            f.write(f"DEPTH = {self.mif_depth};"
                    " -- The size of memory in words\n")
            f.write("WIDTH = 32;"
                    " -- The size of data in bits\n")
            f.write("ADDRESS_RADIX = DEC;"
                    " -- The radix for address values\n")
            f.write("DATA_RADIX = HEX;"
                    " -- The radix for data values\n")
            f.write("CONTENT"
                    " -- start of (address : data pairs)\n")
            f.write("\nBEGIN\n")

            for addr in range(end_addr + 1):
                gpc_num = addr // 128
                core_idx = addr % 128

                # ── GPC 헤더 (128 코어 경계마다) ──
                if core_idx == 0:
                    f.write(self._gpc_header(gpc_num))

                # ── 데이터 라인: 항상 실제 MIF 데이터 ──
                val = data_dict.get(addr, "00000000")
                cmt = cmt_dict.get(addr, None)

                if cmt is None:
                    # 버퍼에 없는 주소 → 빈 코어 기본 주석
                    cmt = (f".r{core_idx:<4}"
                           f" {'':30}"
                           f" {'':4}"
                           f"{'':30}"
                           f" {'':20}"
                           f" 0{'':7}"
                           f"GPC={gpc_num}")

                lines = str(cmt).split("\n")
                f.write(f"{addr:<6} : {val}; -- {lines[0]}\n")
                for extra in lines[1:]:
                    f.write(f"-- {extra}\n")

            f.write("END;\n")

    # =========================================================================
    # [27-b] _gpc_header: GPC 구분 헤더 생성 헬퍼                         [신규]
    # =========================================================================
    # gpc_meta에 등록된 정보에 따라 적절한 GPC 헤더를 생성한다.
    #
    # 출력 형식:
    #   init GPC: "-- GPC N -- 함수명 -- init" + LXY 설명
    #   op GPC:   "-- GPC N -- 함수명 -- action" + ADD 설명
    #   MAC GPC:  위 + pSt 칼럼 헤더
    #   빈 GPC:   "-- GPC N --" + 기본 설명
    # =========================================================================
    def _gpc_header(self, gpc_num):
        meta = self.gpc_meta.get(gpc_num, None)
        lines = []

        if meta is None:
            # ── 빈(패딩) GPC ──
            lines.append(f"-- GPC {gpc_num} --")
            lines.append(
                "-- LXY(z[k], y[k]),"
                " y[127]=32'h00000000, y[126]=32'h00000000,")
            lines.append(
                "-- z[k]=b{HW, LP_YXA, C_TYPE}"
                " = b{00 ,00_000, 1_1111} = h{01f}")
            lines.append(
                "-- Each character in"
                " {HW, LP_YXA, C_TYPE} except '_' "
                " represents control-bits")
            lines += self._gpc_header_yinfo()

        elif meta["type"] == "init":
            # ── Init GPC ──
            name = meta["name"]
            lines.append(f"-- GPC {gpc_num} -- {name} --  init")
            lines.append(
                "-- LXY(z[k], y[k]),"
                " y[127]=32'h00000000, y[126]=32'h00000000,")
            lines.append(
                "-- z[k]=12'b{HI, LP_YXA, C_TYPE}"
                " = 12'b{10 ,00_000, 1_1111} = 12'h{01f}")
            lines.append(
                "-- Each character in"
                " {HI, LP_YXA, C_TYPE} except '_' "
                " represents control-bits")
            lines += self._gpc_header_yinfo()
            if meta.get("is_mac"):
                lines.append("--")
                lines += self._gpc_header_pst_columns()

        elif meta["type"] == "op":
            # ── Op GPC ──
            name = meta["name"]
            lines.append(f"-- GPC {gpc_num} -- {name} --  action")
            lines.append(
                "-- ADD(z[k], y[k]),"
                "  y[127]= 32'h80000000, y[126]= 32'h00000000,")
            lines.append(
                "-- z(k)= 12'b{HI, LP_YXA, C_TYPE}"
                " = 12'b{10 ,00_000, 0_0010} = 32'h{802}, ADD-> GTZ")
            lines.append(
                "-- Each character in"
                " {HI, LP_YXA, C_TYPE} except '_' "
                " represents control-bits")
            lines += self._gpc_header_yinfo()
            if meta.get("is_mac"):
                lines.append("--")
                lines += self._gpc_header_pst_columns()

        return "\n" + "\n".join(lines) + "\n"

    def _gpc_header_yinfo(self):
        """y[127]/y[126] 공통 설명 라인"""
        return [
            "-- y[127][31] means branch-indicator"
            " if (loopen_1d==1)",
            "-- y[127][30] means branch-indicator"
            " if (loopen_2d==1)",
            "-- y[127][15:0] means"
            " loopin_offset_1d/loopin_offset_2d"
            " if triggered by loopen_1d/loopen_2d",
            "-- y[126][31:0] means return address"
            " when return initiated",
        ]

    def _gpc_header_pst_columns(self):
        """MAC용 pSt 칼럼 헤더"""
        # 칼럼 폭을 데이터 라인에 맞추되, pSt는 full label 표시
        return [
            "-- <---- .mif  -->"
            "<--------------------------------------------"
            " .eFlow  ---------------------------------------------"
            "--------------->",
            f"--     {'binFile':<19}{'Mnemonic':<19}"
            f"{'pSt(pipeline stage)':<21}{'regSet':<26}"
            f"{'cmd':<24}{'val':<8}gpc",
            "-- <-----------------------------------------------"
            "---------------------------------------------------"
            "------------------------------>",
        ]