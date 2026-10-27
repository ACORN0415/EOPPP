# EOPPP eFLOW Compiler

GCC Python Plugin 기반 C → eFLOW 자동 변환 컴파일러

---

## 개요

EOPPP(Every One Period Parallel Processor)는 128코어 MIMD 아키텍처로, 모든 코어가 단일 클록 사이클 내에서 독립 명령을 동시 실행한다. 이 컴파일러는 표준 C 코드를 EOPPP의 하드웨어 전용 언어인 eFLOW(MIF 파일)로 자동 변환한다.

### 핵심 특징

- **GCC GIMPLE IR 기반**: GCC Python Plugin으로 GIMPLE 중간 표현을 인터셉트하여 분석
- **이름 독립적 MAC 검출**: 변수명(h0, c0 등)에 의존하지 않고 GIMPLE 구조 패턴으로 계수 판별
- **통합 4-Pass 파이프라인**: Generic(피보나치 등)과 MAC(FIR 필터 등)을 단일 코드 경로로 처리
- **비연산 조건 필터**: printf 전용 루프 등 I/O-only 제어 흐름을 자동 감지하여 코어 절약

---

## 프로젝트 구조

```
EOPPP/
├── main.py                    # GCC 플러그인 진입점 (함수별 GPC 할당)
├── run.sh                     # 실행 스크립트 (환경 설정 + gcc 호출)
├── README.md                  # 프로젝트 문서
├── gcc-python-plugin/         # GCC Python Plugin 라이브러리 (빌드 필요)
│   ├── python.so              # 빌드된 플러그인 공유 라이브러리
│   └── ...
├── gcc_eoppp/                 # eFLOW 컴파일러 본체
│   ├── generator.py           # 핵심 컴파일러 (EFlowGenerator 클래스)
│   ├── checker.py             # EOPPP 제약 검증기 (EOPPPChecker 클래스)
│   ├── eoppp_test.c           # 테스트용 C 소스 (Fibonacci, FFT, FIR)
│   └── eoppp_eflow_generator_policy.md  # 개발 기록 & 코드 정책 문서
└── eflow_out/                 # 생성 결과물 (실행 시 자동 생성)
    ├── total_program_z.mif    # Z-Bank (명령어)
    ├── total_program_y.mif    # Y-Bank (데이터/마스크)
    ├── gimple_ir.log          # Log 1: GIMPLE SSA IR 덤프
    ├── checker.log            # Log 2: Checker 검증 결과
    └── generator.log          # Log 3: Generator 처리 결과
```

---

## 실행 방법

### 필수 요구사항

- GCC (gcc-python-plugin 빌드 및 설치)
- Python 3.x

### 컴파일 및 실행

```bash
cd EOPPP
chmod +x run.sh

# 기본 실행 (eoppp_test.c)
./run.sh

# 다른 소스 파일 지정
./run.sh eoppp_test2.c
```

`run.sh`는 내부에서 다음을 수행한다:

```bash
export PYTHONIOENCODING=utf-8              # 한글 출력 인코딩 설정
export PYTHONPATH=$PYTHONPATH:./gcc_eoppp   # generator.py, checker.py import 경로

gcc -fplugin=./gcc-python-plugin/python.so \
    -fplugin-arg-python-script=./main.py \
    -O1 \
    ./gcc_eoppp/${SRC} -c -o /dev/null 2>/dev/null
```

실행 결과 예시:

```
=== EOPPP eFLOW Compiler ===
Source: eoppp_test.c

[Success] MIF files generated

Output:
  eflow_out/total_program_z.mif
  eflow_out/total_program_y.mif

Log files:
  eflow_out/gimple_ir.log    - GIMPLE SSA IR dump (PHI 노드 + SSA 버전 포함)
  eflow_out/checker.log      - Checker 검증 결과 (PASS/FAIL)
  eflow_out/generator.log    - Generator 처리 결과 (features, reg_map)
```

| 환경변수/옵션 | 설명 |
|------|------|
| `PYTHONIOENCODING=utf-8` | checker.py의 한글 메시지 출력을 위한 인코딩 설정 |
| `PYTHONPATH+=./gcc_eoppp` | generator.py, checker.py를 main.py에서 import 가능하게 |
| `-fplugin=./gcc-python-plugin/python.so` | gcc-python-plugin 빌드 결과물 |
| `-fplugin-arg-python-script=./main.py` | 컴파일러 진입점 |
| `-O1` | GCC 최적화 수준 (아래 설명 참조) |
| `-c -o /dev/null` | 컴파일만 수행, MIF 생성이 목적 |

### GCC 최적화 수준 (`-O`) 설명

| 옵션 | 의미 | 컴파일러 지원 |
|------|------|-------------|
| `-O0` | 최적화 없음 | ✓ 지원 |
| `-O1` | 기본 최적화 | ✓ 지원 (**현재 사용 중**) |
| `-O2` | 적극적 최적화 | ✗ 미지원 |
| `-O3` | 최대 최적화 | ✗ 미지원 |

