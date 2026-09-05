#!/bin/sh
# Names the thread that writes into another thread's stack.
#
# Measured so far: the dispatch loop thread (entry 0x00201C60, stack top
# 0x800D81B0) loses a callee saved register out of its stack, with its own stack
# pointer unchanged and none of its calls responsible. The value that lands there
# is foreign data, instruction words on one run and the floats 1.0 and 128.0 on
# another. Thread 5's stack top sits only 0xBB8 above thread 3's, so a concurrent
# writer is the remaining explanation.
#
# A plain watchpoint is not enough, because the address is also written legitimately
# by whichever handler currently owns that stack region. So take many hits and
# record the thread and top frames of each: hits from the owning thread are normal,
# and the first hit from another thread is the culprit.
#
# Usage: tools/watch-corruption.sh [n64_address] [hits]

set -e

ADDR="${1:-0x800D8158}"
HITS="${2:-40}"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"

OFFSET=$(( ADDR & 0x7FFFFF ))

echo "vigiando $ADDR (offset 0x$(printf '%X' "$OFFSET")), ate $HITS acertos"

# Build the repeated report-then-continue pairs.
STEPS=""
i=0
while [ "$i" -lt "$HITS" ]; do
    STEPS="$STEPS -o \"script print('=== HIT ===')\" -o \"thread info\" -o \"thread backtrace 4\" -o continue"
    i=$(( i + 1 ))
done

eval lldb -b \
  -o \"settings set target.env-vars TUROK2_ENABLE_INPUT=1\" \
  -o \"breakpoint set --name osViSwapBuffer\" \
  -o \"run baserom.us.z64\" \
  -o \"breakpoint delete 1\" \
  -o \"watchpoint set expression -w write -s 4 -- '(void*)(turok2_rdram_base + $OFFSET)'\" \
  $STEPS \
  -o \"quit\" \
  ./build-app/Turok2Recompiled
