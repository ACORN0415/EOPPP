# EOPPP eFlow Generator 개발 기록 & 코드 정책 (누적 정리)

> 본 문서는 대화에서 확정/수정된 **프로세스**, **코드 정책**, **출력 규칙**, **FIR 스케줄링 규칙**, **디버깅 포인트**를 한 곳에 모아 정리한 문서입니다.  
> 기준: 현재 사용 중인 `generator.py` 구조(EFlowGenerator) + 사용자 수정사항 반영(“짝수 GPC=init, 홀수 GPC=op”, ArrayRef 표기 규칙 등)

---

## 0. 전체 프로세스(End-to-End)

### 0.1 실행 흐름(메인 파이프라인)
1. `main.py`가 `main()` 함수의 call sequence를 분석한다.
2. 각 타겟 함수(예: `checkclkfibo`, `checkclkfir`)에 대해:
   - `init_gpc`(짝수), `op_gpc`(홀수=init+1) 할당
   - `generator.generate(fun, init_gpc, op_gpc)` 호출
3. `generator.write_all()`이 전체 Z/Y MIF를 생성한다.

### 0.2 함수당 GPC 규칙(확정)
- **짝수 GPC**: 해당 함수의 **init**
- **홀수 GPC**: 바로 앞 짝수 GPC의 **operation**
- 즉 함수당 **항상 2개의 GPC**를 사용한다.
  - `generate()`는 **항상 `2`를 return**해야 함(예외 없음)
  - `main.py`는 `self.gpc_counter += used`로 누적

---

## 1. 네이밍 정책(SSA / ArrayRef)

### 1.1 SSA 임시명(`ssa_#`) 노출 정책
- `ssa_#`는 GCC GIMPLE SSA 변환 과정에서 생기는 내부 이름이다.
- **최종 출력에서는 가능한 한 `ssa_#`가 보이지 않게** 의미 있는 이름을 우선 사용한다.
- `generator._get_clean_name()`의 우선순위:
  1) `ssa_semantic[version]`에 매핑이 있으면 그 이름 사용  
  2) `SsaName.var`가 있으면 VarDecl/ParmDecl 이름 사용  
  3) `def_stmt`를 1-step 따라가 RHS 이름을 재사용(가능할 때)  
  4) 최후의 fallback으로 `ssa_{ver}` 출력

> NOTE: `ssa_#`가 남아있다면 “의미 이름화 규칙이 그 SSA를 커버하지 못한 상태”라는 디버깅 신호.

### 1.2 ArrayRef 표기 규칙(확정 / 수정 반영)
- **ArrayRef는 인덱스가 정수 상수여도 절대 `base+idx`로 접지 않는다.**
- 항상 **`base[index]`** 형태로 표기한다.
  - 예: `xn[19]`, `xn[i]`, `yo[i]`
- **동적 인덱스 ArrayRef(`xn[i]`, `yo[i]`)도 코어 할당 대상에서 제외하지 않는다.**
  - “동적 ArrayRef는 레지스터 할당 제외” 규칙은 **폐기**됨.

### 1.3 `xvK`/prefix 기반 단계판별 금지(확정 / 수정 반영)
- `xvK`는 “지연선 레지스터”를 의미하는 판별자(prefix)가 아니라 **그냥 일반 변수명**으로 취급한다.
- 연산 단계(shift/mult/store 등)는 이름으로 판단하지 않고,
  - **GIMPLE 연산 형태(대입, 곱셈, 합산, 배열 store/load 등)** 를 기반으로 결정한다.

---

## 2. 레지스터(코어) 할당 정책

### 2.1 안정성: init↔op 사이 코어 고정
- 한 함수에서 init(op 이전) 단계에서 할당된 코어는
  - 같은 함수의 op(GPC 홀수)에서도 **절대 변경되지 않는다.**
- 출력에 `r?`가 나오면 기본적으로 정책 위반(미할당/누락)으로 본다.

### 2.2 상수 레지스터(`cst_#`) 할당 정책(일반 함수)
- **우항에 더해지는 상수만** 잡히는 문제가 있었음.
- 정책: `IntegerCst`는
  - `a=b+1` 같은 이항연산뿐 아니라,
  - `a=100` 같은 **단항 상수 대입 포함**
  - AST 내부(operand1/operand2 등)까지 가능한 범위에서 **재귀적으로 수집**
