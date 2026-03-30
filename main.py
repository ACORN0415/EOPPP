import os
import sys
import gcc

# ── 경로 설정 ──
current_dir = os.path.dirname(os.path.abspath(__file__))
gcc_eoppp_dir = os.path.join(current_dir, "gcc_eoppp")
log_dir = os.path.join(current_dir, "eflow_out")

if gcc_eoppp_dir not in sys.path:
    sys.path.append(gcc_eoppp_dir)

from checker import EOPPPChecker
from generator import EFlowGenerator


# =========================================================================
# 로그 파일 유틸리티
# =========================================================================
class LogWriter:
    """3개 로그 파일 관리: gimple_ir.log, checker.log, generator.log"""

    def __init__(self, log_dir):
        os.makedirs(log_dir, exist_ok=True)
        self.gimple_path = os.path.join(log_dir, "gimple_ir.log")
        self.checker_path = os.path.join(log_dir, "checker.log")
        self.generator_path = os.path.join(log_dir, "generator.log")
        # 시작 시 초기화
        for p in [self.gimple_path, self.checker_path, self.generator_path]:
            with open(p, "w", encoding="utf-8") as f:
                f.write("")

    def _write(self, path, text):
        with open(path, "a", encoding="utf-8") as f:
            f.write(text + "\n")

    # ── Log 1: GIMPLE SSA IR 덤프 ──
    def dump_gimple(self, fun):
        name = fun.decl.name
        self._write(self.gimple_path, "=" * 70)
        self._write(self.gimple_path, f"Function: {name}  (GIMPLE SSA)")
        self._write(self.gimple_path, "=" * 70)

        if not getattr(fun, "cfg", None):
            self._write(self.gimple_path, "  (no CFG)")
            return

        for bb in fun.cfg.basic_blocks:
            self._write(self.gimple_path, f"\n  BB {bb.index}:")

            # ── PHI 노드 출력 (SSA 핵심) ──
            try:
                phi_nodes = getattr(bb, "phi_nodes", None)
                if phi_nodes:
                    for phi in phi_nodes:
                        try:
                            self._write(self.gimple_path,
                                         f"    # {phi}")
                        except Exception:
                            self._write(self.gimple_path,
                                         f"    # PHI (unprintable)")
            except Exception:
                pass

            # ── GIMPLE 문장 출력 ──
            if not bb.gimple:
                self._write(self.gimple_path, "    (empty)")
                continue
            for stmt in bb.gimple:
                try:
                    self._write(self.gimple_path, f"    {stmt}")
                except Exception:
                    self._write(self.gimple_path,
                                 f"    ({type(stmt).__name__})")

        self._write(self.gimple_path, "")

    # ── Log 2: Checker 결과 ──
    def log_checker(self, fun_name, passed, errors):
        self._write(self.checker_path, "=" * 70)
        self._write(self.checker_path, f"Function: {fun_name}")
        if passed:
            self._write(self.checker_path, "  Result: PASS")
        else:
            self._write(self.checker_path,
                         f"  Result: FAIL ({len(errors)} violation(s))")
            for err in errors:
                self._write(self.checker_path, f"    - {err}")
        self._write(self.checker_path, "")

    # ── Log 3: Generator 결과 ──
    def log_generator(self, fun_name, features, reg_map, init_gpc, op_gpc):
        self._write(self.generator_path, "=" * 70)
        self._write(self.generator_path, f"Function: {fun_name}")
        self._write(self.generator_path,
                     f"  GPC Pair: {init_gpc} (init), {op_gpc} (op)")

        # Features
        is_mac = features.get("is_mac", False)
        has_mac = features.get("has_mac", False)
        has_shift = features.get("has_shift", False)
        self._write(self.generator_path, f"  is_mac: {is_mac}")
        self._write(self.generator_path, f"  has_mac: {has_mac}")
        self._write(self.generator_path, f"  has_shift: {has_shift}")

        coeff_vars = features.get("coeff_vars", {})
        if coeff_vars:
            self._write(self.generator_path,
                         f"  coeff_vars ({len(coeff_vars)}):")
            for k, v in sorted(coeff_vars.items()):
                self._write(self.generator_path, f"    {k} = {v}")

        out_arr = features.get("output_arrays", set())
        in_arr = features.get("input_arrays", set())
        if out_arr:
            self._write(self.generator_path,
                         f"  output_arrays: {sorted(out_arr)}")
        if in_arr:
            self._write(self.generator_path,
                         f"  input_arrays: {sorted(in_arr)}")

        skip = features.get("skip_cond_indices", set())
        cond_count = features.get("cond_count", 0)
        if skip:
            self._write(self.generator_path,
                         f"  skip_cond_indices: {sorted(skip)} / "
                         f"{cond_count} total")

        # Register map
        self._write(self.generator_path,
                     f"  reg_map ({len(reg_map)} entries):")
        for key in sorted(reg_map.keys()):
            info = reg_map[key]
            pst = info.get("pst", "")
            pst_str = f"  pSt={pst}" if pst else ""
            self._write(self.generator_path,
                         f"    r{info['idx']:<4} {key:<20} "
                         f"type={info['type']:<6} "
                         f"val={info.get('val',0)}{pst_str}")
        self._write(self.generator_path, "")


