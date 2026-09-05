#!/bin/sh
# Regenerates RecompiledFuncs/ and reapplies the manual fixes on top.
#
# RecompiledFuncs/ is gitignored, so the hand edits it carries only exist on
# disk. Running N64Recomp directly would silently discard them. This script keeps
# them reproducible: regenerate, then apply patches/recompiled-funcs-fixes.patch.
#
# The fixes are all the same defect class. Provisional symbols in the ELF sit
# either on a jr's delay slot or in the middle of a function, so the recompiler
# ends the function early and drops the stack restore or the rest of the body.
# Each hunk adds back the one statement that was cut off.
#
# Usage:
#   tools/regen-recompiled-funcs.sh              fixes only
#   tools/regen-recompiled-funcs.sh --diagnostics also apply the debug logging
#
# Verify afterwards with:
#   tools/diff-recompiled-funcs.sh

set -e

project_dir=$(cd "$(dirname "$0")/.." && pwd)
recomp_bin="$project_dir/../../tools/N64Recomp/build/N64Recomp"
config="$project_dir/turok2.us.toml"
out_dir="$project_dir/RecompiledFuncs"
patch_dir="$project_dir/patches"

if [ ! -x "$recomp_bin" ]; then
    echo "N64Recomp not built at $recomp_bin" >&2
    exit 1
fi

backup="$out_dir.bak.$(date +%Y%m%d%H%M%S)"
if [ -d "$out_dir" ]; then
    echo "Backing up current output to $backup"
    cp -r "$out_dir" "$backup"
fi

echo "Regenerating $out_dir"
cd "$project_dir"
"$recomp_bin" "$config"

# The hand written hunks in patches/recompiled-funcs-fixes.patch are superseded
# by these passes, which derive the same edits, and many more of the same
# classes, from the generated output itself. Order matters: moving an entry point
# rewrites a name and a table entry; restoring a delay slot gives a function back
# its return, so the reconnection pass does not mistake it for an unfinished one;
# only then is it safe to look for bodies that never return.
echo "Moving symbols placed before their real entry point"
python3 "$project_dir/tools/fix-misplaced-entries.py"

echo "Restoring delay slots swallowed by a stray symbol"
python3 "$project_dir/tools/fix-lost-delay-slots.py"

echo "Reconnecting functions split by a stray symbol"
python3 "$project_dir/tools/merge-split-funcs.py" --apply

echo "Reconnecting the split floating-point branch at 0x0021E500"
python3 "$project_dir/tools/patch-split-fp-branch.py"

echo "Restoring the Iguana object's two-destination jump table"
python3 "$project_dir/tools/patch-iguana-jumptable.py"

echo "Pointing the raw SI entry points at the native implementation"
python3 "$project_dir/tools/patch-si-funcs.py"

echo "Pointing the CP0-only libultra wrappers at the native implementation"
python3 "$project_dir/tools/patch-cp0-libultra.py"

echo "Restoring unmapped gameplay and audio callbacks"
python3 "$project_dir/tools/patch-optional-callback.py"

if [ "$1" = "--diagnostics" ]; then
    echo "Applying $patch_dir/recompiled-funcs-diagnostics.patch"
    patch -p1 -d "$project_dir" < "$patch_dir/recompiled-funcs-diagnostics.patch"
fi

echo
echo "Done. Previous output kept at $backup"
echo "Rebuild with: cmake --build build-app --target Turok2Recompiled -j 8"
