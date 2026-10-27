#!/bin/bash
# ============================================================
# EOPPP RTPG Evaluation (Feature-Tagged Random Programs) — v2
#
# 변경 사항:
#   - checker.log 의 키워드 패턴으로 모듈 분류 (run_csmith_eval.sh 와 동일 방식)
#     기존: 단순히 클래스명만 grep -> 항상 unknown
#   - GCC 컴파일 에러를 CRASH 로 분류 (체커 실패와 구분)
#   - PreChecker 의 'pre:other' 카테고리 추가
#
# Usage:
#   bash run_rtpg_eval.sh [num_programs]
# ============================================================

N_PROGRAMS=${1:-10000}
OUTDIR="rtpg_eval"
RTPG_DIR="${OUTDIR}/programs"

GCC_CMD="gcc"
PLUGIN_SO="../gcc-python-plugin/python.so"
PLUGIN_SCRIPT="../main.py"
GCC_ARGS="-fplugin=${PLUGIN_SO} -fplugin-arg-python-script=${PLUGIN_SCRIPT} -O0 -c"
MIF_DIR="../eflow_out"
PRECHECKER="python3 ../gcc_eoppp/prechecker.py"

mkdir -p "$OUTDIR"
mkdir -p "${OUTDIR}/reject_logs"
mkdir -p "${OUTDIR}/crash_logs"

# ── 1. 프로그램 생성 ──
echo "============================================================"
echo " RTPG: Generating ${N_PROGRAMS} feature-tagged programs..."
echo "============================================================"

python3 gen_rtpg.py "$N_PROGRAMS" "$RTPG_DIR"

if [ ! -f "${RTPG_DIR}/manifest.csv" ]; then
    echo "ERROR: manifest.csv not found"
    exit 1
fi

# ── 2. 실행 ──
RESULTS="${OUTDIR}/rtpg_results.csv"
echo "filename,expected,actual,match,features,reject_module" > "$RESULTS"

echo ""
echo "============================================================"
echo " RTPG: Running checker on ${N_PROGRAMS} programs..."
echo "============================================================"

TOTAL=0

tail -n +2 "${RTPG_DIR}/manifest.csv" | while IFS=',' read -r FNAME EXPECTED FEATURES; do
    FPATH="${RTPG_DIR}/${FNAME}"
    [ -f "$FPATH" ] || continue
    TOTAL=$((TOTAL + 1))

    REJECT_MODULE=""
    ACTUAL=""

    # ── Stage 1: Pre-checker ──
    PRE_OUT=$($PRECHECKER "$FPATH" 2>&1)
    PRE_EXIT=$?

    if [ $PRE_EXIT -ne 0 ]; then
        ACTUAL="REJECTED"
        # Pre-checker 모듈 분류 (run_csmith_eval.sh 와 동일 패턴)
        if echo "$PRE_OUT" | grep -qi "goto"; then
            REJECT_MODULE="pre:goto"
        elif echo "$PRE_OUT" | grep -qi "variable\|declaration\|count"; then
            REJECT_MODULE="pre:varcount"
        else
            REJECT_MODULE="pre:other"
        fi
        echo "$PRE_OUT" > "${OUTDIR}/reject_logs/REJECT_${FNAME%.c}_precheck.log"
    else
        # ── Stage 2: GCC Plugin Checker ──
        rm -f ${MIF_DIR}/total_program_y.mif ${MIF_DIR}/total_program_z.mif 2>/dev/null
        rm -f ${MIF_DIR}/checker.log 2>/dev/null

        COMPILE_ERR=$($GCC_CMD $GCC_ARGS "$FPATH" -o /dev/null 2>&1)
        COMPILE_EXIT=$?

        # GCC 자체가 컴파일 실패한 경우 (체커 실행 안 됨)
        # checker.log 가 안 만들어졌는데 GCC error 메시지가 있으면 컴파일 에러
        if [ ! -f "${MIF_DIR}/checker.log" ] && \
           [ $COMPILE_EXIT -ne 0 ] && \
           echo "$COMPILE_ERR" | grep -qi "error:"; then
            ACTUAL="CRASH"
            REJECT_MODULE="gcc:compile_error"
            echo "$COMPILE_ERR" > "${OUTDIR}/crash_logs/CRASH_${FNAME%.c}.log"
        elif [ -f "${MIF_DIR}/total_program_y.mif" ]; then
            ACTUAL="PASS"
        else
            ACTUAL="REJECTED"
            # Checker 모듈 분류: checker.log 키워드 매칭 (run_csmith_eval.sh 패턴)
            REJECT_MODULE="checker:unknown"
            if [ -f "${MIF_DIR}/checker.log" ]; then
                CLOG=$(cat "${MIF_DIR}/checker.log")
                if echo "$CLOG" | grep -qi "Unsupported.*type\|float\|double\|pointer.*type"; then
                    REJECT_MODULE="checker:TypeChecker"
                elif echo "$CLOG" | grep -qi "Unsupported.*operation\|exprcode\|no Z-code mapping"; then
                    REJECT_MODULE="checker:OpcodeChecker"
                elif echo "$CLOG" | grep -qi "indirect.*access\|indirect.*array\|memory access\|double.*index\|array.*chain"; then
                    REJECT_MODULE="checker:MemoryChecker"
                elif echo "$CLOG" | grep -qi "variable.*count\|exceed.*core"; then
                    REJECT_MODULE="checker:VariableChecker"
                elif echo "$CLOG" | grep -qi "nested.*loop\|switch\|goto detected"; then
                    REJECT_MODULE="checker:ControlChecker"
                elif echo "$CLOG" | grep -qi "Call depth\|recursion\|recursive"; then
                    REJECT_MODULE="checker:StructureChecker"
                elif echo "$CLOG" | grep -qi "Write conflict\|conflict.*global"; then
                    REJECT_MODULE="checker:ConflictChecker"
                fi
                cp "${MIF_DIR}/checker.log" \
                   "${OUTDIR}/reject_logs/REJECT_${FNAME%.c}_checker.log"
            fi
        fi
    fi

    # ── Match 판정 ──
    if [ "$ACTUAL" = "PASS" ] && [ "$EXPECTED" = "pass" ]; then
        MATCH="OK"
    elif [ "$ACTUAL" = "REJECTED" ] && [ "$EXPECTED" = "reject" ]; then
        MATCH="OK"
    elif [ "$ACTUAL" = "CRASH" ]; then
        MATCH="CRASH"
    else
        MATCH="WRONG"
    fi

    echo "${FNAME},${EXPECTED},${ACTUAL},${MATCH},${FEATURES},${REJECT_MODULE}" >> "$RESULTS"

    # 진행률
    if [ $((TOTAL % 1000)) -eq 0 ]; then
        echo "  ... ${TOTAL}/${N_PROGRAMS} processed"
    fi
