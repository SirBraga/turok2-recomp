#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0023DF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023DF70: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x0023DF74: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x0023DF78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0023DF7C: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x0023DF80: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0023DF84: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x0023DF88: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0023DF8C: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x0023DF90: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x0023DF94: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x0023DF98: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x0023DF9C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x0023DFA0: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x0023DFA4: sdc1        $f24, 0xA0($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XA0, ctx->r29);
    // 0x0023DFA8: sdc1        $f23, 0x98($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X98, ctx->r29);
    // 0x0023DFAC: sdc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X90, ctx->r29);
    // 0x0023DFB0: sdc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X88, ctx->r29);
    // 0x0023DFB4: sdc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X80, ctx->r29);
    // 0x0023DFB8: lwc1        $f23, 0x4($s4)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r20, 0X4);
    // 0x0023DFBC: lwc1        $f24, 0xC($s4)
    ctx->f24.u32l = MEM_W(ctx->r20, 0XC);
    // 0x0023DFC0: jal         0x002672C8
    // 0x0023DFC4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002672C8(rdram, ctx);
        goto after_0;
    // 0x0023DFC4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x0023DFC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0023DFCC: sub.s       $f1, $f23, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f23.fl - ctx->f20.fl;
    // 0x0023DFD0: add.s       $f2, $f23, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f23.fl + ctx->f20.fl;
    // 0x0023DFD4: sub.s       $f3, $f24, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f24.fl - ctx->f20.fl;
    // 0x0023DFD8: add.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x0023DFDC: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023DFE0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x0023DFE4: swc1        $f3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023DFE8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x0023DFEC: lwc1        $f0, 0x24($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X24);
    // 0x0023DFF0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023DFF4: nop

    // 0x0023DFF8: bc1f        L_0023E460
    if (!c1cs) {
        // 0x0023DFFC: nop
    
            goto L_0023E460;
    }
    // 0x0023DFFC: nop

    // 0x0023E000: lwc1        $f0, 0x1C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X1C);
    // 0x0023E004: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0023E008: nop

    // 0x0023E00C: bc1f        L_0023E460
    if (!c1cs) {
        // 0x0023E010: nop
    
            goto L_0023E460;
    }
    // 0x0023E010: nop

    // 0x0023E014: lwc1        $f0, 0x28($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X28);
    // 0x0023E018: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0023E01C: nop

    // 0x0023E020: bc1f        L_0023E460
    if (!c1cs) {
        // 0x0023E024: nop
    
            goto L_0023E460;
    }
    // 0x0023E024: nop

    // 0x0023E028: lwc1        $f0, 0x20($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X20);
    // 0x0023E02C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0023E030: nop

    // 0x0023E034: bc1f        L_0023E460
    if (!c1cs) {
        // 0x0023E038: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023E460;
    }
    // 0x0023E038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023E03C: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x0023E040: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x0023E044: lw          $s7, 0x4($s1)
    ctx->r23 = MEM_W(ctx->r17, 0X4);
    // 0x0023E048: bne         $a0, $v0, L_0023E080
    if (ctx->r4 != ctx->r2) {
        // 0x0023E04C: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_0023E080;
    }
    // 0x0023E04C: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x0023E050: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0023E054: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0023E058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023E05C: bne         $v1, $v0, L_0023E080
    if (ctx->r3 != ctx->r2) {
        // 0x0023E060: nop
    
            goto L_0023E080;
    }
    // 0x0023E060: nop

    // 0x0023E064: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x0023E068: bne         $v0, $a0, L_0023E460
    if (ctx->r2 != ctx->r4) {
        // 0x0023E06C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0023E460;
    }
    // 0x0023E06C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023E070: jal         0x00241CB0
    // 0x0023E074: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00241CB0(rdram, ctx);
        goto after_1;
    // 0x0023E074: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0023E078: j           L_0023E460
    // 0x0023E07C: nop

        goto L_0023E460;
    // 0x0023E07C: nop

L_0023E080:
    // 0x0023E080: lbu         $a0, 0x0($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X0);
    // 0x0023E084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023E088: bne         $a0, $v0, L_0023E0C0
    if (ctx->r4 != ctx->r2) {
        // 0x0023E08C: nop
    
            goto L_0023E0C0;
    }
    // 0x0023E08C: nop

    // 0x0023E090: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x0023E094: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0023E098: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023E09C: bne         $v1, $v0, L_0023E0C0
    if (ctx->r3 != ctx->r2) {
        // 0x0023E0A0: nop
    
            goto L_0023E0C0;
    }
    // 0x0023E0A0: nop

    // 0x0023E0A4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0023E0A8: bne         $v0, $a0, L_0023E460
    if (ctx->r2 != ctx->r4) {
        // 0x0023E0AC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0023E460;
    }
    // 0x0023E0AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023E0B0: jal         0x00242604
    // 0x0023E0B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00242604(rdram, ctx);
        goto after_2;
    // 0x0023E0B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0023E0B8: j           L_0023E460
    // 0x0023E0BC: nop

        goto L_0023E460;
    // 0x0023E0BC: nop

L_0023E0C0:
    // 0x0023E0C0: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x0023E0C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023E0C8: bne         $v1, $v0, L_0023E0E0
    if (ctx->r3 != ctx->r2) {
        // 0x0023E0CC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0023E0E0;
    }
    // 0x0023E0CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0023E0D0: jal         0x0023F034
    // 0x0023E0D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0023F034(rdram, ctx);
        goto after_3;
    // 0x0023E0D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0023E0D8: beq         $v0, $zero, L_0023E460
    if (ctx->r2 == 0) {
        // 0x0023E0DC: addiu       $s6, $zero, 0x1
        ctx->r22 = ADD32(0, 0X1);
            goto L_0023E460;
    }
    // 0x0023E0DC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_0023E0E0:
    // 0x0023E0E0: jal         0x0026841C
    // 0x0023E0E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0026841C(rdram, ctx);
        goto after_4;
    // 0x0023E0E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x0023E0E8: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x0023E0EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0023E0F0: jal         0x002671B4
    // 0x0023E0F4: add.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x0023E0F4: add.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl + ctx->f0.fl;
    after_5:
    // 0x0023E0F8: lw          $v0, 0x2C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X2C);
    // 0x0023E0FC: beq         $v0, $zero, L_0023E110
    if (ctx->r2 == 0) {
        // 0x0023E100: add.s       $f22, $f0, $f21
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f21.fl;
            goto L_0023E110;
    }
    // 0x0023E100: add.s       $f22, $f0, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x0023E104: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023E108: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x0023E10C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
L_0023E110:
    // 0x0023E110: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0023E114: lwc1        $f0, 0x0($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X0);
    // 0x0023E118: lw          $v0, 0x2C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X2C);
    // 0x0023E11C: beq         $v0, $zero, L_0023E388
    if (ctx->r2 == 0) {
        // 0x0023E120: add.s       $f20, $f0, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f20.fl;
            goto L_0023E388;
    }
    // 0x0023E120: add.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0023E124: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x0023E128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023E12C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023E130: nop

    // 0x0023E134: bc1t        L_0023E388
    if (c1cs) {
        // 0x0023E138: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0023E388;
    }
    // 0x0023E138: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023E13C: lw          $v1, 0x84($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X84);
    // 0x0023E140: bne         $v1, $v0, L_0023E1A4
    if (ctx->r3 != ctx->r2) {
        // 0x0023E144: nop
    
            goto L_0023E1A4;
    }
    // 0x0023E144: nop

    // 0x0023E148: lwc1        $f0, 0x7C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x0023E14C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0023E150: nop

    // 0x0023E154: bc1f        L_0023E1A4
    if (!c1cs) {
        // 0x0023E158: nop
    
            goto L_0023E1A4;
    }
    // 0x0023E158: nop

    // 0x0023E15C: lwc1        $f1, 0x64($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X64);
    // 0x0023E160: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x0023E164: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023E168: nop

    // 0x0023E16C: bc1f        L_0023E1A4
    if (!c1cs) {
        // 0x0023E170: nop
    
            goto L_0023E1A4;
    }
    // 0x0023E170: nop

    // 0x0023E174: lwc1        $f1, 0x68($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X68);
    // 0x0023E178: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x0023E17C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023E180: nop

    // 0x0023E184: bc1f        L_0023E1A4
    if (!c1cs) {
        // 0x0023E188: nop
    
            goto L_0023E1A4;
    }
    // 0x0023E188: nop

    // 0x0023E18C: lwc1        $f1, 0x6C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X6C);
    // 0x0023E190: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x0023E194: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023E198: nop

    // 0x0023E19C: bc1t        L_0023E460
    if (c1cs) {
        // 0x0023E1A0: nop
    
            goto L_0023E460;
    }
    // 0x0023E1A0: nop

L_0023E1A4:
    // 0x0023E1A4: lwc1        $f1, 0xC($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0XC);
    // 0x0023E1A8: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x0023E1AC: nop

    // 0x0023E1B0: bc1f        L_0023E264
    if (!c1cs) {
        // 0x0023E1B4: nop
    
            goto L_0023E264;
    }
    // 0x0023E1B4: nop

    // 0x0023E1B8: lwc1        $f0, 0x14($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X14);
    // 0x0023E1BC: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0023E1C0: nop

    // 0x0023E1C4: bc1f        L_0023E264
    if (!c1cs) {
        // 0x0023E1C8: nop
    
            goto L_0023E264;
    }
    // 0x0023E1C8: nop

    // 0x0023E1CC: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x0023E1D0: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x0023E1D4: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023E1D8: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023E1DC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0023E1E0: nop

    // 0x0023E1E4: bc1f        L_0023E264
    if (!c1cs) {
        // 0x0023E1E8: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_0023E264;
    }
    // 0x0023E1E8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0023E1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023E1F0: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x0023E1F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0023E1F8: jal         0x0020EF8C
    // 0x0023E1FC: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    func_0020EF8C(rdram, ctx);
        goto after_6;
    // 0x0023E1FC: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    after_6:
    // 0x0023E200: mul.s       $f2, $f20, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0023E204: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0023E208: sub.s       $f1, $f23, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x0023E20C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023E210: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0023E214: sub.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x0023E218: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023E21C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E220: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023E224: nop

    // 0x0023E228: bc1f        L_0023E264
    if (!c1cs) {
        // 0x0023E22C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0023E264;
    }
    // 0x0023E22C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023E230: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x0023E234: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023E238: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0023E23C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023E240: lwc1        $f0, 0x66D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66D0);
    // 0x0023E244: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0023E248: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x0023E24C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023E250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023E254: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023E258: jal         0x0023AB18
    // 0x0023E25C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0023AB18(rdram, ctx);
        goto after_7;
    // 0x0023E25C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_7:
    // 0x0023E260: or          $s3, $s3, $v0
    ctx->r19 = ctx->r19 | ctx->r2;
L_0023E264:
    // 0x0023E264: lwc1        $f1, 0x10($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X10);
    // 0x0023E268: c.le.s      $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f22.fl <= ctx->f1.fl;
    // 0x0023E26C: nop

    // 0x0023E270: bc1f        L_0023E388
    if (!c1cs) {
        // 0x0023E274: nop
    
            goto L_0023E388;
    }
    // 0x0023E274: nop

    // 0x0023E278: lwc1        $f0, 0x18($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X18);
    // 0x0023E27C: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x0023E280: nop

    // 0x0023E284: bc1f        L_0023E388
    if (!c1cs) {
        // 0x0023E288: nop
    
            goto L_0023E388;
    }
    // 0x0023E288: nop

    // 0x0023E28C: sub.s       $f0, $f22, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f1.fl;
    // 0x0023E290: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x0023E294: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023E298: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023E29C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0023E2A0: nop

    // 0x0023E2A4: bc1f        L_0023E388
    if (!c1cs) {
        // 0x0023E2A8: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_0023E388;
    }
    // 0x0023E2A8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0023E2AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023E2B0: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x0023E2B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0023E2B8: jal         0x0020EF8C
    // 0x0023E2BC: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    func_0020EF8C(rdram, ctx);
        goto after_8;
    // 0x0023E2BC: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    after_8:
    // 0x0023E2C0: mul.s       $f2, $f20, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0023E2C4: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0023E2C8: sub.s       $f1, $f23, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x0023E2CC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023E2D0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0023E2D4: sub.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x0023E2D8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023E2DC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E2E0: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023E2E4: nop

    // 0x0023E2E8: bc1f        L_0023E388
    if (!c1cs) {
        // 0x0023E2EC: nop
    
            goto L_0023E388;
    }
    // 0x0023E2EC: nop

    // 0x0023E2F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023E2F4: lwc1        $f0, 0x66D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66D4);
    // 0x0023E2F8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x0023E2FC: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x0023E300: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0023E304: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023E308: beq         $v0, $zero, L_0023E360
    if (ctx->r2 == 0) {
        // 0x0023E30C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0023E360;
    }
    // 0x0023E30C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023E310: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x0023E314: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023E318: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0023E31C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023E320: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023E324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023E328: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023E32C: jal         0x0023AB18
    // 0x0023E330: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0023AB18(rdram, ctx);
        goto after_9;
    // 0x0023E330: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_9:
    // 0x0023E334: beq         $v0, $zero, L_0023E388
    if (ctx->r2 == 0) {
        // 0x0023E338: nop
    
            goto L_0023E388;
    }
    // 0x0023E338: nop

    // 0x0023E33C: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0023E340: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023E344: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023E348: nop

    // 0x0023E34C: bc1f        L_0023E388
    if (!c1cs) {
        // 0x0023E350: ori         $s3, $s3, 0x1
        ctx->r19 = ctx->r19 | 0X1;
            goto L_0023E388;
    }
    // 0x0023E350: ori         $s3, $s3, 0x1
    ctx->r19 = ctx->r19 | 0X1;
    // 0x0023E354: swc1        $f1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023E358: j           L_0023E388
    // 0x0023E35C: sw          $s4, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r20;
        goto L_0023E388;
    // 0x0023E35C: sw          $s4, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r20;
L_0023E360:
    // 0x0023E360: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x0023E364: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023E368: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0023E36C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0023E370: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023E374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023E378: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023E37C: jal         0x0023AB18
    // 0x0023E380: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0023AB18(rdram, ctx);
        goto after_10;
    // 0x0023E380: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
    // 0x0023E384: or          $s3, $s3, $v0
    ctx->r19 = ctx->r19 | ctx->r2;
L_0023E388:
    // 0x0023E388: lwc1        $f0, 0x4($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X4);
    // 0x0023E38C: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x0023E390: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0023E394: lwc1        $f0, 0x8($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X8);
    // 0x0023E398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023E39C: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x0023E3A0: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0023E3A4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0023E3A8: bne         $s6, $zero, L_0023E3BC
    if (ctx->r22 != 0) {
        // 0x0023E3AC: swc1        $f0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
            goto L_0023E3BC;
    }
    // 0x0023E3AC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0023E3B0: lb          $v0, 0x4($s7)
    ctx->r2 = MEM_B(ctx->r23, 0X4);
    // 0x0023E3B4: j           L_0023E3C4
    // 0x0023E3B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_0023E3C4;
    // 0x0023E3B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_0023E3BC:
    // 0x0023E3BC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0023E3C0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_0023E3C4:
    // 0x0023E3C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023E3C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0023E3CC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0023E3D0: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0023E3D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0023E3D8: jal         0x0023B38C
    // 0x0023E3DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_0023B38C(rdram, ctx);
        goto after_11;
    // 0x0023E3DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_11:
    // 0x0023E3E0: or          $s3, $s3, $v0
    ctx->r19 = ctx->r19 | ctx->r2;
    // 0x0023E3E4: beq         $s3, $zero, L_0023E460
    if (ctx->r19 == 0) {
        // 0x0023E3E8: nop
    
            goto L_0023E460;
    }
    // 0x0023E3E8: nop

    // 0x0023E3EC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023E3F0: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x0023E3F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0023E3F8: beq         $v0, $zero, L_0023E410
    if (ctx->r2 == 0) {
        // 0x0023E3FC: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_0023E410;
    }
    // 0x0023E3FC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0023E400: jal         0x0023C0FC
    // 0x0023E404: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    func_0023C0FC(rdram, ctx);
        goto after_12;
    // 0x0023E404: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    after_12:
    // 0x0023E408: j           L_0023E434
    // 0x0023E40C: nop

        goto L_0023E434;
    // 0x0023E40C: nop

L_0023E410:
    // 0x0023E410: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x0023E414: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x0023E418: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x0023E41C: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    // 0x0023E420: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x0023E424: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023E428: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x0023E42C: sw          $v1, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r3;
    // 0x0023E430: sw          $s4, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r20;
L_0023E434:
    // 0x0023E434: lw          $v0, 0x2C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X2C);
    // 0x0023E438: beq         $v0, $zero, L_0023E460
    if (ctx->r2 == 0) {
        // 0x0023E43C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0023E460;
    }
    // 0x0023E43C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023E440: sw          $v0, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r2;
    // 0x0023E444: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x0023E448: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x0023E44C: lw          $t2, 0xC($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XC);
    // 0x0023E450: sw          $t0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->r8;
    // 0x0023E454: sw          $t1, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r9;
    // 0x0023E458: sw          $t2, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r10;
    // 0x0023E45C: swc1        $f20, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f20.u32l;
L_0023E460:
    // 0x0023E460: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x0023E464: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x0023E468: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x0023E46C: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x0023E470: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x0023E474: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0023E478: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x0023E47C: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x0023E480: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x0023E484: ldc1        $f24, 0xA0($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XA0);
    // 0x0023E488: ldc1        $f23, 0x98($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X98);
    // 0x0023E48C: ldc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X90);
    // 0x0023E490: ldc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X88);
    // 0x0023E494: ldc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X80);
    // 0x0023E498: jr          $ra
    // 0x0023E49C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0023E49C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_00430298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430298: lw          $s1, 0x0($a3)
    ctx->r17 = MEM_W(ctx->r7, 0X0);
    // 0x0043029C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // turok2: reconnected split function: a stray ELF symbol at 0x004302A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004302A0(rdram, ctx);
;}
RECOMP_FUNC void func_00238EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238EE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00238EE8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00238EEC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00238EF0: addiu       $a2, $a2, -0x535C
    ctx->r6 = ADD32(ctx->r6, -0X535C);
    // 0x00238EF4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00238EF8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00238EFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238F00: lwc1        $f0, 0x65DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65DC);
    // 0x00238F04: bne         $v0, $zero, L_00238FC8
    if (ctx->r2 != 0) {
        // 0x00238F08: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_00238FC8;
    }
    // 0x00238F08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00238F0C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00238F10: beq         $v1, $zero, L_00238F28
    if (ctx->r3 == 0) {
        // 0x00238F14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00238F28;
    }
    // 0x00238F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238F18: beq         $v1, $v0, L_00238F48
    if (ctx->r3 == ctx->r2) {
        // 0x00238F1C: nop
    
            goto L_00238F48;
    }
    // 0x00238F1C: nop

    // 0x00238F20: j           L_00238FA4
    // 0x00238F24: nop

        goto L_00238FA4;
    // 0x00238F24: nop

L_00238F28:
    // 0x00238F28: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00238F2C: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x00238F30: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x00238F34: bne         $v1, $v0, L_00238FC8
    if (ctx->r3 != ctx->r2) {
        // 0x00238F38: nop
    
            goto L_00238FC8;
    }
    // 0x00238F38: nop

    // 0x00238F3C: lw          $a3, 0x80($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X80);
    // 0x00238F40: j           L_00238FA4
    // 0x00238F44: nop

        goto L_00238FA4;
    // 0x00238F44: nop

L_00238F48:
    // 0x00238F48: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00238F4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00238F50: bne         $v0, $v1, L_00238F8C
    if (ctx->r2 != ctx->r3) {
        // 0x00238F54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00238F8C;
    }
    // 0x00238F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238F58: lw          $v1, -0x1CC($a2)
    ctx->r3 = MEM_W(ctx->r6, -0X1CC);
    // 0x00238F5C: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x00238F60: beq         $v0, $zero, L_00238F78
    if (ctx->r2 == 0) {
        // 0x00238F64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00238F78;
    }
    // 0x00238F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238F68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238F6C: lwc1        $f0, 0x65E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65E0);
    // 0x00238F70: j           L_00238F8C
    // 0x00238F74: nop

        goto L_00238F8C;
    // 0x00238F74: nop

