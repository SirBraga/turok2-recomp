#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_0041524C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415200:
    // 0x0041524C: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x00415250: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x00415254: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00415258: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041525C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00415260: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00415264: beq         $a1, $t9, L_004152B4
    if (ctx->r5 == ctx->r25) {
        // 0x00415268: subu        $a2, $a2, $v0
        ctx->r6 = SUB32(ctx->r6, ctx->r2);
            goto L_004152B4;
    }
    // 0x00415268: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x0041526C: beq         $t1, $zero, L_00415284
    if (ctx->r9 == 0) {
        // 0x00415270: nop
    
            goto L_00415284;
    }
    // 0x00415270: nop

    // 0x00415274: beq         $a1, $t8, L_0041529C
    if (ctx->r5 == ctx->r24) {
        // 0x00415278: nop
    
            goto L_0041529C;
    }
    // 0x00415278: nop

    // 0x0041527C: j           L_004152F4
    // 0x00415280: nop

        goto L_004152F4;
    // 0x00415280: nop

L_00415284:
    // 0x00415284: beq         $a1, $t7, L_004152CC
    if (ctx->r5 == ctx->r15) {
        // 0x00415288: nop
    
            goto L_004152CC;
    }
    // 0x00415288: nop

    // 0x0041528C: beq         $a1, $t6, L_004152E4
    if (ctx->r5 == ctx->r14) {
        // 0x00415290: nop
    
            goto L_004152E4;
    }
    // 0x00415290: nop

    // 0x00415294: j           L_004152F4
    // 0x00415298: nop

        goto L_004152F4;
    // 0x00415298: nop

