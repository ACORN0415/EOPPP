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
├── generator.py          # 핵심 컴파일러 (EFlowGenerator 클래스)
├── main.py               # GCC 플러그인 진입점 (함수별 GPC 할당)
├── eoppp_test.c           # 테스트용 C 소스 (Fibonacci, FFT, FIR)
├── eoppp_eflow_generator_policy.md  # 개발 기록 & 코드 정책 문서
└── eflow_out/             # 생성 결과물
    ├── total_program_z.mif   # Z-Bank (명령어)
    └── total_program_y.mif   # Y-Bank (데이터/마스크)
```

---

## 실행 방법

### 필수 요구사항

- GCC (gcc-python-plugin 설치)
- Python 3.x

### 컴파일 및 실행

```bash
# GCC Python Plugin으로 eFLOW 생성
gcc -fplugin=python \
    -fplugin-arg-python-script=main.py \
    -O0 \
    eoppp_test.c -o /dev/null
```

> **주의**: 반드시 `-O0`으로 컴파일해야 한다. `-O1` 이상에서는 GCC가 곱셈을 시프트-덧셈으로 변환하여 GIMPLE 구조가 달라질 수 있다.

### 출력 파일

- `eflow_out/total_program_z.mif` — Z-Bank: 코어별 명령어 (16비트, 32비트 hex로 패킹)
- `eflow_out/total_program_y.mif` — Y-Bank: 데이터/ADD 마스크/계수값

---

## 아키텍처

### 컴파일 파이프라인

```
C 소스 → GCC Frontend → GIMPLE IR → [Plugin Intercept]
                                          │
                                  EFlowGenerator.generate()
                                          │
                    ┌─────────────────────┼─────────────────────┐
                    ▼                     ▼                     ▼
              Step 1-2:             Step 3:               Step 4-5:
              IR 분석               레지스터 맵            MIF 생성
                    │                     │                     │
                    ▼                     ▼                     ▼
               features              reg_map            Z.mif + Y.mif
```

### 함수당 2-GPC 구조

모든 C 함수는 복잡성에 관계없이 정확히 2개 GPC를 사용한다:

| GPC | 역할 | Z-코드 | 설명 |
|-----|------|--------|------|
| 짝수 (Init) | 초기값 로드 | `0x01F` (LXY) | Y-bank 값을 X-bank로 전송 |
| 홀수 (Op) | 연산 실행 | ADD/SMT/GEZ/GTZ 등 | 4-Pass 파이프라인 |

### Op GPC: 4-Pass 파이프라인

```
Pass 1: _pass_keep()           → 활성 코어 값 유지 (항상)
Pass 2: _pass_mac_pipeline()   → MAC 파이프라인 (is_mac일 때만)
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

### 2. 시프트 체인 역추적 (`_build_mac_layout`)

곱셈의 비계수 피연산자로부터 def_stmt를 역추적하여 데이터 지연선을 구성한다:

```
xv19 ← xv18 ← ... ← xv1 ← xv0 ← xn[i]
```

> **중요**: `_get_base_var_name()` (원본 선언명)을 사용해야 한다. `_get_clean_name()` (SSA semantic)을 사용하면 `xv0`이 `xn[i]`로 이름 변경되어 자기참조 체인 `xn[i] → xn[i]`이 생성된다.

### 3. 3-Core 그룹 레이아웃

각 MAC 탭은 역순으로 3코어 그룹에 배치된다:

```
[shift(pSt=1)] [mult(pSt=2)] [store(pSt=3)]  ← tap 19
[shift(pSt=1)] [mult(pSt=2)] [store(pSt=3)]  ← tap 18
...
[accumulator(pSt=3)]                          ← yo0 (6탭 합산)
[shift(pSt=1)] [mult(pSt=2)] [store(pSt=3)]  ← tap 13
...
[accumulator(pSt=3)]                          ← yo1 (14탭 합산)
[final(pSt=4)]                                ← yo[i] = yo0 + yo1
[input(pSt=1)]                                ← xn[i] (A-bank read)
```

**제약**: 누적기의 소스 코어는 ADD모드 Y-mask의 ±16 범위 내에 있어야 한다. 20탭 FIR은 [6, 14] 분할로 이를 충족한다.

