#!/usr/bin/env python3
"""Find recompiled functions that were cut short by a spurious ELF symbol.

N64Recomp delimits a function by the next symbol address, so a stray symbol in
the middle of a real function splits it in two. The first half then ends without
restoring the registers it saved and without jumping to $ra, so control returns
with a stack pointer that is still pointing at the callee's frame. Every caller
above it then works from the wrong frame, which is how a clear loop ended up
writing over the scheduler queues.

The signature is simple: a function body with no "jr $ra" in it never returns
normally. Report those, together with whether the following function starts at
the very next instruction, which is what a split looks like.
"""

import collections
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)\s*(.*)$")

Func = collections.namedtuple("Func", "name file start end last_insn returns delegated")


def scan():
    funcs = []

    for path in sorted(FUNCS.glob("*.c")):
        current = None
        insns = []

        def flush():
            if current is None:
                return
            name, body = current
            if not insns:
                return
            addrs = [a for a, _, _ in insns]
            returns = any(m == "jr" and "$ra" in ops for _, m, ops in insns)
            last = insns[-1]
            funcs.append(Func(name, path.name, min(addrs), max(addrs),
                              f"{last[1]} {last[2]}".strip(), returns,
                              "turok2_si_" in body))

        for line in path.read_text().splitlines():
            match = FUNC_RE.match(line)
            if match:
                flush()
                current = (match.group(1), "")
                insns = []
                continue
            insn = INSN_RE.match(line)
            if insn and current is not None:
                insns.append((int(insn.group(1), 16), insn.group(2), insn.group(3)))
            elif current is not None and "turok2_si_" in line:
                current = (current[0], "turok2_si_")
        flush()

    return funcs


def main():
    funcs = scan()
    by_start = {f.start: f for f in funcs}
    starts = sorted(by_start)

    broken = [f for f in funcs if not f.returns and not f.delegated]
    broken.sort(key=lambda f: f.start)

    print(f"funcoes analisadas: {len(funcs)}")
    print(f"sem 'jr $ra' (candidatas a truncadas): {len(broken)}")
    print()

    contiguous = []
    for f in broken:
        following = next((s for s in starts if s > f.end), None)
        gap = following - f.end if following is not None else None
        if gap == 4:
            contiguous.append((f, by_start[following]))

    print(f"das quais seguidas imediatamente por outra funcao (split classico): "
          f"{len(contiguous)}")
    print()
    print(f"{'funcao':<20} {'faixa':<22} {'proxima':<20} {'ultima instrucao'}")
    print("-" * 92)
    for f, nxt in contiguous:
        print(f"{f.name:<20} 0x{f.start:08X}-0x{f.end:08X}  {nxt.name:<20} {f.last_insn}")

    orphans = [f for f in broken if not any(f is a for a, _ in contiguous)]
    if orphans:
        print()
        print(f"sem sucessor contiguo ({len(orphans)}), provavelmente noreturn ou tail call:")
        for f in orphans[:20]:
            print(f"  {f.name:<20} 0x{f.start:08X}-0x{f.end:08X}  {f.last_insn}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
