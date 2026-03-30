"""
eoppp_zcode.py — Z/Y 코드 자동 매핑 모듈
generator.py에서 import하여 사용

수정 전: opcode를 문자열("00","06")로 하드코딩, hold를 수동 설정
수정 후: GIMPLE → 연산비트 자동 매핑, 제어비트 자동 결정, Z→Y 자동 분기
"""

# ============================================================
# 1. 연산비트 [4:0] 정의
# ============================================================
class ZOp:
    """Z-bank [4:0] 연산비트. 합산/비합산/특수 모드."""
    # 합산 모드 (Y = 경로망 스위치)
    ADD  = 0x00    # 합산
    EQZ  = 0x01    # ==0 분기
    GTZ  = 0x02    # >0 분기
    LTZ  = 0x03    # <0 분기
    NEQZ = 0x04    # !=0 분기
    LTEZ = 0x05    # <=0 분기
    GTEZ = 0x06    # >=0 분기

    # 비합산 모드 (Y = 두번째 피연산자)
    SMT  = 0x08    # 부호 곱셈
    UMT  = 0x09    # 비부호 곱셈
    SRSH = 0x0A    # 부호 우시프트
    LSH  = 0x0B    # 좌시프트
    BAND = 0x0C    # bit AND
    BXOR = 0x0D    # bit XOR
    BOR  = 0x0E    # bit OR
    BNOT = 0x0F    # bit NOT

    # 특수
    LXY  = 0x1F    # Y → X 직접 로드 (Init GPC 전용)

    # 합산/비합산 경계
    SUMMATION_MAX = 0x06  # 이하면 합산 모드

    @staticmethod
    def is_summation(op_bits):
        """합산 모드인지 판별"""
        return (op_bits & 0x1F) <= ZOp.SUMMATION_MAX

    @staticmethod
    def is_branch(op_bits):
        """조건 분기 연산인지 판별 (EQZ ~ GTEZ)"""
        return 0x01 <= (op_bits & 0x1F) <= 0x06


# ============================================================
# 2. 제어비트 [5]~[15:14] 정의
# ============================================================
class ZCtrl:
    """Z-bank [5]~[15:14] 제어비트."""
    MESH_RIGHT  = (1 << 5)     # [5]  메시 우측 경로
    XD_MEM      = (1 << 6)     # [6]  X-bank 출력 → XD
    Y_LEFT_XD   = (1 << 7)     # [7]  왼쪽 코어 XD → Y
    SUM_NEG     = (1 << 8)     # [8]  합산 부호 반전 (뺄셈)
    XX_LEFT_XD  = (1 << 9)     # [9]  왼쪽 코어 XD → XX
    WRITE_EN    = (1 << 10)    # [10] X-bank 쓰기 활성화
    BRGPC_HOLD  = (1 << 11)    # [11] GPC 정지 (조건 분기)
    A_BANK_RD   = (1 << 12)    # [12] A-bank 읽기
    A_BANK_WR   = (1 << 13)    # [13] A-bank 쓰기

    # A-bank 주소 모드 [15:14]
    A_ADDR_RESET = (0b00 << 14)  # 주소 = 0
    A_ADDR_INC   = (0b01 << 14)  # 주소 + 1
    A_ADDR_SET   = (0b10 << 14)  # 주소 = opALU 출력
    A_ADDR_HOLD  = (0b11 << 14)  # 주소 유지


# ============================================================
# 3. GIMPLE → 연산비트 자동 매핑 (문자열 기반)
# ============================================================
# _get_op_symbol()이 반환하는 연산자 문자열 → 연산비트 매핑
# gcc 모듈의 exprcode 상수(gcc.PLUS_EXPR 등)에 의존하지 않음
GIMPLE_TO_OP = {
    "+":   ZOp.ADD,
    "-":   ZOp.ADD,      # ADD + SUM_NEG로 뺄셈
    "*":   ZOp.SMT,
    ">>":  ZOp.SRSH,
    "<<":  ZOp.LSH,
    "&":   ZOp.BAND,
    "^":   ZOp.BXOR,
    "|":   ZOp.BOR,
    "~":   ZOp.BNOT,
}

