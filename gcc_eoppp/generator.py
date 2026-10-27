import gcc
import os
import re
import copy

# ★ v9: Z/Y 코드 자동 매핑 모듈
from eoppp_zcode import (
    ZOp, ZCtrl, decide_ctrl_bits,
    make_z16 as zcode_make_z16,
    add_mask as zcode_add_mask,
    make_y32,
    GIMPLE_TO_OP, COND_TO_OP,
)


class EFlowGenerator:

    def __init__(self, output_dir="eflow_out"):
        self.output_dir = output_dir
        os.makedirs(self.output_dir, exist_ok=True)
        self.mif_depth = 16384
        self.buffer_z = {}
        self.buffer_y = {}
        self.buffer_cmt = {}
        self.ssa_semantic = {}
        self.cond_rhs_names = set()
        self.add_mode_vars = set()
        self.features = {}
        self.gpc_meta = {}
        # v1.0: 함수별 배치/사용률 지표 수집 (저널 리뷰 대응 — 정량 지표)
        self.func_reports = []

    def generate(self, fun, base_gpc):
        init_gpc = base_gpc + 0
        op_gpc   = base_gpc + 1
        gpc_count = 2
        self._build_semantic_names(fun)
        self.features = self._analyze_ir(fun)
        func_name = str(getattr(fun, "decl", "unknown"))
        has_mac = self.features.get("has_mac", False)
        has_shift = self.features.get("has_shift", False)
        label = func_name
        self.gpc_meta[init_gpc] = {"type": "init", "name": label, "has_mac": has_mac, "has_shift": has_shift}
        self.gpc_meta[op_gpc] = {"type": "op", "name": label, "has_mac": has_mac, "has_shift": has_shift}
        self._outloop_gpc = op_gpc + 1
        reg_map = self._build_register_map(fun)
        self._last_reg_map = reg_map
        core_ops = self._decide_core_operations(fun, reg_map)

        # ── Fix 1: 연산 없는 활성 코어 → self-routing (값 보존) ──
        for i in range(126):
            op = core_ops[i]
            if op["is_active"] and not op["sources"]:
                op["sources"] = [i]

        # ── v1.0: mesh ±16 배치 사후 검증 (§5.2 배치 정당성 정량화) ──
        mesh = self._verify_mesh_placement(core_ops)
        core_codes = self._encode_zy_codes(core_ops)
        self._assemble_and_emit_gpcs(core_codes, init_gpc, op_gpc)

        # ── v1.0: 함수별 정량 지표 수집 ──
        cores_used = len(reg_map)
        self.func_reports.append({
            "name": func_name,
            "init_gpc": init_gpc, "op_gpc": op_gpc,
            "is_mac": has_mac,
            "cores_used": cores_used,
            "core_util_pct": 100.0 * cores_used / 128.0,
            "mesh_edges": mesh["edges"],
            "mesh_violations": mesh["violations"],
            "mesh_ok_pct": mesh["ok_pct"],
            "mesh_max_dist": mesh["max_dist"],
            "mesh_detail": mesh["detail"],
            "op_slots": gpc_count,
            # MAC 함수만: 환원 트리 배치 탐색 결과 (True=해 발견, False=불가)와 깊이
            "mac_plan_ok": getattr(self, "_mac_plan_feasible", None) if has_mac else None,
            "mac_depth": getattr(self, "_mac_tree_depth", None) if has_mac else None,
        })
        self._mac_plan_feasible = None
        self._mac_tree_depth = None
        return gpc_count

    # =========================================================================
    # v1.0: mesh ±16 배치 사후 검증
    #   합산(ADD/분기)-모드 코어의 모든 소스가 Y-마스크 윈도우
    #   [bit 0 .. 31] ↔ (src-dst) ∈ [-16, +15] 안에 있는지 확인한다.
    #   범위 밖 소스는 add_mask()에서 조용히 drop되어 결과가 틀리므로,
    #   "순차 r0 배치가 실제로 mesh 범위를 만족하는가"를 정량 보고한다.
    # =========================================================================
    def _verify_mesh_placement(self, core_ops):
        edges = 0
        violations = 0
        max_dist = 0
        detail = []
        for i in range(128):
            op = core_ops[i]
            # 합산 모드(연산비트 ≤ 0x06)만 Y-마스크 경로 스위치를 사용
            if op.get("op_bits", ZOp.ADD) > ZOp.SUMMATION_MAX:
                continue
            for s in op.get("sources", []):
                if s is None:
                    continue
                edges += 1
                dist = s - i
                if abs(dist) > max_dist:
                    max_dist = abs(dist)
                bit = 16 + dist
                if not (0 <= bit <= 31):   # 윈도우 밖 → 마스크에서 drop됨
                    violations += 1
                    detail.append((i, s, dist))
        ok_pct = 100.0 * (edges - violations) / edges if edges else 100.0
        return {"edges": edges, "violations": violations,
                "ok_pct": ok_pct, "max_dist": max_dist, "detail": detail}

    # =========================================================================
    # [2-b] _decide_core_operations: Step 4                                [v9]
    # ★ v9 변경: op_bits/ctrl_bits 추가
    # =========================================================================
    def _decide_core_operations(self, fun, reg_map):
        idx_to_info = {v["idx"]: v for v in reg_map.values()}
        core_ops = {}
        for i in range(128):
            op = {
                "name": "", "var_type": "", "init_val": 0,
                "is_active": False, "pst": "",
                # ★ v9: 연산비트/제어비트를 ZOp/ZCtrl 상수로 관리
                "op_bits": ZOp.ADD, "ctrl_bits": 0,
                "opcode": "00", "sources": [],    # ★ 빈 코어: ADD(0x0000, 0x00000000)
                "coeff_val": None,
                "xx_left_xd": False, "mesh_right": False,
                "xd_mem": False, "y_left_xd": False,
                "sum_neg": False, "write_en": False,
                "branch_hold": False,
                "a_bank_rd": False, "a_bank_wr": False,
                "a_addr_mode": 0,
                "init_comment": "", "op_comment": "",
                "init_rc": f"r{i}", "op_rc": f"r{i}",
                "extra_cmt": None,
            }
            if i == 126:
                op["init_comment"] = "return address"
                op["op_comment"] = "return address"
            elif i == 127:
                op["init_comment"] = "branch address"
                op["op_comment"] = "branch address"
            elif i in idx_to_info:
                info = idx_to_info[i]
                op["name"] = info["name"]
                op["var_type"] = info["type"]
                op["init_val"] = int(info.get("val", 0))
                op["is_active"] = True
                if self.features.get("has_mac"):
                    op["pst"] = info.get("pst", "0")
                op["init_comment"] = (f"{info['name']}={op['init_val']}"
                                 if info["type"] == "var"
                                 else f"{info['name']}")
                op["op_comment"] = op["init_comment"]
                op["init_rc"] = f"r{i}"
                op["op_rc"] = f"r{i}"
            core_ops[i] = op

        mac_managed = set()
        if self.features.get("has_mac"):
            mac_managed = self._pass_mac_pipeline(fun, core_ops, reg_map)
        self._mac_managed = mac_managed
        self._pass_generic_assign(fun, core_ops, reg_map, skip_indices=mac_managed)
        self._pass_cond(fun, core_ops, reg_map)
        return core_ops

    # =========================================================================
    # [2-c] _encode_zy_codes: Step 5                                       [v9]
    # ★ v9 핵심 변경: Z코드를 먼저 만들고, Z[4:0]을 보고 Y코드 자동 분기
    # =========================================================================
    def _encode_zy_codes(self, core_ops):
        core_codes = {}
        z16_lxy = self._make_z16("1f")
        z_lxy_word = self._z32_word(z16_lxy)
        z_lxy_hex = f"{z16_lxy:04x}"

        for i in range(128):
            op = core_ops[i]

            # ── Init: LXY + 초기값 ──
            if op["is_active"]:
                init_z = z_lxy_word
                init_y = f"{op['init_val'] & 0xFFFFFFFF:08x}"
                init_cmd = self._format_mnemonic("LXY", z_lxy_hex, op["init_val"])
            else:
                init_z = "00000000"
                init_y = "00000000"
                init_cmd = self._format_mnemonic("ADD", "0000", 0)

            # ── Op: Z코드 생성 ──
            # ★ v9: op_bits + ctrl_bits가 있으면 새 시스템 사용
            if op.get("op_bits") is not None:
                extra_ctrl = op.get("ctrl_bits", 0)
                # 레거시 플래그 → ctrl_bits 변환
                if op.get("mesh_right"):  extra_ctrl |= ZCtrl.MESH_RIGHT
                if op.get("xd_mem"):      extra_ctrl |= ZCtrl.XD_MEM
                if op.get("y_left_xd"):   extra_ctrl |= ZCtrl.Y_LEFT_XD
                if op.get("sum_neg"):     extra_ctrl |= ZCtrl.SUM_NEG
                if op.get("xx_left_xd"):  extra_ctrl |= ZCtrl.XX_LEFT_XD
                if op.get("write_en"):    extra_ctrl |= ZCtrl.WRITE_EN
                if op.get("branch_hold"): extra_ctrl |= ZCtrl.BRGPC_HOLD
                if op.get("a_bank_rd"):   extra_ctrl |= ZCtrl.A_BANK_RD
                if op.get("a_bank_wr"):   extra_ctrl |= ZCtrl.A_BANK_WR
                extra_ctrl |= ((op.get("a_addr_mode", 0) & 0x3) << 14)
                op_z16 = zcode_make_z16(op["op_bits"], extra_ctrl)
            else:
                op_z16 = self._make_z16(
                    op["opcode"],
                    mesh_right=op["mesh_right"], xd_mem=op["xd_mem"],
                    y_left_xd=op["y_left_xd"], sum_neg=op["sum_neg"],
                    xx_left_xd=op["xx_left_xd"], write_en=op["write_en"],
                    branch_hold=op["branch_hold"],
                    a_bank_rd=op["a_bank_rd"], a_bank_wr=op["a_bank_wr"],
                    a_addr_mode=op["a_addr_mode"],
                )

            op_z = self._z32_word(op_z16)
            op_z_hex = f"{op_z16:04x}"

            # ★ v9 핵심: Z[4:0]을 보고 Y코드 생성 방식 자동 결정
            coeff = op.get("coeff_val")
            op_y_int = make_y32(
                z16=op_z16,
                dst_core=i,
                src_cores=op.get("sources"),
                y_value=(int(coeff) if coeff is not None else None),
            )
            op_y = f"{op_y_int:08x}"

            # 니모닉
            cmd_names = {
                "00": "ADD", "01": "EQZ", "02": "GTZ",
                "03": "LTZ", "04": "NEQZ", "05": "LTEZ",
                "06": "GTEZ", "08": "SMT", "09": "UMT",
                "0a": "SRSH", "0b": "LSH", "0c": "BAND",
                "0d": "BXOR", "0e": "BOR", "0f": "BNOT",
                "1f": "LXY",
            }
            opc_str = op.get("opcode", f"{op.get('op_bits', 0):02x}")
            cmd_name = cmd_names.get(opc_str, "ADD")
            op_cmd = self._format_mnemonic(cmd_name, op_z_hex, op_y_int)

            # op_res
            if coeff is not None:
                op_res_val = 0
            else:
                op_res_val = 0
                for src_idx in op["sources"]:
                    if src_idx in core_ops:
                        op_res_val += core_ops[src_idx]["init_val"]

            core_codes[i] = {
                "init_z": init_z, "init_y": init_y, "init_cmd": init_cmd,
                "op_z": op_z, "op_y": op_y, "op_cmd": op_cmd,
                "init_res": str(op["init_val"]) if op["is_active"] else "0",
                "op_res": str(op_res_val),
                "init_comment": op["init_comment"],
                "op_comment": op["op_comment"],
                "init_rc": op["init_rc"], "op_rc": op["op_rc"],
                "pst": op["pst"], "is_active": op["is_active"],
                "extra_cmt": op.get("extra_cmt"),
            }
        return core_codes

    def _assemble_and_emit_gpcs(self, core_codes, init_gpc, op_gpc):
        has_mac = self.features.get("has_mac", False)
        init_base = init_gpc * 128
        for i in range(128):
            cc = core_codes[i]
            pst = cc["pst"] if has_mac else ""
            self._add_line(init_base + i, cc["init_z"], cc["init_y"],
                f".r{i}", cc["init_comment"], cc["init_rc"],
                cc["init_cmd"], cc["init_res"], init_gpc, pst=pst)
        op_base = op_gpc * 128
        for i in range(128):
            cc = core_codes[i]
            pst = cc["pst"]
            if has_mac and cc["is_active"] and not pst:
                pst = "0"
            self._add_line(op_base + i, cc["op_z"], cc["op_y"],
                f".r{i}", cc["op_comment"], cc["op_rc"],
                cc["op_cmd"], cc["op_res"], op_gpc, pst=pst,
                extra_lines=cc.get("extra_cmt"))

    def write_all(self):
        path_z = os.path.join(self.output_dir, "total_program_z.mif")
        path_y = os.path.join(self.output_dir, "total_program_y.mif")
        self._write_mif_file(path_z, self.buffer_z, self.buffer_cmt, "Z-Bank (Instruction)", None)
        self._write_mif_file(path_y, self.buffer_y, self.buffer_cmt, "Y-Bank (Data)", None)
        self._write_metrics()

    # =========================================================================
    # v1.0: 정량 지표 리포트 (저널 Evaluation 보강용)
    #   - 코어 사용률(/128), mesh ±16 배치 성공률, 최대 mesh 거리, GPC 슬롯 수
    # =========================================================================
    def _write_metrics(self):
        path = os.path.join(self.output_dir, "metrics.log")
        reps = self.func_reports
        with open(path, "w", encoding="utf-8") as f:
            f.write("EOPPP Compiler — Quantitative Metrics (v1.0)\n")
            f.write("=" * 78 + "\n\n")
            f.write(f"{'function':<16}{'GPC':<8}{'MAC':<5}"
                    f"{'cores/128':<11}{'util%':<8}"
                    f"{'meshEdges':<10}{'meshViol':<9}{'meshOK%':<9}{'maxDist':<8}\n")
            f.write("-" * 78 + "\n")
            for r in reps:
                gpc = f"{r['init_gpc']}/{r['op_gpc']}"
                f.write(f"{r['name'][:15]:<16}{gpc:<8}"
                        f"{('Y' if r['is_mac'] else 'N'):<5}"
                        f"{r['cores_used']:<11}{r['core_util_pct']:<8.1f}"
                        f"{r['mesh_edges']:<10}{r['mesh_violations']:<9}"
                        f"{r['mesh_ok_pct']:<9.2f}{r['mesh_max_dist']:<8}\n")
            f.write("-" * 78 + "\n\n")

            tot_edges = sum(r["mesh_edges"] for r in reps)
            tot_viol = sum(r["mesh_violations"] for r in reps)
            ok = 100.0 * (tot_edges - tot_viol) / tot_edges if tot_edges else 100.0
            n = len(reps)
            avg_util = sum(r["core_util_pct"] for r in reps) / n if n else 0.0
            f.write(f"Functions compiled        : {n}\n")
            f.write(f"Avg core utilization      : {avg_util:.1f}% of 128\n")
            f.write(f"Mesh ±16 placement success: {tot_edges - tot_viol}/{tot_edges}"
                    f" edges ({ok:.2f}%)\n")
            f.write(f"Total mesh violations     : {tot_viol}"
                    f" (sources dropped from ADD mask)\n")
            for r in reps:
                if r.get("mac_plan_ok") is True:
                    f.write(f"MAC layout [{r['name'][:14]}]   : reduction tree depth "
                            f"{r['mac_depth']} (store -> {r['mac_depth']} adder level(s) "
                            f"-> yo[i]), mesh-valid placement found\n")
                elif r.get("mac_plan_ok") is False:
                    f.write(f"MAC layout [{r['name'][:14]}]   : NO mesh-valid reduction "
                            f"tree found (fallback layout, see violations)\n")
            if tot_viol:
                f.write("\nViolations (dst<-src, dist):\n")
                for r in reps:
                    for (d, s, dist) in r["mesh_detail"]:
                        f.write(f"  [{r['name'][:14]}] r{d} <- r{s} "
                                f"(dist={dist:+d}, |{abs(dist)}|>16)\n")
            f.write("\nNote: mesh window is (src-dst) ∈ [-16,+15] "
                    "(Y-mask bit = 16+(src-dst)).\n")

    # =========================================================================
    # 이름 변환 헬퍼
    # =========================================================================
    def _get_clean_name(self, node):
        if node is None: return "0"
        if isinstance(node, int): return str(node)
        if isinstance(node, gcc.IntegerCst): return str(node.constant)
        if isinstance(node, gcc.ArrayRef):
            base, idx = self._arrayref_parts(node)
            return f"{base}[{idx}]"
        if isinstance(node, gcc.SsaName):
            ver = getattr(node, "version", None)
            if ver is not None and ver in self.ssa_semantic:
                return self.ssa_semantic[ver]
            var = getattr(node, "var", None)
            if var is not None:
                return self._get_clean_name(var)
            try:
                ds = getattr(node, "def_stmt", None)
                if isinstance(ds, gcc.GimpleAssign) and len(ds.rhs) == 1:
                    return self._get_clean_name(ds.rhs[0])
            except Exception: pass
            return f"ssa_{ver}" if ver is not None else "ssa"
        if isinstance(node, (gcc.VarDecl, gcc.ParmDecl)):
            nm = getattr(node, "name", None)
            return nm if nm else "var"
        nm = getattr(node, "name", None)
        return nm if nm else "unknown"

    def _arrayref_parts(self, node):
        base = getattr(node, "array", None) or getattr(node, "operand0", None)
        idx_node = getattr(node, "index", None) or getattr(node, "operand1", None)
        base_name = self._get_clean_name(base) if base is not None else "arr"
        idx_name = self._get_clean_name(idx_node) if idx_node is not None else "0"
        return str(base_name), str(idx_name)

    def _get_base_var_name(self, node):
        if node is None: return None
        if isinstance(node, gcc.SsaName):
            var = getattr(node, "var", None)
            if var is not None:
                nm = getattr(var, "name", None)
                return nm if nm else None
            return None
        if isinstance(node, (gcc.VarDecl, gcc.ParmDecl)):
            nm = getattr(node, "name", None)
            return nm if nm else None
        if isinstance(node, gcc.ArrayRef): return None
        if isinstance(node, gcc.IntegerCst): return None
        inner = getattr(node, "operand", None)
        if inner is not None: return self._get_base_var_name(inner)
        return None

    def _get_op_symbol(self, exprcode):
        try:
            s = str(exprcode).lower()
            if "rshift" in s: return ">>"
            if "lshift" in s: return "<<"
            if "plus" in s: return "+"
            if "minus" in s: return "-"
            if "mult" in s: return "*"
            if "ge" in s: return ">="
            if "le" in s: return "<="
            if "gt" in s: return ">"
            if "lt" in s: return "<"
            if "eq" in s: return "=="
            if "ne" in s: return "!="
        except Exception: pass
        return "+"

    def _build_semantic_names(self, fun):
        self.ssa_semantic = {}
        if not getattr(fun, "cfg", None): return
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                lhs = stmt.lhs
                if not isinstance(lhs, gcc.SsaName): continue
                ver = getattr(lhs, "version", None)
                if ver is None or ver in self.ssa_semantic: continue
                if len(stmt.rhs) == 1:
                    rhs0 = stmt.rhs[0]
                    if isinstance(rhs0, gcc.ArrayRef):
                        base, idx = self._arrayref_parts(rhs0)
                        self.ssa_semantic[ver] = f"{base}[{idx}]"
                        continue
                    op1 = getattr(rhs0, "operand1", None)
                    if isinstance(op1, gcc.ArrayRef):
                        base, idx = self._arrayref_parts(op1)
                        self.ssa_semantic[ver] = f"{base}[{idx}]"
                        continue
                    if isinstance(rhs0, (gcc.VarDecl, gcc.ParmDecl)):
                        self.ssa_semantic[ver] = self._get_clean_name(rhs0)
                        continue
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                lhs = stmt.lhs
                if not isinstance(lhs, gcc.SsaName): continue
                ver = getattr(lhs, "version", None)
                if ver is None or ver in self.ssa_semantic: continue
                if len(stmt.rhs) == 1 and isinstance(stmt.rhs[0], gcc.SsaName):
                    src_ver = getattr(stmt.rhs[0], "version", None)
                    if src_ver in self.ssa_semantic:
                        self.ssa_semantic[ver] = self.ssa_semantic[src_ver]

    # =========================================================================
    # Z/Y 인코딩 헬퍼 (레거시 호환 유지)
    # =========================================================================
    def _make_z16(self, opcode_hex, mesh_right=False, xd_mem=False,
                  y_left_xd=False, sum_neg=False, xx_left_xd=False,
                  write_en=False, branch_hold=False, a_bank_rd=False,
                  a_bank_wr=False, a_addr_mode=0):
        opcode = int(opcode_hex, 16) & 0x1F
        z = opcode
        if mesh_right:   z |= (1 << 5)
        if xd_mem:       z |= (1 << 6)
        if y_left_xd:    z |= (1 << 7)
        if sum_neg:      z |= (1 << 8)
        if xx_left_xd:   z |= (1 << 9)
        if write_en:     z |= (1 << 10)
        if branch_hold:  z |= (1 << 11)
        if a_bank_rd:    z |= (1 << 12)
        if a_bank_wr:    z |= (1 << 13)
        z |= ((a_addr_mode & 0x3) << 14)
        return z & 0xFFFF

    def _z32_word(self, z16):
        return f"{(z16 & 0xFFFF):08x}"

    def _add_mask(self, dst_idx, src_indices):
        mask = 0
        for s in src_indices:
            if s is None: continue
            bit = 16 + (s - dst_idx)
            if 0 <= bit <= 31: mask |= (1 << bit)
        return mask & 0xFFFFFFFF

    def _format_mnemonic(self, cmd, z_hex, y_val):
        try:
            y_int = int(y_val)
            y_hex = f"{y_int & 0xFFFFFFFF:08x}"
        except Exception: y_hex = "00000000"
        return f"{cmd}({z_hex}, {y_hex})"

    def _reg_idx(self, reg_str):
        if not reg_str: return None
        if reg_str.startswith("r") and reg_str[1:].isdigit():
            return int(reg_str[1:])
        return None

    # =========================================================================
    # _analyze_ir: GIMPLE IR 분석 → feature 플래그 생성 (원본 그대로)
    # =========================================================================
    def _analyze_ir(self, fun):
        features = {
            "is_mac": False, "has_mac": False, "has_shift": False,
            "coeff_vars": {}, "output_arrays": set(), "input_arrays": set(),
            "mult_results": set(), "has_mult": False,
            "cond_count": 0, "skip_cond_indices": set(),
        }
        if not getattr(fun, "cfg", None): return features

        const_assigns = {}
        reassigned_vars = set()
        coeff_vars = {}
        mult_results = set()
        mult_operand_names = set()
        output_arrays = set()
        input_arrays = set()
        has_any_mult = False
        coeff_mult_cnt = 0
        cond_count = 0
        skip_cond_indices = set()

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleCond):
                    if self._is_noncompute_cond(bb, stmt):
                        skip_cond_indices.add(cond_count)
                    cond_count += 1
                    continue
                if not isinstance(stmt, gcc.GimpleAssign): continue
                lhs_base = self._get_base_var_name(stmt.lhs)
                if len(stmt.rhs) == 1 and isinstance(stmt.rhs[0], gcc.IntegerCst):
                    if lhs_base:
                        const_assigns[lhs_base] = int(stmt.rhs[0].constant)
                else:
                    if lhs_base:
                        is_selfcopy = False
                        if len(stmt.rhs) == 1:
                            rhs_base = self._get_base_var_name(stmt.rhs[0])
                            if rhs_base is not None and rhs_base == lhs_base:
                                is_selfcopy = True
                        if not is_selfcopy:
                            reassigned_vars.add(lhs_base)
                if isinstance(stmt.lhs, gcc.ArrayRef):
                    base, _ = self._arrayref_parts(stmt.lhs)
                    output_arrays.add(str(base))
                for rhs_op in stmt.rhs:
                    arr_node = None
                    if isinstance(rhs_op, gcc.ArrayRef): arr_node = rhs_op
                    elif hasattr(rhs_op, "operand"):
                        inner = getattr(rhs_op, "operand", None)
                        if isinstance(inner, gcc.ArrayRef): arr_node = inner
                    if arr_node is not None:
                        base, _ = self._arrayref_parts(arr_node)
                        input_arrays.add(str(base))

        true_consts = {k: v for k, v in const_assigns.items() if k not in reassigned_vars}

        def _resolve_const(node, name):
            if name in true_consts: return (True, true_consts[name], name)
            if isinstance(node, gcc.IntegerCst):
                val = int(node.constant)
                for tc_k, tc_v in true_consts.items():
                    if tc_v == val and tc_k not in coeff_vars:
                        return (True, val, tc_k)
                return (True, val, f"imm={val}")
            if isinstance(node, gcc.SsaName):
                ds = getattr(node, "def_stmt", None)
                if (isinstance(ds, gcc.GimpleAssign) and len(ds.rhs) == 1
                        and isinstance(ds.rhs[0], gcc.IntegerCst)):
                    val = int(ds.rhs[0].constant)
                    ds_lhs_name = self._get_clean_name(ds.lhs)
                    if ds_lhs_name not in reassigned_vars:
                        return (True, val, ds_lhs_name)
            return (False, None, None)

        add_used_consts = set()
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleCond):
                    for operand in [stmt.lhs, stmt.rhs]:
                        name = self._get_clean_name(operand)
                        if name in true_consts: add_used_consts.add(name)
                    continue
                if not isinstance(stmt, gcc.GimpleAssign): continue
                sym = self._get_op_symbol(stmt.exprcode)
                if sym == "*" and len(stmt.rhs) == 2:
                    has_any_mult = True
                    lhs = self._get_clean_name(stmt.lhs)
                    mult_results.add(lhs)
                    a_name = self._get_clean_name(stmt.rhs[0])
                    b_name = self._get_clean_name(stmt.rhs[1])
                    mult_operand_names.add(a_name)
                    mult_operand_names.add(b_name)
                    for node, name in [(stmt.rhs[1], b_name), (stmt.rhs[0], a_name)]:
                        is_c, val, c_name = _resolve_const(node, name)
                        if is_c:
                            coeff_vars[c_name] = val
                            coeff_mult_cnt += 1
                            break
                elif sym in ("+", "-") and len(stmt.rhs) == 2:
                    for rhs_node in stmt.rhs:
                        name = self._get_clean_name(rhs_node)
                        if name in true_consts: add_used_consts.add(name)

        for add_name in add_used_consts:
            if add_name in coeff_vars: del coeff_vars[add_name]
        for tc_k, tc_v in true_consts.items():
            if tc_k not in add_used_consts and tc_k not in coeff_vars:
                coeff_vars[tc_k] = tc_v

        # 곱셈이 있고 상수 계수가 감지되면 MAC 처리 활성화
        # (기존: coeff_vars >= 5 AND output_arrays > 0 임계값 판정 제거)
        has_mac_pattern = has_any_mult and len(coeff_vars) > 0

        shift_count = 0
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                if len(stmt.rhs) != 1: continue
                rhs0 = stmt.rhs[0]
                if isinstance(rhs0, (gcc.SsaName, gcc.VarDecl, gcc.ParmDecl)):
                    lhs_base = self._get_base_var_name(stmt.lhs)
                    rhs_base = self._get_base_var_name(rhs0)
                    if (lhs_base and rhs_base and lhs_base != rhs_base
                            and lhs_base in reassigned_vars and rhs_base in reassigned_vars):
                        shift_count += 1
        has_shift = shift_count >= 2

        if has_mac_pattern and len(coeff_vars) < len(true_consts):
            for tc_k, tc_v in true_consts.items():
                if tc_k not in coeff_vars and tc_k in mult_operand_names:
                    coeff_vars[tc_k] = tc_v

        features["is_mac"] = has_any_mult
        features["has_mac"] = has_mac_pattern
        features["has_shift"] = has_shift
        features["coeff_vars"] = coeff_vars
        features["true_consts"] = true_consts
        features["init_vals"] = dict(const_assigns)
        features["output_arrays"] = output_arrays
        features["input_arrays"] = input_arrays
        features["mult_results"] = mult_results
        features["has_mult"] = has_any_mult
        features["cond_count"] = cond_count
        features["skip_cond_indices"] = skip_cond_indices
        return features

    def _is_noncompute_cond(self, bb, stmt=None):
        ARITH_OPS = {"+", "-", "*"}
        try:
            if stmt is None:
                for s in bb.gimple:
                    if isinstance(s, gcc.GimpleCond): stmt = s; break
            if stmt is None: return False
            cond_names = set()
            for side in (stmt.lhs, stmt.rhs):
                nm = self._get_clean_name(side)
                if nm and nm not in ("0", "unknown"): cond_names.add(nm)
                base = self._get_base_var_name(side)
                if base: cond_names.add(base)
            succs = getattr(bb, "succs", [])
            for edge in succs:
                dest_bb = getattr(edge, "dest", None)
                if dest_bb is None: continue
                has_call = any(isinstance(s, gcc.GimpleCall) for s in dest_bb.gimple)
                for s in dest_bb.gimple:
                    if not isinstance(s, gcc.GimpleAssign): continue
                    sym = self._get_op_symbol(s.exprcode)
                    if sym not in ARITH_OPS: continue
                    lhs_base = self._get_base_var_name(s.lhs)
                    if has_call and lhs_base is None: continue
                    if lhs_base and lhs_base in cond_names:
                        is_counter = False
                        for rhs_node in s.rhs:
                            rhs_base = self._get_base_var_name(rhs_node)
                            if rhs_base == lhs_base: is_counter = True; break
                        if is_counter: continue
                    return False
            return True
        except Exception: return False

    # =========================================================================
    # 레지스터 맵 생성 (원본 그대로)
    # =========================================================================
    def _build_register_map(self, fun):
        reg_map = {}
        if self.features.get("has_mac"):
            self._build_mac_layout(fun, reg_map)
            mac_ignore = set(self.features.get("coeff_vars", {}).keys())
            mac_ignore.update(getattr(self, "_mac_all_var_names", set()))
            self._augment_regs_from_gimple(fun, reg_map, allow_constants=True, ignore_names=mac_ignore)
        else:
            coeff_names = set(self.features.get("coeff_vars", {}).keys())
            self._augment_regs_from_gimple(fun, reg_map, allow_constants=True, ignore_names=coeff_names)
        return reg_map

    # =========================================================================
    # v1.0: MAC 환원 트리 배치 (깊이 가변, 최소 깊이 탐색)
    #   store(레벨 0) → 부분합(레벨 1) → 부분합의 합(레벨 2) → … → 루트(yo[i])
    #   - 레벨 L 노드의 입력은 모두 레벨 L-1 노드다. 모든 탭이 같은 단수를 거쳐
    #     루트에 도착하므로, 단마다 1클럭씩 흐를 때 부분합의 샘플 시점이 일치한다.
    #   - 블록 = 탭 그룹들이 연속으로 놓이고 그 사이에 트리 노드가 끼는 구간.
    #     블록마다 (a, b) = 출력 노드의 왼쪽/오른쪽 코어 수를 관리한다.
    #     부모 노드 P 기준으로
    #       왼쪽 자식 i : P - out_i = 1 + b_i + (더 가까운 왼쪽 자식들 길이 합) ≤ 16
    #       오른쪽 자식 i: out_i - P = 1 + (더 가까운 오른쪽 자식들 길이 합) + a_i ≤ 15
    #     (Y-마스크 윈도우 (src-dst) ∈ [-16, +15])
    #   - 레벨별로 "탭 n개를 덮는 블록의 (a, b) 파레토 집합"을 동적계획법으로 구하고,
    #     N개를 덮는 가장 얕은 레벨을 고른다 → 최소 깊이, 그 안에서 최소 코어.
    # =========================================================================
    def _plan_mac_tree(self, N, cpg, has_shift):
        LEFT_MAX, RIGHT_MAX = 16, 15
        if N <= 0:
            return None

        def pareto(cands):
            cands = sorted(cands, key=lambda c: (c[0] + c[1], c[0]))
            kept = []
            for c in cands:
                if not any(k[0] <= c[0] and k[1] <= c[1] for k in kept):
                    kept.append(c)
            return kept

        def side_dp(prev, is_left):
            # 탭 수 → (해당 쪽 자식들의 길이 합, 자식 튜플[가까운 것부터])
            best = {0: (0, ())}
            frontier = [0]
            while frontier:
                t = frontier.pop()
                acc, ch = best[t]
                for m, olist in prev.items():
                    if t + m > N:
                        continue
                    for opt in olist:
                        ca, cb = opt[0], opt[1]
                        if is_left and 1 + cb + acc > LEFT_MAX:
                            continue
                        if not is_left and 1 + acc + ca > RIGHT_MAX:
                            continue
                        nl, nt = acc + ca + cb + 1, t + m
                        if nt not in best or nl < best[nt][0]:
                            best[nt] = (nl, ch + ((m, opt),))
                            frontier.append(nt)
            return best

        opts = {0: {1: [(cpg - 1, 0, None)]}}      # 레벨 0 = 탭 그룹 하나 (출력 = store)
        for depth in range(1, 9):
            prev = opts[depth - 1]
            left, right = side_dp(prev, True), side_dp(prev, False)
            cur = {}
            for n in range(1, N + 1):
                cands = [(al, right[n - tl][0], (chl, right[n - tl][1]))
                         for tl, (al, chl) in left.items()
                         if (n - tl) in right and n >= 1]
                if cands:
                    cur[n] = pareto(cands)
            opts[depth] = cur
            if N in cur:
                plan = self._build_mac_tree(cur[N][0], depth, cpg, has_shift, N)
                if plan is not None:
                    return plan
        return None

    def _build_mac_tree(self, root_opt, depth, cpg, has_shift, N):
        def build(opt, level):
            if level == 0:
                g = {'t': 'G'}
                return [g], g
            chl, chr_ = opt[2]
            items, kids = [], []
            for _, co in reversed(chl):          # 왼쪽: 먼 것부터 배치
                it, out = build(co, level - 1); items += it; kids.append(out)
            nd = {'t': 'N', 'level': level}
            items.append(nd)
            for _, co in chr_:                   # 오른쪽: 가까운 것부터 배치
                it, out = build(co, level - 1); items += it; kids.append(out)
            nd['kids'] = kids
            return items, nd

        items, _ = build(root_opt, depth)
        pos, gpos = 0, []
        for it in items:
            it['pos'] = pos
            if it['t'] == 'G':
                it['key'] = ('L0', len(gpos)); gpos.append(pos); pos += cpg
            else:
                pos += 1
        input_core = pos
        if input_core + 1 > 126:
            return None

        levels = [[] for _ in range(depth)]
        for it in items:
            if it['t'] == 'N':
                lv = it['level']
                it['key'] = ('L%d' % lv, len(levels[lv - 1]))
                levels[lv - 1].append(it)
        out_pos = lambda it: it['pos'] + cpg - 1 if it['t'] == 'G' else it['pos']

        def ok(src, dst):
            return -16 <= src - dst <= 15
        for lvl in levels:
            for nd in lvl:
                if any(not ok(out_pos(k), nd['pos']) for k in nd['kids']):
                    return None
        if has_shift:
            chain = gpos + [input_core]
            if any(not ok(chain[i + 1], chain[i]) for i in range(N)):
                return None
        return {'depth': depth, 'n_cores': input_core + 1, 'gpos': gpos,
                'levels': [[(nd['pos'], [k['key'] for k in nd['kids']]) for nd in lvl]
                           for lvl in levels],
                'input_core': input_core}

    def _build_mac_layout(self, fun, reg_map):
        coeff_vars = self.features.get("coeff_vars", {})
        mult_results = self.features.get("mult_results", set())
        output_arrays = self.features.get("output_arrays", set())
        input_arrays = self.features.get("input_arrays", set())
        N = len(coeff_vars)
        out_base = sorted(output_arrays)[0] if output_arrays else "out"
        in_base = None
        for ia in sorted(input_arrays):
            if ia not in output_arrays: in_base = ia; break
        if in_base is None:
            in_base = sorted(input_arrays)[0] if input_arrays else "in"

        mult_info = {}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                sym = self._get_op_symbol(stmt.exprcode)
                if sym == "*" and len(stmt.rhs) == 2:
                    lhs = self._get_clean_name(stmt.lhs)
                    if lhs in mult_results:
                        a_clean = self._get_clean_name(stmt.rhs[0])
                        b_clean = self._get_clean_name(stmt.rhs[1])
                        a_base = self._get_base_var_name(stmt.rhs[0])
                        b_base = self._get_base_var_name(stmt.rhs[1])
                        if b_clean in coeff_vars:
                            src = a_base if a_base else a_clean
                            mult_info[lhs] = (src, b_clean, coeff_vars[b_clean])
                        elif a_clean in coeff_vars:
                            src = b_base if b_base else b_clean
                            mult_info[lhs] = (src, a_clean, coeff_vars[a_clean])

        all_single_assigns = {}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                if len(stmt.rhs) != 1: continue
                lhs_base = self._get_base_var_name(stmt.lhs)
                if not lhs_base: lhs_base = self._get_clean_name(stmt.lhs)
                if lhs_base in coeff_vars: continue
                rhs0 = stmt.rhs[0]
                actual_rhs = rhs0
                if hasattr(rhs0, "operand") and not isinstance(rhs0, gcc.ArrayRef):
                    actual_rhs = getattr(rhs0, "operand", rhs0)
                if isinstance(actual_rhs, gcc.ArrayRef):
                    base, idx = self._arrayref_parts(actual_rhs)
                    all_single_assigns[lhs_base] = f"{base}[{idx}]"
                else:
                    rhs_base = self._get_base_var_name(actual_rhs)
                    all_single_assigns[lhs_base] = rhs_base if rhs_base else self._get_clean_name(actual_rhs)

        mult_src_vars = set(src for src, _, _ in mult_info.values())
        shift_chain = {}
        shift_all_vars = set()
        to_trace = set(mult_src_vars)
        while to_trace:
            var = to_trace.pop()
            if var in shift_all_vars: continue
            shift_all_vars.add(var)
            if var in all_single_assigns:
                src = all_single_assigns[var]
                shift_chain[var] = src
                if "[" not in src: to_trace.add(src)

        taps = []
        seq_idx = 0
        for mult_ssa, (src, coeff_name, coeff_val) in mult_info.items():
            m = re.match(r"h(\d+)", coeff_name)
            tap_idx = int(m.group(1)) if m else seq_idx
            seq_idx += 1
            shift_name = src
            shift_src = shift_chain.get(shift_name, "")
            taps.append({'idx': tap_idx, 'mult_ssa': mult_ssa, 'src': src,
                'coeff': coeff_name, 'coeff_val': coeff_val,
                'shift_var': shift_name, 'shift_src': shift_src,
                'mult_name': f"t{tap_idx}", 'store_name': f"_{tap_idx}"})
        taps.sort(key=lambda t: t['idx'])
        N = len(taps)

        has_shift = self.features.get("has_shift", False)
        cores_per_group = 3 if has_shift else 2

        # v1.0: 깊이 가변 환원 트리 배치 (_plan_mac_tree 참고).
        # 기존 휴리스틱(누적기 1단 + final)은 두 번째 누적기의 마지막 store가
        # +18이 되어 tap 하나가 Y-마스크에서 누락되었고, 30-tap은 final이
        # 누적기 셋에 닿지 못했다.
        plan = self._plan_mac_tree(N, cores_per_group, has_shift)
        self._mac_plan_feasible = plan is not None
        if plan is None:
            # 해 없음: 그룹을 연속 배치하고 끝에 루트 하나 (mesh 검증이 위반 보고)
            gpos = [i * cores_per_group for i in range(N)]
            root = N * cores_per_group
            plan = {'depth': 1, 'gpos': gpos,
                    'levels': [[(root, [('L0', gi) for gi in range(N)])]],
                    'input_core': root + 1}
        depth = plan['depth']
        self._mac_tree_depth = depth

        taps_rev = list(reversed(taps))
        groups = []
        for gi, t in enumerate(taps_rev):
            p = plan['gpos'][gi]
            if has_shift:
                g = {'var_core': p, 'mult_core': p+1, 'store_core': p+2, 'tap': t}
            else:
                g = {'var_core': None, 'mult_core': p, 'store_core': p+1, 'tap': t}
            groups.append(g)

        # 환원 노드: 레벨 1 = 탭 부분합(yo0, yo1, ...), 상위 = 부분합의 합, 최상위 = yo[i]
        node_core = {('L0', gi): g['store_core'] for gi, g in enumerate(groups)}
        node_by_key = {}
        red_nodes = []
        for L, lvl in enumerate(plan['levels'], start=1):
            for k, (core_idx, kids) in enumerate(lvl):
                is_root = (L == depth)
                if is_root: name = f"{out_base}[i]"
                elif L == 1: name = f"{out_base}{k}[i]"
                else: name = f"{out_base}L{L}_{k}[i]"
                if L == 1:
                    labels = [groups[c[1]]['tap']['mult_name'] for c in kids]
                else:
                    labels = [node_by_key[c]['name'] for c in kids]
                nd = {'core': core_idx, 'level': L, 'name': name, 'root': is_root,
                      'sources': [node_core[c] for c in kids], 'labels': labels}
                node_core[('L%d' % L, k)] = core_idx
                node_by_key[('L%d' % L, k)] = nd
                red_nodes.append(nd)

        input_core = plan['input_core']
        input_key = None
        for ia in sorted(input_arrays):
            if ia != (list(output_arrays)[0] if output_arrays else ""):
                input_key = f"{ia}[i]"; break
        if input_key is None: input_key = f"{in_base}[i]"

        self._mac_all_var_names = set()
        init_vals = self.features.get("init_vals", {})
        reg_map[input_key] = {"reg": f"r{input_core}", "idx": input_core,
            "val": int(init_vals.get(in_base, 0)), "name": input_key, "type": "var", "pst": "1"}
        self._mac_all_var_names.add(input_key)

        for g in groups:
            t = g['tap']; sv = t['shift_var']; mult_ssa = t['mult_ssa']
            if g['var_core'] is not None:
                reg_map[sv] = {"reg": f"r{g['var_core']}", "idx": g['var_core'],
                    "val": int(init_vals.get(sv, 0)), "name": sv, "type": "var"}
                self._mac_all_var_names.add(sv)
            reg_map[mult_ssa] = {"reg": f"r{g['mult_core']}", "idx": g['mult_core'],
                "val": int(init_vals.get(mult_ssa, 0)), "name": t['mult_name'], "type": "var", "pst": "2"}
            self._mac_all_var_names.add(mult_ssa)
            store_key = f"_store_{t['idx']}"
            reg_map[store_key] = {"reg": f"r{g['store_core']}", "idx": g['store_core'],
                "val": int(init_vals.get(store_key, 0)), "name": t['store_name'], "type": "var", "pst": "3"}
            self._mac_all_var_names.add(store_key)

        for nd in red_nodes:
            reg_map[nd['name']] = {"reg": f"r{nd['core']}", "idx": nd['core'],
                "val": int(init_vals.get(out_base if nd['root'] else nd['name'], 0)),
                "name": nd['name'], "type": "var", "pst": str(2 + nd['level'])}
            self._mac_all_var_names.add(nd['name'])

        self._mac_layout = {
            'groups': groups, 'red_nodes': red_nodes, 'depth': depth,
            'input_core': input_core, 'input_key': input_key,
            'N': N, 'out_base': out_base, 'in_base': in_base,
        }

    def _collect_intcst_from_node(self, node, out_set):
        if node is None: return
        if isinstance(node, gcc.IntegerCst): out_set.add(int(node.constant)); return
        op1 = getattr(node, "operand1", None)
        op2 = getattr(node, "operand2", None)
        if op1 is not None: self._collect_intcst_from_node(op1, out_set)
        if op2 is not None: self._collect_intcst_from_node(op2, out_set)

    def _augment_regs_from_gimple(self, fun, reg_map, allow_constants=True, ignore_names=None):
        if ignore_names is None: ignore_names = set()
        self.cond_rhs_names = set()
        self.add_mode_vars = set()
        add_constants = set()
        cond_count = 0
        if not getattr(fun, "cfg", None): return

        def is_ignored(name): return str(name) in ignore_names
        def is_ssa(name): return re.match(r"^ssa_\d+$", str(name)) is not None

        loop_counter_vars = set()
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                if len(stmt.rhs) != 2: continue
                sym = self._get_op_symbol(stmt.exprcode)
                if sym not in ("+", "-"): continue
                lhs_name = self._get_clean_name(stmt.lhs)
                op1_name = self._get_clean_name(stmt.rhs[0])
                op2_name = self._get_clean_name(stmt.rhs[1])
                if lhs_name == op1_name or lhs_name == op2_name:
                    loop_counter_vars.add(lhs_name)

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign):
                    lhs = self._get_clean_name(stmt.lhs)
                    if not is_ignored(lhs) and not is_ssa(lhs):
                        if lhs not in ("0", "unknown"): self.add_mode_vars.add(lhs)
                    sym = self._get_op_symbol(stmt.exprcode)
                    if len(stmt.rhs) == 2 and sym in ("+", "-"):
                        for op in stmt.rhs:
                            nm = self._get_clean_name(op)
                            if not is_ignored(nm) and nm not in ("0", "unknown") and not is_ssa(nm):
                                self.add_mode_vars.add(nm)
                            if allow_constants and isinstance(op, gcc.IntegerCst):
                                v = int(op.constant); add_constants.add(v)
                                if sym == "-": add_constants.add(-v)
                    if len(stmt.rhs) == 1:
                        rhs0 = stmt.rhs[0]
                        nm0 = self._get_clean_name(rhs0)
                        if not is_ignored(nm0) and nm0 not in ("0", "unknown") and not is_ssa(nm0):
                            self.add_mode_vars.add(nm0)
                        sym0 = self._get_op_symbol(getattr(rhs0, "exprcode", stmt.exprcode))
                        if allow_constants and sym0 in ("+", "-"):
                            tmp = set(); self._collect_intcst_from_node(rhs0, tmp)
                            for v in tmp:
                                add_constants.add(v)
                                if sym0 == "-": add_constants.add(-v)
                elif isinstance(stmt, gcc.GimpleCond):
                    skip_set = self.features.get("skip_cond_indices", set())
                    if cond_count in skip_set: cond_count += 1; continue
                    lhs = self._get_clean_name(stmt.lhs)
                    rhs = self._get_clean_name(stmt.rhs)
                    if lhs not in ("0", "unknown") and not is_ssa(lhs): self.add_mode_vars.add(lhs)
                    if rhs not in ("0", "unknown") and not is_ssa(rhs): self.add_mode_vars.add(rhs)
                    if not isinstance(stmt.rhs, gcc.IntegerCst) and not rhs.lstrip("-").isdigit():
                        self.cond_rhs_names.add(rhs)
                    if allow_constants and isinstance(stmt.rhs, gcc.IntegerCst):
                        v = int(stmt.rhs.constant)
                        lhs_cond = self._get_clean_name(stmt.lhs)
                        if lhs_cond in loop_counter_vars: add_constants.add(-(v + 1))
                        else: add_constants.add(v); add_constants.add(-v)
                    cond_count += 1

        used = set(v["idx"] for v in reg_map.values()) if reg_map else set()
        next_free = 0
        def alloc_idx():
            nonlocal next_free
            while next_free in used or next_free >= 126: next_free += 1
            if next_free >= 126: return None
            used.add(next_free); idx = next_free; next_free += 1; return idx

        init_vals = self.features.get("init_vals", {})
        for name in sorted([v for v in self.add_mode_vars
                if not v.lstrip("-").isdigit() and v != "unknown"
                and not v.startswith("cst_") and not re.match(r"^ssa_\d+$", v)
                and v not in ignore_names]):
            if name in reg_map: continue
            idx = alloc_idx()
            if idx is None: break
            reg_map[name] = {"reg": f"r{idx}", "idx": idx,
                "val": int(init_vals.get(name, 0)), "name": name, "type": "var"}

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if isinstance(stmt, gcc.GimpleAssign):
                    lhs = self._get_clean_name(stmt.lhs)
                    if lhs in reg_map and len(stmt.rhs) == 1 and isinstance(stmt.rhs[0], gcc.IntegerCst):
                        raw = int(stmt.rhs[0].constant)
                        reg_map[lhs]["val"] = -raw if lhs in self.cond_rhs_names else raw

        if allow_constants:
            for v in sorted(set(add_constants)):
                if v == 0: continue
                key = f"cst_{v}"
                if key in reg_map: continue
                idx = alloc_idx()
                if idx is None: break
                reg_map[key] = {"reg": f"r{idx}", "idx": idx, "val": int(v), "name": str(v), "type": "const"}

        skip_set = self.features.get("skip_cond_indices", set())
        for k in range(cond_count):
            if k in skip_set: continue
            key = f"cond_res_{k}"
            if key in reg_map: continue
            idx = alloc_idx()
            if idx is None: break
            reg_map[key] = {"reg": f"r{idx}", "idx": idx, "val": self._outloop_gpc, "name": f"{self._outloop_gpc} (outLoop)", "type": "cond"}

    # =========================================================================
    # _pass_mac_pipeline: MAC 코어 연산 결정                                [v9]
    # ★ v9: op_bits/ctrl_bits 추가
    # =========================================================================
    def _pass_mac_pipeline(self, fun, core_ops, reg_map):
        managed = set()
        layout = getattr(self, "_mac_layout", None)
        if layout is None: return managed

        groups = layout['groups']; red_nodes = layout['red_nodes']
        input_core = layout['input_core']; input_key = layout['input_key']
        out_base = layout.get('out_base', 'out')
        coeff_vars = self.features.get("coeff_vars", {})

        for g in groups:
            t = g['tap']; vc = g['var_core']; mc = g['mult_core']; uc = g['store_core']

            if vc is not None:
                shift_src_name = t['shift_src']
                r_src = self._find_reg(shift_src_name, reg_map)
                i_src = self._reg_idx(r_src)
                if i_src is None: i_src = vc
                core_ops[vc].update({
                    "op_bits": ZOp.ADD, "ctrl_bits": 0,       # ★ v9
                    "opcode": "00", "sources": [i_src],
                    "op_comment": f"{t['shift_var']}={shift_src_name}",
                    "op_rc": f"r{i_src}",
                })
                if shift_src_name and i_src != vc: core_ops[vc]["pst"] = "1"
                managed.add(vc)

            coeff_val = t['coeff_val']
            h_hex = f"{int(coeff_val) & 0xFFFFFFFF:08x}"
            mn = t['mult_name']

            if vc is not None:
                core_ops[mc].update({
                    "op_bits": ZOp.SMT,                                  # ★ v9
                    "ctrl_bits": ZCtrl.XX_LEFT_XD | ZCtrl.Y_LEFT_XD,     # ★ v9
                    "opcode": "08", "xx_left_xd": True, "y_left_xd": True,
                    "coeff_val": coeff_val,
                    "op_comment": f"{mn}={t['shift_var']}*{t['coeff']}",
                    "op_rc": f"r{vc}*[{t['coeff']}={h_hex}]", "pst": "2",
                })
            else:
                src_name = t['shift_var']
                r_src = self._find_reg(src_name, reg_map)
                i_src = self._reg_idx(r_src)
                core_ops[mc].update({
                    "op_bits": ZOp.SMT, "ctrl_bits": 0,                  # ★ v9
                    "opcode": "08",
                    "coeff_val": coeff_val,
                    "sources": [i_src] if i_src is not None else [mc],
                    "op_comment": f"{mn}={src_name}*{t['coeff']}",
                    "op_rc": f"r{i_src if i_src is not None else mc}*[{t['coeff']}={h_hex}]",
                    "pst": "2",
                })
            managed.add(mc)

            sn = t['store_name']
            core_ops[uc].update({
                "op_bits": ZOp.ADD,                                      # ★ v9
                "ctrl_bits": ZCtrl.XX_LEFT_XD,                           # ★ v9
                "opcode": "00", "xx_left_xd": True, "sources": [uc],
                "op_comment": f"{sn}={mn}", "op_rc": f"r{uc}", "pst": "3",
            })
            managed.add(uc)

        # 환원 트리 노드: 레벨마다 한 pStage. 루트가 A-bank에 yo[i]를 쓴다.
        for nd in red_nodes:
            c = nd['core']; srcs = nd['sources']; labels = nd['labels']
            upd = {
                "op_bits": ZOp.ADD, "ctrl_bits": 0, "opcode": "00", "sources": srcs,
                "op_comment": f"{nd['name']}= " + "+".join(labels[:6]),
                "op_rc": "+".join(f"r{s}" for s in srcs[:6]),
                "pst": str(2 + nd['level']),
            }
            if nd['root']:
                upd.update({"ctrl_bits": ZCtrl.A_BANK_RD | ZCtrl.A_BANK_WR,
                            "a_bank_rd": True, "a_bank_wr": True, "a_addr_mode": 1})
            core_ops[c].update(upd)
            if len(labels) > 6:
                rest_l = "+".join(labels[6:])
                rest_r = "+".join(f"r{s}" for s in srcs[6:])
                core_ops[c]["extra_cmt"] = [f"--{' '*34}+{rest_l}{' '*12}+{rest_r}"]
            managed.add(c)
        core_ops[input_core].update({
            "op_bits": ZOp.ADD, "ctrl_bits": ZCtrl.XD_MEM | ZCtrl.A_BANK_RD,  # ★ v9
            "opcode": "00", "sources": [], "xd_mem": True,
            "a_bank_rd": True, "a_addr_mode": 1,
            "op_comment": input_key, "op_rc": f"r{input_core}", "pst": "1",
        })
        managed.add(input_core)
        return managed

    # =========================================================================
    # _pass_generic_assign: 일반 대입/연산 결정                              [v9 + shift + flag-reset]
    # ★ v9 + 패치 v2:
    #   - MAC이 아닌 단순 shift 처리 추가 (LSH/SRSH 비합산 모드)
    #   - 같은 코어가 두 번 대입되는 경우(v = v - x; v = v + v;) 플래그 누적 버그 수정
    #     각 분기에서 sum_neg / xx_left_xd / xd_mem 등을 명시적으로 리셋
    # =========================================================================
    def _pass_generic_assign(self, fun, core_ops, reg_map, skip_indices=None):
        if skip_indices is None: skip_indices = set()
        if not getattr(fun, "cfg", None): return
 
        expr_map = {}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                lhs = self._get_clean_name(stmt.lhs)
                if not lhs or lhs not in reg_map: continue
                if len(stmt.rhs) == 1 and isinstance(stmt.rhs[0], gcc.IntegerCst): continue
                if len(stmt.rhs) == 2:
                    e_op1 = self._get_clean_name(stmt.rhs[0])
                    e_op2 = self._get_clean_name(stmt.rhs[1])
                    e_sym = self._get_op_symbol(stmt.exprcode)
                    if e_op1 and e_op2:
                        expr_map[lhs] = {"op1": e_op1, "op2": e_op2, "sym": e_sym}
 
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                lhs = self._get_clean_name(stmt.lhs)
                if lhs not in reg_map: continue
                dst = reg_map[lhs]["idx"]
                if dst in skip_indices: continue
                if len(stmt.rhs) == 1 and isinstance(stmt.rhs[0], gcc.IntegerCst): continue
 
                op1, op2, sym = None, None, ""
                _expanded_from = None
                if len(stmt.rhs) == 2:
                    op1 = self._get_clean_name(stmt.rhs[0])
                    op2 = self._get_clean_name(stmt.rhs[1])
                    sym = self._get_op_symbol(stmt.exprcode)
                elif len(stmt.rhs) == 1:
                    rhs0 = stmt.rhs[0]
                    if isinstance(rhs0, (gcc.SsaName, gcc.VarDecl, gcc.ParmDecl,
                                         gcc.IntegerCst, gcc.ArrayRef)):
                        op1 = self._get_clean_name(rhs0)
                        if op1 and op2 is None and op1 in expr_map:
                            _expanded_from = op1
                            expanded = expr_map[op1]
                            op1 = expanded["op1"]
                            op2 = expanded["op2"]
                            sym = expanded["sym"]
                    elif hasattr(rhs0, "operand1"):
                        op1 = self._get_clean_name(rhs0.operand1)
                        op2 = (self._get_clean_name(rhs0.operand2)
                               if getattr(rhs0, "operand2", None) is not None else None)
                        sym = self._get_op_symbol(getattr(rhs0, "exprcode", stmt.exprcode))
                if not op1: continue
 
                r1 = self._find_reg(op1, reg_map)
                r2 = self._find_reg(op2, reg_map) if op2 else None
                i1 = self._reg_idx(r1) if r1 else None
                i2 = self._reg_idx(r2) if r2 else None
                srcs = [x for x in (i1, i2) if x is not None]
 
                # ── 공통: 매 stmt 마다 모든 플래그를 명시적으로 결정 ──
                # 이전 stmt에서 같은 dst를 갱신했어도 플래그가 누적되지 않도록
                base_flags = {
                    "sum_neg":      False,
                    "xx_left_xd":   False,
                    "y_left_xd":    False,
                    "xd_mem":       False,
                    "mesh_right":   False,
                    "write_en":     False,
                    "branch_hold":  False,
                    "a_bank_rd":    False,
                    "a_bank_wr":    False,
                    "a_addr_mode":  0,
                    "coeff_val":    None,
                }
 
                if sym == "*":
                    # ── 비합산 모드: 곱셈 ──
                    y_word = 0
                    if op2 is not None:
                        try: y_word = int(str(op2), 0)
                        except Exception:
                            if op2 in reg_map: y_word = int(reg_map[op2].get("val", 0))
                    update = dict(base_flags)
                    update.update({
                        "op_bits": ZOp.SMT,
                        "ctrl_bits": 0,
                        "opcode": "08",
                        "coeff_val": y_word,
                        "sources": [],  # 비합산: sources 안 씀
                        "op_comment": f"{lhs}={_expanded_from}={op1}*{op2}" if _expanded_from else f"{lhs}={op1}*{op2}",
                        "op_rc": f"{r1}*{(r2 if r2 else op2)}",
                    })
                    core_ops[dst].update(update)
 
                elif sym in ("<<", ">>"):
                    # ── 비합산 모드: 단순 shift (MAC이 아닌 일반 컨텍스트) ──
                    y_word = 0
                    if op2 is not None:
                        try:
                            y_word = int(str(op2), 0)
                        except Exception:
                            if op2 in reg_map:
                                y_word = int(reg_map[op2].get("val", 0))
                    mapped_op = ZOp.LSH if sym == "<<" else ZOp.SRSH
                    update = dict(base_flags)
                    update.update({
                        "op_bits": mapped_op,
                        "ctrl_bits": 0,
                        "opcode": f"{mapped_op:02x}",
                        "coeff_val": y_word,
                        "sources": [i1] if i1 is not None else [dst],
                        "op_comment": f"{lhs}={_expanded_from}={op1}{sym}{op2}" if _expanded_from else f"{lhs}={op1}{sym}{op2}",
                        "op_rc": f"{(r1 if r1 else op1)}{sym}{op2}",
                    })
                    core_ops[dst].update(update)
 
                else:
                    # ── 합산 모드: +, -, 기타 ──
                    if not srcs: srcs = [dst]
                    mapped_op = GIMPLE_TO_OP.get(sym, ZOp.ADD)
                    mapped_ctrl = 0
                    if sym == "-":
                        mapped_ctrl = ZCtrl.SUM_NEG
                    _expr_str = f"{op1}" + (f"{sym}{op2}" if op2 else "")
                    _comment = f"{lhs}={_expanded_from}={_expr_str}" if _expanded_from else f"{lhs}={_expr_str}"
                    update = dict(base_flags)
                    update.update({
                        "op_bits": mapped_op,
                        "ctrl_bits": mapped_ctrl,
                        "opcode": f"{mapped_op:02x}",
                        "sources": srcs,
                        "sum_neg": bool(mapped_ctrl & ZCtrl.SUM_NEG),
                        "op_comment": _comment,
                        "op_rc": f"{(r1 if r1 else op1)}" + (f"{sym}{(r2 if r2 else op2)}" if op2 else ""),
                    })
                    core_ops[dst].update(update)
 
 
    # =========================================================================
    # _pass_cond: 조건문 분기 명령                                          [v9]
    # ★ v9 핵심 변경: COND_MAP 하드코딩 → COND_OP_MAP + decide_ctrl_bits()
    # =========================================================================
    def _pass_cond(self, fun, core_ops, reg_map):
        if not getattr(fun, "cfg", None): return

        # ★ v9: 자동 매핑 테이블
        COND_OP_MAP = {
            ">":  ZOp.GTZ,  ">=": ZOp.GTEZ,
            "<":  ZOp.GTEZ, "<=": ZOp.GTZ,    # 반전
            "==": ZOp.EQZ,  "!=": ZOp.NEQZ,
        }
        NEEDS_SUM_NEG = {"<", "<="}
        CMD_NAMES = {
            ZOp.GTZ: "GTZ", ZOp.GTEZ: "GEZ", ZOp.LTZ: "LTZ",
            ZOp.LTEZ: "LEZ", ZOp.EQZ: "EQZ", ZOp.NEQZ: "NEQZ",
        }
        INVERT = {"<": ">=", "<=": ">", ">": "<=", ">=": "<", "==": "!=", "!=": "=="}

        assign_expand = {}
        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleAssign): continue
                if len(stmt.rhs) != 2: continue
                lhs = self._get_clean_name(stmt.lhs)
                if lhs not in reg_map: continue
                sym = self._get_op_symbol(stmt.exprcode)
                if sym in ("+", "-"):
                    op1 = self._get_clean_name(stmt.rhs[0])
                    op2 = self._get_clean_name(stmt.rhs[1])
                    assign_expand[lhs] = (op1, op2, sym)

        cond_count = 0
        skip_set = self.features.get("skip_cond_indices", set())

        for bb in fun.cfg.basic_blocks:
            for stmt in bb.gimple:
                if not isinstance(stmt, gcc.GimpleCond): continue
                if cond_count in skip_set: cond_count += 1; continue

                lhs_nm = self._get_clean_name(stmt.lhs)
                rhs_nm = self._get_clean_name(stmt.rhs)
                op_raw = self._get_op_symbol(stmt.exprcode)

                is_loop = False
                if lhs_nm in assign_expand:
                    exp_op1, exp_op2, _ = assign_expand[lhs_nm]
                    if lhs_nm == exp_op1 or lhs_nm == exp_op2: is_loop = True

                rhs_adjust = 0
                if is_loop:
                    op_use = INVERT.get(op_raw, op_raw)
                    if op_use == ">" and isinstance(stmt.rhs, gcc.IntegerCst):
                        op_use = ">="; rhs_adjust = 1
                else:
                    op_use = op_raw

                # ★ v9: 연산비트 자동 매핑 + 제어비트 자동 결정
                op_bits = COND_OP_MAP.get(op_use, ZOp.GTEZ)
                ctrl_bits = decide_ctrl_bits(op_bits, context='condition')
                if op_use in NEEDS_SUM_NEG:
                    ctrl_bits |= ZCtrl.SUM_NEG

                cmd_name = CMD_NAMES.get(op_bits, "GEZ")
                opcode = f"{op_bits:02x}"
                sum_neg = bool(ctrl_bits & ZCtrl.SUM_NEG)

                key = f"cond_res_{cond_count}"
                if key not in reg_map: cond_count += 1; continue
                dst = reg_map[key]["idx"]

                if lhs_nm in assign_expand:
                    exp_op1, exp_op2, exp_sym = assign_expand[lhs_nm]
                    lhs_src_names = [exp_op1, exp_op2]
                    lhs_display = f"{exp_op1}{exp_sym}{exp_op2}"
                else:
                    lhs_src_names = [lhs_nm]; lhs_display = lhs_nm

                lhs_srcs = []
                for name in lhs_src_names:
                    r = self._find_reg(name, reg_map)
                    idx = self._reg_idx(r)
                    if idx is not None: lhs_srcs.append(idx)

                if isinstance(stmt.rhs, gcc.IntegerCst):
                    v = int(stmt.rhs.constant) + rhs_adjust
                    rhs_idx = self._reg_idx(self._find_reg(str(-v), reg_map))
                else:
                    rhs_idx = self._reg_idx(self._find_reg(rhs_nm, reg_map))

                srcs = list(lhs_srcs)
                if rhs_idx is not None: srcs.append(rhs_idx)
                if not srcs: srcs = [dst]

                if rhs_adjust and isinstance(stmt.rhs, gcc.IntegerCst):
                    adj_v = int(stmt.rhs.constant) + rhs_adjust
                    c_code = f"{lhs_display}{op_use}{adj_v}"
                else:
                    c_code = f"({lhs_display})+{rhs_nm}{op_use}0"

                lhs_regs = "+".join(f"r{i}" for i in lhs_srcs)
                rhs_reg = f"r{rhs_idx}" if rhs_idx is not None else ""
                rc = f"({lhs_regs})+{rhs_reg}{op_use}0 ? outL:inL"

                core_ops[dst].update({
                    "op_bits": op_bits, "ctrl_bits": ctrl_bits,   # ★ v9
                    "opcode": opcode,
                    "sources": srcs,
                    "branch_hold": True, "sum_neg": sum_neg,
                    "op_comment": c_code, "op_rc": rc,
                })
                cond_count += 1

    # =========================================================================
    # 레지스터 검색 + MIF 출력 (원본 그대로)
    # =========================================================================
    def _find_reg(self, clean_name, reg_map):
        if clean_name is None: return None
        if clean_name in reg_map: return reg_map[clean_name]["reg"]
        try:
            v = int(str(clean_name), 0)
            key = f"cst_{v}"
            if key in reg_map: return reg_map[key]["reg"]
        except Exception: pass
        return None

    def _add_line(self, addr, z_val, y_val, core, c_code, reg_comb, cmd, res_val, gpc, pst="", extra_lines=None):
        self.buffer_z[addr] = z_val
        self.buffer_y[addr] = y_val
        pst_col = f"{pst:<4}" if pst else "    "
        base = f"{core:<6} {c_code:<30} {pst_col}{reg_comb:<30} {cmd:<20} {str(res_val):<8} GPC={gpc}"
        if extra_lines:
            if isinstance(extra_lines, str): extra_lines = [extra_lines]
            base = base + "\n" + "\n".join(extra_lines)
        self.buffer_cmt[addr] = base

    def _write_mif_file(self, path, data_dict, cmt_dict, desc, header):
        total_gpcs = 16; end_addr = total_gpcs * 128 - 1
        with open(path, "w", encoding="utf-8") as f:
            f.write("-- single-line comment\n")
            f.write(f"DEPTH = {self.mif_depth}; -- The size of memory in words\n")
            f.write("WIDTH = 32; -- The size of data in bits\n")
            f.write("ADDRESS_RADIX = DEC; -- The radix for address values\n")
            f.write("DATA_RADIX = HEX; -- The radix for data values\n")
            f.write("CONTENT -- start of (address : data pairs)\n")
            f.write("\nBEGIN\n")
            for addr in range(end_addr + 1):
                gpc_num = addr // 128; core_idx = addr % 128
                if core_idx == 0: f.write(self._gpc_header(gpc_num))
                val = data_dict.get(addr, "00000000")
                cmt = cmt_dict.get(addr, None)
                if cmt is None:
                    cmt = f".r{core_idx:<4} {'':30} {'':4}{'':30} {'':20} 0{'':7}GPC={gpc_num}"
                lines = str(cmt).split("\n")
                f.write(f"{addr:<6} : {val}; -- {lines[0]}\n")
                for extra in lines[1:]: f.write(f"-- {extra}\n")
            f.write("END;\n")

    def _gpc_header(self, gpc_num):
        meta = self.gpc_meta.get(gpc_num, None)
        lines = []
        if meta is None:
            lines.append(f"-- GPC {gpc_num} --")
            lines.append("-- LXY(z[k], y[k]), y[127]=32'h00000000, y[126]=32'h00000000,")
            lines.append("-- z[k]=b{HW, LP_YXA, C_TYPE} = b{00 ,00_000, 1_1111} = h{01f}")
            lines.append("-- Each character in {HW, LP_YXA, C_TYPE} except '_'  represents control-bits")
            lines += self._gpc_header_yinfo()
        elif meta["type"] == "init":
            name = meta["name"]
            lines.append(f"-- GPC {gpc_num} -- {name} --  init")
            lines.append("-- LXY(z[k], y[k]), y[127]=32'h00000000, y[126]=32'h00000000,")
            lines.append("-- z[k]=12'b{HI, LP_YXA, C_TYPE} = 12'b{10 ,00_000, 1_1111} = 12'h{01f}")
            lines.append("-- Each character in {HI, LP_YXA, C_TYPE} except '_'  represents control-bits")
            lines += self._gpc_header_yinfo()
            if meta.get("has_mac"):
                lines.append("--"); lines += self._gpc_header_pst_columns()
        elif meta["type"] == "op":
            name = meta["name"]
            lines.append(f"-- GPC {gpc_num} -- {name} --  action")
            lines.append("-- ADD(z[k], y[k]),  y[127]= 32'h80000000, y[126]= 32'h00000000,")
            lines.append("-- z(k)= 12'b{HI, LP_YXA, C_TYPE} = 12'b{10 ,00_000, 0_0010} = 32'h{802}, ADD-> GTZ")
            lines.append("-- Each character in {HI, LP_YXA, C_TYPE} except '_'  represents control-bits")
            lines += self._gpc_header_yinfo()
            if meta.get("has_mac"):
                lines.append("--"); lines += self._gpc_header_pst_columns()
        return "\n" + "\n".join(lines) + "\n"

    def _gpc_header_yinfo(self):
        return [
            "-- y[127][31] means branch-indicator if (loopen_1d==1)",
            "-- y[127][30] means branch-indicator if (loopen_2d==1)",
            "-- y[127][15:0] means loopin_offset_1d/loopin_offset_2d if triggered by loopen_1d/loopen_2d",
            "-- y[126][31:0] means return address when return initiated",
        ]

    def _gpc_header_pst_columns(self):
        return [
            "-- <---- .mif  --><-------------------------------------------- .eFlow  -------------------------------------------->",
            f"--     {'binFile':<19}{'Mnemonic':<19}{'pSt(pipeline stage)':<21}{'regSet':<26}{'cmd':<24}{'val':<8}gpc",
            "-- <------------------------------------------------------------------------------------------------------------------->",
        ]