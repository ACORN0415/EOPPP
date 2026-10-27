#!/bin/bash
# ============================================================
# EOPPP Checker Fuzzing Evaluation (Csmith) — Module-Level
# ============================================================

N_PROGRAMS=${1:-10000}
OUTDIR="csmith_eval"

GCC_CMD="gcc"
PLUGIN_SO="../gcc-python-plugin/python.so"
PLUGIN_SCRIPT="../main.py"
GCC_ARGS="-fplugin=${PLUGIN_SO} -fplugin-arg-python-script=${PLUGIN_SCRIPT} -O0 -c"
CSMITH_INCLUDE="-I/usr/include/csmith"
MIF_DIR="../eflow_out"
PRECHECKER="python3 ../gcc_eoppp/prechecker.py"

mkdir -p "${OUTDIR}/programs"
mkdir -p "${OUTDIR}/pass_logs"
mkdir -p "${OUTDIR}/crash_logs"
mkdir -p "${OUTDIR}/reject_logs"

RESULTS="${OUTDIR}/csmith_results.csv"
echo "filename,seed,result,detail" > "$RESULTS"

PASS_COUNT=0
REJECT_COUNT=0
CRASH_COUNT=0
GEN_ERROR=0

echo "============================================================"
echo " EOPPP Checker Fuzzing (Csmith) — Module-Level"
echo " Generating ${N_PROGRAMS} random C programs..."
echo "============================================================"

