import os
import sys
import gcc
from checker import EOPPPChecker
from generator import EFlowGenerator

current_dir = os.path.dirname(os.path.abspath(__file__))
if current_dir not in sys.path:
    sys.path.append(current_dir)

class EOPPPExtension(gcc.GimplePass):
    def __init__(self):
        super(EOPPPExtension, self).__init__(name='eoppp-main')
        self.checker = EOPPPChecker()
        # [수정 4 관련] Generator 인스턴스 하나로 계속 사용
        self.generator = EFlowGenerator(output_dir="eflow_out")
        self.gpc_counter = 0
        self.processed_functions = set()

    def execute(self, fun):
        if fun.decl.name == 'main':
            print(f"\n{'='*60}\n [Main Entry] Analyzing Call Sequence in 'main'\n{'='*60}")
            
            # 1. Main 내부 함수 순차 처리
            self._process_main_body(fun)
            
            # 2. [수정 4] 모든 분석이 끝나면 단일 파일로 저장
            print(f"\n >> [Finalize] Saving all GPCs to single MIF file...")
            self.generator.write_all()

    def _process_main_body(self, fun):
        ignored_funcs = ['printf', '__printf_chk', 'clock', 'time', 'fprintf']
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleCall) and stmt.fndecl:
                    name = stmt.fndecl.name
                    if name not in ignored_funcs and name not in self.processed_functions:
                        target_fun = getattr(stmt.fndecl, 'function', None)
                        if target_fun:
                            self._process_target_function(target_fun)

    def _process_target_function(self, fun):
        name = fun.decl.name
        self.processed_functions.add(name)
        print(f"\n >> [Target] '{name}'")
        
        if self.checker.validate(fun):
            init_gpc = self.gpc_counter
            op_gpc = self.gpc_counter + 1
            print(f"    -> Validated. GPC Pair: {init_gpc}, {op_gpc}")
            
            # Generator 호출 (버퍼에 추가)
            used = self.generator.generate(fun, init_gpc, op_gpc)
            self.gpc_counter += used

ps = EOPPPExtension()
ps.register_after('ssa')
# import os
# import sys
# import gcc

# # 1. 경로 설정 및 checker.py 임포트
# current_dir = os.path.dirname(os.path.abspath(__file__))
# if current_dir not in sys.path:
#     sys.path.append(current_dir)

# from checker import EOPPPChecker

# # 로그 파일 경로 설정
# LOG_FILE_PATH = os.path.join(current_dir, "eoppp_analysis_log.txt")

# def log_to_file(message):
#     """화면과 파일에 동시에 출력하는 헬퍼 함수"""
#     print(message)  # 터미널 출력
#     with open(LOG_FILE_PATH, "a", encoding="utf-8") as f:
#         f.write(str(message) + "\n")

# class EOPPPExtension(gcc.GimplePass):
#     def __init__(self):
#         super(EOPPPExtension, self).__init__(name='eoppp-checker')
#         self.checker = EOPPPChecker()
#         self.mode = "Library"
#         self.target_functions = set()
#         self._initialized = False
        
#         # 분석 시작 시 기존 로그 파일이 있다면 삭제 (새로운 분석 시작)
#         if os.path.exists(LOG_FILE_PATH):
#             os.remove(LOG_FILE_PATH)

#     def _determine_strategy(self):
#         nodes = gcc.get_callgraph_nodes()
#         main_node = next((n for n in nodes if n.decl.name == 'main'), None)

#         if main_node:
#             self.mode = "MainEntry"
#             self._trace_reachable(main_node)
#             log_to_file(f"\n[Strategy] 'main' detected. Entry-point mode activated.")
#             log_to_file(f"[Strategy] Target reachable functions: {list(self.target_functions)}")
#         else:
#             self.mode = "Library"
#             log_to_file(f"\n[Strategy] No 'main' detected. Library mode: Analyzing all functions.")

#     def _trace_reachable(self, node):
#         """main에서 호출되는 함수를 추적하되, 시스템 함수는 제외"""
#         func_name = node.decl.name
        
#         # 분석에서 완전히 제외할 함수 목록
#         ignored_system_funcs = ['printf', '__printf_chk', 'fprintf', 'clock', 'time']
        
#         if func_name not in self.target_functions and func_name not in ignored_system_funcs:
#             self.target_functions.add(func_name)
#             for edge in node.callees:
#                 if edge.callee:
#                     self._trace_reachable(edge.callee)

#     def execute(self, fun):
#         if not self._initialized:
#             self._determine_strategy()
#             self._initialized = True

#         func_name = fun.decl.name
#         if self.mode == "MainEntry" and func_name not in self.target_functions:
#             return

#         # 표준 출력을 파일로 복제 (터미널 + 파일)
#         original_stdout = sys.stdout
#         with open(LOG_FILE_PATH, "a", encoding="utf-8") as f:
#             class Tee(object):
#                 def __init__(self, *files): self.files = files
#                 def write(self, obj):
#                     for f in self.files: f.write(obj)
#                 def flush(self):
#                     for f in self.files: f.flush()

#             # 실행 동안만 stdout을 Tee 객체로 대체
#             sys.stdout = Tee(sys.stdout, f)
#             try:
#                 # 여기에 기존 execute 로직 수행
#                 print(f"\n" + "="*60)
#                 print(f"  [{self.mode} Mode] Analyzing: {func_name}")
#                 print("="*60)
                
#                 self.checker.validate(fun)
                
#                 print("="*60 + "\n")
#             finally:
#                 sys.stdout = original_stdout # 복구

# # 4. 플러그인 등록
# ps = EOPPPExtension()
# ps.register_after('ssa')

# print(">>> EOPPP Checker Plugin with Call-Graph Filter Loaded <<<")