L_00238F78:
    // 0x00238F78: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x00238F7C: beq         $v0, $zero, L_00238F8C
    if (ctx->r2 == 0) {
        // 0x00238F80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00238F8C;
    }
    // 0x00238F80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238F84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238F88: lwc1        $f0, 0x65E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65E4);
L_00238F8C:
    // 0x00238F8C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00238F90: lw          $v1, 0x14C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14C);
    // 0x00238F94: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x00238F98: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00238F9C: beq         $v1, $zero, L_00238FC8
    if (ctx->r3 == 0) {
        // 0x00238FA0: nop
    
            goto L_00238FC8;
    }
    // 0x00238FA0: nop

L_00238FA4:
    // 0x00238FA4: lh          $a0, 0x42($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X42);
    // 0x00238FA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00238FAC: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x00238FB0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00238FB4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x00238FB8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x00238FBC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x00238FC0: jal         0x002755B0
    // 0x00238FC4: nop

    func_002755B0(rdram, ctx);
        goto after_0;
    // 0x00238FC4: nop

    after_0:
L_00238FC8:
    // 0x00238FC8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00238FCC: jr          $ra
    // 0x00238FD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00238FD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0043EAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405BFC:
    // 0x0043EAC8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x0043EACC: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x0043EAD0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0043EAD4: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x0043EAD8: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x0043EADC: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x0043EAE0: sdc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD8, ctx->r29);
    // 0x0043EAE4: sdc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD0, ctx->r29);
    // 0x0043EAE8: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0043EAEC: beq         $v0, $zero, L_0043EB14
    if (ctx->r2 == 0) {
        // 0x0043EAF0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0043EB14;
    }
    // 0x0043EAF0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0043EAF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EAF8: lwc1        $f0, 0x478($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X478);
    // 0x0043EAFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043EB00: swc1        $f0, 0x1FC($s1)
    MEM_W(0X1FC, ctx->r17) = ctx->f0.u32l;
    // 0x0043EB04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EB08: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x0043EB0C: jal         0x00243414
    // 0x0043EB10: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0043EB10: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
L_0043EB14:
    // 0x0043EB14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043EB18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0043EB1C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0043EB20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0043EB24: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043EB28: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043EB2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043EB30: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x0043EB34: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043EB38: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043EB3C: jal         0x00246108
    // 0x0043EB40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x0043EB40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x0043EB44: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x0043EB48: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0043EB4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043EB50: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x0043EB54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0043EB58: beq         $a1, $zero, L_0043EC48
    if (ctx->r5 == 0) {
        // 0x0043EB5C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0043EC48;
    }
    // 0x0043EB5C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043EB60: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x0043EB64: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x0043EB68: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x0043EB6C: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x0043EB70: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x0043EB74: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0043EB78: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x0043EB7C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x0043EB80: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x0043EB84: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0043EB88: jal         0x00246310
    // 0x0043EB8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00246310(rdram, ctx);
        goto after_2;
    // 0x0043EB8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0043EB90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043EB94: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0043EB98: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0043EB9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0043EBA0: jal         0x00245BAC
    // 0x0043EBA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_3;
    // 0x0043EBA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0043EBA8: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x0043EBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043EBB0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0043EBB4: jal         0x0020EF2C
    // 0x0043EBB8: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0043EBB8: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_4:
    // 0x0043EBBC: jal         0x0020EAA0
    // 0x0043EBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_5;
    // 0x0043EBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0043EBC4: lwc1        $f2, 0xD8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x0043EBC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EBCC: lwc1        $f1, 0x47C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X47C);
    // 0x0043EBD0: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0043EBD4: nop

    // 0x0043EBD8: bc1f        L_0043EBF8
    if (!c1cs) {
        // 0x0043EBDC: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_0043EBF8;
    }
    // 0x0043EBDC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0043EBE0: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0043EBE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EBE8: lwc1        $f0, 0x480($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X480);
    // 0x0043EBEC: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0043EBF0: j           L_00405BFC
    // 0x0043EBF4: nop

    func_00405BFC(rdram, ctx);
    return;
    // 0x0043EBF4: nop

L_0043EBF8:
    // 0x0043EBF8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x0043EBFC: lui         $a2, 0x4400
    ctx->r6 = S32(0X4400 << 16);
    // 0x0043EC00: jal         0x0021160C
    // 0x0043EC04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021160C(rdram, ctx);
        goto after_6;
    // 0x0043EC04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x0043EC08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0043EC0C: jal         0x002982F0
    // 0x0043EC10: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0043EC10: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_7:
    // 0x0043EC14: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0043EC18: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0043EC1C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043EC20: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0043EC24: jal         0x002974C0
    // 0x0043EC28: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x0043EC28: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_8:
    // 0x0043EC2C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0043EC30: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x0043EC34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043EC38: lwc1        $f2, 0x484($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X484);
    // 0x0043EC3C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043EC40: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x0043EC44: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0043EC48:
    // 0x0043EC48: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x0043EC4C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x0043EC50: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x0043EC54: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x0043EC58: ldc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD8);
    // 0x0043EC5C: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x0043EC60: jr          $ra
    // 0x0043EC64: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x0043EC64: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_0025A894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A898: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A89C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A8A0: lhu         $a3, 0x8A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8A);
    // 0x0025A8A4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A8A8: addiu       $a2, $a2, 0x180
    ctx->r6 = ADD32(ctx->r6, 0X180);
    // 0x0025A8AC: jal         0x00245A98
    // 0x0025A8B0: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A8B0: nop

    after_0:
    // 0x0025A8B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A8B8: jr          $ra
    // 0x0025A8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029129C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x002912A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002912A0(rdram, ctx);
;}
RECOMP_FUNC void func_0042F6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F6A4: srl         $v0, $a1, 3
    ctx->r2 = S32(U32(ctx->r5) >> 3);
    // 0x0042F6A8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0042F6AC: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0042F6B0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x0042F6B4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0042F6B8: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x0042F6BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042F6C0: jr          $ra
    // 0x0042F6C4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0042F6C4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_00262150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262150: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x00262154: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x00262158: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0026215C: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x00262160: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00262164: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x00262168: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x0026216C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x00262170: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x00262174: sdc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XA0, ctx->r29);
    // 0x00262178: sdc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X98, ctx->r29);
    // 0x0026217C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00262180: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00262184: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // 0x00262188: lwc1        $f2, 0x5C($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x0026218C: lwc1        $f20, 0x64($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0X64);
    // 0x00262190: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x00262194: nop

    // 0x00262198: bc1f        L_002621B4
    if (!c1cs) {
        // 0x0026219C: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_002621B4;
    }
    // 0x0026219C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x002621A0: lwc1        $f0, 0x58($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X58);
    // 0x002621A4: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x002621A8: nop

    // 0x002621AC: bc1t        L_002621D0
    if (c1cs) {
        // 0x002621B0: mov.s       $f21, $f1
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
            goto L_002621D0;
    }
    // 0x002621B0: mov.s       $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
L_002621B4:
    // 0x002621B4: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002621B8: lwc1        $f12, 0x58($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X58);
    // 0x002621BC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x002621C0: jal         0x00298470
    // 0x002621C4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x002621C4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_0:
    // 0x002621C8: lwc1        $f1, 0x64($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X64);
    // 0x002621CC: div.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_002621D0:
    // 0x002621D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002621D4: beq         $s0, $v0, L_002621F4
    if (ctx->r16 == ctx->r2) {
        // 0x002621D8: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_002621F4;
    }
    // 0x002621D8: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x002621DC: bne         $v0, $zero, L_00262314
    if (ctx->r2 != 0) {
        // 0x002621E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00262314;
    }
    // 0x002621E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002621E4: beq         $s0, $v0, L_00262268
    if (ctx->r16 == ctx->r2) {
        // 0x002621E8: nop
    
            goto L_00262268;
    }
    // 0x002621E8: nop

    // 0x002621EC: j           L_00262314
    // 0x002621F0: nop

        goto L_00262314;
    // 0x002621F0: nop

L_002621F4:
    // 0x002621F4: lb          $v0, 0x37($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X37);
    // 0x002621F8: bne         $v0, $s0, L_00262204
    if (ctx->r2 != ctx->r16) {
        // 0x002621FC: mov.s       $f14, $f21
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
            goto L_00262204;
    }
    // 0x002621FC: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00262200: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_00262204:
    // 0x00262204: lwc1        $f12, 0x110($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X110);
    // 0x00262208: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0026220C: jal         0x00211774
    // 0x00262210: nop

    func_00211774(rdram, ctx);
        goto after_1;
    // 0x00262210: nop

    after_1:
    // 0x00262214: lb          $v0, 0x37($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X37);
    // 0x00262218: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x0026221C: bne         $v0, $zero, L_00262248
    if (ctx->r2 != 0) {
        // 0x00262220: swc1        $f0, 0x110($s3)
        MEM_W(0X110, ctx->r19) = ctx->f0.u32l;
            goto L_00262248;
    }
    // 0x00262220: swc1        $f0, 0x110($s3)
    MEM_W(0X110, ctx->r19) = ctx->f0.u32l;
    // 0x00262224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262228: lwc1        $f0, 0x7B70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B70);
    // 0x0026222C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00262230: nop

    // 0x00262234: bc1f        L_00262320
    if (!c1cs) {
        // 0x00262238: nop
    
            goto L_00262320;
    }
    // 0x00262238: nop

    // 0x0026223C: sw          $zero, 0x110($s3)
    MEM_W(0X110, ctx->r19) = 0;
    // 0x00262240: j           L_00262320
    // 0x00262244: sb          $s0, 0x37($s3)
    MEM_B(0X37, ctx->r19) = ctx->r16;
        goto L_00262320;
    // 0x00262244: sb          $s0, 0x37($s3)
    MEM_B(0X37, ctx->r19) = ctx->r16;
L_00262248:
    // 0x00262248: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026224C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00262250: nop

    // 0x00262254: bc1f        L_00262314
    if (!c1cs) {
        // 0x00262258: nop
    
            goto L_00262314;
    }
    // 0x00262258: nop

    // 0x0026225C: swc1        $f0, 0x110($s3)
    MEM_W(0X110, ctx->r19) = ctx->f0.u32l;
    // 0x00262260: j           L_00262314
    // 0x00262264: sb          $zero, 0x37($s3)
    MEM_B(0X37, ctx->r19) = 0;
        goto L_00262314;
    // 0x00262264: sb          $zero, 0x37($s3)
    MEM_B(0X37, ctx->r19) = 0;
L_00262268:
    // 0x00262268: beq         $s4, $zero, L_00262314
    if (ctx->r20 == 0) {
        // 0x0026226C: nop
    
            goto L_00262314;
    }
    // 0x0026226C: nop

    // 0x00262270: lwc1        $f0, 0x60($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00262274: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00262278: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026227C: nop

    // 0x00262280: bc1tl       L_002622D4
    if (c1cs) {
        // 0x00262284: sub.s       $f14, $f1, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f1.fl - ctx->f20.fl;
            goto L_002622D4;
    }
    goto skip_0;
    // 0x00262284: sub.s       $f14, $f1, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f1.fl - ctx->f20.fl;
    skip_0:
    // 0x00262288: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x0026228C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00262290: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x00262294: jal         0x0020EF2C
    // 0x00262298: addiu       $a2, $s3, 0x9C
    ctx->r6 = ADD32(ctx->r19, 0X9C);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00262298: addiu       $a2, $s3, 0x9C
    ctx->r6 = ADD32(ctx->r19, 0X9C);
    after_2:
    // 0x0026229C: lwc1        $f0, 0x60($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X60);
    // 0x002622A0: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x002622A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002622A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002622AC: jal         0x002105A4
    // 0x002622B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_3;
    // 0x002622B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002622B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002622B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002622BC: jal         0x0020F85C
    // 0x002622C0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x002622C0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x002622C4: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x002622C8: lwc1        $f0, 0x5C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x002622CC: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002622D0: sub.s       $f14, $f1, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f1.fl - ctx->f20.fl;
L_002622D4:
    // 0x002622D4: c.lt.s      $f21, $f14
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f21.fl < ctx->f14.fl;
    // 0x002622D8: nop

    // 0x002622DC: bc1fl       L_002622EC
    if (!c1cs) {
        // 0x002622E0: neg.s       $f1, $f21
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = -ctx->f21.fl;
            goto L_002622EC;
    }
    goto skip_1;
    // 0x002622E0: neg.s       $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = -ctx->f21.fl;
    skip_1:
    // 0x002622E4: j           L_002622FC
    // 0x002622E8: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
        goto L_002622FC;
    // 0x002622E8: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
L_002622EC:
    // 0x002622EC: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x002622F0: nop

    // 0x002622F4: bc1tl       L_002622FC
    if (c1cs) {
        // 0x002622F8: mov.s       $f14, $f1
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    ctx->f14.fl = ctx->f1.fl;
            goto L_002622FC;
    }
    goto skip_2;
    // 0x002622F8: mov.s       $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    ctx->f14.fl = ctx->f1.fl;
    skip_2:
L_002622FC:
    // 0x002622FC: lwc1        $f12, 0x110($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X110);
    // 0x00262300: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00262304: jal         0x00211774
    // 0x00262308: nop

    func_00211774(rdram, ctx);
        goto after_5;
    // 0x00262308: nop

    after_5:
    // 0x0026230C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00262310: swc1        $f0, 0x110($s3)
    MEM_W(0X110, ctx->r19) = ctx->f0.u32l;
L_00262314:
    // 0x00262314: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262318: lwc1        $f0, 0x7B74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B74);
    // 0x0026231C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_00262320:
    // 0x00262320: nop

    // 0x00262324: bc1tl       L_00262344
    if (c1cs) {
        // 0x00262328: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_00262344;
    }
    goto skip_3;
    // 0x00262328: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    skip_3:
    // 0x0026232C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00262330: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00262334: nop

    // 0x00262338: bc1fl       L_00262348
    if (!c1cs) {
        // 0x0026233C: swc1        $f20, 0x64($s3)
        MEM_W(0X64, ctx->r19) = ctx->f20.u32l;
            goto L_00262348;
    }
    goto skip_4;
    // 0x0026233C: swc1        $f20, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->f20.u32l;
    skip_4:
    // 0x00262340: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_00262344:
    // 0x00262344: swc1        $f20, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->f20.u32l;
L_00262348:
    // 0x00262348: lw          $v1, 0x9C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X9C);
    // 0x0026234C: lw          $t0, 0xA0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XA0);
    // 0x00262350: lw          $t1, 0xA4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XA4);
    // 0x00262354: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00262358: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0026235C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00262360: lwc1        $f12, 0x60($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00262364: jal         0x002982F0
    // 0x00262368: addiu       $s0, $s3, 0x9C
    ctx->r16 = ADD32(ctx->r19, 0X9C);
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x00262368: addiu       $s0, $s3, 0x9C
    ctx->r16 = ADD32(ctx->r19, 0X9C);
    after_6:
    // 0x0026236C: lwc1        $f1, 0x5C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X5C);
    // 0x00262370: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00262374: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00262378: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026237C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00262380: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00262384: lwc1        $f1, 0x58($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X58);
    // 0x00262388: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026238C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00262390: lwc1        $f12, 0x60($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00262394: jal         0x002974C0
    // 0x00262398: nop

    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x00262398: nop

    after_7:
    // 0x0026239C: lwc1        $f1, 0x5C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X5C);
    // 0x002623A0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002623A4: addiu       $a0, $s3, 0x54
    ctx->r4 = ADD32(ctx->r19, 0X54);
    // 0x002623A8: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002623AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002623B0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002623B4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x002623B8: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x002623BC: jal         0x0020EF8C
    // 0x002623C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020EF8C(rdram, ctx);
        goto after_8;
    // 0x002623C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x002623C4: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x002623C8: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x002623CC: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x002623D0: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x002623D4: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x002623D8: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x002623DC: ldc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XA0);
    // 0x002623E0: ldc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X98);
    // 0x002623E4: jr          $ra
    // 0x002623E8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x002623E8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_004203B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004203B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004203B4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004203B8: lw          $v1, 0x994($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X994);
    // 0x004203BC: beq         $v1, $zero, L_004203F8
    if (ctx->r3 == 0) {
        // 0x004203C0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_004203F8;
    }
    // 0x004203C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004203C4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x004203C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004203CC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004203D0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x004203D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004203D8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004203DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004203E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004203E4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004203E8: jal         0x00416644
    // 0x004203EC: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x004203EC: nop

    after_0:
    // 0x004203F0: j           L_00420444
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x004203F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004203F8:
    // 0x004203F8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004203FC: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00420400: beq         $v0, $zero, L_00420440
    if (ctx->r2 == 0) {
        // 0x00420404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420440;
    }
    // 0x00420404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420408: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042040C: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420410: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00420414: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00420418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042041C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420420: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00420424: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00420428: jal         0x00416644
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0042042C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
    // 0x00420430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420434: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420438: j           L_00420444
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420444;
    // 0x0042043C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420440:
    // 0x00420440: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00420444:
    // 0x00420444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420448: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042044C: jr          $ra
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028DBAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028DBAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028DBB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028DBB4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0028DBB8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0028DBBC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0028DBC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028DBC4: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x0028DBC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028DBCC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028DBD0: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x0028DBD4: beq         $a0, $zero, L_0028DBE0
    if (ctx->r4 == 0) {
        // 0x0028DBD8: sw          $ra, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r31;
            goto L_0028DBE0;
    }
    // 0x0028DBD8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0028DBDC: addiu       $s0, $s3, -0x1
    ctx->r16 = ADD32(ctx->r19, -0X1);
L_0028DBE0:
    // 0x0028DBE0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028DBE4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0028DBE8: beq         $v0, $a0, L_0028DC2C
    if (ctx->r2 == ctx->r4) {
        // 0x0028DBEC: sll         $v1, $v0, 4
        ctx->r3 = S32(ctx->r2 << 4);
            goto L_0028DC2C;
    }
    // 0x0028DBEC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0028DBF0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DBF4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DBF8: lbu         $v0, 0xFCB($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XFCB);
    // 0x0028DBFC: beq         $v0, $a0, L_0028DC2C
    if (ctx->r2 == ctx->r4) {
        // 0x0028DC00: nop
    
            goto L_0028DC2C;
    }
    // 0x0028DC00: nop

    // 0x0028DC04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DC08: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DC0C: lbu         $t0, 0xFCB($at)
    ctx->r8 = MEM_BU(ctx->r1, 0XFCB);
    // 0x0028DC10: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x0028DC14: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x0028DC18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DC1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DC20: sb          $v1, 0x131B($at)
    MEM_B(0X131B, ctx->r1) = ctx->r3;
    // 0x0028DC24: j           L_0028DE08
    // 0x0028DC28: nop

        goto L_0028DE08;
    // 0x0028DC28: nop

L_0028DC2C:
    // 0x0028DC2C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x0028DC30: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0028DC34: beq         $v0, $a0, L_0028DC78
    if (ctx->r2 == ctx->r4) {
        // 0x0028DC38: sll         $v1, $v0, 4
        ctx->r3 = S32(ctx->r2 << 4);
            goto L_0028DC78;
    }
    // 0x0028DC38: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0028DC3C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DC40: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DC44: lbu         $v0, 0xFCB($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XFCB);
    // 0x0028DC48: beq         $v0, $a0, L_0028DC78
    if (ctx->r2 == ctx->r4) {
        // 0x0028DC4C: nop
    
            goto L_0028DC78;
    }
    // 0x0028DC4C: nop

    // 0x0028DC50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DC54: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DC58: lbu         $t0, 0xFCB($at)
    ctx->r8 = MEM_BU(ctx->r1, 0XFCB);
    // 0x0028DC5C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x0028DC60: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x0028DC64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DC68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DC6C: sb          $v1, 0x131A($at)
    MEM_B(0X131A, ctx->r1) = ctx->r3;
    // 0x0028DC70: j           L_0028DE08
    // 0x0028DC74: nop

        goto L_0028DE08;
    // 0x0028DC74: nop