- 수집된 상수는 `cst_<val>` 이름으로 코어에 할당한다.

### 2.3 op 단계에서 상수 “재초기화” 처리(일반 함수)
- `curT=100`, `iT=50`처럼 “상수로 재대입”되는 코드는:
  - init(GPC 짝수)에서 로딩(LXY)으로 해결된다고 보고
  - op(GPC 홀수)에서는 **동일 단항 상수 대입을 무시**하여
    - reg-combo에 숫자 리터럴이 “레지스터처럼” 찍히는 현상을 방지한다.

---

## 3. FIR 전용 정책(단일 op GPC 내부 공간 파이프라인)

### 3.1 FIR 감지(heuristic)
- `xv\d+` 스칼라 변수가 충분히 존재
- `h\d+ = IntegerCst` 형태로 tap 계수가 존재
- `yo[...]` 형태의 store가 존재

위 조건을 만족하면 FIR로 분기하여 `_generate_op_block_fir()`을 사용한다.

### 3.2 FIR의 핵심 스케줄(요구사항 반영)
> **“시간(GPC) 분리”가 아니라, 단일 op GPC 안에서 코어를 연속 배치하여 흐름이 보이게** 만든다.

- **SHIFT 코어(ADD)**  
  - `xvK = xv(K-1)`  
  - `xv0 = xn[i]`는 A-bank read placeholder로 표현(실 HW 매핑은 A-bank mode로 조정)
- **MULT 코어(SMT)**  
  - `tK = xvK * hK`  
  - 곱셈 결과는 반드시 **`tK`에 저장**
  - tap 계수 `hK`는 **코어에 올리지 않고** SMT의 Y-immediate(또는 지정 입력)로 사용
- **STORE 코어(ADD copy)**  
  - `_K = tK`  
  - 곱셈 결과를 공유/누산에 쓰기 위해 **store 단계에서 `_K`로 복제**
- **중간누산(yo0/yo1)**  
  - `yo0[i] = Σ(_K) (그룹1)`  
  - `yo1[i] = Σ(_K) (그룹2)`  
  - 마지막에 `yo[i] = yo0[i] + yo1[i]`
- **ADD-path 제약 준수(필수)**  
  - ADD 마스크는 `dst 기준 ±16코어` 안에서만 유효
  - 따라서 `yo0`, `yo1`, `yo` 코어 위치는
    - 합산 대상 `_K`들과 **±16 이내**가 되도록 레이아웃(코어 배치)을 설계한다.

### 3.3 누산은 `tK`가 아니라 `_K` 기반
- 요구사항: “store에서 t숫자를 저장하는 것은 `_숫자`로 한다.”
- 따라서 누산 주석/의미는 다음과 같이 정합:
  - `yo0[i] = _19 + _18 + ...`
  - `yo1[i] = _8 + _7 + ...`
  - `yo[i] = yo0[i] + yo1[i]`

---

## 4. 조건(Cond) 정책

### 4.1 일반 함수(Generic)
- 조건문은 `cond_res_#` 레지스터에 결과를 만든다(분기/루프 플래그 용도).
- `_analyze_and_map_registers()`에서 `GimpleCond` 개수만큼 `cond_res_0..`를 할당.

### 4.2 FIR 경로에서 조건 누락 이슈(원인 & 정책)
- FIR은 `_build_fir_reg_map()`이 파이프라인 코어만 만들면
  - `cond_res_#`가 없어 `GimpleCond`가 통째로 skip될 수 있음.
- 정책: FIR 경로에서도 조건을 쓰면
  - `cond_res_#`를 파이프라인 이후 빈 코어에 추가 할당하거나,
  - 별도 보정 루틴(`_ensure_cond_regs`)로 보강해야 한다.

---

## 5. Z/Y 인코딩 및 출력 규칙

### 5.1 Z-word(32-bit) 출력 규칙
- 실제 제어 필드는 16비트(`zq_reg[15:0]`)이며,
- MIF에는 **하위 16비트에만 패킹**하여 32-bit hex로 기록한다:
  - 출력 형태: `0000zzzz` (8 hex)

