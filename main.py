import os
import sys
import time
import gcc

# ── 경로 설정 ──
current_dir = os.path.dirname(os.path.abspath(__file__))
gcc_eoppp_dir = os.path.join(current_dir, "gcc_eoppp")
# EOPPP_OUT_DIR: 출력 폴더 지정 (평가 스크립트의 병렬 실행용). 기본값은 eflow_out
log_dir = os.environ.get("EOPPP_OUT_DIR") or os.path.join(current_dir, "eflow_out")

if gcc_eoppp_dir not in sys.path:
    sys.path.append(gcc_eoppp_dir)
if current_dir not in sys.path:
    sys.path.append(current_dir)

from checker import EOPPPChecker
from generator import EFlowGenerator, GenerationError

# EOPPP_V2: 2.0 일반 경로 사용 방식 (branch 2.0, docs/EOPPP_v2_execution_model.md)
#   auto  (기본) 모든 함수가 1.0을 통과하면 1.0 출력, 아니면 프로그램 전체를 2.0으로
#   off   1.0만
#   force 2.0만
V2_MODE = os.environ.get("EOPPP_V2", "auto")


# =========================================================================
# 로그 파일 유틸리티
# =========================================================================
class LogWriter:
    def __init__(self, log_dir):
        os.makedirs(log_dir, exist_ok=True)
        self.gimple_path = os.path.join(log_dir, "gimple_ir.log")
        self.checker_path = os.path.join(log_dir, "checker.log")
        self.generator_path = os.path.join(log_dir, "generator.log")
        for p in [self.gimple_path, self.checker_path, self.generator_path]:
            with open(p, "w", encoding="utf-8") as f:
                f.write("")

    def _write(self, path, text):
        with open(path, "a", encoding="utf-8") as f:
            f.write(text + "\n")

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
            try:
                phi_nodes = getattr(bb, "phi_nodes", None)
                if phi_nodes:
                    for phi in phi_nodes:
                        try:
                            self._write(self.gimple_path, f"    # {phi}")
                        except Exception:
                            self._write(self.gimple_path,
                                         f"    # PHI (unprintable)")
            except Exception:
                pass
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

    def log_generator(self, fun_name, features, reg_map, init_gpc, op_gpc):
        self._write(self.generator_path, "=" * 70)
        self._write(self.generator_path, f"Function: {fun_name}")
        self._write(self.generator_path,
                     f"  GPC Pair: {init_gpc} (init), {op_gpc} (op)")
        is_mac = features.get("is_mac", False)
        has_mac = features.get("has_mac", False)
        has_shift = features.get("has_shift", False)
        ret = features.get("return_value")
        if ret:
            self._write(self.generator_path,
                         f"  return value: held in {ret} at loop exit "
                         f"(not transferred to caller; CALL/RETURN is v2.0)")
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
IGNORED_FUNCS = [
    'printf', '__printf_chk', 'clock', 'time', 'fprintf'
]


