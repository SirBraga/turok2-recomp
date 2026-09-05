# Builds Turok2Recompiled on a local Windows machine (MSVC).
# This is faster than waiting on GitHub Actions.
#
# Prerequisites:
#   - Visual Studio 2022 (or 2026) with Desktop C++ / MSVC x64
#   - CMake 3.20+ on PATH (or the VS CMake component)
#   - Optional: Ninja on PATH (faster). Without it, uses the VS generator.
#
# Usage, from the repo root in PowerShell:
#   powershell -ExecutionPolicy Bypass -File scripts\build-windows.ps1
#
# Output:
#   dist\Turok2Recompiled\Turok2Recompiled.exe  (+ DLLs, assets, portable.txt)

$ErrorActionPreference = "Stop"

$RepoRoot = Resolve-Path (Join-Path $PSScriptRoot "..")
Set-Location $RepoRoot

function Find-VsDevCmd {
    $vswhere = Join-Path ${env:ProgramFiles(x86)} "Microsoft Visual Studio\Installer\vswhere.exe"
    if (-not (Test-Path $vswhere)) {
        throw "vswhere.exe nao encontrado. Instale o Visual Studio 2022+ com workload Desktop C++."
    }
    $installPath = & $vswhere -latest -products * `
        -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 `
        -property installationPath
    if (-not $installPath) {
        throw "MSVC x64 nao encontrado. No Visual Studio Installer, marque Desktop development with C++."
    }
    $devCmd = Join-Path $installPath "Common7\Tools\VsDevCmd.bat"
    if (-not (Test-Path $devCmd)) {
        throw "VsDevCmd.bat nao encontrado em $installPath"
    }
    return $devCmd
}

function Import-VsDevCmd([string]$DevCmd) {
    $encoded = cmd.exe /c "`"$DevCmd`" -arch=x64 -host_arch=x64 && set"
    if ($LASTEXITCODE -ne 0) {
        throw "Falha ao carregar o ambiente MSVC ($DevCmd)"
    }
    foreach ($line in $encoded -split "`r?`n") {
        if ($line -match "^(.*?)=(.*)$") {
            Set-Item -Path "Env:$($matches[1])" -Value $matches[2]
        }
    }
}

Write-Host "==> Ambiente MSVC"
Import-VsDevCmd (Find-VsDevCmd)

$cmake = Get-Command cmake -ErrorAction SilentlyContinue
if (-not $cmake) {
    throw "cmake nao esta no PATH. Instale CMake ou o componente CMake do Visual Studio."
}

$useNinja = $null -ne (Get-Command ninja -ErrorAction SilentlyContinue)
$buildDir = Join-Path $RepoRoot "build-win"
$sourceDir = Join-Path $RepoRoot "projects\turok2-decomp"

Write-Host "==> Configure ($($(if ($useNinja) { 'Ninja' } else { 'Visual Studio' })))"
$configure = @(
    "-S", $sourceDir,
    "-B", $buildDir,
    "-DTUROK2_BUILD_APP=ON"
)
if ($useNinja) {
    $configure += @("-G", "Ninja", "-DCMAKE_BUILD_TYPE=Release")
} else {
    $configure += @("-G", "Visual Studio 17 2022", "-A", "x64")
}

& cmake @configure
if ($LASTEXITCODE -ne 0) {
    throw "cmake configure falhou"
}

Write-Host "==> Build Turok2Recompiled"
$build = @("--build", $buildDir, "--target", "Turok2Recompiled")
if (-not $useNinja) {
    $build += @("--config", "Release")
}
& cmake @build
if ($LASTEXITCODE -ne 0) {
    throw "cmake build falhou"
}

$exeCandidates = @(
    (Join-Path $buildDir "Turok2Recompiled.exe"),
    (Join-Path $buildDir "Release\Turok2Recompiled.exe"),
    (Join-Path $buildDir "RelWithDebInfo\Turok2Recompiled.exe")
)
$exe = $exeCandidates | Where-Object { Test-Path $_ } | Select-Object -First 1
if (-not $exe) {
    throw "Turok2Recompiled.exe nao apareceu em $buildDir"
}
$exeDir = Split-Path $exe -Parent

$dist = Join-Path $RepoRoot "dist\Turok2Recompiled"
if (Test-Path $dist) {
    Remove-Item $dist -Recurse -Force
}
New-Item -ItemType Directory -Force -Path $dist | Out-Null
Copy-Item $exe $dist
Copy-Item (Join-Path $exeDir "*.dll") $dist -ErrorAction SilentlyContinue
$assets = Join-Path $exeDir "assets"
if (Test-Path $assets) {
    Copy-Item $assets $dist -Recurse
}
$mods = Join-Path $RepoRoot "projects\turok2-decomp\mods"
if (Test-Path $mods) {
    New-Item -ItemType Directory -Force -Path (Join-Path $dist "mods") | Out-Null
    Copy-Item (Join-Path $mods "*") (Join-Path $dist "mods") -Recurse -ErrorAction SilentlyContinue
}
Set-Content -Path (Join-Path $dist "portable.txt") -Value ""
@"
Turok 2: Recompiled

1. Rode Turok2Recompiled.exe.
2. No launcher, Carregar ROM e escolha o dump USA 1.0
   (SHA1 fb0400f21e3f043939ab56500c7b12a3231006f1).
3. Depois o botao vira Jogar. Esc / F10 abre o menu.

portable.txt mantem saves e configs nesta pasta.
"@ | Set-Content -Encoding utf8 (Join-Path $dist "LEIAME.txt")

Write-Host ""
Write-Host "Pronto: $dist"
Write-Host "Rode:   $(Join-Path $dist 'Turok2Recompiled.exe')"