`-O0`과 `-O1` 모두 동일한 MIF 결과를 생성한다. `-O1`에서 GCC가 곱셈을 시프트-덧셈으로 변환하거나, 비교 연산을 정규화(`i < 32` → `i <= 31`)하는 등의 변환을 수행하지만, 컴파일러의 **2단계 MAC 검출**(strict + relaxed)과 **정수 비교 정규화**가 이를 처리한다.

`-O2` 이상에서는 루프 풀기, 벡터화 등 더 공격적인 변환이 적용되어 현재 대응하지 못한다.

### 출력 파일

실행 완료 후 `eflow_out/` 폴더에 다음 파일이 생성된다:

| 파일 | 설명 |
|------|------|
| `total_program_z.mif` | Z-Bank MIF — 코어별 명령어 (16비트 hex) |
| `total_program_y.mif` | Y-Bank MIF — 데이터/ADD 마스크/계수값 (32비트 hex) |
| `gimple_ir.log` | Log 1: 각 함수의 GIMPLE SSA IR 덤프 |
| `checker.log` | Log 2: Checker 검증 결과 (PASS/FAIL + 위반 내역) |
| `generator.log` | Log 3: Generator 처리 결과 (features, reg_map) |

#### Log 1: `gimple_ir.log` — GIMPLE SSA IR 덤프

GCC가 C 코드를 GIMPLE SSA(Static Single Assignment) 중간 표현으로 변환한 결과를 함수별로 기록한다. SSA 패스 이후의 상태이므로 PHI 노드와 SSA 버전 번호가 포함된다.

```
======================================================================
Function: checkclkfibo  (GIMPLE SSA)
======================================================================

  BB 2:
    i_11 = 0;
    iT_12 = 50;
    cur_13 = 0;
    curT_14 = 100;
    p0_15 = 1;
    p1_16 = 0;

  BB 3:
    # p0_1 = PHI <p0_15(BB2), p0_7(BB4)>
    # p1_2 = PHI <p1_16(BB2), p1_6(BB4)>
    # i_2 = PHI <i_11(BB2), i_8(BB4)>
    cur_3 = p0_1 + p1_2;
    if (cur_3 > curT_14) goto BB 5; else goto BB 4;

  BB 4:
    p1_6 = p0_1;
    p0_7 = cur_3;
    i_8 = i_2 + 1;
    if (i_8 <= 49) goto BB 3; else goto BB 5;
```

PHI 노드는 SSA 형태의 핵심으로, 서로 다른 경로에서 들어오는 변수의 버전을 합류시킨다. 예를 들어 `p0_1 = PHI <p0_15(BB2), p0_7(BB4)>`는 BB2에서 오면 초기값 `p0_15`, BB4에서 오면 갱신된 `p0_7`을 사용한다는 의미이다.

#### Log 2: `checker.log` — Checker 검증 결과

각 함수가 EOPPP 하드웨어 제약을 통과했는지 기록한다. FAIL인 함수는 MIF 생성을 건너뛴다.

```
======================================================================
Function: checkclkfibo
  Result: PASS

======================================================================
Function: checkclkfft
  Result: FAIL (2 violation(s))
    - Unsupported data type: double
    - Call depth exceeded (Max: 2): checkclkfft -> fft_transform -> fft_init
```

#### Log 3: `generator.log` — Generator 처리 결과

MIF 생성 시 사용된 feature 플래그, 레지스터 맵을 함수별로 기록한다.

```
======================================================================
Function: checkclkfibo
  GPC Pair: 0 (init), 1 (op)
  is_mac: False
  is_fir_pipeline: False
  reg_map (9 entries):
    r0   cond_res_0           type=cond  val=4
    r1   cond_res_1           type=cond  val=4
    r2   cst_1                type=const val=1
    r3   cur                  type=var   val=0
    r4   curT                 type=var   val=100
    r5   i                    type=var   val=0
    r6   iT                   type=var   val=50
    r7   p0                   type=var   val=1
    r8   p1                   type=var   val=0

======================================================================
Function: checkclkfir
  GPC Pair: 4 (init), 5 (op)
  is_mac: True
  is_fir_pipeline: True
  coeff_vars (20):
    h0 = 65536
    h1 = -65536
    ...
  output_arrays: ['yo']
  input_arrays: ['xn']
  reg_map (68 entries):
    r0   xv19                 type=var   val=0
    r1   ssa_45               type=var   val=0  pSt=2
    r2   _store_19            type=var   val=0  pSt=3
    ...
```

---

## 아키텍처

### 전체 변환 흐름

```
C 소스코드
    │
    ▼  (GCC Frontend — 파싱, 타입체크)
GIMPLE
    │
    ▼  (GCC SSA Pass — 변수 버전 부여, PHI 노드 삽입)
GIMPLE SSA          ← register_after('ssa')로 여기서 플러그인 인터셉트
    │
    ▼  (generator.py — 5단계 변환)
MIF 파일 (Z-bank + Y-bank)
```

