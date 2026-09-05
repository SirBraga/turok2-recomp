#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0044F33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004163B4:
    // 0x0044F33C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044F340: lwc1        $f0, 0xDE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDE0);
    // 0x0044F344: j           L_004163B4
    // 0x0044F348: nop

    entry_004163B4(rdram, ctx);
    return;
    // 0x0044F348: nop

    // 0x0044F34C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x0044F350: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x0044F354: beq         $a1, $v0, L_0044F364
    if (ctx->r5 == ctx->r2) {
        // 0x0044F358: addiu       $v0, $zero, 0x54
        ctx->r2 = ADD32(0, 0X54);
            goto L_0044F364;
    }
    // 0x0044F358: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    // 0x0044F35C: bne         $a1, $v0, L_0044F3B4
    if (ctx->r5 != ctx->r2) {
        // 0x0044F360: nop
    
            goto L_0044F3B4;
    }
    // 0x0044F360: nop

L_0044F364:
    // 0x0044F364: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044F368: lwc1        $f0, 0xDE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDE4);
    // 0x0044F36C: j           L_004163B4
    // 0x0044F370: nop

    entry_004163B4(rdram, ctx);
    return;
    // 0x0044F370: nop

    // 0x0044F374: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x0044F378: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x0044F37C: beq         $a1, $v0, L_0044F38C
    if (ctx->r5 == ctx->r2) {
        // 0x0044F380: addiu       $v0, $zero, 0x54
        ctx->r2 = ADD32(0, 0X54);
            goto L_0044F38C;
    }
    // 0x0044F380: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    // 0x0044F384: bne         $a1, $v0, L_0044F3B4
    if (ctx->r5 != ctx->r2) {
        // 0x0044F388: nop
    
            goto L_0044F3B4;
    }
    // 0x0044F388: nop

L_0044F38C:
    // 0x0044F38C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044F390: lwc1        $f0, 0xDE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDE8);
    // 0x0044F394: j           L_004163B4
    // 0x0044F398: nop

    entry_004163B4(rdram, ctx);
    return;
    // 0x0044F398: nop

    // 0x0044F39C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044F3A0: lwc1        $f0, 0xDEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDEC);
    // 0x0044F3A4: j           L_004163B4
    // 0x0044F3A8: nop

    entry_004163B4(rdram, ctx);
    return;
    // 0x0044F3A8: nop

    // 0x0044F3AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044F3B0: lwc1        $f0, 0xDF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDF0);
L_0044F3B4:
    // 0x0044F3B4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0044F3B8: jr          $ra
    // 0x0044F3BC: nop

    return;
    // 0x0044F3BC: nop

;}
RECOMP_FUNC void func_0041A3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A3AC: bc1f        L_0041A490
    if (!c1cs) {
        // 0x0041A3B0: addiu       $sp, $sp, -0x18
        ctx->r29 = ADD32(ctx->r29, -0X18);
            goto L_0041A490;
    }
    // 0x0041A3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A3B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A3B8: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x0041A3BC: jal         0x0042E14C
    // 0x0041A3C0: nop

    func_0042E14C(rdram, ctx);
        goto after_0;
    // 0x0041A3C0: nop

    after_0:
    // 0x0041A3C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A3C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A3CC: jr          $ra
    // 0x0041A3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0041A3D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A3D8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041A3DC: lw          $v1, -0x6760($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6760);
    // 0x0041A3E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A3E4: bne         $v1, $v0, L_0041A404
    if (ctx->r3 != ctx->r2) {
        // 0x0041A3E8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0041A404;
    }
    // 0x0041A3E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A3EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A3F0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A3F4: jal         0x00430330
    // 0x0041A3F8: nop

    func_00430330(rdram, ctx);
        goto after_1;
    // 0x0041A3F8: nop

    after_1:
    // 0x0041A3FC: j           L_0041A40C
    // 0x0041A400: nop

        goto L_0041A40C;
    // 0x0041A400: nop

L_0041A404:
    // 0x0041A404: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041A408: sw          $zero, 0x510($v0)
    MEM_W(0X510, ctx->r2) = 0;
L_0041A40C:
    // 0x0041A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A410: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A414: jr          $ra
    // 0x0041A418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0041A41C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041A420: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A424: lwc1        $f0, 0x1064($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1064);
    // 0x0041A428: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041A42C: swc1        $f0, -0x5340($at)
    MEM_W(-0X5340, ctx->r1) = ctx->f0.u32l;
    // 0x0041A430: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0041A434: lui         $v1, 0xFBFF
    ctx->r3 = S32(0XFBFF << 16);
    // 0x0041A438: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0041A43C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041A440: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041A444: jr          $ra
    // 0x0041A448: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    return;
    // 0x0041A448: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x0041A44C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041A450: lwc1        $f1, -0x5340($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5340);
    // 0x0041A454: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0041A458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A45C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041A460: nop

    // 0x0041A464: bc1t        L_0041A474
    if (c1cs) {
        // 0x0041A468: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0041A474;
    }
    // 0x0041A468: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A46C: j           L_0041A488
    // 0x0041A470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041A488;
    // 0x0041A470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041A474:
    // 0x0041A474: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A478: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A47C: jal         0x00430330
    // 0x0041A480: nop

    func_00430330(rdram, ctx);
        goto after_2;
    // 0x0041A480: nop

    after_2:
    // 0x0041A484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041A488:
    // 0x0041A488: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A48C: jr          $ra
    // 0x0041A490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
L_0041A490:
    // 0x0041A490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0041A494: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041A498: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0041A49C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0041A4A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041A4A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0041A4A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041A4AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0041A4B0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0041A4B4: nop

    // 0x0041A4B8: bc1f        L_0041A4C4
    if (!c1cs) {
        // 0x0041A4BC: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_0041A4C4;
    }
    // 0x0041A4BC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x0041A4C0: swc1        $f1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
L_0041A4C4:
    // 0x0041A4C4: jr          $ra
    // 0x0041A4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041A4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0023353C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023353C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00233540: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00233544: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00233548: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x0023354C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00233550: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00233554: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00233558: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0023355C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00233560: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00233564: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00233568: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x0023356C: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x00233570: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x00233574: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00233578: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023357C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00233580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233584: lwc1        $f22, 0x6444($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6444);
    // 0x00233588: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0023358C: mul.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x00233590: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00233594: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233598: lwc1        $f21, 0x6448($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6448);
    // 0x0023359C: jal         0x002974C0
    // 0x002335A0: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x002335A0: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    after_0:
    // 0x002335A4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002335A8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002335AC: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002335B0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002335B4: c.le.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl <= ctx->f1.fl;
    // 0x002335B8: nop

    // 0x002335BC: bc1f        L_002335E0
    if (!c1cs) {
        // 0x002335C0: sub.s       $f20, $f21, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f21.fl - ctx->f0.fl;
            goto L_002335E0;
    }
    // 0x002335C0: sub.s       $f20, $f21, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x002335C4: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    // 0x002335C8: mul.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x002335CC: jal         0x002974C0
    // 0x002335D0: nop

    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x002335D0: nop

    after_1:
    // 0x002335D4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002335D8: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x002335DC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_002335E0:
    // 0x002335E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002335E4: lw          $s3, 0x0($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X0);
    // 0x002335E8: lw          $s4, 0x4($s6)
    ctx->r20 = MEM_W(ctx->r22, 0X4);
    // 0x002335EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002335F0: lwc1        $f0, 0x644C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X644C);
    // 0x002335F4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x002335F8: beq         $s3, $v0, L_00233830
    if (ctx->r19 == ctx->r2) {
        // 0x002335FC: sub.s       $f20, $f0, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_00233830;
    }
    // 0x002335FC: sub.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00233600: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233604: lwc1        $f21, 0x6450($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6450);
    // 0x00233608: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x0023360C: addiu       $s2, $s5, 0xF
    ctx->r18 = ADD32(ctx->r21, 0XF);
    // 0x00233610: addiu       $s1, $s4, 0x4
    ctx->r17 = ADD32(ctx->r20, 0X4);
L_00233614:
    // 0x00233614: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00233618: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x0023361C: lw          $a2, 0x10($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X10);
    // 0x00233620: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x00233624: lw          $s0, 0xC($s6)
    ctx->r16 = MEM_W(ctx->r22, 0XC);
    // 0x00233628: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x0023362C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00233630: lw          $v0, 0x8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X8);
    // 0x00233634: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00233638: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    // 0x0023363C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00233640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00233644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00233648: jal         0x0020EF60
    // 0x0023364C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x0023364C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_2:
    // 0x00233650: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00233654: lw          $a2, 0x14($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X14);
    // 0x00233658: jal         0x0020EF60
    // 0x0023365C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0023365C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00233660: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00233664: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00233668: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023366C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233670: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233674: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00233678: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0023367C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x00233680: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00233684: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00233688: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023368C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233690: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233694: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00233698: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0023369C: sh          $v0, -0xD($s2)
    MEM_H(-0XD, ctx->r18) = ctx->r2;
    // 0x002336A0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x002336A4: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x002336A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002336AC: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002336B0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002336B4: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x002336B8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002336BC: sh          $v0, -0xB($s2)
    MEM_H(-0XB, ctx->r18) = ctx->r2;
    // 0x002336C0: lbu         $v1, -0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, -0X1);
    // 0x002336C4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x002336C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002336CC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002336D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002336D4: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002336D8: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002336DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002336E0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002336E4: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x002336E8: nop

    // 0x002336EC: bc1t        L_00233704
    if (c1cs) {
        // 0x002336F0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00233704;
    }
    // 0x002336F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002336F4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002336F8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002336FC: j           L_00233718
    // 0x00233700: sb          $v0, -0x3($s2)
    MEM_B(-0X3, ctx->r18) = ctx->r2;
        goto L_00233718;
    // 0x00233700: sb          $v0, -0x3($s2)
    MEM_B(-0X3, ctx->r18) = ctx->r2;
L_00233704:
    // 0x00233704: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00233708: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0023370C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233710: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233714: sb          $v0, -0x3($s2)
    MEM_B(-0X3, ctx->r18) = ctx->r2;
L_00233718:
    // 0x00233718: lbu         $v1, -0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, -0X2);
    // 0x0023371C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00233720: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00233724: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00233728: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023372C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233730: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00233734: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00233738: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023373C: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00233740: nop

    // 0x00233744: bc1tl       L_0023375C
    if (c1cs) {
        // 0x00233748: sub.s       $f0, $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
            goto L_0023375C;
    }
    goto skip_0;
    // 0x00233748: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    skip_0:
    // 0x0023374C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233750: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233754: j           L_0023376C
    // 0x00233758: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
        goto L_0023376C;
    // 0x00233758: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
L_0023375C:
    // 0x0023375C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233760: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00233764: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233768: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
L_0023376C:
    // 0x0023376C: lbu         $v1, -0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, -0X3);
    // 0x00233770: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x00233774: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00233778: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023377C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00233780: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00233784: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00233788: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0023378C: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233790: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00233794: nop

    // 0x00233798: bc1tl       L_002337B0
    if (c1cs) {
        // 0x0023379C: sub.s       $f0, $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
            goto L_002337B0;
    }
    goto skip_1;
    // 0x0023379C: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    skip_1:
    // 0x002337A0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002337A4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002337A8: j           L_002337C0
    // 0x002337AC: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
        goto L_002337C0;
    // 0x002337AC: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
L_002337B0:
    // 0x002337B0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002337B4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002337B8: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x002337BC: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
L_002337C0:
    // 0x002337C0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002337C4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x002337C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002337CC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002337D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002337D4: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002337D8: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002337DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002337E0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002337E4: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x002337E8: nop

    // 0x002337EC: bc1tl       L_00233804
    if (c1cs) {
        // 0x002337F0: sub.s       $f0, $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
            goto L_00233804;
    }
    goto skip_2;
    // 0x002337F0: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    skip_2:
    // 0x002337F4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002337F8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002337FC: j           L_00233814
    // 0x00233800: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
        goto L_00233814;
    // 0x00233800: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_00233804:
    // 0x00233804: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00233808: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0023380C: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x00233810: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_00233814:
    // 0x00233814: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00233818: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x0023381C: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x00233820: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x00233824: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00233828: bne         $s3, $v0, L_00233614
    if (ctx->r19 != ctx->r2) {
        // 0x0023382C: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_00233614;
    }
    // 0x0023382C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_00233830:
    // 0x00233830: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00233834: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00233838: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0023383C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00233840: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00233844: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00233848: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023384C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00233850: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00233854: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x00233858: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0023385C: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x00233860: jr          $ra
    // 0x00233864: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00233864: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_00416DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416DA4: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x00416DA8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00416DAC: beq         $a0, $v1, L_00416DB8
    if (ctx->r4 == ctx->r3) {
        // 0x00416DB0: addiu       $v0, $zero, 0x330
        ctx->r2 = ADD32(0, 0X330);
            goto L_00416DB8;
    }
    // 0x00416DB0: addiu       $v0, $zero, 0x330
    ctx->r2 = ADD32(0, 0X330);
    // 0x00416DB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00416DB8:
    // 0x00416DB8: jr          $ra
    // 0x00416DBC: nop

    return;
    // 0x00416DBC: nop

