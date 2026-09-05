#!/bin/sh
# Runs the same binary repeatedly and reports how often the intro break fires.
#
# The break at 0x002088B0 is not deterministic: with the controller reported, some
# runs die there and some walk past it into later screens. That matters for where
# to look, because an intermittent failure points at ordering between threads
# rather than at a wrong constant, and it is far cheaper to measure the rate first
# than to keep adding instrumentation.
#
# Each run is given a fixed wall time and then killed, so the question asked is
# "did it break within N seconds", not "did it break eventually".
#
# Usage: tools/measure-flakiness.sh [runs] [seconds_per_run]

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"

RUNS="${1:-6}"
SECONDS_PER_RUN="${2:-40}"
OUT="$ROOT/flakiness"

rm -rf "$OUT"
mkdir -p "$OUT"

echo "$RUNS execucoes de ${SECONDS_PER_RUN}s cada, com controle reportado"
echo

quebrou=0
sobreviveu=0

i=1
while [ "$i" -le "$RUNS" ]; do
    log="$OUT/run$i.log"
    TUROK2_ENABLE_INPUT=1 ./build-app/Turok2Recompiled baserom.us.z64 > "$log" 2>&1 &
    pid=$!

    sleep "$SECONDS_PER_RUN"
    kill -9 "$pid" 2>/dev/null
    wait "$pid" 2>/dev/null

    if grep -q 'Encountered break' "$log"; then
        quebrou=$(( quebrou + 1 ))
        estado="QUEBROU"
    else
        sobreviveu=$(( sobreviveu + 1 ))
        estado="sobreviveu"
    fi

    # How far it got, measured by the richest screen it drew. Match only the
    # per-frame summary line: a looser pattern also catches the per-rectangle
    # lines, which passed through the rewrite untouched and buried the summary.
    telas=$(grep -o '[0-9]* of [0-9]* rectangles glyph sized' "$log" \
            | sed 's/\([0-9]*\) of \([0-9]*\).*/\1\/\2/' | sort -u | tr '\n' ' ')
    listas=$(grep -c 'dl:mix\] task' "$log")
    sonda=$(grep -c 'func_002079D8 voltou' "$log")
    a994=$(grep -c '\[a994\]' "$log")

    printf 'run %d: %-11s telas: %s| buffer: %s  objeto global: %s\n' \
        "$i" "$estado" "${telas:-nenhuma }" "$sonda" "$a994"

    i=$(( i + 1 ))
done

echo
echo "quebrou: $quebrou de $RUNS    sobreviveu: $sobreviveu de $RUNS"
echo "logs em $OUT"