generator.py는 **GIMPLE이 아닌 GIMPLE SSA**를 입력으로 받는다. `main.py`에서 `register_after('ssa')`로 등록되어 GCC의 SSA 구성 패스 이후에 실행되기 때문이다. SSA 형태에서는 각 변수 정의에 고유 버전 번호가 부여되고, 루프 합류점에 PHI 노드가 삽입된 상태이다.

### C → GIMPLE → GIMPLE SSA (GCC가 수행)

```c
// C 소스
for(i=0; i<50; i++) {
    cur = p0 + p1;
    p1 = p0;
    p0 = cur;
}
```

GCC Frontend이 파싱 후 GIMPLE (3-주소 코드)로 변환하고, SSA 패스가 버전 번호와 PHI 노드를 추가한다:

```
BB 2:                              ← 초기화 블록
  i_11 = 0;
  p0_15 = 1;
  p1_16 = 0;

BB 3:                              ← 루프 헤드 (PHI 노드로 합류)
  # p0_1 = PHI <p0_15(BB2), p0_7(BB4)>
  # p1_2 = PHI <p1_16(BB2), p1_6(BB4)>
  # i_2  = PHI <i_11(BB2), i_8(BB4)>
  cur_3 = p0_1 + p1_2;
  if (cur_3 > curT_14) goto BB5;

BB 4:                              ← 루프 본문
  p1_6 = p0_1;
  p0_7 = cur_3;
  i_8 = i_2 + 1;
  if (i_8 <= 49) goto BB3;
```

**여기서부터 generator.py가 처리한다.**

### GIMPLE SSA → MIF 변환 (generator.py 5단계)

#### Step 1: `_build_semantic_names()` — SSA 이름 해석

GIMPLE SSA의 `p0_15`, `cur_3`, `ssa_45` 같은 버전 번호를 사람이 읽을 수 있는 이름으로 매핑한다:

```
SSA 이름     →  의미 이름       방법
──────────────────────────────────────────
p0_15        →  "p0"          VarDecl 이름
cur_3        →  "cur"         VarDecl 이름
ssa_45       →  "xn[i]"       def_stmt 역추적 → ArrayRef
```

#### Step 2: `_analyze_ir()` — GIMPLE SSA 순회하여 특성 추출

모든 BasicBlock의 GIMPLE 문장을 순회하면서 패턴을 분석한다:

```python
for bb in fun.cfg.basic_blocks:
    for stmt in bb.gimple:
        if isinstance(stmt, gcc.GimpleAssign):
            # 상수 대입 수집:  h0 = 65536  → const_assigns["h0"] = 65536
            # 재대입 추적:     xv0 = xn[i] → reassigned_vars에 추가
            # 곱셈 감지:       _tmp = xv0 * h0 → mult_results, coeff_vars
            # 배열 접근:       yo[i] = ... → output_arrays

        elif isinstance(stmt, gcc.GimpleCond):
            # 비연산 조건 판별: printf 전용 루프 → skip_cond_indices
```

결과 → `features` 딕셔너리:

```python
# 피보나치:
{"is_mac": False, "is_fir_pipeline": False, "cond_count": 2}

# FIR 20-tap:
{"is_mac": True, "is_fir_pipeline": True,
 "coeff_vars": {"h0": 65536, "h1": -65536, ...}}
```

#### Step 3: `_build_register_map()` — GIMPLE 변수 → EOPPP 코어 매핑

GIMPLE SSA 변수를 128개 물리 코어에 할당한다. FIR일 때는 [var][mult][store] 그룹 레이아웃을 먼저 배치한다. var_core는 데이터 변수로 pSt가 없으며, MAC 파이프라인(pSt=2,3)은 mult와 store만 해당한다:

```
FIR의 경우 (is_fir_pipeline=True):

  _build_mac_layout():
    r0:  xv19        var     val=0
    r1:  ssa_45      mult    pSt=2   val=0      ← 곱셈 결과 SSA 변수
    r2:  _store_19   store   pSt=3   val=0
    r3:  xv18        var     val=0
    ...
    r63: xn[i]       input   pSt=1   val=0

  _augment_regs_from_gimple():
    r64: i           var     val=0
    r65: cst_1       const   val=1
    r66: cst_-32     const   val=-32
    r67: cond_res_0  cond    val=4 (outLoop)
```

```
피보나치의 경우 (is_fir_pipeline=False):

  _augment_regs_from_gimple()만 실행:
    r0:  p0          var     val=1
    r1:  p1          var     val=0
    r2:  cur         var     val=0
    r3:  curT        var     val=-100    ← cond_rhs 음수 치환
    r4:  cst_1       const   val=1
    r5:  i           var     val=0
    r6:  iT          var     val=50
    r7:  cond_res_0  cond    val=4
    r8:  cond_res_1  cond    val=4
```

#### Step 4: `_generate_init_block()` — 짝수 GPC (Init) MIF 생성

reg_map의 각 코어에 초기값을 LXY 명령으로 로드하는 MIF 데이터를 생성한다:

```
reg_map 엔트리                    Init MIF (짝수 GPC)
─────────────────────────────────────────────────────────
r0: p0, val=1                 →  Z=0x01F (LXY),  Y=0x00000001
r3: curT, val=-100            →  Z=0x01F (LXY),  Y=0xFFFFFF9C
r7: cond_res_0, val=4         →  Z=0x01F (LXY),  Y=0x00000004
(미할당 코어)                  →  Z=0x000,         Y=0x00000000
```

#### Step 5: `_generate_op_block()` — 홀수 GPC (Op) 4-Pass MIF 생성

Init 상태를 복제한 후, GIMPLE SSA를 다시 순회하면서 4개 Pass로 연산 MIF를 생성한다:

**Pass 1: `_pass_keep()`** — 모든 활성 코어에 self-ADD (값 유지)

```
r0: Z=000 (ADD), Y=00010000 (bit16=self)    ← 이후 Pass에서 덮어쓸 수 있음
r1: Z=000 (ADD), Y=00010000
...
```

**Pass 2: `_pass_mac_pipeline()`** — FIR일 때만, 3-코어 그룹 MIF 생성

```
GIMPLE: xv19_ver = xv18_ver
  → r0:  Z=000(ADD),  Y=00080000(src=r3)     pSt=1  shift (var_core, 동적 부여)

GIMPLE: _tmp = xv19 * h19
  → r1:  Z=208(SMT),  Y=FFFC0000(coeff)      pSt=2  multiply

(store)
  → r2:  Z=200(ADD),  Y=00010000              pSt=3  store
```

**Pass 3: `_pass_generic_assign()`** — 일반 대입/연산을 ADD/SMT로 변환

```
GIMPLE: cur_3 = p0_1 + p1_2
  → lhs "cur" → dst=r2
  → rhs "p0","p1" → src=[r0, r1]
  → r2: Z=000(ADD), Y=_add_mask(2, [0,1])    ← bit17+bit18 set

GIMPLE: i_8 = i_2 + 1
  → lhs "i" → dst=r5
  → rhs "i","cst_1" → src=[r5, r4]
  → r5: Z=000(ADD), Y=_add_mask(5, [5,4])
```

**Pass 4: `_pass_cond()`** — GimpleCond를 분기 명령으로 변환

```
GIMPLE: if (i_8 <= 49) goto BB3
  → 자기참조 증분 판별: i=i+1 있음 → 루프 카운터
  → 반전: i <= 49 → i > 49 → 정규화 → i >= 50
  → GEZ(806), branch_hold=True
  → src = [r_i, r_cst_1, r_cst_-50]
  → r7: Z=806(GEZ+HOLD), Y=_add_mask(7, srcs)
  → res = val(i) + val(cst_1) + val(cst_-50) = 0 + 1 + (-50) = -49
```

### 요약 테이블

| 단계 | 수행자 | 입력 | 출력 |
|------|--------|------|------|
| C → GIMPLE | GCC Frontend | C 소스 | GIMPLE |
| GIMPLE → GIMPLE SSA | GCC SSA Pass | GIMPLE | GIMPLE SSA (PHI + 버전) |
| Step 1: 이름 해석 | generator.py | GIMPLE SSA | semantic names |
| Step 2: IR 분석 | generator.py | GIMPLE SSA | features (is_mac, coeff_vars...) |
| Step 3: 코어 매핑 | generator.py | GIMPLE SSA + features | reg_map |
| Step 4: Init 생성 | generator.py | reg_map | Init MIF (짝수 GPC) |
| Step 5: Op 생성 | generator.py | GIMPLE SSA + reg_map | Op MIF (홀수 GPC) |

### 함수당 2-GPC 구조

모든 C 함수는 복잡성에 관계없이 정확히 2개 GPC를 사용한다:

| GPC | 역할 | Z-코드 | 설명 |
|-----|------|--------|------|
| 짝수 (Init) | 초기값 로드 | `0x01F` (LXY) | Y-bank 값을 X-bank로 전송 |
| 홀수 (Op) | 연산 실행 | ADD/SMT/GEZ/GTZ 등 | 4-Pass 파이프라인 |

### Op GPC: 4-Pass 파이프라인

```
Pass 1: _pass_keep()           → 활성 코어 값 유지 (항상)
Pass 2: _pass_mac_pipeline()   → FIR 파이프라인 (is_fir_pipeline일 때만)
Pass 3: _pass_generic_assign() → 일반 assign/mul/add (항상, MAC 코어 스킵)
Pass 4: _pass_cond()           → 조건문 분기 명령 (항상)
```

---

## 핵심 알고리즘

### 1. 이름 독립적 MAC 검출 (`_analyze_ir`)

변수 이름에 의존하지 않고 GIMPLE 구조로 계수를 판별한다:

```
Step 1: const_assigns 수집 — 상수 대입문 전체 수집
Step 2: reassigned_vars 필터 — 루프 내 재대입되는 변수 제외
Step 3: true_consts = const_assigns - reassigned_vars
Step 4: 곱셈에서 true_consts 피연산자 발견 → coeff_vars 승격
Step 5: MAC 판정 (2단계)
        엄격: output_arrays > 0 AND coeff_vars >= 5 AND coeff_mult >= 5
        완화: output_arrays > 0 AND true_consts >= 5 AND (has_mult OR input_arrays > 0)
```