L_0041529C:
    // 0x0041529C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152A0: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x004152A4: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152A8: sb          $a2, 0x11($a0)
        MEM_B(0X11, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_0;
    // 0x004152A8: sb          $a2, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r6;
    skip_0:
    // 0x004152AC: j           L_004152F4
    // 0x004152B0: nop

        goto L_004152F4;
    // 0x004152B0: nop

L_004152B4:
    // 0x004152B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152B8: and         $v0, $v0, $t4
    ctx->r2 = ctx->r2 & ctx->r12;
    // 0x004152BC: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152C0: sb          $a2, 0x10($a0)
        MEM_B(0X10, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_1;
    // 0x004152C0: sb          $a2, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r6;
    skip_1:
    // 0x004152C4: j           L_004152F4
    // 0x004152C8: nop

        goto L_004152F4;
    // 0x004152C8: nop

L_004152CC:
    // 0x004152CC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152D0: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x004152D4: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152D8: sb          $a2, 0x13($a0)
        MEM_B(0X13, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_2;
    // 0x004152D8: sb          $a2, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r6;
    skip_2:
    // 0x004152DC: j           L_004152F4
    // 0x004152E0: nop

        goto L_004152F4;
    // 0x004152E0: nop

L_004152E4:
    // 0x004152E4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152E8: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x004152EC: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152F0: sb          $a2, 0x12($a0)
        MEM_B(0X12, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_3;
    // 0x004152F0: sb          $a2, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r6;
    skip_3:
L_004152F4:
    // 0x004152F4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152F8: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x004152FC: bne         $v0, $t0, L_00415200
    if (ctx->r2 != ctx->r8) {
        // 0x00415300: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00415200;
    }
    // 0x00415300: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00415304: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415308: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0041530C: beq         $v0, $zero, L_00415200
    if (ctx->r2 == 0) {
        // 0x00415310: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00415200;
    }
    // 0x00415310: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00415314: jr          $ra
    // 0x00415318: nop

    return;
    // 0x00415318: nop

;}
RECOMP_FUNC void entry_004152F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415200:
    // 0x004152F4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152F8: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x004152FC: bne         $v0, $t0, L_00415200
    if (ctx->r2 != ctx->r8) {
        // 0x00415300: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00415200;
    }
    // 0x00415300: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00415304: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415308: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0041530C: beq         $v0, $zero, L_00415200
    if (ctx->r2 == 0) {
        // 0x00415310: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00415200;
    }
    // 0x00415310: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00415314: jr          $ra
    // 0x00415318: nop

    return;
    // 0x00415318: nop

;}
RECOMP_FUNC void entry_004157DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415798:
    // 0x004157DC: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x004157E0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x004157E4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x004157E8: bnel        $v0, $zero, L_004157F0
    if (ctx->r2 != 0) {
        // 0x004157EC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_004157F0;
    }
    goto skip_0;
    // 0x004157EC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_004157F0:
    // 0x004157F0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x004157F4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x004157F8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x004157FC: beq         $v0, $zero, L_00415808
    if (ctx->r2 == 0) {
        // 0x00415800: sw          $v1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r3;
            goto L_00415808;
    }
    // 0x00415800: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x00415804: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_00415808:
    // 0x00415808: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x0041580C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x00415810: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00415814: beq         $v0, $zero, L_00415820
    if (ctx->r2 == 0) {
        // 0x00415818: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_00415820;
    }
    // 0x00415818: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x0041581C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_00415820:
    // 0x00415820: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x00415824: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00415828: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041582C: beq         $v0, $zero, L_00415838
    if (ctx->r2 == 0) {
        // 0x00415830: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_00415838;
    }
    // 0x00415830: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00415834: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00415838:
    // 0x00415838: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x0041583C: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415840: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415844: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415848: bne         $v0, $zero, L_00415798
    if (ctx->r2 != 0) {
        // 0x0041584C: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415798;
    }
    // 0x0041584C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x00415850: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00415854: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00415858: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x0041585C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x00415860: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x00415864: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x00415868: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x0041586C: bltz        $a0, L_00415CA8
    if (SIGNED(ctx->r4) < 0) {
        // 0x00415870: sw          $a1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r5;
            goto L_00415CA8;
    }
    // 0x00415870: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x00415874: bltz        $a1, L_00415CA8
    if (SIGNED(ctx->r5) < 0) {
        // 0x00415878: nop
    
            goto L_00415CA8;
    }
    // 0x00415878: nop

    // 0x0041587C: lwc1        $f0, 0x288($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X288);
    // 0x00415880: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415884: lwc1        $f4, 0xC1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC1C);
    // 0x00415888: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0041588C: lwc1        $f2, 0x290($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0X290);
    // 0x00415890: lh          $v0, 0x2($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X2);
    // 0x00415894: lwc1        $f3, 0x28C($s6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r22, 0X28C);
    // 0x00415898: lwc1        $f1, 0x294($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X294);
    // 0x0041589C: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x004158A0: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004158A4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004158A8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004158AC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x004158B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x004158B4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x004158B8: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x004158BC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004158C0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004158C4: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x004158C8: add.s       $f23, $f2, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x004158CC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x004158D0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x004158D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004158D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004158DC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004158E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004158E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004158E8: sub.s       $f4, $f23, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x004158EC: srl         $v0, $a1, 31
    ctx->r2 = S32(U32(ctx->r5) >> 31);
    // 0x004158F0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x004158F4: add.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x004158F8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004158FC: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00415900: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00415904: sub.s       $f3, $f1, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00415908: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x0041590C: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x00415910: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00415914: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00415918: swc1        $f5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0041591C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415920: swc1        $f5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x00415924: trunc.w.s   $f5, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x00415928: swc1        $f5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0041592C: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00415930: swc1        $f5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x00415934: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x00415938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041593C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415940: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x00415944: blez        $v1, L_00415CA8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00415948: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00415CA8;
    }
    // 0x00415948: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0041594C: lui         $s7, 0x80
    ctx->r23 = S32(0X80 << 16);
    // 0x00415950: lui         $s5, 0x2000
    ctx->r21 = S32(0X2000 << 16);
    // 0x00415954: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x00415958: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041595C: lwc1        $f22, 0xC20($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0XC20);
    // 0x00415960: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x00415964: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00415968:
    // 0x00415968: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0041596C: addu        $s0, $v0, $s1
    ctx->r16 = ADD32(ctx->r2, ctx->r17);
    // 0x00415970: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415974: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x00415978: beq         $v0, $zero, L_00415C94
    if (ctx->r2 == 0) {
        // 0x0041597C: nop
    
            goto L_00415C94;
    }
    // 0x0041597C: nop

    // 0x00415980: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00415984: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415988: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x0041598C: beq         $v0, $zero, L_004159CC
    if (ctx->r2 == 0) {
        // 0x00415990: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004159CC;
    }
    // 0x00415990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415994: jal         0x0041363C
    // 0x00415998: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x00415998: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x0041599C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004159A0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004159A4: lwc1        $f0, 0x290($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X290);
    // 0x004159A8: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x004159AC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004159B0: swc1        $f5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x004159B4: lwc1        $f0, 0x294($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X294);
    // 0x004159B8: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x004159BC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004159C0: swc1        $f5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x004159C4: j           L_004159D8
    // 0x004159C8: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
        goto L_004159D8;
    // 0x004159C8: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_004159CC:
    // 0x004159CC: jal         0x0041363C
    // 0x004159D0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x004159D0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x004159D4: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_004159D8:
    // 0x004159D8: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
L_004159DC:
    // 0x004159DC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x004159E0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x004159E4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x004159E8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x004159EC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x004159F0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x004159F4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x004159F8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x004159FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00415A00: bne         $v0, $fp, L_004159DC
    if (ctx->r2 != ctx->r30) {
        // 0x00415A04: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_004159DC;
    }
    // 0x00415A04: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00415A08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00415A0C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00415A10: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A14: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00415A18: bne         $v0, $zero, L_00415A58
    if (ctx->r2 != 0) {
        // 0x00415A1C: nop
    
            goto L_00415A58;
    }
    // 0x00415A1C: nop

    // 0x00415A20: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00415A24: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415A28: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x00415A2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00415A30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00415A34: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415A38: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x00415A3C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00415A40: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x00415A44: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x00415A48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00415A4C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00415A50: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x00415A54: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
L_00415A58:
    // 0x00415A58: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00415A60: beq         $v0, $zero, L_00415A98
    if (ctx->r2 == 0) {
        // 0x00415A64: nop
    
            goto L_00415A98;
    }
    // 0x00415A64: nop

    // 0x00415A68: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415A6C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00415A70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00415A74: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00415A78: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00415A7C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415A80: sub.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x00415A84: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415A88: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415A8C: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415A90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415A94: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_00415A98:
    // 0x00415A98: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00415AA0: beq         $v0, $zero, L_00415ABC
    if (ctx->r2 == 0) {
        // 0x00415AA4: nop
    
            goto L_00415ABC;
    }
    // 0x00415AA4: nop

    // 0x00415AA8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00415AAC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415AB0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415AB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415AB8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_00415ABC:
    // 0x00415ABC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415AC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00415AC4: beq         $v0, $zero, L_00415AE0
    if (ctx->r2 == 0) {
        // 0x00415AC8: nop
    
            goto L_00415AE0;
    }
    // 0x00415AC8: nop

    // 0x00415ACC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00415AD0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415AD4: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x00415AD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00415ADC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
L_00415AE0:
    // 0x00415AE0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00415AE4: and         $v0, $a0, $s7
    ctx->r2 = ctx->r4 & ctx->r23;
    // 0x00415AE8: beq         $v0, $zero, L_00415C94
    if (ctx->r2 == 0) {
        // 0x00415AEC: nop
    
            goto L_00415C94;
    }
    // 0x00415AEC: nop

    // 0x00415AF0: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x00415AF4: bnel        $v0, $s2, L_00415C7C
    if (ctx->r2 != ctx->r18) {
        // 0x00415AF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415C7C;
    }
    goto skip_1;
    // 0x00415AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x00415AFC: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x00415B00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00415B04: beq         $v1, $v0, L_00415C78
    if (ctx->r3 == ctx->r2) {
        // 0x00415B08: andi        $v0, $a0, 0x8
        ctx->r2 = ctx->r4 & 0X8;
            goto L_00415C78;
    }
    // 0x00415B08: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x00415B0C: bne         $v0, $zero, L_00415C7C
    if (ctx->r2 != 0) {
        // 0x00415B10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415C7C;
    }
    // 0x00415B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415B14: lwc1        $f21, 0x98($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x00415B18: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00415B1C: lwc1        $f20, 0x94($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X94);
    // 0x00415B20: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00415B24: sub.s       $f0, $f21, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f20.fl;
    // 0x00415B28: jal         0x0027AF4C
    // 0x00415B2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    func_0027AF4C(rdram, ctx);
        goto after_2;
    // 0x00415B2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    after_2:
    // 0x00415B30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00415B34: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x00415B38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00415B3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415B40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00415B44: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00415B48: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00415B4C: bgez        $v0, L_00415B60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00415B50: nop
    
            goto L_00415B60;
    }
    // 0x00415B50: nop

    // 0x00415B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B58: ldc1        $f0, 0xC28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XC28);
    // 0x00415B5C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00415B60:
    // 0x00415B60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B64: lwc1        $f0, 0xC30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC30);
    // 0x00415B68: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00415B6C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00415B70: jal         0x002982F0
    // 0x00415B74: nop

    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x00415B74: nop

    after_3:
    // 0x00415B78: lwc1        $f2, 0x30($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X30);
    // 0x00415B7C: lwc1        $f1, 0x34($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X34);
    // 0x00415B80: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00415B84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B88: lwc1        $f1, 0xC34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC34);
    // 0x00415B8C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415B90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B94: lwc1        $f1, 0xC38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC38);
    // 0x00415B98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00415B9C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415BA0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415BA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00415BA8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00415BAC: beq         $v0, $zero, L_00415BFC
    if (ctx->r2 == 0) {
        // 0x00415BB0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00415BFC;
    }
    // 0x00415BB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00415BB4: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x00415BB8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x00415BBC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00415BC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00415BC4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00415BC8: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415BCC: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00415BD0: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415BD4: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00415BD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00415BDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415BE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415BE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00415BE8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00415BEC: bc1f        L_00415C3C
    if (!c1cs) {
        // 0x00415BF0: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_00415C3C;
    }
    // 0x00415BF0: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x00415BF4: j           L_00415C50
    // 0x00415BF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
        goto L_00415C50;
    // 0x00415BF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_00415BFC:
    // 0x00415BFC: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x00415C00: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x00415C04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00415C08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00415C0C: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00415C10: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C14: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00415C18: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C1C: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00415C20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00415C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415C28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415C2C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00415C30: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00415C34: bc1t        L_00415C4C
    if (c1cs) {
        // 0x00415C38: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_00415C4C;
    }
    // 0x00415C38: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