;}
RECOMP_FUNC void func_0021170C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021170C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00211710: c.lt.s      $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f1.fl < ctx->f12.fl;
    // 0x00211714: nop

    // 0x00211718: bc1f        L_0021173C
    if (!c1cs) {
        // 0x0021171C: nop
    
            goto L_0021173C;
    }
    // 0x0021171C: nop

    // 0x00211720: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00211724: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00211728: mul.s       $f0, $f14, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x0021172C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x00211730: c.lt.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl < ctx->f1.fl;
    // 0x00211734: j           L_00211760
    // 0x00211738: nop

        goto L_00211760;
    // 0x00211738: nop

L_0021173C:
    // 0x0021173C: c.lt.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl < ctx->f1.fl;
    // 0x00211740: nop

    // 0x00211744: bc1f        L_0021176C
    if (!c1cs) {
        // 0x00211748: nop
    
            goto L_0021176C;
    }
    // 0x00211748: nop

    // 0x0021174C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00211750: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00211754: mul.s       $f0, $f14, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x00211758: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0021175C: c.lt.s      $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f1.fl < ctx->f12.fl;
L_00211760:
    // 0x00211760: nop

    // 0x00211764: bc1tl       L_0021176C
    if (c1cs) {
        // 0x00211768: mov.s       $f12, $f1
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    ctx->f12.fl = ctx->f1.fl;
            goto L_0021176C;
    }
    goto skip_0;
    // 0x00211768: mov.s       $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    ctx->f12.fl = ctx->f1.fl;
    skip_0:
L_0021176C:
    // 0x0021176C: jr          $ra
    // 0x00211770: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x00211770: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_0023DBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023DBBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0023DBC0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0023DBC4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0023DBC8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0023DBCC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0023DBD0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0023DBD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0023DBD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0023DBDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023DBE0: lw          $s1, 0x4C($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X4C);
    // 0x0023DBE4: jal         0x00214DBC
    // 0x0023DBE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00214DBC(rdram, ctx);
        goto after_0;
    // 0x0023DBE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0023DBEC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0023DBF0: beq         $s5, $zero, L_0023DC98
    if (ctx->r21 == 0) {
        // 0x0023DBF4: addiu       $s0, $s4, 0x54
        ctx->r16 = ADD32(ctx->r20, 0X54);
            goto L_0023DC98;
    }
    // 0x0023DBF4: addiu       $s0, $s4, 0x54
    ctx->r16 = ADD32(ctx->r20, 0X54);
    // 0x0023DBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023DBFC: jal         0x0020D908
    // 0x0023DC00: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    func_0020D908(rdram, ctx);
        goto after_1;
    // 0x0023DC00: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    after_1:
    // 0x0023DC04: addiu       $a0, $s4, 0x94
    ctx->r4 = ADD32(ctx->r20, 0X94);
    // 0x0023DC08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023DC0C: jal         0x0020C618
    // 0x0023DC10: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    func_0020C618(rdram, ctx);
        goto after_2;
    // 0x0023DC10: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    after_2:
    // 0x0023DC14: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x0023DC18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0023DC1C: jal         0x002017D4
    // 0x0023DC20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0023DC20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0023DC24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023DC28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0023DC2C: jal         0x002017D4
    // 0x0023DC30: sw          $v0, 0xD4($s4)
    MEM_W(0XD4, ctx->r20) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0023DC30: sw          $v0, 0xD4($s4)
    MEM_W(0XD4, ctx->r20) = ctx->r2;
    after_4:
    // 0x0023DC34: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x0023DC38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023DC3C: lb          $a1, 0xE($v1)
    ctx->r5 = MEM_B(ctx->r3, 0XE);
    // 0x0023DC40: jal         0x002017D4
    // 0x0023DC44: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0023DC44: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x0023DC48: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0023DC4C: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0023DC50: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    // 0x0023DC54: blez        $s2, L_0023DC90
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0023DC58: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0023DC90;
    }
    // 0x0023DC58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0023DC5C:
    // 0x0023DC5C: lw          $v0, 0x9C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X9C);
    // 0x0023DC60: bne         $v0, $zero, L_0023DC90
    if (ctx->r2 != 0) {
        // 0x0023DC64: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0023DC90;
    }
    // 0x0023DC64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0023DC68: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023DC6C: jal         0x002017D4
    // 0x0023DC70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0023DC70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0023DC74: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0023DC78: jal         0x0023D7CC
    // 0x0023DC7C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0023D7CC(rdram, ctx);
        goto after_7;
    // 0x0023DC7C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_7:
    // 0x0023DC80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0023DC84: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0023DC88: bne         $v0, $zero, L_0023DC5C
    if (ctx->r2 != 0) {
        // 0x0023DC8C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0023DC5C;
    }
    // 0x0023DC8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0023DC90:
    // 0x0023DC90: jal         0x002051F4
    // 0x0023DC94: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_8;
    // 0x0023DC94: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_8:
L_0023DC98:
    // 0x0023DC98: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0023DC9C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0023DCA0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0023DCA4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0023DCA8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0023DCAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023DCB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023DCB4: jr          $ra
    // 0x0023DCB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0023DCB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045A22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A22C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0045A230: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0045A234: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045A238: jr          $ra
    // 0x0045A23C: sw          $a1, 0x684($v0)
    MEM_W(0X684, ctx->r2) = ctx->r5;
    return;
    // 0x0045A23C: sw          $a1, 0x684($v0)
    MEM_W(0X684, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_004466A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040D70C:
    // 0x004466A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0040D754:
    // 0x004466A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004466A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004466AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004466B0: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x004466B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004466B8: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x004466BC: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004466C0: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x004466C4: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x004466C8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004466CC: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x004466D0: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x004466D4: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x004466D8: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x004466DC: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x004466E0: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x004466E4: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x004466E8: bne         $v1, $v0, L_00446700
    if (ctx->r3 != ctx->r2) {
        // 0x004466EC: nop
    
            goto L_00446700;
    }
    // 0x004466EC: nop

    // 0x004466F0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004466F4: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x004466F8: j           L_0040D70C
    // 0x004466FC: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    entry_0040D70C(rdram, ctx);
    return;
    // 0x004466FC: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_00446700:
    // 0x00446700: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446704: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x00446708: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x0044670C: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x00446710: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x00446714: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x00446718: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0044671C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00446720: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00446724: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00446728: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0044672C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00446730: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00446734: bne         $v1, $v0, L_00446748
    if (ctx->r3 != ctx->r2) {
        // 0x00446738: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_00446748;
    }
    // 0x00446738: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0044673C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00446740: j           L_0040D754
    // 0x00446744: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    entry_0040D754(rdram, ctx);
    return;
    // 0x00446744: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_00446748:
    // 0x00446748: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0044674C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00446750: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00446754: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00446758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0044675C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00446760: beq         $v0, $zero, L_0044677C
    if (ctx->r2 == 0) {
        // 0x00446764: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0044677C;
    }
    // 0x00446764: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x00446768: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0044676C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x00446770: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00446774: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00446778: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0044677C:
    // 0x0044677C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00446780: jal         0x00243414
    // 0x00446784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00446788: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0044678C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00446790: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00446794: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00446798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044679C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004467A0: jr          $ra
    // 0x004467A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004467A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025360C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025360C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00253610: bne         $v0, $a1, L_0025361C
    if (ctx->r2 != ctx->r5) {
        // 0x00253614: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025361C;
    }
    // 0x00253614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00253618: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
L_0025361C:
    // 0x0025361C: jr          $ra
    // 0x00253620: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    return;
    // 0x00253620: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00290EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290EC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00290EC8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x00290ECC: sh          $a1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r5;
    // 0x00290ED0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00290ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00290ED8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290EDC: jal         0x00291034
    // 0x00290EE0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00290EE0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00290EE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290EE8: jr          $ra
    // 0x00290EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00453E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0044C1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041320C:
    // 0x0044C1B0: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
L_0041321C:
    // 0x0044C1B4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_00413220:
    // 0x0044C1B8: beq         $v1, $v0, L_0044C1FC
    if (ctx->r3 == ctx->r2) {
        // 0x0044C1BC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0044C1FC;
    }
    // 0x0044C1BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0044C1C0: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x0044C1C4: beq         $v0, $zero, L_0044C1DC
    if (ctx->r2 == 0) {
        // 0x0044C1C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044C1DC;
    }
    // 0x0044C1C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044C1CC: beq         $v1, $v0, L_0044C1F0
    if (ctx->r3 == ctx->r2) {
        // 0x0044C1D0: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_0044C1F0;
    }
    // 0x0044C1D0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0044C1D4: j           L_00413220
    // 0x0044C1D8: nop

    entry_00413220(rdram, ctx);
    return;
    // 0x0044C1D8: nop

L_0044C1DC:
    // 0x0044C1DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0044C1E0: beq         $v1, $v0, L_0044C208
    if (ctx->r3 == ctx->r2) {
        // 0x0044C1E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0044C208;
    }
    // 0x0044C1E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0044C1E8: j           L_0041321C
    // 0x0044C1EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0041321C(rdram, ctx);
    return;
    // 0x0044C1EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0044C1F0:
    // 0x0044C1F0: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
    // 0x0044C1F4: j           L_0041320C
    // 0x0044C1F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    entry_0041320C(rdram, ctx);
    return;
    // 0x0044C1F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0044C1FC:
    // 0x0044C1FC: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
    // 0x0044C200: j           L_0041320C
    // 0x0044C204: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    entry_0041320C(rdram, ctx);
    return;
    // 0x0044C204: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0044C208:
    // 0x0044C208: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
    // 0x0044C20C: beql        $v1, $v0, L_0044C21C
    if (ctx->r3 == ctx->r2) {
            // 0x0044C210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_0044C21C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x0044C210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x0044C214: jr          $ra
    // 0x0044C218: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x0044C218: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_00423AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00423AB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423AB8: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x00423ABC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423AC0: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x00423AC4: jr          $ra
    // 0x00423AC8: nop

    return;
    // 0x00423AC8: nop

;}
RECOMP_FUNC void func_00266F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266F18: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00266F1C: bgez        $v0, L_00266F28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00266F20: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_00266F28;
    }
    // 0x00266F20: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00266F24: addiu       $a1, $v0, 0x7
    ctx->r5 = ADD32(ctx->r2, 0X7);
L_00266F28:
    // 0x00266F28: sra         $a1, $a1, 3
    ctx->r5 = S32(SIGNED(ctx->r5) >> 3);
    // 0x00266F2C: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x00266F30: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x00266F34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00266F38: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    // 0x00266F3C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00266F40: sllv        $v1, $v1, $a0
    ctx->r3 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x00266F44: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00266F48: jr          $ra
    // 0x00266F4C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    return;
    // 0x00266F4C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_0028932C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028932C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289338: jal         0x00266B80
    // 0x0028933C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0028933C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289340: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00289344: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x00289348: beq         $v1, $zero, L_00289360
    if (ctx->r3 == 0) {
        // 0x0028934C: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_00289360;
    }
    // 0x0028934C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00289350: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289354: lw          $v0, 0x6D68($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D68);
    // 0x00289358: bnel        $v0, $zero, L_00289360
    if (ctx->r2 != 0) {
        // 0x0028935C: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_00289360;
    }
    goto skip_0;
    // 0x0028935C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    skip_0:
L_00289360:
    // 0x00289360: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289364: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00289368: lwc1        $f1, 0x3FD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FD0);
    // 0x0028936C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289370: lwc1        $f0, -0x6204($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6204);
    // 0x00289374: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00289378: nop

    // 0x0028937C: bc1f        L_0028938C
    if (!c1cs) {
        // 0x00289380: nop
    
            goto L_0028938C;
    }
    // 0x00289380: nop

    // 0x00289384: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289388: sw          $zero, 0x6D6C($at)
    MEM_W(0X6D6C, ctx->r1) = 0;
L_0028938C:
    // 0x0028938C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289390: lw          $v0, 0x6D6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D6C);
    // 0x00289394: beq         $v0, $zero, L_002893A8
    if (ctx->r2 == 0) {
        // 0x00289398: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002893A8;
    }
    // 0x00289398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028939C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x002893A0: j           L_002893B0
    // 0x002893A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_002893B0;
    // 0x002893A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_002893A8:
    // 0x002893A8: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x002893AC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_002893B0:
    // 0x002893B0: jal         0x00288D3C
    // 0x002893B4: nop

    func_00288D3C(rdram, ctx);
        goto after_1;
    // 0x002893B4: nop

    after_1:
    // 0x002893B8: beq         $v0, $zero, L_002893C8
    if (ctx->r2 == 0) {
        // 0x002893BC: nop
    
            goto L_002893C8;
    }
    // 0x002893BC: nop

    // 0x002893C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002893C4: sw          $zero, 0x6D6C($at)
    MEM_W(0X6D6C, ctx->r1) = 0;