L_0028DC78:
    // 0x0028DC78: jal         0x0028DAEC
    // 0x0028DC7C: nop

    func_0028DAEC(rdram, ctx);
        goto after_0;
    // 0x0028DC7C: nop

    after_0:
    // 0x0028DC80: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x0028DC84: andi        $v0, $s2, 0x1
    ctx->r2 = ctx->r18 & 0X1;
    // 0x0028DC88: beq         $v0, $zero, L_0028DD14
    if (ctx->r2 == 0) {
        // 0x0028DC8C: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_0028DD14;
    }
    // 0x0028DC8C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0028DC90: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x0028DC94: sra         $a0, $v0, 14
    ctx->r4 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0028DC98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DC9C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0028DCA0: sb          $v1, 0x131B($at)
    MEM_B(0X131B, ctx->r1) = ctx->r3;
    // 0x0028DCA4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x0028DCA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028DCAC: beq         $v1, $v0, L_0028DDF0
    if (ctx->r3 == ctx->r2) {
        // 0x0028DCB0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0028DDF0;
    }
    // 0x0028DCB0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028DCB4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028DCB8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028DCBC: addiu       $v1, $v1, 0xFC0
    ctx->r3 = ADD32(ctx->r3, 0XFC0);
    // 0x0028DCC0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0028DCC4: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x0028DCC8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DCCC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0028DCD0: sb          $v0, 0x131A($at)
    MEM_B(0X131A, ctx->r1) = ctx->r2;
    // 0x0028DCD4: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0028DCD8: beq         $a0, $zero, L_0028DCEC
    if (ctx->r4 == 0) {
        // 0x0028DCDC: sb          $t0, 0xB($v1)
        MEM_B(0XB, ctx->r3) = ctx->r8;
            goto L_0028DCEC;
    }
    // 0x0028DCDC: sb          $t0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r8;
    // 0x0028DCE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028DCE4: j           L_0028DD00
    // 0x0028DCE8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_0028DD00;
    // 0x0028DCE8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0028DCEC:
    // 0x0028DCEC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028DCF0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DCF4: sw          $v0, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r2;
    // 0x0028DCF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028DCFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028DD00:
    // 0x0028DD00: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0028DD04: beq         $a0, $zero, L_0028DD9C
    if (ctx->r4 == 0) {
        // 0x0028DD08: nop
    
            goto L_0028DD9C;
    }
    // 0x0028DD08: nop

    // 0x0028DD0C: j           L_0028DD90
    // 0x0028DD10: nop

        goto L_0028DD90;
    // 0x0028DD10: nop

L_0028DD14:
    // 0x0028DD14: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x0028DD18: sra         $a0, $v0, 14
    ctx->r4 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0028DD1C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DD20: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0028DD24: sb          $v1, 0x131A($at)
    MEM_B(0X131A, ctx->r1) = ctx->r3;
    // 0x0028DD28: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x0028DD2C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028DD30: beq         $v1, $v0, L_0028DDF0
    if (ctx->r3 == ctx->r2) {
        // 0x0028DD34: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0028DDF0;
    }
    // 0x0028DD34: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028DD38: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028DD3C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028DD40: addiu       $v1, $v1, 0xFC0
    ctx->r3 = ADD32(ctx->r3, 0XFC0);
    // 0x0028DD44: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0028DD48: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x0028DD4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DD50: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0028DD54: sb          $v0, 0x131B($at)
    MEM_B(0X131B, ctx->r1) = ctx->r2;
    // 0x0028DD58: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0028DD5C: beq         $a0, $zero, L_0028DD70
    if (ctx->r4 == 0) {
        // 0x0028DD60: sb          $t0, 0xB($v1)
        MEM_B(0XB, ctx->r3) = ctx->r8;
            goto L_0028DD70;
    }
    // 0x0028DD60: sb          $t0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r8;
    // 0x0028DD64: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028DD68: j           L_0028DD84
    // 0x0028DD6C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_0028DD84;
    // 0x0028DD6C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0028DD70:
    // 0x0028DD70: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028DD74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DD78: sw          $v0, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r2;
    // 0x0028DD7C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0028DD80: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028DD84:
    // 0x0028DD84: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0028DD88: beq         $a0, $zero, L_0028DD9C
    if (ctx->r4 == 0) {
        // 0x0028DD8C: nop
    
            goto L_0028DD9C;
    }
    // 0x0028DD8C: nop

L_0028DD90:
    // 0x0028DD90: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0028DD94: j           L_0028DDB0
    // 0x0028DD98: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_0028DDB0;
    // 0x0028DD98: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0028DD9C:
    // 0x0028DD9C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0028DDA0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DDA4: sw          $v0, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r2;
    // 0x0028DDA8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0028DDAC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_0028DDB0:
    // 0x0028DDB0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0028DDB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028DDB8: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028DDBC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0028DDC0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028DDC4: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028DDC8: bnel        $v0, $zero, L_0028DDD0
    if (ctx->r2 != 0) {
        // 0x0028DDCC: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_0028DDD0;
    }
    goto skip_0;
    // 0x0028DDCC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    skip_0:
L_0028DDD0:
    // 0x0028DDD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028DDD4: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1290);
    // 0x0028DDD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DDDC: sw          $v1, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r3;
    // 0x0028DDE0: bne         $v0, $zero, L_0028DDF4
    if (ctx->r2 != 0) {
        // 0x0028DDE4: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_0028DDF4;
    }
    // 0x0028DDE4: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0028DDE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DDEC: sw          $v1, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r3;
L_0028DDF0:
    // 0x0028DDF0: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_0028DDF4:
    // 0x0028DDF4: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0028DDF8: andi        $v1, $s2, 0xFFFE
    ctx->r3 = ctx->r18 & 0XFFFE;
    // 0x0028DDFC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DE00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DE04: sh          $v1, 0x1318($at)
    MEM_H(0X1318, ctx->r1) = ctx->r3;
L_0028DE08:
    // 0x0028DE08: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x0028DE0C: sh          $s2, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r18;
    // 0x0028DE10: sb          $t0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r8;
    // 0x0028DE14: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x0028DE18: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0028DE1C: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0028DE20: sll         $a1, $t1, 2
    ctx->r5 = S32(ctx->r9 << 2);
    // 0x0028DE24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DE28: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0028DE2C: lhu         $v0, 0x1318($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1318);
    // 0x0028DE30: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DE34: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0028DE38: lbu         $v1, 0x131A($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X131A);
    // 0x0028DE3C: sll         $a2, $v0, 12
    ctx->r6 = S32(ctx->r2 << 12);
    // 0x0028DE40: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028DE44: beq         $v1, $v0, L_0028DE74
    if (ctx->r3 == ctx->r2) {
        // 0x0028DE48: lui         $a0, 0x3FF
        ctx->r4 = S32(0X3FF << 16);
            goto L_0028DE74;
    }
    // 0x0028DE48: lui         $a0, 0x3FF
    ctx->r4 = S32(0X3FF << 16);
    // 0x0028DE4C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0028DE50: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0028DE54: addiu       $v1, $v1, 0x2000
    ctx->r3 = ADD32(ctx->r3, 0X2000);
    // 0x0028DE58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DE5C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0028DE60: lbu         $v0, 0x131A($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131A);
    // 0x0028DE64: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0028DE68: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0028DE6C: j           L_0028DE78
    // 0x0028DE70: addu        $a3, $v1, $v0
    ctx->r7 = ADD32(ctx->r3, ctx->r2);
        goto L_0028DE78;
    // 0x0028DE70: addu        $a3, $v1, $v0
    ctx->r7 = ADD32(ctx->r3, ctx->r2);
L_0028DE74:
    // 0x0028DE74: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_0028DE78:
    // 0x0028DE78: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0028DE7C: sra         $a1, $v0, 14
    ctx->r5 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0028DE80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DE84: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0028DE88: lbu         $v1, 0x131B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X131B);
    // 0x0028DE8C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028DE90: beq         $v1, $v0, L_0028DEC4
    if (ctx->r3 == ctx->r2) {
        // 0x0028DE94: lui         $a0, 0x3FF
        ctx->r4 = S32(0X3FF << 16);
            goto L_0028DEC4;
    }
    // 0x0028DE94: lui         $a0, 0x3FF
    ctx->r4 = S32(0X3FF << 16);
    // 0x0028DE98: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0028DE9C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0028DEA0: addiu       $v1, $v1, 0x2000
    ctx->r3 = ADD32(ctx->r3, 0X2000);
    // 0x0028DEA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DEA8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0028DEAC: lbu         $v0, 0x131B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131B);
    // 0x0028DEB0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0028DEB4: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0028DEB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0028DEBC: j           L_0028DECC
    // 0x0028DEC0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_0028DECC;
    // 0x0028DEC0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_0028DEC4:
    // 0x0028DEC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0028DEC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0028DECC:
    // 0x0028DECC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0028DED0: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x0028DED4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028DED8: jal         0x0028EE40
    // 0x0028DEDC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0028EE40(rdram, ctx);
        goto after_1;
    // 0x0028DEDC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x0028DEE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028DEE4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0028DEE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028DEEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028DEF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028DEF4: jr          $ra
    // 0x0028DEF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028DEF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00209658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00209658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020965C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00209660: jal         0x00207A54
    // 0x00209664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    entry_00207A54(rdram, ctx);
        goto after_0;
    // 0x00209664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00209668: lui         $a2, 0x701
    ctx->r6 = S32(0X701 << 16);
    // 0x0020966C: ori         $a2, $a2, 0x4050
    ctx->r6 = ctx->r6 | 0X4050;
    // 0x00209670: lui         $t0, 0x70F
    ctx->r8 = S32(0X70F << 16);
    // 0x00209674: ori         $t0, $t0, 0xF400
    ctx->r8 = ctx->r8 | 0XF400;
    // 0x00209678: lui         $t2, 0xF580
    ctx->r10 = S32(0XF580 << 16);
    // 0x0020967C: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x00209680: lui         $t1, 0x1
    ctx->r9 = S32(0X1 << 16);
    // 0x00209684: ori         $t1, $t1, 0x4050
    ctx->r9 = ctx->r9 | 0X4050;
    // 0x00209688: lui         $t3, 0x7
    ctx->r11 = S32(0X7 << 16);
    // 0x0020968C: ori         $t3, $t3, 0xC07C
    ctx->r11 = ctx->r11 | 0XC07C;
    // 0x00209690: lui         $t5, 0xD700
    ctx->r13 = S32(0XD700 << 16);
    // 0x00209694: ori         $t5, $t5, 0x2
    ctx->r13 = ctx->r13 | 0X2;
    // 0x00209698: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x0020969C: ori         $t4, $t4, 0x800
    ctx->r12 = ctx->r12 | 0X800;
    // 0x002096A0: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x002096A4: ori         $t6, $t6, 0x1001
    ctx->r14 = ctx->r14 | 0X1001;
    // 0x002096A8: lui         $s0, 0xD9FF
    ctx->r16 = S32(0XD9FF << 16);
    // 0x002096AC: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x002096B0: lui         $t7, 0x26
    ctx->r15 = S32(0X26 << 16);
    // 0x002096B4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x002096B8: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x002096BC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x002096C0: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x002096C4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002096C8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002096CC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002096D0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002096D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002096D8: addiu       $v0, $v0, -0x4980
    ctx->r2 = ADD32(ctx->r2, -0X4980);
    // 0x002096DC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002096E0: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x002096E4: lui         $v0, 0xF590
    ctx->r2 = S32(0XF590 << 16);
    // 0x002096E8: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x002096EC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x002096F0: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x002096F4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002096F8: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x002096FC: addiu       $a3, $v1, 0x18
    ctx->r7 = ADD32(ctx->r3, 0X18);
    // 0x00209700: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00209704: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00209708: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x0020970C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00209710: addiu       $a0, $v1, 0x20
    ctx->r4 = ADD32(ctx->r3, 0X20);
    // 0x00209714: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x00209718: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x0020971C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00209720: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x00209724: addiu       $a2, $v1, 0x28
    ctx->r6 = ADD32(ctx->r3, 0X28);
    // 0x00209728: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0020972C: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x00209730: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00209734: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00209738: sw          $t2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r10;
    // 0x0020973C: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00209740: addiu       $a0, $v1, 0x30
    ctx->r4 = ADD32(ctx->r3, 0X30);
    // 0x00209744: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x00209748: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0020974C: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x00209750: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x00209754: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x00209758: addiu       $a2, $v1, 0x40
    ctx->r6 = ADD32(ctx->r3, 0X40);
    // 0x0020975C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00209760: sw          $t5, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r13;
    // 0x00209764: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x00209768: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0020976C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00209770: lw          $a0, -0x475C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X475C);
    // 0x00209774: ori         $t7, $t7, 0x404
    ctx->r15 = ctx->r15 | 0X404;
    // 0x00209778: sw          $t6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r14;
    // 0x0020977C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00209780: addiu       $v0, $v1, 0x48
    ctx->r2 = ADD32(ctx->r3, 0X48);
    // 0x00209784: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00209788: sw          $s0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r16;
    // 0x0020978C: or          $a0, $a0, $t7
    ctx->r4 = ctx->r4 | ctx->r15;
    // 0x00209790: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x00209794: jal         0x00207FEC
    // 0x00209798: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x00209798: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_1:
    // 0x0020979C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002097A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002097A4: jr          $ra
    // 0x002097A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002097A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00418584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418584: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418588: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041858C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00418590: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00418594: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00418598: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041859C: lb          $v0, 0x26($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X26);
    // 0x004185A0: beq         $v0, $zero, L_004185D4
    if (ctx->r2 == 0) {
        // 0x004185A4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_004185D4;
    }
    // 0x004185A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004185A8: jal         0x004160F0
    // 0x004185AC: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x004185AC: nop

    after_0:
    // 0x004185B0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004185B4: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x004185B8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x004185BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x004185C0: lb          $a2, 0x26($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X26);
    // 0x004185C4: jal         0x0029E3E0
    // 0x004185C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x004185C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x004185CC: j           L_004185F4
    // 0x004185D0: nop

        goto L_004185F4;
    // 0x004185D0: nop

L_004185D4:
    // 0x004185D4: jal         0x004160F0
    // 0x004185D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x004185D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004185DC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004185E0: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x004185E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x004185E8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x004185EC: jal         0x0029E3E0
    // 0x004185F0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x004185F0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_004185F4:
    // 0x004185F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004185F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004185FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418600: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418604: jr          $ra
    // 0x00418608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00429EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429EC4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00429EC8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00429ECC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00429ED0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429ED4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00429ED8: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_00429EDC:
    // 0x00429EDC: lbu         $v0, 0x65($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X65);
    // 0x00429EE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00429EE4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00429EE8: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429EEC: bne         $v0, $zero, L_00429EDC
    if (ctx->r2 != 0) {
        // 0x00429EF0: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_00429EDC;
    }
    // 0x00429EF0: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x00429EF4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00429EF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429EFC: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x00429F00: lw          $a1, 0x8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X8);
    // 0x00429F04: jal         0x00299A40
    // 0x00429F08: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x00429F08: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00429F0C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00429F10: jr          $ra
    // 0x00429F14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00429F14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00280FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280FD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00280FDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00280FE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00280FE4: jal         0x0027C074
    // 0x00280FE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0027C074(rdram, ctx);
        goto after_0;
    // 0x00280FE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00280FEC: lw          $v0, 0x52C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X52C);
    // 0x00280FF0: beq         $v0, $zero, L_00281044
    if (ctx->r2 == 0) {
        // 0x00280FF4: nop
    
            goto L_00281044;
    }
    // 0x00280FF4: nop

    // 0x00280FF8: lwc1        $f2, 0x290($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X290);
    // 0x00280FFC: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00281000: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00281004: lwc1        $f3, 0x294($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x00281008: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0028100C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x00281010: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // 0x00281014: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00281018: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0028101C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00281020: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00281024: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00281028: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x0028102C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00281030: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x00281034: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00281038: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0028103C: jal         0x002883E0
    // 0x00281040: addiu       $a1, $s0, 0x536
    ctx->r5 = ADD32(ctx->r16, 0X536);
    func_002883E0(rdram, ctx);
        goto after_1;
    // 0x00281040: addiu       $a1, $s0, 0x536
    ctx->r5 = ADD32(ctx->r16, 0X536);
    after_1:
L_00281044:
    // 0x00281044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00281048: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028104C: jr          $ra
    // 0x00281050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00281050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00454790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454790: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454794: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454798: xori        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 ^ 0X1000;
    // 0x0045479C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004547A0: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x004547A4: jr          $ra
    // 0x004547A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004547A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00456948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D9A0:
    // 0x00456948: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0041DAE4:
    // 0x0045694C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_0041DAFC:
    // 0x00456950: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
L_0041DB38:
    // 0x00456954: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x00456958: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0045695C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x00456960: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x00456964: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x00456968: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x0045696C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x00456970: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x00456974: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00456978: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0045697C: beq         $v0, $zero, L_00456994
    if (ctx->r2 == 0) {
        // 0x00456980: sw          $s0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r16;
            goto L_00456994;
    }
    // 0x00456980: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00456984: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x00456988: lw          $s6, 0x2028($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X2028);
    // 0x0045698C: j           L_0041D9A0
    // 0x00456990: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    entry_0041D9A0(rdram, ctx);
    return;
    // 0x00456990: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_00456994:
    // 0x00456994: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x00456998: lb          $s6, 0x4($v0)
    ctx->r22 = MEM_B(ctx->r2, 0X4);
    // 0x0045699C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x004569A0: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x004569A4: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    // 0x004569A8: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x004569AC: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
L_004569B0:
    // 0x004569B0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x004569B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x004569B8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x004569BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004569C0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x004569C4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x004569C8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x004569CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004569D0: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x004569D4: jal         0x00425D94
    // 0x004569D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_00425D94(rdram, ctx);
        goto after_0;
    // 0x004569D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
    // 0x004569DC: bne         $v0, $zero, L_00456AFC
    if (ctx->r2 != 0) {
        // 0x004569E0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00456AFC;
    }
    // 0x004569E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x004569E4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x004569E8: beq         $v0, $zero, L_00456AFC
    if (ctx->r2 == 0) {
        // 0x004569EC: nop
    
            goto L_00456AFC;
    }
    // 0x004569EC: nop

    // 0x004569F0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x004569F4: lw          $s0, 0x2024($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2024);
    // 0x004569F8: beq         $s0, $s1, L_00456A1C
    if (ctx->r16 == ctx->r17) {
        // 0x004569FC: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_00456A1C;
    }
    // 0x004569FC: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x00456A00: bnel        $v0, $zero, L_00456AFC
    if (ctx->r2 != 0) {
        // 0x00456A04: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00456AFC;
    }
    goto skip_0;
    // 0x00456A04: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
    // 0x00456A08: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x00456A0C: beq         $s0, $t0, L_00456A84
    if (ctx->r16 == ctx->r8) {
        // 0x00456A10: nop
    
            goto L_00456A84;
    }
    // 0x00456A10: nop

    // 0x00456A14: j           L_0041DAFC
    // 0x00456A18: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    entry_0041DAFC(rdram, ctx);
    return;
    // 0x00456A18: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00456A1C:
    // 0x00456A1C: jal         0x00426CAC
    // 0x00456A20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00426CAC(rdram, ctx);
        goto after_1;
    // 0x00456A20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00456A24: bne         $v0, $fp, L_00456A74
    if (ctx->r2 != ctx->r30) {
        // 0x00456A28: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00456A74;
    }
    // 0x00456A28: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00456A2C: jal         0x00426CAC
    // 0x00456A30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    entry_00426CAC(rdram, ctx);
        goto after_2;
    // 0x00456A30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00456A34: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x00456A38: bne         $v0, $t0, L_00456A74
    if (ctx->r2 != ctx->r8) {
        // 0x00456A3C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00456A74;
    }
    // 0x00456A3C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00456A40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00456A44: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x00456A48: jal         0x00426C74
    // 0x00456A4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426C74(rdram, ctx);
        goto after_3;
    // 0x00456A4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00456A50: bne         $v0, $zero, L_00456A74
    if (ctx->r2 != 0) {
        // 0x00456A54: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00456A74;
    }
    // 0x00456A54: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00456A58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00456A5C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x00456A60: jal         0x00426C74
    // 0x00456A64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426C74(rdram, ctx);
        goto after_4;
    // 0x00456A64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x00456A68: beq         $v0, $zero, L_00456A74
    if (ctx->r2 == 0) {
        // 0x00456A6C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00456A74;
    }
    // 0x00456A6C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00456A70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00456A74:
    // 0x00456A74: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00456A78: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x00456A7C: j           L_0041DAE4
    // 0x00456A80: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    entry_0041DAE4(rdram, ctx);
    return;
    // 0x00456A80: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_00456A84:
    // 0x00456A84: jal         0x00426CAC
    // 0x00456A88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00426CAC(rdram, ctx);
        goto after_5;
    // 0x00456A88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00456A8C: bnel        $v0, $fp, L_00456AD8
    if (ctx->r2 != ctx->r30) {
        // 0x00456A90: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00456AD8;
    }
    goto skip_1;
    // 0x00456A90: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x00456A94: jal         0x00426CAC
    // 0x00456A98: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    entry_00426CAC(rdram, ctx);
        goto after_6;
    // 0x00456A98: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x00456A9C: bnel        $v0, $s0, L_00456AD8
    if (ctx->r2 != ctx->r16) {
        // 0x00456AA0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00456AD8;
    }
    goto skip_2;
    // 0x00456AA0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
    // 0x00456AA4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00456AA8: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x00456AAC: jal         0x00426C74
    // 0x00456AB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426C74(rdram, ctx);
        goto after_7;
    // 0x00456AB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00456AB4: bne         $v0, $zero, L_00456AD8
    if (ctx->r2 != 0) {
        // 0x00456AB8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00456AD8;
    }
    // 0x00456AB8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00456ABC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00456AC0: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x00456AC4: jal         0x00426C74
    // 0x00456AC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426C74(rdram, ctx);
        goto after_8;
    // 0x00456AC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x00456ACC: beq         $v0, $zero, L_00456AD8
    if (ctx->r2 == 0) {
        // 0x00456AD0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00456AD8;
    }
    // 0x00456AD0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00456AD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00456AD8:
    // 0x00456AD8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00456ADC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00456AE0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x00456AE4: jal         0x00426C74
    // 0x00456AE8: nop

    func_00426C74(rdram, ctx);
        goto after_9;
    // 0x00456AE8: nop

    after_9:
    // 0x00456AEC: bne         $v0, $zero, L_00456AFC
    if (ctx->r2 != 0) {
        // 0x00456AF0: nop
    
            goto L_00456AFC;
    }
    // 0x00456AF0: nop

    // 0x00456AF4: bnel        $s0, $zero, L_00456AFC
    if (ctx->r16 != 0) {
        // 0x00456AF8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00456AFC;
    }
    goto skip_3;
    // 0x00456AF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_3:
