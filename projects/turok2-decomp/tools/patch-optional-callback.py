#!/usr/bin/env python3
"""Rewrite unmapped jalr targets to the real callbacks. Never skip the call."""

import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

SKIP_JALR = re.compile(
    r"    // callback guard for 0x[0-9A-Fa-f]+:[^\n]*\n"
    r"(?:    // [^\n]*\n)*"
    r"    if \(!turok2_patch_jalr_ok\(rdram, ctx\)\) \{\n"
    r"        goto [^;]+;\n"
    r"    \}\n",
    re.MULTILINE,
)
SKIP_PARTICLE = re.compile(
    r"    // callback guard for 0x00265220:[^\n]*\n"
    r"    if \(!turok2_patch_particle_ok\(rdram, ctx\)\) \{\n"
    r"        goto L_002653E0;\n"
    r"    \}\n",
    re.MULTILINE,
)
BARE_SKIP_JALR = re.compile(
    r"    if \(!turok2_patch_jalr_ok\(rdram, ctx\)\) \{\n"
    r"        goto [^;]+;\n"
    r"    \}\n",
    re.MULTILINE,
)
BARE_SKIP_PARTICLE = re.compile(
    r"    if \(!turok2_patch_particle_ok\(rdram, ctx\)\) \{\n"
    r"        goto L_002653E0;\n"
    r"    \}\n",
    re.MULTILINE,
)

JALR_SITES = (
    (
        "func_00236EA0",
        (
            "00236F88",
            "00236F8C",
            "    ctx->r2 = MEM_W(ctx->r1, -0X2F80);\n",
        ),
    ),
    (
        "func_00236EA0",
        (
            "00237030",
            "00237034",
            "    ctx->r2 = MEM_W(ctx->r1, -0X2F80);\n",
        ),
    ),
    (
        "func_00236EA0",
        (
            "002370D8",
            "002370DC",
            "    ctx->r2 = MEM_W(ctx->r1, -0X2F80);\n",
        ),
    ),
    (
        "func_00236EA0",
        (
            "00237184",
            "00237188",
            "    ctx->r2 = MEM_W(ctx->r1, -0X2F80);\n",
        ),
    ),
    (
        "func_00236EA0",
        (
            "0023722C",
            "00237230",
            "    ctx->r2 = MEM_W(ctx->r1, -0X2F80);\n",
        ),
    ),
    (
        "func_00237EE4",
        (
            "00237F30",
            "00237F34",
            "    ctx->r2 = MEM_W(ctx->r1, -0X2F80);\n",
        ),
    ),
    (
        "entry_00294D60",
        (
            "00294DF8",
            "00294DFC",
            "    ctx->r2 = MEM_W(ctx->r2, 0X4);\n",
        ),
    ),
)

