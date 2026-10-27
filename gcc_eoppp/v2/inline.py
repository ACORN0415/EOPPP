"""
inline.py — 2.0 IR 함수 인라이닝.

하드웨어에 CALL/RETURN 이 없으므로 [M-inline] 호출은 모두 호출 지점에 펼친다:
  호출 블록을 호출 지점에서 둘로 나눔 → 인자를 피호출 함수 매개변수(이름 앞에 고유 접두사)로 복사
  → 피호출 함수 블록들(라벨/변수에 같은 접두사) → ret 은 결과 복사 + 이어지는 블록으로 jump.
재귀(직접/간접)는 펼칠 수 없으므로 거부한다.
"""

import copy

try:
    from .backend import V2Error
except ImportError:
    from backend import V2Error


def _rename_operand(o, ren):
    return ("var", ren(o[1])) if o and o[0] == "var" else o


def _rename_instr(ins, ren):
    ins = dict(ins)
    for k in ("a", "b", "index"):
        if k in ins and ins[k] is not None:
            ins[k] = _rename_operand(ins[k], ren)
    if ins.get("dst"):
        ins["dst"] = ren(ins["dst"])
    if "args" in ins:
        ins["args"] = [_rename_operand(a, ren) for a in ins["args"]]
    return ins


def inline_all(fn, library, max_depth=16):
    """fn 안의 모든 call 을 library {이름: IR 함수} 로 펼친 새 IR 함수를 돌려준다."""
    fn = copy.deepcopy(fn)
    counter = [0]

    def expand(f, stack):
        if len(stack) > max_depth:
            raise V2Error(f"inlining depth > {max_depth}: {' -> '.join(stack)}")
        out_blocks = []
        arrays = dict(f.get("arrays", {}))
        work = list(f["blocks"])
        while work:
            b = work.pop(0)
            idx = next((k for k, ins in enumerate(b["instrs"]) if ins["op"] == "call"), None)
            if idx is None:
                out_blocks.append(b)
                continue
            call = b["instrs"][idx]
            name = call["func"]
            if name in stack:
                raise V2Error(f"recursive call {' -> '.join(stack + [name])} cannot be inlined "
                              f"(no CALL/RETURN in hardware)")
            if name not in library:
                raise V2Error(f"call to '{name}' which is not available for inlining")
            counter[0] += 1
            pre = f"{name}#{counter[0]}:"
            callee = expand(library[name], stack + [name])
            arrays.update(callee.get("arrays", {}))
            cont = f"{b['name']}.ret{counter[0]}"

            def ren(v, pre=pre):
                return pre + v

            head = {"name": b["name"], "instrs": b["instrs"][:idx], "term": None}
            if len(call["args"]) != len(callee["params"]):
                raise V2Error(f"call to '{name}' with {len(call['args'])} args, "
                              f"expected {len(callee['params'])}")
            for p, a in zip(callee["params"], call["args"]):
                head["instrs"].append({"op": "copy", "dst": ren(p), "a": a})
            head["term"] = {"kind": "jump", "target": pre + callee["entry"]}
            out_blocks.append(head)
            for cb in callee["blocks"]:
                nb = {"name": pre + cb["name"],
                      "instrs": [_rename_instr(i, ren) for i in cb["instrs"]]}
                t = dict(cb["term"])
                if t["kind"] == "jump":
                    t["target"] = pre + t["target"]
                elif t["kind"] == "br":
                    t["a"], t["b"] = _rename_operand(t["a"], ren), _rename_operand(t["b"], ren)
                    t["t"], t["f"] = pre + t["t"], pre + t["f"]
                else:                                              # ret → 결과 복사 + 이어가기
                    if call.get("dst"):
                        val = _rename_operand(t["val"], ren) if t.get("val") else ("const", 0)
                        nb["instrs"].append({"op": "copy", "dst": call["dst"], "a": val})
                    t = {"kind": "jump", "target": cont}
                nb["term"] = t
                out_blocks.append(nb)
            # 호출 뒤 나머지는 이어지는 블록으로 (그 안의 다음 call 은 다시 처리)
            work.insert(0, {"name": cont, "instrs": b["instrs"][idx + 1:], "term": b["term"]})
        g = dict(f)
        g["blocks"] = out_blocks
        g["arrays"] = arrays
        g["calls"] = []
        return g

    return expand(fn, [fn["name"]])