L_00456AFC:
    // 0x00456AFC: beq         $s1, $zero, L_00456B20
    if (ctx->r17 == 0) {
        // 0x00456B00: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_00456B20;
    }
    // 0x00456B00: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x00456B04: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x00456B08: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00456B0C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x00456B10: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x00456B14: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00456B18: j           L_0041DB38
    // 0x00456B1C: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    entry_0041DB38(rdram, ctx);
    return;
    // 0x00456B1C: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_00456B20:
    // 0x00456B20: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x00456B24: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00456B28: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x00456B2C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x00456B30: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00456B34: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00456B38: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x00456B3C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00456B40: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x00456B44: bne         $v0, $zero, L_004569B0
    if (ctx->r2 != 0) {
        // 0x00456B48: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_004569B0;
    }
    // 0x00456B48: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x00456B4C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x00456B50: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x00456B54: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x00456B58: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x00456B5C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x00456B60: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x00456B64: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x00456B68: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00456B6C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00456B70: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00456B74: jr          $ra
    // 0x00456B78: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00456B78: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00441E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441E64: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00441E68: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00441E6C: beq         $v1, $zero, L_00441E9C
    if (ctx->r3 == 0) {
        // 0x00441E70: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00441E9C;
    }
    // 0x00441E70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00441E74:
    // 0x00441E74: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00441E78: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441E7C: bne         $v0, $a0, L_00441E90
    if (ctx->r2 != ctx->r4) {
        // 0x00441E80: nop
    
            goto L_00441E90;
    }
    // 0x00441E80: nop

    // 0x00441E84: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00441E88: bne         $v0, $zero, L_00441EA4
    if (ctx->r2 != 0) {
            // 0x00441E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00441EA4(rdram, ctx);
    return;
    }
    // 0x00441E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00441E90:
    // 0x00441E90: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00441E94: bne         $v1, $zero, L_00441E74
    if (ctx->r3 != 0) {
        // 0x00441E98: nop
    
            goto L_00441E74;
    }
    // 0x00441E98: nop

L_00441E9C:
    // 0x00441E9C: jr          $ra
    // 0x00441EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00441EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00443F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00443F20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00443F24: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00443F28: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00443F2C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00443F30: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00443F34: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00443F38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00443F3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00443F40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00443F44: lb          $v0, 0xC7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XC7);
    // 0x00443F48: blez        $v0, L_00443FAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00443F4C: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_00443FAC;
    }
    // 0x00443F4C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00443F50: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00443F54: lw          $s2, 0x1D0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1D0);
    // 0x00443F58: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00443F5C: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x00443F60: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00443F64: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_00443F68:
    // 0x00443F68: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x00443F6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00443F70: beql        $v0, $zero, L_00443F90
    if (ctx->r2 == 0) {
        // 0x00443F74: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00443F90;
    }
    goto skip_0;
    // 0x00443F74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00443F78: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x00443F7C: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00443F80: addiu       $a1, $a1, 0x1E04
    ctx->r5 = ADD32(ctx->r5, 0X1E04);
    // 0x00443F84: jal         0x00236314
    // 0x00443F88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00443F88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x00443F8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00443F90:
    // 0x00443F90: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00443F94: bne         $v0, $zero, L_00443F68
    if (ctx->r2 != 0) {
        // 0x00443F98: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00443F68;
    }
    // 0x00443F98: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00443F9C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00443FA0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00443FA4: jal         0x00243414
    // 0x00443FA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00443FA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
L_00443FAC:
    // 0x00443FAC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00443FB0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00443FB4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00443FB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00443FBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00443FC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00443FC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00443FC8: jr          $ra
    // 0x00443FCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00443FCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025EF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EF2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025EF30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025EF34: jal         0x00412314
    // 0x0025EF38: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x0025EF38: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0025EF3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025EF40: jr          $ra
    // 0x0025EF44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025EF44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00457420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E73C:
    // 0x00457420: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
L_0041E7D0:
    // 0x00457424: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
L_0041E824:
    // 0x00457428: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
L_0041E8D8:
    // 0x0045742C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0041E97C:
    // 0x00457430: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00457434: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x00457438: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x0045743C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x00457440: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x00457444: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00457448: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045744C: sw          $zero, 0x984($at)
    MEM_W(0X984, ctx->r1) = 0;
    // 0x00457450: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457454: sw          $s0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r16;
    // 0x00457458: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045745C: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x00457460: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457464: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x00457468: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045746C: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x00457470: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457474: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x00457478: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045747C: sw          $s0, 0x990($at)
    MEM_W(0X990, ctx->r1) = ctx->r16;
    // 0x00457480: jal         0x00285998
    // 0x00457484: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    func_00285998(rdram, ctx);
        goto after_0;
    // 0x00457484: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00457488: bne         $v0, $zero, L_004574DC
    if (ctx->r2 != 0) {
        // 0x0045748C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004574DC;
    }
    // 0x0045748C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00457490: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457494: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457498: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045749C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004574A0: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x004574A4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004574A8: addiu       $a1, $a1, -0x43E4
    ctx->r5 = ADD32(ctx->r5, -0X43E4);
    // 0x004574AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004574B0: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // 0x004574B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004574B8: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x004574BC: jal         0x00416644
    // 0x004574C0: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x004574C0: nop

    after_1:
    // 0x004574C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004574C8: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x004574CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004574D0: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x004574D4: j           L_0041E97C
    // 0x004574D8: nop

    func_0041E97C(rdram, ctx);
    return;
    // 0x004574D8: nop

L_004574DC:
    // 0x004574DC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004574E0: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x004574E4: bne         $v1, $v0, L_00457548
    if (ctx->r3 != ctx->r2) {
        // 0x004574E8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00457548;
    }
    // 0x004574E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004574EC: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x004574F0: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_004574F4:
    // 0x004574F4: jal         0x004263A0
    // 0x004574F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_2;
    // 0x004574F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004574FC: jal         0x0042647C
    // 0x00457500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_3;
    // 0x00457500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00457504: bne         $v0, $s2, L_0045752C
    if (ctx->r2 != ctx->r18) {
        // 0x00457508: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0045752C;
    }
    // 0x00457508: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0045750C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00457510: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00457514: beql        $v0, $zero, L_0045751C
    if (ctx->r2 == 0) {
        // 0x00457518: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0045751C;
    }
    goto skip_0;
    // 0x00457518: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0045751C:
    // 0x0045751C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00457520: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00457524: bne         $v0, $zero, L_004574F4
    if (ctx->r2 != 0) {
        // 0x00457528: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004574F4;
    }
    // 0x00457528: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0045752C:
    // 0x0045752C: beql        $s1, $v0, L_00457534
    if (ctx->r17 == ctx->r2) {
        // 0x00457530: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00457534;
    }
    goto skip_1;
    // 0x00457530: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_1:
L_00457534:
    // 0x00457534: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457538: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x0045753C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00457540: beq         $s0, $v0, L_0045771C
    if (ctx->r16 == ctx->r2) {
        // 0x00457544: nop
    
            goto L_0045771C;
    }
    // 0x00457544: nop

L_00457548:
    // 0x00457548: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045754C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00457550: jal         0x00426AF8
    // 0x00457554: nop

    func_00426AF8(rdram, ctx);
        goto after_4;
    // 0x00457554: nop

    after_4:
    // 0x00457558: bne         $v0, $zero, L_00457910
    if (ctx->r2 != 0) {
        // 0x0045755C: nop
    
            goto L_00457910;
    }
    // 0x0045755C: nop

    // 0x00457560: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00457564: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00457568: jal         0x002886AC
    // 0x0045756C: nop

    func_002886AC(rdram, ctx);
        goto after_5;
    // 0x0045756C: nop

    after_5:
    // 0x00457570: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x00457574: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x00457578: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0045757C: beq         $v0, $zero, L_004575A4
    if (ctx->r2 == 0) {
        // 0x00457580: nop
    
            goto L_004575A4;
    }
    // 0x00457580: nop

    // 0x00457584: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00457588: lw          $v0, 0x202C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X202C);
    // 0x0045758C: bne         $v0, $zero, L_004575A4
    if (ctx->r2 != 0) {
        // 0x00457590: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004575A4;
    }
    // 0x00457590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00457594: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00457598: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0045759C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004575A0: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_004575A4:
    // 0x004575A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004575A8: lw          $v0, -0x4EEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EEC);
    // 0x004575AC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x004575B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004575B4: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x004575B8: bne         $v0, $zero, L_004575D0
    if (ctx->r2 != 0) {
        // 0x004575BC: nop
    
            goto L_004575D0;
    }
    // 0x004575BC: nop

    // 0x004575C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004575C4: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x004575C8: beq         $v0, $zero, L_00457620
    if (ctx->r2 == 0) {
        // 0x004575CC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00457620;
    }
    // 0x004575CC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_004575D0:
    // 0x004575D0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004575D4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004575D8: jal         0x004263A0
    // 0x004575DC: nop

    func_004263A0(rdram, ctx);
        goto after_6;
    // 0x004575DC: nop

    after_6:
    // 0x004575E0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004575E4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004575E8: jal         0x0042647C
    // 0x004575EC: nop

    entry_0042647C(rdram, ctx);
        goto after_7;
    // 0x004575EC: nop

    after_7:
    // 0x004575F0: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x004575F4: bne         $v0, $v1, L_00457950
    if (ctx->r2 != ctx->r3) {
        // 0x004575F8: nop
    
            goto L_00457950;
    }
    // 0x004575F8: nop

    // 0x004575FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457600: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457604: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00457608: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0045760C: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x00457610: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457614: addiu       $a1, $a1, -0x442C
    ctx->r5 = ADD32(ctx->r5, -0X442C);
    // 0x00457618: j           L_0041E73C
    // 0x0045761C: nop

    entry_0041E73C(rdram, ctx);
    return;
    // 0x0045761C: nop

L_00457620:
    // 0x00457620: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x00457624: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x00457628: addiu       $s6, $zero, -0x2
    ctx->r22 = ADD32(0, -0X2);
    // 0x0045762C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00457630: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x00457634: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x00457638: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0045763C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
L_00457640:
    // 0x00457640: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00457644: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00457648: beq         $a1, $s5, L_00457668
    if (ctx->r5 == ctx->r21) {
        // 0x0045764C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00457668;
    }
    // 0x0045764C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00457650: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00457654: jal         0x0041E294
    // 0x00457658: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0041E294(rdram, ctx);
        goto after_8;
    // 0x00457658: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_8:
    // 0x0045765C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00457660: bne         $s3, $zero, L_0045777C
    if (ctx->r19 != 0) {
        // 0x00457664: nop
    
            goto L_0045777C;
    }
    // 0x00457664: nop

L_00457668:
    // 0x00457668: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045766C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00457670: beq         $v0, $s5, L_00457688
    if (ctx->r2 == ctx->r21) {
        // 0x00457674: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00457688;
    }
    // 0x00457674: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00457678: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x0045767C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00457680: beql        $v0, $zero, L_00457688
    if (ctx->r2 == 0) {
        // 0x00457684: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00457688;
    }
    goto skip_2;
    // 0x00457684: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_00457688:
    // 0x00457688: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0045768C:
    // 0x0045768C: jal         0x004263A0
    // 0x00457690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_9;
    // 0x00457690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00457694: jal         0x0042647C
    // 0x00457698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_10;
    // 0x00457698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0045769C: bne         $v0, $s6, L_004576C4
    if (ctx->r2 != ctx->r22) {
        // 0x004576A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004576C4;
    }
    // 0x004576A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004576A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004576A8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004576AC: beql        $v0, $zero, L_004576B4
    if (ctx->r2 == 0) {
        // 0x004576B0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004576B4;
    }
    goto skip_3;
    // 0x004576B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_004576B4:
    // 0x004576B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004576B8: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x004576BC: bne         $v0, $zero, L_0045768C
    if (ctx->r2 != 0) {
        // 0x004576C0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0045768C;
    }
    // 0x004576C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_004576C4:
    // 0x004576C4: beql        $s1, $v0, L_004576CC
    if (ctx->r17 == ctx->r2) {
        // 0x004576C8: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_004576CC;
    }
    goto skip_4;
    // 0x004576C8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_4:
L_004576CC:
    // 0x004576CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004576D0: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x004576D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004576D8: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x004576DC: bne         $v0, $zero, L_00457640
    if (ctx->r2 != 0) {
        // 0x004576E0: nop
    
            goto L_00457640;
    }
    // 0x004576E0: nop

    // 0x004576E4: bne         $s3, $zero, L_0045777C
    if (ctx->r19 != 0) {
        // 0x004576E8: nop
    
            goto L_0045777C;
    }
    // 0x004576E8: nop

    // 0x004576EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x004576F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004576F4: sw          $a0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r4;
    // 0x004576F8: jal         0x004263A0
    // 0x004576FC: nop

    func_004263A0(rdram, ctx);
        goto after_11;
    // 0x004576FC: nop

    after_11:
    // 0x00457700: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00457704: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00457708: jal         0x0042647C
    // 0x0045770C: nop

    entry_0042647C(rdram, ctx);
        goto after_12;
    // 0x0045770C: nop

    after_12:
    // 0x00457710: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00457714: bne         $v0, $v1, L_0045777C
    if (ctx->r2 != ctx->r3) {
        // 0x00457718: nop
    
            goto L_0045777C;
    }
    // 0x00457718: nop

L_0045771C:
    // 0x0045771C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457720: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457724: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457728: addiu       $a1, $a1, -0x442C
    ctx->r5 = ADD32(ctx->r5, -0X442C);
    // 0x0045772C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00457730: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x00457734: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x00457738: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0045773C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457740: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // 0x00457744: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00457748: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x0045774C: jal         0x00416644
    // 0x00457750: nop

    func_00416644(rdram, ctx);
        goto after_13;
    // 0x00457750: nop

    after_13:
    // 0x00457754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00457758: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0045775C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457760: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x00457764: j           L_0041E97C
    // 0x00457768: nop

    func_0041E97C(rdram, ctx);
    return;
    // 0x00457768: nop

L_0045776C:
    // 0x0045776C: j           L_0041E7D0
    // 0x00457770: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_0041E7D0(rdram, ctx);
    return;
    // 0x00457770: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_00457774:
    // 0x00457774: j           L_0041E824
    // 0x00457778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_0041E824(rdram, ctx);
    return;
    // 0x00457778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045777C:
    // 0x0045777C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x00457780: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x00457784: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00457788: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0045778C:
    // 0x0045778C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00457790: jal         0x00426898
    // 0x00457794: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    entry_00426898(rdram, ctx);
        goto after_14;
    // 0x00457794: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_14:
    // 0x00457798: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0045779C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004577A0: jal         0x00426BA8
    // 0x004577A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    entry_00426BA8(rdram, ctx);
        goto after_15;
    // 0x004577A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x004577A8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004577AC: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x004577B0: jal         0x00426C74
    // 0x004577B4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426C74(rdram, ctx);
        goto after_16;
    // 0x004577B4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_16:
    // 0x004577B8: beq         $v0, $zero, L_0045776C
    if (ctx->r2 == 0) {
        // 0x004577BC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0045776C;
    }
    // 0x004577BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004577C0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x004577C4: bnel        $v0, $zero, L_0045778C
    if (ctx->r2 != 0) {
        // 0x004577C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0045778C;
    }
    goto skip_5;
    // 0x004577C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_5:
    // 0x004577CC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004577D0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x004577D4: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x004577D8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004577DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_004577E0:
    // 0x004577E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004577E4: jal         0x00426898
    // 0x004577E8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    entry_00426898(rdram, ctx);
        goto after_17;
    // 0x004577E8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_17:
    // 0x004577EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x004577F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004577F4: jal         0x00426BA8
    // 0x004577F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    entry_00426BA8(rdram, ctx);
        goto after_18;
    // 0x004577F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x004577FC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00457800: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x00457804: jal         0x00426C74
    // 0x00457808: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426C74(rdram, ctx);
        goto after_19;
    // 0x00457808: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_19:
    // 0x0045780C: beq         $v0, $zero, L_00457774
    if (ctx->r2 == 0) {
        // 0x00457810: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00457774;
    }
    // 0x00457810: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00457814: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00457818: bnel        $v0, $zero, L_004577E0
    if (ctx->r2 != 0) {
        // 0x0045781C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004577E0;
    }
    goto skip_6;
    // 0x0045781C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_6:
    // 0x00457820: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00457824: bne         $s2, $zero, L_00457950
    if (ctx->r18 != 0) {
        // 0x00457828: nop
    
            goto L_00457950;
    }
    // 0x00457828: nop

    // 0x0045782C: bne         $v0, $zero, L_00457950
    if (ctx->r2 != 0) {
        // 0x00457830: nop
    
            goto L_00457950;
    }
    // 0x00457830: nop

    // 0x00457834: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00457838: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045783C: jal         0x004266C0
    // 0x00457840: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    entry_004266C0(rdram, ctx);
        goto after_20;
    // 0x00457840: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_20:
    // 0x00457844: bne         $v0, $zero, L_00457910
    if (ctx->r2 != 0) {
        // 0x00457848: nop
    
            goto L_00457910;
    }
    // 0x00457848: nop

    // 0x0045784C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00457850: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00457854: jal         0x0042662C
    // 0x00457858: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    entry_0042662C(rdram, ctx);
        goto after_21;
    // 0x00457858: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_21:
    // 0x0045785C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00457860: bne         $s0, $zero, L_00457910
    if (ctx->r16 != 0) {
        // 0x00457864: nop
    
            goto L_00457910;
    }
    // 0x00457864: nop

    // 0x00457868: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045786C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x00457870: jal         0x00426D8C
    // 0x00457874: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426D8C(rdram, ctx);
        goto after_22;
    // 0x00457874: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_22:
    // 0x00457878: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0045787C: jal         0x00426D8C
    // 0x00457880: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00426D8C(rdram, ctx);
        goto after_23;
    // 0x00457880: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_23:
    // 0x00457884: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x00457888: beq         $v1, $zero, L_004578C8
    if (ctx->r3 == 0) {
        // 0x0045788C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_004578C8;
    }
    // 0x0045788C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00457890: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x00457894: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00457898: bne         $v1, $zero, L_004578C8
    if (ctx->r3 != 0) {
        // 0x0045789C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_004578C8;
    }
    // 0x0045789C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x004578A0: beq         $v0, $zero, L_004578C0
    if (ctx->r2 == 0) {
        // 0x004578A4: nop
    
            goto L_004578C0;
    }
    // 0x004578A4: nop

    // 0x004578A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004578AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004578B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004578B4: addiu       $a1, $a1, -0x3EF8
    ctx->r5 = ADD32(ctx->r5, -0X3EF8);
    // 0x004578B8: j           L_0041E8D8
    // 0x004578BC: nop

    entry_0041E8D8(rdram, ctx);
    return;
    // 0x004578BC: nop

