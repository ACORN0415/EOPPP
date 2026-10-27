#!/bin/bash
# ============================================================
# EOPPP Checker Evaluation Runner
#
# 실행 전 수정 필요:
#   GCC_CMD, PLUGIN_SCRIPT 경로
#
# 사용법:
#   cd EOPPP/evaluation/
#   bash run_eval.sh
# ============================================================

GCC_CMD="gcc"
PLUGIN_SO="../gcc-python-plugin/python.so"
PLUGIN_SCRIPT="../main.py"
GCC_ARGS="-fplugin=${PLUGIN_SO} -fplugin-arg-python-script=${PLUGIN_SCRIPT} -O0 -c"
OUTDIR="eval_programs"
MIF_DIR="../eflow_out"
PRECHECKER="python3 ../gcc_eoppp/prechecker.py"

RTPG_DIR="${OUTDIR}/rtpg"
BND_DIR="${OUTDIR}/boundary"
RTPG_RESULTS="${OUTDIR}/rtpg_results.csv"
BND_RESULTS="${OUTDIR}/boundary_results.csv"
SUMMARY="${OUTDIR}/summary.txt"

run_checker() {
    local FILE=$1

    # 1단계: PreChecker (C 소스 레벨 검사)
    $PRECHECKER "$FILE" > /dev/null 2>&1
    if [ $? -ne 0 ]; then
        echo "REJECTED"
        return
    fi

    # 2단계: GCC Checker (GIMPLE SSA 레벨 검사)
    rm -f ${MIF_DIR}/total_program_y.mif ${MIF_DIR}/total_program_z.mif 2>/dev/null
    $GCC_CMD $GCC_ARGS "$FILE" -o /dev/null 2>/dev/null

    # MIF 파일 생성 여부로 판별
    if [ -f "${MIF_DIR}/total_program_y.mif" ] || [ -f "${MIF_DIR}/total_program_z.mif" ]; then
        echo "PASS"
    else
        echo "REJECTED"
    fi
}

echo "============================================================"
echo " EOPPP Checker Evaluation"
echo "============================================================"
echo ""

# ============================================================
# [1] RTPG: 사전 분류 없이 실행, 결과 수집
#     Egger et al., LCTES 2018
# ============================================================
echo "--- [1] RTPG (Random Test Program Generation) ---"
echo "filename,result,features" > "$RTPG_RESULTS"

RTPG_TOTAL=0
RTPG_PASS=0
RTPG_REJECT=0

for f in ${RTPG_DIR}/*.c; do
    [ -f "$f" ] || continue
    fname=$(basename "$f")
    RTPG_TOTAL=$((RTPG_TOTAL + 1))

    RESULT=$(run_checker "$f")

    # manifest에서 features 읽기
    FEATURES=$(grep "^${fname}," "${RTPG_DIR}/manifest.csv" 2>/dev/null | cut -d',' -f3)

    if [ "$RESULT" = "PASS" ]; then
        RTPG_PASS=$((RTPG_PASS + 1))
    else
        RTPG_REJECT=$((RTPG_REJECT + 1))
    fi

    echo "  [$RESULT] $fname  ($FEATURES)"
    echo "${fname},${RESULT},${FEATURES}" >> "$RTPG_RESULTS"
done

echo ""
echo "  RTPG Summary: $RTPG_TOTAL total"
echo "    Accepted: $RTPG_PASS"
echo "    Rejected: $RTPG_REJECT"
echo ""

# ============================================================
# [2] Boundary: 예상 결과와 비교
#     Myers et al., 2011
# ============================================================
echo "--- [2] Boundary Value Analysis ---"
echo "filename,expected,actual,match,constraint,description" > "$BND_RESULTS"

BND_TOTAL=0
BND_CORRECT=0
BND_WRONG=0

tail -n +2 "${BND_DIR}/manifest.csv" | while IFS=',' read -r FNAME EXPECTED CONSTRAINT DESC; do
    FPATH="${BND_DIR}/${FNAME}"
    [ -f "$FPATH" ] || continue

    RESULT=$(run_checker "$FPATH")

    if [ "$RESULT" = "PASS" ] && [ "$EXPECTED" = "pass" ]; then
        MATCH="OK"
    elif [ "$RESULT" = "REJECTED" ] && [ "$EXPECTED" = "reject" ]; then
        MATCH="OK"
    else
        MATCH="WRONG"
    fi

    MARKER="  "
    [ "$MATCH" = "WRONG" ] && MARKER=">>"
    echo "${MARKER}[$MATCH] $FNAME -> $RESULT (expected: $EXPECTED)"
    echo "${FNAME},${EXPECTED},${RESULT},${MATCH},${CONSTRAINT},${DESC}" >> "$BND_RESULTS"
done

# Boundary 집계
BND_TOTAL=$(tail -n +2 "$BND_RESULTS" | wc -l)
BND_CORRECT=$(grep ",OK," "$BND_RESULTS" | wc -l)
BND_WRONG=$(grep ",WRONG," "$BND_RESULTS" | wc -l)

echo ""
echo "  Boundary Summary: $BND_TOTAL total"
echo "    Correct: $BND_CORRECT"
echo "    Wrong:   $BND_WRONG"
if [ "$BND_TOTAL" -gt 0 ]; then
    echo "    Accuracy: $(( BND_CORRECT * 100 / BND_TOTAL ))%"
fi

# Constraint별 집계
echo ""
echo "  Per-Constraint:"
for C in C1 C3 C4; do
    C_TOTAL=$(grep ",$C," "$BND_RESULTS" | wc -l)
    C_OK=$(grep ",$C," "$BND_RESULTS" | grep ",OK," | wc -l)
    [ "$C_TOTAL" -gt 0 ] && echo "    $C: $C_OK / $C_TOTAL ($(( C_OK * 100 / C_TOTAL ))%)"
done

# 오답 목록
if [ "$BND_WRONG" -gt 0 ]; then
    echo ""
    echo "  Failures:"
    grep ",WRONG," "$BND_RESULTS" | while IFS=',' read -r F E A M CN D; do
        echo "    $F: got $A, expected $E ($D)"
    done
fi

# ============================================================
# OVERALL SUMMARY
# ============================================================
echo ""
echo "============================================================"
echo " OVERALL SUMMARY"
echo "============================================================"
echo "  RTPG:     $RTPG_TOTAL programs ($RTPG_PASS pass / $RTPG_REJECT reject)"
echo "  Boundary: $BND_TOTAL programs ($BND_CORRECT / $BND_TOTAL correct)"
echo ""
echo "  Results saved:"
echo "    ${RTPG_RESULTS}"
echo "    ${BND_RESULTS}"
echo "============================================================"

# Summary 파일 저장
cat > "$SUMMARY" << EOF
EOPPP Checker Evaluation Summary
=================================
RTPG: $RTPG_TOTAL programs ($RTPG_PASS pass / $RTPG_REJECT reject)
Boundary: $BND_TOTAL programs ($BND_CORRECT / $BND_TOTAL correct)

References:
  [1] Egger et al., "Verification of Coarse-Grained Reconfigurable Arrays
      through Random Test Programs," LCTES 2018.
  [2] Myers et al., "The Art of Software Testing," 3rd Ed., Wiley, 2011.
EOF
echo "  Summary: ${SUMMARY}"