done

# ── 3. 결과 집계 ──
TOTAL_FINAL=$(tail -n +2 "$RESULTS" | wc -l)
PASS_FINAL=$(awk -F',' 'NR>1 && $3=="PASS"' "$RESULTS" | wc -l)
REJECT_FINAL=$(awk -F',' 'NR>1 && $3=="REJECTED"' "$RESULTS" | wc -l)
CRASH_FINAL=$(awk -F',' 'NR>1 && $3=="CRASH"' "$RESULTS" | wc -l)
OK_FINAL=$(awk -F',' 'NR>1 && $4=="OK"' "$RESULTS" | wc -l)
WRONG_FINAL=$(awk -F',' 'NR>1 && $4=="WRONG"' "$RESULTS" | wc -l)

echo ""
echo "============================================================"
echo " RTPG EVALUATION RESULTS (${TOTAL_FINAL} programs)"
echo "============================================================"
echo "  PASS:       ${PASS_FINAL}"
echo "  REJECTED:   ${REJECT_FINAL}"
echo "  CRASH:      ${CRASH_FINAL}  (GCC compile errors, checker not reached)"
echo "  ----------"
echo "  Correct:    ${OK_FINAL} / ${TOTAL_FINAL}"
echo "  Wrong:      ${WRONG_FINAL}  (false acceptance/rejection)"
echo ""

echo "  ── Rejection Distribution ──"
echo "  Pre-checker:"
for mod in "pre:goto" "pre:varcount" "pre:other"; do
    cnt=$(awk -F',' -v m="$mod" 'NR>1 && $6==m' "$RESULTS" | wc -l)
    printf "    %-30s %s\n" "$mod" "$cnt"
done
echo "  Checker modules:"
for mod in checker:TypeChecker checker:OpcodeChecker checker:MemoryChecker \
           checker:VariableChecker checker:ControlChecker \
           checker:StructureChecker checker:ConflictChecker checker:unknown; do
    cnt=$(awk -F',' -v m="$mod" 'NR>1 && $6==m' "$RESULTS" | wc -l)
    [ "$cnt" -gt 0 ] && printf "    %-30s %s\n" "$mod" "$cnt"
done
if [ "$CRASH_FINAL" -gt 0 ]; then
    echo "  GCC errors:"
    printf "    %-30s %s\n" "gcc:compile_error" "$CRASH_FINAL"
fi

if [ "$WRONG_FINAL" -gt 0 ]; then
    echo ""
    echo "  ── WRONG samples (up to 10) ──"
    awk -F',' 'NR>1 && $4=="WRONG"' "$RESULTS" | head -10 \
        | while IFS=',' read -r F E A M FT RM; do
            echo "    $F: expected=$E actual=$A features=$FT module=$RM"
        done
fi

echo ""
echo "  Results:  ${RESULTS}"
echo "============================================================"

# Summary
cat > "${OUTDIR}/summary.txt" << EOF
EOPPP RTPG Evaluation Summary (v2)
====================================
Programs:    ${TOTAL_FINAL}
PASS:        ${PASS_FINAL}
REJECTED:    ${REJECT_FINAL}
CRASH:       ${CRASH_FINAL}  (GCC compile error, checker not reached)
Correct:     ${OK_FINAL} / ${TOTAL_FINAL}
Wrong:       ${WRONG_FINAL}
EOF
echo "  Summary:  ${OUTDIR}/summary.txt"