L_004578C0:
    // 0x004578C0: beq         $v1, $zero, L_00457908
    if (ctx->r3 == 0) {
        // 0x004578C4: nop
    
            goto L_00457908;
    }
    // 0x004578C4: nop

L_004578C8:
    // 0x004578C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004578CC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004578D0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004578D4: addiu       $a1, $a1, -0x3F1C
    ctx->r5 = ADD32(ctx->r5, -0X3F1C);
    // 0x004578D8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004578DC: addiu       $v0, $v0, -0x49A8
    ctx->r2 = ADD32(ctx->r2, -0X49A8);
    // 0x004578E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004578E4: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004578E8: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x004578EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004578F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004578F4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004578F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004578FC: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x00457900: jal         0x00416644
    // 0x00457904: nop

    func_00416644(rdram, ctx);
        goto after_24;
    // 0x00457904: nop

    after_24:
L_00457908:
    // 0x00457908: beq         $s0, $zero, L_00457950
    if (ctx->r16 == 0) {
        // 0x0045790C: nop
    
            goto L_00457950;
    }
    // 0x0045790C: nop

L_00457910:
    // 0x00457910: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457914: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457918: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045791C: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x00457920: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457924: addiu       $v0, $v0, -0x49A8
    ctx->r2 = ADD32(ctx->r2, -0X49A8);
    // 0x00457928: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045792C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x00457930: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x00457934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00457938: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045793C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00457940: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00457944: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x00457948: jal         0x00416644
    // 0x0045794C: nop

    func_00416644(rdram, ctx);
        goto after_25;
    // 0x0045794C: nop

    after_25:
L_00457950:
    // 0x00457950: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00457954: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x00457958: bne         $v0, $zero, L_0045796C
    if (ctx->r2 != 0) {
        // 0x0045795C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045796C;
    }
    // 0x0045795C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00457960: jal         0x0041D948
    // 0x00457964: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    entry_0041D948(rdram, ctx);
        goto after_26;
    // 0x00457964: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_26:
    // 0x00457968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045796C:
    // 0x0045796C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00457970: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x00457974: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457978: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
    // 0x0045797C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00457980: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x00457984: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x00457988: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0045798C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00457990: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00457994: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00457998: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0045799C: jr          $ra
    // 0x004579A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x004579A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00224C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224C98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224C9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224CA0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00224CA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00224CA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224CAC: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00224CB0: jal         0x002017D4
    // 0x00224CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00224CB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224CC0: jal         0x002017D4
    // 0x00224CC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224CC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00224CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224CCC: jal         0x002017D4
    // 0x00224CD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224CD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00224CD4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00224CD8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00224CDC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00224CE0: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x00224CE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00224CE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224CEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224CF0: jr          $ra
    // 0x00224CF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224CF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A0EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A0EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A0F00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002A0F04: jal         0x002A0448
    // 0x002A0F08: nop

    func_002A0448(rdram, ctx);
        goto after_0;
    // 0x002A0F08: nop

    after_0:
    // 0x002A0F0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0F10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0F14: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x002A0F18: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002A0F1C: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x002A0F20: jr          $ra
    // 0x002A0F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A0F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00242284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242284: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x00242288: sw          $s6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r22;
    // 0x0024228C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00242290: sw          $s4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r20;
    // 0x00242294: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00242298: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0024229C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x002422A0: sw          $ra, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r31;
    // 0x002422A4: sw          $s5, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r21;
    // 0x002422A8: sw          $s3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r19;
    // 0x002422AC: sw          $s2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r18;
    // 0x002422B0: sw          $s1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r17;
    // 0x002422B4: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    // 0x002422B8: sdc1        $f20, 0x110($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X110, ctx->r29);
    // 0x002422BC: lw          $s2, 0x0($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X0);
    // 0x002422C0: lw          $s0, 0x14($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X14);
    // 0x002422C4: jal         0x00241960
    // 0x002422C8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    entry_00241960(rdram, ctx);
        goto after_0;
    // 0x002422C8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x002422CC: jal         0x002672C8
    // 0x002422D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002672C8(rdram, ctx);
        goto after_1;
    // 0x002422D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x002422D4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x002422D8: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x002422DC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002422E0: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x002422E4: addiu       $s3, $s4, 0x4
    ctx->r19 = ADD32(ctx->r20, 0X4);
    // 0x002422E8: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002422EC: jal         0x0023CE94
    // 0x002422F0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0023CE94(rdram, ctx);
        goto after_2;
    // 0x002422F0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x002422F4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002422F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002422FC: beq         $v0, $zero, L_00242348
    if (ctx->r2 == 0) {
        // 0x00242300: nop
    
            goto L_00242348;
    }
    // 0x00242300: nop

    // 0x00242304: jal         0x002672C8
    // 0x00242308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002672C8(rdram, ctx);
        goto after_3;
    // 0x00242308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0024230C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00242310: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x00242314: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x00242318: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0024231C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00242320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242324: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00242328: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0024232C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00242330: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00242334: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00242338: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0024233C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00242340: j           L_00242390
    // 0x00242344: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
        goto L_00242390;
    // 0x00242344: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_00242348:
    // 0x00242348: jal         0x002672C8
    // 0x0024234C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002672C8(rdram, ctx);
        goto after_4;
    // 0x0024234C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00242350: lwc1        $f20, 0x8($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00242354: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00242358: jal         0x002671B4
    // 0x0024235C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x0024235C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    after_5:
    // 0x00242360: lwc1        $f2, 0x8($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X8);
    // 0x00242364: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00242368: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0024236C: add.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00242370: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00242374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242378: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0024237C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00242380: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00242384: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x00242388: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0024238C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
L_00242390:
    // 0x00242390: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00242394: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00242398: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0024239C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002423A0: jal         0x0023B38C
    // 0x002423A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0023B38C(rdram, ctx);
        goto after_6;
    // 0x002423A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_6:
    // 0x002423A8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x002423AC: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x002423B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002423B4: jal         0x0023C9CC
    // 0x002423B8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_0023C9CC(rdram, ctx);
        goto after_7;
    // 0x002423B8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x002423BC: lw          $a1, 0x4C($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X4C);
    // 0x002423C0: lw          $a2, 0x54($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X54);
    // 0x002423C4: jal         0x0023C730
    // 0x002423C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023C730(rdram, ctx);
        goto after_8;
    // 0x002423C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x002423CC: beq         $v0, $zero, L_00242400
    if (ctx->r2 == 0) {
        // 0x002423D0: addiu       $s3, $sp, 0x88
        ctx->r19 = ADD32(ctx->r29, 0X88);
            goto L_00242400;
    }
    // 0x002423D0: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x002423D4: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x002423D8: beql        $v0, $zero, L_00242400
    if (ctx->r2 == 0) {
        // 0x002423DC: sw          $s4, 0x30($s2)
        MEM_W(0X30, ctx->r18) = ctx->r20;
            goto L_00242400;
    }
    goto skip_0;
    // 0x002423DC: sw          $s4, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r20;
    skip_0:
    // 0x002423E0: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x002423E4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002423E8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002423EC: nop

    // 0x002423F0: bc1f        L_00242404
    if (!c1cs) {
        // 0x002423F4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00242404;
    }
    // 0x002423F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002423F8: sw          $s4, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r20;
    // 0x002423FC: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
L_00242400:
    // 0x00242400: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00242404:
    // 0x00242404: addiu       $s1, $s2, 0x4
    ctx->r17 = ADD32(ctx->r18, 0X4);
    // 0x00242408: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024240C: addiu       $s0, $s6, 0x4C
    ctx->r16 = ADD32(ctx->r22, 0X4C);
    // 0x00242410: jal         0x0023C2B0
    // 0x00242414: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0023C2B0(rdram, ctx);
        goto after_9;
    // 0x00242414: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00242418: beq         $v0, $zero, L_002424F4
    if (ctx->r2 == 0) {
        // 0x0024241C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002424F4;
    }
    // 0x0024241C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00242420: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242424: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00242428: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x0024242C: jal         0x0023C478
    // 0x00242430: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0023C478(rdram, ctx);
        goto after_10;
    // 0x00242430: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00242434: beq         $v0, $zero, L_002424F4
    if (ctx->r2 == 0) {
        // 0x00242438: addiu       $a0, $sp, 0xC8
        ctx->r4 = ADD32(ctx->r29, 0XC8);
            goto L_002424F4;
    }
    // 0x00242438: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x0024243C: jal         0x0023CEC0
    // 0x00242440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0023CEC0(rdram, ctx);
        goto after_11;
    // 0x00242440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_11:
    // 0x00242444: beql        $v0, $zero, L_002424F8
    if (ctx->r2 == 0) {
        // 0x00242448: addiu       $s1, $sp, 0x88
        ctx->r17 = ADD32(ctx->r29, 0X88);
            goto L_002424F8;
    }
    goto skip_1;
    // 0x00242448: addiu       $s1, $sp, 0x88
    ctx->r17 = ADD32(ctx->r29, 0X88);
    skip_1:
    // 0x0024244C: lwc1        $f12, 0x25C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X25C);
    // 0x00242450: jal         0x002982F0
    // 0x00242454: nop

    func_002982F0(rdram, ctx);
        goto after_12;
    // 0x00242454: nop

    after_12:
    // 0x00242458: lwc1        $f12, 0x25C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X25C);
    // 0x0024245C: jal         0x002974C0
    // 0x00242460: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_13;
    // 0x00242460: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_13:
    // 0x00242464: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00242468: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x0024246C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00242470: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00242474: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00242478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024247C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00242480: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00242484: jal         0x0023AB18
    // 0x00242488: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_0023AB18(rdram, ctx);
        goto after_14;
    // 0x00242488: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x0024248C: beq         $v0, $zero, L_002424EC
    if (ctx->r2 == 0) {
        // 0x00242490: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_002424EC;
    }
    // 0x00242490: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00242494: lw          $v1, 0x140($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X140);
    // 0x00242498: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x0024249C: sw          $a0, 0x140($s4)
    MEM_W(0X140, ctx->r20) = ctx->r4;
    // 0x002424A0: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x002424A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002424A8: bne         $v1, $v0, L_002424C8
    if (ctx->r3 != ctx->r2) {
        // 0x002424AC: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_002424C8;
    }
    // 0x002424AC: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002424B0: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x002424B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002424B8: beq         $v0, $zero, L_002424C8
    if (ctx->r2 == 0) {
        // 0x002424BC: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_002424C8;
    }
    // 0x002424BC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x002424C0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002424C4: sw          $v0, 0x140($s4)
    MEM_W(0X140, ctx->r20) = ctx->r2;
L_002424C8:
    // 0x002424C8: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x002424CC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002424D0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002424D4: nop

    // 0x002424D8: bc1f        L_002424E4
    if (!c1cs) {
        // 0x002424DC: sw          $s4, 0x30($s2)
        MEM_W(0X30, ctx->r18) = ctx->r20;
            goto L_002424E4;
    }
    // 0x002424DC: sw          $s4, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r20;
    // 0x002424E0: swc1        $f1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_002424E4:
    // 0x002424E4: j           L_002424F0
    // 0x002424E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002424F0;
    // 0x002424E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002424EC:
    // 0x002424EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002424F0:
    // 0x002424F0: or          $s5, $s5, $v0
    ctx->r21 = ctx->r21 | ctx->r2;
L_002424F4:
    // 0x002424F4: addiu       $s1, $sp, 0x88
    ctx->r17 = ADD32(ctx->r29, 0X88);
L_002424F8:
    // 0x002424F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002424FC: jal         0x0023CDC8
    // 0x00242500: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_0023CDC8(rdram, ctx);
        goto after_15;
    // 0x00242500: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_15:
    // 0x00242504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242508: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x0024250C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00242510: addiu       $s0, $s6, 0x4C
    ctx->r16 = ADD32(ctx->r22, 0X4C);
    // 0x00242514: jal         0x0023C2B0
    // 0x00242518: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0023C2B0(rdram, ctx);
        goto after_16;
    // 0x00242518: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_16:
    // 0x0024251C: beq         $v0, $zero, L_00242574
    if (ctx->r2 == 0) {
        // 0x00242520: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00242574;
    }
    // 0x00242520: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242524: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00242528: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0024252C: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x00242530: jal         0x0023C478
    // 0x00242534: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0023C478(rdram, ctx);
        goto after_17;
    // 0x00242534: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_17:
    // 0x00242538: beq         $v0, $zero, L_00242574
    if (ctx->r2 == 0) {
        // 0x0024253C: addiu       $a0, $sp, 0xC8
        ctx->r4 = ADD32(ctx->r29, 0XC8);
            goto L_00242574;
    }
    // 0x0024253C: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x00242540: jal         0x0023CEC0
    // 0x00242544: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0023CEC0(rdram, ctx);
        goto after_18;
    // 0x00242544: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_18:
    // 0x00242548: beq         $v0, $zero, L_00242574
    if (ctx->r2 == 0) {
        // 0x0024254C: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00242574;
    }
    // 0x0024254C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00242550: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x00242554: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00242558: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0024255C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00242560: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00242564: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00242568: jal         0x0023AB18
    // 0x0024256C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_0023AB18(rdram, ctx);
        goto after_19;
    // 0x0024256C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_19:
    // 0x00242570: or          $s5, $s5, $v0
    ctx->r21 = ctx->r21 | ctx->r2;
L_00242574:
    // 0x00242574: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x00242578: lw          $ra, 0x10C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10C);
    // 0x0024257C: lw          $s6, 0x108($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X108);
    // 0x00242580: lw          $s5, 0x104($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X104);
    // 0x00242584: lw          $s4, 0x100($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X100);
    // 0x00242588: lw          $s3, 0xFC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XFC);
    // 0x0024258C: lw          $s2, 0xF8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF8);
    // 0x00242590: lw          $s1, 0xF4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XF4);
    // 0x00242594: lw          $s0, 0xF0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF0);
    // 0x00242598: ldc1        $f20, 0x110($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X110);
    // 0x0024259C: jr          $ra
    // 0x002425A0: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x002425A0: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_0040BBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BBF4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040BBF8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040BBFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040BC00: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040BC04: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040BC08: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040BC0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040BC10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040BC14: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040BC18: jal         0x00246108
    // 0x0040BC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040BC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040BC20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BC24: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040BC28: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040BC2C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040BC30: jal         0x00245BAC
    // 0x0040BC34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040BC34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040BC38: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040BC3C: beq         $v0, $zero, L_0040BC50
    if (ctx->r2 == 0) {
        // 0x0040BC40: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BC50;
    }
    // 0x0040BC40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BC44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040BC48: jal         0x00243414
    // 0x0040BC4C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040BC4C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_0040BC50:
    // 0x0040BC50: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040BC54: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040BC58: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040BC5C: jr          $ra
    // 0x0040BC60: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040BC60: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0045C7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004237FC:
    // 0x0045C7A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_00423840:
    // 0x0045C7A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C7A8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C7AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045C7B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045C7B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045C7B8: sw          $v1, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = ctx->r3;
    // 0x0045C7BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C7C0: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045C7C4: beq         $v0, $zero, L_0045C7DC
    if (ctx->r2 == 0) {
        // 0x0045C7C8: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_0045C7DC;
    }
    // 0x0045C7C8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0045C7CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045C7D0: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x0045C7D4: j           L_00423840
    // 0x0045C7D8: nop

    entry_00423840(rdram, ctx);
    return;
    // 0x0045C7D8: nop

L_0045C7DC:
    // 0x0045C7DC: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x0045C7E0: beq         $v0, $zero, L_0045C7F4
    if (ctx->r2 == 0) {
        // 0x0045C7E4: nop
    
            goto L_0045C7F4;
    }
    // 0x0045C7E4: nop

    // 0x0045C7E8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x0045C7EC: j           L_004237FC
    // 0x0045C7F0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
    func_004237FC(rdram, ctx);
    return;
    // 0x0045C7F0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0045C7F4:
    // 0x0045C7F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045C7F8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045C7FC: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x0045C800: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C804: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x0045C808: beq         $v1, $v0, L_0045C820
    if (ctx->r3 == ctx->r2) {
        // 0x0045C80C: nop
    
            goto L_0045C820;
    }
    // 0x0045C80C: nop

    // 0x0045C810: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C814: addiu       $v0, $v0, -0x4210
    ctx->r2 = ADD32(ctx->r2, -0X4210);
    // 0x0045C818: bnel        $v1, $v0, L_0045C82C
    if (ctx->r3 != ctx->r2) {
        // 0x0045C81C: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0045C82C;
    }
    goto skip_0;
    // 0x0045C81C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_0045C820:
    // 0x0045C820: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C824: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045C828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0045C82C:
    // 0x0045C82C: lw          $a1, 0x24($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X24);
    // 0x0045C830: lw          $a2, 0x1C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1C);
    // 0x0045C834: lw          $a3, 0x20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X20);
    // 0x0045C838: jal         0x00416644
    // 0x0045C83C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0045C83C: nop

    after_0:
    // 0x0045C840: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045C844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C848: jr          $ra
    // 0x0045C84C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045C84C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00254F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254F88: addiu       $t2, $a1, 0x3C8
    ctx->r10 = ADD32(ctx->r5, 0X3C8);
    // 0x00254F8C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00254F90: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
L_00254F94:
    // 0x00254F94: addu        $v1, $a1, $t1
    ctx->r3 = ADD32(ctx->r5, ctx->r9);
    // 0x00254F98: lb          $v1, 0x972($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X972);
    // 0x00254F9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254FA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00254FA4: lw          $a2, -0x9E8($at)
    ctx->r6 = MEM_W(ctx->r1, -0X9E8);
    // 0x00254FA8: beq         $v1, $zero, L_00255030
    if (ctx->r3 == 0) {
        // 0x00254FAC: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00255030;
    }
    // 0x00254FAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00254FB0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x00254FB4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00254FB8: beq         $v0, $zero, L_00254FD8
    if (ctx->r2 == 0) {
        // 0x00254FBC: nop
    
            goto L_00254FD8;
    }
    // 0x00254FBC: nop

    // 0x00254FC0: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00254FC4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00254FC8: j           L_00254FE8
    // 0x00254FCC: sltu        $a3, $a3, $v0
    ctx->r7 = ctx->r7 < ctx->r2 ? 1 : 0;
        goto L_00254FE8;
    // 0x00254FCC: sltu        $a3, $a3, $v0
    ctx->r7 = ctx->r7 < ctx->r2 ? 1 : 0;
L_00254FD0:
    // 0x00254FD0: j           L_00255020
    // 0x00254FD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_00255020;
    // 0x00254FD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_00254FD8:
    // 0x00254FD8: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00254FDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00254FE0: bnel        $v0, $zero, L_00254FE8
    if (ctx->r2 != 0) {
        // 0x00254FE4: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_00254FE8;
    }
    goto skip_0;
    // 0x00254FE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    skip_0:
L_00254FE8:
    // 0x00254FE8: beql        $a3, $zero, L_00255034
    if (ctx->r7 == 0) {
        // 0x00254FEC: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_00255034;
    }
    goto skip_1;
    // 0x00254FEC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_1:
    // 0x00254FF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00254FF4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00254FF8: blez        $v0, L_00255020
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00254FFC: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_00255020;
    }
    // 0x00254FFC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00255000: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00255004: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00255008:
    // 0x00255008: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x0025500C: beq         $v0, $t1, L_00254FD0
    if (ctx->r2 == ctx->r9) {
        // 0x00255010: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00254FD0;
    }
    // 0x00255010: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00255014: slt         $v0, $a2, $t0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00255018: bne         $v0, $zero, L_00255008
    if (ctx->r2 != 0) {
        // 0x0025501C: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_00255008;
    }
    // 0x0025501C: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