# 조건 반전 매핑: C의 continue 조건 → EOPPP의 exit 조건
# _get_op_symbol()이 반환하는 비교 연산자 문자열 사용
COND_TO_OP = {
    "<":   ZOp.GTEZ,     # <  → >= (반전)
    "<=":  ZOp.GTZ,      # <= → >  (반전)
    ">":   ZOp.LTEZ,     # >  → <= (반전)
    ">=":  ZOp.LTZ,      # >= → <  (반전)
    "==":  ZOp.NEQZ,     # == → != (반전)
    "!=":  ZOp.EQZ,      # != → == (반전)
}


# ============================================================
# 4. 제어비트 자동 결정
# ============================================================
def decide_ctrl_bits(op_bits, gimple_code=None, context='assign'):
    """
    연산비트와 컨텍스트를 보고 제어비트를 자동 결정.

    context:
      'assign'     - 일반 대입문 (cur = p0 + p1)
      'subtract'   - 뺄셈 (SUM_NEG 필요)
      'condition'  - 조건 분기 (BRGPC_HOLD 자동)
      'mac_left'   - MAC 왼쪽 참조 (XX_LEFT_XD + Y_LEFT_XD)
      'array_read' - A-bank 읽기
      'array_write'- A-bank 쓰기
    """
    ctrl = 0

    # 조건 분기면 → 자동으로 BRGPC_HOLD
    if context == 'condition':
        if not ZOp.is_branch(op_bits):
            raise ValueError(
                f"BRGPC_HOLD는 분기 연산(EQZ~GTEZ)만 가능. "
                f"현재 연산비트: 0x{op_bits:02x}"
            )
        ctrl |= ZCtrl.BRGPC_HOLD

    # 뺄셈이면 → 자동으로 SUM_NEG
    if context == 'subtract':
        ctrl |= ZCtrl.SUM_NEG

    # 연산 기호가 "-"이면 → SUM_NEG
    if gimple_code == "-":
        ctrl |= ZCtrl.SUM_NEG

    # SMT/UMT에서 왼쪽 코어 참조 → XX_LEFT_XD + Y_LEFT_XD
    if context == 'mac_left' and op_bits in (ZOp.SMT, ZOp.UMT):
        ctrl |= ZCtrl.XX_LEFT_XD
        ctrl |= ZCtrl.Y_LEFT_XD

    # A-bank 접근
    if context == 'array_read':
        ctrl |= ZCtrl.A_BANK_RD
    elif context == 'array_write':
        ctrl |= ZCtrl.A_BANK_WR

    return ctrl


# ============================================================
# 5. Z코드 생성 (연산비트 + 제어비트 합성)
# ============================================================
def make_z16(op_bits, ctrl_bits=0):
    """
    연산비트 + 제어비트 → Z코드 16비트 생성.
    유효성 검증 포함.
    """
    # 연산비트 범위 검증
    if op_bits > 0x1F:
        raise ValueError(f"연산비트는 [4:0] 5비트. 0x{op_bits:02x} 초과")

    # HOLD + 비분기 조합 검증
    if (ctrl_bits & ZCtrl.BRGPC_HOLD) and not ZOp.is_branch(op_bits):
        raise ValueError(
            f"BRGPC_HOLD는 분기 연산(EQZ~GTEZ)만 가능. "
            f"현재: 0x{op_bits:02x}"
        )

    # SUM_NEG + 비합산 조합 검증
    if (ctrl_bits & ZCtrl.SUM_NEG) and not ZOp.is_summation(op_bits):
        raise ValueError(
            f"SUM_NEG는 합산 모드만 가능. 현재: 0x{op_bits:02x}"
        )

    # XX_LEFT_XD + 합산 모드 경고 (보통 비합산에서만 의미)
    if (ctrl_bits & ZCtrl.XX_LEFT_XD) and ZOp.is_summation(op_bits):
        import warnings
        warnings.warn(
            f"XX_LEFT_XD를 합산 모드(0x{op_bits:02x})에 사용. "
            f"보통 SMT/UMT에서만 사용."
        )

    z16 = op_bits | ctrl_bits
    return z16


