# EOPPP eFlow Generator 개발 기록 & 코드 정책 (리팩토링 반영 v2)

> 본 문서는 EOPPP 프로젝트의 **아키텍처**, **동작 원리**, **코드 정책**, **리팩토링 변경 이력**, **기능별 함수 정리**를 한 곳에 모은 문서입니다.  
> 기준: `eflow_generator_refactored.py` (Pass-Pipeline 구조) + 수정사항 v2 반영(ssa_# 제외, FIR h값 반영)

---

## 0. 프로젝트 개요

### 0.1 EOPPP란?

- EOPPP(eFlow Oriented Parallel Processing Platform)는 **C 코드를 EFlow 하드웨어 명령으로 자동 변환**하는 도구이다.
- 입력: GCC가 생성한 **GIMPLE IR**(중간 표현, SSA 형태)
- 출력: EFlow 아키텍처용 **MIF 파일**(Memory Initialization File)
  - `total_program_z.mif` : Z-Bank (명령어/제어 워드)
  - `total_program_y.mif` : Y-Bank (데이터/마스크/루프제어)
- 대상 알고리즘: **피보나치(Generic)**, **FIR 필터** 등

### 0.2 실행 흐름(End-to-End)

1. 사용자가 C 소스를 작성한다 (예: `checkclkfibo()`, `checkclkfir()`)
2. GCC + Python plugin이 C 소스를 **GIMPLE IR**로 변환한다
3. `main.py`가 `main()` 함수의 call sequence를 분석한다
4. 각 타겟 함수에 대해:
   - `init_gpc`(짝수), `op_gpc`(홀수=init+1) 할당
   - `generator.generate(fun, init_gpc, op_gpc)` 호출
5. `generator.write_all()`이 전체 Z/Y MIF를 생성한다
6. MIF를 EFlow 하드웨어에 로드하여 실행한다

### 0.3 함수당 GPC 규칙(확정)

- **짝수 GPC**: 해당 함수의 **Init** (선언/초기화)
- **홀수 GPC**: 바로 앞 짝수 GPC의 **Op** (연산/조건)
- 즉 함수당 **항상 2개의 GPC**를 사용한다
  - `generate()`는 **항상 `2`를 return**해야 함(예외 없음)
  - `main.py`는 `self.gpc_counter += used`로 누적

---

## 1. EFlow 하드웨어 아키텍처 기본

### 1.1 GPC(Group Program Counter)와 코어

- **GPC**: 128개 코어를 하나의 그룹으로 묶는 단위
  - GPC 0 → 주소 0~127, GPC 1 → 주소 128~255, ...
  - 각 GPC 안의 128개 슬롯은 **코어(core)** 또는 **레지스터(r0~r127)** 라 부른다
- **예약 코어**:
  - `r126` : return address
  - `r127` : branch address + loop control

### 1.2 Z-Bank (명령어/제어)

- Z-Bank는 각 코어가 **어떤 연산을 수행할지** 결정하는 **제어 워드**이다
- 실제 제어 필드는 **16비트** (`Z[15:0]`)이며, MIF에는 **32비트 워드의 하위 16비트에 패킹**하여 기록한다
  - 출력 형태: `0000zzzz` (8자리 hex)

#### Z[15:0] 비트 필드 구조

| 비트 | 필드명 | 설명 |
|------|--------|------|
| [4:0] | `opcode` | 연산 코드 (5비트) |
| [5] | `mesh_right` | 메시 우측 연결 |
| [6] | `xd_mem` | 외부 데이터 메모리 접근 |
| [7] | `y_left_xd` | Y-Bank 좌측 외부 데이터 경로 |
| [8] | `sum_neg` | 합산 부호 반전 (뺄셈/조건 반전용) |
| [9] | `xx_left_xd` | XX 좌측 외부 데이터 경로 |
| [10] | `write_en` | 쓰기 활성화 |
| [11] | `branch_hold` | 분기 홀드 (조건 명령용) |
| [12] | `a_bank_rd` | A-Bank 읽기 활성화 |
| [13] | `a_bank_wr` | A-Bank 쓰기 활성화 |
| [15:14] | `a_addr_mode` | A-Bank 주소 모드 (2비트) |

#### 주요 opcode 매핑

| opcode(hex) | 명령어 | 설명 |
|-------------|--------|------|
| `0x00` | ADD | 합산 (Y는 ADD-path mask) |
| `0x01` | EQZ | == 0 비교 |
| `0x02` | GTZ | > 0 비교 |
| `0x04` | NEQZ | != 0 비교 |
| `0x06` | GEZ | >= 0 비교 |
| `0x08` | SMT | 곱셈 (Y는 즉시값/계수) |
| `0x1F` | LXY | 초기값 로드 (Init 전용) |

### 1.3 Y-Bank (데이터/마스크)

- Y-Bank는 명령어에 따라 **역할이 다르다**:
  - **ADD 모드**: Y는 "값"이 아니라 **ADD-path 비트마스크**
  - **SMT 모드**: Y는 **곱셈 계수/즉시값**
  - **LXY 모드**: Y는 **초기 로드 값**
  - **코어 127**: Y[31]=`loopen_1d`, Y[15:0]=`loop offset` (루프 제어)

#### ADD-path 마스크 규칙

- 비트 위치 = `16 + (src_core - dst_core)`
- 허용 범위: `0..31` → 결과적으로 src는 **dst ±16 코어** 범위 내
- "유지(keep)" = `ADD` + 자기 자신만 선택하는 마스크(bit16만 set)

```
예: dst=r5, src=r3 → bit = 16+(3-5) = 14 → Y의 bit14을 1로 set
예: dst=r5, src=r5 → bit = 16+(5-5) = 16 → Y의 bit16을 1로 set (keep)
```

### 1.4 Init(LXY)과 Op의 관계

- **Init(짝수 GPC)**: 각 코어에 초기값을 **LXY 명령**으로 로드
  - Z = `0x041F` (opcode=LXY, write_en=1)
  - Y = 로드할 값 (32비트 정수)
- **Op(홀수 GPC)**: Init에서 로드된 값을 기반으로 **연산 수행**
  - 활성 코어: 먼저 **keep**(self-ADD)으로 값 유지 → 해당 코어에 실제 연산 덮어씀
  - 비활성 코어: NOP (Z=0, Y=0)

### 1.5 조건 명령의 동작 원리

- 조건 명령은 `(lhs - rhs)`의 결과를 판별하여 분기 여부를 결정한다
- EFlow에는 **LTZ/LEZ가 없다** → `GTZ`/`GEZ` + `sum_neg` 플래그로 대체
- 루프 변수(예: `i`)의 조건은 "탈출 조건"으로 **반전**한다
  - GIMPLE: `if (i < 15) goto loop_body` → EFlow: `if (i >= 15) goto exit`

---

## 2. 네이밍 정책(SSA / ArrayRef)

### 2.1 SSA 임시명(`ssa_#`) 정책(v2 수정 반영)

- `ssa_#`는 GCC GIMPLE SSA 변환 과정에서 생기는 내부 이름이다
- **최종 출력에서는 가능한 한 `ssa_#`가 보이지 않게** 의미 있는 이름을 우선 사용한다
- `_get_clean_name()`의 우선순위:
  1) `ssa_semantic[version]`에 매핑이 있으면 그 이름 사용
  2) `SsaName.var`가 있으면 VarDecl/ParmDecl 이름 사용
  3) `def_stmt`를 1-step 따라가 RHS 이름을 재사용(가능할 때)
  4) 최후의 fallback으로 `ssa_{ver}` 출력