L_00255020:
    // 0x00255020: bne         $a3, $zero, L_00255034
    if (ctx->r7 != 0) {
        // 0x00255024: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_00255034;
    }
    // 0x00255024: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x00255028: jr          $ra
    // 0x0025502C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0025502C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00255030:
    // 0x00255030: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_00255034:
    // 0x00255034: slti        $v0, $t1, 0x23
    ctx->r2 = SIGNED(ctx->r9) < 0X23 ? 1 : 0;
    // 0x00255038: bne         $v0, $zero, L_00254F94
    if (ctx->r2 != 0) {
        // 0x0025503C: sll         $v0, $t1, 2
        ctx->r2 = S32(ctx->r9 << 2);
            goto L_00254F94;
    }
    // 0x0025503C: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x00255040: jr          $ra
    // 0x00255044: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00255044: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0024AF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024AF68: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0024AF6C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0024AF70: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0024AF74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0024AF78: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0024AF7C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0024AF80: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0024AF84: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0024AF88: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0024AF8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024AF90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024AF94: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x0024AF98: lui         $a3, 0x25
    ctx->r7 = S32(0X25 << 16);
    // 0x0024AF9C: addiu       $a3, $a3, 0x71D8
    ctx->r7 = ADD32(ctx->r7, 0X71D8);
    // 0x0024AFA0: lui         $v0, 0x25
    ctx->r2 = S32(0X25 << 16);
    // 0x0024AFA4: addiu       $v0, $v0, 0x7124
    ctx->r2 = ADD32(ctx->r2, 0X7124);
    // 0x0024AFA8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0024AFAC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0024AFB0: sdc1        $f29, 0x88($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0X88, ctx->r29);
    // 0x0024AFB4: sdc1        $f28, 0x80($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X80, ctx->r29);
    // 0x0024AFB8: sdc1        $f27, 0x78($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X78, ctx->r29);
    // 0x0024AFBC: sdc1        $f26, 0x70($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X70, ctx->r29);
    // 0x0024AFC0: sdc1        $f25, 0x68($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X68, ctx->r29);
    // 0x0024AFC4: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x0024AFC8: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x0024AFCC: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x0024AFD0: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0024AFD4: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0024AFD8: jal         0x00226F90
    // 0x0024AFDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_00226F90(rdram, ctx);
        goto after_0;
    // 0x0024AFDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0024AFE0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024AFE4: lbu         $v0, -0x5516($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5516);
    // 0x0024AFE8: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0024AFEC: addiu       $v1, $v0, 0x40
    ctx->r3 = ADD32(ctx->r2, 0X40);
    // 0x0024AFF0: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0024AFF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AFF8: lwc1        $f0, 0x6BF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BF0);
    // 0x0024AFFC: beq         $v0, $zero, L_0024B00C
    if (ctx->r2 == 0) {
        // 0x0024B000: nop
    
            goto L_0024B00C;
    }
    // 0x0024B000: nop

    // 0x0024B004: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0024B008: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
L_0024B00C:
    // 0x0024B00C: mul.s       $f28, $f1, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024B010: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0024B014: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024B018: beq         $s1, $v0, L_0024B39C
    if (ctx->r17 == ctx->r2) {
        // 0x0024B01C: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_0024B39C;
    }
    // 0x0024B01C: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x0024B020: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    // 0x0024B024: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B028: lwc1        $f24, 0x6BF4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6BF4);
    // 0x0024B02C: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
    // 0x0024B030: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B034: lwc1        $f27, 0x6BF8($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, 0X6BF8);
    // 0x0024B038: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B03C: lwc1        $f29, 0x6BFC($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, 0X6BFC);
L_0024B040:
    // 0x0024B040: lw          $v1, 0x51C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X51C);
    // 0x0024B044: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B048: lwc1        $f0, 0x6C00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C00);
    // 0x0024B04C: lwc1        $f2, 0x288($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X288);
    // 0x0024B050: mul.s       $f22, $f2, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024B054: lw          $v0, 0x380($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X380);
    // 0x0024B058: lwc1        $f1, 0x28C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X28C);
    // 0x0024B05C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B060: lwc1        $f0, 0x6C04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C04);
    // 0x0024B064: mul.s       $f23, $f1, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024B068: bne         $v0, $zero, L_0024B168
    if (ctx->r2 != 0) {
        // 0x0024B06C: addiu       $v1, $v1, 0x288
        ctx->r3 = ADD32(ctx->r3, 0X288);
            goto L_0024B168;
    }
    // 0x0024B06C: addiu       $v1, $v1, 0x288
    ctx->r3 = ADD32(ctx->r3, 0X288);
    // 0x0024B070: lwc1        $f3, 0x4($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0024B074: mul.s       $f4, $f3, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f24.fl);
    // 0x0024B078: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B07C: lwc1        $f1, 0x6C08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C08);
    // 0x0024B080: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0024B084: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B088: lwc1        $f0, 0x6C0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C0C);
    // 0x0024B08C: lwc1        $f2, -0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, -0X8);
    // 0x0024B090: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024B094: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0024B098: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024B09C: nop

    // 0x0024B0A0: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0024B0A4: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0024B0A8: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024B0AC: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0024B0B0: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x0024B0B4: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0024B0B8: add.s       $f21, $f4, $f3
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f21.fl = ctx->f4.fl + ctx->f3.fl;
    // 0x0024B0BC: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0024B0C0: add.s       $f26, $f0, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024B0C4: lwc1        $f0, -0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, -0X4);
    // 0x0024B0C8: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x0024B0CC: nop

    // 0x0024B0D0: bc1t        L_0024B138
    if (c1cs) {
        // 0x0024B0D4: add.s       $f21, $f21, $f2
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f2.fl;
            goto L_0024B138;
    }
    // 0x0024B0D4: add.s       $f21, $f21, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f2.fl;
    // 0x0024B0D8: add.s       $f0, $f4, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f3.fl;
    // 0x0024B0DC: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x0024B0E0: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x0024B0E4: nop

    // 0x0024B0E8: bc1tl       L_0024B0F0
    if (c1cs) {
        // 0x0024B0EC: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0024B0F0;
    }
    goto skip_0;
    // 0x0024B0EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
L_0024B0F0:
    // 0x0024B0F0: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0024B0F4: sub.s       $f0, $f27, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f27.fl - ctx->f0.fl;
    // 0x0024B0F8: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x0024B0FC: nop

    // 0x0024B100: bc1t        L_0024B138
    if (c1cs) {
        // 0x0024B104: nop
    
            goto L_0024B138;
    }
    // 0x0024B104: nop

    // 0x0024B108: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0024B10C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0024B110: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0024B114: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0024B118: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x0024B11C: c.lt.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl < ctx->f25.fl;
    // 0x0024B120: nop

    // 0x0024B124: bc1tl       L_0024B12C
    if (c1cs) {
        // 0x0024B128: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0024B12C;
    }
    goto skip_1;
    // 0x0024B128: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
L_0024B12C:
    // 0x0024B12C: div.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0024B130: j           L_0024B13C
    // 0x0024B134: sub.s       $f20, $f27, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f27.fl - ctx->f0.fl;
        goto L_0024B13C;
    // 0x0024B134: sub.s       $f20, $f27, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f27.fl - ctx->f0.fl;
L_0024B138:
    // 0x0024B138: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_0024B13C:
    // 0x0024B13C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B140: lwc1        $f0, 0x6C10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C10);
    // 0x0024B144: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0024B148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B14C: lwc1        $f1, 0x6C14($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C14);
    // 0x0024B150: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024B154: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024B158: nop

    // 0x0024B15C: mul.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0024B160: j           L_0024B1B4
    // 0x0024B164: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_0024B1B4;
    // 0x0024B164: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0024B168:
    // 0x0024B168: mul.s       $f4, $f2, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x0024B16C: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x0024B170: mul.s       $f1, $f1, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f24.fl);
    // 0x0024B174: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0024B178: mul.s       $f3, $f0, $f24
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x0024B17C: nop

    // 0x0024B180: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0024B184: lwc1        $f2, -0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, -0X8);
    // 0x0024B188: mul.s       $f2, $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x0024B18C: nop

    // 0x0024B190: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024B194: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0024B198: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0024B19C: add.s       $f26, $f0, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024B1A0: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0024B1A4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0024B1A8: lwc1        $f20, 0x4($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0024B1AC: add.s       $f21, $f0, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0024B1B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0024B1B4:
    // 0x0024B1B4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0024B1B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0024B1BC: jal         0x0027AEA8
    // 0x0024B1C0: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x0024B1C0: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x0024B1C4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0024B1C8: beql        $v0, $zero, L_0024B38C
    if (ctx->r2 == 0) {
        // 0x0024B1CC: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_0024B38C;
    }
    goto skip_2;
    // 0x0024B1CC: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    skip_2:
    // 0x0024B1D0: lw          $v0, 0x37C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X37C);
    // 0x0024B1D4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0024B1D8: bne         $v0, $v1, L_0024B220
    if (ctx->r2 != ctx->r3) {
        // 0x0024B1DC: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0024B220;
    }
    // 0x0024B1DC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024B1E0: lwc1        $f12, 0x14($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X14);
    // 0x0024B1E4: jal         0x002974C0
    // 0x0024B1E8: nop

    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x0024B1E8: nop

    after_2:
    // 0x0024B1EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B1F0: lwc1        $f1, 0x6C18($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C18);
    // 0x0024B1F4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024B1F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B1FC: lwc1        $f1, 0x6C1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C1C);
    // 0x0024B200: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024B204: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B208: lwc1        $f20, 0x6C20($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6C20);
    // 0x0024B20C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024B210: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024B214: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0024B218: j           L_0024B280
    // 0x0024B21C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
        goto L_0024B280;
    // 0x0024B21C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_0024B220:
    // 0x0024B220: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024B224: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024B228: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x0024B22C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x0024B230: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0024B234: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024B238: bne         $v0, $zero, L_0024B250
    if (ctx->r2 != 0) {
        // 0x0024B23C: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_0024B250;
    }
    // 0x0024B23C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0024B240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B244: lwc1        $f0, 0x6C24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C24);
    // 0x0024B248: j           L_0024B26C
    // 0x0024B24C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
        goto L_0024B26C;
    // 0x0024B24C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_0024B250:
    // 0x0024B250: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x0024B254: bne         $v0, $zero, L_0024B278
    if (ctx->r2 != 0) {
        // 0x0024B258: addiu       $a1, $zero, 0xC8
        ctx->r5 = ADD32(0, 0XC8);
            goto L_0024B278;
    }
    // 0x0024B258: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x0024B25C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x0024B260: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0024B264: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B268: lwc1        $f0, 0x6C28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C28);
L_0024B26C:
    // 0x0024B26C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0024B270: j           L_0024B280
    // 0x0024B274: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
        goto L_0024B280;
    // 0x0024B274: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_0024B278:
    // 0x0024B278: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0024B27C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_0024B280:
    // 0x0024B280: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0024B284: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0024B288: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x0024B28C: mul.s       $f0, $f20, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x0024B290: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x0024B294: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0024B298: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x0024B29C: sll         $v1, $a1, 24
    ctx->r3 = S32(ctx->r5 << 24);
    // 0x0024B2A0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0024B2A4: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x0024B2A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0024B2AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0024B2B0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x0024B2B4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0024B2B8: c.le.s      $f29, $f0
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f29.fl <= ctx->f0.fl;
    // 0x0024B2BC: nop

    // 0x0024B2C0: bc1t        L_0024B2D8
    if (c1cs) {
        // 0x0024B2C4: or          $v1, $v1, $v0
        ctx->r3 = ctx->r3 | ctx->r2;
            goto L_0024B2D8;
    }
    // 0x0024B2C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0024B2C8: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024B2CC: mfc1        $a0, $f5
    ctx->r4 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024B2D0: j           L_0024B2F0
    // 0x0024B2D4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
        goto L_0024B2F0;
    // 0x0024B2D4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_0024B2D8:
    // 0x0024B2D8: sub.s       $f0, $f0, $f29
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f29.fl;
    // 0x0024B2DC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0024B2E0: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024B2E4: mfc1        $a0, $f5
    ctx->r4 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024B2E8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0024B2EC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_0024B2F0:
    // 0x0024B2F0: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0024B2F4: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x0024B2F8: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0024B2FC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0024B300: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024B304: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024B308: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0024B30C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024B310: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0024B314: nop

    // 0x0024B318: mul.s       $f2, $f22, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x0024B31C: nop

    // 0x0024B320: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0024B324: nop

    // 0x0024B328: mul.s       $f1, $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f23.fl);
    // 0x0024B32C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x0024B330: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0024B334: mul.s       $f2, $f23, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f23.fl, ctx->f2.fl);
    // 0x0024B338: nop

    // 0x0024B33C: mul.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x0024B340: nop

    // 0x0024B344: mul.s       $f1, $f1, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f24.fl);
    // 0x0024B348: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024B34C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024B350: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0024B354: sub.s       $f0, $f26, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f26.fl - ctx->f0.fl;
    // 0x0024B358: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x0024B35C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0024B360: sub.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x0024B364: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024B368: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024B36C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024B370: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024B374: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0024B378: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024B37C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024B380: jal         0x0027B320
    // 0x0024B384: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_3;
    // 0x0024B384: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_3:
    // 0x0024B388: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_0024B38C:
    // 0x0024B38C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0024B390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024B394: bne         $s1, $v0, L_0024B040
    if (ctx->r17 != ctx->r2) {
        // 0x0024B398: addiu       $s2, $s2, 0x1C
        ctx->r18 = ADD32(ctx->r18, 0X1C);
            goto L_0024B040;
    }
    // 0x0024B398: addiu       $s2, $s2, 0x1C
    ctx->r18 = ADD32(ctx->r18, 0X1C);
L_0024B39C:
    // 0x0024B39C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0024B3A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0024B3A4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0024B3A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0024B3AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0024B3B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0024B3B4: ldc1        $f29, 0x88($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0X88);
    // 0x0024B3B8: ldc1        $f28, 0x80($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X80);
    // 0x0024B3BC: ldc1        $f27, 0x78($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X78);
    // 0x0024B3C0: ldc1        $f26, 0x70($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X70);
    // 0x0024B3C4: ldc1        $f25, 0x68($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X68);
    // 0x0024B3C8: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x0024B3CC: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x0024B3D0: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x0024B3D4: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0024B3D8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0024B3DC: jr          $ra
    // 0x0024B3E0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0024B3E0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_0026F038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F038: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0026F03C: beq         $v0, $zero, L_0026F04C
    if (ctx->r2 == 0) {
            // 0x0026F040: addiu       $v0, $a0, -0x1388
    ctx->r2 = ADD32(ctx->r4, -0X1388);
    func_0026F04C(rdram, ctx);
    return;
    }
    // 0x0026F040: addiu       $v0, $a0, -0x1388
    ctx->r2 = ADD32(ctx->r4, -0X1388);
    // 0x0026F044: jr          $ra
    // 0x0026F048: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x0026F048: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_00417484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417484: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00417488: jal         0x002017D4
    // 0x0041748C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0041748C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00417490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417494: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00417498: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0041749C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004174A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004174A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004174A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004174AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004174B0: lb          $v1, 0x25($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X25);
    // 0x004174B4: addiu       $a1, $a0, 0x1D8
    ctx->r5 = ADD32(ctx->r4, 0X1D8);
    // 0x004174B8: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
    // 0x004174BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004174C0: sw          $zero, -0x532C($at)
    MEM_W(-0X532C, ctx->r1) = 0;
    // 0x004174C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004174C8: sw          $zero, -0x5334($at)
    MEM_W(-0X5334, ctx->r1) = 0;
    // 0x004174CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004174D0: sw          $zero, -0x5324($at)
    MEM_W(-0X5324, ctx->r1) = 0;
    // 0x004174D4: lb          $v0, 0x26($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X26);
    // 0x004174D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004174DC: lwc1        $f1, 0xE94($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XE94);
    // 0x004174E0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004174E4: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x004174E8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004174EC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004174F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004174F4: sw          $zero, -0x5320($at)
    MEM_W(-0X5320, ctx->r1) = 0;
    // 0x004174F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004174FC: sw          $zero, -0x5328($at)
    MEM_W(-0X5328, ctx->r1) = 0;
    // 0x00417500: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417504: sw          $zero, -0x5330($at)
    MEM_W(-0X5330, ctx->r1) = 0;
    // 0x00417508: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041750C: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x00417510: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00417514: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417518: swc1        $f0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->f0.u32l;
    // 0x0041751C: lb          $s2, 0x27($a0)
    ctx->r18 = MEM_B(ctx->r4, 0X27);
    // 0x00417520: bc1f        L_00417534
    if (!c1cs) {
        // 0x00417524: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_00417534;
    }
    // 0x00417524: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00417528: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041752C: lwc1        $f0, 0xE98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE98);
    // 0x00417530: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
L_00417534:
    // 0x00417534: addiu       $v0, $a0, 0xC0
    ctx->r2 = ADD32(ctx->r4, 0XC0);
L_00417538:
    // 0x00417538: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x0041753C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00417540: bgez        $s0, L_00417538
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00417544: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00417538;
    }
    // 0x00417544: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00417548: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041754C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00417550: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00417554:
    // 0x00417554: jal         0x002855E8
    // 0x00417558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_1;
    // 0x00417558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0041755C: bne         $v0, $zero, L_00417590
    if (ctx->r2 != 0) {
        // 0x00417560: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_00417590;
    }
    // 0x00417560: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x00417564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00417568: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041756C: bne         $v0, $zero, L_00417554
    if (ctx->r2 != 0) {
        // 0x00417570: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00417554;
    }
    // 0x00417570: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
L_00417574:
    // 0x00417574: beq         $s2, $zero, L_004175AC
    if (ctx->r18 == 0) {
        // 0x00417578: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_004175AC;
    }
    // 0x00417578: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x0041757C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x00417580: beq         $v0, $zero, L_004175AC
    if (ctx->r2 == 0) {
        // 0x00417584: addiu       $a1, $s2, 0x2336
        ctx->r5 = ADD32(ctx->r18, 0X2336);
            goto L_004175AC;
    }
    // 0x00417584: addiu       $a1, $s2, 0x2336
    ctx->r5 = ADD32(ctx->r18, 0X2336);
    // 0x00417588: j           L_004175E0
    // 0x0041758C: nop

        goto L_004175E0;
    // 0x0041758C: nop

L_00417590:
    // 0x00417590: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00417594: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00417598: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041759C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004175A0: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x004175A4: j           L_00417574
    // 0x004175A8: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
        goto L_00417574;
    // 0x004175A8: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_004175AC:
    // 0x004175AC: jal         0x002113A4
    // 0x004175B0: nop

    func_002113A4(rdram, ctx);
        goto after_2;
    // 0x004175B0: nop

    after_2:
    // 0x004175B4: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x004175B8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x004175BC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004175C0: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004175C4: mfhi        $a2
    ctx->r6 = hi;
    // 0x004175C8: subu        $a0, $a2, $a0
    ctx->r4 = SUB32(ctx->r6, ctx->r4);
    // 0x004175CC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x004175D0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004175D4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004175D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004175DC: addiu       $a1, $v0, 0x2337
    ctx->r5 = ADD32(ctx->r2, 0X2337);
L_004175E0:
    // 0x004175E0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004175E4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004175E8: jal         0x00430454
    // 0x004175EC: nop

    func_00430454(rdram, ctx);
        goto after_3;
    // 0x004175EC: nop

    after_3:
    // 0x004175F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004175F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004175F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004175FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417604: jr          $ra
    // 0x00417608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00455FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D0A8:
    // 0x00455FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0041D104:
    // 0x00455FA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455FA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455FAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00455FB0: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x00455FB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455FB8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455FBC: jal         0x0025340C
    // 0x00455FC0: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455FC0: nop

    after_0:
    // 0x00455FC4: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x00455FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455FCC: beq         $t3, $v0, L_0045602C
    if (ctx->r11 == ctx->r2) {
        // 0x00455FD0: slti        $v0, $t3, 0x2
        ctx->r2 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
            goto L_0045602C;
    }
    // 0x00455FD0: slti        $v0, $t3, 0x2
    ctx->r2 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x00455FD4: bne         $v0, $zero, L_00455FEC
    if (ctx->r2 != 0) {
        // 0x00455FD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00455FEC;
    }
    // 0x00455FD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00455FDC: beq         $t3, $v0, L_0045606C
    if (ctx->r11 == ctx->r2) {
        // 0x00455FE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0045606C;
    }
    // 0x00455FE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00455FE4: beq         $t3, $v0, L_004560BC
    if (ctx->r11 == ctx->r2) {
        // 0x00455FE8: lui         $v1, 0x180
        ctx->r3 = S32(0X180 << 16);
            goto L_004560BC;
    }
    // 0x00455FE8: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
