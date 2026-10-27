# EOPPP eFLOW Generator 정책 문서

> generator.py의 코드 정책, 설계 규칙, 제약사항을 정리한 문서.
> 코드 수정 시 이 문서를 참조하여 정책 위반을 방지한다.

---

## Section A: 아키텍처 정책

### A1. 함수당 2-GPC 고정

- `generate()`는 **항상 2를 return**해야 한다. 예외 없음.
- 모든 C 함수는 복잡성에 관계없이 정확히 2개 GPC를 사용한다.
  - **짝수 GPC**: Init (초기화, LXY 명령으로 초기값 로드)
  - **홀수 GPC**: Op (연산, 4-Pass Pipeline)

```python
# generate() 마지막 줄 — 절대 변경 금지
return 2
```

### A2. top-level 분기 금지

- `generate()` 내부에서 "generic vs MAC" top-level if-else 분기를 하지 않는다.
- 대신 `_analyze_ir()`가 feature 플래그를 생성하고, Op의 각 pass가 feature에 따라 조건부로 활성화된다.

```python
# ❌ 금지: generate() 내부에서 분기
if is_mac:
    self._generate_op_block_fir(...)
else:
    self._generate_op_block_generic(...)

# ✅ 올바름: 통합 Op 블록, pass 내부에서 조건부 활성
self._generate_op_block(fun, reg_map, init_state, op_gpc)
# → 내부에서 is_fir_pipeline 체크하여 Pass 2 활성 여부 결정
```

### A3. 입력은 GIMPLE SSA

- `main.py`에서 `register_after('ssa')`로 등록되어 GCC의 SSA 패스 이후에 실행된다.
- generator가 받는 `fun` 인자는 **GIMPLE SSA** 형태 (일반 GIMPLE 아님).
- PHI 노드와 SSA 버전 번호가 포함된 상태.

---

## Section 1: SSA/ArrayRef 네이밍 정책

### 1.1 SSA 이름 해석 우선순위

`_get_clean_name(node)` 및 `_build_semantic_names(fun)`에서 적용:

1. VarDecl 이름이 있으면 사용 (예: `p0_15` → `"p0"`)
2. ArrayRef이면 `"base[index]"` 형태 (예: `"xn[i]"`)
3. 위 두 가지 다 아니면 `"ssa_#"` (SSA 임시 변수)

**목표**: MIF 주석에서 `ssa_#` 노출을 최소화.

### 1.2 ArrayRef 표기

- ArrayRef는 **항상** `"base[index]"` 형태로 표기한다.
- 상수 인덱스도 접지(fold) 않는다: `xn[0]`이 아니라 `xn[i]`.

### 1.3 _get_clean_name vs _get_base_var_name

| 함수 | 반환 | 용도 |
|------|------|------|
| `_get_clean_name()` | SSA semantic 이름 | 대부분의 경우 사용 |
| `_get_base_var_name()` | 원본 VarDecl 선언명 (SSA 우회) | MAC 시프트 체인 역추적 전용 |

> **주의**: MAC 시프트 체인에서 `_get_clean_name()`을 사용하면 `xv0`이 `xn[i]`로 이름 변경되어 자기참조 체인 `xn[i] → xn[i]`이 생성된다. 반드시 `_get_base_var_name()`을 사용해야 한다.

---

## Section 2: 레지스터(코어) 할당 정책

### 2.1 Init ↔ Op 사이 코어 고정

- Init GPC에서 할당한 코어 번호는 Op GPC에서 동일하게 사용된다.
- `init_state`를 `copy.deepcopy()`로 복제하여 Op의 초기 상태로 사용.

### 2.2 상수 할당 (cst_# 규칙)

- **합산(ADD) 또는 조건(Cond)에 실제 쓰이는 상수만** `cst_#` 이름으로 코어 할당한다.
- 단항 초기화 상수 (예: `i = 0`, `p0 = 1`)는 코어 할당 없이 Init의 LXY로만 처리한다.

```
cst_1  = 1    → 코어 할당 O (루프 증분 i = i + cst_1에 사용)
cst_-50 = -50 → 코어 할당 O (조건 반전 마이너스 치환에 사용)
값 0, 1, 100  → 코어 할당 X (Init LXY로만 로드)
```

### 2.3 MAC 계수 할당 제외

- FIR 계수(h0, c0 등)는 코어에 할당하지 않는다.
- SMT 명령의 Y-bank immediate 값으로 직접 전달된다.

### 2.4 SSA 임시 변수 제외