따라서 `h0 * xv0`이든 `c0 * dv0`이든, **"한 번 상수 대입 후 재대입 없이 곱셈에만 사용"** 패턴이면 계수로 인식하여 코어 할당 없이 SMT Y-immediate로 전달한다.

#### Feature 플래그 분리: `is_mac` vs `is_fir_pipeline`

MAC(곱셈+누적)과 FIR(시프트체인+계수곱셈+분할누적)은 서로 다른 범위의 개념이다. 컴파일러는 이를 두 개의 독립적인 플래그로 분리하여 관리한다:

| 플래그 | 판정 기준 | 의미 |
|---|---|---|
| `is_mac` | 곱셈 연산이 하나라도 존재 | 넓은 범위의 MAC 감지 |
| `is_fir_pipeline` | output_arrays + coeff_vars ≥ 5 + coeff_mult ≥ 5 | FIR 전용: [var][mult][store] 그룹 + pSt 적용 |

각 함수 유형별 플래그 값:

| 함수 | `is_mac` | `is_fir_pipeline` | 결과 |
|---|---|---|---|
| `checkclkfibo` (피보나치) | False | False | pSt 없음, generic 경로 |
| `checkclkfir` (20-tap FIR) | True | True | pSt 있음, [var][mult][store] 그룹 배치 |
| 가상: `dot_product` (a=b*c+d*e) | True | False | 곱셈 있지만 FIR 아님, pSt 없음 |

`is_fir_pipeline`이 True일 때만 다음이 활성화된다:
- `_build_mac_layout()` — [var][mult][store] 그룹 배치
- `_pass_mac_pipeline()` — Pass 2 FIR 파이프라인 MIF 생성
- pSt(pipeline stage) 칼럼 표시 (Init/Op 모두)
- GPC 헤더에 pSt 칼럼 헤더 추가

향후 MAC이지만 FIR이 아닌 패턴(행렬 곱셈, butterfly 등)이 추가될 때 `is_mac=True, is_fir_pipeline=False`로 별도 Pass를 분기할 수 있다.

### 2. 시프트 체인 역추적 (`_build_mac_layout`)

곱셈의 비계수 피연산자로부터 def_stmt를 역추적하여 데이터 지연선을 구성한다:

```
xv19 ← xv18 ← ... ← xv1 ← xv0 ← xn[i]
```

> **중요**: `_get_base_var_name()` (원본 선언명)을 사용해야 한다. `_get_clean_name()` (SSA semantic)을 사용하면 `xv0`이 `xn[i]`로 이름 변경되어 자기참조 체인 `xn[i] → xn[i]`이 생성된다.

### 3. MAC 코어 그룹 레이아웃

각 MAC 탭은 역순으로 [var][mult][store] 그룹에 배치된다. var_core는 데이터 변수로서 shift 연산 수행 시 pSt=1이 동적으로 부여된다. MAC 파이프라인의 핵심은 mult(pSt=2)와 store(pSt=3)이며, shift는 데이터 흐름으로 분리되어 있다:

```
[var(pSt=1)] [mult(pSt=2)] [store(pSt=3)]  ← tap 19 (var: xv19=xv18, shift이므로 pSt=1)
[var(pSt=1)] [mult(pSt=2)] [store(pSt=3)]  ← tap 18
...
[accumulator(pSt=3)]                        ← yo0 (6탭 합산)
[var(pSt=1)] [mult(pSt=2)] [store(pSt=3)]  ← tap 13
...
[accumulator(pSt=3)]                        ← yo1 (14탭 합산)
[final(pSt=4)]                              ← yo[i] = yo0 + yo1
[input(pSt=1)]                              ← xn[i] (A-bank read)
```

**핵심 분리**: var_core의 pSt는 reg_map(Init)에서는 설정되지 않고, Op의 `_pass_mac_pipeline()`에서 shift 연산 여부에 따라 동적으로 결정된다. shift가 있으면 pSt=1, 없으면 pSt 없음. 이를 통해 shift 없는 MAC 패턴(dot product 등)에서도 `[var][mult][store]` 구조를 그대로 사용할 수 있다.

**제약**: 누적기의 소스 코어는 ADD모드 Y-mask의 ±16 범위 내에 있어야 한다. 20탭 FIR은 [6, 14] 분할로 이를 충족한다.

### 4. 조건문 처리 (`_pass_cond`)

#### for 루프 조건 vs if-break 조건 (구조적 판별)

C 코드에서 `for(m=0; m<50; m++)`의 조건 `m < 50`은 **"루프를 계속할 조건"**이다. 즉, `m < 50`이면 루프 안에 머무르고, `m >= 50`이면 빠져나간다.

그런데 EOPPP 하드웨어의 분기 명령(GEZ, GTZ)은 **"조건이 참이면 분기(탈출)"** 방식으로 동작한다. 따라서 컴파일러가 C의 "계속 조건"을 하드웨어의 "탈출 조건"으로 뒤집어야 한다.