PARTICLE_LOAD = (
    "    // 0x0026521C: addiu       $s2, $v0, 0x14\n"
    "    ctx->r18 = ADD32(ctx->r2, 0X14);\n"
)
PARTICLE_FIX = (
    "    // 0x0026521C: addiu       $s2, $v0, 0x14\n"
    "    ctx->r18 = ADD32(ctx->r2, 0X14);\n"
    "    turok2_patch_fix_particle(rdram, ctx);\n"
)
RAX_TICK_ANCHOR = (
    "    // 0x00276904: lw          $v1, 0x8($s0)\n"
    "    ctx->r3 = MEM_W(ctx->r16, 0X8);\n"
)
RAX_TICK_FIX = (
    "    // 0x00276904: lw          $v1, 0x8($s0)\n"
    "    ctx->r3 = MEM_W(ctx->r16, 0X8);\n"
    "    turok2_patch_rax_player(rdram, ctx);\n"
)
AUDIO_FRAME_ANCHOR = (
    "    // 0x00294ABC: lw          $s0, 0x38($s1)\n"
    "    ctx->r16 = MEM_W(ctx->r17, 0X38);\n"
)
AUDIO_FRAME_FIX = (
    "    // 0x00294ABC: lw          $s0, 0x38($s1)\n"
    "    ctx->r16 = MEM_W(ctx->r17, 0X38);\n"
    "    turok2_patch_audio_frame(rdram, ctx);\n"
)
AUDIO_JALR_FIXES = (
    (
        "    // 0x00294A38: lw          $v0, 0x8($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X8);\n"
        "    // 0x00294A3C: jalr        $v0\n"
        "    // 0x00294A40: nop\n"
        "\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n",
        "    // 0x00294A38: lw          $v0, 0x8($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X8);\n"
        "    turok2_patch_fix_jalr(rdram, ctx);\n"
        "    // 0x00294A3C: jalr        $v0\n"
        "    // 0x00294A40: nop\n"
        "\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n"
        "    turok2_patch_jalr_done(rdram, ctx);\n",
    ),
    (
        "    // 0x00294AC4: lw          $v0, 0x8($s0)\n"
        "    ctx->r2 = MEM_W(ctx->r16, 0X8);\n"
        "    // 0x00294AC8: jalr        $v0\n"
        "    // 0x00294ACC: addu        $a0, $s0, $zero\n"
        "    ctx->r4 = ADD32(ctx->r16, 0);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n",
        "    // 0x00294AC4: lw          $v0, 0x8($s0)\n"
        "    ctx->r2 = MEM_W(ctx->r16, 0X8);\n"
        "    turok2_patch_fix_jalr(rdram, ctx);\n"
        "    // 0x00294AC8: jalr        $v0\n"
        "    // 0x00294ACC: addu        $a0, $s0, $zero\n"
        "    ctx->r4 = ADD32(ctx->r16, 0);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n"
        "    turok2_patch_jalr_done(rdram, ctx);\n",
    ),
    (
        "    // 0x00294AE0: lw          $v0, 0x4($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X4);\n"
        "    // 0x00294AE4: lw          $a3, 0x20($s1)\n"
        "    ctx->r7 = MEM_W(ctx->r17, 0X20);\n"
        "    // 0x00294AE8: jalr        $v0\n"
        "    // 0x00294AEC: addu        $a2, $s2, $zero\n"
        "    ctx->r6 = ADD32(ctx->r18, 0);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n",
        "    // 0x00294AE0: lw          $v0, 0x4($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X4);\n"
        "    // 0x00294AE4: lw          $a3, 0x20($s1)\n"
        "    ctx->r7 = MEM_W(ctx->r17, 0X20);\n"
        "    turok2_patch_fix_jalr(rdram, ctx);\n"
        "    // 0x00294AE8: jalr        $v0\n"
        "    // 0x00294AEC: addu        $a2, $s2, $zero\n"
        "    ctx->r6 = ADD32(ctx->r18, 0);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n"
        "    turok2_patch_jalr_done(rdram, ctx);\n",
    ),
    (
        "    // 0x002967CC: lw          $v0, 0x4($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X4);\n"
        "    // 0x002967D0: addiu       $s5, $zero, 0x140\n"
        "    ctx->r21 = ADD32(0, 0X140);\n"
        "    // 0x002967D4: jalr        $v0\n"
        "    // 0x002967D8: sh          $zero, 0x1E($sp)\n"
        "    MEM_H(0X1E, ctx->r29) = 0;\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n",
        "    // 0x002967CC: lw          $v0, 0x4($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X4);\n"
        "    // 0x002967D0: addiu       $s5, $zero, 0x140\n"
        "    ctx->r21 = ADD32(0, 0X140);\n"
        "    turok2_patch_fix_jalr(rdram, ctx);\n"
        "    // 0x002967D4: jalr        $v0\n"
        "    // 0x002967D8: sh          $zero, 0x1E($sp)\n"
        "    MEM_H(0X1E, ctx->r29) = 0;\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n"
        "    turok2_patch_jalr_done(rdram, ctx);\n",
    ),
    (
        "    // 0x00295C5C: lw          $v0, 0x4($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X4);\n"
        "    // 0x00295C60: lw          $a3, 0x48($sp)\n"
        "    ctx->r7 = MEM_W(ctx->r29, 0X48);\n"
        "    // 0x00295C64: jalr        $v0\n"
        "    // 0x00295C68: addu        $a2, $s4, $zero\n"
        "    ctx->r6 = ADD32(ctx->r20, 0);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n",
        "    // 0x00295C5C: lw          $v0, 0x4($a0)\n"
        "    ctx->r2 = MEM_W(ctx->r4, 0X4);\n"
        "    // 0x00295C60: lw          $a3, 0x48($sp)\n"
        "    ctx->r7 = MEM_W(ctx->r29, 0X48);\n"
        "    turok2_patch_fix_jalr(rdram, ctx);\n"
        "    // 0x00295C64: jalr        $v0\n"
        "    // 0x00295C68: addu        $a2, $s4, $zero\n"
        "    ctx->r6 = ADD32(ctx->r20, 0);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n"
        "    turok2_patch_jalr_done(rdram, ctx);\n",
    ),
    (
        "L_002961D0:\n"
        "    // 0x002961D0: jalr        $v0\n"
        "    // 0x002961D4: nop\n"
        "\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n",
        "L_002961D0:\n"
        "    // 0x002961D0: jalr        $v0\n"
        "    // 0x002961D4: nop\n"
        "\n"
        "    turok2_patch_fix_jalr(rdram, ctx);\n"
        "    LOOKUP_FUNC(ctx->r2)(rdram, ctx);\n"
        "    turok2_patch_jalr_done(rdram, ctx);\n",
    ),
)
RESOURCE_TABLE_SITES = (
    (
        "    // 0x00236ED0: sw          $s0, 0x40($sp)\n"
        "    MEM_W(0X40, ctx->r29) = ctx->r16;\n"
        "    // 0x00236ED4: lw          $v1, 0x0($a0)\n"
    ),
    (
        "    // 0x0022C4C8: sw          $t0, 0x10C($sp)\n"
        "    MEM_W(0X10C, ctx->r29) = ctx->r8;\n"
        "    // 0x0022C4CC: lw          $fp, 0xF8($s1)\n"
    ),
)
RESOURCE_TABLE_FIXES = (
    (
        "    // 0x00236ED0: sw          $s0, 0x40($sp)\n"
        "    MEM_W(0X40, ctx->r29) = ctx->r16;\n"
        "    turok2_patch_restore_resource_table(rdram, ctx);\n"
        "    // 0x00236ED4: lw          $v1, 0x0($a0)\n"
    ),
    (
        "    // 0x0022C4C8: sw          $t0, 0x10C($sp)\n"
        "    MEM_W(0X10C, ctx->r29) = ctx->r8;\n"
        "    turok2_patch_restore_resource_table(rdram, ctx);\n"
        "    // 0x0022C4CC: lw          $fp, 0xF8($s1)\n"
    ),
)