- `ssa_#` 이름의 SSA 임시 변수는 코어 할당 대상에서 **제외**한다.
- 단, MAC 곱셈 결과 (`ssa_45 = xv19 * h19`)는 mult 코어로 할당됨.

---

## Section 3: FIR 파이프라인 레이아웃 정책

### 3.1 Feature Flag 분리: is_mac vs is_fir_pipeline

```python
is_mac = has_any_mult                         # 넓은 범위: 곱셈 존재 여부
is_fir_pipeline = is_mac_strict or is_mac_relaxed  # 좁은 범위: FIR 전용
```

| 플래그 | 판정 기준 | 역할 |
|---|---|---|
| `is_mac` | 곱셈 연산이 하나라도 존재 | 곱셈 존재 여부만 표시 |
| `is_fir_pipeline` | output_arrays>0 AND coeff_vars≥5 AND coeff_mult≥5 | [var][mult][store] 그룹 + pSt 적용 여부 결정 |

**제어 영향**:
- `is_fir_pipeline`이 True일 때만: `_build_mac_layout()`, `_pass_mac_pipeline()`, pSt 칼럼 활성화
- `is_mac`만 True (is_fir_pipeline=False): generic 경로 사용, pSt 없음

### 3.2 [var][mult][store] 그룹 레이아웃

각 MAC 탭은 3개 코어를 사용한다:

```
[var] [mult(pSt=2)] [store(pSt=3)]
```

- **var**: 데이터 변수 코어. shift 연산 수행 시 Op에서 pSt=1이 동적 부여됨. reg_map(Init)에서는 pSt 없음.
- **mult**: 계수 곱셈. SMT 명령, Y=계수값. pSt=2.
- **store**: 곱셈 결과 저장. ADD 명령 (누적기 입력용). pSt=3.

> shift를 MAC 파이프라인에서 분리하여, shift 없는 MAC 패턴에서도 동일한 `[var][mult][store]` 구조를 사용할 수 있다.

### 3.3 분할 누적기

- ADD mask의 ±16 범위 제약 때문에 모든 탭을 한 번에 합산할 수 없다.
- 20탭 FIR은 [6, 14]로 분할: yo0(6탭 합), yo1(14탭 합).
- final 코어(pSt=4)에서 yo[i] = yo0 + yo1을 계산하여 A-bank에 기록.

### 3.4 pSt(Pipeline Stage) 규칙

| pSt | 연산 | Z-코드 | 적용 대상 |
|-----|------|--------|----------|
| (빈칸) | - | - | 비할당 빈 코어, Generic 함수의 모든 코어 |
| 0 | - | - | FIR 함수의 할당된 non-MAC 코어 (i, cst, cond 등) |
| 1 | Shift/Input | ADD(000) | var_core의 shift 연산 (동적 부여) / A-bank 입력 읽기 |
| 2 | Multiply | SMT(208) | 부호 곱셈 (Y = 계수) |
| 3 | Store/Acc | ADD(200)/ADD(000) | 결과 복사 / 다중 소스 합산 |
| 4 | Final | ADD(7000) | A-bank 기록 (최종 출력) |

> **var_core pSt 동적 결정**: reg_map(Init)에서 var_core는 pSt가 없다. Op의 `_pass_mac_pipeline()`에서 shift 연산 여부를 확인하여 shift가 있으면 pSt=1을 동적으로 부여한다. shift 없는 MAC 패턴에서는 var_core에 pSt가 없다.

---

## Section 4: 조건문 처리 정책

### 4.1 for/if 구조적 판별 (이름 무관)

루프 조건과 if-break 조건의 구분은 **변수 이름이 아닌 자기참조 증분 패턴**으로 판별한다:

```python
# 루프 카운터 판별: lhs가 rhs에도 등장하면 루프
# m = m + 1 → 자기참조 → 루프 카운터 → 조건 반전 O
# cur = p0 + p1 → 자기참조 아님 → 일반 조건 → 조건 반전 X
```

**구현 위치**:
- `_pass_cond()`: `assign_expand`에서 자기참조 패턴 확인
- `_augment_regs_from_gimple()`: `loop_counter_vars` 집합 사전 구축

### 4.2 조건 누락 방지

- `_pass_cond()`는 MAC/Generic 모두에서 **항상** 실행된다.
- MAC 함수라도 조건문(for 루프 탈출, if-break)은 반드시 처리해야 한다.

### 4.3 비연산 조건 필터 (skip_cond_indices)