L_002893C8:
    // 0x002893C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002893CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002893D0: jr          $ra
    // 0x002893D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002893D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00273504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273504: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00273508: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0027350C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00273510: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00273514: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00273518: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0027351C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00273520: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00273524: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00273528: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0027352C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00273530: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00273534: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00273538: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0027353C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x00273540: jal         0x00276820
    // 0x00273544: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_00276820(rdram, ctx);
        goto after_0;
    // 0x00273544: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x00273548: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0027354C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00273550: jal         0x00276838
    // 0x00273554: sra         $fp, $v0, 16
    ctx->r30 = S32(SIGNED(ctx->r2) >> 16);
    func_00276838(rdram, ctx);
        goto after_1;
    // 0x00273554: sra         $fp, $v0, 16
    ctx->r30 = S32(SIGNED(ctx->r2) >> 16);
    after_1:
    // 0x00273558: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0027355C: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x00273560: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00273564: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x00273568: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0027356C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x00273570: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x00273574: addiu       $t0, $a0, 0xDC
    ctx->r8 = ADD32(ctx->r4, 0XDC);
    // 0x00273578: slt         $v0, $v0, $fp
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0027357C: beq         $v0, $zero, L_0027358C
    if (ctx->r2 == 0) {
        // 0x00273580: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_0027358C;
    }
    // 0x00273580: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00273584: j           L_002738FC
    // 0x00273588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_002738FC;
    // 0x00273588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0027358C:
    // 0x0027358C: jal         0x002714B0
    // 0x00273590: nop

    func_002714B0(rdram, ctx);
        goto after_2;
    // 0x00273590: nop

    after_2:
    // 0x00273594: jal         0x00276844
    // 0x00273598: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00276844(rdram, ctx);
        goto after_3;
    // 0x00273598: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_3:
    // 0x0027359C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002735A0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x002735A4: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x002735A8: beq         $v0, $v1, L_0027360C
    if (ctx->r2 == ctx->r3) {
        // 0x002735AC: nop
    
            goto L_0027360C;
    }
    // 0x002735AC: nop

    // 0x002735B0: jal         0x00211420
    // 0x002735B4: nop

    func_00211420(rdram, ctx);
        goto after_4;
    // 0x002735B4: nop

    after_4:
    // 0x002735B8: lui         $v1, 0x51EB
    ctx->r3 = S32(0X51EB << 16);
    // 0x002735BC: ori         $v1, $v1, 0x851F
    ctx->r3 = ctx->r3 | 0X851F;
    // 0x002735C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002735C4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002735C8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002735CC: sra         $v0, $s0, 31
    ctx->r2 = S32(SIGNED(ctx->r16) >> 31);
    // 0x002735D0: mfhi        $t0
    ctx->r8 = hi;
    // 0x002735D4: sra         $v1, $t0, 5
    ctx->r3 = S32(SIGNED(ctx->r8) >> 5);
    // 0x002735D8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x002735DC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002735E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002735E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002735E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002735EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002735F0: jal         0x00276844
    // 0x002735F4: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    func_00276844(rdram, ctx);
        goto after_5;
    // 0x002735F4: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    after_5:
    // 0x002735F8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002735FC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00273600: slt         $s0, $s0, $v0
    ctx->r16 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00273604: beq         $s0, $zero, L_0027370C
    if (ctx->r16 == 0) {
        // 0x00273608: nop
    
            goto L_0027370C;
    }
    // 0x00273608: nop

L_0027360C:
    // 0x0027360C: jal         0x00276898
    // 0x00273610: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00276898(rdram, ctx);
        goto after_6;
    // 0x00273610: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_6:
    // 0x00273614: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00273618: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027361C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00273620: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00273624: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    // 0x00273628: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027362C: sll         $a1, $t0, 16
    ctx->r5 = S32(ctx->r8 << 16);
    // 0x00273630: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x00273634: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00273638: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0027363C: sra         $s7, $v0, 16
    ctx->r23 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00273640: jal         0x00273370
    // 0x00273644: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_00273370(rdram, ctx);
        goto after_7;
    // 0x00273644: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_7:
    // 0x00273648: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0027364C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x00273650: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00273654: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x00273658: beq         $a0, $t0, L_0027370C
    if (ctx->r4 == ctx->r8) {
        // 0x0027365C: sll         $s4, $a0, 1
        ctx->r20 = S32(ctx->r4 << 1);
            goto L_0027370C;
    }
    // 0x0027365C: sll         $s4, $a0, 1
    ctx->r20 = S32(ctx->r4 << 1);
    // 0x00273660: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00273664: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00273668: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0027366C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00273670: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00273674: addu        $s1, $s2, $v0
    ctx->r17 = ADD32(ctx->r18, ctx->r2);
    // 0x00273678: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0027367C: bne         $a0, $v0, L_002736AC
    if (ctx->r4 != ctx->r2) {
        // 0x00273680: sll         $v1, $fp, 2
        ctx->r3 = S32(ctx->r30 << 2);
            goto L_002736AC;
    }
    // 0x00273680: sll         $v1, $fp, 2
    ctx->r3 = S32(ctx->r30 << 2);
    // 0x00273684: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x00273688: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0027368C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00273690: lw          $v1, 0x108($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X108);
    // 0x00273694: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x00273698: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0027369C: sw          $v1, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->r3;
    // 0x002736A0: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x002736A4: j           L_002737D8
    // 0x002736A8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
        goto L_002737D8;
    // 0x002736A8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_002736AC:
    // 0x002736AC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002736B0: sh          $s3, 0x102($v0)
    MEM_H(0X102, ctx->r2) = ctx->r19;
    // 0x002736B4: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x002736B8: lw          $v0, 0x7C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X7C);
    // 0x002736BC: addiu       $s6, $a2, 0x84
    ctx->r22 = ADD32(ctx->r6, 0X84);
    // 0x002736C0: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x002736C4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x002736C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002736CC: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x002736D0: jal         0x00293470
    // 0x002736D4: addiu       $s0, $a2, 0x7C
    ctx->r16 = ADD32(ctx->r6, 0X7C);
    func_00293470(rdram, ctx);
        goto after_8;
    // 0x002736D4: addiu       $s0, $a2, 0x7C
    ctx->r16 = ADD32(ctx->r6, 0X7C);
    after_8:
    // 0x002736D8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x002736DC: addu        $a0, $s4, $t0
    ctx->r4 = ADD32(ctx->r20, ctx->r8);
    // 0x002736E0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x002736E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002736E8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002736EC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x002736F0: bne         $v1, $t0, L_00273720
    if (ctx->r3 != ctx->r8) {
        // 0x002736F4: nop
    
            goto L_00273720;
    }
    // 0x002736F4: nop

    // 0x002736F8: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x002736FC: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    // 0x00273700: sh          $zero, 0x38($s1)
    MEM_H(0X38, ctx->r17) = 0;
    // 0x00273704: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00273708: sh          $v1, 0x102($v0)
    MEM_H(0X102, ctx->r2) = ctx->r3;
L_0027370C:
    // 0x0027370C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00273710: jal         0x00271514
    // 0x00273714: nop

    func_00271514(rdram, ctx);
        goto after_9;
    // 0x00273714: nop

    after_9:
    // 0x00273718: j           L_002738FC
    // 0x0027371C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_002738FC;
    // 0x0027371C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00273720:
    // 0x00273720: mtc1        $s7, $f0
    ctx->f0.u32l = ctx->r23;
    // 0x00273724: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00273728: lhu         $v0, 0x80($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X80);
    // 0x0027372C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273730: lwc1        $f1, -0x7EA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EA0);
    // 0x00273734: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00273738: sh          $v0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r2;
    // 0x0027373C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x00273740: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00273744: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x00273748: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0027374C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273750: lwc1        $f1, -0x7E9C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E9C);
    // 0x00273754: lw          $v0, 0x108($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X108);
    // 0x00273758: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x0027375C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00273760: sw          $v0, 0x108($v1)
    MEM_W(0X108, ctx->r3) = ctx->r2;
    // 0x00273764: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00273768: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x0027376C: lh          $v0, 0x2($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X2);
    // 0x00273770: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00273774: nop

    // 0x00273778: bc1t        L_002737A4
    if (c1cs) {
        // 0x0027377C: sw          $v0, 0xA0($s1)
        MEM_W(0XA0, ctx->r17) = ctx->r2;
            goto L_002737A4;
    }
    // 0x0027377C: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x00273780: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00273784: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00273788: j           L_002737BC
    // 0x0027378C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
        goto L_002737BC;
    // 0x0027378C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00273790:
    // 0x00273790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00273794: j           L_00273820
    // 0x00273798: sw          $v0, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r2;
        goto L_00273820;
    // 0x00273798: sw          $v0, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r2;
L_0027379C:
    // 0x0027379C: j           L_00273854
    // 0x002737A0: sw          $zero, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = 0;
        goto L_00273854;
    // 0x002737A0: sw          $zero, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = 0;
L_002737A4:
    // 0x002737A4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002737A8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002737AC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002737B0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x002737B4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x002737B8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_002737BC:
    // 0x002737BC: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x002737C0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x002737C4: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x002737C8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x002737CC: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x002737D0: jal         0x00293E30
    // 0x002737D4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    func_00293E30(rdram, ctx);
        goto after_10;
    // 0x002737D4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    after_10:
L_002737D8:
    // 0x002737D8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002737DC: lh          $v0, 0x2B8C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2B8C);
    // 0x002737E0: sw          $v0, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r2;
    // 0x002737E4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002737E8: lw          $a0, 0xA8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA8);
    // 0x002737EC: lw          $v0, 0x2BAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BAC);
    // 0x002737F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002737F4: sw          $zero, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = 0;
    // 0x002737F8: sw          $v0, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r2;
    // 0x002737FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_00273800:
    // 0x00273800: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00273808: lw          $v0, 0x2A34($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A34);
    // 0x0027380C: beq         $a0, $v0, L_00273790
    if (ctx->r4 == ctx->r2) {
        // 0x00273810: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00273790;
    }
    // 0x00273810: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00273814: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00273818: bne         $v0, $zero, L_00273800
    if (ctx->r2 != 0) {
        // 0x0027381C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00273800;
    }
    // 0x0027381C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_00273820:
    // 0x00273820: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00273824: lw          $a0, 0xA8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA8);
    // 0x00273828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027382C: sw          $v0, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = ctx->r2;
    // 0x00273830: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_00273834:
    // 0x00273834: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273838: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027383C: lw          $v0, 0x2A44($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A44);
    // 0x00273840: beq         $a0, $v0, L_0027379C
    if (ctx->r4 == ctx->r2) {
        // 0x00273844: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0027379C;
    }
    // 0x00273844: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00273848: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x0027384C: bne         $v0, $zero, L_00273834
    if (ctx->r2 != 0) {
        // 0x00273850: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00273834;
    }
    // 0x00273850: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_00273854:
    // 0x00273854: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00273858: lw          $v0, 0x2B90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B90);
    // 0x0027385C: sw          $zero, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = 0;
    // 0x00273860: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x00273864: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00273868: lwc1        $f0, 0x2BBC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BBC);
    // 0x0027386C: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x00273870: swc1        $f0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->f0.u32l;
    // 0x00273874: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x00273878: addiu       $v0, $zero, 0x7D00
    ctx->r2 = ADD32(0, 0X7D00);
    // 0x0027387C: sh          $t0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r8;
    // 0x00273880: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00273884: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00273888: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0027388C: lbu         $v1, 0xE($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XE);
    // 0x00273890: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00273894: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x00273898: sh          $fp, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r30;
    // 0x0027389C: lhu         $t0, 0x5A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X5A);
    // 0x002738A0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x002738A4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x002738A8: sh          $t0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r8;
    // 0x002738AC: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x002738B0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002738B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002738B8: lwc1        $f0, -0x7E98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E98);
    // 0x002738BC: lw          $v0, 0x104($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X104);
    // 0x002738C0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002738C4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x002738C8: jal         0x00276868
    // 0x002738CC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    func_00276868(rdram, ctx);
        goto after_11;
    // 0x002738CC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_11:
    // 0x002738D0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002738D4: jal         0x00276898
    // 0x002738D8: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
    func_00276898(rdram, ctx);
        goto after_12;
    // 0x002738D8: sb          $v0, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r2;
    after_12:
    // 0x002738DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002738E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002738E4: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x002738E8: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x002738EC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x002738F0: jal         0x00271514
    // 0x002738F4: nop

    func_00271514(rdram, ctx);
        goto after_13;
    // 0x002738F4: nop

    after_13:
    // 0x002738F8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002738FC:
    // 0x002738FC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00273900: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x00273904: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00273908: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0027390C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00273910: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00273914: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00273918: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0027391C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00273920: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00273924: jr          $ra
    // 0x00273928: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00273928: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00293F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293F08: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00293F0C: swc1        $f1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0025A1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A1D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A1D8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A1DC: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025A1E0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A1E4: addiu       $a2, $a2, -0x410
    ctx->r6 = ADD32(ctx->r6, -0X410);
    // 0x0025A1E8: jal         0x00245A98
    // 0x0025A1EC: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A1EC: nop

    after_0:
    // 0x0025A1F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A1F4: jr          $ra
    // 0x0025A1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00420F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420F34: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00420F38: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00420F3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00420F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00420F44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00420F48: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00420F4C: beq         $v0, $zero, L_00421198
    if (ctx->r2 == 0) {
        // 0x00420F50: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_00421198;
    }
    // 0x00420F50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00420F54: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00420F58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00420F5C: addu        $at, $at, $v0
    gpr jr_addend_00420F64 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00420F60: lw          $v0, 0x1450($at)
    ctx->r2 = ADD32(ctx->r1, 0X1450);
    // 0x00420F64: jr          $v0
    // 0x00420F68: nop

    switch (jr_addend_00420F64 >> 2) {
        case 0: goto L_0042106C; break;
        case 1: goto L_004210EC; break;
        case 2: goto L_004210EC; break;
        case 3: goto L_00420FEC; break;
        case 4: goto L_00420F6C; break;
        default: switch_error(__func__, 0x00420F64, 0x800C1450);
    }
    // 0x00420F68: nop