class EOPPPExtension(gcc.GimplePass):
    """
    원래 방식 유지 + all-or-nothing 규칙 추가.

    execute(비main) → 아무것도 안 함 (함수 IR 건드리지 않음)
    execute(main)   →
      1. main() 내 호출 함수 수집 (stmt.fndecl.function)
      2. Phase 1: 전체 checker → 각 함수 PASS/FAIL 로그
      3. 하나라도 FAIL → MIF 생성 안 함
      4. Phase 2: 전체 generator → write_all() → MIF 생성
    """

    def __init__(self):
        super(EOPPPExtension, self).__init__(name='eoppp-main')
        self.checker = EOPPPChecker()
        out_dir = log_dir
        self.generator = EFlowGenerator(output_dir=out_dir)
        self.log = LogWriter(out_dir)
        self.gpc_counter = 0
        self.processed_functions = set()

    def execute(self, fun):
        if fun.decl.name == 'main':
            self._process_main(fun)

    # -----------------------------------------------------------------
    # main() 처리: 원래 방식 + all-or-nothing
    # -----------------------------------------------------------------
    def _process_main(self, main_fun):
        if not getattr(main_fun, 'cfg', None):
            return

        # main() 이 부르는 함수들 (호출 순서)
        targets = []
        for bb in main_fun.cfg.basic_blocks:
            if not bb.gimple:
                continue
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleCall) and stmt.fndecl:
                    fname = stmt.fndecl.name
                    target_fun = getattr(stmt.fndecl, 'function', None)
                    if (fname not in IGNORED_FUNCS and target_fun
                            and fname not in [t.decl.name for t in targets]):
                        targets.append(target_fun)

        all_passed = V2_MODE != "force"
        if V2_MODE != "force":
            for target_fun in targets:
                if not self._process_target_function(target_fun):
                    all_passed = False

        if all_passed:
            self.generator.write_all()
        elif V2_MODE != "off":
            self._process_v2(targets)

    # -----------------------------------------------------------------
    # 2.0 일반 경로: GIMPLE → IR → 인라이닝 → 스트림 검사 → 백엔드 (all-or-nothing)
    # -----------------------------------------------------------------
    def _process_v2(self, targets):
        import json
        from v2.backend import V2Error
        from v2.lower import lower_with_callees
        from v2.inline import inline_all
        from v2.streams import check_streams, reuse_loads
        from v2.program import compile_program

        v2_log = os.path.join(log_dir, "v2.log")
        lines, functions, ok = [], [], True
        for fun in targets:
            name = fun.decl.name
            t0 = time.perf_counter()
            try:
                ir, library = lower_with_callees(fun, IGNORED_FUNCS)
                ir = reuse_loads(inline_all(ir, library))
                check_streams(ir)
                functions.append(ir)
                lines.append(f"[v2] {name}: lowered ({len(ir['blocks'])} blocks, "
                             f"{1000.0 * (time.perf_counter() - t0):.1f} ms)")
            except V2Error as e:
                ok = False
                lines.append(f"[v2] {name}: FAIL {e}")
                self.log.log_checker(name, False, [f"v2: {e}"])
        if ok:
            try:
                t0 = time.perf_counter()
                sym = compile_program(functions, log_dir)
                ms = 1000.0 * (time.perf_counter() - t0)
                for f in sym["functions"]:
                    lines.append(f"[v2] {f['name']}: GPC {f['gpc_start']}-{f['gpc_end']} "
                                 f"({f['rows']} rows), {f['cores_used']} cores, "
                                 f"unverified ops {f['unverified_ops']}")
                lines.append(f"[v2] program: {sym['n_rows']} GPC rows, halt at GPC "
                             f"{sym['halt_gpc']}, backend {ms:.1f} ms")
            except V2Error as e:
                ok = False
                lines.append(f"[v2] backend FAIL {e}")
                self.log.log_checker("(v2 backend)", False, [f"v2: {e}"])
        with open(v2_log, "w", encoding="utf-8") as f:
            f.write("\n".join(lines) + "\n")
            f.write("\n# IR (after inlining)\n")
            for ir in functions:
                f.write(json.dumps(ir) + "\n")

    def _process_target_function(self, fun):
        name = fun.decl.name
        self.processed_functions.add(name)

        # checker
        self.log.dump_gimple(fun)
        t0 = time.perf_counter()
        passed, errors = self._run_checker(fun)
        checker_ms = 1000.0 * (time.perf_counter() - t0)
        self.log.log_checker(name, passed, errors)

        if not passed:
            return False

        # generator
        base_gpc = self.gpc_counter
        t0 = time.perf_counter()
        try:
            used = self.generator.generate(fun, base_gpc)
            rep = self.generator.func_reports[-1]
            rep["checker_ms"] = checker_ms
            rep["gen_ms"] = 1000.0 * (time.perf_counter() - t0)
            try:
                rep["c_loc"] = fun.end.line - fun.start.line + 1
            except Exception:
                rep["c_loc"] = None
        except GenerationError as e:
            # 체커는 통과했지만 올바른 MIF를 만들 수 없음 → 함수 거부 (MIF 미생성)
            self.log.log_checker(name, False, [f"Generation failed: {e}"])
            return False
        self.gpc_counter += used

        reg_map = getattr(self.generator, '_last_reg_map', {})
        self.log.log_generator(
            name, self.generator.features, reg_map,
            base_gpc, base_gpc + 1
        )
        return True

    # -----------------------------------------------------------------
    # Checker 실행
    # -----------------------------------------------------------------
    def _run_checker(self, fun):
        all_errors = self.checker.run(fun)
        return len(all_errors) == 0, all_errors


# =========================================================================
# 플러그인 등록
# =========================================================================
ps = EOPPPExtension()
ps.register_after('ssa')