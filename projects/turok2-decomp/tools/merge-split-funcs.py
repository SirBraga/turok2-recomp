#!/usr/bin/env python3
"""Reconnect recompiled functions that a spurious ELF symbol split in two.

N64Recomp ends a function at the next symbol address. The ELF used here carries
many symbols that land in the middle of a real function, so the first half is
emitted without its epilogue: it never restores the saved registers and never
jumps to $ra. Control then returns to the caller with the stack pointer still
inside the callee frame, and everything above it works from the wrong frame.
That is how a clear loop ended up zeroing the scheduler queues and the PIF
buffer.

On the hardware there is no split at all: the first half simply runs into the
second, because they are consecutive instructions. So whenever a function has no
"jr $ra" and another function starts at its very next instruction, appending a
tail call to that successor restores the original control flow. This is the same
edit that was applied by hand to ten functions, generalized.

Cases that must be left alone: a body whose control already transfers elsewhere
unconditionally, since it never falls through, and a body that is data misread
as code.

Run with --apply to write the changes; the default only reports them.
"""

import argparse
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)\s*(.*)$")

# Mnemonics that hand control away for good, so the instruction stream does not
# continue into the next function.
TRANSFERS = {"j", "jr", "b"}

# A function that opens by reserving its own stack is a function in its own right,
# not the tail of the one before it.
ALLOC_RE = re.compile(r"^\$sp, \$sp, -0x([0-9A-F]+)$")

MARKER = "turok2: reconnected split function"


class Body:
    __slots__ = ("name", "path", "start", "line_start", "line_end", "insns", "text")

    def __init__(self, name, path, line_start):
        self.name = name
        self.path = path
        self.line_start = line_start
        self.line_end = None
        self.insns = []
        self.text = ""
        self.start = None

    @property
    def end(self):
        return max(a for a, _, _ in self.insns)

    @property
    def returns(self):
        return any(m == "jr" and "$ra" in ops for _, m, ops in self.insns)

    @property
    def transfers_away(self):
        # The final instruction is normally the delay slot of the one before it,
        # so an unconditional jump can sit in either position.
        return any(m in TRANSFERS for _, m, _ in self.insns[-2:])

    @property
    def is_data(self):
        return all(m.startswith(".") for _, m, _ in self.insns)


def collect():
    bodies = []
    for path in sorted(FUNCS.glob("*.c")):
        lines = path.read_text().splitlines(keepends=True)
        current = None
        for index, line in enumerate(lines):
            match = FUNC_RE.match(line.rstrip("\n"))
            if match:
                if current is not None:
                    current.line_end = index
                    bodies.append(current)
                current = Body(match.group(1), path, index)
                continue
            if current is None:
                continue
            current.text += line
            insn = INSN_RE.match(line.rstrip("\n"))
            if insn:
                current.insns.append((int(insn.group(1), 16), insn.group(2), insn.group(3)))
        if current is not None:
            current.line_end = len(lines)
            bodies.append(current)
    return [b for b in bodies if b.insns]


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--apply", action="store_true")
    args = parser.parse_args()

    bodies = collect()
    starts = {}
    for body in bodies:
        body.start = min(a for a, _, _ in body.insns)
        starts.setdefault(body.start, body)

    ordered = sorted(starts)

    merges, skipped = [], []
    for body in bodies:
        if body.returns or MARKER in body.text or "turok2_si_" in body.text:
            continue
        successor_start = body.end + 4
        successor = starts.get(successor_start)
        if successor is None or successor.name == body.name:
            continue
        if body.is_data:
            skipped.append((body, successor, "corpo e dado, nao codigo"))
            continue
        if body.transfers_away:
            last = body.insns[-2:]
            why = " / ".join(f"{m} {o}".strip() for _, m, o in last)
            skipped.append((body, successor, f"transfere controle: {why}"))
            continue

        # Two functions that merely sit next to each other are not one function.
        # func_00201C60 reserves 0x20 of stack and func_00201CC0, right after it,
        # reserves 0x30 and has its own epilogue; calling the second from the end
        # of the first ran a whole unrelated function and left the worker thread
        # receiving on a garbage queue pointer. A successor that sets up its own
        # frame is an independent function, whatever the first one looks like.
        first = successor.insns[0]
        if first[1] == "addiu" and ALLOC_RE.match(first[2]):
            skipped.append((body, successor, "sucessor tem prologo proprio"))
            continue

        merges.append((body, successor))

    print(f"corpos analisados: {len(bodies)}")
    print(f"a reconectar: {len(merges)}")
    print(f"deixados de fora: {len(skipped)}")
    print()
    for body, successor, why in skipped:
        print(f"  fora: {body.name} -> {successor.name}  ({why})")

    if not args.apply:
        print()
        print("simulacao apenas; use --apply para gravar")
        for body, successor in merges[:10]:
            print(f"  {body.name} -> {successor.name}")
        return 0

    # Group by file so each file is rewritten once, from the bottom up to keep
    # the line numbers of earlier edits valid.
    by_path = {}
    for body, successor in merges:
        by_path.setdefault(body.path, []).append((body, successor))

    for path, entries in by_path.items():
        lines = path.read_text().splitlines(keepends=True)
        for body, successor in sorted(entries, key=lambda e: e[0].line_start, reverse=True):
            # The generated bodies close with ";}" on its own line. Insert ahead
            # of that, otherwise the call lands at file scope and will not
            # compile.
            close = body.line_end - 1
            while close > body.line_start and lines[close].strip() in ("", "}"):
                if lines[close].strip() == "}":
                    break
                close -= 1
            while close > body.line_start and lines[close].strip() not in (";}", "}"):
                close -= 1
            if lines[close].strip() not in (";}", "}"):
                print(f"  aviso: fechamento de {body.name} nao encontrado, ignorada")
                continue

            # A hand written fix may already end the body with this same call.
            previous = close - 1
            while previous > body.line_start and (
                lines[previous].strip() == "" or lines[previous].lstrip().startswith("//")
            ):
                previous -= 1
            if lines[previous].strip() == f"{successor.name}(rdram, ctx);":
                continue

            insert = (
                f"    // {MARKER}: a stray ELF symbol at 0x{successor.start:08X} ended\n"
                f"    // this function early, leaving it without its epilogue. On the\n"
                f"    // hardware execution simply continues into the next instruction.\n"
                f"    {successor.name}(rdram, ctx);\n"
            )
            lines.insert(close, insert)
        path.write_text("".join(lines))
        print(f"{path.name}: {len(entries)} reconectadas")

    return 0


if __name__ == "__main__":
    sys.exit(main())