L_00420F6C:
    // 0x00420F6C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420F70: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420F74: beq         $v0, $zero, L_00420F8C
    if (ctx->r2 == 0) {
        // 0x00420F78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00420F8C;
    }
    // 0x00420F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00420F7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00420F80: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00420F84: j           L_00420F94
    // 0x00420F88: nop

        goto L_00420F94;
    // 0x00420F88: nop

L_00420F8C:
    // 0x00420F8C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00420F90: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00420F94:
    // 0x00420F94: jal         0x0041DD90
    // 0x00420F98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420F98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00420F9C: beq         $v0, $zero, L_00420FCC
    if (ctx->r2 == 0) {
        // 0x00420FA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420FCC;
    }
    // 0x00420FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420FA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420FA8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420FAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420FB0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00420FB4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00420FB8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00420FBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420FC0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420FC4: j           L_00421190
    // 0x00420FC8: nop

        goto L_00421190;
    // 0x00420FC8: nop

L_00420FCC:
    // 0x00420FCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420FD0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00420FD4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00420FD8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00420FDC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420FE0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420FE4: j           L_00421190
    // 0x00420FE8: nop

        goto L_00421190;
    // 0x00420FE8: nop

L_00420FEC:
    // 0x00420FEC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420FF0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420FF4: beq         $v0, $zero, L_0042100C
    if (ctx->r2 == 0) {
        // 0x00420FF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042100C;
    }
    // 0x00420FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00420FFC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421000: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421004: j           L_00421014
    // 0x00421008: nop

        goto L_00421014;
    // 0x00421008: nop

L_0042100C:
    // 0x0042100C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421010: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421014:
    // 0x00421014: jal         0x0041DD90
    // 0x00421018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0042101C: beq         $v0, $zero, L_0042104C
    if (ctx->r2 == 0) {
        // 0x00421020: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042104C;
    }
    // 0x00421020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421024: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421028: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0042102C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421030: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00421034: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00421038: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042103C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421040: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00421044: j           L_00421190
    // 0x00421048: nop

        goto L_00421190;
    // 0x00421048: nop

L_0042104C:
    // 0x0042104C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421050: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00421054: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00421058: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042105C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421060: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00421064: j           L_00421190
    // 0x00421068: nop

        goto L_00421190;
    // 0x00421068: nop

L_0042106C:
    // 0x0042106C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421070: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421074: beq         $v0, $zero, L_0042108C
    if (ctx->r2 == 0) {
        // 0x00421078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042108C;
    }
    // 0x00421078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042107C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421080: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421084: j           L_00421094
    // 0x00421088: nop

        goto L_00421094;
    // 0x00421088: nop

L_0042108C:
    // 0x0042108C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421090: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421094:
    // 0x00421094: jal         0x0041DD90
    // 0x00421098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_2;
    // 0x00421098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x0042109C: beq         $v0, $zero, L_004210CC
    if (ctx->r2 == 0) {
        // 0x004210A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004210CC;
    }
    // 0x004210A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004210A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210A8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210B0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210B4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210B8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210C0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004210C4: j           L_00421190
    // 0x004210C8: nop

        goto L_00421190;
    // 0x004210C8: nop

L_004210CC:
    // 0x004210CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004210D0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x004210D4: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004210D8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004210DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004210E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004210E4: j           L_00421190
    // 0x004210E8: nop

        goto L_00421190;
    // 0x004210E8: nop

L_004210EC:
    // 0x004210EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004210F0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004210F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004210F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004210FC: sw          $v1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r3;
    // 0x00421100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421104: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421108: beq         $v0, $zero, L_00421120
    if (ctx->r2 == 0) {
        // 0x0042110C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421120;
    }
    // 0x0042110C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421114: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x00421118: j           L_0042119C
    // 0x0042111C: nop

        goto L_0042119C;
    // 0x0042111C: nop

L_00421120:
    // 0x00421120: jal         0x0041DC5C
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041DC5C(rdram, ctx);
        goto after_3;
    // 0x00421124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00421128: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042112C: bne         $a1, $zero, L_00421138
    if (ctx->r5 != 0) {
        // 0x00421130: nop
    
            goto L_00421138;
    }
    // 0x00421130: nop

    // 0x00421134: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
L_00421138:
    // 0x00421138: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0042113C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421140: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421144: beq         $v1, $v0, L_0042115C
    if (ctx->r3 == ctx->r2) {
        // 0x00421148: nop
    
            goto L_0042115C;
    }
    // 0x00421148: nop

    // 0x0042114C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421150: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421154: bne         $v1, $v0, L_00421164
    if (ctx->r3 != ctx->r2) {
        // 0x00421158: nop
    
            goto L_00421164;
    }
    // 0x00421158: nop

L_0042115C:
    // 0x0042115C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421160: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_00421164:
    // 0x00421164: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00421168: beq         $v0, $zero, L_0042117C
    if (ctx->r2 == 0) {
        // 0x0042116C: nop
    
            goto L_0042117C;
    }
    // 0x0042116C: nop

    // 0x00421170: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00421174: j           L_00421184
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00421184;
    // 0x00421178: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_0042117C:
    // 0x0042117C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00421180: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00421184:
    // 0x00421184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00421188: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0042118C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
L_00421190:
    // 0x00421190: jal         0x00416644
    // 0x00421194: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x00421194: nop

    after_4:
L_00421198:
    // 0x00421198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042119C:
    // 0x0042119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004211A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004211A4: jr          $ra
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004211A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002569C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002569C8: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x002569CC: addu        $t3, $t4, $zero
    ctx->r11 = ADD32(ctx->r12, 0);
    // 0x002569D0: sll         $v0, $t3, 2
    ctx->r2 = S32(ctx->r11 << 2);
L_002569D4:
    // 0x002569D4: addu        $v1, $a0, $t3
    ctx->r3 = ADD32(ctx->r4, ctx->r11);
    // 0x002569D8: lb          $v1, 0x972($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X972);
    // 0x002569DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002569E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002569E4: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002569E8: beql        $v1, $zero, L_00256A54
    if (ctx->r3 == 0) {
        // 0x002569EC: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_00256A54;
    }
    goto skip_0;
    // 0x002569EC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_0:
    // 0x002569F0: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x002569F4: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
L_002569F8:
    // 0x002569F8: lw          $v1, 0x20($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X20);
    // 0x002569FC: beql        $v1, $zero, L_00256A54
    if (ctx->r3 == 0) {
        // 0x00256A00: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_00256A54;
    }
    goto skip_1;
    // 0x00256A00: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_1:
    // 0x00256A04: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00256A08: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x00256A0C: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x00256A10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00256A14: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x00256A18: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
    // 0x00256A1C: lh          $a3, 0x0($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X0);
    // 0x00256A20: lhu         $a1, 0x0($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X0);
    // 0x00256A24: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00256A28: bnel        $v0, $zero, L_00256A30
    if (ctx->r2 != 0) {
        // 0x00256A2C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_00256A30;
    }
    goto skip_2;
    // 0x00256A2C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    skip_2:
L_00256A30:
    // 0x00256A30: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00256A34: bnel        $v0, $zero, L_00256A3C
    if (ctx->r2 != 0) {
        // 0x00256A38: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_00256A3C;
    }
    goto skip_3;
    // 0x00256A38: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_3:
L_00256A3C:
    // 0x00256A3C: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x00256A40: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x00256A44: slti        $v0, $t2, 0x3
    ctx->r2 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x00256A48: bne         $v0, $zero, L_002569F8
    if (ctx->r2 != 0) {
        // 0x00256A4C: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_002569F8;
    }
    // 0x00256A4C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x00256A50: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_00256A54:
    // 0x00256A54: slti        $v0, $t3, 0x23
    ctx->r2 = SIGNED(ctx->r11) < 0X23 ? 1 : 0;
    // 0x00256A58: bne         $v0, $zero, L_002569D4
    if (ctx->r2 != 0) {
        // 0x00256A5C: sll         $v0, $t3, 2
        ctx->r2 = S32(ctx->r11 << 2);
            goto L_002569D4;
    }
    // 0x00256A5C: sll         $v0, $t3, 2
    ctx->r2 = S32(ctx->r11 << 2);
    // 0x00256A60: jr          $ra
    // 0x00256A64: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
    return;
    // 0x00256A64: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
;}
RECOMP_FUNC void func_0021F1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F1E8: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0021F1EC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021F1F0: jr          $ra
    // 0x0021F1F4: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    return;
    // 0x0021F1F4: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0042CF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CF88: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x0042CF8C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_0045C098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042311C:
    // 0x0045C098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0045C09C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045C0A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045C0A4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0045C0A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0045C0AC: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C0B0: jal         0x00284174
    // 0x0045C0B4: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0045C0B4: nop

    after_0:
    // 0x0045C0B8: beq         $v0, $zero, L_0045C0D4
    if (ctx->r2 == 0) {
        // 0x0045C0BC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0045C0D4;
    }
    // 0x0045C0BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0045C0C0: jal         0x00284240
    // 0x0045C0C4: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x0045C0C4: nop

    after_1:
    // 0x0045C0C8: beq         $v0, $zero, L_0045C0D4
    if (ctx->r2 == 0) {
        // 0x0045C0CC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0045C0D4;
    }
    // 0x0045C0CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045C0D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0045C0D4:
    // 0x0045C0D4: bne         $v1, $zero, L_0045C11C
    if (ctx->r3 != 0) {
        // 0x0045C0D8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045C11C;
    }
    // 0x0045C0D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045C0DC: bne         $s1, $zero, L_0045C0EC
    if (ctx->r17 != 0) {
        // 0x0045C0E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045C0EC;
    }
    // 0x0045C0E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C0E4: j           L_0042311C
    // 0x0045C0E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0042311C(rdram, ctx);
    return;
    // 0x0045C0E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045C0EC:
    // 0x0045C0EC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045C0F0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045C0F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045C0F8: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C0FC: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0045C100: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045C104: addiu       $a1, $a1, -0x49CC
    ctx->r5 = ADD32(ctx->r5, -0X49CC);
    // 0x0045C108: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C10C: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
    // 0x0045C110: jal         0x00416644
    // 0x0045C114: nop

    func_00416644(rdram, ctx);
        goto after_2;
    // 0x0045C114: nop

    after_2:
    // 0x0045C118: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045C11C:
    // 0x0045C11C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0045C120: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0045C124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045C128: jr          $ra
    // 0x0045C12C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0045C12C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00421250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421250: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421254: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x00421258: jr          $ra
    // 0x0042125C: nop

    return;
    // 0x0042125C: nop

;}
RECOMP_FUNC void func_0042F958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F95C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042F960: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0042F964: addiu       $s0, $s0, 0x56B0
    ctx->r16 = ADD32(ctx->r16, 0X56B0);
    // 0x0042F968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042F96C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0042F970: bne         $v0, $zero, L_0042F988
    if (ctx->r2 != 0) {
        // 0x0042F974: addiu       $a0, $s0, 0x194
        ctx->r4 = ADD32(ctx->r16, 0X194);
            goto L_0042F988;
    }
    // 0x0042F974: addiu       $a0, $s0, 0x194
    ctx->r4 = ADD32(ctx->r16, 0X194);
    // 0x0042F978: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F97C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0042F980: bgtz        $v0, L_0042F994
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042F984: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0042F994;
    }
    // 0x0042F984: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_0042F988:
    // 0x0042F988: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F98C: jalr        $v0
    // 0x0042F990: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0042F990: nop

    after_0:
