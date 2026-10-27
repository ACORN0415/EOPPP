# EOPPP Checker Evaluation Package

## 구조
```
evaluation/
  golden_compare.py     ← Golden Reference MIF 비교
  checker_eval.py       ← RTPG + Boundary 프로그램 생성
  run_eval.sh           ← Checker 실행 스크립트
  eval_programs/
    rtpg/               ← 랜덤 100개 (사전 분류 없음)
      manifest.csv      ← feature 태깅
    boundary/           ← 경계값 39개 (예상 결과 있음)
      manifest.csv      ← expected pass/reject
```

## 방법론

### 1. RTPG (Random Test Program Generation)
- Egger et al., "Verification of Coarse-Grained Reconfigurable Arrays through Random Test Programs," LCTES 2018.
- 14개 feature를 독립 확률로 ON/OFF하여 랜덤 C 프로그램 생성
- 사전 분류하지 않음 → Checker에 돌려서 결과 수집 후 분석

### 2. Boundary Value Analysis
- Myers et al., "The Art of Software Testing," 3rd Ed., Wiley, 2011.
- 각 제약(C1, C3, C4)의 경계에서 pass/reject 쌍 생성
- C1: 변수 수 126(pass) vs 127(reject)
- C3: 연산/타입/메모리 지원 경계
- C4: 제어흐름/구조 지원 경계

## 실행

### Step 1: 경로 수정
`run_eval.sh` 상단:
```bash
GCC_CMD="gcc"
PLUGIN_SCRIPT="../generator.py"   # 실제 경로
```

### Step 2: 실행
```bash
cd EOPPP/evaluation/
bash run_eval.sh
```

### Step 3: 결과 확인
- `eval_programs/rtpg_results.csv`: RTPG 판정 결과
- `eval_programs/boundary_results.csv`: Boundary 정확도
- `eval_programs/summary.txt`: 전체 요약

### Golden Reference (별도)
```bash
python3 golden_compare.py --golden golden_z.mif --generated compiler_z.mif
python3 golden_compare.py --golden golden_y.mif --generated compiler_y.mif
```

### 프로그램 재생성 (옵션)
```bash
python3 checker_eval.py --rtpg 200 --seed 123 --outdir eval_programs/
```