> **v2 수정**: `ssa_#`는 **코어(레지스터) 할당 대상에서 완전히 제외**한다.  
> `is_ssa()` 헬퍼로 `ssa_\d+` 패턴을 판별하여 `add_mode_vars` 수집 시 6곳에서 필터링.  
> `ssa_#`가 남아있다면 "의미 이름화 규칙이 그 SSA를 커버하지 못한 상태"라는 디버깅 신호.

### 2.2 ArrayRef 표기 규칙(확정)

- **ArrayRef는 인덱스가 정수 상수여도 절대 `base+idx`로 접지 않는다**
- 항상 **`base[index]`** 형태로 표기한다
  - 예: `xn[19]`, `xn[i]`, `yo[i]`
- **동적 인덱스 ArrayRef(`xn[i]`, `yo[i]`)도 코어 할당 대상에서 제외하지 않는다**
  - "동적 ArrayRef는 레지스터 할당 제외" 규칙은 **폐기**됨

### 2.3 `xvK`/prefix 기반 단계판별 금지(확정)

- `xvK`는 "지연선 레지스터"를 의미하는 판별자(prefix)가 아니라 **그냥 일반 변수명**으로 취급한다
- 연산 단계(shift/mult/store 등)는 이름으로 판단하지 않고,
  - **GIMPLE 연산 형태(대입, 곱셈, 합산, 배열 store/load 등)** 를 기반으로 결정한다