# =========================================================================
# GCC Plugin 메인 클래스
# =========================================================================
class EOPPPExtension(gcc.GimplePass):
    def __init__(self):
        super(EOPPPExtension, self).__init__(name='eoppp-main')
        self.checker = EOPPPChecker()
        out_dir = os.path.join(current_dir, "eflow_out")
        self.generator = EFlowGenerator(output_dir=out_dir)
        self.log = LogWriter(out_dir)
        self.gpc_counter = 0
        self.processed_functions = set()

    def execute(self, fun):
        if fun.decl.name == 'main':
            self._process_main_body(fun)
            self.generator.write_all()

    def _process_main_body(self, fun):
        """main() 함수의 호출 순서대로 대상 함수를 처리한다.

        main()의 basic block을 순회하면서 GimpleCall을 발견한 순서대로
        각 함수를 _process_target_function()에 전달한다.
        이 순서가 MIF 파일에서의 GPC 배치 순서가 된다.

        예: main()에서 checkclkfibo() → checkclkfir() 순으로 호출하면
            GPC 0,1 = checkclkfibo (Init, Op)
            GPC 2,3 = checkclkfir  (Init, Op)
        """
        ignored_funcs = [
            'printf', '__printf_chk', 'clock', 'time', 'fprintf'
        ]
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleCall) and stmt.fndecl:
                    name = stmt.fndecl.name
                    if (name not in ignored_funcs
                            and name not in self.processed_functions):
                        target_fun = getattr(stmt.fndecl, 'function', None)
                        if target_fun:
                            self._process_target_function(target_fun)

    def _process_target_function(self, fun):
        name = fun.decl.name
        self.processed_functions.add(name)

        # ── Log 1: GIMPLE IR 덤프 ──
        self.log.dump_gimple(fun)

        # ── Log 2: Checker 검증 (print 억제) ──
        all_errors = []
        for c in self.checker.checkers.values():
            c.errors = []

        self.checker.checkers['struct'].check(fun)
        self.checker.checkers['var'].check(fun)
        self.checker.checkers['ctrl'].check(fun)
        self.checker.checkers['conflict'].check(fun)

        if fun.cfg:
            for bb in fun.cfg.basic_blocks:
                for stmt in bb.gimple:
                    self.checker.checkers['op'].check(stmt)
                    self.checker.checkers['type'].check(stmt)
                    self.checker.checkers['mem'].check(stmt)

        for c in self.checker.checkers.values():
            all_errors.extend(c.errors)

        passed = len(all_errors) == 0
        self.log.log_checker(name, passed, all_errors)

        if not passed:
            return

        # ── Generator 실행 ──
        # generate()에 base_gpc만 전달, 내부에서 Init/Op GPC를 할당
        # 향후 GPC 3개 이상으로 확장 시에도 main.py 수정 불필요
        base_gpc = self.gpc_counter
        used = self.generator.generate(fun, base_gpc)
        self.gpc_counter += used

        # ── Log 3: Generator 결과 ──
        init_gpc = base_gpc
        op_gpc = base_gpc + 1
        reg_map = getattr(self.generator, '_last_reg_map', {})
        self.log.log_generator(
            name, self.generator.features, reg_map, init_gpc, op_gpc
        )


ps = EOPPPExtension()
ps.register_after('ssa')
