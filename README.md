# EOPPP eFLOW Compiler (v1.0)

GCC Python Plugin 기반 C → EOPPP MIF 컴파일러

---

## 개요

EOPPP(Every One Period Parallel Processor)는 128코어 정적 MIMD 공간형 프로세서로, 모든 코어가 단일 GPC(Group Program Counter)에 동기되어 매 클록 각자의 명령을 실행한다. 이 컴파일러는 C 함수를 EOPPP의 Z/Y-bank MIF 파일로 변환한다.

v1.0의 원칙은 **"생성한 MIF가 C 의미를 그대로 재현할 때만 받는다"**이다. 하드웨어 제약을 넘는 프로그램은 체커가, 하드웨어에는 맞지만 생성기가 올바르게 번역할 수 없는 프로그램은 생성 단계가 거부하며, 거부된 함수가 하나라도 있으면 MIF를 만들지 않는다.

### 핵심 특징

- **GCC GIMPLE SSA 기반**: GCC 프런트엔드를 재사용하고 SSA 패스 직후 플러그인으로 동작
- **2단계 제약 검사**: 소스 레벨 프리체커(goto, 변수 선언 수) + GIMPLE 레벨 체커 7개 모듈
- **생성 단계 충실성 검사**: 실행 영역 분석, 반복 내 의존 검사, 루프 조건 형태 검사, mesh 윈도우·코어 용량 검사
- **깊이 가변 MAC 환원 트리**: FIR 탭 수에 맞춰 누적 단을 자동으로 늘리고, 최소 깊이 배치를 동적계획법으로 탐색
- **정량 지표 리포트**: 코어 사용률, mesh 배치 성공률, 정적 사이클 상한, C/eFlow 줄 수, 단계별 시간

---

## 프로젝트 구조

```
EOPPP/
├── main.py                    # GCC 플러그인 진입점 (main()이 호출하는 함수 단위로 처리)
├── run.sh                     # 실행 스크립트
├── gcc-python-plugin/         # GCC Python Plugin (python.so 빌드 필요)
├── gcc_eoppp/
│   ├── prechecker.py          # 1단계: 소스 레벨 검사
│   ├── checker.py             # 2단계: GIMPLE 레벨 검사 7개 모듈 + natural loop 분석
│   ├── generator.py           # 코드 생성기 (EFlowGenerator)
│   ├── eoppp_zcode.py         # Z/Y 코드 인코딩 (연산비트·제어비트·Y-마스크)
│   ├── eoppp_test.c           # 검증 벤치마크: Fibonacci, 30-tap FIR
│   └── eoppp_kernels.c        # DSP 커널: FIR 8/16-tap, 누적합, 차분, 4-샘플 이동합
├── evaluation/
│   ├── rerun_eval.py          # 저장된 평가 프로그램을 현재 컴파일러로 재실행·비교 (병렬)
│   ├── rtpg_label_v1.py       # RTPG v1.0 지원 범위 라벨러 (소스 텍스트 기반)
│   ├── golden_compare.py      # 골든 MIF 비트 단위 비교
│   ├── eval_programs/boundary # 경계값 테스트 39개 (BOUNDARY_CHANGES_v1.0.md 참고)
│   ├── rtpg_eval/programs     # RTPG 10,000개 (manifest.csv, manifest_v1.csv)
│   └── csmith_eval/programs   # Csmith 10,000개
└── eflow_out/                 # 실행 결과 (MIF + 로그)
```

---

## 실행

```bash
cd EOPPP
./run.sh                     # gcc_eoppp/eoppp_test.c
./run.sh eoppp_kernels.c     # 다른 소스 (gcc_eoppp/ 아래)
```

`run.sh`는 `gcc -fplugin=./gcc-python-plugin/python.so -fplugin-arg-python-script=./main.py -O0 ...`를 실행한다. 컴파일은 **`-O0`**로 한다(GIMPLE에 소스 구조가 그대로 남아야 한다). 환경변수 `EOPPP_OUT_DIR`로 출력 폴더를 바꿀 수 있다(평가 스크립트의 병렬 실행용).

### 출력 (`eflow_out/`)

| 파일 | 내용 |
|---|---|
| `total_program_z.mif` | Z-bank: 코어별 16비트 명령 (연산 [4:0] + 제어비트) |
| `total_program_y.mif` | Y-bank: 합산 모드는 Y-마스크, 비합산 모드는 즉시값 |
| `gimple_ir.log` | 함수별 GIMPLE SSA 덤프 (PHI 포함) |
| `checker.log` | 함수별 PASS/FAIL과 위반 사유 (체커 + 생성 단계) |
| `generator.log` | feature, 레지스터 맵, 반환값 위치 |
| `metrics.log` | 정량 지표 (아래 참고) |