---

## 3. 레지스터(코어) 할당 정책

### 3.1 안정성: init↔op 사이 코어 고정

- 한 함수에서 init 단계에서 할당된 코어는
  - 같은 함수의 op(GPC 홀수)에서도 **절대 변경되지 않는다**
- 출력에 `r?`가 나오면 기본적으로 정책 위반(미할당/누락)으로 본다

### 3.2 상수 레지스터(`cst_#`) 할당 정책

- **합산(ADD/Cond)에 실제로 쓰이는 상수만** `cst_#`로 코어 할당
  - `a=b+1`의 `1`, `(lhs-rhs)` 비교에서 필요한 `-상수` 등
- `a=100` 같은 **단항 초기화 상수는 Init(LXY)로만 처리**
  - → `cst_100` 같은 코어를 만들지 않음
- `IntegerCst`는 AST 내부(operand1/operand2 등)까지 **재귀적으로 수집**

### 3.3 op 단계에서 상수 "재초기화" 처리

- `curT=100`, `iT=50`처럼 "상수로 재대입"되는 코드는:
  - init(GPC 짝수)에서 로딩(LXY)으로 해결된다고 보고
  - op(GPC 홀수)에서는 **동일 단항 상수 대입을 무시**하여
    - reg-combo에 숫자 리터럴이 "레지스터처럼" 찍히는 현상을 방지한다

### 3.4 FIR h값 Init 반영(v2 수정 반영)

> **v2 수정**: FIR의 `tK`(곱셈 결과 레지스터) 초기값을 **해당 hK 계수의 10진수 값**으로 설정한다.

- 기존 문제: `tK`의 val이 모두 0 → Init에서 value가 0으로 출력됨
- hK는 FIR 고정 상수이므로, Init(LXY)에서 정확한 10진수 값을 반영해야 함
- 변경:
  - `h19=100` → `t19` val=100 → Init에서 `LXY(041f, 00000064)`로 로드
  - `h0=1`   → `t0` val=1   → Init에서 `LXY(041f, 00000001)`로 로드

### 3.5 outLoop 값 고정

- `cond_res_k` 초기값(val)은 항상 **4 (outLoop)** 로 고정

---

## 4. FIR 전용 정책(단일 op GPC 내부 공간 파이프라인)

### 4.1 FIR 감지(heuristic)

아래를 **동시에 만족**하면 FIR pass가 활성된다:
- `yo[...]` 형태의 store가 존재
- `hK = IntegerCst` 초기화가 **≥5개** 존재
- `(xvK 또는 xn[i]) * hK` 곱셈 패턴이 **≥5개** 존재

### 4.2 FIR의 핵심 스케줄

> **단일 op GPC 안에서 코어를 연속 배치**하여 흐름이 보이게 만든다.

- **SHIFT 코어(ADD)**: `xvK = xv(K-1)`, `xv0 = xn[i]`
- **MULT 코어(SMT)**: `tK = xvK * hK` (tap 계수는 코어 할당 안 함, SMT의 Y-immediate 사용)
- **STORE 코어(ADD copy)**: `_K = tK`
- **중간누산(yo0/yo1)**: `yo0[i] = Σ(_K) (그룹1)`, `yo1[i] = Σ(_K) (그룹2)`
- **최종합(yo)**: `yo[i] = yo0[i] + yo1[i]` (A-bank write)

### 4.3 ADD-path 제약과 레이아웃

- ADD 마스크는 `dst 기준 ±16코어` 안에서만 유효
- 탭을 **2그룹으로 분할**: Group1(최대 11탭) → yo0, Group2(나머지) → yo1
- 합산 코어(yo0/yo1)를 각 그룹 **중간 지점에 배치**하여 ±16 범위 보장

### 4.4 누산은 `tK`가 아니라 `_K` 기반

- `yo0[i] = _19 + _18 + ...`
- `yo1[i] = _8 + _7 + ...`
- `yo[i] = yo0[i] + yo1[i]`

---

## 5. 조건(Cond) 정책

### 5.1 조건문 opcode 변환 규칙

| C 비교 | EFlow 명령 | opcode | sum_neg |
|--------|-----------|--------|---------|
| `>` | GTZ | `0x02` | False |
| `>=` | GEZ | `0x06` | False |
| `<` | GTZ | `0x02` | **True** |
| `<=` | GEZ | `0x06` | **True** |
| `==` | EQZ | `0x01` | False |
| `!=` | NEQZ | `0x04` | False |