```
C 코드:     for(m=0; m<50; ...)     ← m<50이면 계속 실행
하드웨어:   if(m>=50) then 탈출     ← m>=50이면 분기(loop 종료)

따라서: m < 50 → 반전 → m >= 50 (GEZ 명령 사용)
```

**판별 방법**: 변수 이름(`i`, `m` 등)이 아니라 **자기참조 증분 패턴**으로 구조적으로 판별한다.

```
m = m + 1   → lhs "m"이 rhs에도 등장 → 루프 카운터 → 조건 반전 O
j = j + 1   → lhs "j"가 rhs에도 등장 → 루프 카운터 → 조건 반전 O
cur = p0+p1 → lhs "cur"이 rhs에 없음 → 일반 변수   → 조건 반전 X
```

따라서 `for(m=0; m<50; m++)`, `for(j=0; j<32; j++)` 등 어떤 변수명을 사용해도 자기참조 증분이 있으면 for 루프로 인식하여 조건을 반전시킨다. `if(cur>100) break;`처럼 자기참조가 없는 조건은 그대로 유지한다.

| C 조건 | 자기참조? | 반전 | EOPPP 명령 |
|---|---|---|---|
| `m < 50` (for) | `m=m+1` 있음 | `m >= 50` | GEZ |
| `j <= 31` (for) | `j=j+1` 있음 | `j > 31` → `j >= 32` (정규화) | GEZ |
| `cur > 100` (if-break) | 없음 | 반전 안 함 | GTZ |

#### 기타 조건 처리

- **GCC 정규화 대응**: `i <= 31` → 반전하면 `i > 31` → `i >= 32`로 정규화 (정수에서 `>31`과 `>=32`는 동일)
- **마이너스 치환**: EOPPP에 뺄셈(SUB) 명령이 없으므로, 조건 RHS 값을 Init에서 음수로 저장해두고 Op에서 ADD(+)로 이항한다. 예: `i >= 32` → Init에 `-32` 저장 → Op에서 `i + (-32) >= 0`
- **res 값**: 소스 레지스터의 Init 값을 대입하여 계산한 결과를 표시한다. 예: i(0) + cst_1(1) + cst_-32(-32) = -31

### 5. 비연산 조건 필터 (`_is_noncompute_cond`)

후속 BB에 의미 있는 산술이 없는 조건문을 감지하여 코어 할당에서 제외:

| 케이스 | 판정 | 이유 |
|--------|------|------|
| `for(i<32){a=b+c;}` | NOT skipped | b+c 산술 존재 |
| `for(i<15){printf();}` | Skipped | 함수 호출만, 산술 없음 |
| `i = i + 1` | 무시 | 카운터 증분 (자기참조) |
| `_1 = i * 4` | 무시 | GCC 포인터 산술 (SSA temp + GimpleCall BB) |

---

## Z/Y 인코딩

### Z-Word (16비트)

| 비트 | 필드 | 설명 |
|------|------|------|
| [4:0] | C_TYPE | 연산: ADD(00), SMT(08), GEZ(06), GTZ(02), LXY(1F) |
| [7] | Y_LEFT_XD | 왼쪽 코어의 XD를 Y 입력으로 |
| [9] | XX_LEFT_XD | 왼쪽 코어의 XD를 XX 입력으로 |
| [11] | BRGPC_HOLD | 분기 GPC 보류 |
| [12] | A_BANK_RD | A-bank 읽기 |
| [13] | A_BANK_WR | A-bank 쓰기 |
| [15:14] | A_ADDR | A-bank 주소 모드 |

### Y-Word (32비트)

- **ADD 모드**: 비트 마스크. `bit_index = 16 + (src_core - dst_core)`. ±16 범위.
- **SMT 모드**: 계수/즉시값 (예: FIR 계수 `0xffff0000`)
- **Core 127**: `Y[31]` = loopen_1d, `Y[15:0]` = loop offset

### Pipeline Stage (pSt)

| pSt | 연산 | Z-코드 | 설명 |
|-----|------|--------|------|
| (빈칸) | - | - | 비할당 빈 코어, Generic 함수 전체 |
| 0 | (해당 없음) | - | FIR 함수의 non-MAC 코어 (i, cst, cond 등) |
| 1 | Shift/Input | ADD(000) | 데이터 시프트 전달 / A-bank 입력 읽기 |
| 2 | Multiply | SMT(208) | 부호 곱셈 (Y = 계수) |
| 3 | Store/Acc | ADD(200)/ADD(000) | 결과 복사 / 다중 소스 합산 |
| 4 | Final | ADD(7000) | A-bank 기록 (최종 출력) |

> var_core의 pSt는 reg_map(Init)에서는 설정되지 않고, Op 패스에서 shift 연산 수행 시 pSt=1이 동적으로 부여된다. shift 없는 MAC 패턴에서는 var_core에 pSt가 없다.

---

## 테스트 함수 (`eoppp_test.c`)

### 현재 main() 호출 순서

