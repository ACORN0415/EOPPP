import os
import sys
import argparse

# 'src' 폴더를 파이썬 경로에 추가하여 모듈을 임포트할 수 있게 함
# (폴더 구조에 맞게 경로를 설정합니다)
# sys.path.append(os.path.join(os.path.dirname(__file__), 'src'))

# 각 단계별 클래스 임포트
from src.c_parse_json import CParser
from src.gimpleToJson import GimpleParser
from src.makeEflow import MIFGenerator

def main():
    # 1. 커맨드 라인 인자 설정
    parser = argparse.ArgumentParser(description="C 코드를 EOPPP 아키텍처용 .mif 파일로 변환합니다.")
    parser.add_argument("input_file", help="변환할 C 소스 파일 경로 (예: examples/test.c)")
    parser.add_argument("-o", "--output", help="최종 저장될 MIF 파일 경로 (기본값: output/입력파일명.mif)")
    parser.add_argument("--debug", action="store_true", help="디버그 모드를 활성화하고 중간 파일을 유지합니다.")
    args = parser.parse_args()

    # 2. 경로 자동 설정 및 생성
    input_c_file = args.input_file
    
    # 출력 MIF 파일 경로 설정
    if args.output:
        output_mif_path = args.output
    else:
        # 자동으로 'output' 폴더에 '[입력파일명].mif'로 생성
        base_name = os.path.splitext(os.path.basename(input_c_file))[0]
        output_mif_path = os.path.join("output", f"{base_name}.mif")

    # 중간 파일들을 저장할 'build' 폴더 설정
    build_dir = "build"
    os.makedirs(build_dir, exist_ok=True)
    os.makedirs(os.path.dirname(output_mif_path), exist_ok=True)

    # 중간 파일 경로 정의
    c_json_path = os.path.join(build_dir, "parsed_.json")
    gimple_json_path = os.path.join(build_dir, "matched_gimple.json")

    # 3. 변환 파이프라인 실행
    try:
        print(f"🚀 변환 시작: {input_c_file}")

        # 1단계: C -> JSON
        print("\n[1/3] C 코드 파싱 중...")
        c_parser = CParser(input_c_file)
        c_parser.save_to_json(c_json_path)
        print(f"✅ C 파싱 완료 -> {c_json_path}")

        # 2단계: GIMPLE -> JSON
        print("\n[2/3] GIMPLE 매칭 중...")
        gim_parser = GimpleParser(input_c_file, c_json_path)
        gim_parser.save_to_json(gimple_json_path)
        print(f"✅ GIMPLE 매칭 완료 -> {gimple_json_path}")

        # 3단계: JSON -> MIF
        print("\n[3/3] eFlow MIF 파일 생성 중...")
        eflow_parser = MIFGenerator(gimple_json_path, c_json_path, output_mif_path, args.debug)
        eflow_parser.run()
        print(f"✅ MIF 생성 완료 -> {output_mif_path}")

    except FileNotFoundError as e:
        print(f"\n❌ 파일 오류: {e.filename} 파일을 찾을 수 없습니다.")
        sys.exit(1)
    except Exception as e:
        print(f"\n❌ 변환 중 오류 발생: {e}")
        sys.exit(1)

    print("\n🎉 모든 작업이 성공적으로 완료되었습니다!")

if __name__ == "__main__":
    main()