---

## 컴파일 파이프라인

```
C 소스
  │  1단계 프리체커 (소스): goto, 선언 변수 수 (사용자 변수 126 + 루프 카운터 1)
  ▼
GCC 프런트엔드 → GIMPLE → SSA            ← register_after('ssa')
  │  2단계 체커 (GIMPLE): Structure, Variable, Control, Conflict, Opcode, Type(+반환 타입), Memory
  ▼
생성기
  ├ 실행 영역 분석   루프 이전 = 상수 접기 → 초기값 / 루프 몸체 = 매핑 / 루프 이후 = 효과 없을 때만 무시
  ├ 의미 이름 복원 · 특징 추출 · 레지스터(코어) 할당
  │   └ MAC(FIR) 패턴: 깊이 가변 환원 트리 배치 (최소 깊이 DP)
  ├ 충실성 검사       반복 내 의존, 루프 조건 형태, 배열 스트림, 반환값 위치
  ├ 코어 연산 결정    합산(ADD/분기) · 비합산(SMT/LSH/SRSH) · A-bank 스트림
  ├ Z/Y 인코딩 → mesh 윈도우 검증
  └ GPC 배치 → MIF   (함수당 GPC 2개: 초기화 + 연산)
```

### 실행 모델과 번역 규칙

- 연산 슬롯은 **매 사이클 반복**되고, 모든 코어는 **이전 사이클 값**을 읽는다. 조건 코어는 루프 **종료 분기**(BRGPC_HOLD)다.
- **루프 이전 코드**는 C에서 한 번만 실행되므로 매핑하지 않고, 컴파일 시점에 실행(if 분기·PHI 포함)해 **초기값으로 접는다**. 접을 수 없으면 거부한다.
- **루프 몸체**: SSA로 피연산자가 *이전 반복 값*(PHI, 루프 밖 정의)인지 *이번 반복 값*인지 구분한다. 이번 반복 값은 같은 사이클에 다시 계산할 수 있을 때만 허용한다.
  - `+` 연쇄는 다입력 ADD로 평탄화 (`t = a + b; c = t + c` → `c = a + b + c`). 같은 소스가 두 번 들어가면 거부(Y-마스크는 소스당 1비트).
  - 한 반복에 여러 번 대입된 변수는 마지막 값만 코어에 둔다 (루프를 도는 변수는 헤더 PHI의 back-edge 인자, 아니면 실행 순서상 마지막 대입).
- **루프 조건**: 참일 때 루프를 나가면(break) 그대로, 거짓일 때 나가면(계속 조건) 반전한다. 헤더 검사(PHI 값 비교)는 몸체와 같은 사이클에 평가되므로 **다음 반복 값**(갱신식)으로 비교하고, 첫 검사에서 바로 나가는 0회 반복은 거부한다. 그 외 조건은 EOPPP에서 종료 사이클에도 몸체 전체가 실행되므로, 조건 뒤 문장이 관찰 가능한 결과(배열 쓰기, 반환 변수)를 바꾸면 거부한다.
- **루프 이후 코드**는 매핑하지 않는다. 메모리 쓰기나 반환 변수 수정이 있으면 거부한다.
- **배열**: A-bank 순차 스트림으로 매핑한다(읽기 `XD_MEM|A_BANK_RD`, 쓰기 `A_BANK_RD|A_BANK_WR`, 주소 자동 증가). 인덱스는 0부터 1씩 증가하는 루프 카운터여야 하고, 같은 배열을 읽고 쓰면 거부한다.
- **곱셈·시프트**(SMT/LSH/SRSH)는 자기 코어 값에 상수를 적용하는 형태(`v = v * 7`)만 허용한다. FIR 곱셈은 MAC 파이프라인(왼쪽 이웃 참조)으로 처리한다.
- **반환값**: CALL/RETURN은 v2.0이다. 반환값이 어느 코어에 남는지(또는 상수인지) `generator.log`에 기록하고, 어느 코어에도 없으면(SSA 임시값 등) 거부한다.
- **루프 없는 함수**: 모든 계산이 상수로 접히므로 종료 코어(상수 1 > 0, GTZ + HOLD) 하나로 첫 사이클에 빠져나간다.

### MAC(FIR) 환원 트리

