# EOPPP eFlow 컴파일러 세션 요약 (2026-05-29)

## 프로젝트 컨텍스트
- EOPPP MIMD 128코어 하드웨어용 eFlow 코드생성기
- HPCL 석사과정, gcc-python-plugin 기반 C→MIF 컴파일러
- 저널: IEEE TPDS (IEEEtran 2-column 포맷), Overleaf에서 파일 분리 편집
- 이전 transcripts: /mnt/transcripts/ 참조

## 최종 평가 결과

### Golden Reference: 2,048/2,048 = 100% (FPGA 검증 완료)
### Boundary: 39/39 = 100%
### RTPG (기능별 무작위): 10,000개
- PASS: 3,593 (35.9%)
- REJECTED: 6,407 (64.1%)
- CRASH: 0
- False acceptance: 0건 (태그 오류 425개는 생성기 태깅 버그, 실제 코드에 미지원 기능 없음)

### Csmith 퍼징: 10,000개
- PASS: 495 (5.0%)
- REJECTED: 9,505 (95.0%)
- CRASH: 0
- False acceptance: 0건
- 거부 분포:
  - pre:goto: 3,532 (37.2%)
  - checker:TypeChecker: 5,668 (59.6%)
  - checker:OpcodeChecker: 236 (2.5%)
  - checker:ConflictChecker: 67 (0.7%)
  - checker:StructureChecker: 2 (<0.1%)
  - pre:Variable count: 1 (<0.1%)

## 논문 섹션 상태

### Section 1 (Introduction) — 한글 수정 진행 중
- 1.1 배경 및 중요성: 완료
- 1.2 관련 연구 및 한계: 수정 완료 (한계 2개로 축소)
  - ① 사전 검증 메커니즘 미기술
  - ② LLVM 기반 → GCC 환경 제한
  - (③ 검증 방법론 — 삭제, 근거 부족)
- 1.3 연구 목표 및 제안: 수정 중 (시스템 구성 + 한계 해결 통합)
  - 마지막 작업: (1)번 항목 문장 다듬는 중
  - 두 가지 후보:
    A. "이 코드 생성기는 GCC의 GIMPLE SSA에서 직접 동작하므로..."
    B. "GCC의 GIMPLE SSA에서 직접 동작하여... 코드 생성기. 별도의..."
- 1.4 주요 기여점: 수치 업데이트 완료 (RTPG 10K + Csmith 10K)
- 1.5 논문 구성: 완료

### Section 4-6 변경사항 — 6곳 수정 필요
- 4.1: pre-checker 3단계 흐름 + all-or-nothing 추가
- 4.2: "two stages" → "three stages"
- 5.1: pre-checker 2개 검사 추가
- 5.2.3: goto 두 단계 + nested loop DFS 감지
- 5.3.1: OpcodeChecker exprcode 문자열 매칭
- 6.4: self-routing + all-or-nothing
- 파일: /mnt/user-data/outputs/sections_4_5_6_changes_ko.md (한글)
- 파일: /mnt/user-data/outputs/sections_4_5_6_changes_en.md (영어)
- 파일: /mnt/user-data/outputs/sections_4_5_6_changes.tex (LaTeX)

### Section 8 (Evaluation) — 수치 업데이트 필요
- 기존 파일: /mnt/user-data/outputs/08_evaluation_discussion.tex
- 수치 변경: RTPG 100→10,000 / Csmith 520→495
- 거부 분포 테이블 추가 필요

### Section 9 (Related Work) — 완료
- 파일: /mnt/user-data/outputs/09_related_work.tex

### Section 10 (Conclusion) — 수치 업데이트 필요
- 파일: /mnt/user-data/outputs/10_conclusions.tex

### References — 16개 (General 3개 제거)
- 파일: /mnt/user-data/outputs/references.bib

## PPT Figure (흑백, 수정 가능)
- /mnt/user-data/outputs/eoppp_paper_figures.pptx — 5슬라이드 (Fig 1-5)
- /mnt/user-data/outputs/figure3_pipeline.pptx — 수정된 Figure 3 (작은 박스)

## PPT Table (흑백, 수정 가능)
- /mnt/user-data/outputs/paper_final_tables.pptx — 최종 4슬라이드
  - Table I(a): Z[4:0] 연산 타입 (12행, Y-bank 역할 포함)
  - Table I(b): Z[15:5] 제어비트 (한 줄씩, on 상태만)
  - Table II: 평가 통합 요약 (Golden/Boundary/RTPG/Csmith)
  - Table III: Csmith 거부 사유 분포 (모듈별, 실제 데이터)

## Overleaf 구조
```
00_main.tex (preamble, abstract, \input)
01_introduction.tex ← 수정 중
02_background.tex (기존)
03_problem_formulation.tex (기존)
04_compiler_architecture.tex (수정 2곳)
05_pre_generation_constraint.tex (수정 4곳)
06_code_generation.tex (수정 2곳)
07_case_studies.tex (기존)
08_evaluation_discussion.tex (수치 업데이트 필요)
09_related_work.tex (완료)
10_conclusions.tex (수치 업데이트 필요)
references.bib (완료)
figures/ (PNG/PDF 업로드)
```

## TODO (다음 세션)
- [ ] 1.3 (1)번 항목 문장 확정
- [ ] 1.3 전체 한글 확정 → 영어 → LaTeX
- [ ] Section 8 수치 업데이트 (RTPG 10K, Csmith 495)
- [ ] Section 10 수치 업데이트
- [ ] Table II/III 논문 LaTeX 삽입
- [ ] Figure PPT → PNG → Overleaf figures/ 업로드
- [ ] 00_main.tex bibliography 교체 (\bibliographystyle{IEEEtran}\bibliography{references})
- [ ] Csmith 495개 PASS 검증 (grep FAIL)
- [ ] RTPG false acceptance 425개 → 태깅 버그 확인 완료 (실제 0건)