L_00415C3C:
    // 0x00415C3C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C40: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C44: j           L_00415C60
    // 0x00415C48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
        goto L_00415C60;
    // 0x00415C48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00415C4C:
    // 0x00415C4C: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_00415C50:
    // 0x00415C50: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C54: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C58: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x00415C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00415C60:
    // 0x00415C60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415C64: jal         0x002778A8
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    func_002778A8(rdram, ctx);
        goto after_4;
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    after_4:
    // 0x00415C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415C70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415C74: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_00415C78:
    // 0x00415C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00415C7C:
    // 0x00415C7C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00415C80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415C84: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00415C88: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00415C8C: jalr        $v0
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_5:
L_00415C94:
    // 0x00415C94: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415C98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415C9C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415CA0: bne         $v0, $zero, L_00415968
    if (ctx->r2 != 0) {
        // 0x00415CA4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415968;
    }
    // 0x00415CA4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_00415CA8:
    // 0x00415CA8: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00415CAC: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x00415CB0: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x00415CB4: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x00415CB8: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x00415CBC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00415CC0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00415CC4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00415CC8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00415CCC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00415CD0: ldc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE0);
    // 0x00415CD4: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x00415CD8: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x00415CDC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00415CE0: jr          $ra
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_004159D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415968:
    // 0x004159D8: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
L_004159DC:
    // 0x004159DC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x004159E0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x004159E4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x004159E8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x004159EC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x004159F0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x004159F4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x004159F8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x004159FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00415A00: bne         $v0, $fp, L_004159DC
    if (ctx->r2 != ctx->r30) {
        // 0x00415A04: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_004159DC;
    }
    // 0x00415A04: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00415A08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00415A0C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00415A10: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A14: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00415A18: bne         $v0, $zero, L_00415A58
    if (ctx->r2 != 0) {
        // 0x00415A1C: nop
    
            goto L_00415A58;
    }
    // 0x00415A1C: nop

    // 0x00415A20: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00415A24: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415A28: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x00415A2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00415A30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00415A34: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415A38: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x00415A3C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00415A40: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x00415A44: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x00415A48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00415A4C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00415A50: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x00415A54: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
L_00415A58:
    // 0x00415A58: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00415A60: beq         $v0, $zero, L_00415A98
    if (ctx->r2 == 0) {
        // 0x00415A64: nop
    
            goto L_00415A98;
    }
    // 0x00415A64: nop

    // 0x00415A68: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415A6C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00415A70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00415A74: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00415A78: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00415A7C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415A80: sub.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x00415A84: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415A88: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415A8C: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415A90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415A94: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_00415A98:
    // 0x00415A98: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00415AA0: beq         $v0, $zero, L_00415ABC
    if (ctx->r2 == 0) {
        // 0x00415AA4: nop
    
            goto L_00415ABC;
    }
    // 0x00415AA4: nop

    // 0x00415AA8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00415AAC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415AB0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415AB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415AB8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_00415ABC:
    // 0x00415ABC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415AC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00415AC4: beq         $v0, $zero, L_00415AE0
    if (ctx->r2 == 0) {
        // 0x00415AC8: nop
    
            goto L_00415AE0;
    }
    // 0x00415AC8: nop

    // 0x00415ACC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00415AD0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415AD4: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x00415AD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00415ADC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