- 후속 BB에 의미 있는 산술이 없는 조건문은 `skip_cond_indices`에 등록.
- 해당 조건의 `cond_res`는 할당하지 않는다.
- 판별 기준: `_is_noncompute_cond(bb, stmt)`

| 케이스 | 판정 | 이유 |
|---|---|---|
| `for(i<32){a=b+c;}` | NOT skipped | 산술(b+c) 존재 |
| `for(i<15){printf();}` | Skipped | 함수 호출만, 산술 없음 |
| `i = i + 1` | 무시 | 카운터 증분 (자기참조) |
| `_1 = i * 4` | 무시 | GCC 포인터 산술 (SSA temp + GimpleCall BB) |

---

## Section B: 조건문 인코딩 정책

### B1. SSA 제외

- `ssa_#` 이름의 변수는 레지스터/코어 할당 대상에서 제외.

### B2. 단항 상수는 Init LXY로만 처리

- 합산(ADD/Cond)에 사용되지 않는 상수는 Init의 LXY로만 로드.
- Op에서 별도 코어를 할당하지 않음.

### B3. 조건 opcode 정책

- **LTZ, LEZ 직접 사용 금지**: GEZ, GTZ + SUM_NEG(마이너스 치환)로 변환.
- 루프 조건은 반전: `i < 50` → `i >= 50` (GEZ)
- GCC 정규화 대응: `i <= 49` → 반전 → `i > 49` → `i >= 50` (RHS+1)

### B4. cond_res 초기값

- `cond_res` 코어의 초기값은 **고정 4 (outLoop)**.
- Op에서 소스 레지스터의 Init 값을 합산하여 res 값 계산.

---

## Section 5: Z/Y 인코딩 정책

### 5.1 Z-Word (16비트) 패킹

- 하위 16비트에만 패킹하여 32비트 hex로 기록.
- `_z32_word()`: `z16` → `0x0000XXXX`

### 5.2 Y-Word ADD 마스크

```
bit_index = 16 + (source_core - destination_core)
```

- ADD-path 제약: source는 destination ±16 범위 내.
- 이 제약이 FIR 누적기의 분할 이유.

### 5.3 Z-코드 매핑

| 연산 | Z-코드 | 설명 |
|------|--------|------|
| ADD | 00 | 덧셈 (self-ADD 포함) |
| GTZ | 02 | Greater Than Zero |
| GEZ | 06 | Greater or Equal Zero |
| SMT | 08 | Signed Multiply |
| LXY | 1F | Load X from Y |

### 5.4 Z-Word 비트 필드

| 비트 | 필드 | 설명 |
|------|------|------|
| [4:0] | C_TYPE | 연산 코드 |
| [7] | Y_LEFT_XD | 왼쪽 코어의 XD를 Y 입력으로 |
| [9] | XX_LEFT_XD | 왼쪽 코어의 XD를 XX 입력으로 |
| [11] | BRGPC_HOLD | 분기 GPC 보류 |
| [12] | A_BANK_RD | A-bank 읽기 |
| [13] | A_BANK_WR | A-bank 쓰기 |
| [15:14] | A_ADDR | A-bank 주소 모드 |

---

## Section 6: 출력/주석 정책

### 6.1 MIF 주석 형식

```
주소 : hex값; -- .레지스터  C코드주석  pSt  regSet  cmd  val  GPC=번호
```

### 6.2 keep 주석 덮어쓰기 금지

- `_pass_keep()`에서 self-ADD 적용 시 `"c"` 키를 포함하지 않는다.
- Init에서 설정한 주석(예: `curT=-100`)이 Op에서도 유지된다.
- 이후 Pass 2~4에서 실제 연산이 할당되면 주석이 갱신됨.

### 6.3 GPC 헤더

- 각 GPC 시작 시 헤더 주석을 MIF에 삽입.
- `is_fir_pipeline`일 때만 pSt 칼럼 헤더 포함.

---

## Section C: Op 4-Pass 실행 순서

**순서 변경 금지. 반드시 아래 순서로 실행:**

```
Pass 1: _pass_keep()            — 항상 실행
Pass 2: _pass_mac_pipeline()    — is_fir_pipeline일 때만
Pass 3: _pass_generic_assign()  — 항상 실행 (MAC managed 코어 스킵)
Pass 4: _pass_cond()            — 항상 실행
```

- Pass 1이 모든 코어의 기본 상태(self-ADD)를 설정.
- Pass 2~4가 필요한 코어만 덮어쓴다.
- 마지막에 `_add_line()`으로 MIF 버퍼에 기록.

---

## Section D: MAC 활성 조건