# ============================================================
# 6. Y코드 생성 — Z코드를 보고 방식 결정
# ============================================================
def add_mask(dst_core, src_cores):
    """
    합산 모드 Y코드: 경로 스위치 비트 마스크 생성.
    bit = 16 + (source - destination)
    범위 밖(bit<0 or bit>31)인 소스는 무시 (원본 _add_mask 동작 유지)
    """
    mask = 0
    for s in src_cores:
        if s is None:
            continue
        bit = 16 + (s - dst_core)
        if 0 <= bit <= 31:
            mask |= (1 << bit)
    return mask & 0xFFFFFFFF


def make_y32(z16, dst_core=None, src_cores=None, y_value=None):
    """
    Z코드를 보고 Y코드 생성 방식을 자동 결정.

    합산 모드 (Z[4:0] ≤ 0x06):
      → add_mask(dst_core, src_cores)로 경로 스위치 생성
      → dst_core, src_cores 필수

    비합산 모드 (Z[4:0] ≥ 0x08):
      → y_value를 그대로 사용 (두번째 피연산자)
      → y_value 필수

    LXY (Z[4:0] = 0x1F):
      → y_value를 그대로 사용 (초기값)
      → y_value 필수
    """
    op_bits = z16 & 0x1F  # 하위 5비트 = 연산비트

    if op_bits == ZOp.LXY:
        # 특수: 초기값 로드
        if y_value is None:
            raise ValueError("LXY 모드는 y_value(초기값) 필수")
        return y_value & 0xFFFFFFFF

    elif ZOp.is_summation(op_bits):
        # 합산 모드: Y = 경로 스위치
        if dst_core is None or src_cores is None:
            raise ValueError(
                "합산 모드(Z[4:0]≤0x06)는 dst_core, src_cores 필수"
            )
        return add_mask(dst_core, src_cores)

    else:
        # 비합산 모드: Y = 두번째 피연산자
        if y_value is None:
            raise ValueError(
                f"비합산 모드(Z[4:0]=0x{op_bits:02x})는 y_value 필수"
            )
        return y_value & 0xFFFFFFFF


# ============================================================
# 7. 전체 Z/Y 코드 인코딩 (Step 5 대체)
# ============================================================
def encode_zy_codes(core_ops):
    """
    Step 5: core_ops → 16진수 Z/Y 코드 변환.

    각 코어에 대해:
      1) 연산비트 + 제어비트 → Z코드 생성
      2) Z[4:0] 확인 → Y코드 생성 방식 분기
      3) Init GPC (LXY + 초기값) / Op GPC (연산 + 경로스위치/피연산자) 분리
    """
    core_codes = {}

    for i in range(128):
        op = core_ops[i]

        # ======= Init GPC: 항상 LXY + 초기값 =======
        init_z = make_z16(ZOp.LXY)
        init_y = op.get('init_val', 0) & 0xFFFFFFFF

        # ======= Op GPC: Z를 먼저 만들고, Z를 보고 Y 결정 =======

        # Step 5-1: Z코드 생성
        op_bits = op['op_bits']          # 연산비트 (ZOp.ADD 등)
        ctrl_bits = op.get('ctrl_bits', 0)  # 제어비트 (ZCtrl.BRGPC_HOLD 등)
        op_z = make_z16(op_bits, ctrl_bits)

        # Step 5-2: Z[4:0]을 보고 Y코드 자동 생성
        op_y = make_y32(
            z16=op_z,
            dst_core=i,
            src_cores=op.get('sources'),
            y_value=op.get('y_value'),
        )

        # op_res 계산 (Init값 기반 예상 결과)
        if ZOp.is_summation(op_bits) and 'sources' in op:
            init_vals = op.get('init_vals', {})
            op_res = sum(init_vals.get(s, 0) for s in op['sources'])
        else:
            op_res = 0

        core_codes[i] = {
            'init_z': f"{init_z:08x}",
            'init_y': f"{init_y:08x}",
            'op_z':   f"{op_z:08x}",
            'op_y':   f"{op_y:08x}",
            'op_res': op_res,
            'init_comment': op.get('init_comment', ''),
            'op_comment':   op.get('op_comment', ''),
        }

    return core_codes