> LTZ/LEZ를 직접 쓰지 않고 GEZ/GTZ + SUM_NEG 플래그로 변환한다.

### 5.2 루프 조건 반전

- lhs가 `i`면 "탈출 조건"으로 뒤집기
- 예: `i < 15` → `i >= 15` (GEZ)

### 5.3 FIR에서도 조건 누락 방지

- FIR 경로에서도 `_pass_cond()`가 **항상 실행**되므로
  - `cond_res_#`가 파이프라인 이후 빈 코어에 자동 할당됨
  - `GimpleCond`가 skip되는 문제 해결

---

## 6. 주석/디버깅 출력 정책

### 6.1 reg-combo에 리터럴 숫자 직접 출력 금지

- 레지스터 대신 `100`, `50` 같은 값이 "레지스터 자리"에 찍히는 것은 금지
- 즉시값은 반드시 **`[imm=100]`** 같은 형태로 분리 표기한다

### 6.2 keep 주석 덮어쓰기 금지

- "keep"은 동작 개념일 뿐
- init에서 기록한 변수 주석(`iT=50`, `p0=...`)을 op에서 **keep으로 덮어쓰지 않는다**
- op 단계의 default keep은 Z/Y만 self-keep로 두고,
  - `c_code`(주석)는 init_state의 값을 그대로 유지

### 6.3 MIF 출력 형식

```
주소   : 데이터; -- .코어  C코드                  레지스터조합              명령어            결과값  GPC=N
256    : 00000400; -- .r0   xv19=xv18              r4                       ADD(0400, ...)    0       GPC=1
```

---

## 7. 구조 변경: 기존 → 리팩토링

### 7.1 기존 구조 (FIR/Generic top-level 분기)

```
generate()
├─ _build_semantic_names()
├─ _detect_fir()
│
├─ [FIR 경로]
│   ├─ _build_fir_reg_map()
│   ├─ _augment_regs_from_gimple(ignore_h_taps=True)
│   ├─ _generate_init_block()                  ← 짝수 GPC
│   └─ _generate_op_block_fir()                ← 홀수 GPC (FIR 전용, 조건 포함)
│
└─ [Generic 경로]
    ├─ _augment_regs_from_gimple(generic=True)
    ├─ _generate_init_block()                  ← 짝수 GPC
    └─ _generate_op_block_generic()            ← 홀수 GPC (Generic 전용, 조건 포함)
```

**문제점**:
- FIR/Generic 분기로 **코드 중복** 발생 (조건문 처리가 양쪽에 복사)
- 새 feature 추가 시 또다시 분기 + 전용 함수 필요
- FIR 경로에서 조건문(`GimpleCond`)이 누락될 수 있음

### 7.2 리팩토링 구조 (Pass Pipeline)

```
generate()
├─ _build_semantic_names()
├─ _analyze_ir()                          ← feature 플래그 생성
├─ _build_register_map()                  ← 통합 레지스터 맵
├─ _generate_init_block()                 ← 짝수 GPC (공통)
└─ _generate_op_block()                   ← 홀수 GPC (Pass Pipeline)
     ├─ Pass 1: _pass_keep()              ← 항상 실행
     ├─ Pass 2: _pass_fir_pipeline()      ← features["is_fir"]==True 일 때만
     ├─ Pass 3: _pass_generic_assign()    ← features["is_fir"]==False 일 때만
     └─ Pass 4: _pass_cond()              ← 항상 실행
```

**개선점**:
- top-level 분기 **제거**, feature 기반 조건부 pass로 통합
- 공통 로직(keep, cond) **한 곳에서 관리**
- 새 feature(MAC, FFT 등) 추가 시 **pass만 추가**하면 됨
- FIR에서도 조건 누락 **불가능** (_pass_cond 항상 실행)

### 7.3 함수 매핑표 (기존 → 현재)