L_00455FEC:
    // 0x00455FEC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00455FF0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x00455FF4: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x00455FF8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00455FFC: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x00456000: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00456004: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x00456008: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0045600C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00456010: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00456014: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x00456018: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0045601C: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x00456020: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00456024: j           L_0041D0A8
    // 0x00456028: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    entry_0041D0A8(rdram, ctx);
    return;
    // 0x00456028: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0045602C:
    // 0x0045602C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00456030: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x00456034: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x00456038: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0045603C: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x00456040: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00456044: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x00456048: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0045604C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00456050: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00456054: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x00456058: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0045605C: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x00456060: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00456064: j           L_0041D0A8
    // 0x00456068: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    entry_0041D0A8(rdram, ctx);
    return;
    // 0x00456068: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0045606C:
    // 0x0045606C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00456070: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x00456074: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x00456078: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0045607C: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    // 0x00456080: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00456084: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x00456088: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0045608C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00456090: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00456094: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x00456098: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0045609C: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x004560A0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004560A4: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x004560A8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x004560AC: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x004560B0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004560B4: j           L_0041D104
    // 0x004560B8: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    entry_0041D104(rdram, ctx);
    return;
    // 0x004560B8: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
L_004560BC:
    // 0x004560BC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x004560C0: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x004560C4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x004560C8: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
    // 0x004560CC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x004560D0: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x004560D4: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x004560D8: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x004560DC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004560E0: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x004560E4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x004560E8: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x004560EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004560F0: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x004560F4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x004560F8: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x004560FC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00456100: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x00456104: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x00456108: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x0045610C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00456110: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456114: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00456118: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0045611C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00456120: addiu       $v1, $v1, 0x1FBC
    ctx->r3 = ADD32(ctx->r3, 0X1FBC);
    // 0x00456124: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x00456128: sll         $v1, $t3, 6
    ctx->r3 = S32(ctx->r11 << 6);
    // 0x0045612C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00456130: addiu       $v0, $v0, -0x5475
    ctx->r2 = ADD32(ctx->r2, -0X5475);
    // 0x00456134: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00456138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x0045613C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00456140: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
L_00456144:
    // 0x00456144: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00456148: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0045614C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00456150: bne         $v0, $a1, L_00456164
    if (ctx->r2 != ctx->r5) {
        // 0x00456154: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_00456164;
    }
    // 0x00456154: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00456158: bgtz        $a0, L_00456144
    if (SIGNED(ctx->r4) > 0) {
        // 0x0045615C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_00456144;
    }
    // 0x0045615C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x00456160: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_00456164:
    // 0x00456164: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00456168: addiu       $a1, $a1, 0x1340
    ctx->r5 = ADD32(ctx->r5, 0X1340);
    // 0x0045616C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_00456170:
    // 0x00456170: lbu         $t0, 0x0($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X0);
    // 0x00456174: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00456178: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x0045617C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00456180: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x00456184: bne         $v0, $a2, L_0045619C
    if (ctx->r2 != ctx->r6) {
        // 0x00456188: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_0045619C;
    }
    // 0x00456188: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0045618C: beq         $v0, $zero, L_0045619C
    if (ctx->r2 == 0) {
        // 0x00456190: nop
    
            goto L_0045619C;
    }
    // 0x00456190: nop

    // 0x00456194: beq         $a0, $zero, L_00456170
    if (ctx->r4 == 0) {
        // 0x00456198: nop
    
            goto L_00456170;
    }
    // 0x00456198: nop

L_0045619C:
    // 0x0045619C: beql        $t0, $a2, L_004561A4
    if (ctx->r8 == ctx->r6) {
        // 0x004561A0: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_004561A4;
    }
    goto skip_0;
    // 0x004561A0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    skip_0:
L_004561A4:
    // 0x004561A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004561A8: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x004561AC: blez        $v0, L_004561D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004561B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004561D4;
    }
    // 0x004561B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004561B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_004561B8:
    // 0x004561B8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004561BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004561C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004561C4: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x004561C8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x004561CC: bne         $v0, $zero, L_004561B8
    if (ctx->r2 != 0) {
        // 0x004561D0: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_004561B8;
    }
    // 0x004561D0: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_004561D4:
    // 0x004561D4: sll         $v1, $t3, 1
    ctx->r3 = S32(ctx->r11 << 1);
    // 0x004561D8: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x004561DC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004561E0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004561E4: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x004561E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004561EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004561F0: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x004561F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004561F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004561FC: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x00456200: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456204: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00456208: sw          $v0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r2;
    // 0x0045620C: jr          $ra
    // 0x00456210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00456210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266B90: beq         $a2, $zero, L_00266BCC
    if (ctx->r6 == 0) {
        // 0x00266B94: or          $v0, $a1, $a0
        ctx->r2 = ctx->r5 | ctx->r4;
            goto L_00266BCC;
    }
    // 0x00266B94: or          $v0, $a1, $a0
    ctx->r2 = ctx->r5 | ctx->r4;
    // 0x00266B98: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00266B9C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00266BA0: beq         $v0, $zero, L_00266C00
    if (ctx->r2 == 0) {
            // 0x00266BA4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_00266C00(rdram, ctx);
    return;
    }
    // 0x00266BA4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00266BA8: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00266BAC: beq         $v0, $zero, L_00266BD4
    if (ctx->r2 == 0) {
            // 0x00266BB0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    func_00266BD4(rdram, ctx);
    return;
    }
    // 0x00266BB0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00266BB4:
    // 0x00266BB4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00266BB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00266BBC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00266BC0: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x00266BC4: bne         $a2, $zero, L_00266BB4
    if (ctx->r6 != 0) {
        // 0x00266BC8: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00266BB4;
    }
    // 0x00266BC8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_00266BCC:
    // 0x00266BCC: jr          $ra
    // 0x00266BD0: nop

    return;
    // 0x00266BD0: nop

;}
RECOMP_FUNC void func_0044F168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044F16C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0044F170: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0044F174: jal         0x00413F74
    // 0x0044F178: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_0;
    // 0x0044F178: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0044F17C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0044F180: jr          $ra
    // 0x0044F184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044F184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021FA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021FA2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021FA30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021FA34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021FA38: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021FA3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0021FA40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021FA44: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0021FA48: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0021FA4C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021FA50: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x0021FA54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021FA58: bne         $a1, $v0, L_0021FA8C
    if (ctx->r5 != ctx->r2) {
        // 0x0021FA5C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0021FA8C;
    }
    // 0x0021FA5C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0021FA60: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0021FA64: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021FA68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021FA6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021FA70: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x0021FA74: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0021FA78: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0021FA7C: sw          $a3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r7;
    // 0x0021FA80: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0021FA84: j           L_0021FAFC
    // 0x0021FA88: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
        goto L_0021FAFC;
    // 0x0021FA88: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
L_0021FA8C:
    // 0x0021FA8C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0021FA90: jal         0x002017D4
    // 0x0021FA94: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021FA94: nop

    after_0:
    // 0x0021FA98: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0021FA9C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0021FAA0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021FAA4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x0021FAA8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021FAAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021FAB0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0021FAB4: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021FAB8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FABC: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0021FAC0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FAC4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021FAC8: swc1        $f1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021FACC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0021FAD0: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021FAD4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FAD8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FADC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021FAE0: swc1        $f1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021FAE4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0021FAE8: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0021FAEC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FAF0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FAF4: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021FAF8: swc1        $f1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0021FAFC:
    // 0x0021FAFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021FB00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021FB04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021FB08: jr          $ra
    // 0x0021FB0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021FB0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045F2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F2FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045F300: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F304: addiu       $a1, $zero, 0x810
    ctx->r5 = ADD32(0, 0X810);
    // 0x0045F308: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045F30C: addiu       $a3, $a3, 0x18A0
    ctx->r7 = ADD32(ctx->r7, 0X18A0);
    // 0x0045F310: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045F314: jal         0x00204EDC
    // 0x0045F318: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0045F318: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_0:
    // 0x0045F31C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0045F320: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0045F324: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045F328: sw          $v0, 0x2228($at)
    MEM_W(0X2228, ctx->r1) = ctx->r2;
    // 0x0045F32C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045F330: sw          $a0, 0x2224($at)
    MEM_W(0X2224, ctx->r1) = ctx->r4;
    // 0x0045F334: jal         0x00266C5C
    // 0x0045F338: addiu       $a2, $zero, 0x810
    ctx->r6 = ADD32(0, 0X810);
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x0045F338: addiu       $a2, $zero, 0x810
    ctx->r6 = ADD32(0, 0X810);
    after_1:
    // 0x0045F33C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045F340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045F344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045F348: sw          $v0, 0x2220($at)
    MEM_W(0X2220, ctx->r1) = ctx->r2;
    // 0x0045F34C: jr          $ra
    // 0x0045F350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045F350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00451B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451B50: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00451B54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451B58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451B5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451B60: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451B64: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451B68: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451B70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451B74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451B78: lb          $v0, 0x22($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X22);
    // 0x00451B7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451B80: jal         0x0041648C
    // 0x00451B84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451B84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451B88: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x00451B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00451B90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451B94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451B98: jr          $ra
    // 0x00451B9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451B9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004542E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B314:
    // 0x004542E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B348:
    // 0x004542E8: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x004542EC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x004542F0: beq         $v0, $zero, L_00454304
    if (ctx->r2 == 0) {
        // 0x004542F4: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454304;
    }
    // 0x004542F4: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004542F8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004542FC: j           L_0041B314
    // 0x00454300: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B314(rdram, ctx);
    return;
    // 0x00454300: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454304:
    // 0x00454304: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454308: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045430C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454310: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454314: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454318: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045431C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454320: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00454324: beq         $v0, $zero, L_0045433C
    if (ctx->r2 == 0) {
        // 0x00454328: nop
    
            goto L_0045433C;
    }
    // 0x00454328: nop

    // 0x0045432C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454330: addiu       $v0, $v0, 0x5854
    ctx->r2 = ADD32(ctx->r2, 0X5854);
    // 0x00454334: j           L_0041B348
    // 0x00454338: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B348(rdram, ctx);
    return;
    // 0x00454338: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045433C:
    // 0x0045433C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454340: addiu       $v0, $v0, 0x5870
    ctx->r2 = ADD32(ctx->r2, 0X5870);
    // 0x00454344: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454348: jr          $ra
    // 0x0045434C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045434C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026D330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D330: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0026D334: addiu       $t0, $a3, -0x1
    ctx->r8 = ADD32(ctx->r7, -0X1);
    // 0x0026D338: addiu       $v0, $a0, 0xC
    ctx->r2 = ADD32(ctx->r4, 0XC);
    // 0x0026D33C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x0026D340: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0026D344: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x0026D348: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x0026D34C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0026D350: beq         $a3, $zero, L_0026D3B4
    if (ctx->r7 == 0) {
        // 0x0026D354: sw          $zero, 0x8($v0)
        MEM_W(0X8, ctx->r2) = 0;
            goto L_0026D3B4;
    }
    // 0x0026D354: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0026D358: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0026D35C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0026D360:
    // 0x0026D360: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D364: bne         $v0, $zero, L_0026D380
    if (ctx->r2 != 0) {
        // 0x0026D368: nop
    
            goto L_0026D380;
    }
    // 0x0026D368: nop

    // 0x0026D36C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0026D370: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0026D374: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0026D378: j           L_0026D398
    // 0x0026D37C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_0026D398;
    // 0x0026D37C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_0026D380:
    // 0x0026D380: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D384: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0026D388: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0026D38C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D390: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x0026D394: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_0026D398:
    // 0x0026D398: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x0026D39C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0026D3A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D3A4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x0026D3A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026D3AC: bne         $t0, $a3, L_0026D360
    if (ctx->r8 != ctx->r7) {
        // 0x0026D3B0: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_0026D360;
    }
    // 0x0026D3B0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_0026D3B4:
    // 0x0026D3B4: jr          $ra
    // 0x0026D3B8: nop

    return;
    // 0x0026D3B8: nop

;}
RECOMP_FUNC void func_00453194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00453198: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045319C: jal         0x0042444C
    // 0x004531A0: nop

    entry_0042444C(rdram, ctx);
        goto after_0;
    // 0x004531A0: nop

    after_0:
    // 0x004531A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004531A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004531AC: jr          $ra
    // 0x004531B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004531B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045C9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C9B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045C9B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C9BC: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x0045C9C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C9C4: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x0045C9C8: jr          $ra
    // 0x0045C9CC: nop

    return;
    // 0x0045C9CC: nop

;}
RECOMP_FUNC void func_00285BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00285BD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00285BD8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00285BDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00285BE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00285BE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00285BE8: bne         $a1, $zero, L_00285CAC
    if (ctx->r5 != 0) {
        // 0x00285BEC: sw          $a1, 0xCC($s1)
        MEM_W(0XCC, ctx->r17) = ctx->r5;
            goto L_00285CAC;
    }
    // 0x00285BEC: sw          $a1, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r5;
    // 0x00285BF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285BF4: lbu         $v0, 0x6CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF0);
    // 0x00285BF8: beq         $v0, $zero, L_00285CAC
    if (ctx->r2 == 0) {
        // 0x00285BFC: nop
    
            goto L_00285CAC;
    }
    // 0x00285BFC: nop

    // 0x00285C00: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00285C04: beq         $v0, $zero, L_00285CAC
    if (ctx->r2 == 0) {
        // 0x00285C08: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00285CAC;
    }
    // 0x00285C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285C0C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285C10: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285C14: jal         0x0029B6F0
    // 0x00285C18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00285C18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00285C1C: jal         0x002847E0
    // 0x00285C20: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00285C20: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    after_1:
    // 0x00285C24: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    // 0x00285C28: addiu       $a1, $s1, 0x16C
    ctx->r5 = ADD32(ctx->r17, 0X16C);
    // 0x00285C2C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00285C30: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285C34: sb          $s2, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r18;
    // 0x00285C38: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x00285C3C: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    // 0x00285C40: jal         0x0026EB3C
    // 0x00285C44: sw          $zero, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = 0;
    func_0026EB3C(rdram, ctx);
        goto after_2;
    // 0x00285C44: sw          $zero, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = 0;
    after_2:
    // 0x00285C48: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285C4C: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00285C50: addiu       $s0, $s1, 0xD8
    ctx->r16 = ADD32(ctx->r17, 0XD8);
    // 0x00285C54: lb          $a2, 0x4($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X4);
    // 0x00285C58: jal         0x00299198
    // 0x00285C5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_3;
    // 0x00285C5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00285C60: jal         0x00298E10
    // 0x00285C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_4;
    // 0x00285C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00285C68: jal         0x00298E10
    // 0x00285C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00298E10(rdram, ctx);
        goto after_5;
    // 0x00285C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00285C70: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285C74: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00285C78: lb          $a2, 0x4($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X4);
    // 0x00285C7C: jal         0x00299198
    // 0x00285C80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00299198(rdram, ctx);
        goto after_6;
    // 0x00285C80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00285C84: bne         $v0, $zero, L_00285C90
    if (ctx->r2 != 0) {
        // 0x00285C88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00285C90;
    }
    // 0x00285C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285C8C: sw          $v0, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->r2;
L_00285C90:
    // 0x00285C90: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285C94: sb          $s2, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r18;
    // 0x00285C98: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285C9C: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285CA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285CA4: jal         0x0029B820
    // 0x00285CA8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00285CA8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_7:
L_00285CAC:
    // 0x00285CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00285CB0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00285CB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00285CB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285CBC: jr          $ra
    // 0x00285CC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00285CC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00271BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271BBC: jr          $ra
    // 0x00271BC0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00271BC0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0045F3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426428:
    // 0x0045F3A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_00426454:
    // 0x0045F3A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045F3A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045F3AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0045F3B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045F3B4: jal         0x00285878
    // 0x0045F3B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0045F3B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0045F3BC: jal         0x002847E0
    // 0x0045F3C0: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0045F3C0: nop

    after_1:
    // 0x0045F3C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045F3C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045F3CC: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045F3D0: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x0045F3D4: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x0045F3D8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0045F3DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0045F3E0: addiu       $a0, $a0, 0xAA0
    ctx->r4 = ADD32(ctx->r4, 0XAA0);
    // 0x0045F3E4: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0045F3E8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045F3EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0045F3F0: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x0045F3F4: beq         $v1, $zero, L_0045F408
    if (ctx->r3 == 0) {
        // 0x0045F3F8: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_0045F408;
    }
    // 0x0045F3F8: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x0045F3FC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x0045F400: j           L_00426428
    // 0x0045F404: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00426428(rdram, ctx);
    return;
    // 0x0045F404: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045F408:
    // 0x0045F408: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045F40C: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x0045F410: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x0045F414: jal         0x00299198
    // 0x0045F418: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00299198(rdram, ctx);
        goto after_2;
    // 0x0045F418: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0045F41C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0045F420: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0045F424: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045F428: beq         $v0, $zero, L_0045F438
    if (ctx->r2 == 0) {
        // 0x0045F42C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_0045F438;
    }
    // 0x0045F42C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0045F430: j           L_00426454
    // 0x0045F434: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    entry_00426454(rdram, ctx);
    return;
    // 0x0045F434: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0045F438:
    // 0x0045F438: jal         0x00425808
    // 0x0045F43C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00425808(rdram, ctx);
        goto after_3;
    // 0x0045F43C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0045F440: beq         $v0, $zero, L_0045F450
    if (ctx->r2 == 0) {
        // 0x0045F444: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_0045F450;
    }
    // 0x0045F444: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0045F448: j           L_00426454
    // 0x0045F44C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    entry_00426454(rdram, ctx);
    return;
    // 0x0045F44C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0045F450:
    // 0x0045F450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045F454: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F458: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0045F45C: sw          $v0, 0xC60($at)
    MEM_W(0XC60, ctx->r1) = ctx->r2;
    // 0x0045F460: jal         0x002858A4
    // 0x0045F464: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x0045F464: nop

    after_4:
    // 0x0045F468: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045F46C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045F470: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045F474: jr          $ra
    // 0x0045F478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045F478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002768D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002768D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002768D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002768D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002768DC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002768E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002768E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002768E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002768EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x002768F0: jal         0x002714B0
    // 0x002768F4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_002714B0(rdram, ctx);
        goto after_0;
    // 0x002768F4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_0:
    // 0x002768F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x002768FC: jal         0x002718F4
    // 0x00276900: nop

    func_002718F4(rdram, ctx);
        goto after_1;
    // 0x00276900: nop

    after_1:
    // 0x00276904: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    turok2_patch_rax_player(rdram, ctx);
    // 0x00276908: beq         $v1, $s2, L_00276970
    if (ctx->r3 == ctx->r18) {
        // 0x0027690C: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_00276970;
    }
    // 0x0027690C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00276910: beq         $v1, $zero, L_00276AE8
    if (ctx->r3 == 0) {
        // 0x00276914: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00276AE8;
    }
    // 0x00276914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00276918: beq         $v1, $v0, L_00276938
    if (ctx->r3 == ctx->r2) {
        // 0x0027691C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00276938;
    }
    // 0x0027691C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00276920: bne         $v1, $v0, L_00276AE8
    if (ctx->r3 != ctx->r2) {
        // 0x00276924: nop
    
            goto L_00276AE8;
    }
    // 0x00276924: nop

    // 0x00276928: jal         0x002A12CC
    // 0x0027692C: nop

    func_002A12CC(rdram, ctx);
        goto after_2;
    // 0x0027692C: nop

    after_2:
    // 0x00276930: j           L_00276AE8
    // 0x00276934: nop

        goto L_00276AE8;
    // 0x00276934: nop

L_00276938:
    // 0x00276938: lh          $a1, 0x1E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1E);
    // 0x0027693C: jal         0x00293E60
    // 0x00276940: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_3;
    // 0x00276940: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00276944: jal         0x00293580
    // 0x00276948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_4;
    // 0x00276948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0027694C: bne         $v0, $zero, L_00276AE8
    if (ctx->r2 != 0) {
        // 0x00276950: nop
    
            goto L_00276AE8;
    }
    // 0x00276950: nop

    // 0x00276954: jal         0x002A12DC
    // 0x00276958: nop

    func_002A12DC(rdram, ctx);
        goto after_5;
    // 0x00276958: nop

    after_5:
    // 0x0027695C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00276960: bltzl       $v0, L_00276AE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x00276964: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_00276AE8;
    }
    goto skip_0;
    // 0x00276964: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_0:
    // 0x00276968: j           L_00276AE8
    // 0x0027696C: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
        goto L_00276AE8;
    // 0x0027696C: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
