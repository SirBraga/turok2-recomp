#!/usr/bin/env python3
"""Find stack-unbalanced functions reachable from a given entry point.

A recompiled function that decrements $sp in its prologue and never adds it back
leaves ctx->r29 shifted when it returns. Every $sp relative access the caller
makes afterwards then lands in the callee's dead frame, which is how a saved
register such as $s0 comes back holding whatever the callee wrote there.

Scanning every function this way produces a lot of noise: a thread's service
loop, for example, never restores $sp because it never returns, and that is
correct. Restricting the scan to the call tree below one entry point makes the
result small enough to inspect by hand.

Usage:
    find-unbalanced-in-tree.py entry_00206990 [more entries...]
"""
import collections
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
# Prologue and epilogue both appear as an add of a constant to ctx->r29.
SP_ADJ_RE = re.compile(r"ctx->r29 = ADD32\(ctx->r29, (-?0X[0-9A-F]+)\)")
# A direct call in the generated C is a plain call to another generated function.
CALL_RE = re.compile(r"^\s*(\w+)\(rdram, ctx\);")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)")


def parse():
    bodies = {}
    order = []
    current = None
    for path in sorted(FUNCS.glob("*.c")):
        for line in path.read_text(errors="replace").splitlines():
            match = FUNC_RE.match(line)
            if match is not None:
                current = match.group(1)
                bodies[current] = {"file": path.name, "lines": [], "order": len(order)}
                order.append(current)
                continue
            if current is not None:
                bodies[current]["lines"].append(line)
    return bodies


def analyse(bodies):
    info = {}
    for name, data in bodies.items():
        adjustments = []
        calls = set()
        indirect = 0
        saves_ra = False
        restores_ra = False
        has_jr_ra = False
        for line in data["lines"]:
            for value in SP_ADJ_RE.findall(line):
                adjustments.append(int(value, 16))
            call = CALL_RE.match(line)
            if call is not None and call.group(1) not in ("if", "while", "for"):
                calls.add(call.group(1))
            if "LOOKUP_FUNC" in line:
                indirect += 1
            if "= ctx->r31;" in line and "MEM_W" in line:
                saves_ra = True
            if "ctx->r31 = MEM_W" in line:
                restores_ra = True
            insn = INSN_RE.match(line)
            if insn is not None and insn.group(2) == "jr":
                has_jr_ra = True
        info[name] = {
            "file": data["file"],
            "prologue": -min(adjustments) if adjustments and min(adjustments) < 0 else 0,
            "net": sum(adjustments),
            "calls": calls,
            "indirect": indirect,
            "saves_ra": saves_ra,
            "restores_ra": restores_ra,
            "has_jr_ra": has_jr_ra,
        }
    return info


def main():
    entries = sys.argv[1:] or ["entry_00206990"]
    bodies = parse()
    info = analyse(bodies)

    missing = [entry for entry in entries if entry not in info]
    if missing:
        print("nao encontradas:", ", ".join(missing))

    seen = set()
    queue = collections.deque(entry for entry in entries if entry in info)
    depth = {entry: 0 for entry in queue}
    parent = {}
    while queue:
        name = queue.popleft()
        if name in seen:
            continue
        seen.add(name)
        for callee in sorted(info[name]["calls"]):
            if callee in info and callee not in seen:
                depth[callee] = depth[name] + 1
                parent[callee] = name
                queue.append(callee)

    print(f"funcoes alcancaveis a partir de {', '.join(entries)}: {len(seen)}")

    suspects = []
    for name in sorted(seen):
        data = info[name]
        # A function that saved the return address but never reloaded it cannot
        # return correctly, and one whose stack adjustments do not cancel leaves
        # $sp shifted for its caller.
        if data["prologue"] > 0 and data["net"] != 0:
            suspects.append(name)

    print(f"das quais com pilha desbalanceada: {len(suspects)}")
    print()
    header = f"{'funcao':<24} {'frame':>6} {'net':>7} {'ra':>6} {'jr':>4} {'prof':>5}  arquivo / chamada acima"
    print(header)
    print("-" * len(header))
    for name in suspects:
        data = info[name]
        ra = ("save" if data["saves_ra"] else "----") + ("/rest" if data["restores_ra"] else "/----")
        print(f"{name:<24} {data['prologue']:>6} {data['net']:>7} {ra:>6} "
              f"{'sim' if data['has_jr_ra'] else 'nao':>4} {depth[name]:>5}  "
              f"{data['file']} <- {parent.get(name, '(raiz)')}")


if __name__ == "__main__":
    main()
