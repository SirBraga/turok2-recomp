#!/bin/sh
# Iterate N64Recomp, stubbing only functions it refuses (CP0 / unsupported).
set -e
root=$(cd "$(dirname "$0")/.." && pwd)
toml="$root/turok2.rev01.toml"
recomp="/Users/sirbraga/Documents/ChatGPT/n64Recomp/tools/N64Recomp/build/N64Recomp"
log="$root/analysis/n64recomp-smoke.log"
mkdir -p "$root/RecompiledFuncs" "$root/analysis"

i=1
while [ "$i" -le 40 ]; do
    echo "=== pass $i ==="
    set +e
    "$recomp" "$toml" >"$log" 2>&1
    status=$?
    set -e
    if [ "$status" -eq 0 ]; then
        echo "N64Recomp succeeded on pass $i"
        tail -20 "$log"
        exit 0
    fi
    func=$(rg -o "Error in recompiling ([A-Za-z0-9_]+)" -r '$1' "$log" | tail -1)
    if [ -z "$func" ]; then
        func=$(rg -o "Failed to analyze ([A-Za-z0-9_]+)" -r '$1' "$log" | tail -1)
    fi
    if [ -z "$func" ]; then
        echo "N64Recomp failed without a recompile target:"
        tail -40 "$log"
        exit 1
    fi
    if rg -q "\"$func\"" "$toml"; then
        echo "Already stubbed $func; refusing to loop"
        tail -40 "$log"
        exit 1
    fi
    echo "stubbing $func"
    python3 - "$toml" "$func" <<'PY'
from pathlib import Path
import sys
path = Path(sys.argv[1])
func = sys.argv[2]
text = path.read_text()
old = "stubs = [\n"
if old not in text:
    raise SystemExit("stubs array not found")
path.write_text(text.replace(old, old + f'    "{func}",\n', 1))
PY
    i=$((i + 1))
done
echo "hit stub cap"
exit 1