def insert_fix_before_jalr(text: str, load_address: str, call_address: str, load_line: str) -> str:
    marker = "turok2_patch_fix_jalr(rdram, ctx);"
    jalr = f"    // 0x{call_address}: jalr        $v0\n"
    if marker in text and jalr in text:
        # Already patched this file; still unique per jalr site via the load line.
        pass
    anchor = (
        f"    // 0x{load_address}: lw          $v0, "
        + ("-0x2F80($at)\n" if "-0X2F80" in load_line else "0x4($v0)\n")
        + load_line
        + jalr
    )
    replacement = (
        f"    // 0x{load_address}: lw          $v0, "
        + ("-0x2F80($at)\n" if "-0X2F80" in load_line else "0x4($v0)\n")
        + load_line
        + "    turok2_patch_fix_jalr(rdram, ctx);\n"
        + jalr
    )
    if replacement in text:
        return text
    if anchor not in text:
        # Tolerate already-inserted fix between load and jalr.
        mid = (
            f"    // 0x{load_address}: lw          $v0, "
            + ("-0x2F80($at)\n" if "-0X2F80" in load_line else "0x4($v0)\n")
            + load_line
            + "    turok2_patch_fix_jalr(rdram, ctx);\n"
            + jalr
        )
        if mid in text:
            return text
        return text
    return text.replace(anchor, replacement, 1)