# ============================================================
# 8. Step 4 수정: core_ops에 op_bits/ctrl_bits 사용
# ============================================================
def decide_core_operations_example():
    """
    Step 4 수정 예시.
    기존: opcode="00", branch_hold=True (수동 하드코딩)
    수정: op_bits=ZOp.ADD, ctrl_bits는 자동 결정
    """

    core_ops = {}

    # --- 128코어 self-ADD 초기화 ---
    for i in range(128):
        core_ops[i] = {
            'op_bits':  ZOp.ADD,
            'ctrl_bits': 0,
            'sources':  [i],          # self-ADD
            'init_val': 0,
            'init_comment': '',
            'op_comment': '',
        }

    # --- 예시: checkclkfibo ---

    # r0: cur = p0 + p1
    #   GIMPLE: PLUS_EXPR → ZOp.ADD, 제어비트 없음
    core_ops[0] = {
        'op_bits':  GIMPLE_TO_OP.get('PLUS_EXPR', ZOp.ADD),
        'ctrl_bits': decide_ctrl_bits(ZOp.ADD, context='assign'),
        'sources':  [4, 5],           # r4(p0) + r5(p1)
        'init_val': 0,
        'init_comment': 'cur=0',
        'op_comment':   'cur=p0+p1',
    }
    # → Z: make_z16(ADD, 0) = 0x0000
    # → Z[4:0]=0x00 → 합산 → Y: add_mask(0, [4,5]) = 0x00300000

    # r2: i = i + 1
    core_ops[2] = {
        'op_bits':  ZOp.ADD,
        'ctrl_bits': 0,
        'sources':  [2, 6],           # r2(i) + r6(cst_1)
        'init_val': 0,
        'init_comment': 'i=0',
        'op_comment':   'i=i+1',
    }
    # → Z: 0x0000, Y: add_mask(2, [2,6]) = 0x00110000

    # r7: (i+1)+iT >= 0 → 루프 탈출
    #   조건: LT_EXPR(i<50) → 반전 → GTEZ
    #   컨텍스트: 'condition' → 자동 BRGPC_HOLD
    cond_op = COND_TO_OP.get('LT_EXPR', ZOp.GTEZ)
    core_ops[7] = {
        'op_bits':  cond_op,
        'ctrl_bits': decide_ctrl_bits(cond_op, context='condition'),
        'sources':  [2, 6, 3],        # r2(i) + r6(cst_1) + r3(cst_-50)
        'init_val': 4,                 # outLoop GPC 주소
        'init_comment': '4 (outLoop)',
        'op_comment':   'i+1+(-50)>=0',
    }
    # → Z: make_z16(GTEZ, BRGPC_HOLD) = 0x0806
    # → Z[4:0]=0x06 → 합산 → Y: add_mask(7, [2,6,3]) = 0x00009800

    return core_ops