store(레벨 0) → 부분합(레벨 1) → … → 루트(`yo[i]`, A-bank 쓰기). 레벨 L 노드의 입력은 모두 레벨 L-1이므로 모든 탭이 같은 단수를 거쳐 도착한다(한 단 = 한 클럭, 샘플 시점 일치). 각 노드의 입력이 mesh 윈도우 `(src−dst) ∈ [−16, +15]` 안에 들도록, 레벨별로 "탭 n개를 덮는 블록의 (왼쪽, 오른쪽) 폭" 파레토 집합을 동적계획법으로 구해 최소 깊이 배치를 고른다.

| 탭 수 | 1–11 | 12–20 | 21–28 | 29–36 |
|---|---|---|---|---|
| 깊이 | 1 | 2 | 3 | 4 |

37탭부터는 126코어 안에 mesh 조건을 만족하는 환원 트리가 없어 거부된다.

---

## 정량 지표 (`metrics.log`)

| 열 | 의미 |
|---|---|
| depth | MAC 환원 트리 단수 |
| cores / util% | 활성 코어 수 / 128 대비 사용률 |
| mesh / maxD | 윈도우 안 Y-마스크 엣지 수 / 최대 코어 거리 |
| C LoC / eFlow | 함수 소스 줄 수 / 생성된 eFlow 줄 수 (활성 코어당 초기화+연산) |
| iters / cycles | 정적 반복 수(break가 있으면 상한) / 연산 사이클 + 초기화 1 (WCET, MAC 출력 지연 제외) |
| chk ms / gen ms | 플러그인 안 체커 / 생성기 시간 |

---

## 평가

```bash
cd evaluation
python3 rerun_eval.py boundary      # 경계값 39개
python3 rtpg_label_v1.py            # RTPG v1.0 라벨 생성 (manifest_v1.csv)
python3 rerun_eval.py rtpg          # RTPG 10,000개
python3 rerun_eval.py csmith        # Csmith 10,000개
```

저장된 같은 프로그램을 현재 컴파일러로 다시 돌려 이전 결과와 1:1로 비교한다. 결과는 `<suite>_rerun.csv`, `<suite>_rerun_summary.txt`. 거부 사유는 체커 모듈(`checker:*`)과 생성 단계(`generator:*`)로 분류한다.

v1.0 결과:

| 스위트 | 통과 / 거부 | 라벨 대비 정확도 | false acceptance | crash |
|---|---|---|---|---|
| 경계값 39 | 18 / 21 | 39/39 | 0 | 0 |
| RTPG 10,000 (v1.0 라벨) | 2,590 / 7,410 | 10,000/10,000 | 0 | 0 |
| Csmith 10,000 | 0 / 10,000 | — | 0 | 0 |

RTPG의 v1.0 라벨(`rtpg_label_v1.py`)은 기능 태그에 두 구조 조건(계산 루프 1개, 루프 뒤 반환 변수 미수정)을 더해 **C 소스 텍스트만으로** 판정한다(컴파일러 판정과 독립). Csmith 프로그램은 모두 전역 변수 읽기·함수 호출이 있는 루프 이전 코드를 가져 접을 수 없으므로 v1.0에서 받지 않는다(크래시 없음, 미지원 기능 수용 없음 확인용).

---

## 지원 범위 요약 (v1.0)

**지원**: 32비트 정수, `+ - * << >>`(곱셈·시프트는 자기 코어 × 상수, 또는 FIR MAC), 비교 `> >= < <= == !=`(루프 종료 조건으로), 함수당 계산 루프 1개(0부터 1씩 증가하는 카운터), 루프 이전 상수 계산과 if, 루프 인덱스 순차 1차원 배열 스트림, break, FIR(최대 36탭)

**v2.0 / 하드웨어 확인 필요**

- 함수 호출·반환값 전달 (CALL/RETURN)
- 부동소수점 (FP32 core cascading)
- 루프 안 if(조건부 선택), 다중·중첩 루프(GPC 슬롯 간 분기)
- 다른 코어 값을 피연산자로 쓰는 곱셈·시프트 (이웃 배치 필요)
- `SUM_NEG` 의미 확인: 뺄셈 `a - b`와 조건 `<`, `<=`가 `ADD/GTEZ/GTZ + SUM_NEG`로 인코딩되지만 하드웨어 동작이 문서화되지 않았고 FPGA 검증된 벤치마크(Fibonacci·FIR)는 이 경로를 쓰지 않는다
- 비트 연산: `eoppp_zcode.py`에 opcode(0x0C–0x0F)가 정의돼 있으나 OpcodeChecker가 거부 (하드웨어 지원 여부 확인 필요)
