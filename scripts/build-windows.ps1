# Local Windows build. Same layout as .github/workflows/windows.yml.
$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
Set-Location $Root

if (-not (Get-Command cmake -ErrorAction SilentlyContinue)) {
    throw "CMake is not on PATH. Install Visual Studio 2022 + CMake, then retry."
}

$Generator = "Ninja"
if (-not (Get-Command ninja -ErrorAction SilentlyContinue)) {
    $Generator = "Visual Studio 17 2022"
}

if ($Generator -eq "Ninja") {
    cmake -S projects/turok2-decomp -B build-win -G Ninja `
        -DCMAKE_BUILD_TYPE=Release -DTUROK2_BUILD_APP=ON
    cmake --build build-win --target Turok2Recompiled
} else {
    cmake -S projects/turok2-decomp -B build-win -G $Generator -A x64 `
        -DTUROK2_BUILD_APP=ON
    cmake --build build-win --target Turok2Recompiled --config Release
}

$exe = Get-ChildItem -Path "$Root/build-win" -Recurse -Filter Turok2Recompiled.exe |
    Where-Object { $_.FullName -notmatch '\\CMakeFiles\\' } |
    Select-Object -First 1
if (-not $exe) { throw "Turok2Recompiled.exe was not produced" }

$src = $exe.DirectoryName
$dist = Join-Path $Root "dist/Turok2Recompiled"
New-Item -ItemType Directory -Force -Path $dist | Out-Null
Copy-Item "$src/Turok2Recompiled.exe" $dist -Force
Get-ChildItem $src -Filter *.dll | Copy-Item -Destination $dist -Force
if (Test-Path "$src/assets") {
    Copy-Item "$src/assets" $dist -Recurse -Force
}
Write-Host "Playable folder: $dist"
