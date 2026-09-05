#!/bin/sh
# Compares RecompiledFuncs/ against a freshly generated copy and prints the
# differences, which are exactly the manual edits currently carried on disk.
#
# Use this to refresh the patches after adding a new fix by hand:
#   tools/diff-recompiled-funcs.sh > patches/recompiled-funcs-all.patch
#
# It writes the pristine output to a temporary directory and never touches
# RecompiledFuncs/.

set -e

project_dir=$(cd "$(dirname "$0")/.." && pwd)
recomp_bin="$project_dir/../../tools/N64Recomp/build/N64Recomp"
out_dir="$project_dir/RecompiledFuncs"

if [ ! -x "$recomp_bin" ]; then
    echo "N64Recomp not built at $recomp_bin" >&2
    exit 1
fi

pristine=$(mktemp -d)
config=$(mktemp)
trap 'rm -rf "$pristine" "$config"' EXIT

# Paths in the config are resolved relative to the config file, so absolutize the
# ones that matter before moving it to a temporary location.
sed -e "s#^output_func_path = \"RecompiledFuncs\"#output_func_path = \"$pristine\"#" \
    -e "s#^elf_path = \"build/turok2.us.elf\"#elf_path = \"$project_dir/build/turok2.us.elf\"#" \
    -e "s#^rom_file_path = \"baserom.us.z64\"#rom_file_path = \"$project_dir/baserom.us.z64\"#" \
    "$project_dir/turok2.us.toml" > "$config"

"$recomp_bin" "$config" >/dev/null 2>&1

for path in "$pristine"/*.c; do
    name=$(basename "$path")
    if ! diff -q "$path" "$out_dir/$name" >/dev/null 2>&1; then
        diff -u --label "a/RecompiledFuncs/$name" --label "b/RecompiledFuncs/$name" \
            "$path" "$out_dir/$name" || true
    fi
done