L_00415AE0:
    // 0x00415AE0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00415AE4: and         $v0, $a0, $s7
    ctx->r2 = ctx->r4 & ctx->r23;
    // 0x00415AE8: beq         $v0, $zero, L_00415C94
    if (ctx->r2 == 0) {
        // 0x00415AEC: nop
    
            goto L_00415C94;
    }
    // 0x00415AEC: nop

    // 0x00415AF0: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x00415AF4: bnel        $v0, $s2, L_00415C7C
    if (ctx->r2 != ctx->r18) {
        // 0x00415AF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415C7C;
    }
    goto skip_0;
    // 0x00415AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00415AFC: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x00415B00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00415B04: beq         $v1, $v0, L_00415C78
    if (ctx->r3 == ctx->r2) {
        // 0x00415B08: andi        $v0, $a0, 0x8
        ctx->r2 = ctx->r4 & 0X8;
            goto L_00415C78;
    }
    // 0x00415B08: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x00415B0C: bne         $v0, $zero, L_00415C7C
    if (ctx->r2 != 0) {
        // 0x00415B10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415C7C;
    }
    // 0x00415B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415B14: lwc1        $f21, 0x98($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x00415B18: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00415B1C: lwc1        $f20, 0x94($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X94);
    // 0x00415B20: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00415B24: sub.s       $f0, $f21, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f20.fl;
    // 0x00415B28: jal         0x0027AF4C
    // 0x00415B2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    func_0027AF4C(rdram, ctx);
        goto after_0;
    // 0x00415B2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    after_0:
    // 0x00415B30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00415B34: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x00415B38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00415B3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415B40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00415B44: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00415B48: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00415B4C: bgez        $v0, L_00415B60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00415B50: nop
    
            goto L_00415B60;
    }
    // 0x00415B50: nop

    // 0x00415B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B58: ldc1        $f0, 0xC28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XC28);
    // 0x00415B5C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00415B60:
    // 0x00415B60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B64: lwc1        $f0, 0xC30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC30);
    // 0x00415B68: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00415B6C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00415B70: jal         0x002982F0
    // 0x00415B74: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00415B74: nop

    after_1:
    // 0x00415B78: lwc1        $f2, 0x30($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X30);
    // 0x00415B7C: lwc1        $f1, 0x34($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X34);
    // 0x00415B80: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00415B84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B88: lwc1        $f1, 0xC34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC34);
    // 0x00415B8C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415B90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B94: lwc1        $f1, 0xC38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC38);
    // 0x00415B98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00415B9C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415BA0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415BA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00415BA8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00415BAC: beq         $v0, $zero, L_00415BFC
    if (ctx->r2 == 0) {
        // 0x00415BB0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00415BFC;
    }
    // 0x00415BB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00415BB4: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x00415BB8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x00415BBC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00415BC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00415BC4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00415BC8: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415BCC: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00415BD0: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415BD4: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00415BD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00415BDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415BE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415BE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00415BE8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00415BEC: bc1f        L_00415C3C
    if (!c1cs) {
        // 0x00415BF0: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_00415C3C;
    }
    // 0x00415BF0: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x00415BF4: j           L_00415C50
    // 0x00415BF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
        goto L_00415C50;
    // 0x00415BF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_00415BFC:
    // 0x00415BFC: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x00415C00: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x00415C04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00415C08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00415C0C: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00415C10: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C14: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00415C18: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C1C: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00415C20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00415C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415C28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415C2C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00415C30: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00415C34: bc1t        L_00415C4C
    if (c1cs) {
        // 0x00415C38: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_00415C4C;
    }
    // 0x00415C38: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