| 기존 함수 | 현재 함수 | 상태 | 변경 내용 |
|-----------|----------|------|----------|
| `__init__` | `__init__` | O | `self.features` 속성 추가 |
| `generate` (FIR/Generic 분기) | `generate` (통합) | △ | top-level 분기 제거, 5단계 통합 |
| `write_all` | `write_all` | O | 동일 |
| `_get_clean_name` | `_get_clean_name` | O | 동일 |
| `_arrayref_parts` | `_arrayref_parts` | O | 동일 |
| `_get_op_symbol` | `_get_op_symbol` | O | 동일 |
| `_build_semantic_names` | `_build_semantic_names` | O | 동일 |
| `_make_z16` | `_make_z16` | O | 동일 |
| `_z32_word` | `_z32_word` | O | 동일 |
| `_add_mask` | `_add_mask` | O | 동일 |
| `_format_mnemonic` | `_format_mnemonic` | O | 동일 |
| `_reg_idx` | `_reg_idx` | O | 동일 |
| `_detect_fir` | `_analyze_ir` | △ | FIR 감지 + 범용 feature 추출로 확장 |
| `_build_fir_layout` | `_build_fir_layout` | O | 동일 |
| `_build_fir_reg_map` | `_build_fir_reg_map` | △ | tK val에 hK 계수값(10진수) 반영 |
| `_collect_intcst_from_node` | `_collect_intcst_from_node` | O | 동일 |
| `_augment_regs_from_gimple` | `_augment_regs_from_gimple` | △ | `is_ssa()` 필터 6곳 추가 |
| `_generate_init_block` | `_generate_init_block` | O | 동일 |
| `_apply_keep` | `_pass_keep` | △ | 단일 코어 → 128코어 일괄 pass |
| `_find_reg` | `_find_reg` | O | 동일 |
| `_generate_op_block_generic` | **(폐기)** | X | Pass 3, 4로 분해 |
| `_generate_op_block_fir` | **(폐기)** | X | Pass 2, 4로 분해 |
| (없음) | `_analyze_ir` | 신규 | IR 분석 → feature 플래그 |
| (없음) | `_build_register_map` | 신규 | feature 기반 통합 레지스터 맵 |
| (없음) | `_generate_op_block` | 신규 | 통합 Op pass pipeline 컨트롤러 |
| (없음) | `_pass_keep` | 신규 | Pass 1: 값 유지 (항상) |
| (없음) | `_pass_fir_pipeline` | 신규 | Pass 2: FIR 파이프라인 (조건부) |
| (없음) | `_pass_generic_assign` | 신규 | Pass 3: 일반 assign (조건부) |
| (없음) | `_pass_cond` | 신규 | Pass 4: 조건문 분기 (항상) |
| `_add_line` | `_add_line` | O | 동일 |
| `_write_mif_file` | `_write_mif_file` | O | 동일 |

> **O** = 기존 로직 그대로 사용  
> **△** = 기존 로직 일부 재사용 + 구조 변경  
> **X** = 기존 함수 폐기, 새 pass 함수로 대체  
> **신규** = 완전히 새로 작성

---

## 8. 기능별 함수 정리

### 8.1 공개 인터페이스

#### `__init__(output_dir="eflow_out")`
- **기능**: 인스턴스 초기화 (출력 디렉토리, MIF 버퍼, 분석 상태)
- **주요 속성**:
  - `buffer_z`, `buffer_y`, `buffer_cmt` : MIF 데이터 버퍼
  - `ssa_semantic` : SSA 버전 → 의미 이름 매핑
  - `cond_rhs_names` : 조건문 RHS 변수명 (init 시 음수 저장 대상)
  - `add_mode_vars` : ADD 연산 참여 변수명
  - `features` : IR 분석 결과 feature 딕셔너리 (신규)

#### `generate(fun, init_gpc, op_gpc)` → `int`
- **기능**: 함수 하나에 대한 EFlow 코드 생성 (핵심 공개 메서드)
- **흐름**: semantic naming → IR 분석 → 레지스터 맵 → Init → Op(pass pipeline)
- **반환**: 항상 `2` (함수당 2-GPC 고정)

#### `write_all()`
- **기능**: `buffer_z`/`buffer_y`를 `total_program_z.mif` / `total_program_y.mif`로 파일 기록

---

### 8.2 이름 변환 헬퍼 (Naming)

#### `_get_clean_name(node)` → `str`
- **기능**: GCC 노드(IntegerCst, ArrayRef, SsaName, VarDecl 등)를 사람이 읽는 이름 문자열로 변환
- **정책**: ssa_semantic 우선 → var 이름 → 1-depth 추적 → `ssa_#` 폴백
- **ArrayRef**: 항상 `base[index]` 형태 (상수 인덱스도 접지 않음)

#### `_arrayref_parts(node)` → `(str, str)`
- **기능**: ArrayRef 노드 → `(base_name, index_name)` 분해

#### `_get_op_symbol(exprcode)` → `str`
- **기능**: GIMPLE exprcode → 연산자 기호 (`+`, `-`, `*`, `>=`, `<`, `==` 등)