```c
int main(void) {
    checkclkfibo();      // 피보나치 (Generic)
    checkclkfft();       // FFT
    checkclkfir();       // 20-tap FIR (MAC)

    checkfibo_other();   // 배열 기반 피보나치 (Generic)
    checkfibo_2();       // 피보나치 변수명 변경 (Generic)
    checkfir();          // 20-tap FIR 변수명 변경 (MAC)

    return 0;
}
```

### 함수별 변수 매핑

| 함수 | 유형 | 원본 변수 | 변경 변수 |
|------|------|----------|----------|
| `checkclkfibo` | Generic | `i, iT, cur, curT, p0, p1` | - |
| `checkfibo_2` | Generic | - | `m, mT, val, valT, a0, a1` |
| `checkfibo_other` | Generic | - | `n, nT, fib[], limit` (배열 방식) |
| `checkclkfir` | MAC | `xv0~19, h0~19, xn[], yo[]` | - |
| `checkfir` | MAC | - | `dv0~19, c0~19, dn[], wo[]` |

### GPC 할당 예상

| GPC | 함수 | 유형 |
|-----|------|------|
| 0 (init), 1 (op) | `checkclkfibo` | Generic |
| 2 (init), 3 (op) | `checkclkfft` | (FFT — 미지원) |
| 4 (init), 5 (op) | `checkclkfir` | MAC |
| 6 (init), 7 (op) | `checkfibo_other` | Generic |
| 8 (init), 9 (op) | `checkfibo_2` | Generic |
| 10 (init), 11 (op) | `checkfir` | MAC |

---

## 실험 결과 (검증 완료)

### 피보나치 (`checkclkfibo`)

| 항목 | 참조 | 생성 | 일치 |
|------|------|------|------|
| 활성 코어 | 9 | 9 | ✓ |
| Z-코드 패턴 | ADD(000) | ADD(000) | ✓ |
| 조건 인코딩 | GEZ(806), GTZ(802) | GEZ(806), GTZ(802) | ✓ |

### 20-탭 FIR (`checkclkfir`)

| 항목 | 참조 | 생성 | 일치 |
|------|------|------|------|
| 3-코어 그룹 | 20 | 20 | ✓ |
| 누적기 | 2 (yo0, yo1) | 2 | ✓ |
| 분할 구성 | [6, 14] | [6, 14] | ✓ |
| 전체 MAC 코어 | 64 | 64 | ✓ |
| pSt 할당 | 1/2/3/3/4/1 | 1/2/3/3/4/1 | ✓ (var: shift시 동적 pSt=1) |
| MIF 일치율 | - | 100% | ✓ |

---

## generator.py 주요 함수 목록

### 공개 메서드

| 함수 | 설명 |
|------|------|
| `generate(fun, init_gpc, op_gpc)` | 핵심 진입점. 함수당 2-GPC 생성. 항상 `2` 반환 |
| `write_all()` | MIF 파일 최종 기록 (Z + Y) |

### 분석 단계