L_00415C3C:
    // 0x00415C3C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C40: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C44: j           L_00415C60
    // 0x00415C48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
        goto L_00415C60;
    // 0x00415C48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00415C4C:
    // 0x00415C4C: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_00415C50:
    // 0x00415C50: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C54: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C58: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x00415C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00415C60:
    // 0x00415C60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415C64: jal         0x002778A8
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    func_002778A8(rdram, ctx);
        goto after_2;
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    after_2:
    // 0x00415C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415C70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415C74: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_00415C78:
    // 0x00415C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00415C7C:
    // 0x00415C7C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00415C80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415C84: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00415C88: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00415C8C: jalr        $v0
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_3:
L_00415C94:
    // 0x00415C94: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415C98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415C9C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415CA0: bne         $v0, $zero, L_00415968
    if (ctx->r2 != 0) {
        // 0x00415CA4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415968;
    }
    // 0x00415CA4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x00415CA8: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00415CAC: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x00415CB0: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x00415CB4: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x00415CB8: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x00415CBC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00415CC0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00415CC4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00415CC8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00415CCC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00415CD0: ldc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE0);
    // 0x00415CD4: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x00415CD8: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x00415CDC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00415CE0: jr          $ra
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_00415C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415968:
    // 0x00415C50: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C54: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C58: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x00415C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00415C60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415C64: jal         0x002778A8
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    func_002778A8(rdram, ctx);
        goto after_0;
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    after_0:
    // 0x00415C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415C70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415C74: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x00415C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415C7C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00415C80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415C84: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00415C88: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00415C8C: jalr        $v0
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00415C94: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415C98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415C9C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415CA0: bne         $v0, $zero, L_00415968
    if (ctx->r2 != 0) {
        // 0x00415CA4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415968;
    }
    // 0x00415CA4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x00415CA8: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00415CAC: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x00415CB0: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x00415CB4: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x00415CB8: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x00415CBC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00415CC0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00415CC4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00415CC8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00415CCC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00415CD0: ldc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE0);
    // 0x00415CD4: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x00415CD8: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x00415CDC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00415CE0: jr          $ra
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_00415C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415968:
    // 0x00415C60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415C64: jal         0x002778A8
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    func_002778A8(rdram, ctx);
        goto after_0;
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    after_0:
    // 0x00415C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415C70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415C74: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x00415C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415C7C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00415C80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415C84: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00415C88: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00415C8C: jalr        $v0
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00415C94: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415C98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415C9C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415CA0: bne         $v0, $zero, L_00415968
    if (ctx->r2 != 0) {
        // 0x00415CA4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415968;
    }
    // 0x00415CA4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x00415CA8: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00415CAC: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x00415CB0: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x00415CB4: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x00415CB8: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x00415CBC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00415CC0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00415CC4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00415CC8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00415CCC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00415CD0: ldc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE0);
    // 0x00415CD4: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x00415CD8: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x00415CDC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00415CE0: jr          $ra
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_00415EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00415EE8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415EEC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00415EF0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00415EF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415EF8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00415EFC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x00415F00: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415F04: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00415F08: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x00415F0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00415F10: jal         0x0027AF4C
    // 0x00415F14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_0027AF4C(rdram, ctx);
        goto after_0;
    // 0x00415F14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_0:
    // 0x00415F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00415F1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00415F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415F24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00415F28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415F2C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00415F30: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x00415F34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415F38: lwc1        $f0, 0xC4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC4C);
    // 0x00415F3C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00415F40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415F44: lwc1        $f1, 0xC50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC50);
    // 0x00415F48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00415F4C: nop

    // 0x00415F50: bc1tl       L_00415F68
    if (c1cs) {
        // 0x00415F54: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00415F68;
    }
    goto skip_0;
    // 0x00415F54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x00415F58: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415F5C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00415F60: j           L_00415F7C
    // 0x00415F64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00415F7C;
    // 0x00415F64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00415F68:
    // 0x00415F68: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00415F6C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415F70: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00415F74: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00415F78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00415F7C:
    // 0x00415F7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415F80: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415F84: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x00415F88: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x00415F8C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x00415F90: jal         0x002778A8
    // 0x00415F94: nop

    func_002778A8(rdram, ctx);
        goto after_1;
    // 0x00415F94: nop

    after_1:
    // 0x00415F98: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x00415F9C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x00415FA0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x00415FA4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x00415FA8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x00415FAC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x00415FB0: jr          $ra
    // 0x00415FB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x00415FB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void entry_00415F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00415F7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415F80: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415F84: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x00415F88: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x00415F8C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x00415F90: jal         0x002778A8
    // 0x00415F94: nop

    func_002778A8(rdram, ctx);
        goto after_0;
    // 0x00415F94: nop

    after_0:
    // 0x00415F98: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x00415F9C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x00415FA0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x00415FA4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x00415FA8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x00415FAC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x00415FB0: jr          $ra
    // 0x00415FB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x00415FB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void entry_004160C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004160C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x004160CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x004160D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x004160D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004160D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004160DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004160E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004160E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004160E8: jr          $ra
    // 0x004160EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004160EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00416120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416120: beql        $v0, $zero, L_00416158
    if (ctx->r2 == 0) {
        // 0x00416124: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00416158;
    }
    goto skip_0;
    // 0x00416124: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00416128: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0041612C: beql        $v1, $zero, L_00416158
    if (ctx->r3 == 0) {
        // 0x00416130: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00416158;
    }
    goto skip_1;
    // 0x00416130: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x00416134: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00416138:
    // 0x00416138: beq         $v1, $a0, L_00416154
    if (ctx->r3 == ctx->r4) {
        // 0x0041613C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_00416154;
    }
    // 0x0041613C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00416140: beq         $v0, $zero, L_00416154
    if (ctx->r2 == 0) {
        // 0x00416144: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00416154;
    }
    // 0x00416144: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00416148: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0041614C: bne         $v1, $zero, L_00416138
    if (ctx->r3 != 0) {
        // 0x00416150: nop
    
            goto L_00416138;
    }
    // 0x00416150: nop

L_00416154:
    // 0x00416154: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00416158:
    // 0x00416158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041615C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416160: jr          $ra
    // 0x00416164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00416164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004162D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004162D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004162D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004162D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004162DC: jr          $ra
    // 0x004162E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004162E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004163B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004163B4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x004163B8: jr          $ra
    // 0x004163BC: nop

    return;
    // 0x004163BC: nop

;}
RECOMP_FUNC void entry_00416530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416530: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00416534: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00416538: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0041653C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00416540: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00416544: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00416548: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041654C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416550: jr          $ra
    // 0x00416554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00416554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00416740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416740: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00416744: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00416748: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041674C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00416750: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00416754: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00416758: jr          $ra
    // 0x0041675C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041675C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0041686C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041686C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00416870: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00416874: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00416878: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0041687C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00416880: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00416884: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00416888: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041688C: jr          $ra
    // 0x00416890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00416890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00416BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416BE0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00416BE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00416BE8: jal         0x004163C0
    // 0x00416BEC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_0;
    // 0x00416BEC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00416BF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00416BF4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00416BF8: jr          $ra
    // 0x00416BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00416BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00416F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416F70: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00416F74: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00416F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00416F7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00416F80: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00416F84: jr          $ra
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void entry_00416F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416F74: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00416F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00416F7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00416F80: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00416F84: jr          $ra
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void entry_00416F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00416F7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00416F80: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00416F84: jr          $ra
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x00416F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void entry_0041706C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041706C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00417070: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417074: jr          $ra
    // 0x00417078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004171BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004171BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004171C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004171C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x004171C8: jr          $ra
    // 0x004171CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004171CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004173F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004173F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004173FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00417400: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00417404: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00417408: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041740C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00417410: jr          $ra
    // 0x00417414: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00417414: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00417574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x004175B0: nop

    after_0:
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
        goto after_1;
    // 0x004175EC: nop

    after_1:
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
RECOMP_FUNC void entry_004175E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004175E0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004175E4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004175E8: jal         0x00430454
    // 0x004175EC: nop

    func_00430454(rdram, ctx);
        goto after_0;
    // 0x004175EC: nop

    after_0:
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
RECOMP_FUNC void entry_004176EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004176EC:
    // 0x004176EC: beq         $s2, $zero, L_00417724
    if (ctx->r18 == 0) {
        // 0x004176F0: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_00417724;
    }
    // 0x004176F0: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x004176F4: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x004176F8: beq         $v0, $zero, L_00417724
    if (ctx->r2 == 0) {
        // 0x004176FC: addiu       $a1, $s2, 0x2328
        ctx->r5 = ADD32(ctx->r18, 0X2328);
            goto L_00417724;
    }
    // 0x004176FC: addiu       $a1, $s2, 0x2328
    ctx->r5 = ADD32(ctx->r18, 0X2328);
    // 0x00417700: j           L_00417760
    // 0x00417704: nop

        goto L_00417760;
    // 0x00417704: nop

    // 0x00417708: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041770C: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00417710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00417714: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00417718: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x0041771C: j           L_004176EC
    // 0x00417720: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
        goto L_004176EC;
    // 0x00417720: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_00417724:
    // 0x00417724: jal         0x002113A4
    // 0x00417728: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x00417728: nop

    after_0:
    // 0x0041772C: lui         $v1, 0x4EC4
    ctx->r3 = S32(0X4EC4 << 16);
    // 0x00417730: ori         $v1, $v1, 0xEC4F
    ctx->r3 = ctx->r3 | 0XEC4F;
    // 0x00417734: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00417738: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0041773C: mfhi        $a2
    ctx->r6 = hi;
    // 0x00417740: sra         $a0, $a2, 2
    ctx->r4 = S32(SIGNED(ctx->r6) >> 2);
    // 0x00417744: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x00417748: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0041774C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00417750: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00417754: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00417758: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0041775C: addiu       $a1, $v0, 0x2329
    ctx->r5 = ADD32(ctx->r2, 0X2329);