### 4. 조건문 처리 (`_pass_cond`)

- 루프 조건(lhs가 `i`) 반전: `i < 32` → `i >= 32` (탈출 시 분기)
- GCC 정규화 대응: `i <= 31` → 반전하면 `i > 31` → `i >= 32`로 정규화 (RHS+1)
- 마이너스 치환: 뺄셈 미지원 → Init에서 음수 저장, Op에서 ADD(+)로 이항
- **res 값**: 소스 레지스터의 Init 값을 대입하여 계산한 결과 표시

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
| 0 | (해당 없음) | - | MAC이 아닌 할당 코어 (i, cst, cond 등) |
| 1 | Shift | ADD(000) | 데이터 레지스터 전달 / 입력 읽기 |
| 2 | Multiply | SMT(208) | 부호 곱셈 (Y = 계수) |
| 3 | Store/Acc | ADD(200)/ADD(000) | 결과 복사 / 다중 소스 합산 |
| 4 | Final | ADD(7000) | A-bank 기록 (최종 출력) |

> 비할당 빈 코어는 pSt 칼럼이 빈칸이다.

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
| pSt 할당 | 1/2/3/3/4/1 | 1/2/3/3/4/1 | ✓ |
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
| `_analyze_ir(fun)` | IR 분석 → feature 플래그 (is_mac, coeff_vars 등) |
| `_build_register_map(fun)` | 통합 레지스터 맵 생성 (MAC + Generic) |
| `_build_mac_layout(fun, reg_map)` | MAC 3-코어 그룹 + 분할 누적기 배치 |
| `_augment_regs_from_gimple(...)` | 변수/상수/cond_res 코어 할당 |
| `_is_noncompute_cond(bb, stmt)` | 비연산 조건문 판별 |

### 코드 생성 단계

| 함수 | 설명 |
|------|------|
| `_generate_init_block(reg_map, init_gpc)` | Init GPC: LXY로 초기값 로드 |
| `_generate_op_block(fun, reg_map, init_state, op_gpc)` | Op GPC: 4-Pass 파이프라인 실행 |
| `_pass_keep(st)` | Pass 1: 활성 코어 self-ADD 유지 |
| `_pass_mac_pipeline(fun, st, reg_map)` | Pass 2: MAC 파이프라인 MIF 생성 |
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

## 주요 정책 요약

| 정책 | 내용 |
|------|------|
| GPC 고정 | 함수당 항상 2개 (짝수=Init, 홀수=Op) |
| SSA 제외 | `ssa_#`는 코어 할당 대상에서 제외 |
| 상수 할당 | 합산(ADD/Cond)에 실제 쓰이는 상수만 `cst_#` 할당 |
| MAC 계수 | 코어 미할당, SMT Y-immediate로 전달 |
| cond_res 초기값 | 4 (outLoop) |
| cond_res Op 값 | 소스 레지스터 Init 값 합산 결과 |
| 조건 반전 | lhs가 `i`이면 탈출 조건으로 반전 |
| 마이너스 치환 | RHS를 Init에서 음수 저장, Op에서 ADD(+) |
| 비연산 필터 | printf 전용 루프 조건은 cond_res 미할당 |
| keep 주석 | Op에서 init 주석 덮어쓰기 금지 |

---

## 제한 사항

### 지원

- 스칼라 산술 (+, -, *)
- 배열 접근 (읽기/쓰기)
- `for`/`if` 제어 흐름
- 정수 상수
- MAC 패턴 (FIR 유사)
- `-O0` 컴파일

### 미지원

- 함수 호출 (printf 감지 제외)
- 포인터 연산
- 구조체/공용체
- 부동소수점 산술
- 동적 메모리 할당
- `-O1` 이상 (부분적 완화 검출 지원)

---

## 향후 계획

1. 고정소수점 변환을 통한 부동소수점 지원
2. GPC 간 통신을 통한 다중 함수 프로그램
3. GCC 최적화 변환 자동 검출 (-O1 이상 대응)
4. EOPPP ASIC 전환 대응 (256코어 확장)
5. 자동 분할 최적화 (탭 수에 따른 accumulator 분할)
6. 루프 변환 지원 (행렬 연산 최적화)