for i in $(seq -w 0 $((N_PROGRAMS - 1))); do
    FNAME="csmith_${i}.c"
    FPATH="${OUTDIR}/programs/${FNAME}"

    # ── 1. Csmith로 랜덤 C 생성 ──
    SEED=$RANDOM$RANDOM
    csmith --seed ${SEED} \
           --no-checksum --no-argc --no-volatiles \
           --max-funcs 2 --max-block-depth 3 \
           --max-expr-complexity 4 \
           > "$FPATH" 2>/dev/null

    if [ ! -s "$FPATH" ]; then
        echo "${FNAME},${SEED},GEN_ERROR,csmith_failed" >> "$RESULTS"
        GEN_ERROR=$((GEN_ERROR + 1))
        continue
    fi

    # ── 2. PreChecker ──
    PRE_OUTPUT=$($PRECHECKER "$FPATH" 2>&1)
    PRE_EXIT=$?
    if [ $PRE_EXIT -ne 0 ]; then
        REJECT_COUNT=$((REJECT_COUNT + 1))

        # Pre-checker 모듈 분류
        if echo "$PRE_OUTPUT" | grep -qi "goto"; then
            MODULE="pre:goto"
        elif echo "$PRE_OUTPUT" | grep -qi "variable\|declaration\|count"; then
            MODULE="pre:varcount"
        else
            MODULE="pre:other"
        fi

        echo "${FNAME},${SEED},REJECTED,${MODULE}" >> "$RESULTS"
        echo "$PRE_OUTPUT" > "${OUTDIR}/reject_logs/REJECT_${FNAME%.c}_precheck.log"
        continue
    fi

    # ── 3. GCC Checker + Generator ──
    rm -f ${MIF_DIR}/total_program_y.mif ${MIF_DIR}/total_program_z.mif 2>/dev/null
    rm -f ${MIF_DIR}/checker.log ${MIF_DIR}/gimple_ir.log 2>/dev/null

    COMPILE_ERR=$($GCC_CMD $GCC_ARGS $CSMITH_INCLUDE "$FPATH" -o /dev/null 2>&1)
    COMPILE_EXIT=$?

    if [ $COMPILE_EXIT -ne 0 ]; then
        CRASH_COUNT=$((CRASH_COUNT + 1))
        echo "  [CRASH #${CRASH_COUNT}] ${FNAME} (seed=${SEED})"
        echo "${FNAME},${SEED},CRASH,plugin_crash" >> "$RESULTS"
        cp "$FPATH" "${OUTDIR}/crash_logs/CRASH_${FNAME}"
        echo "$COMPILE_ERR" > "${OUTDIR}/crash_logs/CRASH_${FNAME%.c}_error.log"
        continue
    fi

    if [ -f "${MIF_DIR}/total_program_y.mif" ]; then
        PASS_COUNT=$((PASS_COUNT + 1))
        echo "  [PASS #${PASS_COUNT}] ${FNAME} (seed=${SEED})"
        echo "${FNAME},${SEED},PASS," >> "$RESULTS"
        cp "$FPATH" "${OUTDIR}/pass_logs/PASS_${FNAME}"
        cp "${MIF_DIR}/checker.log" "${OUTDIR}/pass_logs/PASS_${FNAME%.c}_checker.log" 2>/dev/null
        cp "${MIF_DIR}/gimple_ir.log" "${OUTDIR}/pass_logs/PASS_${FNAME%.c}_gimple.log" 2>/dev/null
    else
        REJECT_COUNT=$((REJECT_COUNT + 1))

        # Checker 모듈 분류 — checker.log에서 FAIL 사유 추출
        MODULE="checker:unknown"
        if [ -f "${MIF_DIR}/checker.log" ]; then
            CLOG=$(cat "${MIF_DIR}/checker.log")

            if echo "$CLOG" | grep -qi "Unsupported.*type\|TypeChecker\|float\|RealType\|PointerType\|pointer.*type\|type.*not supported"; then
                MODULE="checker:TypeChecker"
            elif echo "$CLOG" | grep -qi "OpcodeChecker\|opcode\|exprcode\|Unsupported.*operation\|unsupported.*op"; then
                MODULE="checker:OpcodeChecker"
            elif echo "$CLOG" | grep -qi "MemoryChecker\|memory\|malloc\|indirect\|ArrayRef"; then
                MODULE="checker:MemoryChecker"
            elif echo "$CLOG" | grep -qi "VariableChecker\|variable.*count\|exceed.*core\|core.*count"; then
                MODULE="checker:VariableChecker"
            elif echo "$CLOG" | grep -qi "ControlChecker\|control\|nested.*loop\|switch\|goto"; then
                MODULE="checker:ControlChecker"
            elif echo "$CLOG" | grep -qi "StructureChecker\|recursion\|call.*depth\|recursive"; then
                MODULE="checker:StructureChecker"
            elif echo "$CLOG" | grep -qi "ConflictChecker\|conflict\|global.*write"; then
                MODULE="checker:ConflictChecker"
            fi

            cp "${MIF_DIR}/checker.log" "${OUTDIR}/reject_logs/REJECT_${FNAME%.c}_checker.log"
        fi

        echo "${FNAME},${SEED},REJECTED,${MODULE}" >> "$RESULTS"
    fi

    # 진행률 (1000개 단위)
    DONE=$((10#$i + 1))
    if [ $((DONE % 1000)) -eq 0 ]; then
        echo "  ... ${DONE}/${N_PROGRAMS} (pass=${PASS_COUNT} reject=${REJECT_COUNT} crash=${CRASH_COUNT})"
    fi
done

# ── 결과 요약 ──
TOTAL=$((PASS_COUNT + REJECT_COUNT + CRASH_COUNT + GEN_ERROR))
echo ""
echo "============================================================"
echo " CSMITH FUZZING RESULTS (Module-Level)"
echo "============================================================"
echo "  Total:      ${TOTAL}"
echo "  PASS:       ${PASS_COUNT}"
echo "  REJECTED:   ${REJECT_COUNT}"
echo "  CRASH:      ${CRASH_COUNT}"
echo "  GEN_ERROR:  ${GEN_ERROR}"
echo ""
echo "  ── Rejection Distribution ──"
echo "  Pre-checker:"
for mod in "pre:goto" "pre:varcount" "pre:other"; do
    cnt=$(grep -c ",${mod}$" "$RESULTS")
    printf "    %-25s %s\n" "$mod" "$cnt"
done
echo "  Checker modules:"
awk -F',' '$3=="REJECTED" && $4 ~ /^checker:/ {print $4}' "$RESULTS" | sort | uniq -c | sort -rn | while read cnt mod; do
    printf "    %-25s %s\n" "$mod" "$cnt"
done
echo ""

if [ $PASS_COUNT -gt 0 ]; then
    echo "  PASS logs:   ${OUTDIR}/pass_logs/"
fi
echo "  REJECT logs: ${OUTDIR}/reject_logs/"
echo "  Results:     ${RESULTS}"
echo "============================================================"

# ── Summary 파일 ──
cat > "${OUTDIR}/summary.txt" << EOF
EOPPP Checker Csmith Fuzzing Summary (Module-Level)
=====================================================
Generator: Csmith 2.3.0 [Yang et al., PLDI 2011]
Total:     ${TOTAL}
PASS:      ${PASS_COUNT}
REJECTED:  ${REJECT_COUNT}
CRASH:     ${CRASH_COUNT}
GEN_ERROR: ${GEN_ERROR}
EOF