L_00417760:
    // 0x00417760: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00417764: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00417768: jal         0x00430454
    // 0x0041776C: nop

    func_00430454(rdram, ctx);
        goto after_1;
    // 0x0041776C: nop

    after_1:
    // 0x00417770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00417774: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041777C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417784: jr          $ra
    // 0x00417788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00417760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417760: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00417764: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00417768: jal         0x00430454
    // 0x0041776C: nop

    func_00430454(rdram, ctx);
        goto after_0;
    // 0x0041776C: nop

    after_0:
    // 0x00417770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00417774: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041777C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417784: jr          $ra
    // 0x00417788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00417870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417870:
    // 0x00417870: beq         $s2, $zero, L_004178A8
    if (ctx->r18 == 0) {
        // 0x00417874: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_004178A8;
    }
    // 0x00417874: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x00417878: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x0041787C: beq         $v0, $zero, L_004178A8
    if (ctx->r2 == 0) {
        // 0x00417880: addiu       $a1, $s2, 0x2328
        ctx->r5 = ADD32(ctx->r18, 0X2328);
            goto L_004178A8;
    }
    // 0x00417880: addiu       $a1, $s2, 0x2328
    ctx->r5 = ADD32(ctx->r18, 0X2328);
    // 0x00417884: j           L_004178E4
    // 0x00417888: nop

        goto L_004178E4;
    // 0x00417888: nop

    // 0x0041788C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00417890: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00417894: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00417898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0041789C: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x004178A0: j           L_00417870
    // 0x004178A4: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
        goto L_00417870;
    // 0x004178A4: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_004178A8:
    // 0x004178A8: jal         0x002113A4
    // 0x004178AC: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x004178AC: nop

    after_0:
    // 0x004178B0: lui         $v1, 0x4EC4
    ctx->r3 = S32(0X4EC4 << 16);
    // 0x004178B4: ori         $v1, $v1, 0xEC4F
    ctx->r3 = ctx->r3 | 0XEC4F;
    // 0x004178B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004178BC: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004178C0: mfhi        $a2
    ctx->r6 = hi;
    // 0x004178C4: sra         $a0, $a2, 2
    ctx->r4 = S32(SIGNED(ctx->r6) >> 2);
    // 0x004178C8: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x004178CC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x004178D0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004178D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004178D8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004178DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004178E0: addiu       $a1, $v0, 0x2329
    ctx->r5 = ADD32(ctx->r2, 0X2329);