### 5.2 ADD(합산 모드)에서 Y는 “값”이 아니라 마스크
- ADD-path mask 규칙:
  - `bit_index = 16 + (src_core - dst_core)`
  - 허용 범위: `0..31` → 결과적으로 `src`는 `dst±16` 범위 내
- “유지(keep)”는 다음과 같이 표현:
  - `ADD` + `src=[dst]`만 선택하는 마스크(=bit16 set)

### 5.3 SMT(비합산 모드)에서 Y는 계수/즉시값
- SMT의 Y는 합산 마스크가 아니라 **계수/즉시값**으로 사용한다.
- FIR에서는 `hK`를 레지스터에 올리지 않고 SMT의 Y(imm)로 전달하는 방식이 기본.

### 5.4 Loop control
- `Y[127][31] = loopen_1d`
- `Y[127][15:0] = loop offset`
- loop 제어는 Z가 아니라 Y(core127)로 한다.

---

## 6. 주석/디버깅 출력 정책

### 6.1 reg-combo에 리터럴 숫자 직접 출력 금지
- 레지스터 대신 `100`, `50` 같은 값이 “레지스터 자리”에 찍히는 것은 금지.
- 즉시값은 반드시 **`[imm=100]`** 같은 형태로 분리 표기한다.

### 6.2 keep 주석 덮어쓰기 금지
- “keep”은 동작 개념일 뿐,
- init에서 기록한 변수 주석(`iT=50`, `p0=...`)을 op에서 **keep으로 덮어쓰지 않는다.**
- 정책: op 단계의 default keep은 Z/Y만 self-keep로 두고,
  - `c_code`(주석)는 init_state의 값을 그대로 유지하는 것이 원칙.

---

## 7. 현재 코드 구조 요약(`EFlowGenerator`)

### 7.1 주요 멤버
- `buffer_z`, `buffer_y`, `buffer_cmt`: 주소별 출력 버퍼
- `ssa_semantic`: SSA version → 의미 이름
- `add_mode_vars`, `cond_rhs_names`: 레지스터 분석 보조

### 7.2 주요 메서드
- `generate(fun, init_gpc, op_gpc)`
  - semantic naming 구축 → FIR 여부 판단 → init/op 생성
  - **항상 `2` 반환**
- `_generate_init_block(reg_map, init_gpc)`
  - active core에 대해 LXY로 초기값 로드
- `_generate_op_block_generic(...)`
  - 기본 keep 설정 후, GimpleAssign/GimpleCond를 ADD/SMT로 변환
- `_generate_op_block_fir(...)`
  - FIR 공간 파이프라인 + yo0/yo1/yo 누산 생성
- `write_all()`
  - `total_program_z.mif`, `total_program_y.mif` 생성

---

## 8. 자주 발생한 오류 & 원인/해결

### 8.1 `TypeError: int += NoneType`
- 원인: FIR 분기에서 `return`만 하고 `None`을 반환
- 해결: `generate()`는 FIR/Generic 모두 **`return 2`**

### 8.2 “우항에 더해지는 상수만 레지스터에 할당”
- 원인: 단항 상수 대입 `a=100`을 상수 수집(`op_constants`)에 넣지 않음
- 해결: 단항/중첩 포함 `IntegerCst`를 폭넓게 수집하여 `cst_#`에 할당

### 8.3 FIR에서 조건이 생성되지 않음
- 원인: FIR reg_map에 `cond_res_#`가 없어 `GimpleCond`가 skip
- 해결: FIR도 cond_res를 배치/보정하여 조건 발행 가능하게 함

---