- `_pass_mac_pipeline()`은 `self.features.get("is_fir_pipeline")` 확인 후 실행.
- `_build_mac_layout()`도 `is_fir_pipeline`일 때만 호출.
- `is_mac`만 True인 경우 generic 경로로 처리 (향후 별도 Pass 추가 가능).

---

## Section v3: 추가 정책 (v3 이후)

### v3-1. 비연산 조건문 스킵

- `_is_noncompute_cond()`으로 판별.
- skip된 조건은 `cond_res` 코어 미할당, `_pass_cond()`에서도 건너뜀.

### v3-2. 마이너스 치환 (- → + 이항)

- EOPPP에 SUB 명령이 없으므로 뺄셈을 덧셈으로 변환.
- 조건 RHS를 Init에서 음수로 저장, Op에서 ADD(+)로 이항.
- 예: `cur > 100` → Init에 `curT = -100` 저장, Op에서 `cur + (-100) > 0`

### v3-3. cond_res Op 값 계산

- `_pass_cond()`에서 소스 레지스터의 Init 값(val)을 합산하여 res 표시.
- 예: i(0) + cst_1(1) + cst_-50(-50) = -49

---

## Section v4: 이름 독립적 MAC 감지

### v4-1. 계수 판별 5단계

```
1. const_assigns: 상수 대입 수집
2. reassigned_vars: 루프 내 재대입 변수 제외
3. true_consts = const_assigns - reassigned_vars
4. 곱셈에서 true_consts 피연산자 → coeff_vars 승격
5. MAC 판정:
   strict: output_arrays > 0 AND coeff_vars >= 5 AND coeff_mult >= 5
   relaxed: output_arrays > 0 AND true_consts >= 5 AND (has_mult OR input_arrays > 0)
```

### v4-2. 3-strategy 계수 해석 (_resolve_const)

```
Strategy 1: 변수 이름이 true_consts에 있음 → 계수
Strategy 2: 직접 IntegerCst (GCC 상수 전파) → true_consts에서 매칭 시도
Strategy 3: SsaName의 def_stmt이 상수 대입 → 원본 변수명 복원
```

### v4-3. 루프 카운터 구조적 판별

```python
# 변수 이름('i')이 아닌 자기참조 증분 패턴으로 판별
# m = m + 1 → lhs "m"이 rhs에도 등장 → 루프 카운터
loop_counter_vars = set()
for stmt in bb.gimple:
    if lhs_name == op1_name or lhs_name == op2_name:
        loop_counter_vars.add(lhs_name)
```

---

## 정책 요약 테이블

| 정책 | 내용 | Section |
|------|------|---------|
| GPC 고정 | 함수당 항상 2개 (짝수=Init, 홀수=Op) | A1 |
| top-level 분기 금지 | generate()에서 MAC/Generic if-else 금지 | A2 |
| SSA 제외 | `ssa_#`는 코어 할당 대상에서 제외 | B1, 2.4 |
| 상수 할당 | 합산에 실제 쓰이는 상수만 `cst_#` 할당 | 2.2 |
| MAC 계수 | 코어 미할당, SMT Y-immediate로 전달 | 2.3 |
| Feature Flag 분리 | `is_mac`(곱셈)과 `is_fir_pipeline`(FIR)을 분리 | 3.1 |
| cond_res 초기값 | 4 (outLoop) | B4 |
| 조건 반전 | 자기참조 증분 패턴으로 구조적 판별, 이름 무관 | 4.1 |
| 마이너스 치환 | SUB 없음 → Init에서 음수 저장, Op에서 ADD(+) | v3-2 |
| 비연산 필터 | printf 전용 루프 조건은 cond_res 미할당 | v3-1 |
| 4-Pass 순서 | keep → MAC → generic → cond (순서 변경 금지) | C |
| LTZ/LEZ 금지 | GEZ/GTZ + SUM_NEG로 대체 | B3 |
| keep 주석 보존 | Op에서 `"c"` 키 미포함으로 Init 주석 유지 | 6.2 |

---

## 변경 이력

| 날짜 | 버전 | 내용 |
|------|------|------|
| 2025-03 | v1 | 초기 정책 문서 작성 |
| 2025-03 | v3 | 비연산 조건 필터, 마이너스 치환, cond_res 계산 추가 |
| 2025-03 | v4 | 이름 독립적 MAC 감지, 3-strategy 계수 해석 |
| 2025-03 | v5 | is_mac/is_fir_pipeline 분리, 루프 카운터 구조적 판별 |