L_0042F994:
    // 0x0042F994: lw          $v0, 0x194($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X194);
    // 0x0042F998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042F99C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042F9A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042F9A4: sw          $v0, -0x52F0($at)
    MEM_W(-0X52F0, ctx->r1) = ctx->r2;
    // 0x0042F9A8: jr          $ra
    // 0x0042F9AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F9AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00421654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421654: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x00421658: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0042165C: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00421660: beq         $v1, $v0, L_00421678
    if (ctx->r3 == ctx->r2) {
        // 0x00421664: nop
    
            goto L_00421678;
    }
    // 0x00421664: nop

    // 0x00421668: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0042166C: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x00421670: bne         $v1, $v0, L_00421688
    if (ctx->r3 != ctx->r2) {
            // 0x00421674: nop

    func_00421688(rdram, ctx);
    return;
    }
    // 0x00421674: nop

L_00421678:
    // 0x00421678: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042167C: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00421680: jr          $ra
    // 0x00421684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00421684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00245D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245D50: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00245D54: beq         $v0, $zero, L_00245E40
    if (ctx->r2 == 0) {
        // 0x00245D58: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_00245E40;
    }
    // 0x00245D58: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00245D5C: bne         $a2, $zero, L_00245D78
    if (ctx->r6 != 0) {
        // 0x00245D60: nop
    
            goto L_00245D78;
    }
    // 0x00245D60: nop

    // 0x00245D64: lb          $v1, 0x94($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X94);
    // 0x00245D68: bne         $v1, $zero, L_00245E40
    if (ctx->r3 != 0) {
        // 0x00245D6C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00245E40;
    }
    // 0x00245D6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00245D70: jr          $ra
    // 0x00245D74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x00245D74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00245D78:
    // 0x00245D78: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    // 0x00245D7C: beq         $a2, $v0, L_00245E40
    if (ctx->r6 == ctx->r2) {
        // 0x00245D80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00245E40;
    }
    // 0x00245D80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00245D84: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00245D88: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00245D8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00245D90: beq         $v1, $v0, L_00245E40
    if (ctx->r3 == ctx->r2) {
        // 0x00245D94: nop
    
            goto L_00245E40;
    }
    // 0x00245D94: nop

    // 0x00245D98: lhu         $v1, 0xB8($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0XB8);
    // 0x00245D9C: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    // 0x00245DA0: beq         $v1, $v0, L_00245E40
    if (ctx->r3 == ctx->r2) {
        // 0x00245DA4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_00245E40;
    }
    // 0x00245DA4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00245DA8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00245DAC: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00245DB0: bne         $v0, $zero, L_00245E40
    if (ctx->r2 != 0) {
        // 0x00245DB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00245E40;
    }
    // 0x00245DB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00245DB8: lw          $v0, 0xD4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD4);
    // 0x00245DBC: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00245DC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00245DC4: beq         $v0, $zero, L_00245E20
    if (ctx->r2 == 0) {
        // 0x00245DC8: nop
    
            goto L_00245E20;
    }
    // 0x00245DC8: nop

    // 0x00245DCC: lw          $a2, 0x1A8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1A8);
    // 0x00245DD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00245DD4: lwc1        $f1, 0xAAC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XAAC);
    // 0x00245DD8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00245DDC: nop

    // 0x00245DE0: bc1f        L_00245E00
    if (!c1cs) {
        // 0x00245DE4: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00245E00;
    }
    // 0x00245DE4: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00245DE8: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x00245DEC: bne         $v1, $v0, L_00245E18
    if (ctx->r3 != ctx->r2) {
        // 0x00245DF0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_00245E18;
    }
    // 0x00245DF0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00245DF4: lh          $v1, 0x996($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X996);
    // 0x00245DF8: bne         $v1, $v0, L_00245E18
    if (ctx->r3 != ctx->r2) {
        // 0x00245DFC: nop
    
            goto L_00245E18;
    }
    // 0x00245DFC: nop

L_00245E00:
    // 0x00245E00: lw          $v0, 0xB38($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB38);
    // 0x00245E04: bne         $v0, $a0, L_00245E20
    if (ctx->r2 != ctx->r4) {
        // 0x00245E08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00245E20;
    }
    // 0x00245E08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00245E0C: lw          $v1, 0xB2C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XB2C);
    // 0x00245E10: bne         $v1, $v0, L_00245E20
    if (ctx->r3 != ctx->r2) {
        // 0x00245E14: nop
    
            goto L_00245E20;
    }
    // 0x00245E14: nop

L_00245E18:
    // 0x00245E18: jr          $ra
    // 0x00245E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00245E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245E20:
    // 0x00245E20: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x00245E24: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00245E28: beq         $v0, $zero, L_00245E3C
    if (ctx->r2 == 0) {
        // 0x00245E2C: addiu       $v1, $zero, 0xCA
        ctx->r3 = ADD32(0, 0XCA);
            goto L_00245E3C;
    }
    // 0x00245E2C: addiu       $v1, $zero, 0xCA
    ctx->r3 = ADD32(0, 0XCA);
    // 0x00245E30: lhu         $a0, 0xB8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB8);
    // 0x00245E34: bne         $a0, $v1, L_00245E40
    if (ctx->r4 != ctx->r3) {
        // 0x00245E38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00245E40;
    }
    // 0x00245E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245E3C:
    // 0x00245E3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00245E40:
    // 0x00245E40: jr          $ra
    // 0x00245E44: nop

    return;
    // 0x00245E44: nop

;}
RECOMP_FUNC void func_00253FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253FFC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00254000: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00254004: bne         $v0, $zero, L_0025403C
    if (ctx->r2 != 0) {
        // 0x00254008: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025403C;
    }
    // 0x00254008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025400C: lw          $a0, 0x51C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X51C);
    // 0x00254010: beq         $a0, $zero, L_0025403C
    if (ctx->r4 == 0) {
        // 0x00254014: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025403C;
    }
    // 0x00254014: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00254018: lw          $a0, 0x53C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X53C);
    // 0x0025401C: beq         $a0, $zero, L_0025403C
    if (ctx->r4 == 0) {
        // 0x00254020: nop
    
            goto L_0025403C;
    }
    // 0x00254020: nop

    // 0x00254024: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00254028: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0025402C: addiu       $v1, $v1, -0x69C0
    ctx->r3 = ADD32(ctx->r3, -0X69C0);
    // 0x00254030: bne         $a0, $v1, L_0025403C
    if (ctx->r4 != ctx->r3) {
        // 0x00254034: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025403C;
    }
    // 0x00254034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254038: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025403C:
    // 0x0025403C: jr          $ra
    // 0x00254040: nop

    return;
    // 0x00254040: nop

;}
RECOMP_FUNC void func_0029553C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029553C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00295540: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00295544: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00295548: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029554C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00295550: lui         $a1, 0x29
    ctx->r5 = S32(0X29 << 16);
    // 0x00295554: addiu       $a1, $a1, 0x5690
    ctx->r5 = ADD32(ctx->r5, 0X5690);
    // 0x00295558: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x0029555C: addiu       $a2, $a2, 0x6118
    ctx->r6 = ADD32(ctx->r6, 0X6118);
    // 0x00295560: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00295564: jal         0x00296340
    // 0x00295568: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x00295568: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x0029556C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00295570: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00295574: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00295578: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0029557C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x00295580: jal         0x002912A0
    // 0x00295584: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_1;
    // 0x00295584: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x00295588: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0029558C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00295590: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x00295594: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x00295598: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x0029559C: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x002955A0: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x002955A4: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x002955A8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x002955AC: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x002955B0: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x002955B4: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x002955B8: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x002955BC: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x002955C0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x002955C4: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x002955C8: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x002955CC: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x002955D0: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x002955D4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x002955D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002955DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002955E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002955E4: jr          $ra
    // 0x002955E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002955E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040B310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B310: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0040B314: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0040B318: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040B31C: jr          $ra
    // 0x0040B320: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    return;
    // 0x0040B320: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00281E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281E4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00281E50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281E54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00281E58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00281E5C: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x00281E60: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x00281E64: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x00281E68: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00281E6C: jal         0x00284188
    // 0x00281E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00281E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00281E74: beq         $v0, $zero, L_00281E90
    if (ctx->r2 == 0) {
        // 0x00281E78: nop
    
            goto L_00281E90;
    }
    // 0x00281E78: nop

    // 0x00281E7C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00281E80: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00281E84: jal         0x00220A1C
    // 0x00281E88: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_00220A1C(rdram, ctx);
        goto after_1;
    // 0x00281E88: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
    // 0x00281E8C: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
L_00281E90:
    // 0x00281E90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00281E94: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00281E98: lw          $s1, 0x58($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X58);
    // 0x00281E9C: lwc1        $f21, 0x38($s0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x00281EA0: lwc1        $f23, 0x3C($s0)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r16, 0X3C);
    // 0x00281EA4: lwc1        $f20, 0x40($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X40);
    // 0x00281EA8: lwc1        $f22, 0x44($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00281EAC: beq         $s1, $zero, L_00281F20
    if (ctx->r17 == 0) {
        // 0x00281EB0: sw          $v0, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->r2;
            goto L_00281F20;
    }
    // 0x00281EB0: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x00281EB4: jal         0x00284188
    // 0x00281EB8: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x00281EB8: nop

    after_2:
    // 0x00281EBC: bne         $v0, $zero, L_00281F20
    if (ctx->r2 != 0) {
        // 0x00281EC0: nop
    
            goto L_00281F20;
    }
    // 0x00281EC0: nop

    // 0x00281EC4: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00281EC8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00281ECC: jal         0x0026BE60
    // 0x00281ED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026BE60(rdram, ctx);
        goto after_3;
    // 0x00281ED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00281ED4: add.s       $f1, $f23, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f23.fl + ctx->f22.fl;
    // 0x00281ED8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00281EDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281EE0: lwc1        $f0, -0x63B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63B0);
    // 0x00281EE4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00281EE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281EEC: lwc1        $f0, -0x63AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63AC);
    // 0x00281EF0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00281EF4: nop

    // 0x00281EF8: bc1f        L_00281F20
    if (!c1cs) {
        // 0x00281EFC: nop
    
            goto L_00281F20;
    }
    // 0x00281EFC: nop

    // 0x00281F00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281F04: lwc1        $f0, -0x63A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63A8);
    // 0x00281F08: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00281F0C: nop

    // 0x00281F10: bc1f        L_00281F20
    if (!c1cs) {
        // 0x00281F14: nop
    
            goto L_00281F20;
    }
    // 0x00281F14: nop

    // 0x00281F18: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00281F1C: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
L_00281F20:
    // 0x00281F20: jal         0x00284188
    // 0x00281F24: nop

    func_00284188(rdram, ctx);
        goto after_4;
    // 0x00281F24: nop

    after_4:
    // 0x00281F28: beq         $v0, $zero, L_00281F3C
    if (ctx->r2 == 0) {
        // 0x00281F2C: nop
    
            goto L_00281F3C;
    }
    // 0x00281F2C: nop

    // 0x00281F30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00281F34: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00281F38: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
L_00281F3C:
    // 0x00281F3C: lwc1        $f1, 0x5C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X5C);
    // 0x00281F40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00281F44: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00281F48: nop

    // 0x00281F4C: bc1f        L_00281F60
    if (!c1cs) {
        // 0x00281F50: nop
    
            goto L_00281F60;
    }
    // 0x00281F50: nop

    // 0x00281F54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00281F58: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00281F5C: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
L_00281F60:
    // 0x00281F60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00281F64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281F68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281F6C: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x00281F70: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x00281F74: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00281F78: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00281F7C: jr          $ra
    // 0x00281F80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00281F80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025A8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A8EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A8F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A8F4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A8F8: lhu         $a3, 0x8C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8C);
    // 0x0025A8FC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A900: addiu       $a2, $a2, 0x1E0
    ctx->r6 = ADD32(ctx->r6, 0X1E0);
    // 0x0025A904: jal         0x00245A98
    // 0x0025A908: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A908: nop

    after_0:
    // 0x0025A90C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A910: jr          $ra
    // 0x0025A914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0023C594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C594: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0023C598: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0023C59C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0023C5A0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023C5A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0023C5A8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023C5AC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023C5B0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0023C5B4: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x0023C5B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023C5BC: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x0023C5C0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0023C5C4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x0023C5C8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x0023C5CC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