#### `_build_semantic_names(fun)`
- **기능**: 함수의 모든 GimpleAssign을 순회하여 SSA 버전 → 의미 이름 매핑 구축
- **Pass 1**: 직접 매핑 (ArrayRef → `base[idx]`, VarDecl → 변수명)
- **Pass 2**: SSA→SSA 복사 전파

---

### 8.3 Z/Y 인코딩 헬퍼

#### `_make_z16(opcode_hex, ...)` → `int`
- **기능**: Z-Bank 16비트 명령어 워드를 비트 필드별로 조합
- **입력**: opcode(hex 문자열) + 각 비트 필드(bool/int)
- **출력**: 0x0000~0xFFFF 범위의 16비트 Z 워드

#### `_z32_word(z16)` → `str`
- **기능**: 16비트 Z → 32비트 MIF hex 문자열 (`"0000xxxx"`)

#### `_add_mask(dst_idx, src_indices)` → `int`
- **기능**: ADD 명령의 Y-Bank 비트마스크 계산
- **공식**: `bit = 16 + (src - dst)` → ±16 범위 내 유효

#### `_format_mnemonic(cmd, z_hex, y_val)` → `str`
- **기능**: MIF 주석용 명령어 니모닉 포맷팅 (`"ADD(0400, 00010000)"`)

#### `_reg_idx(reg_str)` → `int | None`
- **기능**: 레지스터 문자열 `"r5"` → 정수 `5`

---

### 8.4 IR 분석 (Feature Detection)

#### `_analyze_ir(fun)` → `dict` (신규)
- **기능**: GIMPLE IR을 한 번 순회하여 feature 플래그 생성
- **기존 `_detect_fir()` 대체**: FIR 감지 + 향후 확장(MAC, FFT 등) 준비
- **반환 feature**:
  - `is_fir` (bool) : FIR 필터 패턴 감지 여부
  - `max_k` (int) : FIR 최대 탭 인덱스
  - `coeff` (dict) : FIR 탭 계수 `{k: 값}`
  - `has_mult` (bool) : 곱셈 연산 존재 여부
  - `cond_count` (int) : 조건문 개수
- **FIR 활성 조건**: `saw_yo AND len(coeff)>=5 AND mult_cnt>=5 AND max_k>=0`

---

### 8.5 레지스터 맵 생성

#### `_build_register_map(fun)` → `dict` (신규)
- **기능**: feature에 따라 내부 분기하여 통합 레지스터 맵 생성
  - FIR feature → `_build_fir_reg_map()` + `_augment_regs_from_gimple(ignore_h_taps=True)`
  - 그 외 → 빈 맵 + `_augment_regs_from_gimple(generic=True)`

#### `_build_fir_layout(max_k)` → `dict`
- **기능**: FIR 탭 수에 따라 코어 레이아웃(shift/mult/store/yo0/yo/yo1/xn 인덱스) 계산
- **그룹 분할**: Group1(최대 11탭), Group2(나머지)
- **합산 코어**: 각 그룹 중간 지점 배치 (±16 범위 보장)

#### `_build_fir_reg_map(fun, features)` → `dict`
- **기능**: FIR 레이아웃 기반으로 레지스터 맵 생성
- **v2 수정**: `tK` 초기값 = `coeff[k]` (hK 계수의 10진수 값)
  - `xvK` val=0, `_K` val=0, `yo0/yo1/yo/xn` val=0 (기존과 동일)
  - `tK` val=hK (v2에서 변경)

#### `_collect_intcst_from_node(node, out_set)`
- **기능**: GCC IR 노드 트리를 재귀 탐색하여 모든 IntegerCst 수집

#### `_augment_regs_from_gimple(fun, reg_map, ...)`
- **기능**: GIMPLE 분석으로 레지스터 맵 보강
- **수행 내용**:
  1) ADD/뺄셈 참여 변수 수집 → 레지스터 할당
  2) 합산/조건 사용 상수 수집 → `cst_#` 할당
  3) 초기 상수값 대입 감지 → reg_map val 설정
  4) `cond_res_#` 할당 (초기값=4, outLoop)
- **v2 수정**: `is_ssa()` 헬퍼로 `ssa_\d+` 패턴을 **6곳에서 필터링**
  - LHS 수집, 이항 피연산자, 단항 RHS, GimpleCond LHS/RHS, 할당 루프 안전망

---

### 8.6 Init 블록 생성