# Restore callee-saved regs after LOOKUP. The callback still runs; this is
# ABI insurance for truncated callees that skip their epilogue.
JALR_DONE = re.compile(
    r"(    turok2_patch_fix_jalr\(rdram, ctx\);\n"
    r"    // 0x[0-9A-Fa-f]+: jalr        \$v0\n"
    r".{0,400}?"
    r"    LOOKUP_FUNC\(ctx->r2\)\(rdram, ctx\);\n)"
    r"(?!    turok2_patch_jalr_done)",
    re.DOTALL,
)


def insert_jalr_done(text: str) -> str:
    return JALR_DONE.sub(r"\1    turok2_patch_jalr_done(rdram, ctx);\n", text)


def main() -> int:
    found = {name: False for name, _ in JALR_SITES}
    found["entry_00265200"] = False
    found["func_002768D0"] = False
    found["func_00270C80"] = False
    found["func_002914B4"] = False
    found["func_00290DE0"] = False
    found["func_002949A4"] = False
    found["func_0028EC54"] = False
    found["func_00274B40"] = False
    found["func_0029BF80"] = False

    for path in sorted(FUNCS.glob("*.c")):
        text = path.read_text()
        original = text

        text = SKIP_JALR.sub("    turok2_patch_fix_jalr(rdram, ctx);\n", text)
        text = SKIP_PARTICLE.sub("    turok2_patch_fix_particle(rdram, ctx);\n", text)
        text = BARE_SKIP_JALR.sub("    turok2_patch_fix_jalr(rdram, ctx);\n", text)
        text = BARE_SKIP_PARTICLE.sub("    turok2_patch_fix_particle(rdram, ctx);\n", text)

        for name, (load_address, call_address, load_line) in JALR_SITES:
            if f"RECOMP_FUNC void {name}" not in text:
                continue
            found[name] = True
            updated = insert_fix_before_jalr(text, load_address, call_address, load_line)
            if updated == text and f"// 0x{call_address}: jalr" in text:
                if "turok2_patch_fix_jalr(rdram, ctx);" not in text.split(f"// 0x{call_address}: jalr")[0][-200:]:
                    print(
                        f"{name}: could not insert fix before 0x{call_address} in {path.name}",
                        file=sys.stderr,
                    )
                    return 1
            text = updated

        if "RECOMP_FUNC void entry_00265200" in text:
            found["entry_00265200"] = True
            if "turok2_patch_fix_particle(rdram, ctx);" not in text:
                if PARTICLE_LOAD not in text:
                    print("entry_00265200: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(PARTICLE_LOAD, PARTICLE_FIX, 1)

        if "RECOMP_FUNC void func_002768D0" in text:
            found["func_002768D0"] = True
            if "turok2_patch_rax_player(rdram, ctx);" not in text:
                if RAX_TICK_ANCHOR not in text:
                    print("func_002768D0: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(RAX_TICK_ANCHOR, RAX_TICK_FIX, 1)

        if "RECOMP_FUNC void func_00270C80" in text:
            found["func_00270C80"] = True
            play_anchor = (
                "    // 0x00270C88: addu        $s3, $a0, $zero\n"
                "    ctx->r19 = ADD32(ctx->r4, 0);\n"
            )
            play_fix = (
                "    // 0x00270C88: addu        $s3, $a0, $zero\n"
                "    ctx->r19 = ADD32(ctx->r4, 0);\n"
                "    turok2_patch_play_sound(rdram, ctx);\n"
            )
            if "turok2_patch_play_sound(rdram, ctx);" not in text:
                if play_anchor not in text:
                    print("func_00270C80: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(play_anchor, play_fix, 1)

        if "RECOMP_FUNC void func_002914B4" in text:
            found["func_002914B4"] = True
            seqp_anchor = (
                "    // 0x002914C8: addu        $s2, $a0, $zero\n"
                "    ctx->r18 = ADD32(ctx->r4, 0);\n"
            )
            seqp_fix = (
                "    // 0x002914C8: addu        $s2, $a0, $zero\n"
                "    ctx->r18 = ADD32(ctx->r4, 0);\n"
                "    turok2_patch_seqp_handler(rdram, ctx);\n"
            )
            if "turok2_patch_seqp_handler(rdram, ctx);" not in text:
                if seqp_anchor not in text:
                    print("func_002914B4: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(seqp_anchor, seqp_fix, 1)

        if "RECOMP_FUNC void func_00290DE0" in text:
            found["func_00290DE0"] = True
            playseq_anchor = (
                "    // 0x00290DE0: addiu       $sp, $sp, -0x28\n"
                "    ctx->r29 = ADD32(ctx->r29, -0X28);\n"
            )
            playseq_fix = (
                "    // 0x00290DE0: addiu       $sp, $sp, -0x28\n"
                "    ctx->r29 = ADD32(ctx->r29, -0X28);\n"
                "    turok2_patch_seqp_play(rdram, ctx);\n"
            )
            if "turok2_patch_seqp_play(rdram, ctx);" not in text:
                if playseq_anchor not in text:
                    print("func_00290DE0: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(playseq_anchor, playseq_fix, 1)

        if "RECOMP_FUNC void func_0029BF80" in text:
            found["func_0029BF80"] = True
            v2p_anchor = (
                "L_0029BFD4:\n"
                "    // 0x0029BFD4: lw          $ra, 0x10($sp)\n"
                "    ctx->r31 = MEM_W(ctx->r29, 0X10);\n"
            )
            v2p_fix = (
                "L_0029BFD4:\n"
                "    turok2_patch_v2p(rdram, ctx);\n"
                "    // 0x0029BFD4: lw          $ra, 0x10($sp)\n"
                "    ctx->r31 = MEM_W(ctx->r29, 0X10);\n"
            )
            if "turok2_patch_v2p(rdram, ctx);" not in text:
                if v2p_anchor not in text:
                    print("func_0029BF80: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(v2p_anchor, v2p_fix, 1)

        if "RECOMP_FUNC void func_0028EC54" in text:
            found["func_0028EC54"] = True
            page_anchor = (
                "    // 0x0028ECF4: sll         $a1, $a1, 12\n"
                "    ctx->r5 = S32(ctx->r5 << 12);\n"
            )
            page_fix = (
                "    // 0x0028ECF4: sll         $a1, $a1, 12\n"
                "    ctx->r5 = S32(ctx->r5 << 12);\n"
                "    turok2_patch_page_useg(rdram, ctx);\n"
            )
            if "turok2_patch_page_useg(rdram, ctx);" not in text:
                if page_anchor not in text:
                    print("func_0028EC54: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(page_anchor, page_fix, 1)

        if "RECOMP_FUNC void func_00274B40" in text:
            found["func_00274B40"] = True
            music_anchor = (
                "    // 0x00274B48: addu        $s1, $a0, $zero\n"
                "    ctx->r17 = ADD32(ctx->r4, 0);\n"
            )
            music_fix = (
                "    // 0x00274B48: addu        $s1, $a0, $zero\n"
                "    ctx->r17 = ADD32(ctx->r4, 0);\n"
                "    turok2_patch_music_tick(rdram, ctx);\n"
            )
            if "turok2_patch_music_tick(rdram, ctx);" not in text:
                if music_anchor not in text:
                    print("func_00274B40: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(music_anchor, music_fix, 1)

        if "RECOMP_FUNC void func_002949A4" in text:
            found["func_002949A4"] = True
            if "turok2_patch_audio_frame(rdram, ctx);" not in text:
                if AUDIO_FRAME_ANCHOR not in text:
                    print("func_002949A4: insertion point not found", file=sys.stderr)
                    return 1
                text = text.replace(AUDIO_FRAME_ANCHOR, AUDIO_FRAME_FIX, 1)

        for anchor, replacement in AUDIO_JALR_FIXES:
            if replacement in text:
                continue
            if anchor in text:
                text = text.replace(anchor, replacement, 1)

        for anchor, replacement in zip(RESOURCE_TABLE_SITES, RESOURCE_TABLE_FIXES):
            if replacement in text:
                continue
            if anchor in text:
                text = text.replace(anchor, replacement)

        text = insert_jalr_done(text)

        if text != original:
            path.write_text(text)
            print(f"updated {path.name}")

    missing = [name for name, ok in found.items() if not ok]
    if missing:
        print(f"missing functions: {', '.join(missing)}", file=sys.stderr)
        return 1
    print("callback fixes current")
    return 0


if __name__ == "__main__":
    sys.exit(main())
