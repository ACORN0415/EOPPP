"""
2.0 IR — GIMPLE에서 내린 단순한 제어 흐름 IR (JSON으로 저장 가능).

  피연산자  ("var", 이름) | ("const", 정수)
  명령      {"op": "copy", "dst", "a"}
            {"op": "add" | "sub" | "mul" | "shl" | "shr", "dst", "a", "b"}
            {"op": "load",  "dst", "array", "index"}      dst = array[index]
            {"op": "store", "array", "index", "a"}        array[index] = a
            {"op": "call",  "dst" | None, "func", "args"} (인라이닝 전에만 존재)
  종료      {"kind": "jump", "target"}
            {"kind": "br", "cmp", "a", "b", "t", "f"}      if (a cmp b) goto t else f
            {"kind": "ret", "val": 피연산자 | None}
  함수      {"name", "params", "blocks": [{"name", "instrs", "term"}], "entry",
             "arrays": {이름: {"size", "init"}}, "stream_ok": {배열: true}}

모든 값은 32비트 부호 정수다 (2.0 일반 경로는 64비트 변수를 받지 않는다).
"""

import copy


def wrap32(x):
    return ((int(x) + (1 << 31)) % (1 << 32)) - (1 << 31)


CMP = {
    ">": lambda a, b: a > b, ">=": lambda a, b: a >= b,
    "<": lambda a, b: a < b, "<=": lambda a, b: a <= b,
    "==": lambda a, b: a == b, "!=": lambda a, b: a != b,
}


def operand_vars(o):
    return [o[1]] if o and o[0] == "var" else []


def instr_reads(ins):
    op = ins["op"]
    if op in ("copy",):
        return operand_vars(ins["a"])
    if op in ("add", "sub", "mul", "shl", "shr"):
        return operand_vars(ins["a"]) + operand_vars(ins["b"])
    if op == "load":
        return operand_vars(ins["index"])
    if op == "store":
        return operand_vars(ins["index"]) + operand_vars(ins["a"])
    if op == "call":
        return [v for a in ins["args"] for v in operand_vars(a)]
    return []


def term_reads(t):
    if t["kind"] == "br":
        return operand_vars(t["a"]) + operand_vars(t["b"])
    if t["kind"] == "ret" and t.get("val"):
        return operand_vars(t["val"])
    return []


def successors(t):
    if t["kind"] == "jump":
        return [t["target"]]
    if t["kind"] == "br":
        return [t["t"], t["f"]]
    return []


class Interpreter:
    """IR을 C 의미대로 실행 (GIMPLE → IR 변환과 인라이닝 검증용)."""

    def __init__(self, functions, arrays=None, max_steps=10_000_000):
        self.functions = {f["name"]: f for f in functions}
        self.arrays = copy.deepcopy(arrays or {})
        self.max_steps = max_steps
        self.steps = 0

    def val(self, env, o):
        if o is None:
            return 0
        return o[1] if o[0] == "const" else env.get(o[1], 0)

    def run(self, name, args=()):
        f = self.functions[name]
        env = {p: wrap32(a) for p, a in zip(f["params"], args)}
        blocks = {b["name"]: b for b in f["blocks"]}
        cur = f["entry"]
        while True:
            b = blocks[cur]
            for ins in b["instrs"]:
                self.steps += 1
                if self.steps > self.max_steps:
                    raise RuntimeError("step limit")
                op = ins["op"]
                if op == "copy":
                    env[ins["dst"]] = wrap32(self.val(env, ins["a"]))
                elif op in ("add", "sub", "mul", "shl", "shr"):
                    a, c = self.val(env, ins["a"]), self.val(env, ins["b"])
                    r = {"add": lambda: a + c, "sub": lambda: a - c, "mul": lambda: a * c,
                         "shl": lambda: a << c, "shr": lambda: a >> c}[op]()
                    env[ins["dst"]] = wrap32(r)
                elif op == "load":
                    env[ins["dst"]] = self.arrays[ins["array"]][self.val(env, ins["index"])]
                elif op == "store":
                    self.arrays[ins["array"]][self.val(env, ins["index"])] = \
                        wrap32(self.val(env, ins["a"]))
                elif op == "call":
                    r = self.run(ins["func"], [self.val(env, a) for a in ins["args"]])
                    if ins.get("dst"):
                        env[ins["dst"]] = wrap32(r if r is not None else 0)
            t = b["term"]
            if t["kind"] == "jump":
                cur = t["target"]
            elif t["kind"] == "br":
                cur = t["t"] if CMP[t["cmp"]](self.val(env, t["a"]), self.val(env, t["b"])) else t["f"]
            else:
                return self.val(env, t["val"]) if t.get("val") else None