#### `_generate_init_block(reg_map, init_gpc)` → `dict`
- **기능**: 짝수 GPC의 Init(LXY) 블록 생성
- **처리**: 128개 코어 순회 → reg_map에 있으면 LXY(초기값), 없으면 비활성
- **예약 코어**: r126=return address, r127=branch address
- **반환**: init_state 딕셔너리 (Op에서 복제하여 사용)

---

### 8.7 Op 블록: Pass Pipeline

#### `_generate_op_block(fun, reg_map, init_state, op_gpc)` (신규)
- **기능**: 통합 Op 블록 생성 (Pass Pipeline 컨트롤러)
- **기존 `_generate_op_block_generic` / `_generate_op_block_fir` 대체**
- **실행 순서**:
  1) `_pass_keep()` → 항상
  2) `_pass_fir_pipeline()` → `features["is_fir"]` True일 때
  3) `_pass_generic_assign()` → `features["is_fir"]` False일 때
  4) `_pass_cond()` → 항상
- **마지막**: 128개 코어 상태를 MIF 버퍼에 flush

#### `_pass_keep(st)` (신규)
- **기능**: Pass 1 - 활성 코어에 self-ADD(keep) 적용, 비활성 코어는 NOP
- **항상 실행**
- **정책 6.2 준수**: c_code(주석)는 건드리지 않음 (init 주석 유지)

#### `_pass_fir_pipeline(st, reg_map)` (신규)
- **기능**: Pass 2 - FIR 파이프라인 (조건부, `is_fir==True`일 때만)
- **기존 `_generate_op_block_fir()`의 파이프라인 부분 추출**
- **처리 순서**:
  1) `xn[i]` 로드 (A-Bank read, xd_mem=True)
  2) 각 탭 k: shift(ADD) → mult(SMT, Y=hK즉시값) → store(ADD copy)
  3) 부분합: yo0[i] = Σ(_K group1), yo1[i] = Σ(_K group2)
  4) 최종합: yo[i] = yo0[i] + yo1[i] (A-Bank write)

#### `_pass_generic_assign(fun, st, reg_map)` (신규)
- **기능**: Pass 3 - 일반 GimpleAssign → ADD/SMT 변환 (조건부, `is_fir==False`일 때만)
- **기존 `_generate_op_block_generic()`의 GimpleAssign 부분 추출**
- **변환 규칙**:
  - 이항 `+`/`-` → ADD + ADD-mask
  - 이항 `*` → SMT + Y=즉시값
  - 단항 상수 대입 → 스킵 (init에서 처리)
  - 단항 변수 대입 → ADD (copy)

#### `_pass_cond(fun, st, reg_map)` (신규)
- **기능**: Pass 4 - GimpleCond → 분기 명령 변환 (항상 실행)
- **기존**: FIR/Generic 양쪽에 **중복** 존재 → 통합하여 한 곳에서 관리
- **변환**: 비교 연산자 → GTZ/GEZ/EQZ/NEQZ (COND_MAP 테이블 사용)
- **루프 반전**: lhs가 `i`이면 INVERT 테이블로 반전

---

### 8.8 레지스터 검색 / MIF 출력

#### `_find_reg(clean_name, reg_map)` → `str | None`
- **기능**: 변수/상수 이름으로 reg_map에서 레지스터(`"r5"` 등) 검색
- **검색 순서**: 이름 직접 매칭 → 정수값이면 `cst_#` 키로 시도

#### `_add_line(addr, z_val, y_val, core, c_code, reg_comb, cmd, res_val, gpc, extra_lines=None)`
- **기능**: 하나의 MIF 주소에 대한 Z/Y 데이터 + 주석을 버퍼에 저장

#### `_write_mif_file(path, data_dict, cmt_dict, desc, header)`
- **기능**: 축적된 MIF 데이터를 Altera MIF 형식으로 파일 기록
- **형식**: DEPTH/WIDTH/RADIX 헤더 + CONTENT BEGIN...END + 128주소마다 GPC 구분 주석

---

## 9. v2 수정사항 요약

### 9.1 ssa_숫자 코어 할당 완전 제외

