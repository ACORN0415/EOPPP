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
# │  generate (FIR/Generic 분기)     → generate (통합, _analyze_ir)     △  │
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
# │  _detect_fir                     → _analyze_ir (통합)               △  │
# │  _build_fir_layout               → _build_fir_layout                O  │
# │  _build_fir_reg_map              → _build_fir_reg_map                O  │
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
# │  (없음)                          → _pass_fir_pipeline               △  │
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
#   [기존] generate() → _detect_fir() 결과에 따라
#          ├─ FIR 경로:    _generate_op_block_fir()
#          └─ Generic 경로: _generate_op_block_generic()
#
#   [신규] generate() → _analyze_ir()로 feature 플래그 생성
#          ├─ _generate_init_block()   ← 공통 Init (짝수 GPC)
#          └─ _generate_op_block()     ← 통합 Op   (홀수 GPC)
#               ├─ Pass 1: _pass_keep()            (항상 실행)
#               ├─ Pass 2: _pass_fir_pipeline()     (FIR feature일 때만)
#               ├─ Pass 3: _pass_generic_assign()   (항상, FIR코어 스킵)
#               └─ Pass 4: _pass_cond()             (항상 실행)
#
# 핵심 원칙 (정책 문서 Section A):
#   - 함수당 항상 2개 GPC: 짝수=Init, 홀수=Op
#   - "generic vs FIR" top-level 분기 금지
#   - _analyze_ir()가 feature를 생성하고, Op의 pass들이 feature에 따라 조건부 활성
# =============================================================================
class EFlowGenerator:
    """
    Pass-Pipeline 기반 EFlow Generator

    구조:
      함수당 2-GPC 고정 (짝수=Init LXY, 홀수=Op pass-pipeline)
      Op 내부는 조건부 pass로 구성:
        1) keep pass     - 활성 레지스터 값 유지 (항상)
        2) FIR pass      - FIR 파이프라인 (feature 조건부)
        3) generic pass  - 일반 assign/mul/add (FIR 아닐 때)
        4) cond pass     - 조건문 분기 명령 (항상)

    정책 준수사항:
      - ArrayRef: 항상 base[index] 표기 (상수 인덱스도 접지 않음)
      - SSA: ssa_# 노출 최소화 (semantic name 우선)
      - 상수: 합산(ADD/Cond)에 쓰이는 상수만 cst_# 할당
      - FIR tap 계수(hK): 코어 할당 제외, SMT Y-immediate로 전달
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
    #     예: {"is_fir": True, "max_k": 19, "coeff": {0:10,...}, ...}
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

        # ★ GPC 메타데이터: {gpc번호: {"type":"init"/"op", "name":함수명, "is_fir":bool}}
        # _write_mif_file()에서 GPC 헤더를 생성할 때 참조
        self.gpc_meta = {}

    # =========================================================================
    # [2] generate: 핵심 공개 메서드 - 통합 파이프라인                     [△]
    # =========================================================================
    # 기존: _detect_fir() 결과로 FIR/Generic 분기 → 별도 함수 호출
    # 변경: _analyze_ir()로 feature 추출 → 공통 init → 통합 op (pass pipeline)
    #
    # 정책 Section A2:
    #   "generate()에서 FIR/Generic으로 갈라치지 않는다.
    #    대신 _analyze_ir()가 feature를 만들고,
    #    Op 단계의 pass들이 feature에 따라 조건부로 켜진다."
    #
    # 처리 흐름:
    #   1) _build_semantic_names()  → SSA 이름 매핑 구축
    #   2) _analyze_ir()            → feature 플래그 생성 (FIR 여부 등)  ★ 신규
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
        # 기존 _detect_fir()를 확장. FIR 여부뿐 아니라
        # 향후 추가될 feature(예: MAC, butterfly 등)도 여기서 판별
        self.features = self._analyze_ir(fun)

        # ── GPC 메타데이터 저장 ──
        func_name = str(getattr(fun, "decl", "unknown"))
        is_fir = self.features.get("is_fir", False)
        label = "FIR" if is_fir else func_name
        self.gpc_meta[init_gpc] = {
            "type": "init", "name": label, "is_fir": is_fir
        }
        self.gpc_meta[op_gpc] = {
            "type": "op", "name": label, "is_fir": is_fir
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
    # [6] _get_op_symbol: GIMPLE exprcode → 연산자 기호                    [O]
    # =========================================================================
    # 기존과 동일.
    # =========================================================================
    def _get_op_symbol(self, exprcode):
        try:
            s = str(exprcode).lower()
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
    # [13] _analyze_ir: GIMPLE IR 분석 → feature 플래그 생성              [신규]
    # =========================================================================
    # 기존 _detect_fir()를 대체/확장.
    #
    # 역할:
    #   함수의 GIMPLE IR을 한 번 순회하여 다음 feature를 판별:
    #     - is_fir (bool):  FIR 필터 패턴 감지 여부
    #     - max_k (int):    FIR 최대 탭 인덱스
    #     - coeff (dict):   FIR 탭 계수 {k: 값}
    #     - has_mult (bool): 곱셈 연산 존재 여부 (향후 확장용)
    #     - cond_count (int): 조건문 개수
    #
    # 정책 Section D: FIR 활성 조건
    #   - yo[...] store 존재
    #   - hK = const 초기화 >= 5개
    #   - (xvK 또는 xn[i]) * hK 곱셈 >= 5개
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
            "is_fir": False,
            "max_k": -1,
            "coeff": {},
            "has_mult": False,
            "cond_count": 0,
            "skip_cond_indices": set(),  # 비연산 조건문 인덱스 (v3 신규)
        }

        if not getattr(fun, "cfg", None):
            return features

        coeff = {}        # {탭번호: 계수값}
        mult_cnt = 0      # hK * xvK 패턴 곱셈 횟수
        saw_yo = False    # yo 배열 저장 발견 여부
        max_k = -1        # xvK 최대 k 값
        has_any_mult = False  # 곱셈 연산 존재 여부 (FIR 무관)
        cond_count = 0    # GimpleCond 개수
        skip_cond_indices = set()  # 비연산 조건문 인덱스

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                # ── 조건문 카운팅 + 비연산 조건 감지 ──
                if isinstance(stmt, gcc.GimpleCond):
                    # ── [정책 v3] 비연산 조건문 판별 ──
                    # 조건문의 후속 BB들이 printf 같은 비연산 함수만
                    # 포함하면 해당 조건/상수를 코어에 할당하지 않는다.
                    # 예: if(curT==100) { printf("..."); }
                    #     → printf는 연산에 참여하지 않으므로 스킵
                    if self._is_noncompute_cond(bb):
                        skip_cond_indices.add(cond_count)
                    cond_count += 1
                    continue

                if not isinstance(stmt, gcc.GimpleAssign):
                    continue

                lhs = self._get_clean_name(stmt.lhs)
                sym = self._get_op_symbol(stmt.exprcode)

                # [FIR 감지 1] hK = 정수상수 (FIR tap 계수 정의)
                mh = re.match(r"^h(\d+)$", lhs)
                if (mh and len(stmt.rhs) == 1
                        and isinstance(stmt.rhs[0], gcc.IntegerCst)):
                    k = int(mh.group(1))
                    coeff[k] = int(stmt.rhs[0].constant)

                # [FIR 감지 2] yo 배열 저장 (LHS가 ArrayRef이고 base=yo*)
                if isinstance(stmt.lhs, gcc.ArrayRef):
                    base, _ = self._arrayref_parts(stmt.lhs)
                    if str(base).startswith("yo"):
                        saw_yo = True

                # [FIR 감지 3] xvK 변수 발견 → max_k 갱신
                mxv = re.match(r"^xv(\d+)$", lhs)
                if mxv:
                    max_k = max(max_k, int(mxv.group(1)))

                # [곱셈 감지] 이항 곱셈
                if sym == "*" and len(stmt.rhs) == 2:
                    has_any_mult = True
                    a = self._get_clean_name(stmt.rhs[0])
                    b = self._get_clean_name(stmt.rhs[1])

                    # FIR 패턴: h# * xv# 또는 h# * xn[...]
                    def is_fir_mult(left, right):
                        return (re.match(r"^h\d+$", left)
                                and (re.match(r"^xv\d+$", right)
                                     or str(right).startswith("xn[")))

                    if is_fir_mult(a, b):
                        mult_cnt += 1
                        mk = re.match(r"^xv(\d+)$", b)
                        if mk:
                            max_k = max(max_k, int(mk.group(1)))
                    elif is_fir_mult(b, a):
                        mult_cnt += 1
                        mk = re.match(r"^xv(\d+)$", a)
                        if mk:
                            max_k = max(max_k, int(mk.group(1)))

        # ── Feature 플래그 설정 ──

        # 정책 Section D: FIR 활성 조건 (모두 충족 시)
        is_fir = (saw_yo and len(coeff) >= 5
                  and mult_cnt >= 5 and max_k >= 0)

        features["is_fir"] = is_fir
        features["max_k"] = max_k
        features["coeff"] = coeff
        features["has_mult"] = has_any_mult
        features["cond_count"] = cond_count
        features["skip_cond_indices"] = skip_cond_indices

        return features

    # =========================================================================
    # [13-b] _is_noncompute_cond: 비연산 조건문 판별 헬퍼                  [신규]
    # =========================================================================
    # 조건문(GimpleCond)이 위치한 BB의 후속(successor) BB들을 검사하여,
    # 모든 후속 BB에 GimpleAssign(연산)이 없고 GimpleCall(printf 등)만
    # 존재하면 True를 반환한다.
    #
    # 정책 v3:
    #   "조건문 안에 printf와 같이 연산에 참여하지 않는 함수만
    #    존재할 때, 해당 조건과 상수는 코어에 할당하지 않는다."
    #
    # 예: if(curT==100) { printf("done"); }
    #     → 후속 BB에 printf(GimpleCall)만 있고 GimpleAssign이 없음
    #     → True (비연산 조건)
    #
    # 매개변수:
    #   bb: GimpleCond가 위치한 basic block
    #
    # 반환값:
    #   bool: True면 비연산 조건 (코어 할당 스킵)
    # =========================================================================
    def _is_noncompute_cond(self, bb):
        try:
            succs = getattr(bb, "succs", [])
            if not succs:
                return False

            for edge in succs:
                dest_bb = getattr(edge, "dest", None)
                if dest_bb is None:
                    continue
                # 후속 BB의 모든 statement를 검사
                for stmt in dest_bb.gimple:
                    # GimpleAssign이 하나라도 있으면 연산 조건임
                    if isinstance(stmt, gcc.GimpleAssign):
                        return False
            # 모든 후속 BB에 GimpleAssign이 없음 → 비연산 조건
            return True
        except Exception:
            # BB 구조 접근 실패 시 안전하게 False (일반 조건으로 처리)
            return False

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     레지스터 맵 생성                                 │
    # │  정책 Section 2: 레지스터(코어) 할당 정책                            │
    # └─────────────────────────────────────────────────────────────────────┘
    # =========================================================================

    # =========================================================================
    # [14] _build_register_map: 통합 레지스터 맵 생성                     [신규]
    # =========================================================================
    # 기존:
    #   FIR → _build_fir_reg_map() + _augment_regs_from_gimple(ignore_h_taps=True)
    #   Generic → 빈 맵 + _augment_regs_from_gimple(generic=True)
    #
    # 변경:
    #   feature에 따라 내부에서 분기하되, 외부 API는 하나로 통합.
    #   feature 기반 조건부 처리:
    #     - FIR feature → FIR 레이아웃 코어 먼저 배치 + 나머지 보강
    #     - 그 외 → 빈 맵에서 시작 + GIMPLE 분석으로 채움
    #
    # 정책 준수:
    #   - Section 2.1: init↔op 사이 코어 고정
    #   - Section 2.2: 합산에 쓰이는 상수만 cst_# 할당
    #   - Section B2: 단항 초기화 상수는 Init(LXY)로만 처리
    #   - Section B4: cond_res 초기값 고정 4 (outLoop)
    #
    # 매개변수:
    #   fun: GCC 함수 객체
    #
    # 반환값:
    #   dict: 통합 레지스터 맵 {이름: {"reg","idx","val","name","type"}}
    # =========================================================================
    def _build_register_map(self, fun):
        reg_map = {}

        if self.features.get("is_fir"):
            # ── FIR feature 활성: FIR 레이아웃 코어 먼저 배치 ──
            reg_map = self._build_fir_reg_map(fun, self.features)
            # 추가 보강: 조건문 변수/상수 등 (hK는 제외)
            self._augment_regs_from_gimple(
                fun, reg_map,
                allow_constants=True,
                ignore_h_taps=True
            )
        else:
            # ── FIR이 아닌 경우: 빈 맵 + GIMPLE 분석으로 채움 ──
            self._augment_regs_from_gimple(
                fun, reg_map,
                allow_constants=True,
                generic=True
            )

        return reg_map

    # =========================================================================
    # [15] _build_fir_layout: FIR 파이프라인 코어 레이아웃 계산            [O]
    # =========================================================================
    # 기존과 동일.
    # 정책 Section 3.2: ADD-path 제약(dst ±16) 준수를 위한 코어 배치 설계.
    #
    # 그룹 분할:
    #   Group 1 (m1, 최대 11탭) → yo0에서 합산
    #   Group 2 (m2, 나머지)    → yo1에서 합산
    # 합산 코어를 각 그룹 중간에 배치 → ±16 범위 내 보장
    #
    # 반환값:
    #   dict: {"shift", "mult", "store", "yo0", "yo", "yo1", "xn", "m1", "m2"}
    # =========================================================================
    def _build_fir_layout(self, max_k):
        num_taps = max_k + 1
        m1 = min(11, num_taps)
        m2 = num_taps - m1
        p1 = (m1 + 1) // 2
        p2 = max(1, min(4, m2 // 2)) if m2 > 0 else 0

        cursor = 1
        shift, mult, store = {}, {}, {}
        yo0, yo, yo1 = None, None, None

        # Group 1
        for i in range(m1):
            if i == p1:
                yo0 = cursor
                cursor += 1
            k = max_k - i
            shift[k] = cursor
            mult[k] = cursor + 1
            store[k] = cursor + 2
            cursor += 3

        yo = cursor
        cursor += 1

        # Group 2
        for j in range(m2):
            if j == p2:
                yo1 = cursor
                cursor += 1
            k = max_k - m1 - j
            shift[k] = cursor
            mult[k] = cursor + 1
            store[k] = cursor + 2
            cursor += 3

        if m2 > 0 and yo1 is None:
            yo1 = cursor
            cursor += 1

        used_max = cursor - 1
        xn = used_max + 1

        return {
            "shift": shift, "mult": mult, "store": store,
            "yo0": yo0, "yo": yo, "yo1": yo1,
            "xn": xn, "m1": m1, "m2": m2
        }

    # =========================================================================
    # [16] _build_fir_reg_map: FIR 전용 레지스터 맵 생성                   [O]
    # =========================================================================
    # tK는 임시 변수이므로 초기값(val)은 항상 0.
    # hK 계수값은 Init(LXY)에서 로드하는 것이 아니라,
    # Op GPC의 SMT 명령에서 Y-immediate(즉시값)로 전달한다.
    #
    # 즉:
    #   Init GPC: tK = LXY(0)         ← 임시변수이므로 0으로 초기화
    #   Op GPC:   tK = xvK * hK       ← SMT 명령의 Y에 hK 계수(10진수) 삽입
    #
    # xvK(시프트), _K(저장), yo0/yo1/yo(합산), xn[i] 모두 초기값 0.
    # =========================================================================
    def _build_fir_reg_map(self, fun, features):
        layout = self._build_fir_layout(features["max_k"])
        reg_map = {}

        def add(name, idx, val=0, typ="var"):
            if idx is None:
                return
            reg_map[name] = {
                "reg": f"r{idx}", "idx": idx, "val": int(val),
                "name": name, "type": typ
            }

        max_k = features["max_k"]
        for k in range(max_k, -1, -1):
            # xvK: 시프트 레지스터 → 초기값 0 (런타임에 데이터 흐름으로 채워짐)
            add(f"xv{k}", layout["shift"][k], 0, "var")

            # tK: 곱셈 결과 임시 레지스터 → 초기값 0
            # hK 계수는 여기서 넣지 않음. Op GPC의 SMT Y-immediate로 전달.
            add(f"t{k}", layout["mult"][k], 0, "var")

            # _K: 저장 레지스터 → 초기값 0 (곱셈 결과가 런타임에 복사됨)
            add(f"_{k}", layout["store"][k], 0, "var")

        # 합산/출력 레지스터: 초기값 0
        add("yo0[i]", layout["yo0"], 0, "var")
        add("yo1[i]", layout["yo1"], 0, "var")
        add("yo[i]", layout["yo"], 0, "var")
        add("xn[i]", layout["xn"], 0, "var")

        return reg_map

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
    # [18] _augment_regs_from_gimple: GIMPLE 분석으로 레지스터 맵 보강      [O]
    # =========================================================================
    # 기존과 동일.
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
    # =========================================================================
    def _augment_regs_from_gimple(self, fun, reg_map,
                                   allow_constants=True,
                                   ignore_h_taps=False,
                                   generic=False):
        self.cond_rhs_names = set()
        self.add_mode_vars = set()
        add_constants = set()
        cond_count = 0

        if not getattr(fun, "cfg", None):
            return

        def is_h(name: str) -> bool:
            """hK 패턴(FIR tap 계수) 판별"""
            return re.match(r"^h\d+$", str(name)) is not None

        def is_ssa(name: str) -> bool:
            """ssa_숫자 패턴 판별
            정책 Section B1: ssa_#는 레지스터/코어 할당 대상에서 제외.
            ssa_#가 lhs인 assign statement는 emit하지 않음."""
            return re.match(r"^ssa_\d+$", str(name)) is not None

        # ── GIMPLE 순회: 변수/상수 수집 ──
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign):
                    lhs = self._get_clean_name(stmt.lhs)
                    if ignore_h_taps and is_h(lhs):
                        pass
                    elif is_ssa(lhs):
                        # 정책 B1: ssa_#는 코어 할당 대상에서 제외
                        pass
                    else:
                        if lhs not in ("0", "unknown"):
                            self.add_mode_vars.add(lhs)

                    sym = self._get_op_symbol(stmt.exprcode)

                    # 이항 +/- 피연산자 수집
                    if len(stmt.rhs) == 2 and sym in ("+", "-"):
                        for op in stmt.rhs:
                            nm = self._get_clean_name(op)
                            if not (ignore_h_taps and is_h(nm)):
                                # 정책 B1: ssa_#는 코어 할당에서 제외
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
                        if not (ignore_h_taps and is_h(nm0)):
                            # 정책 B1: ssa_#는 코어 할당에서 제외
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
                    # ── [정책 v3] 비연산 조건문 스킵 ──
                    # printf 등 비연산 함수만 포함된 조건은
                    # 변수/상수를 코어에 할당하지 않는다
                    skip_set = self.features.get("skip_cond_indices", set())
                    if cond_count in skip_set:
                        cond_count += 1
                        continue

                    lhs = self._get_clean_name(stmt.lhs)
                    rhs = self._get_clean_name(stmt.rhs)
                    # 정책 B1: ssa_#는 코어 할당에서 제외
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
        # 정책 B1: ssa_#는 코어 할당 대상에서 완전히 제외
        for name in sorted([
            v for v in self.add_mode_vars
            if (not v.lstrip("-").isdigit()
                and v != "unknown"
                and not v.startswith("cst_")
                and not re.match(r"^ssa_\d+$", v))  # ssa_숫자 제외
        ]):
            if name in reg_map:
                continue
            if ignore_h_taps and is_h(name):
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

        z16_lxy = self._make_z16("1f", write_en=True)
        z_word = self._z32_word(z16_lxy)
        z_hex = f"{z16_lxy:04x}"

        for i in range(128):
            addr = base + i
            reg_name = f"r{i}"
            z, y = "00000000", "00000000"
            c_code, rc, cmd, res = "", reg_name, "", "0"
            active = False

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

            self._add_line(
                addr, z, y, f".{reg_name}", c_code, rc, cmd, res, init_gpc
            )
            init_state[i] = {
                "z": z, "y": y, "core": f".{reg_name}",
                "c": c_code, "rc": rc, "cmd": cmd,
                "res": res, "is_active": active
            }

        return init_state

    # =========================================================================
    # ┌─────────────────────────────────────────────────────────────────────┐
    # │                     Op 블록: 통합 Pass Pipeline                     │
    # │  정책 Section C: keep → FIR? → generic? → cond                      │
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
    #     Pass 2: _pass_fir_pipeline()   → FIR 파이프라인 (feature 조건부)
    #     Pass 3: _pass_generic_assign() → 일반 assign/mul/add (항상, FIR코어 스킵)
    #     Pass 4: _pass_cond()           → 조건문 분기 명령 (항상)
    #
    # 핵심 변경점:
    #   기존에는 FIR/Generic 경로가 완전 분리되어 코드 중복이 있었으나,
    #   이제 pass pipeline으로 통합되어:
    #   - 공통 로직(keep, cond)은 한 곳에서 관리
    #   - FIR/Generic 전용 로직만 조건부 실행
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
        # Pass 2: FIR Pipeline (feature 조건부)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # 정책 Section D: FIR 활성 조건이 충족될 때만 실행
        # 실행 내용: shift → mult(SMT) → store → partial sum → final sum
        fir_managed = set()
        if self.features.get("is_fir"):
            fir_managed = self._pass_fir_pipeline(st, reg_map)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Pass 3: Generic Assign/Mul/Add (항상 실행)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # GimpleAssign을 ADD/SMT 명령으로 변환
        # FIR일 때: FIR 파이프라인이 관리하는 코어는 스킵하되
        #           루프 변수(i=i+1) 등 일반 연산은 처리
        self._pass_generic_assign(fun, st, reg_map,
                                  skip_indices=fir_managed)

        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # Pass 4: Cond (항상 실행)
        # ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        # GimpleCond → 분기 명령 (GTZ/GEZ/EQZ/NEQZ)
        # 정책 Section B3: LTZ/LEZ 직접 사용 금지, GEZ/GTZ+SUM_NEG로 변환
        # 정책 Section 4.2: FIR에서도 조건 누락 방지
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
                op_gpc, extra_lines=extra
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
                z16 = self._make_z16("00", write_en=True)
                y = self._add_mask(i, [i])
                st[i].update({
                    "z": self._z32_word(z16),
                    "y": f"{y:08x}",
                    "cmd": self._format_mnemonic("ADD", f"{z16:04x}", y),
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
    # [22] _pass_fir_pipeline: Pass 2 - FIR 파이프라인 (조건부)           [신규]
    # =========================================================================
    # 기존 _generate_op_block_fir()의 파이프라인 부분을 추출.
    #
    # 역할:
    #   FIR feature가 활성일 때만 실행.
    #   단일 Op GPC 안에서 코어를 연속 배치하여 FIR 파이프라인을 구현:
    #
    # 정책 Section E (FIR pipeline 동작):
    #   1) xn[i] 로드: 외부 메모리 입력 읽기 (A-Bank read)
    #   2) shift: xvK = xv(K-1), xv0 = xn[i]
    #   3) mult:  tK = xvK * hK (SMT, Y=coeff immediate)
    #      정책 Section 5.3: "SMT의 Y는 계수/즉시값"
    #   4) store: _K = tK (copy)
    #      정책 Section 3.3: "누산은 tK가 아니라 _K 기반"
    #   5) partial sum:
    #      yo0[i] = Σ(_K group1)
    #      yo1[i] = Σ(_K group2)
    #   6) final sum:
    #      yo[i] = yo0[i] + yo1[i] (A-bank write)
    #
    # 매개변수:
    #   st (dict): 128개 코어의 작업 상태 (in-place 수정)
    #   reg_map: 레지스터 맵
    # =========================================================================
    def _pass_fir_pipeline(self, st, reg_map):
        layout = self._build_fir_layout(self.features["max_k"])
        max_k = self.features["max_k"]
        coeff = self.features["coeff"]

        # ── FIR이 관리하는 코어 인덱스 수집 (Generic assign에서 스킵용) ──
        managed = set()
        managed.add(layout["xn"])
        if layout["yo0"] is not None:
            managed.add(layout["yo0"])
        if layout["yo1"] is not None:
            managed.add(layout["yo1"])
        if layout["yo"] is not None:
            managed.add(layout["yo"])
        for k in range(max_k + 1):
            managed.add(layout["shift"][k])
            managed.add(layout["mult"][k])
            managed.add(layout["store"][k])

        # ── [FIR-1] xn[i] 코어: 외부 메모리 입력 읽기 ──
        xn = layout["xn"]
        z16_xn = self._make_z16(
            "00", xd_mem=True, a_bank_rd=True, a_addr_mode=1
        )
        st[xn].update({
            "z": self._z32_word(z16_xn),
            "y": "00000000",
            "c": "xn[i]",
            "rc": f"r{xn}",
            "cmd": self._format_mnemonic("ADD", f"{z16_xn:04x}", 0),
            "res": "0",
        })

        # ── [FIR-2] 각 탭의 shift → mult → store 파이프라인 ──
        for k in range(max_k, -1, -1):
            s = layout["shift"][k]
            m = layout["mult"][k]
            u = layout["store"][k]

            # shift: xvK = xv(K-1) 또는 xv0 = xn[i]
            if k > 0:
                src = layout["shift"][k - 1]
                y = self._add_mask(s, [src])
                z16 = self._make_z16("00", write_en=True)
                st[s].update({
                    "z": self._z32_word(z16), "y": f"{y:08x}",
                    "c": f"xv{k}=xv{k-1}", "rc": f"r{src}",
                    "cmd": self._format_mnemonic("ADD", f"{z16:04x}", y),
                    "res": "0",
                })
            else:
                y = self._add_mask(s, [xn])
                z16 = self._make_z16("00", write_en=True)
                st[s].update({
                    "z": self._z32_word(z16), "y": f"{y:08x}",
                    "c": "xv0=xn[i]", "rc": f"r{xn}",
                    "cmd": self._format_mnemonic("ADD", f"{z16:04x}", y),
                    "res": "0",
                })

            # mult: tK = xvK * hK (SMT)
            # 정책 Section 5.3: Y = 계수 즉시값 (hK는 코어 할당 안 함)
            h = int(coeff.get(k, 0))
            z16m = self._make_z16("08", write_en=True, xx_left_xd=True)
            st[m].update({
                "z": self._z32_word(z16m),
                "y": f"{h & 0xFFFFFFFF:08x}",
                "c": f"t{k}=xv{k}*h{k}",
                "rc": f"r{m}*[h{k}={h & 0xFFFFFFFF:08x}]",
                "cmd": self._format_mnemonic("SMT", f"{z16m:04x}", h),
                "res": "0",
            })

            # store: _K = tK (copy)
            # 정책 Section 3.3: 누산은 _K 기반
            z16u = self._make_z16("00", write_en=True, xx_left_xd=True)
            y_self = self._add_mask(u, [u])
            st[u].update({
                "z": self._z32_word(z16u), "y": f"{y_self:08x}",
                "c": f"_{k}=t{k}", "rc": f"r{u}",
                "cmd": self._format_mnemonic("ADD", f"{z16u:04x}", y_self),
                "res": "0",
            })

        # ── [FIR-3] 합산: yo0, yo1, yo ──
        yo0 = layout["yo0"]
        yo1 = layout["yo1"]
        yo = layout["yo"]

        g1_ks = list(range(max_k, max_k - layout["m1"], -1))
        g2_ks = list(range(max_k - layout["m1"], -1, -1))

        def store_cores(ks):
            return [layout["store"][k] for k in ks]

        def write_sum(core, name, ks, srcs, first_n):
            """합산 코어 ADD 명령 생성 (장문 주석은 2줄 분할)"""
            y = self._add_mask(core, srcs)
            z16 = self._make_z16("00", write_en=True)
            t_terms = [f"t{k}" for k in ks]
            r_terms = [f"r{s}" for s in srcs]
            head_t = "+".join(t_terms[:first_n])
            tail_t = "+".join(t_terms[first_n:])
            head_r = "+".join(r_terms[:first_n])
            tail_r = "+".join(r_terms[first_n:])
            c0 = f"{name}= {head_t}" if head_t else name
            rc0 = head_r
            extra = []
            if tail_t or tail_r:
                extra.append(
                    f"{'':<6} {'+' + tail_t if tail_t else '':<30} "
                    f"{'+' + tail_r if tail_r else '':<30}"
                )
            st[core].update({
                "z": self._z32_word(z16), "y": f"{y:08x}",
                "c": c0, "rc": rc0,
                "cmd": self._format_mnemonic("ADD", f"{z16:04x}", y),
                "res": "0", "_extra_cmt": extra,
            })

        # 그룹1 부분합
        if yo0 is not None:
            write_sum(yo0, "yo0[i]", g1_ks, store_cores(g1_ks), first_n=6)

        # 그룹2 부분합
        if yo1 is not None:
            write_sum(yo1, "yo1[i]", g2_ks, store_cores(g2_ks), first_n=4)

        # 최종합: yo[i] = yo0[i] + yo1[i] (A-bank write)
        if yo is not None and yo0 is not None and yo1 is not None:
            y = self._add_mask(yo, [yo0, yo1])
            z16 = self._make_z16(
                "00", a_bank_rd=True, a_bank_wr=True, a_addr_mode=1
            )
            st[yo].update({
                "z": self._z32_word(z16), "y": f"{y:08x}",
                "c": "yo[i]=yo0[i]+yo1[i]", "rc": f"r{yo0}+r{yo1}",
                "cmd": self._format_mnemonic("ADD", f"{z16:04x}", y),
                "res": "0",
            })

        return managed

    # =========================================================================
    # [23] _pass_generic_assign: Pass 3 - 일반 대입/연산                   [△]
    # =========================================================================
    # GimpleAssign → ADD/SMT 명령으로 변환.
    # FIR/Generic 모두에서 실행됨. FIR일 때 skip_indices로
    # FIR 파이프라인이 관리하는 코어를 건너뛴다.
    # → 루프 변수(i=i+1) 등 일반 연산은 FIR에서도 처리 (정책 v4)
    #
    # 매개변수:
    #   fun           : GCC 함수 객체
    #   st            : 128개 코어의 작업 상태 (in-place 수정)
    #   reg_map       : 레지스터 맵
    #   skip_indices  : FIR 파이프라인이 관리하는 코어 인덱스 set (스킵)
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

                # FIR 파이프라인이 관리하는 코어는 스킵
                if dst in skip_indices:
                    continue

                # 정책 2.3: 단항 상수 대입은 init에서 처리 → 스킵
                if (len(stmt.rhs) == 1
                        and isinstance(stmt.rhs[0], gcc.IntegerCst)):
                    continue

                op1, op2, sym = None, None, ""

                # 이항 연산
                if len(stmt.rhs) == 2:
                    op1 = self._get_clean_name(stmt.rhs[0])
                    op2 = self._get_clean_name(stmt.rhs[1])
                    sym = self._get_op_symbol(stmt.exprcode)

                # 단항 연산
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
                            if getattr(rhs0, "operand2", None) is not None
                            else None
                        )
                        sym = self._get_op_symbol(
                            getattr(rhs0, "exprcode", stmt.exprcode)
                        )

                if not op1:
                    continue

                # 소스 레지스터 검색
                r1 = self._find_reg(op1, reg_map)
                r2 = self._find_reg(op2, reg_map) if op2 else None
                i1 = self._reg_idx(r1) if r1 else None
                i2 = self._reg_idx(r2) if r2 else None
                srcs = [x for x in (i1, i2) if x is not None]

                # ── 곱셈 → SMT 명령 ──
                if sym == "*":
                    z16 = self._make_z16("08", write_en=True)
                    y_word = 0
                    if op2 is not None:
                        try:
                            y_word = int(str(op2), 0)
                        except Exception:
                            if op2 in reg_map:
                                y_word = int(reg_map[op2].get("val", 0))
                    st[dst].update({
                        "z": self._z32_word(z16),
                        "y": f"{y_word & 0xFFFFFFFF:08x}",
                        "c": f"{lhs}={op1}*{op2}",
                        "rc": f"{r1}*{(r2 if r2 else op2)}",
                        "cmd": self._format_mnemonic(
                            "SMT", f"{z16:04x}", y_word),
                        "res": "0",
                    })

                # ── 덧셈/뺄셈/단항 → ADD 명령 ──
                else:
                    if not srcs:
                        srcs = [dst]
                    y_mask = self._add_mask(dst, srcs)
                    z16 = self._make_z16("00", write_en=True)
                    st[dst].update({
                        "z": self._z32_word(z16),
                        "y": f"{y_mask:08x}",
                        "c": (f"{lhs}={op1}"
                              + (f"{sym}{op2}" if op2 else "")),
                        "rc": (f"{(r1 if r1 else op1)}"
                               + (f"{sym}{(r2 if r2 else op2)}"
                                  if op2 else "")),
                        "cmd": self._format_mnemonic(
                            "ADD", f"{z16:04x}", y_mask),
                        "res": "0",
                    })

    # =========================================================================
    # [24] _pass_cond: Pass 4 - 조건문 분기 명령 (항상 실행)              [신규]
    # =========================================================================
    # 기존 _generate_op_block_generic / _fir의 GimpleCond 처리를 통합 추출.
    #
    # 역할:
    #   GimpleCond를 EFlow 분기 명령으로 변환.
    #   FIR/Generic 모두에서 공통으로 실행됨 → 조건 누락 방지 (정책 Section 4.2)
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
                op_use = INVERT.get(op_raw, op_raw) if is_loop else op_raw

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
                if isinstance(stmt.rhs, gcc.IntegerCst):
                    v = int(stmt.rhs.constant)
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
                c_code = f"({lhs_display})+{rhs_nm}{op_use}0"

                # ── regSet 주석 생성 ──
                # (r4+r5)+r3>0 ? outL:inL
                lhs_regs = "+".join(f"r{i}" for i in lhs_srcs)
                rhs_reg = f"r{rhs_idx}" if rhs_idx is not None else ""
                rc = (f"({lhs_regs})+{rhs_reg}"
                      f"{op_use}0 ? outL:inL")

                st[dst].update({
                    "z": self._z32_word(z16c),
                    "y": f"{y:08x}",
                    "c": c_code,
                    "rc": rc,
                    "cmd": self._format_mnemonic(
                        cmd_name, f"{z16c:04x}", y),
                    "res": "0",
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
                  reg_comb, cmd, res_val, gpc, extra_lines=None):
        self.buffer_z[addr] = z_val
        self.buffer_y[addr] = y_val
        base = (f"{core:<6} {c_code:<30} {reg_comb:<30} "
                f"{cmd:<20} {str(res_val):<8} GPC={gpc}")
        if extra_lines:
            base = base + "\n" + "\n".join(extra_lines)
        self.buffer_cmt[addr] = base

    # =========================================================================
    # [27] _write_mif_file: MIF 파일 디스크 기록                           [△]
    # =========================================================================
    # 정책 v3 수정:
    #   - 모든 GPC(Generic/FIR/패딩)가 동일하게 실제 MIF 데이터로 출력
    #   - 16 GPC(0~15)까지 패딩
    #   - GPC 헤더에 init/action, 함수명, Z/Y 필드 설명 포함
    #   - FIR GPC에는 pSt(pipeline stage) 칼럼 헤더 추가
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
                           f" {'':20}"
                           f" r{core_idx:<6}"
                           f" {'':20}"
                           f" 0{'':6}"
                           f" GPC={gpc_num}")

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
    #   FIR GPC:  위 + pSt 칼럼 헤더
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
            if meta.get("is_fir"):
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
            if meta.get("is_fir"):
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
        """FIR용 pSt 칼럼 헤더"""
        return [
            "-- <---- .mif  -->"
            "<--------------------------------------------"
            " .eFlow  ----------------------------------------"
            "--------->",
            "--     binFile          Mnemonic"
            "  pSt(pipeline stage)    regSet"
            "     cmd                 val    gpc",
            "-- <-----------------------------------------------"
            "-------------------------------------------"
            "------------>",
        ]