| 함수 | 설명 |
|------|------|
| `_build_semantic_names(fun)` | SSA 버전 → 의미 이름 매핑 (ssa_# 최소화) |
| `_analyze_ir(fun)` | IR 분석 → feature 플래그 (`is_mac`, `is_fir_pipeline`, coeff_vars 등) |
| `_build_register_map(fun)` | 통합 레지스터 맵 생성 (`is_fir_pipeline`이면 MAC 레이아웃 + Generic) |
| `_build_mac_layout(fun, reg_map)` | FIR 전용: [var][mult][store] 그룹 + 분할 누적기 배치 (`is_fir_pipeline`일 때만 호출) |
| `_augment_regs_from_gimple(...)` | 변수/상수/cond_res 코어 할당 |
| `_is_noncompute_cond(bb, stmt)` | 비연산 조건문 판별 |

### 코드 생성 단계

| 함수 | 설명 |
|------|------|
| `_generate_init_block(reg_map, init_gpc)` | Init GPC: LXY로 초기값 로드 |
| `_generate_op_block(fun, reg_map, init_state, op_gpc)` | Op GPC: 4-Pass 파이프라인 실행 |
| `_pass_keep(st)` | Pass 1: 활성 코어 self-ADD 유지 |
| `_pass_mac_pipeline(fun, st, reg_map)` | Pass 2: FIR 파이프라인 MIF 생성 (`is_fir_pipeline`일 때만) |
| `_pass_generic_assign(fun, st, reg_map, ...)` | Pass 3: 일반 대입/연산 |
| `_pass_cond(fun, st, reg_map)` | Pass 4: 조건문 분기 명령 |

### 헬퍼

| 함수 | 설명 |
|------|------|
| `_get_clean_name(node)` | GCC 노드 → 의미 이름 (SSA semantic 적용) |
| `_get_base_var_name(node)` | GCC 노드 → 원본 선언명 (SSA 우회) |
| `_make_z16(opcode, ...)` | Z-word 16비트 조립 |
| `_add_mask(dst, srcs)` | ADD 모드 Y-mask 계산 |
| `_find_reg(name, reg_map)` | 이름으로 레지스터 검색 |

---

## checker.py — EOPPP 제약 검증기

`main.py`에서 각 함수를 `generator.py`에 전달하기 전에 EOPPP 하드웨어 제약을 검증한다. 검증 통과한 함수만 MIF 생성 대상이 된다.

### 체커 목록

| 체커 | 검증 내용 |
|------|----------|
| `OpcodeChecker` | 지원하지 않는 GIMPLE 연산 노드 감지 |
| `VariableChecker` | SSA 버전 수가 128개(코어 수) 초과 여부 |
| `ControlChecker` | switch-case, goto 등 비정형 분기 감지 |
| `TypeChecker` | float, double 등 미지원 자료형 감지 |
| `MemoryChecker` | 포인터 체이닝, 이중 간접 배열 접근 감지 |
| `StructureChecker` | 재귀 호출, 호출 깊이 초과 (기본 최대 2) |
| `ConflictChecker` | 전역 변수/배열 다중 쓰기 경합 감지 |

### 검증 흐름

```
main.py → checker.validate(fun)
             ├─ 구조적 체크 (호출 깊이, 재귀)
             ├─ 함수 레벨 체크 (변수 수, 제어 흐름, 경합)
             └─ 문장 레벨 체크 (연산, 타입, 메모리)
          → 통과 시 generator.generate(fun, ...) 호출
          → 실패 시 해당 함수 스킵, 위반 내역 출력
```

---

## main.py — 플러그인 진입점

GCC Python Plugin 진입점으로, `main()` 함수의 호출 순서를 분석하여 각 타겟 함수를 순차 처리한다. 터미널 출력 없이 결과를 로그 파일과 MIF 파일로만 생성한다.

### 처리 흐름

```
GCC 컴파일 → SSA 패스 후 main.py 실행
  → main() 내부 GimpleCall 순회
  → 각 함수에 대해:
     1. GIMPLE SSA IR 덤프    → gimple_ir.log
     2. checker 검증           → checker.log (FAIL이면 스킵)
     3. generator.generate()  → MIF 버퍼에 추가
     4. generator 결과 기록    → generator.log
  → generator.write_all()    → total_program_z.mif + y.mif
```

### 경로 설정

`main.py`가 `EOPPP/` 루트에 위치하므로 `gcc_eoppp/` 하위의 모듈을 import하기 위해 `sys.path`에 `gcc_eoppp` 디렉토리를 추가한다. 출력 디렉토리는 `main.py` 위치 기준 절대 경로로 설정하여 GCC의 CWD와 무관하게 동작한다:

```python
current_dir = os.path.dirname(os.path.abspath(__file__))
gcc_eoppp_dir = os.path.join(current_dir, "gcc_eoppp")
sys.path.append(gcc_eoppp_dir)

out_dir = os.path.join(current_dir, "eflow_out")  # 절대 경로
self.generator = EFlowGenerator(output_dir=out_dir)
self.log = LogWriter(out_dir)
```

---

## 주요 정책 요약

| 정책 | 내용 |
|------|------|
| GPC 고정 | 함수당 항상 2개 (짝수=Init, 홀수=Op) |
| SSA 제외 | `ssa_#`는 코어 할당 대상에서 제외 |
| 상수 할당 | 합산(ADD/Cond)에 실제 쓰이는 상수만 `cst_#` 할당 |
| MAC 계수 | 코어 미할당, SMT Y-immediate로 전달 |
| FIR 파이프라인 분리 | `is_mac`(곱셈 존재)와 `is_fir_pipeline`(FIR 레이아웃)을 분리. pSt/[var][mult][store] 그룹은 FIR일 때만 |
| cond_res 초기값 | 4 (outLoop) |
| cond_res Op 값 | 소스 레지스터 Init 값을 대입 계산한 합산 결과 |
| 조건 반전 | for 루프 카운터(자기참조 증분 있는 변수)의 조건을 "탈출 조건"으로 반전. 이름 무관 |
| 마이너스 치환 | EOPPP에 SUB 없으므로, RHS를 Init에서 음수로 저장 후 Op에서 ADD(+) |
| 비연산 필터 | printf 전용 루프 조건은 cond_res 미할당 |

---

## 제한 사항

### 지원

- 스칼라 산술 (+, -, *)
- 배열 접근 (읽기/쓰기)
- `for`/`if` 제어 흐름
- 정수 상수
- MAC 패턴 (FIR 유사)
- `-O0` / `-O1` 컴파일

### 미지원

- 함수 호출 (printf 감지 제외)
- 포인터 연산
- 구조체/공용체
- 부동소수점 산술
- 동적 메모리 할당
- `-O2` 이상 (완화 검출기로도 대응 어려움)

---

## 향후 계획

1. 고정소수점 변환을 통한 부동소수점 지원
2. GPC 간 통신을 통한 다중 함수 프로그램
3. GCC 최적화 변환 자동 검출 (-O2 이상 대응)
4. EOPPP ASIC 전환 대응 (256코어 확장)
5. 자동 분할 최적화 (탭 수에 따른 accumulator 분할)
6. 루프 변환 지원 (행렬 연산 최적화)