L_0023C5D0:
    // 0x0023C5D0: beq         $s0, $s3, L_0023C5DC
    if (ctx->r16 == ctx->r19) {
        // 0x0023C5D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023C5DC;
    }
    // 0x0023C5D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023C5D8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_0023C5DC:
    // 0x0023C5DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C5E0: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x0023C5E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0023C5E8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0023C5EC: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x0023C5F0: jal         0x0020EF2C
    // 0x0023C5F4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023C5F4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0023C5F8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023C5FC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x0023C600: jal         0x0020EF2C
    // 0x0023C604: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023C604: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0023C608: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023C60C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0023C610: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C614: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0023C618: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0023C61C: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023C620: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023C624: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0023C628: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023C62C: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0023C630: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023C634: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x0023C638: nop

    // 0x0023C63C: bc1t        L_0023C658
    if (c1cs) {
        // 0x0023C640: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023C658;
    }
    // 0x0023C640: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023C644: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0023C648: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0023C64C: bne         $v0, $zero, L_0023C5D0
    if (ctx->r2 != 0) {
        // 0x0023C650: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_0023C5D0;
    }
    // 0x0023C650: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0023C654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023C658:
    // 0x0023C658: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0023C65C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0023C660: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023C664: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023C668: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023C66C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0023C670: jr          $ra
    // 0x0023C674: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0023C674: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00267E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267E18: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00267E1C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00267E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267E24: beq         $a0, $v0, L_00267E38
    if (ctx->r4 == ctx->r2) {
        // 0x00267E28: nop
    
            goto L_00267E38;
    }
    // 0x00267E28: nop

    // 0x00267E2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00267E30: bne         $a0, $v0, L_00267E44
    if (ctx->r4 != ctx->r2) {
            // 0x00267E34: nop

    func_00267E44(rdram, ctx);
    return;
    }
    // 0x00267E34: nop

L_00267E38:
    // 0x00267E38: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00267E3C: jr          $ra
    // 0x00267E40: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    return;
    // 0x00267E40: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
;}
RECOMP_FUNC void func_00224A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224A6C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00224A70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00224A74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00224A78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224A7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224A80: lbu         $s2, 0x13($a1)
    ctx->r18 = MEM_BU(ctx->r5, 0X13);
    // 0x00224A84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00224A88: lw          $a0, 0x6C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X6C);
    // 0x00224A8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00224A90: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00224A94: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00224A98: jal         0x002017D4
    // 0x00224A9C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224A9C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00224AA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224AA4: jal         0x002017D4
    // 0x00224AA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224AA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224AAC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224AB0: jal         0x002017D4
    // 0x00224AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x00224AB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224AC0: jal         0x002017D4
    // 0x00224AC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224AC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224ACC: jal         0x00201818
    // 0x00224AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00224AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224AD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224AD8: jal         0x002017D4
    // 0x00224ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00224AE0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00224AE4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00224AE8: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x00224AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00224AF0: beq         $s1, $zero, L_00224B1C
    if (ctx->r17 == 0) {
        // 0x00224AF4: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00224B1C;
    }
    // 0x00224AF4: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224AF8: bgez        $s2, L_00224B04
    if (SIGNED(ctx->r18) >= 0) {
        // 0x00224AFC: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_00224B04;
    }
    // 0x00224AFC: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x00224B00: addiu       $v1, $s2, 0x7
    ctx->r3 = ADD32(ctx->r18, 0X7);
L_00224B04:
    // 0x00224B04: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x00224B08: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x00224B0C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00224B10: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00224B14: j           L_00224B40
    // 0x00224B18: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_00224B40;
    // 0x00224B18: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_00224B1C:
    // 0x00224B1C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00224B20: bltzl       $v0, L_00224B28
    if (SIGNED(ctx->r2) < 0) {
        // 0x00224B24: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_00224B28;
    }
    goto skip_0;
    // 0x00224B24: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_0:
L_00224B28:
    // 0x00224B28: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00224B2C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00224B30: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00224B34: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x00224B38: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00224B3C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_00224B40:
    // 0x00224B40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00224B44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00224B48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224B4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224B50: jr          $ra
    // 0x00224B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041B37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B37C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B380: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B384: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0041B388: beq         $v0, $zero, L_0041B39C
    if (ctx->r2 == 0) {
        // 0x0041B38C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B39C;
    }
    // 0x0041B38C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B390: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B394: j           L_0041B3AC
    // 0x0041B398: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B3AC;
    // 0x0041B398: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B39C:
    // 0x0041B39C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B3A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B3A4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B3A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B3AC:
    // 0x0041B3AC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B3B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B3B4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B3B8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0041B3BC: beq         $v0, $zero, L_0041B3D4
    if (ctx->r2 == 0) {
        // 0x0041B3C0: nop
    
            goto L_0041B3D4;
    }
    // 0x0041B3C0: nop

    // 0x0041B3C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B3C8: addiu       $v0, $v0, 0x5854
    ctx->r2 = ADD32(ctx->r2, 0X5854);
    // 0x0041B3CC: j           L_0041B3E0
    // 0x0041B3D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B3E0;
    // 0x0041B3D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B3D4:
    // 0x0041B3D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B3D8: addiu       $v0, $v0, 0x5870
    ctx->r2 = ADD32(ctx->r2, 0X5870);
    // 0x0041B3DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B3E0:
    // 0x0041B3E0: jr          $ra
    // 0x0041B3E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B3E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026E928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026E92C: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0026E930: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0026E934: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0026E938: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026E93C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026E940: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026E944: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026E948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0026E94C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026E950: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x0026E954: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x0026E958: sw          $s2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r18;
    // 0x0026E95C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0026E960: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0026E964: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x0026E968: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x0026E96C: sw          $t0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r8;
    // 0x0026E970: sw          $t1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r9;
    // 0x0026E974: swc1        $f0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
    // 0x0026E978: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026E97C: beq         $v0, $zero, L_0026E988
    if (ctx->r2 == 0) {
        // 0x0026E980: sw          $v0, 0x38($s1)
        MEM_W(0X38, ctx->r17) = ctx->r2;
            goto L_0026E988;
    }
    // 0x0026E980: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x0026E984: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
L_0026E988:
    // 0x0026E988: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0026E98C: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0026E990: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x0026E994: jal         0x00225D94
    // 0x0026E998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00225D94(rdram, ctx);
        goto after_0;
    // 0x0026E998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0026E99C: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    // 0x0026E9A0: jal         0x0026EE30
    // 0x0026E9A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0026EE30(rdram, ctx);
        goto after_1;
    // 0x0026E9A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0026E9A8: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    // 0x0026E9AC: jal         0x00225D94
    // 0x0026E9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00225D94(rdram, ctx);
        goto after_2;
    // 0x0026E9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0026E9B4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x0026E9B8: jal         0x0026EE30
    // 0x0026E9BC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0026EE30(rdram, ctx);
        goto after_3;
    // 0x0026E9BC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0026E9C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0026E9C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026E9C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026E9CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026E9D0: jr          $ra
    // 0x0026E9D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026E9D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045AA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AA0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045AA10: beq         $a1, $v0, L_0045AA40
    if (ctx->r5 == ctx->r2) {
            // 0x0045AA14: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    func_0045AA40(rdram, ctx);
    return;
    }
    // 0x0045AA14: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x0045AA18: bne         $v0, $zero, L_0045AA30
    if (ctx->r2 != 0) {
        // 0x0045AA1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0045AA30;
    }
    // 0x0045AA1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045AA20: beq         $a1, $v0, L_0045AA50
    if (ctx->r5 == ctx->r2) {
            // 0x0045AA24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_0045AA50(rdram, ctx);
    return;
    }
    // 0x0045AA24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045AA28: beq         $a1, $v0, L_0045AA60
    if (ctx->r5 == ctx->r2) {
            // 0x0045AA2C: nop

    func_0045AA60(rdram, ctx);
    return;
    }
    // 0x0045AA2C: nop

L_0045AA30:
    // 0x0045AA30: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045AA34: addiu       $v0, $v0, -0x5460
    ctx->r2 = ADD32(ctx->r2, -0X5460);
    // 0x0045AA38: jr          $ra
    // 0x0045AA3C: nop

    return;
    // 0x0045AA3C: nop

;}
RECOMP_FUNC void func_00231778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231778: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x0023177C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00231780: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00231784: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00231788: beq         $v0, $zero, L_002317B8
    if (ctx->r2 == 0) {
        // 0x0023178C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002317B8;
    }
    // 0x0023178C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00231790: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x00231794: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00231798: beq         $v0, $zero, L_002317A8
    if (ctx->r2 == 0) {
        // 0x0023179C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002317A8;
    }
    // 0x0023179C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002317A0: j           L_002317B8
    // 0x002317A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_002317B8;
    // 0x002317A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_002317A8:
    // 0x002317A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002317AC: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x002317B0: beql        $v1, $v0, L_002317B8
    if (ctx->r3 == ctx->r2) {
        // 0x002317B4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_002317B8;
    }
    goto skip_0;
    // 0x002317B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
L_002317B8:
    // 0x002317B8: jr          $ra
    // 0x002317BC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x002317BC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_0029DFC0(uint8_t* rdram, recomp_context* ctx) {
    // osGetCount: the original body is `mfc0 v0, C0_COUNT`, which cannot run
    // on the host.  This counter drives osGetTime and cinematic frame deltas.
    extern void osGetCount_recomp(uint8_t* rdram, recomp_context* ctx);
    osGetCount_recomp(rdram, ctx);
}
RECOMP_FUNC void func_00226724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226724: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00226728: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0022672C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00226730: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226734: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00226738: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0022673C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00226740: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226744: lw          $s2, 0x14A8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X14A8);
    // 0x00226748: blez        $s2, L_00226774
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0022674C: addiu       $a1, $s3, 0x14AC
        ctx->r5 = ADD32(ctx->r19, 0X14AC);
            goto L_00226774;
    }
    // 0x0022674C: addiu       $a1, $s3, 0x14AC
    ctx->r5 = ADD32(ctx->r19, 0X14AC);
    // 0x00226750: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00226754:
    // 0x00226754: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00226758: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0022675C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00226760: jal         0x002051F4
    // 0x00226764: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x00226764: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00226768: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0022676C: bne         $v0, $zero, L_00226754
    if (ctx->r2 != 0) {
        // 0x00226770: nop
    
            goto L_00226754;
    }
    // 0x00226770: nop

L_00226774:
    // 0x00226774: sw          $zero, 0x8EC($s3)
    MEM_W(0X8EC, ctx->r19) = 0;
    // 0x00226778: sw          $zero, 0xBF4($s3)
    MEM_W(0XBF4, ctx->r19) = 0;
    // 0x0022677C: sw          $zero, 0x1064($s3)
    MEM_W(0X1064, ctx->r19) = 0;
    // 0x00226780: sw          $zero, 0x14A8($s3)
    MEM_W(0X14A8, ctx->r19) = 0;
    // 0x00226784: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00226788: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0022678C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00226790: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226798: jr          $ra
    // 0x0022679C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0022679C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045FD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FD8C: addiu       $v0, $a0, 0xFF
    ctx->r2 = ADD32(ctx->r4, 0XFF);
    // 0x0045FD90: jr          $ra
    // 0x0045FD94: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    return;
    // 0x0045FD94: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
;}
RECOMP_FUNC void func_00424A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424A5C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021A7EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021A7EC: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x0021A7F0: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x0021A7F4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0021A7F8: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x0021A7FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0021A800: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x0021A804: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x0021A808: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x0021A80C: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x0021A810: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x0021A814: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x0021A818: bne         $v1, $v0, L_0021A86C
    if (ctx->r3 != ctx->r2) {
        // 0x0021A81C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0021A86C;
    }
    // 0x0021A81C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021A820: lb          $v0, 0xE3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE3);
    // 0x0021A824: bne         $v0, $zero, L_0021A830
    if (ctx->r2 != 0) {
        // 0x0021A828: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021A830;
    }
    // 0x0021A828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A82C: sb          $v0, 0xE2($s1)
    MEM_B(0XE2, ctx->r17) = ctx->r2;
L_0021A830:
    // 0x0021A830: lb          $v0, 0xF7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF7);
    // 0x0021A834: bne         $v0, $zero, L_0021A840
    if (ctx->r2 != 0) {
        // 0x0021A838: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021A840;
    }
    // 0x0021A838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A83C: sb          $v0, 0xF6($s1)
    MEM_B(0XF6, ctx->r17) = ctx->r2;
L_0021A840:
    // 0x0021A840: lb          $v0, 0xE3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE3);
    // 0x0021A844: bne         $v0, $zero, L_0021A85C
    if (ctx->r2 != 0) {
        // 0x0021A848: nop
    
            goto L_0021A85C;
    }
    // 0x0021A848: nop

    // 0x0021A84C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0021A850: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0021A854: beq         $v0, $zero, L_0021ABA4
    if (ctx->r2 == 0) {
        // 0x0021A858: nop
    
            goto L_0021ABA4;
    }
    // 0x0021A858: nop

