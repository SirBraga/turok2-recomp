---
name: n64recomp-debugging
description: "Super skill for debugging crashes and resolving issues in N64Recomp static ports, specifically tailored for the Turok 2 decompilation project."
---

# N64Recomp Debugging Protocol

## Context
This skill provides a structured workflow and strict rules for resolving crashes, hangs, and behavioral bugs in the Turok 2 N64Recomp project. It ensures that the original N64 behavior is preserved while identifying and fixing recompilation artifacts, missing functions, or invalid jump targets.

## Essential Files to Review First
Before making any changes, you must read and understand:
- `N64_PROJECT_STATE.md`: Contains the current state, known issues, and past fixes.
- `turok2.us.toml`: The configuration file containing manual function mappings, hooks, and patches.
- The `crash-hybrid.log` file, specifically looking for `TUROK 2 HYBRID CRASH REPORT`.
- The native/runtime patches related to the subsystem that failed (e.g., `src/patches/native_60.cpp`, `src/crash_diagnostics.cpp`).

## Mandatory Rules
1. **Scope Limit**: Work exclusively within the original project directory (`/Users/sirbraga/Documents/ChatGPT/n64Recomp/projects/turok2-decomp`).
2. **Preserve Existing Fixes**: Do NOT break existing corrections for audio, particles, widescreen, MSAA 2x, 60 FPS, mouse/keyboard, USEG, or JALR.
3. **No Manual C Edits**: Never edit the auto-generated C files in `RecompiledFuncs` manually as a primary solution. Fix the configuration or the runtime hooks instead.
4. **No Skipping Logic**: Do not bypass callbacks, JALR, effects, animations, or functions just to avoid a crash. The logic must be fixed, not ignored.
5. **No Fabricated Addresses**: Do not invent memory addresses or function boundaries.
6. **No Global Offsets**: Do not apply a global offset between ROMs/revisions.
7. **Verify with MIPS**: You may consult Turok 3, LibTEngine, N64Recomp, or reference projects, but you MUST confirm everything against the raw MIPS assembly of Turok 2.
8. **Analyze the Root Cause**: Do not just look at the final `SIGSEGV` or `signal 11`. Trace back to the *first* "Failed to find function" error, invalid `jalr`, corrupted pointer, or incorrect guest access.
9. **Delay Slots & Mid-Function Jumps**: If the N64 jumps exactly to an address in the middle of a function, a delay slot, or overlapping bodies, reproduce this entry point using `manual_funcs` in the TOML file *only after* proving the MIPS execution flow. Otherwise, intercept the jump natively.
10. **ROM Integrity**: Do not alter the configured base ROM.

## Mandatory Debugging Procedure
When a crash or issue is reported, follow these exact steps:

1. **Reproduce & Capture**: 
   - Run the game under LLDB or rely on the project's built-in crash diagnostics (`crash-hybrid.log`).
   - Capture the first failure, the native stack trace, and the last guest state.
   - Note down the PC, `jalr` target, RA, SP, relevant registers, and the functions on the guest stack.
2. **ELF & Address Resolution**:
   - Search for the problematic address in the ELF using `nm` or `readelf` tools.
   - Convert between VRAM and ROM using the correct section of the ELF/TOML.
3. **MIPS Inspection**:
   - Inspect the raw MIPS assembly at the crash site using `view_file` or objdump.
   - Analyze the previous instruction, delay slots, prologue, epilogue, branches, jump tables, and fallthrough behavior.
   - Search for references in jump tables, vtables, and callers.
4. **Classification**:
   - Classify the root cause into one of these categories: 
     - TOML/Metadata missing or incorrect
     - Runtime/Emulator bug
     - Corrupt guest address
     - Renderer/Graphics
     - Audio
     - Input
     - Missing function
5. **Implementation**:
   - Make the minimal necessary fix at the correct layer (TOML hook, `native_60.cpp`, etc.).
   - If the TOML changes, regenerate the functions: `bash tools/regen-recompiled-funcs.sh`.
   - Recompile the project: `cmake --build build-app --target Turok2Recompiled -j 8`.
6. **Verification**:
   - Re-run the game and repeat the exact flow that caused the crash.
   - Monitor the logs long enough to ensure no subsequent errors occur.
7. **Documentation**:
   - Update `N64_PROJECT_STATE.md` with the evidence, address, cause, fix, and the result.

## Reporting Format
When reporting a fix to the user, use the following structured format. Do not just say "it probably fixed it"; show the real compilation output and test result.

**Fase:** [Current phase of debugging]
**Causa estrutural:** [Detailed explanation of why it crashed]
**Evidência:** [Logs, registers, or MIPS snippets proving the cause]
**Mapeamento de endereço:** [VRAM/ROM resolution of the crash site]
**Correção:** [What was changed and why]
**Arquivos alterados:** [List of files modified]
**Comandos executados:** [Build/test commands used]
**Verificação:** [Actual output proving the fix worked]
**Próxima falha possível:** [What to look out for next]
