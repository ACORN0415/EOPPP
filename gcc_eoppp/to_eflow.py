import gcc

class EflowExtension(gcc.GimplePass):
    def __init__(self):
        super(EflowExtension, self).__init__(name='to-eflow')
        self.gpc = 0

    def execute(self, fun):
        if fun.decl.name not in ['checkclkfibo', 'checkclkfir']:
            return

        # GPC 값 설정 (FIBO=1, FIR=2~3 등 논문 예시 기반) [cite: 357, 1070]
        self.gpc = 1 if 'fibo' in fun.decl.name else 2
        
        out_name = f"{fun.decl.name}.mif"
        with open(out_name, 'w') as f:
            # MIF 헤더 작성 [cite: 606-611]
            f.write("DEPTH = 16384;\nWIDTH = 32;\nADDRESS_RADIX = DEC;\nDATA_RADIX = HEX;\nCONTENT BEGIN\n\n")
            
            line_idx = 0
            for bb in fun.cfg.basic_blocks:
                for stmt in bb.gimple:
                    # 128n + k 주소 체계 적용 (여기서는 순차 배정 예시) 
                    core_num = line_idx % 128
                    mif_addr = (self.gpc * 128) + core_num
                    
                    line = self.generate_eflow_line(mif_addr, core_num, stmt)
                    if line:
                        f.write(line + "\n")
                        line_idx += 1
            
            f.write("\nEND;")
        print(f"Generated EOPPP MIF: {out_name}")

    def generate_eflow_line(self, addr, core, stmt):
        z_code = 0
        cmd = ""
        c_code = str(stmt).replace('"', '')
        val = "0" # 시뮬레이션 결과값 (기본 0)
        
        if isinstance(stmt, gcc.GimpleAssign):
            lhs = str(stmt.lhs)
            operands = stmt.rhs
            
            # Z-bank [4:0] Opcode 매핑 
            if stmt.exprcode == gcc.PlusExpr:
                z_code |= 0x00 # ADD
                cmd = f"ADD(000, 00000000)"
            elif stmt.exprcode == gcc.MultExpr:
                z_code |= 0x08 # SMT
                cmd = f"SMT(208, 00000000)"
            elif len(operands) == 1:
                z_code |= 0x1F # LXY
                cmd = f"LXY(01f, 0)"

            # 필수 제어 비트: WRITE_EN(Z[10]), XD_MEM(Z[6]) 
            z_code |= (1 << 10) 
            z_code |= (1 << 6)
            
            hex_data = hex(z_code)[2:].zfill(8)
            
            # [mif address] : [mif data]; [코어번호] [C코드] [레지스터] [eFlow명령어] [결과값] [GPC값] 
            return f"{addr} : {hex_data}; -- .r{core} {c_code} r{core} {cmd} {val} GPC={self.gpc}"
        
        return None

ps = EflowExtension()
ps.register_after('ssa')