L_0021A85C:
    // 0x0021A85C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0021A860: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0021A864: beq         $v0, $zero, L_0021ABA4
    if (ctx->r2 == 0) {
        // 0x0021A868: nop
    
            goto L_0021ABA4;
    }
    // 0x0021A868: nop

L_0021A86C:
    // 0x0021A86C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A870: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x0021A874: lh          $a2, 0xBA($s1)
    ctx->r6 = MEM_H(ctx->r17, 0XBA);
    // 0x0021A878: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021A87C: addiu       $v0, $v0, 0x5AFC
    ctx->r2 = ADD32(ctx->r2, 0X5AFC);
    // 0x0021A880: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021A884: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x0021A888: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021A88C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021A890: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0021A894: lw          $a1, 0xA8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA8);
    // 0x0021A898: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0021A89C: addiu       $a2, $a2, 0xF
    ctx->r6 = ADD32(ctx->r6, 0XF);
    // 0x0021A8A0: jal         0x0020367C
    // 0x0021A8A4: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021A8A4: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    after_0:
    // 0x0021A8A8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0021A8AC: beq         $s4, $zero, L_0021ABA4
    if (ctx->r20 == 0) {
        // 0x0021A8B0: addiu       $s3, $s1, 0xD8
        ctx->r19 = ADD32(ctx->r17, 0XD8);
            goto L_0021ABA4;
    }
    // 0x0021A8B0: addiu       $s3, $s1, 0xD8
    ctx->r19 = ADD32(ctx->r17, 0XD8);
    // 0x0021A8B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021A8B8: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x0021A8BC: addiu       $s2, $s1, 0xEC
    ctx->r18 = ADD32(ctx->r17, 0XEC);
    // 0x0021A8C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021A8C4: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0021A8C8: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0021A8CC: lw          $a2, 0xA8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XA8);
    // 0x0021A8D0: jal         0x00218B10
    // 0x0021A8D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00218B10(rdram, ctx);
        goto after_1;
    // 0x0021A8D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0021A8D8: jal         0x00219968
    // 0x0021A8DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00219968(rdram, ctx);
        goto after_2;
    // 0x0021A8DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0021A8E0: beq         $v0, $zero, L_0021AB98
    if (ctx->r2 == 0) {
        // 0x0021A8E4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021AB98;
    }
    // 0x0021A8E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021A8E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0021A8EC: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    // 0x0021A8F0: jal         0x00218DCC
    // 0x0021A8F4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_00218DCC(rdram, ctx);
        goto after_3;
    // 0x0021A8F4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0021A8F8: lwc1        $f20, 0xA4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x0021A8FC: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0021A900: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0021A904: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0021A908: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0021A90C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x0021A910: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x0021A914: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x0021A918: beq         $v0, $zero, L_0021A988
    if (ctx->r2 == 0) {
        // 0x0021A91C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0021A988;
    }
    // 0x0021A91C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021A920: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x0021A924: beq         $v1, $v0, L_0021A988
    if (ctx->r3 == ctx->r2) {
        // 0x0021A928: nop
    
            goto L_0021A988;
    }
    // 0x0021A928: nop

    // 0x0021A92C: jal         0x00219994
    // 0x0021A930: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00219994(rdram, ctx);
        goto after_4;
    // 0x0021A930: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0021A934: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021A938: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x0021A93C: beq         $v0, $zero, L_0021A978
    if (ctx->r2 == 0) {
        // 0x0021A940: nop
    
            goto L_0021A978;
    }
    // 0x0021A940: nop

    // 0x0021A944: lw          $v1, 0xD4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD4);
    // 0x0021A948: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x0021A94C: beq         $v0, $zero, L_0021A978
    if (ctx->r2 == 0) {
        // 0x0021A950: ori         $v0, $v1, 0x400
        ctx->r2 = ctx->r3 | 0X400;
            goto L_0021A978;
    }
    // 0x0021A950: ori         $v0, $v1, 0x400
    ctx->r2 = ctx->r3 | 0X400;
    // 0x0021A954: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x0021A958: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x0021A95C: sw          $zero, 0x108($s1)
    MEM_W(0X108, ctx->r17) = 0;
    // 0x0021A960: sh          $v0, 0x100($s1)
    MEM_H(0X100, ctx->r17) = ctx->r2;
    // 0x0021A964: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x0021A968: sb          $v0, 0x10C($s1)
    MEM_B(0X10C, ctx->r17) = ctx->r2;
    // 0x0021A96C: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x0021A970: j           L_0021A988
    // 0x0021A974: sb          $v0, 0x10D($s1)
    MEM_B(0X10D, ctx->r17) = ctx->r2;
        goto L_0021A988;
    // 0x0021A974: sb          $v0, 0x10D($s1)
    MEM_B(0X10D, ctx->r17) = ctx->r2;