L_004178E4:
    // 0x004178E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004178E8: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004178EC: jal         0x00430454
    // 0x004178F0: nop

    func_00430454(rdram, ctx);
        goto after_1;
    // 0x004178F0: nop

    after_1:
    // 0x004178F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004178F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004178FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417908: jr          $ra
    // 0x0041790C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041790C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004178E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004178E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004178E8: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004178EC: jal         0x00430454
    // 0x004178F0: nop

    func_00430454(rdram, ctx);
        goto after_0;
    // 0x004178F0: nop

    after_0:
    // 0x004178F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004178F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004178FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417908: jr          $ra
    // 0x0041790C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041790C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00417AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417AC4: jr          $ra
    // 0x00417AC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00417AC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00417B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417B4C: jal         0x00275A74
    // 0x00417B50: nop

    func_00275A74(rdram, ctx);
        goto after_0;
    // 0x00417B50: nop

    after_0:
    // 0x00417B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00417B58: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00417B5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00417B60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417B6C: jr          $ra
    // 0x00417B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00417B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00417BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417BA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00417BA8: jr          $ra
    // 0x00417BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00417C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417C84: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00417C88: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00417C8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417C90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417C98: jr          $ra
    // 0x00417C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00417C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00417CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00417CFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417D00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417D04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417D08: jr          $ra
    // 0x00417D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00418008: beq         $v1, $v0, L_00418038
    if (ctx->r3 == ctx->r2) {
        // 0x0041800C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00418038;
    }
    // 0x0041800C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00418010: beq         $v1, $v0, L_00418048
    if (ctx->r3 == ctx->r2) {
        // 0x00418014: nop
    
            goto L_00418048;
    }
    // 0x00418014: nop

    // 0x00418018: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041801C: addiu       $v0, $v0, 0x41B0
    ctx->r2 = ADD32(ctx->r2, 0X41B0);
    // 0x00418020: j           L_00418054
    // 0x00418024: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418024: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00418028: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041802C: addiu       $v0, $v0, 0x41C0
    ctx->r2 = ADD32(ctx->r2, 0X41C0);
    // 0x00418030: j           L_00418054
    // 0x00418034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418038:
    // 0x00418038: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041803C: addiu       $v0, $v0, 0x41D0
    ctx->r2 = ADD32(ctx->r2, 0X41D0);
    // 0x00418040: j           L_00418054
    // 0x00418044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418048:
    // 0x00418048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041804C: addiu       $v0, $v0, 0x41E0
    ctx->r2 = ADD32(ctx->r2, 0X41E0);
    // 0x00418050: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418054:
    // 0x00418054: jal         0x004160F0
    // 0x00418058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00418058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041805C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418060: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00418064: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418068: addiu       $a1, $a1, 0xE7C
    ctx->r5 = ADD32(ctx->r5, 0XE7C);
    // 0x0041806C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00418070: jal         0x0029E3E0
    // 0x00418074: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418074: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00418078: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041807C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418080: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418088: jr          $ra
    // 0x0041808C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041808C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418028: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041802C: addiu       $v0, $v0, 0x41C0
    ctx->r2 = ADD32(ctx->r2, 0X41C0);
    // 0x00418030: j           L_00418054
    // 0x00418034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00418038: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041803C: addiu       $v0, $v0, 0x41D0
    ctx->r2 = ADD32(ctx->r2, 0X41D0);
    // 0x00418040: j           L_00418054
    // 0x00418044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00418054;
    // 0x00418044: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00418048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041804C: addiu       $v0, $v0, 0x41E0
    ctx->r2 = ADD32(ctx->r2, 0X41E0);
    // 0x00418050: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00418054:
    // 0x00418054: jal         0x004160F0
    // 0x00418058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00418058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041805C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418060: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00418064: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418068: addiu       $a1, $a1, 0xE7C
    ctx->r5 = ADD32(ctx->r5, 0XE7C);
    // 0x0041806C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00418070: jal         0x0029E3E0
    // 0x00418074: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418074: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00418078: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041807C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418080: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418088: jr          $ra
    // 0x0041808C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041808C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418148: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041814C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418150: jr          $ra
    // 0x00418154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00418154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041814C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041814C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418150: jr          $ra
    // 0x00418154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00418154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00418478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418478: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041847C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418480: lb          $v0, 0x25($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X25);
    // 0x00418484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418488: jal         0x0041648C
    // 0x0041848C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041848C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418490: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x00418494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041849C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004184A0: jr          $ra
    // 0x004184A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004184A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418558: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041855C: lb          $v0, 0x26($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X26);
    // 0x00418560: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418564: jal         0x0041648C
    // 0x00418568: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418568: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041856C: sb          $v0, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r2;
    // 0x00418570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418574: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418578: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041857C: jr          $ra
    // 0x00418580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418654: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418658: jr          $ra
    // 0x0041865C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041865C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418764: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418768: addu        $at, $at, $v0
    gpr jr_addend_00418770 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041876C: lw          $v0, 0xF10($at)
    ctx->r2 = ADD32(ctx->r1, 0XF10);
    // 0x00418770: jr          $v0
    // 0x00418774: nop

    switch (jr_addend_00418770 >> 2) {
        case 0: goto L_00418778; break;
        case 1: goto L_00418788; break;
        case 2: goto L_00418798; break;
        case 3: goto L_004187A8; break;
        case 4: goto L_004187B8; break;
        case 5: goto L_004187C8; break;
        case 6: goto L_004187D8; break;
        case 7: goto L_004187E8; break;
        case 8: goto L_004187F8; break;
        default: switch_error(__func__, 0x00418770, 0x800C0F10);
    }
    // 0x00418774: nop

L_00418778:
    // 0x00418778: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041877C: addiu       $v0, $v0, 0x608C
    ctx->r2 = ADD32(ctx->r2, 0X608C);
    // 0x00418780: j           L_00418804
    // 0x00418784: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x00418784: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418788:
    // 0x00418788: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041878C: addiu       $v0, $v0, 0x60A4
    ctx->r2 = ADD32(ctx->r2, 0X60A4);
    // 0x00418790: j           L_00418804
    // 0x00418794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x00418794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418798:
    // 0x00418798: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041879C: addiu       $v0, $v0, 0x60BC
    ctx->r2 = ADD32(ctx->r2, 0X60BC);
    // 0x004187A0: j           L_00418804
    // 0x004187A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187A8:
    // 0x004187A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187AC: addiu       $v0, $v0, 0x60D4
    ctx->r2 = ADD32(ctx->r2, 0X60D4);
    // 0x004187B0: j           L_00418804
    // 0x004187B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187B8:
    // 0x004187B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187BC: addiu       $v0, $v0, 0x60EC
    ctx->r2 = ADD32(ctx->r2, 0X60EC);
    // 0x004187C0: j           L_00418804
    // 0x004187C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187C8:
    // 0x004187C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187CC: addiu       $v0, $v0, 0x6104
    ctx->r2 = ADD32(ctx->r2, 0X6104);
    // 0x004187D0: j           L_00418804
    // 0x004187D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187D8:
    // 0x004187D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187DC: addiu       $v0, $v0, 0x611C
    ctx->r2 = ADD32(ctx->r2, 0X611C);
    // 0x004187E0: j           L_00418804
    // 0x004187E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187E8:
    // 0x004187E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187EC: addiu       $v0, $v0, 0x6134
    ctx->r2 = ADD32(ctx->r2, 0X6134);
    // 0x004187F0: j           L_00418804
    // 0x004187F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187F8:
    // 0x004187F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x004187FC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004187FC(rdram, ctx);