| 적용 위치 | 설명 |
|-----------|------|
| `is_ssa()` 헬퍼 신규 | `re.match(r"^ssa_\d+$", name)` 패턴 판별 |
| LHS 수집 (GimpleAssign) | `ssa_` LHS는 `add_mode_vars`에 추가 안 함 |
| 이항 +/- 피연산자 수집 | `ssa_` 피연산자는 `add_mode_vars`에 추가 안 함 |
| 단항 RHS 수집 | `ssa_` 이름은 `add_mode_vars`에 추가 안 함 |
| GimpleCond LHS/RHS 수집 | `ssa_` 이름은 `add_mode_vars`에 추가 안 함 |
| 레지스터 할당 루프 (안전망) | `re.match(r"^ssa_\d+$", v)` 최종 필터 |

### 9.2 FIR tK 초기값에 hK 계수 반영

```
변경 전: add(f"t{k}", layout["mult"][k], 0, "var")       ← val=0 (오류)
변경 후: h_val = coeff.get(k, 0)
         add(f"t{k}", layout["mult"][k], h_val, "var")    ← val=hK(10진수)
```

---

## 10. 자주 발생한 오류 & 원인/해결

### 10.1 `TypeError: int += NoneType`
- **원인**: FIR 분기에서 `return`만 하고 `None`을 반환
- **해결**: `generate()`는 **항상 `return 2`**

### 10.2 "우항에 더해지는 상수만 레지스터에 할당"
- **원인**: 단항 상수 대입 `a=100`을 상수 수집에 넣지 않음
- **해결**: 단항/중첩 포함 `IntegerCst`를 폭넓게 수집하여 `cst_#`에 할당

### 10.3 FIR에서 조건이 생성되지 않음
- **원인**: FIR reg_map에 `cond_res_#`가 없어 `GimpleCond`가 skip
- **해결**: `_pass_cond()` 항상 실행 + `_augment_regs_from_gimple()`에서 cond_res 자동 할당

### 10.4 FIR Init에서 tK value가 모두 0
- **원인**: `_build_fir_reg_map()`에서 tK val을 0으로 고정
- **해결**: `coeff.get(k, 0)`으로 hK 계수값(10진수) 반영

### 10.5 ssa_# 변수가 코어에 할당됨
- **원인**: `add_mode_vars` 수집 시 `ssa_\d+` 패턴을 필터링하지 않음
- **해결**: `is_ssa()` 헬퍼로 6곳에서 필터링 + 할당 루프 안전망

---

## 11. TODO / 확장 포인트

- FIR의 `xn[i]` load, `yo[i]` store를 실제 A-bank 주소/stride 규칙에 맞게 정확히 매핑
- FIR 조건(루프 종료)과 loop offset/hold 정책을 실제 하드웨어 분기 규칙에 맞춰 정합
- `ssa_semantic` 확장: 이항연산 SSA, PHI 노드까지 의미 이름 부여(ssa_# 최소화)
- 새 feature pass 추가:
  - MAC(Multiply-Accumulate) 패턴 → `_pass_mac_pipeline()`
  - Butterfly(FFT) 패턴 → `_pass_butterfly()`
  - 다중 루프 → `_pass_nested_loop()`

---

## 부록 A. 용어

| 용어 | 설명 |
|------|------|
| **GPC** | 그룹(128라인) 단위 프로그램 카운터 블록 |
| **core / r#** | 0..127 레지스터/코어 슬롯 |
| **Z-bank** | 명령/제어 (16-bit packed into 32-bit word) |
| **Y-bank** | 데이터/마스크/루프제어 비트 |
| **GIMPLE** | GCC의 중간 표현(IR), SSA 형태 |
| **SSA** | Static Single Assignment, 각 변수에 한 번만 대입하는 표현 |
| **MIF** | Memory Initialization File, Altera FPGA 메모리 초기화 형식 |
| **FIR** | Finite Impulse Response, 유한 임펄스 응답 필터 |
| **LXY** | Load X/Y, Init에서 코어에 초기값을 로드하는 명령 |
| **ADD** | 합산 명령 (Y=ADD-path mask) |
| **SMT** | 곱셈 명령 (Y=즉시값/계수) |
| **keep** | self-ADD로 현재 값을 유지하는 패턴 |
| **ADD-path mask** | `bit = 16 + (src-dst)`, dst ±16 범위 내 소스 선택 |
| **sum_neg** | Z[8] 플래그, 합산 부호 반전 (< , <= 구현용) |
| **branch_hold** | Z[11] 플래그, 조건 분기 시 홀드 |
| **outLoop** | 루프 탈출 분기 오프셋 (cond_res 초기값=4) |
| **feature** | `_analyze_ir()`가 생성하는 IR 패턴 플래그 딕셔너리 |
| **pass** | Op GPC 내에서 순차 실행되는 개별 변환 단계 |