## 9. TODO / 확장 포인트(선택)
- FIR의 `xn[i]` load, `yo[i]` store를 실제 A-bank 주소/stride 규칙에 맞게 정확히 매핑
- FIR 조건(루프 종료)과 loop offset/hold 정책을 실제 하드웨어 분기 규칙에 맞춰 정합
- `ssa_semantic` 확장: 이항연산 SSA, PHI 노드까지 의미 이름 부여(ssa_# 최소화)

---

## 부록 A. 용어
- **GPC**: 그룹(128라인) 단위 프로그램 카운터 블록
- **core / r#**: 0..127 레지스터/코어 슬롯
- **Z-bank**: 명령/제어(16-bit packed into 32-bit word)
- **Y-bank**: 데이터/마스크/루프제어 비트


# eFlow Generator 리팩토링 (Init/Op 고정 + 조건부 Pass)

목표: **모든 함수는 항상 `GPC_init(짝수)` + `GPC_op(홀수)`**로 구성하고,
`GPC_op` 내부에서 GIMPLE 패턴을 읽어 조건에 맞을 때만 해당 기능(곱셈/SMT, FIR pipeline, 16코어 분할합산, 조건문 등)을 적용한다.

---

## A. 최상위 규칙

### A1) 구조 통일
- 함수당 2-GPC 고정
  - **짝수 GPC = Init**
    - 선언/초기화(상수 로드)만 수행(LXY)
  - **홀수 GPC = Op**
    - keep + 연산/조건(pass pipeline)

### A2) “generic vs FIR” top-level 분기 금지
- generate()에서 FIR/Generic으로 갈라치지 않는다.
- 대신 `_analyze_ir()`가 feature를 만들고,
  - Op 단계의 pass들이 feature에 따라 조건부로 켜진다.

---

## B. 공통 정책

### B1) SSA 임시변수 제거 정책
- `ssa_#`는 **레지스터/코어 할당 대상에서 제외**
- `ssa_#`가 lhs인 assign statement는 **emit하지 않음**
- (확장) 필요한 경우 `def_stmt` 인라인 전개로 SSA를 흡수

### B2) 상수 할당 정책
- **합산(ADD/Cond)에 실제로 쓰이는 상수만** `cst_#`로 코어 할당
  - `a=b+1`, `a=b-1`, `(lhs-rhs)` 비교에서 필요한 `-상수`
- `a=100` 같은 **단항 초기화 상수는 Init(LXY)로만 처리**
  - → `cst_100` 같은 코어를 만들지 않음

### B3) 조건문 opcode 정책
- LTZ/LEZ를 직접 쓰지 않고 GEZ/GTZ(+SUM_NEG)로 변환
  - `>`  : GTZ
  - `>=` : GEZ
  - `<`  : GTZ + SUM_NEG
  - `<=` : GEZ + SUM_NEG
  - `==` : EQZ, `!=` : NEQZ
- loop 조건(휴리스틱): lhs가 `i`면 “탈출 조건”으로 뒤집기(예: i<15 → i>=15)

### B4) outLoop 값 고정(피보나치 요구)
- `cond_res_k` 초기값(val)은 항상 **4 (outLoop)** 로 고정

---

## C. Op(pass pipeline) 구성

Op 단계는 다음 순서로 pass를 실행한다(공통):

1) keep pass (활성 레지스터는 기본 keep)
2) FIR pipeline pass (GIMPLE 패턴이 FIR이면)
3) generic assign/mul/add pass (FIR이 아니면)
4) cond pass (GimpleCond 기반으로 항상 생성)

---

## D. FIR 기능(pass) 활성 조건(패턴 기반)

아래를 동시에 만족하면 FIR pass가 켜진다.

- `yo[...]` store 존재
- `hK = const` 초기화가 충분히 존재(>=5)
- `(xvK 또는 xn[i]) * hK` 곱셈 패턴이 충분히 존재(>=5)

---

## E. FIR pipeline(pass) 동작

- shift: `xvK = xv(K-1)` (K=0이면 `xn[i]`)
- mult:  `tK = xvK * hK`  (SMT, Y=coeff immediate)
- store: `_K = tK`        (copy)
- partial sum:
  - `yo0[i] = Σ(tK group1)`
  - `yo1[i] = Σ(tK group2)`
  - `yo[i]  = yo0[i] + yo1[i]` (A-bank write)

추가 확장:
- 합산 항이 많아 ±16 제약을 넘으면 yo2/yo3…를 자동 생성하는 “분할합산 pass” 추가

---

## 산출물
- `generator_pass_pipeline.py`
  - 위 구조의 샘플 구현(Init/Op 고정 + 조건부 pass)