L_0021A978:
    // 0x0021A978: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0021A97C: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x0021A980: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021A984: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0021A988:
    // 0x0021A988: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0021A98C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0021A990: beq         $v0, $zero, L_0021AAD8
    if (ctx->r2 == 0) {
        // 0x0021A994: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0021AAD8;
    }
    // 0x0021A994: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021A998: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021A99C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021A9A0: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0021A9A4: lw          $a2, 0xA8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XA8);
    // 0x0021A9A8: jal         0x00218B10
    // 0x0021A9AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00218B10(rdram, ctx);
        goto after_5;
    // 0x0021A9AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x0021A9B0: jal         0x00219968
    // 0x0021A9B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00219968(rdram, ctx);
        goto after_6;
    // 0x0021A9B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0021A9B8: beq         $v0, $zero, L_0021AACC
    if (ctx->r2 == 0) {
        // 0x0021A9BC: addiu       $v1, $zero, -0x401
        ctx->r3 = ADD32(0, -0X401);
            goto L_0021AACC;
    }
    // 0x0021A9BC: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x0021A9C0: lwc1        $f0, 0x108($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X108);
    // 0x0021A9C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021A9C8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0021A9CC: lh          $v0, 0x100($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X100);
    // 0x0021A9D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021A9D4: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x0021A9D8: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0021A9DC: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0021A9E0: nop

    // 0x0021A9E4: bc1f        L_0021AA00
    if (!c1cs) {
        // 0x0021A9E8: swc1        $f0, 0x108($s1)
        MEM_W(0X108, ctx->r17) = ctx->f0.u32l;
            goto L_0021AA00;
    }
    // 0x0021A9E8: swc1        $f0, 0x108($s1)
    MEM_W(0X108, ctx->r17) = ctx->f0.u32l;
    // 0x0021A9EC: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0021A9F0: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x0021A9F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021A9F8: j           L_0021AABC
    // 0x0021A9FC: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
        goto L_0021AABC;
    // 0x0021A9FC: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0021AA00:
    // 0x0021AA00: lbu         $v0, 0x10D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X10D);
    // 0x0021AA04: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0021AA08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AA0C: lwc1        $f1, 0x5B10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B10);
    // 0x0021AA10: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0021AA14: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0021AA18: lbu         $v0, 0x10C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X10C);
    // 0x0021AA1C: add.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0021AA20: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0021AA24: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0021AA28: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021AA2C: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x0021AA30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AA34: lwc1        $f0, 0x5B14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B14);
    // 0x0021AA38: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0021AA3C: add.s       $f2, $f4, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f4.fl;
    // 0x0021AA40: mul.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f3.fl);
    // 0x0021AA44: nop

    // 0x0021AA48: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0021AA4C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0021AA50: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021AA54: nop

    // 0x0021AA58: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0021AA5C: nop

    // 0x0021AA60: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021AA64: nop

    // 0x0021AA68: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0021AA6C: addiu       $a0, $s1, 0xEC
    ctx->r4 = ADD32(ctx->r17, 0XEC);
    // 0x0021AA70: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021AA74: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0021AA78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021AA7C: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x0021AA80: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x0021AA84: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x0021AA88: jal         0x00218DCC
    // 0x0021AA8C: swc1        $f1, 0x104($s1)
    MEM_W(0X104, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_00218DCC(rdram, ctx);
        goto after_7;
    // 0x0021AA8C: swc1        $f1, 0x104($s1)
    MEM_W(0X104, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_7:
    // 0x0021AA90: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x0021AA94: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0021AA98: lw          $a1, 0x104($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X104);
    // 0x0021AA9C: jal         0x0020EF8C
    // 0x0021AAA0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020EF8C(rdram, ctx);
        goto after_8;
    // 0x0021AAA0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x0021AAA4: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x0021AAA8: lwc1        $f12, 0x104($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X104);
    // 0x0021AAAC: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x0021AAB0: jal         0x00210DB4
    // 0x0021AAB4: nop

    func_00210DB4(rdram, ctx);
        goto after_9;
    // 0x0021AAB4: nop

    after_9:
    // 0x0021AAB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_0021AABC:
    // 0x0021AABC: jal         0x00219938
    // 0x0021AAC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00219938(rdram, ctx);
        goto after_10;
    // 0x0021AAC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x0021AAC4: j           L_0021AAD8
    // 0x0021AAC8: nop

        goto L_0021AAD8;
    // 0x0021AAC8: nop

L_0021AACC:
    // 0x0021AACC: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0021AAD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021AAD4: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0021AAD8:
    // 0x0021AAD8: jal         0x00219938
    // 0x0021AADC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00219938(rdram, ctx);
        goto after_11;
    // 0x0021AADC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x0021AAE0: lw          $v1, 0xD4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD4);
    // 0x0021AAE4: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0021AAE8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0021AAEC: beq         $v0, $zero, L_0021AB64
    if (ctx->r2 == 0) {
        // 0x0021AAF0: addiu       $a0, $s1, 0x50
        ctx->r4 = ADD32(ctx->r17, 0X50);
            goto L_0021AB64;
    }
    // 0x0021AAF0: addiu       $a0, $s1, 0x50
    ctx->r4 = ADD32(ctx->r17, 0X50);
    // 0x0021AAF4: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0021AAF8: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0021AAFC: jal         0x00210EF0
    // 0x0021AB00: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_12;
    // 0x0021AB00: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    after_12:
    // 0x0021AB04: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0021AB08: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x0021AB0C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x0021AB10: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x0021AB14: lw          $a1, 0x50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X50);
    // 0x0021AB18: jal         0x002105A4
    // 0x0021AB1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_13;
    // 0x0021AB1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0021AB20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021AB24: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x0021AB28: jal         0x0020F85C
    // 0x0021AB2C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020F85C(rdram, ctx);
        goto after_14;
    // 0x0021AB2C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_14:
    // 0x0021AB30: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x0021AB34: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x0021AB38: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021AB3C: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0021AB40: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021AB44: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x0021AB48: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x0021AB4C: lwc1        $f0, 0x3C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x0021AB50: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021AB54: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0021AB58: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021AB5C: j           L_0021AB98
    // 0x0021AB60: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_0021AB98;
    // 0x0021AB60: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_0021AB64:
    // 0x0021AB64: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x0021AB68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0021AB6C: bne         $v0, $zero, L_0021AB9C
    if (ctx->r2 != 0) {
        // 0x0021AB70: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021AB9C;
    }
    // 0x0021AB70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021AB74: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0021AB78: addiu       $v0, $zero, 0x137
    ctx->r2 = ADD32(0, 0X137);
    // 0x0021AB7C: bne         $v1, $v0, L_0021AB9C
    if (ctx->r3 != ctx->r2) {
        // 0x0021AB80: nop
    
            goto L_0021AB9C;
    }
    // 0x0021AB80: nop

    // 0x0021AB84: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0021AB88: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0021AB8C: addiu       $a0, $s1, 0x50
    ctx->r4 = ADD32(ctx->r17, 0X50);
    // 0x0021AB90: jal         0x00210EF0
    // 0x0021AB94: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_15;
    // 0x0021AB94: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    after_15:
L_0021AB98:
    // 0x0021AB98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0021AB9C:
    // 0x0021AB9C: jal         0x002051F4
    // 0x0021ABA0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002051F4(rdram, ctx);
        goto after_16;
    // 0x0021ABA0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_16:
L_0021ABA4:
    // 0x0021ABA4: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x0021ABA8: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x0021ABAC: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x0021ABB0: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x0021ABB4: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x0021ABB8: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x0021ABBC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x0021ABC0: jr          $ra
    // 0x0021ABC4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x0021ABC4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_0029836C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029836C: slti        $v0, $v1, 0x136
    ctx->r2 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x00298370: beq         $v0, $zero, L_0029845C
    if (ctx->r2 == 0) {
        // 0x00298374: nop
    
            goto L_0029845C;
    }
    // 0x00298374: nop

    // 0x00298378: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029837C: ldc1        $f0, -0x57A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X57A8);
    // 0x00298380: cvt.d.s     $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f1.d = CVT_D_S(ctx->f12.fl);
    // 0x00298384: mul.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f0.d);
    // 0x00298388: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0029838C: cvt.s.d     $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f2.fl = CVT_S_D(ctx->f1.d);
    // 0x00298390: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00298394: nop

    // 0x00298398: bc1f        L_002983B0
    if (!c1cs) {
        // 0x0029839C: nop
    
            goto L_002983B0;
    }
    // 0x0029839C: nop

    // 0x002983A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002983A4: lwc1        $f0, -0x578C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X578C);
    // 0x002983A8: j           L_002983BC
    // 0x002983AC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_002983BC;
    // 0x002983AC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
L_002983B0:
    // 0x002983B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002983B4: lwc1        $f0, -0x5788($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5788);
    // 0x002983B8: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
L_002983BC:
    // 0x002983BC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002983C0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x002983C4: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x002983C8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002983CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002983D0: ldc1        $f1, -0x57A0($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X57A0);
    // 0x002983D4: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x002983D8: mul.d       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f2.d, ctx->f1.d);
    // 0x002983DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002983E0: ldc1        $f0, -0x5798($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5798);
    // 0x002983E4: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x002983E8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x002983EC: sub.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d - ctx->f1.d;
    // 0x002983F0: cvt.s.d     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.fl = CVT_S_D(ctx->f0.d);
    // 0x002983F4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x002983F8: sub.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d - ctx->f2.d;
    // 0x002983FC: cvt.s.d     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f12.fl = CVT_S_D(ctx->f0.d);
    // 0x00298400: mul.s       $f3, $f12, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f3.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00298404: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00298408: addiu       $v0, $v0, -0x57D0
    ctx->r2 = ADD32(ctx->r2, -0X57D0);
    // 0x0029840C: ldc1        $f0, 0x20($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X20);
    // 0x00298410: cvt.d.s     $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f2.d = CVT_D_S(ctx->f3.fl);
    // 0x00298414: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x00298418: ldc1        $f1, 0x18($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X18);
    // 0x0029841C: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x00298420: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x00298424: ldc1        $f1, 0x10($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X10);
    // 0x00298428: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x0029842C: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x00298430: nop

    // 0x00298434: mul.s       $f2, $f12, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f3.fl);
    // 0x00298438: ldc1        $f1, 0x8($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X8);
    // 0x0029843C: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x00298440: cvt.s.d     $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f1.fl = CVT_S_D(ctx->f0.d);
    // 0x00298444: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00298448: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0029844C: beq         $v0, $zero, L_00298464
    if (ctx->r2 == 0) {
        // 0x00298450: add.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f2.fl;
            goto L_00298464;
    }
    // 0x00298450: add.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x00298454: jr          $ra
    // 0x00298458: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x00298458: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_0029845C:
    // 0x0029845C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298460: lwc1        $f0, -0x5790($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5790);
L_00298464:
    // 0x00298464: jr          $ra
    // 0x00298468: nop

    return;
    // 0x00298468: nop

;}
RECOMP_FUNC void func_002620B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002620B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002620B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002620BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002620C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002620C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002620C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002620CC: lwc1        $f0, 0x18($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X18);
    // 0x002620D0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002620D4: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x002620D8: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x002620DC: lwc1        $f14, 0x60($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X60);
    // 0x002620E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002620E4: jal         0x0021160C
    // 0x002620E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    func_0021160C(rdram, ctx);
        goto after_0;
    // 0x002620E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002620EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002620F0: lwc1        $f1, 0x7B60($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B60);
    // 0x002620F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002620F8: nop

    // 0x002620FC: bc1t        L_0026211C
    if (c1cs) {
        // 0x00262100: swc1        $f0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
            goto L_0026211C;
    }
    // 0x00262100: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x00262104: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262108: lwc1        $f1, 0x7B64($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B64);
    // 0x0026210C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00262110: nop

    // 0x00262114: bc1f        L_00262124
    if (!c1cs) {
        // 0x00262118: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00262124;
    }
    // 0x00262118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0026211C:
    // 0x0026211C: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00262120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00262124:
    // 0x00262124: lw          $a2, 0x118($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X118);
    // 0x00262128: lw          $a3, 0x4C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4C);
    // 0x0026212C: jal         0x00245BAC
    // 0x00262130: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00262130: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00262134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00262138: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026213C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00262140: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00262144: jr          $ra
    // 0x00262148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00262148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00468F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468F88: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x00468F8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00468F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00468F94: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00468F98: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00468F9C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00468FA0: addiu       $a1, $a1, 0x5A80
    ctx->r5 = ADD32(ctx->r5, 0X5A80);
    // 0x00468FA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00468FA8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00468FAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00468FB0: jal         0x0026EB3C
    // 0x00468FB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0026EB3C(rdram, ctx);
        goto after_0;
    // 0x00468FB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00468FB8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00468FBC: addiu       $s0, $s0, 0x6798
    ctx->r16 = ADD32(ctx->r16, 0X6798);
    // 0x00468FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00468FC4: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00468FC8: addiu       $a1, $a1, 0x6770
    ctx->r5 = ADD32(ctx->r5, 0X6770);
    // 0x00468FCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00468FD0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00468FD4: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x00468FD8: jal         0x0029B030
    // 0x00468FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x00468FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x00468FE0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00468FE4: addiu       $s1, $s1, 0x6758
    ctx->r17 = ADD32(ctx->r17, 0X6758);
    // 0x00468FE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00468FEC: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00468FF0: addiu       $a1, $a1, 0x5E9C
    ctx->r5 = ADD32(ctx->r5, 0X5E9C);
    // 0x00468FF4: jal         0x0029B030
    // 0x00468FF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x00468FF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00468FFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x00469000: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00469004: jal         0x0029B950
    // 0x00469008: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00469008: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0046900C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00469010: addiu       $a1, $a1, 0x6CF1
    ctx->r5 = ADD32(ctx->r5, 0X6CF1);
    // 0x00469014: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00469018: addiu       $a2, $a2, 0x6778
    ctx->r6 = ADD32(ctx->r6, 0X6778);
    // 0x0046901C: jal         0x00298A40
    // 0x00469020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osContInit_recomp(rdram, ctx);
        goto after_4;
    // 0x00469020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00469024: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00469028: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0046902C: jal         0x0029B820
    // 0x00469030: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00469030: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_5:
    // 0x00469034: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00469038: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0046903C: addiu       $s1, $s1, 0x652C
    ctx->r17 = ADD32(ctx->r17, 0X652C);
    // 0x00469040: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00469044: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00469048: sh          $v0, 0x5EB8($at)
    MEM_H(0X5EB8, ctx->r1) = ctx->r2;
    // 0x0046904C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00469050: sb          $zero, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = 0;
L_00469054:
    // 0x00469054: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00469058: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0046905C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00469060: sw          $zero, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = 0;
    // 0x00469064: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00469068: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0046906C: sw          $zero, 0x67B0($at)
    MEM_W(0X67B0, ctx->r1) = 0;
    // 0x00469070: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00469074: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00469078: sw          $zero, 0x5EA8($at)
    MEM_W(0X5EA8, ctx->r1) = 0;
    // 0x0046907C: jal         0x00285A80
    // 0x00469080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A80(rdram, ctx);
        goto after_6;
    // 0x00469080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00469084: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00469088: jal         0x004300E8
    // 0x0046908C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_004300E8(rdram, ctx);
        goto after_7;
    // 0x0046908C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00469090: beql        $v0, $zero, L_004690B8
    if (ctx->r2 == 0) {
        // 0x00469094: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_004690B8;
    }
    goto skip_0;
    // 0x00469094: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x00469098: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0046909C: lbu         $v0, 0x6CF2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF2);
    // 0x004690A0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004690A4: sh          $s0, 0x5EB8($at)
    MEM_H(0X5EB8, ctx->r1) = ctx->r16;
    // 0x004690A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004690AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004690B0: sb          $v0, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = ctx->r2;
    // 0x004690B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_004690B8:
    // 0x004690B8: bgez        $s0, L_00469054
    if (SIGNED(ctx->r16) >= 0) {
        // 0x004690BC: addiu       $s1, $s1, -0x224
        ctx->r17 = ADD32(ctx->r17, -0X224);
            goto L_00469054;
    }
    // 0x004690BC: addiu       $s1, $s1, -0x224
    ctx->r17 = ADD32(ctx->r17, -0X224);
    // 0x004690C0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004690C4: lh          $v0, 0x5EB8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5EB8);
    // 0x004690C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004690CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004690D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004690D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004690D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004690DC: sb          $v1, 0x6CF0($at)
    MEM_B(0X6CF0, ctx->r1) = ctx->r3;
    // 0x004690E0: jr          $ra
    // 0x004690E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004690E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045DEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00424ED4:
    // 0x0045DEA8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045DEAC: lw          $v0, 0xA34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA34);
    // 0x0045DEB0: beq         $v0, $zero, L_0045DEC8
    if (ctx->r2 == 0) {
        // 0x0045DEB4: nop
    
            goto L_0045DEC8;
    }
    // 0x0045DEB4: nop

    // 0x0045DEB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045DEBC: addiu       $v0, $v0, 0x437C
    ctx->r2 = ADD32(ctx->r2, 0X437C);
    // 0x0045DEC0: j           L_00424ED4
    // 0x0045DEC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00424ED4(rdram, ctx);
    return;
    // 0x0045DEC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045DEC8:
    // 0x0045DEC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045DECC: addiu       $v0, $v0, 0x436C
    ctx->r2 = ADD32(ctx->r2, 0X436C);
    // 0x0045DED0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045DED4: jr          $ra
    // 0x0045DED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0045DED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0026872C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026872C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00268730: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00268734: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00268738: bne         $v0, $zero, L_0026874C
    if (ctx->r2 != 0) {
        // 0x0026873C: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_0026874C;
    }
    // 0x0026873C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00268740: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00268744: j           L_0026878C
    // 0x00268748: nop

        goto L_0026878C;
    // 0x00268748: nop

L_0026874C:
    // 0x0026874C: bne         $v1, $zero, L_00268764
    if (ctx->r3 != 0) {
        // 0x00268750: nop
    
            goto L_00268764;
    }
    // 0x00268750: nop

    // 0x00268754: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x00268758: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x0026875C: j           L_00268784
    // 0x00268760: nop

        goto L_00268784;
    // 0x00268760: nop

L_00268764:
    // 0x00268764: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x00268768: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026876C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00268770: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00268774: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00268778: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0026877C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00268780: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
L_00268784:
    // 0x00268784: jal         0x0026BE60
    // 0x00268788: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x00268788: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_0:
L_0026878C:
    // 0x0026878C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00268790: jr          $ra
    // 0x00268794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00257980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025798C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00257990: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00257994: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00257998: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025799C: jal         0x00416AF8
    // 0x002579A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00416AF8(rdram, ctx);
        goto after_0;
    // 0x002579A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002579A4: bne         $v0, $zero, L_002579FC
    if (ctx->r2 != 0) {
        // 0x002579A8: nop
    
            goto L_002579FC;
    }
    // 0x002579A8: nop

    // 0x002579AC: jal         0x00284188
    // 0x002579B0: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x002579B0: nop

    after_1:
    // 0x002579B4: beq         $v0, $zero, L_002579FC
    if (ctx->r2 == 0) {
        // 0x002579B8: nop
    
            goto L_002579FC;
    }
    // 0x002579B8: nop

    // 0x002579BC: jal         0x00284408
    // 0x002579C0: nop

    func_00284408(rdram, ctx);
        goto after_2;
    // 0x002579C0: nop

    after_2:
    // 0x002579C4: addiu       $v1, $zero, 0x190
    ctx->r3 = ADD32(0, 0X190);
    // 0x002579C8: bne         $v0, $v1, L_002579FC
    if (ctx->r2 != ctx->r3) {
        // 0x002579CC: nop
    
            goto L_002579FC;
    }
    // 0x002579CC: nop

    // 0x002579D0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x002579D4: bne         $v0, $zero, L_002579FC
    if (ctx->r2 != 0) {
        // 0x002579D8: nop
    
            goto L_002579FC;
    }
    // 0x002579D8: nop

    // 0x002579DC: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x002579E0: beq         $a1, $zero, L_002579FC
    if (ctx->r5 == 0) {
        // 0x002579E4: nop
    
            goto L_002579FC;
    }
    // 0x002579E4: nop

    // 0x002579E8: lw          $v0, 0x54C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X54C);
    // 0x002579EC: bne         $v0, $zero, L_002579FC
    if (ctx->r2 != 0) {
        // 0x002579F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002579FC;
    }
    // 0x002579F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002579F4: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x002579F8: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
L_002579FC:
    // 0x002579FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00257A00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00257A04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257A08: jr          $ra
    // 0x00257A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00257A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