;}
RECOMP_FUNC void entry_004187F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004187F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x004187FC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004187FC(rdram, ctx);
;}
RECOMP_FUNC void entry_00418804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418804: jr          $ra
    // 0x00418808: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418808: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00418980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418980: nop

    // 0x00418984: bc1tl       L_0041898C
    if (c1cs) {
        // 0x00418988: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0041898C;
    }
    goto skip_0;
    // 0x00418988: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0041898C:
    // 0x0041898C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00418990: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00418994: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418998: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041899C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004189A0: swc1        $f1, -0x550C($at)
    MEM_W(-0X550C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x004189A4: jr          $ra
    // 0x004189A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004189A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00418A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418A58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418A5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418A60: lb          $v0, 0x20($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X20);
    // 0x00418A64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418A68: jal         0x0041648C
    // 0x00418A6C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418A6C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418A70: sb          $v0, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r2;
    // 0x00418A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418A78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418A80: jr          $ra
    // 0x00418A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418B38: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418B3C: lb          $v0, 0x21($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X21);
    // 0x00418B40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418B44: jal         0x0041648C
    // 0x00418B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418B4C: sb          $v0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r2;
    // 0x00418B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418B58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418B5C: jr          $ra
    // 0x00418B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418CA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418CA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418CAC: addiu       $v0, $v0, 0x5F9C
    ctx->r2 = ADD32(ctx->r2, 0X5F9C);
    // 0x00418CB0: j           L_00418D44
    // 0x00418CB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418CB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418CB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418CBC: addiu       $v0, $v0, 0x5FB4
    ctx->r2 = ADD32(ctx->r2, 0X5FB4);
    // 0x00418CC0: j           L_00418D44
    // 0x00418CC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418CC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418CC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418CCC: addiu       $v0, $v0, 0x5FCC
    ctx->r2 = ADD32(ctx->r2, 0X5FCC);
    // 0x00418CD0: j           L_00418D44
    // 0x00418CD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418CD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418CD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418CDC: addiu       $v0, $v0, 0x5FE4
    ctx->r2 = ADD32(ctx->r2, 0X5FE4);
    // 0x00418CE0: j           L_00418D44
    // 0x00418CE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418CE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418CE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418CEC: addiu       $v0, $v0, 0x5FFC
    ctx->r2 = ADD32(ctx->r2, 0X5FFC);
    // 0x00418CF0: j           L_00418D44
    // 0x00418CF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418CF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418CF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418CFC: addiu       $v0, $v0, 0x6014
    ctx->r2 = ADD32(ctx->r2, 0X6014);
    // 0x00418D00: j           L_00418D44
    // 0x00418D04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418D04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418D08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418D0C: addiu       $v0, $v0, 0x602C
    ctx->r2 = ADD32(ctx->r2, 0X602C);
    // 0x00418D10: j           L_00418D44
    // 0x00418D14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418D14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418D18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418D1C: addiu       $v0, $v0, 0x6044
    ctx->r2 = ADD32(ctx->r2, 0X6044);
    // 0x00418D20: j           L_00418D44
    // 0x00418D24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418D24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418D28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418D2C: addiu       $v0, $v0, 0x605C
    ctx->r2 = ADD32(ctx->r2, 0X605C);
    // 0x00418D30: j           L_00418D44
    // 0x00418D34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418D34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418D38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418D3C: addiu       $v0, $v0, 0x6074
    ctx->r2 = ADD32(ctx->r2, 0X6074);
    // 0x00418D40: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418D44:
    // 0x00418D44: jr          $ra
    // 0x00418D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00418DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418DB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418DB8: addu        $at, $at, $v0
    gpr jr_addend_00418DC0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00418DBC: lw          $v0, 0xF80($at)
    ctx->r2 = ADD32(ctx->r1, 0XF80);
    // 0x00418DC0: jr          $v0
    // 0x00418DC4: nop

    switch (jr_addend_00418DC0 >> 2) {
        case 0: goto L_00418DC8; break;
        case 1: goto L_00418DD8; break;
        case 2: goto L_00418DE8; break;
        case 3: goto L_00418DF8; break;
        case 4: goto L_00418E08; break;
        case 5: goto L_00418E18; break;
        case 6: goto L_00418E28; break;
        case 7: goto L_00418E38; break;
        case 8: goto L_00418E48; break;
        default: switch_error(__func__, 0x00418DC0, 0x800C0F80);
    }
    // 0x00418DC4: nop

L_00418DC8:
    // 0x00418DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DCC: addiu       $v0, $v0, 0x608C
    ctx->r2 = ADD32(ctx->r2, 0X608C);
    // 0x00418DD0: j           L_00418E54
    // 0x00418DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418DD8:
    // 0x00418DD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DDC: addiu       $v0, $v0, 0x60A4
    ctx->r2 = ADD32(ctx->r2, 0X60A4);
    // 0x00418DE0: j           L_00418E54
    // 0x00418DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418DE8:
    // 0x00418DE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DEC: addiu       $v0, $v0, 0x60BC
    ctx->r2 = ADD32(ctx->r2, 0X60BC);
    // 0x00418DF0: j           L_00418E54
    // 0x00418DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418DF8:
    // 0x00418DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418DFC: addiu       $v0, $v0, 0x60D4
    ctx->r2 = ADD32(ctx->r2, 0X60D4);
    // 0x00418E00: j           L_00418E54
    // 0x00418E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E08:
    // 0x00418E08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E0C: addiu       $v0, $v0, 0x60EC
    ctx->r2 = ADD32(ctx->r2, 0X60EC);
    // 0x00418E10: j           L_00418E54
    // 0x00418E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E18:
    // 0x00418E18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E1C: addiu       $v0, $v0, 0x6104
    ctx->r2 = ADD32(ctx->r2, 0X6104);
    // 0x00418E20: j           L_00418E54
    // 0x00418E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E28:
    // 0x00418E28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E2C: addiu       $v0, $v0, 0x611C
    ctx->r2 = ADD32(ctx->r2, 0X611C);
    // 0x00418E30: j           L_00418E54
    // 0x00418E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E38:
    // 0x00418E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418E3C: addiu       $v0, $v0, 0x6134
    ctx->r2 = ADD32(ctx->r2, 0X6134);
    // 0x00418E40: j           L_00418E54
    // 0x00418E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E54(rdram, ctx);
    return;
    // 0x00418E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418E48:
    // 0x00418E48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x00418E4C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00418E4C(rdram, ctx);
;}
RECOMP_FUNC void entry_00418E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418E48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x00418E4C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00418E4C(rdram, ctx);
;}
RECOMP_FUNC void entry_00418E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418E54: jr          $ra
    // 0x00418E58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418E58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