L_00276970:
    // 0x00276970: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00276974: addiu       $s3, $s3, 0x55F4
    ctx->r19 = ADD32(ctx->r19, 0X55F4);
    // 0x00276978: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027697C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x00276980: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
    // 0x00276984: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x00276988: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0027698C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00276990: sll         $s2, $v1, 1
    ctx->r18 = S32(ctx->r3 << 1);
    // 0x00276994: lw          $a0, 0x2B50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B50);
    // 0x00276998: jal         0x002017D4
    // 0x0027699C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0027699C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x002769A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002769A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002769A8: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x002769AC: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x002769B0: bgez        $v0, L_002769C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002769B4: nop
    
            goto L_002769C4;
    }
    // 0x002769B4: nop

    // 0x002769B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002769BC: ldc1        $f0, -0x7DF0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X7DF0);
    // 0x002769C0: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_002769C4:
    // 0x002769C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002769C8: lwc1        $f1, -0x7DE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7DE8);
    // 0x002769CC: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x002769D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002769D4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x002769D8: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x002769DC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x002769E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002769E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002769E8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x002769EC: lw          $a0, 0x2B50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B50);
    // 0x002769F0: jal         0x002017D4
    // 0x002769F4: ori         $a1, $s2, 0x1
    ctx->r5 = ctx->r18 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x002769F4: ori         $a1, $s2, 0x1
    ctx->r5 = ctx->r18 | 0X1;
    after_7:
    // 0x002769F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002769FC: addiu       $a1, $zero, 0x5622
    ctx->r5 = ADD32(0, 0X5622);
    // 0x00276A00: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00276A04: jal         0x002A1170
    // 0x00276A08: sw          $a0, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->r4;
    func_002A1170(rdram, ctx);
        goto after_8;
    // 0x00276A08: sw          $a0, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->r4;
    after_8:
    // 0x00276A0C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00276A10: lw          $v1, 0x2AA8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2AA8);
    // 0x00276A14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00276A18: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00276A1C: lh          $a1, 0x1E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1E);
    // 0x00276A20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00276A24: jal         0x00293E60
    // 0x00276A28: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_00293E60(rdram, ctx);
        goto after_9;
    // 0x00276A28: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_9:
    // 0x00276A2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00276A30: lwc1        $f1, -0x7DE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7DE4);
    // 0x00276A34: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00276A38: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00276A3C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00276A40: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00276A44: jal         0x00293DE0
    // 0x00276A48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293DE0(rdram, ctx);
        goto after_10;
    // 0x00276A48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00276A4C: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x00276A50: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x00276A54: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00276A58: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00276A5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00276A60: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00276A64: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00276A68: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00276A6C: jal         0x00293E70
    // 0x00276A70: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00293E70(rdram, ctx);
        goto after_11;
    // 0x00276A70: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_11:
    // 0x00276A74: lbu         $a1, 0x1B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1B);
    // 0x00276A78: jal         0x00293D90
    // 0x00276A7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293D90(rdram, ctx);
        goto after_12;
    // 0x00276A7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00276A80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00276A84: lh          $a1, 0x1E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1E);
    // 0x00276A88: jal         0x00293E30
    // 0x00276A8C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_00293E30(rdram, ctx);
        goto after_13;
    // 0x00276A8C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_13:
    // 0x00276A90: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00276A94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00276A98: lwc1        $f1, -0x7DE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7DE0);
    // 0x00276A9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00276AA0: nop

    // 0x00276AA4: bc1tl       L_00276ABC
    if (c1cs) {
        // 0x00276AA8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00276ABC;
    }
    goto skip_1;
    // 0x00276AA8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x00276AAC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00276AB0: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00276AB4: j           L_00276AD0
    // 0x00276AB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00276AD0;
    // 0x00276AB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00276ABC:
    // 0x00276ABC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00276AC0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00276AC4: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00276AC8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x00276ACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00276AD0:
    // 0x00276AD0: jal         0x00293D40
    // 0x00276AD4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_00293D40(rdram, ctx);
        goto after_14;
    // 0x00276AD4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_14:
    // 0x00276AD8: jal         0x00293CE0
    // 0x00276ADC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293CE0(rdram, ctx);
        goto after_15;
    // 0x00276ADC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x00276AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00276AE4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00276AE8:
    // 0x00276AE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00276AEC: jal         0x00271514
    // 0x00276AF0: nop

    func_00271514(rdram, ctx);
        goto after_16;
    // 0x00276AF0: nop

    after_16:
    // 0x00276AF4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00276AF8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00276AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00276B00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00276B04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00276B08: jr          $ra
    // 0x00276B0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00276B0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00274798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0027479C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002747A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002747A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002747A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002747AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002747B0: lw          $s0, 0xB0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XB0);
    // 0x002747B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002747B8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002747BC: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x002747C0: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x002747C4: jal         0x00293E60
    // 0x002747C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x002747C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002747CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002747D0: jal         0x00293D90
    // 0x002747D4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_00293D90(rdram, ctx);
        goto after_1;
    // 0x002747D4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_1:
    // 0x002747D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002747DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002747E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002747E4: jr          $ra
    // 0x002747E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002747E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00218620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218620: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00218624: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x00218628: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021862C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x00218630: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00218634: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00218638: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0021863C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00218640: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x00218644: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x00218648: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x0021864C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00218650: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00218654: jal         0x00217450
    // 0x00218658: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_00217450(rdram, ctx);
        goto after_0;
    // 0x00218658: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_0:
    // 0x0021865C: blez        $s2, L_00218694
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00218660: nop
    
            goto L_00218694;
    }
    // 0x00218660: nop

L_00218664:
    // 0x00218664: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00218668: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x0021866C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00218670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00218674: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00218678: jal         0x0021852C
    // 0x0021867C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_0021852C(rdram, ctx);
        goto after_1;
    // 0x0021867C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x00218680: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00218684: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00218688: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0021868C: bne         $v0, $zero, L_00218664
    if (ctx->r2 != 0) {
        // 0x00218690: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_00218664;
    }
    // 0x00218690: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_00218694:
    // 0x00218694: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00218698: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0021869C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002186A0: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x002186A4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002186A8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x002186AC: mflo        $t0
    ctx->r8 = lo;
    // 0x002186B0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x002186B4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x002186B8: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x002186BC: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x002186C0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x002186C4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x002186C8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x002186CC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x002186D0: jr          $ra
    // 0x002186D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x002186D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00235898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235898: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023589C: lwc1        $f0, -0x474C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X474C);
    // 0x002358A0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002358A4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002358A8: nop

    // 0x002358AC: bc1t        L_002358CC
    if (c1cs) {
        // 0x002358B0: nop
    
            goto L_002358CC;
    }
    // 0x002358B0: nop

    // 0x002358B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002358B8: lwc1        $f1, 0x64E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64E4);
    // 0x002358BC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002358C0: nop

    // 0x002358C4: bc1f        L_002358D4
    if (!c1cs) {
        // 0x002358C8: nop
    
            goto L_002358D4;
    }
    // 0x002358C8: nop

L_002358CC:
    // 0x002358CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002358D0: swc1        $f1, -0x474C($at)
    MEM_W(-0X474C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_002358D4:
    // 0x002358D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002358D8: lwc1        $f0, -0x4748($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4748);
    // 0x002358DC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002358E0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002358E4: nop

    // 0x002358E8: bc1t        L_00235908
    if (c1cs) {
        // 0x002358EC: nop
    
            goto L_00235908;
    }
    // 0x002358EC: nop

    // 0x002358F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002358F4: lwc1        $f1, 0x64E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64E8);
    // 0x002358F8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002358FC: nop

    // 0x00235900: bc1f        L_00235910
    if (!c1cs) {
        // 0x00235904: nop
    
            goto L_00235910;
    }
    // 0x00235904: nop

L_00235908:
    // 0x00235908: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023590C: swc1        $f1, -0x4748($at)
    MEM_W(-0X4748, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_00235910:
    // 0x00235910: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235914: lwc1        $f0, -0x4744($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4744);
    // 0x00235918: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023591C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00235920: nop

    // 0x00235924: bc1t        L_00235944
    if (c1cs) {
        // 0x00235928: nop
    
            goto L_00235944;
    }
    // 0x00235928: nop

    // 0x0023592C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235930: lwc1        $f1, 0x64EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64EC);
    // 0x00235934: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00235938: nop

    // 0x0023593C: bc1f        L_0023594C
    if (!c1cs) {
        // 0x00235940: nop
    
            goto L_0023594C;
    }
    // 0x00235940: nop

L_00235944:
    // 0x00235944: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235948: swc1        $f1, -0x4744($at)
    MEM_W(-0X4744, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_0023594C:
    // 0x0023594C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235950: lwc1        $f0, -0x4740($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4740);
    // 0x00235954: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00235958: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023595C: nop

    // 0x00235960: bc1t        L_00235980
    if (c1cs) {
        // 0x00235964: nop
    
            goto L_00235980;
    }
    // 0x00235964: nop

    // 0x00235968: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023596C: lwc1        $f1, 0x64F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64F0);
    // 0x00235970: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00235974: nop

    // 0x00235978: bc1f        L_00235988
    if (!c1cs) {
        // 0x0023597C: nop
    
            goto L_00235988;
    }
    // 0x0023597C: nop

L_00235980:
    // 0x00235980: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235984: swc1        $f1, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_00235988:
    // 0x00235988: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023598C: lwc1        $f0, -0x473C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X473C);
    // 0x00235990: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00235994: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00235998: nop

    // 0x0023599C: bc1t        L_002359BC
    if (c1cs) {
        // 0x002359A0: nop
    
            goto L_002359BC;
    }
    // 0x002359A0: nop

    // 0x002359A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002359A8: lwc1        $f1, 0x64F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64F4);
    // 0x002359AC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002359B0: nop

    // 0x002359B4: bc1f        L_002359C4
    if (!c1cs) {
        // 0x002359B8: nop
    
            goto L_002359C4;
    }
    // 0x002359B8: nop

L_002359BC:
    // 0x002359BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002359C0: swc1        $f1, -0x473C($at)
    MEM_W(-0X473C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_002359C4:
    // 0x002359C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002359C8: addiu       $v0, $v0, -0x4740
    ctx->r2 = ADD32(ctx->r2, -0X4740);
    // 0x002359CC: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002359D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002359D4: lwc1        $f0, 0x64F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64F8);
    // 0x002359D8: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002359DC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002359E0: nop

    // 0x002359E4: bc1f        L_00235A1C
    if (!c1cs) {
        // 0x002359E8: nop
    
            goto L_00235A1C;
    }
    // 0x002359E8: nop

    // 0x002359EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002359F0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x002359F4: nop

    // 0x002359F8: bc1f        L_00235A10
    if (!c1cs) {
        // 0x002359FC: nop
    
            goto L_00235A10;
    }
    // 0x002359FC: nop

    // 0x00235A00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235A04: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
L_00235A08:
    // 0x00235A08: jr          $ra
    // 0x00235A0C: nop

    return;
    // 0x00235A0C: nop

L_00235A10:
    // 0x00235A10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235A14: lwc1        $f0, 0x64FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64FC);
    // 0x00235A18: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
L_00235A1C:
    // 0x00235A1C: nop

    // 0x00235A20: bc1t        L_00235A58
    if (c1cs) {
        // 0x00235A24: nop
    
            goto L_00235A58;
    }
    // 0x00235A24: nop

    // 0x00235A28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00235A2C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00235A30: nop

    // 0x00235A34: bc1f        L_00235A58
    if (!c1cs) {
        // 0x00235A38: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00235A58;
    }
    // 0x00235A38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00235A3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00235A40: addiu       $v0, $v0, -0x4740
    ctx->r2 = ADD32(ctx->r2, -0X4740);
    // 0x00235A44: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00235A48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235A4C: sw          $v1, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r3;
    // 0x00235A50: jr          $ra
    // 0x00235A54: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    return;
    // 0x00235A54: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_00235A58:
    // 0x00235A58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235A5C: lwc1        $f0, 0x6500($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6500);
    // 0x00235A60: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00235A64: nop

    // 0x00235A68: bc1f        L_00235AA0
    if (!c1cs) {
        // 0x00235A6C: nop
    
            goto L_00235AA0;
    }
    // 0x00235A6C: nop

    // 0x00235A70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00235A74: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00235A78: nop

    // 0x00235A7C: bc1t        L_00235A94
    if (c1cs) {
        // 0x00235A80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00235A94;
    }
    // 0x00235A80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00235A84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235A88: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x00235A8C: jr          $ra
    // 0x00235A90: nop

    return;
    // 0x00235A90: nop

L_00235A94:
    // 0x00235A94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235A98: lwc1        $f0, 0x6504($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6504);
    // 0x00235A9C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
L_00235AA0:
    // 0x00235AA0: nop

    // 0x00235AA4: bc1t        L_00235AC8
    if (c1cs) {
        // 0x00235AA8: nop
    
            goto L_00235AC8;
    }
    // 0x00235AA8: nop

    // 0x00235AAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00235AB0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00235AB4: nop

    // 0x00235AB8: bc1t        L_00235A08
    if (c1cs) {
        // 0x00235ABC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_00235A08;
    }
    // 0x00235ABC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00235AC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235AC4: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
L_00235AC8:
    // 0x00235AC8: jr          $ra
    // 0x00235ACC: nop

    return;
    // 0x00235ACC: nop

;}
RECOMP_FUNC void func_00273C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273C5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00273C60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00273C64: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00273C68: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x00273C6C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00273C70: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00273C74: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00273C78: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00273C7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00273C80: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00273C84: addiu       $v1, $a0, 0x3E
    ctx->r3 = ADD32(ctx->r4, 0X3E);
    // 0x00273C88: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00273C8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00273C90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00273C94:
    // 0x00273C94: lw          $v0, -0x32($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X32);
    // 0x00273C98: beq         $v0, $s3, L_00273D54
    if (ctx->r2 == ctx->r19) {
        // 0x00273C9C: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00273D54;
    }
    // 0x00273C9C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00273CA0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00273CA4: lh          $v0, 0x102($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X102);
    // 0x00273CA8: beq         $v0, $a3, L_00273D54
    if (ctx->r2 == ctx->r7) {
        // 0x00273CAC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00273D54;
    }
    // 0x00273CAC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00273CB0: lw          $v0, 0x6E($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6E);
    // 0x00273CB4: bne         $v0, $a1, L_00273D54
    if (ctx->r2 != ctx->r5) {
        // 0x00273CB8: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00273D54;
    }
    // 0x00273CB8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00273CBC: lw          $v0, 0x6A($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6A);
    // 0x00273CC0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00273CC4: beq         $v0, $zero, L_00273D54
    if (ctx->r2 == 0) {
        // 0x00273CC8: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00273D54;
    }
    // 0x00273CC8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00273CCC: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00273CD0: bne         $v0, $a2, L_00273D54
    if (ctx->r2 != ctx->r6) {
        // 0x00273CD4: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00273D54;
    }
    // 0x00273CD4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00273CD8: sra         $v1, $s2, 16
    ctx->r3 = S32(SIGNED(ctx->r18) >> 16);
    // 0x00273CDC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00273CE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00273CE4: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00273CE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00273CEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00273CF0: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x00273CF4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00273CF8: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00273CFC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x00273D00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00273D04: sw          $v0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r2;
    // 0x00273D08: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x00273D0C: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00273D10: beq         $v1, $v0, L_00273D4C
    if (ctx->r3 == ctx->r2) {
        // 0x00273D14: addiu       $s1, $a0, 0x84
        ctx->r17 = ADD32(ctx->r4, 0X84);
            goto L_00273D4C;
    }
    // 0x00273D14: addiu       $s1, $a0, 0x84
    ctx->r17 = ADD32(ctx->r4, 0X84);
    // 0x00273D18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00273D1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00273D20: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00273D24: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00273D28: jal         0x00293E60
    // 0x00273D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00273D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00273D30: jal         0x00293580
    // 0x00273D34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x00273D34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00273D38: beql        $v0, $zero, L_00273D4C
    if (ctx->r2 == 0) {
        // 0x00273D3C: sw          $s3, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r19;
            goto L_00273D4C;
    }
    goto skip_0;
    // 0x00273D3C: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
    skip_0:
    // 0x00273D40: jal         0x00293EC0
    // 0x00273D44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x00273D44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00273D48: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
L_00273D4C:
    // 0x00273D4C: j           L_00273D6C
    // 0x00273D50: sra         $v0, $s2, 16
    ctx->r2 = S32(SIGNED(ctx->r18) >> 16);
        goto L_00273D6C;
    // 0x00273D50: sra         $v0, $s2, 16
    ctx->r2 = S32(SIGNED(ctx->r18) >> 16);
L_00273D54:
    // 0x00273D54: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x00273D58: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00273D5C: slti        $v0, $a3, 0x10
    ctx->r2 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x00273D60: bne         $v0, $zero, L_00273C94
    if (ctx->r2 != 0) {
        // 0x00273D64: addiu       $v1, $v1, 0xCC
        ctx->r3 = ADD32(ctx->r3, 0XCC);
            goto L_00273C94;
    }
    // 0x00273D64: addiu       $v1, $v1, 0xCC
    ctx->r3 = ADD32(ctx->r3, 0XCC);
    // 0x00273D68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00273D6C:
    // 0x00273D6C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00273D70: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00273D74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00273D78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00273D7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273D80: jr          $ra
    // 0x00273D84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00273D84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002756D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002756D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002756DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002756E0: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x002756E4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x002756E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002756EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x002756F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x002756F4: bne         $v0, $zero, L_0027572C
    if (ctx->r2 != 0) {
        // 0x002756F8: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_0027572C;
    }
    // 0x002756F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x002756FC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00275700: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275704: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275708: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0027570C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00275710: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00275714: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00275718: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x0027571C: jal         0x00271128
    // 0x00275720: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_00271128(rdram, ctx);
        goto after_0;
    // 0x00275720: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_0:
    // 0x00275724: j           L_00275730
    // 0x00275728: nop

        goto L_00275730;
    // 0x00275728: nop

L_0027572C:
    // 0x0027572C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00275730:
    // 0x00275730: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00275734: jr          $ra
    // 0x00275738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00275738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00447C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447C18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447C1C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447C20: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447C24: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x00447C28: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x00447C2C: blez        $v0, L_00447C54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447C30: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_00447C54;
    }
    // 0x00447C30: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x00447C34: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_00447C38:
    // 0x00447C38: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x00447C3C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447C40: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447C44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447C48: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447C4C: bne         $v0, $zero, L_00447C38
    if (ctx->r2 != 0) {
        // 0x00447C50: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_00447C38;
    }
    // 0x00447C50: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_00447C54:
    // 0x00447C54: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447C58: blez        $v0, L_00447C80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447C5C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447C80;
    }
    // 0x00447C5C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447C60: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_00447C64:
    // 0x00447C64: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    // 0x00447C68: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447C6C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447C70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447C74: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447C78: bne         $v0, $zero, L_00447C64
    if (ctx->r2 != 0) {
        // 0x00447C7C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_00447C64;
    }
    // 0x00447C7C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_00447C80:
    // 0x00447C80: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447C84: blez        $v0, L_00447CAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447C88: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447CAC;
    }
    // 0x00447C88: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447C8C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_00447C90:
    // 0x00447C90: lw          $v0, 0x30($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X30);
    // 0x00447C94: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447C98: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447C9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447CA0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447CA4: bne         $v0, $zero, L_00447C90
    if (ctx->r2 != 0) {
        // 0x00447CA8: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_00447C90;
    }
    // 0x00447CA8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_00447CAC:
    // 0x00447CAC: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x00447CB0: sw          $a1, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r5;
    // 0x00447CB4: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00447CB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00447CBC: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00447CC0: beq         $v0, $zero, L_00447CD0
    if (ctx->r2 == 0) {
        // 0x00447CC4: nop
    
            goto L_00447CD0;
    }
    // 0x00447CC4: nop

    // 0x00447CC8: jalr        $v0
    // 0x00447CCC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00447CCC: nop

    after_0:
L_00447CD0:
    // 0x00447CD0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447CD4: jr          $ra
    // 0x00447CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B360: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B364: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B368: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x0041B36C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B370: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B374: jr          $ra
    // 0x0041B378: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B378: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