# ============================================================
# 테스트
# ============================================================
if __name__ == "__main__":
    print("=" * 60)
    print("Z/Y 코드 자동 매핑 테스트")
    print("=" * 60)

    # --- Z코드 테스트 ---
    print("\n[Z코드 생성]")

    z1 = make_z16(ZOp.ADD)
    print(f"ADD:           Z = 0x{z1:04x}")
    assert z1 == 0x0000

    z2 = make_z16(ZOp.GTEZ, ZCtrl.BRGPC_HOLD)
    print(f"GTEZ+HOLD:     Z = 0x{z2:04x}")
    assert z2 == 0x0806

    z3 = make_z16(ZOp.SMT, ZCtrl.XX_LEFT_XD | ZCtrl.Y_LEFT_XD)
    print(f"SMT+XX+Y:      Z = 0x{z3:04x}")
    assert z3 == 0x0288

    z4 = make_z16(ZOp.LXY)
    print(f"LXY:           Z = 0x{z4:04x}")
    assert z4 == 0x001F

    z5 = make_z16(ZOp.ADD, ZCtrl.SUM_NEG)
    print(f"ADD+NEG(뺄셈): Z = 0x{z5:04x}")
    assert z5 == 0x0100

    # --- 유효성 검증 테스트 ---
    print("\n[유효성 검증]")

    try:
        make_z16(ZOp.ADD, ZCtrl.BRGPC_HOLD)  # ADD + HOLD = 무의미
        print("ERROR: 예외 안 남")
    except ValueError as e:
        print(f"✓ ADD+HOLD 차단: {e}")

    try:
        make_z16(ZOp.SMT, ZCtrl.SUM_NEG)  # SMT + NEG = 비합산에 부호반전
        print("ERROR: 예외 안 남")
    except ValueError as e:
        print(f"✓ SMT+NEG 차단: {e}")

    # --- Y코드 테스트 ---
    print("\n[Y코드 생성 — Z를 보고 자동 결정]")

    # 합산 모드: Z=ADD → Y=경로 스위치
    y1 = make_y32(z16=0x0000, dst_core=0, src_cores=[4, 5])
    print(f"r0 ADD [4,5]:  Y = 0x{y1:08x}")
    assert y1 == 0x00300000

    # 합산 모드: Z=GTEZ+HOLD → Y=경로 스위치
    y2 = make_y32(z16=0x0806, dst_core=7, src_cores=[2, 6, 3])
    print(f"r7 GTEZ [2,6,3]: Y = 0x{y2:08x}")
    assert y2 == 0x00009800

    # 비합산 모드: Z=SMT → Y=두번째 피연산자
    y3 = make_y32(z16=0x0008, y_value=0x00030000)
    print(f"SMT coeff:     Y = 0x{y3:08x}")
    assert y3 == 0x00030000

    # LXY: Y=초기값
    y4 = make_y32(z16=0x001F, y_value=0xFFFFFF9C)  # -100
    print(f"LXY -100:      Y = 0x{y4:08x}")
    assert y4 == 0xFFFFFF9C

    # --- 비합산에 src_cores 넣으면 에러 ---
    print("\n[비합산에 경로 스위치 시도]")
    try:
        make_y32(z16=0x0008, dst_core=3, src_cores=[4, 5])
        print("ERROR: 예외 안 남")
    except ValueError as e:
        print(f"✓ 차단: {e}")

    # --- 합산에 y_value만 넣으면 에러 ---
    print("\n[합산에 피연산자만 시도]")
    try:
        make_y32(z16=0x0000, y_value=0x00030000)
        print("ERROR: 예외 안 남")
    except ValueError as e:
        print(f"✓ 차단: {e}")

    # --- 전체 흐름 테스트 ---
    print("\n[전체 흐름: Step 5 encode_zy_codes]")

    test_ops = {}
    for i in range(128):
        test_ops[i] = {
            'op_bits': ZOp.ADD, 'ctrl_bits': 0,
            'sources': [i], 'init_val': 0,
            'init_comment': '', 'op_comment': '',
        }

    # r0: cur = p0 + p1
    test_ops[0] = {
        'op_bits': ZOp.ADD, 'ctrl_bits': 0,
        'sources': [4, 5], 'init_val': 0,
        'init_comment': 'cur=0', 'op_comment': 'cur=p0+p1',
    }
    # r7: GTEZ+HOLD
    test_ops[7] = {
        'op_bits': ZOp.GTEZ,
        'ctrl_bits': ZCtrl.BRGPC_HOLD,
        'sources': [2, 6, 3], 'init_val': 4,
        'init_comment': '4(outLoop)', 'op_comment': 'i+1+(-50)>=0',
    }

    codes = encode_zy_codes(test_ops)

    print(f"r0 Init: Z={codes[0]['init_z']}, Y={codes[0]['init_y']}")
    print(f"r0 Op:   Z={codes[0]['op_z']}, Y={codes[0]['op_y']}")
    print(f"r7 Init: Z={codes[7]['init_z']}, Y={codes[7]['init_y']}")
    print(f"r7 Op:   Z={codes[7]['op_z']}, Y={codes[7]['op_y']}")

    assert codes[0]['op_z'] == '00000000'
    assert codes[0]['op_y'] == '00300000'
    assert codes[7]['op_z'] == '00000806'
    assert codes[7]['op_y'] == '00009800'

    print("\n✓ 모든 테스트 통과!")
    print("=" * 60)
