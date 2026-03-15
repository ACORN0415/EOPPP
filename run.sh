#!/bin/bash
# EOPPP eFLOW Compiler 실행 스크립트
# 위치: EOPPP/run.sh
# 사용법: ./run.sh [소스파일]
#   예: ./run.sh eoppp_test.c
#       ./run.sh eoppp_test2.c

export PYTHONIOENCODING=utf-8
export PYTHONPATH=$PYTHONPATH:./gcc_eoppp

# 소스 파일: 인자가 없으면 기본값
SRC=${1:-eoppp_test.c}
SRC_PATH="./gcc_eoppp/${SRC}"

if [ ! -f "$SRC_PATH" ]; then
    echo "[Error] ${SRC_PATH} not found"
    exit 1
fi

echo "=== EOPPP eFLOW Compiler ==="
echo "Source: ${SRC}"
echo ""

# 출력 디렉토리 생성 + 이전 결과 정리
mkdir -p ./eflow_out
rm -f ./eflow_out/total_program_z.mif ./eflow_out/total_program_y.mif

# GCC 실행 (stderr는 에러 로그로)
gcc -fplugin=./gcc-python-plugin/python.so \
    -fplugin-arg-python-script=./main.py \
    -O1 \
    "${SRC_PATH}" -c -o /dev/null 2>./eflow_out/error.log

# 결과 확인
if [ -f "./eflow_out/total_program_z.mif" ]; then
    echo "[Success] MIF files generated"
    echo ""
    echo "Output:"
    echo "  eflow_out/total_program_z.mif"
    echo "  eflow_out/total_program_y.mif"
    echo ""
    echo "Log files:"
    echo "  eflow_out/gimple_ir.log    - GIMPLE SSA IR dump (PHI nodes + SSA versions)"
    echo "  eflow_out/checker.log      - Checker 검증 결과 (PASS/FAIL)"
    echo "  eflow_out/generator.log    - Generator 처리 결과 (features, reg_map)"
else
    echo "[Error] MIF generation failed."
    echo ""
    echo "Check error log:"
    echo "  eflow_out/error.log"
    echo ""
    # 에러 내용 표시
    if [ -f "./eflow_out/error.log" ] && [ -s "./eflow_out/error.log" ]; then
        tail -20 ./eflow_out/error.log
    fi
fi