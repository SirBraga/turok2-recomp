#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00256584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256588: lwc1        $f0, 0x71D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71D8);
    // 0x0025658C: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x00256590: mul.s       $f1, $f12, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00256594: nop

    // 0x00256598: mul.s       $f1, $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x0025659C: jr          $ra
    // 0x002565A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    return;
    // 0x002565A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
;}
RECOMP_FUNC void func_0045F47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F47C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045F480: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F484: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045F488: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F48C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F490: bne         $v1, $v0, L_0045F4AC
    if (ctx->r3 != ctx->r2) {
            // 0x0045F494: nop

    func_0045F4AC(rdram, ctx);
    return;
    }
    // 0x0045F494: nop

    // 0x0045F498: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F49C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045F4A0: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F4A4: jr          $ra
    // 0x0045F4A8: nop

    return;
    // 0x0045F4A8: nop

;}
RECOMP_FUNC void func_00454C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454C38: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_00454C3C:
    // 0x00454C3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00454C40: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00454C44: lbu         $v0, 0x5E98($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5E98);
    // 0x00454C48: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00454C4C: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x00454C50: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x00454C54: bne         $v0, $zero, L_00454C3C
    if (ctx->r2 != 0) {
        // 0x00454C58: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_00454C3C;
    }
    // 0x00454C58: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00454C5C: jr          $ra
    // 0x00454C60: nop

    return;
    // 0x00454C60: nop

;}
RECOMP_FUNC void func_002A12EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A12EC: jr          $v0
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_002505F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002505F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002505FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00250600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00250604: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00250608: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0025060C: jal         0x0024FE10
    // 0x00250610: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_0024FE10(rdram, ctx);
        goto after_0;
    // 0x00250610: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00250614: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    // 0x00250618: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0025061C: jal         0x002117DC
    // 0x00250620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x00250620: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00250624: lwc1        $f1, 0xAC0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAC0);
    // 0x00250628: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025062C: lwc1        $f0, 0x6F08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F08);
    // 0x00250630: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250634: nop

    // 0x00250638: bc1t        L_00250644
    if (c1cs) {
        // 0x0025063C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00250644;
    }
    // 0x0025063C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00250640: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00250644:
    // 0x00250644: beq         $v0, $zero, L_0025065C
    if (ctx->r2 == 0) {
        // 0x00250648: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025065C;
    }
    // 0x00250648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025064C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250650: addiu       $a2, $a2, -0x2178
    ctx->r6 = ADD32(ctx->r6, -0X2178);
    // 0x00250654: j           L_00250668
    // 0x00250658: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_00250668;
    // 0x00250658: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0025065C:
    // 0x0025065C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250660: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250664: addiu       $a2, $a2, -0x2190
    ctx->r6 = ADD32(ctx->r6, -0X2190);
L_00250668:
    // 0x00250668: jal         0x0024EF70
    // 0x0025066C: nop

    func_0024EF70(rdram, ctx);
        goto after_2;
    // 0x0025066C: nop

    after_2:
    // 0x00250670: lwc1        $f1, 0xAC0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAC0);
    // 0x00250674: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250678: lwc1        $f0, 0x6F0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F0C);
    // 0x0025067C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250680: nop

    // 0x00250684: bc1t        L_00250690
    if (c1cs) {
        // 0x00250688: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00250690;
    }
    // 0x00250688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025068C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00250690:
    // 0x00250690: beq         $v0, $zero, L_002506A8
    if (ctx->r2 == 0) {
        // 0x00250694: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002506A8;
    }
    // 0x00250694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250698: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025069C: addiu       $a2, $a2, -0x21B4
    ctx->r6 = ADD32(ctx->r6, -0X21B4);
    // 0x002506A0: j           L_002506B4
    // 0x002506A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_002506B4;
    // 0x002506A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_002506A8:
    // 0x002506A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002506AC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002506B0: addiu       $a2, $a2, -0x2244
    ctx->r6 = ADD32(ctx->r6, -0X2244);
L_002506B4:
    // 0x002506B4: jal         0x0024F174
    // 0x002506B8: nop

    func_0024F174(rdram, ctx);
        goto after_3;
    // 0x002506B8: nop

    after_3:
    // 0x002506BC: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x002506C0: bne         $v0, $zero, L_00250730
    if (ctx->r2 != 0) {
        // 0x002506C4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250730;
    }
    // 0x002506C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002506C8: lwc1        $f1, 0xA9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA9C);
    // 0x002506CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002506D0: lwc1        $f0, 0x6F10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F10);
    // 0x002506D4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002506D8: nop

    // 0x002506DC: bc1t        L_00250730
    if (c1cs) {
        // 0x002506E0: nop
    
            goto L_00250730;
    }
    // 0x002506E0: nop

    // 0x002506E4: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x002506E8: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x002506EC: bne         $v0, $zero, L_00250730
    if (ctx->r2 != 0) {
        // 0x002506F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250730;
    }
    // 0x002506F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002506F4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002506F8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002506FC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00250700: beq         $v0, $zero, L_00250730
    if (ctx->r2 == 0) {
        // 0x00250704: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250730;
    }
    // 0x00250704: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00250708: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x0025070C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00250710: beq         $v0, $zero, L_0025072C
    if (ctx->r2 == 0) {
        // 0x00250714: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025072C;
    }
    // 0x00250714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025071C: jal         0x0024E5F0
    // 0x00250720: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024E5F0(rdram, ctx);
        goto after_4;
    // 0x00250720: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x00250724: j           L_00250730
    // 0x00250728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00250730;
    // 0x00250728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025072C:
    // 0x0025072C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00250730:
    // 0x00250730: bne         $v0, $zero, L_002508BC
    if (ctx->r2 != 0) {
        // 0x00250734: nop
    
            goto L_002508BC;
    }
    // 0x00250734: nop

    // 0x00250738: lwc1        $f0, 0xA78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0025073C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00250740: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00250744: nop

    // 0x00250748: bc1f        L_00250770
    if (!c1cs) {
        // 0x0025074C: nop
    
            goto L_00250770;
    }
    // 0x0025074C: nop

    // 0x00250750: lwc1        $f0, 0xA7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x00250754: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00250758: nop

    // 0x0025075C: bc1f        L_00250770
    if (!c1cs) {
        // 0x00250760: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00250770;
    }
    // 0x00250760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250764: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250768: jal         0x0024E5F0
    // 0x0025076C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_5;
    // 0x0025076C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
L_00250770:
    // 0x00250770: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00250774: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00250778: beq         $v0, $zero, L_002507F4
    if (ctx->r2 == 0) {
        // 0x0025077C: nop
    
            goto L_002507F4;
    }
    // 0x0025077C: nop

    // 0x00250780: lw          $v0, 0xA88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA88);
    // 0x00250784: beq         $v0, $zero, L_002507F4
    if (ctx->r2 == 0) {
        // 0x00250788: nop
    
            goto L_002507F4;
    }
    // 0x00250788: nop

    // 0x0025078C: lwc1        $f1, 0x1290($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1290);
    // 0x00250790: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00250794: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00250798: add.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025079C: lwc1        $f1, 0xA80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA80);
    // 0x002507A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002507A4: lwc1        $f0, 0x6F14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F14);
    // 0x002507A8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002507AC: nop

    // 0x002507B0: bc1f        L_002507F4
    if (!c1cs) {
        // 0x002507B4: swc1        $f2, 0x1290($s0)
        MEM_W(0X1290, ctx->r16) = ctx->f2.u32l;
            goto L_002507F4;
    }
    // 0x002507B4: swc1        $f2, 0x1290($s0)
    MEM_W(0X1290, ctx->r16) = ctx->f2.u32l;
    // 0x002507B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002507BC: lwc1        $f0, 0x6F18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F18);
    // 0x002507C0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x002507C4: nop

    // 0x002507C8: bc1f        L_002507F4
    if (!c1cs) {
        // 0x002507CC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002507F4;
    }
    // 0x002507CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002507D0: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002507D4: swc1        $f0, 0x1290($s0)
    MEM_W(0X1290, ctx->r16) = ctx->f0.u32l;
    // 0x002507D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002507DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002507E0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x002507E4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x002507E8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x002507EC: jal         0x00275544
    // 0x002507F0: addiu       $a0, $zero, 0x3AB
    ctx->r4 = ADD32(0, 0X3AB);
    func_00275544(rdram, ctx);
        goto after_6;
    // 0x002507F0: addiu       $a0, $zero, 0x3AB
    ctx->r4 = ADD32(0, 0X3AB);
    after_6:
L_002507F4:
    // 0x002507F4: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x002507F8: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x002507FC: beq         $v0, $zero, L_00250824
    if (ctx->r2 == 0) {
        // 0x00250800: nop
    
            goto L_00250824;
    }
    // 0x00250800: nop

    // 0x00250804: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00250808: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025080C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00250810: nop

    // 0x00250814: bc1t        L_002508B8
    if (c1cs) {
        // 0x00250818: addiu       $v0, $zero, 0xA32
        ctx->r2 = ADD32(0, 0XA32);
            goto L_002508B8;
    }
    // 0x00250818: addiu       $v0, $zero, 0xA32
    ctx->r2 = ADD32(0, 0XA32);
    // 0x0025081C: j           L_002508B8
    // 0x00250820: addiu       $v0, $zero, 0xA37
    ctx->r2 = ADD32(0, 0XA37);
        goto L_002508B8;
    // 0x00250820: addiu       $v0, $zero, 0xA37
    ctx->r2 = ADD32(0, 0XA37);
L_00250824:
    // 0x00250824: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00250828: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0025082C: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00250830: nop

    // 0x00250834: bc1tl       L_0025083C
    if (c1cs) {
        // 0x00250838: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_0025083C;
    }
    goto skip_0;
    // 0x00250838: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_0:
L_0025083C:
    // 0x0025083C: lwc1        $f0, 0xA7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x00250840: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00250844: nop

    // 0x00250848: bc1f        L_0025086C
    if (!c1cs) {
        // 0x0025084C: nop
    
            goto L_0025086C;
    }
    // 0x0025084C: nop

    // 0x00250850: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00250854: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00250858: nop

    // 0x0025085C: bc1f        L_0025089C
    if (!c1cs) {
        // 0x00250860: nop
    
            goto L_0025089C;
    }
    // 0x00250860: nop

    // 0x00250864: j           L_0025087C
    // 0x00250868: nop

        goto L_0025087C;
    // 0x00250868: nop

L_0025086C:
    // 0x0025086C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00250870: nop

    // 0x00250874: bc1f        L_0025089C
    if (!c1cs) {
        // 0x00250878: nop
    
            goto L_0025089C;
    }
    // 0x00250878: nop

L_0025087C:
    // 0x0025087C: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x00250880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00250884: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00250888: nop

    // 0x0025088C: bc1t        L_002508B8
    if (c1cs) {
        // 0x00250890: addiu       $v0, $zero, 0x802
        ctx->r2 = ADD32(0, 0X802);
            goto L_002508B8;
    }
    // 0x00250890: addiu       $v0, $zero, 0x802
    ctx->r2 = ADD32(0, 0X802);
    // 0x00250894: j           L_002508B8
    // 0x00250898: addiu       $v0, $zero, 0x80C
    ctx->r2 = ADD32(0, 0X80C);
        goto L_002508B8;
    // 0x00250898: addiu       $v0, $zero, 0x80C
    ctx->r2 = ADD32(0, 0X80C);
L_0025089C:
    // 0x0025089C: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x002508A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002508A4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002508A8: nop

    // 0x002508AC: bc1t        L_002508B8
    if (c1cs) {
        // 0x002508B0: addiu       $v0, $zero, 0x7DA
        ctx->r2 = ADD32(0, 0X7DA);
            goto L_002508B8;
    }
    // 0x002508B0: addiu       $v0, $zero, 0x7DA
    ctx->r2 = ADD32(0, 0X7DA);
    // 0x002508B4: addiu       $v0, $zero, 0x7DF
    ctx->r2 = ADD32(0, 0X7DF);
L_002508B8:
    // 0x002508B8: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_002508BC:
    // 0x002508BC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002508C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002508C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002508C8: jr          $ra
    // 0x002508CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002508CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A2494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2494: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002A2498: beq         $v0, $zero, L_002A24AC
    if (ctx->r2 == 0) {
        // 0x002A249C: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_002A24AC;
    }
    // 0x002A249C: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_002A24A0:
    // 0x002A24A0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A24A4: bne         $v0, $zero, L_002A24A0
    if (ctx->r2 != 0) {
        // 0x002A24A8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_002A24A0;
    }
    // 0x002A24A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_002A24AC:
    // 0x002A24AC: jr          $ra
    // 0x002A24B0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    return;
    // 0x002A24B0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void func_0041920C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041920C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419210: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00419214: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00419218: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041921C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00419220: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00419224: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00419228: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041922C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00419230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00419234: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00419238: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x0041923C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00419240: jal         0x0041648C
    // 0x00419244: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00419244: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00419248: sb          $v0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r2;
    // 0x0041924C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419254: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419258: jr          $ra
    // 0x0041925C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041925C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00288FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288FDC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288FE0: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288FE4: lw          $v0, 0x3FF4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FF4);
    // 0x00288FE8: bne         $v0, $zero, L_00289084
    if (ctx->r2 != 0) {
        // 0x00288FEC: nop
    
            goto L_00289084;
    }
    // 0x00288FEC: nop

    // 0x00288FF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00288FF4: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00288FF8: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00288FFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289000: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00289004: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00289008: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028900C: lwc1        $f2, -0x6214($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6214);
    // 0x00289010: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x00289014: nop

    // 0x00289018: bc1f        L_00289084
    if (!c1cs) {
        // 0x0028901C: swc1        $f1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
            goto L_00289084;
    }
    // 0x0028901C: swc1        $f1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00289020: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00289024: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00289028: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028902C: lwc1        $f3, -0x6210($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6210);
    // 0x00289030: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289034: lwc1        $f2, -0x620C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X620C);
    // 0x00289038: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0028903C: swc1        $f1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00289040: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00289044: nop

    // 0x00289048: bc1f        L_00289084
    if (!c1cs) {
        // 0x0028904C: swc1        $f0, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
            goto L_00289084;
    }
    // 0x0028904C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x00289050: sub.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00289054: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00289058: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0028905C: swc1        $f1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00289060: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00289064: nop

    // 0x00289068: bc1f        L_00289084
    if (!c1cs) {
        // 0x0028906C: swc1        $f0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
            goto L_00289084;
    }
    // 0x0028906C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x00289070: sub.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00289074: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00289078: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0028907C: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00289080: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_00289084:
    // 0x00289084: jr          $ra
    // 0x00289088: nop

    return;
    // 0x00289088: nop

;}
RECOMP_FUNC void func_0025A62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A630: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A634: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A638: lhu         $a3, 0x80($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X80);
    // 0x0025A63C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A640: addiu       $a2, $a2, -0x148
    ctx->r6 = ADD32(ctx->r6, -0X148);
    // 0x0025A644: jal         0x00245A98
    // 0x0025A648: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A648: nop

    after_0:
    // 0x0025A64C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A650: jr          $ra
    // 0x0025A654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00217AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217AF0: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x00217AF4: sub.s       $f0, $f1, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f14.fl;
    // 0x00217AF8: mul.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00217AFC: jr          $ra
    // 0x00217B00: add.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
    return;
    // 0x00217B00: add.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
;}
RECOMP_FUNC void func_00440BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440BBC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00440BC0: addiu       $v1, $v1, -0x630
    ctx->r3 = ADD32(ctx->r3, -0X630);
    // 0x00440BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00440BC8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00440BCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00440BD0: sw          $v0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r2;
    // 0x00440BD4: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x00440BD8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00440BDC: addiu       $v0, $v0, 0x1620
    ctx->r2 = ADD32(ctx->r2, 0X1620);
    // 0x00440BE0: jr          $ra
    // 0x00440BE4: sw          $v0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r2;
    return;
    // 0x00440BE4: sw          $v0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_0045FED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FED4: bne         $a2, $zero, L_0045FEF8
    if (ctx->r6 != 0) {
        // 0x0045FED8: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0045FEF8;
    }
    // 0x0045FED8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FEDC: jr          $ra
    // 0x0045FEE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045FEE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045FEE4:
    // 0x0045FEE4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FEE8: bne         $v1, $v0, L_0045FF0C
    if (ctx->r3 != ctx->r2) {
        // 0x0045FEEC: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0045FF0C;
    }
    // 0x0045FEEC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045FEF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045FEF4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_0045FEF8:
    // 0x0045FEF8: beq         $a2, $zero, L_0045FF0C
    if (ctx->r6 == 0) {
        // 0x0045FEFC: nop
    
            goto L_0045FF0C;
    }
    // 0x0045FEFC: nop

    // 0x0045FF00: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FF04: bne         $v1, $zero, L_0045FEE4
    if (ctx->r3 != 0) {
        // 0x0045FF08: nop
    
            goto L_0045FEE4;
    }
    // 0x0045FF08: nop

L_0045FF0C:
    // 0x0045FF0C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FF10: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FF14: jr          $ra
    // 0x0045FF18: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x0045FF18: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_0025FCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FCB8: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025FCBC: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x0025FCC0: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025FCC4: beql        $v0, $zero, L_0025FCCC
    if (ctx->r2 == 0) {
        // 0x0025FCC8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025FCCC;
    }
    goto skip_0;
    // 0x0025FCC8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025FCCC:
    // 0x0025FCCC: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    // 0x0025FCD0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025FCD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FCD8: lwc1        $f0, 0x7964($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7964);
    // 0x0025FCDC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025FCE0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025FCE4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025FCE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FCEC: lwc1        $f0, 0x7968($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7968);
    // 0x0025FCF0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025FCF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FCF8: lwc1        $f1, 0x796C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X796C);
    // 0x0025FCFC: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025FD00: jr          $ra
    // 0x0025FD04: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0025FD04: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0021B038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021B038: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x0021B03C: sw          $s4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r20;
    // 0x0021B040: lw          $s4, 0x134($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X134);
    // 0x0021B044: sw          $s7, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r23;
    // 0x0021B048: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0021B04C: sw          $s6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r22;
    // 0x0021B050: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0021B054: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x0021B058: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x0021B05C: sdc1        $f21, 0x110($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X110, ctx->r29);
    // 0x0021B060: lwc1        $f21, 0x138($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X138);
    // 0x0021B064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B068: sdc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X108, ctx->r29);
    // 0x0021B06C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B070: lwc1        $f20, 0x5B2C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5B2C);
    // 0x0021B074: sw          $ra, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r31;
    // 0x0021B078: sw          $s5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r21;
    // 0x0021B07C: sw          $s3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r19;
    // 0x0021B080: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x0021B084: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x0021B088: sdc1        $f22, 0x118($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X118, ctx->r29);
    // 0x0021B08C: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x0021B090: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    // 0x0021B094: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0021B098: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0021B09C: jal         0x0021AE6C
    // 0x0021B0A0: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    func_0021AE6C(rdram, ctx);
        goto after_0;
    // 0x0021B0A0: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x0021B0A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021B0A8: c.eq.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl == ctx->f0.fl;
    // 0x0021B0AC: nop

    // 0x0021B0B0: bc1f        L_0021B0D4
    if (!c1cs) {
        // 0x0021B0B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021B0D4;
    }
    // 0x0021B0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B0B8: beq         $s4, $zero, L_0021B340
    if (ctx->r20 == 0) {
        // 0x0021B0BC: nop
    
            goto L_0021B340;
    }
    // 0x0021B0BC: nop

    // 0x0021B0C0: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x0021B0C4: swc1        $f0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f0.u32l;
    // 0x0021B0C8: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x0021B0CC: j           L_0021B340
    // 0x0021B0D0: swc1        $f20, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f20.u32l;
        goto L_0021B340;
    // 0x0021B0D0: swc1        $f20, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f20.u32l;
L_0021B0D4:
    // 0x0021B0D4: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x0021B0D8: jal         0x00211114
    // 0x0021B0DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_1;
    // 0x0021B0DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021B0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B0E4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0021B0E8: jal         0x0020F85C
    // 0x0021B0EC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0021B0EC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x0021B0F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B0F4: lwc1        $f12, 0x5B30($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5B30);
    // 0x0021B0F8: mul.s       $f12, $f21, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f12.fl);
    // 0x0021B0FC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0021B100: jal         0x002974C0
    // 0x0021B104: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0021B104: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0021B108: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x0021B10C: lw          $s3, 0x7E70($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X7E70);
    // 0x0021B110: blez        $s3, L_0021B218
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0021B114: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_0021B218;
    }
    // 0x0021B114: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0021B118: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x0021B11C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B120: lwc1        $f22, 0x5B34($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5B34);
    // 0x0021B124: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_0021B128:
    // 0x0021B128: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0021B12C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021B130: lw          $s0, 0x7C70($at)
    ctx->r16 = MEM_W(ctx->r1, 0X7C70);
    // 0x0021B134: beql        $s0, $s6, L_0021B20C
    if (ctx->r16 == ctx->r22) {
        // 0x0021B138: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0021B20C;
    }
    goto skip_0;
    // 0x0021B138: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0021B13C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021B140: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0021B144: bnel        $v0, $zero, L_0021B20C
    if (ctx->r2 != 0) {
        // 0x0021B148: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0021B20C;
    }
    goto skip_1;
    // 0x0021B148: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x0021B14C: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x0021B150: beql        $v0, $zero, L_0021B20C
    if (ctx->r2 == 0) {
        // 0x0021B154: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0021B20C;
    }
    goto skip_2;
    // 0x0021B154: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x0021B158: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021B15C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0021B160: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0021B164: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x0021B168: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x0021B16C: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x0021B170: lwc1        $f1, 0x64($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x0021B174: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x0021B178: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021B17C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B180: jal         0x002671B4
    // 0x0021B184: swc1        $f1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002671B4(rdram, ctx);
        goto after_4;
    // 0x0021B184: swc1        $f1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x0021B188: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0021B18C: lwc1        $f1, 0x64($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x0021B190: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021B194: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021B198: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0021B19C: addiu       $a2, $sp, 0x128
    ctx->r6 = ADD32(ctx->r29, 0X128);
    // 0x0021B1A0: jal         0x0020EF2C
    // 0x0021B1A4: swc1        $f1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x0021B1A4: swc1        $f1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_5:
    // 0x0021B1A8: jal         0x0020F040
    // 0x0021B1AC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F040(rdram, ctx);
        goto after_6;
    // 0x0021B1AC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x0021B1B0: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0021B1B4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0021B1B8: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0021B1BC: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0021B1C0: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0021B1C4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021B1C8: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0021B1CC: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0021B1D0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021B1D4: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0021B1D8: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0021B1DC: c.lt.s      $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f20.fl < ctx->f3.fl;
    // 0x0021B1E0: nop

    // 0x0021B1E4: bc1f        L_0021B20C
    if (!c1cs) {
        // 0x0021B1E8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0021B20C;
    }
    // 0x0021B1E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0021B1EC: mov.s       $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    ctx->f20.fl = ctx->f3.fl;
    // 0x0021B1F0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0021B1F4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0021B1F8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x0021B1FC: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x0021B200: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x0021B204: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x0021B208: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
L_0021B20C:
    // 0x0021B20C: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0021B210: bne         $v0, $zero, L_0021B128
    if (ctx->r2 != 0) {
        // 0x0021B214: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0021B128;
    }
    // 0x0021B214: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_0021B218:
    // 0x0021B218: beq         $s2, $zero, L_0021B31C
    if (ctx->r18 == 0) {
        // 0x0021B21C: addiu       $s0, $sp, 0x40
        ctx->r16 = ADD32(ctx->r29, 0X40);
            goto L_0021B31C;
    }
    // 0x0021B21C: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x0021B220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B224: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0021B228: jal         0x0020EFDC
    // 0x0021B22C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020EFDC(rdram, ctx);
        goto after_7;
    // 0x0021B22C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_7:
    // 0x0021B230: jal         0x0020F040
    // 0x0021B234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_8;
    // 0x0021B234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0021B238: jal         0x0021153C
    // 0x0021B23C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021153C(rdram, ctx);
        goto after_9;
    // 0x0021B23C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_9:
    // 0x0021B240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B244: lwc1        $f12, 0x5B38($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5B38);
    // 0x0021B248: mul.s       $f12, $f21, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f12.fl);
    // 0x0021B24C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0021B250: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B254: lwc1        $f0, 0x5B3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B3C);
    // 0x0021B258: div.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f12.fl);
    // 0x0021B25C: jal         0x00298470
    // 0x0021B260: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_10;
    // 0x0021B260: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    after_10:
    // 0x0021B264: jal         0x00298470
    // 0x0021B268: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_11;
    // 0x0021B268: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_11:
    // 0x0021B26C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0021B270: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B274: lwc1        $f0, 0x5B40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B40);
    // 0x0021B278: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0021B27C: jal         0x002982F0
    // 0x0021B280: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_12;
    // 0x0021B280: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_12:
    // 0x0021B284: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0021B288: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0021B28C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0021B290: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021B294: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x0021B298: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0021B29C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0021B2A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021B2A4: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0021B2A8: swc1        $f3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0021B2AC: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x0021B2B0: jal         0x002974C0
    // 0x0021B2B4: swc1        $f1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_13;
    // 0x0021B2B4: swc1        $f1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_13:
    // 0x0021B2B8: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x0021B2BC: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x0021B2C0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x0021B2C4: jal         0x00210F68
    // 0x0021B2C8: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_14;
    // 0x0021B2C8: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    after_14:
    // 0x0021B2CC: beq         $s4, $zero, L_0021B2F4
    if (ctx->r20 == 0) {
        // 0x0021B2D0: nop
    
            goto L_0021B2F4;
    }
    // 0x0021B2D0: nop

    // 0x0021B2D4: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x0021B2D8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x0021B2DC: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x0021B2E0: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x0021B2E4: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x0021B2E8: sw          $t0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r8;
    // 0x0021B2EC: sw          $t1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r9;
    // 0x0021B2F0: sw          $t2, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r10;
L_0021B2F4:
    // 0x0021B2F4: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x0021B2F8: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x0021B2FC: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x0021B300: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x0021B304: sw          $v1, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r3;
    // 0x0021B308: sw          $t0, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r8;
    // 0x0021B30C: sw          $t1, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r9;
    // 0x0021B310: sw          $t2, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->r10;
    // 0x0021B314: j           L_0021B364
    // 0x0021B318: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
        goto L_0021B364;
    // 0x0021B318: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_0021B31C:
    // 0x0021B31C: beq         $s4, $zero, L_0021B340
    if (ctx->r20 == 0) {
        // 0x0021B320: nop
    
            goto L_0021B340;
    }
    // 0x0021B320: nop

    // 0x0021B324: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021B328: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B32C: lwc1        $f1, 0x5B44($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B44);
    // 0x0021B330: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x0021B334: swc1        $f0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f0.u32l;
    // 0x0021B338: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x0021B33C: swc1        $f1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
L_0021B340:
    // 0x0021B340: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x0021B344: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0021B348: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x0021B34C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x0021B350: sw          $v1, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r3;
    // 0x0021B354: sw          $t0, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r8;
    // 0x0021B358: sw          $t1, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r9;
    // 0x0021B35C: sw          $t2, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->r10;
    // 0x0021B360: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_0021B364:
    // 0x0021B364: lw          $ra, 0x100($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X100);
    // 0x0021B368: lw          $s7, 0xFC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XFC);
    // 0x0021B36C: lw          $s6, 0xF8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF8);
    // 0x0021B370: lw          $s5, 0xF4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XF4);
    // 0x0021B374: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0021B378: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0021B37C: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0021B380: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0021B384: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0021B388: ldc1        $f22, 0x118($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X118);
    // 0x0021B38C: ldc1        $f21, 0x110($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X110);
    // 0x0021B390: ldc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X108);
    // 0x0021B394: jr          $ra
    // 0x0021B398: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    // 0x0021B398: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_00212680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00212680: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00212684: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00212688: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
    // 0x0021268C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00212690: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00212694: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00212698: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x0021269C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x002126A0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x002126A4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x002126A8: lbu         $v0, 0xB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB9);
    // 0x002126AC: lw          $s2, 0x84($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X84);
    // 0x002126B0: beq         $v0, $zero, L_00212740
    if (ctx->r2 == 0) {
        // 0x002126B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00212740;
    }
    // 0x002126B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002126B8: lwc1        $f3, 0x64($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x002126BC: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x002126C0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002126C4: swc1        $f3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x002126C8: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x002126CC: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x002126D0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002126D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x002126D8: lwc1        $f1, 0x6C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X6C);
    // 0x002126DC: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x002126E0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002126E4: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002126E8: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x002126EC: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x002126F0: swc1        $f3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x002126F4: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    // 0x002126F8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002126FC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x00212700: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x00212704: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00212708: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021270C: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x00212710: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x00212714: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212718: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0021271C: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x00212720: lwc1        $f1, 0x14($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x00212724: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212728: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0021272C: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x00212730: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x00212734: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212738: j           L_0021275C
    // 0x0021273C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_0021275C;
    // 0x0021273C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_00212740:
    // 0x00212740: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x00212744: jal         0x0020F85C
    // 0x00212748: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x00212748: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x0021274C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00212750: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x00212754: jal         0x0020FAFC
    // 0x00212758: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020FAFC(rdram, ctx);
        goto after_1;
    // 0x00212758: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
L_0021275C:
    // 0x0021275C: jal         0x0020F040
    // 0x00212760: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x00212760: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00212764: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x00212768: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021276C: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x00212770: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00212774: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x00212778: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0021277C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00212780: jal         0x002123D4
    // 0x00212784: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002123D4(rdram, ctx);
        goto after_3;
    // 0x00212784: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00212788: beq         $v0, $zero, L_00212844
    if (ctx->r2 == 0) {
        // 0x0021278C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00212844;
    }
    // 0x0021278C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00212790: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00212794: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00212798: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021279C: lwc1        $f3, 0x3C($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x002127A0: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x002127A4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x002127A8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002127AC: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x002127B0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x002127B4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x002127B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002127BC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x002127C0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x002127C4: c.lt.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl < ctx->f3.fl;
    // 0x002127C8: nop

    // 0x002127CC: bc1tl       L_002127D4
    if (c1cs) {
        // 0x002127D0: mov.s       $f2, $f3
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
            goto L_002127D4;
    }
    goto skip_0;
    // 0x002127D0: mov.s       $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
    skip_0:
L_002127D4:
    // 0x002127D4: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x002127D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002127DC: lwc1        $f1, 0x5768($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5768);
    // 0x002127E0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002127E4: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x002127E8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002127EC: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x002127F0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002127F4: c.le.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl <= ctx->f3.fl;
    // 0x002127F8: nop

    // 0x002127FC: bc1f        L_00212808
    if (!c1cs) {
        // 0x00212800: swc1        $f1, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00212808;
    }
    // 0x00212800: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00212804: swc1        $f3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
L_00212808:
    // 0x00212808: lbu         $v0, 0xB8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB8);
    // 0x0021280C: beq         $v0, $zero, L_00212820
    if (ctx->r2 == 0) {
        // 0x00212810: nop
    
            goto L_00212820;
    }
    // 0x00212810: nop

    // 0x00212814: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x00212818: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0021281C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
L_00212820:
    // 0x00212820: beq         $s2, $zero, L_00212830
    if (ctx->r18 == 0) {
        // 0x00212824: nop
    
            goto L_00212830;
    }
    // 0x00212824: nop

    // 0x00212828: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0021282C: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
L_00212830:
    // 0x00212830: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x00212834: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00212838: jal         0x0020EF60
    // 0x0021283C: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    func_0020EF60(rdram, ctx);
        goto after_4;
    // 0x0021283C: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    after_4:
    // 0x00212840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00212844:
    // 0x00212844: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00212848: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0021284C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00212850: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00212854: jr          $ra
    // 0x00212858: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00212858: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00417418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041741C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417420: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00417424: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00417428: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041742C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00417430: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00417434: beq         $v0, $zero, L_00417448
    if (ctx->r2 == 0) {
        // 0x00417438: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00417448;
    }
    // 0x00417438: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041743C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00417440: jalr        $v0
    // 0x00417444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00417444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
L_00417448:
    // 0x00417448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041744C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00417450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00417454: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x00417458: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x0041745C: jal         0x00200738
    // 0x00417460: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00417460: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    after_1:
    // 0x00417464: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00417468: jal         0x002052D8
    // 0x0041746C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0041746C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00417470: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00417474: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041747C: jr          $ra
    // 0x00417480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00249C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00249C20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249C24: lwc1        $f0, 0x6AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AF0);
    // 0x00249C28: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x00249C2C: sw          $s7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r23;
    // 0x00249C30: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00249C34: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x00249C38: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00249C3C: sw          $fp, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r30;
    // 0x00249C40: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x00249C44: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x00249C48: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x00249C4C: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x00249C50: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x00249C54: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x00249C58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00249C5C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x00249C60: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x00249C64: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x00249C68: sw          $s6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r22;
    // 0x00249C6C: sw          $s5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r21;
    // 0x00249C70: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
    // 0x00249C74: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x00249C78: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x00249C7C: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x00249C80: sdc1        $f22, 0x100($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X100, ctx->r29);
    // 0x00249C84: sdc1        $f21, 0xF8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XF8, ctx->r29);
    // 0x00249C88: sdc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF0, ctx->r29);
    // 0x00249C8C: jal         0x0021F00C
    // 0x00249C90: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_0021F00C(rdram, ctx);
        goto after_0;
    // 0x00249C90: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x00249C94: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x00249C98: lw          $t0, 0x8($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X8);
    // 0x00249C9C: lw          $t1, 0xC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XC);
    // 0x00249CA0: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x00249CA4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x00249CA8: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x00249CAC: jal         0x00253CFC
    // 0x00249CB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00253CFC(rdram, ctx);
        goto after_1;
    // 0x00249CB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00249CB4: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00249CB8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00249CBC: swc1        $f1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00249CC0: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x00249CC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00249CC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00249CCC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00249CD0: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00249CD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249CD8: lwc1        $f12, 0x6AF4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6AF4);
    // 0x00249CDC: lwc1        $f22, 0x1C($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00249CE0: mul.s       $f12, $f22, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x00249CE4: jal         0x002974C0
    // 0x00249CE8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00249CE8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    after_2:
    // 0x00249CEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00249CF0: addiu       $a0, $a0, -0x550F
    ctx->r4 = ADD32(ctx->r4, -0X550F);
    // 0x00249CF4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00249CF8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00249CFC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00249D00: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x00249D04: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x00249D08: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x00249D0C: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x00249D10: beq         $v0, $zero, L_00249E34
    if (ctx->r2 == 0) {
        // 0x00249D14: sw          $zero, 0x80($sp)
        MEM_W(0X80, ctx->r29) = 0;
            goto L_00249E34;
    }
    // 0x00249D14: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x00249D18: lw          $s0, -0x1261($a0)
    ctx->r16 = MEM_W(ctx->r4, -0X1261);
    // 0x00249D1C: beq         $s0, $zero, L_00249E34
    if (ctx->r16 == 0) {
        // 0x00249D20: addiu       $s1, $sp, 0x28
        ctx->r17 = ADD32(ctx->r29, 0X28);
            goto L_00249E34;
    }
    // 0x00249D20: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x00249D24: addiu       $s2, $zero, 0x1D
    ctx->r18 = ADD32(0, 0X1D);
    // 0x00249D28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249D2C: lwc1        $f21, 0x6AF8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6AF8);
    // 0x00249D30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00249D34:
    // 0x00249D34: jal         0x00249A58
    // 0x00249D38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00249A58(rdram, ctx);
        goto after_3;
    // 0x00249D38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00249D3C: beq         $v0, $zero, L_00249E28
    if (ctx->r2 == 0) {
        // 0x00249D40: nop
    
            goto L_00249E28;
    }
    // 0x00249D40: nop

    // 0x00249D44: beq         $s0, $s3, L_00249E28
    if (ctx->r16 == ctx->r19) {
        // 0x00249D48: nop
    
            goto L_00249E28;
    }
    // 0x00249D48: nop

    // 0x00249D4C: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x00249D50: bnel        $v0, $s2, L_00249D78
    if (ctx->r2 != ctx->r18) {
        // 0x00249D54: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00249D78;
    }
    goto skip_0;
    // 0x00249D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00249D58: lw          $t3, 0x214($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X214);
    // 0x00249D5C: lw          $v1, 0x218($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X218);
    // 0x00249D60: lw          $t0, 0x21C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X21C);
    // 0x00249D64: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x00249D68: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x00249D6C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00249D70: j           L_00249DB8
    // 0x00249D74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00249DB8;
    // 0x00249D74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00249D78:
    // 0x00249D78: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x00249D7C: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x00249D80: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00249D84: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00249D88: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x00249D8C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x00249D90: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00249D94: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00249D98: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00249D9C: jal         0x002671B4
    // 0x00249DA0: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002671B4(rdram, ctx);
        goto after_4;
    // 0x00249DA0: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x00249DA4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00249DA8: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00249DAC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00249DB0: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00249DB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00249DB8:
    // 0x00249DB8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00249DBC: jal         0x0020EF2C
    // 0x00249DC0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00249DC0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x00249DC4: jal         0x0020F040
    // 0x00249DC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_6;
    // 0x00249DC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00249DCC: lwc1        $f3, 0x58($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x00249DD0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00249DD4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00249DD8: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x00249DDC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00249DE0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00249DE4: lwc1        $f1, 0x60($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x00249DE8: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00249DEC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00249DF0: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00249DF4: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00249DF8: c.lt.s      $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f20.fl < ctx->f3.fl;
    // 0x00249DFC: nop

    // 0x00249E00: bc1f        L_00249E28
    if (!c1cs) {
        // 0x00249E04: nop
    
            goto L_00249E28;
    }
    // 0x00249E04: nop

    // 0x00249E08: mov.s       $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    ctx->f20.fl = ctx->f3.fl;
    // 0x00249E0C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00249E10: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x00249E14: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x00249E18: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x00249E1C: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x00249E20: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x00249E24: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00249E28:
    // 0x00249E28: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00249E2C: bnel        $s0, $zero, L_00249D34
    if (ctx->r16 != 0) {
        // 0x00249E30: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00249D34;
    }
    goto skip_1;
    // 0x00249E30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_1:
L_00249E34:
    // 0x00249E34: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x00249E38: lw          $s4, 0x7E70($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X7E70);
    // 0x00249E3C: blez        $s4, L_00249F78
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00249E40: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00249F78;
    }
    // 0x00249E40: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00249E44: addiu       $s6, $zero, 0xD
    ctx->r22 = ADD32(0, 0XD);
    // 0x00249E48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249E4C: lwc1        $f21, 0x6AFC($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6AFC);
    // 0x00249E50: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x00249E54: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_00249E58:
    // 0x00249E58: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00249E5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00249E60: lw          $s0, 0x7C70($at)
    ctx->r16 = MEM_W(ctx->r1, 0X7C70);
    // 0x00249E64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00249E68: jal         0x00249A58
    // 0x00249E6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00249A58(rdram, ctx);
        goto after_7;
    // 0x00249E6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00249E70: beql        $v0, $zero, L_00249F6C
    if (ctx->r2 == 0) {
        // 0x00249E74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00249F6C;
    }
    goto skip_2;
    // 0x00249E74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x00249E78: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x00249E7C: bnel        $v0, $s6, L_00249EA4
    if (ctx->r2 != ctx->r22) {
        // 0x00249E80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00249EA4;
    }
    goto skip_3;
    // 0x00249E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_3:
    // 0x00249E84: lw          $t0, 0x214($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X214);
    // 0x00249E88: lw          $t1, 0x218($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X218);
    // 0x00249E8C: lw          $t2, 0x21C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X21C);
    // 0x00249E90: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00249E94: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00249E98: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00249E9C: j           L_00249EE4
    // 0x00249EA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_00249EE4;
    // 0x00249EA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00249EA4:
    // 0x00249EA4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00249EA8: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x00249EAC: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x00249EB0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00249EB4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00249EB8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00249EBC: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00249EC0: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00249EC4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00249EC8: jal         0x002671B4
    // 0x00249ECC: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002671B4(rdram, ctx);
        goto after_8;
    // 0x00249ECC: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_8:
    // 0x00249ED0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00249ED4: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00249ED8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00249EDC: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00249EE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00249EE4:
    // 0x00249EE4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00249EE8: jal         0x0020EF2C
    // 0x00249EEC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_0020EF2C(rdram, ctx);
        goto after_9;
    // 0x00249EEC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_9:
    // 0x00249EF0: jal         0x0020F040
    // 0x00249EF4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0020F040(rdram, ctx);
        goto after_10;
    // 0x00249EF4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x00249EF8: lwc1        $f3, 0x58($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x00249EFC: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00249F00: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00249F04: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x00249F08: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00249F0C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00249F10: lwc1        $f1, 0x60($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x00249F14: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00249F18: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00249F1C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00249F20: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00249F24: c.lt.s      $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f20.fl < ctx->f3.fl;
    // 0x00249F28: nop

    // 0x00249F2C: bc1f        L_00249F6C
    if (!c1cs) {
        // 0x00249F30: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00249F6C;
    }
    // 0x00249F30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00249F34: mov.s       $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    ctx->f20.fl = ctx->f3.fl;
    // 0x00249F38: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x00249F3C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x00249F40: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00249F44: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00249F48: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x00249F4C: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x00249F50: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00249F54: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00249F58: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x00249F5C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x00249F60: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x00249F64: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x00249F68: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
L_00249F6C:
    // 0x00249F6C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00249F70: bne         $v0, $zero, L_00249E58
    if (ctx->r2 != 0) {
        // 0x00249F74: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_00249E58;
    }
    // 0x00249F74: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_00249F78:
    // 0x00249F78: sw          $s5, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r21;
    // 0x00249F7C: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x00249F80: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x00249F84: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x00249F88: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00249F8C: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x00249F90: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x00249F94: sw          $v1, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r3;
    // 0x00249F98: beq         $s5, $zero, L_0024A060
    if (ctx->r21 == 0) {
        // 0x00249F9C: addiu       $s0, $sp, 0x88
        ctx->r16 = ADD32(ctx->r29, 0X88);
            goto L_0024A060;
    }
    // 0x00249F9C: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x00249FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249FA4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x00249FA8: jal         0x0020EFDC
    // 0x00249FAC: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_0020EFDC(rdram, ctx);
        goto after_11;
    // 0x00249FAC: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_11:
    // 0x00249FB0: jal         0x0020F040
    // 0x00249FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_12;
    // 0x00249FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00249FB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249FBC: lwc1        $f21, 0x6B00($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6B00);
    // 0x00249FC0: jal         0x0021153C
    // 0x00249FC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021153C(rdram, ctx);
        goto after_13;
    // 0x00249FC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_13:
    // 0x00249FC8: mul.s       $f12, $f22, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f21.fl);
    // 0x00249FCC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00249FD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249FD4: lwc1        $f0, 0x6B04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6B04);
    // 0x00249FD8: div.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f12.fl);
    // 0x00249FDC: jal         0x00298470
    // 0x00249FE0: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_14;
    // 0x00249FE0: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    after_14:
    // 0x00249FE4: jal         0x00298470
    // 0x00249FE8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_15;
    // 0x00249FE8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_15:
    // 0x00249FEC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00249FF0: nop

    // 0x00249FF4: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x00249FF8: jal         0x002982F0
    // 0x00249FFC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_16;
    // 0x00249FFC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_16:
    // 0x0024A000: lwc1        $f3, 0x88($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X88);
    // 0x0024A004: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0024A008: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x0024A00C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024A010: lwc1        $f1, 0x90($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X90);
    // 0x0024A014: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024A018: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0024A01C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0024A020: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0024A024: swc1        $f3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0024A028: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x0024A02C: jal         0x002974C0
    // 0x0024A030: swc1        $f1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_17;
    // 0x0024A030: swc1        $f1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_17:
    // 0x0024A034: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x0024A038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024A03C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024A040: jal         0x0021AE6C
    // 0x0024A044: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    func_0021AE6C(rdram, ctx);
        goto after_18;
    // 0x0024A044: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x0024A048: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x0024A04C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024A050: jal         0x00210F68
    // 0x0024A054: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_00210F68(rdram, ctx);
        goto after_19;
    // 0x0024A054: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_19:
    // 0x0024A058: j           L_0024A080
    // 0x0024A05C: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
        goto L_0024A080;
    // 0x0024A05C: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_0024A060:
    // 0x0024A060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024A064: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024A068: lwc1        $f1, 0x6B08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6B08);
    // 0x0024A06C: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x0024A070: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x0024A074: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x0024A078: swc1        $f1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024A07C: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_0024A080:
    // 0x0024A080: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x0024A084: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x0024A088: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x0024A08C: lw          $v1, 0xC4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC4);
    // 0x0024A090: sw          $t1, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r9;
    // 0x0024A094: sw          $t2, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r10;
    // 0x0024A098: sw          $t3, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r11;
    // 0x0024A09C: sw          $v1, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->r3;
    // 0x0024A0A0: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x0024A0A4: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x0024A0A8: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x0024A0AC: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0024A0B0: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0024A0B4: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0024A0B8: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0024A0BC: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0024A0C0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0024A0C4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0024A0C8: ldc1        $f22, 0x100($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X100);
    // 0x0024A0CC: ldc1        $f21, 0xF8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XF8);
    // 0x0024A0D0: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x0024A0D4: jr          $ra
    // 0x0024A0D8: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x0024A0D8: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_00426D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426D5C: bne         $v1, $zero, L_00426D6C
    if (ctx->r3 != 0) {
            // 0x00426D60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_00426D6C(rdram, ctx);
    return;
    }
    // 0x00426D60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426D64: jr          $ra
    // 0x00426D68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00426D68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00206250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00206254: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206258: addiu       $a0, $a0, -0x7254
    ctx->r4 = ADD32(ctx->r4, -0X7254);
    // 0x0020625C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00206260: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00206264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206268: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020626C: beq         $v0, $zero, L_002062E0
    if (ctx->r2 == 0) {
        // 0x00206270: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_002062E0;
    }
    // 0x00206270: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00206274: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00206278: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020627C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206280: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x00206284: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00206288: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x0020628C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00206290: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00206294: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00206298: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x0020629C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x002062A0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x002062A4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x002062A8: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x002062AC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x002062B0: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x002062B4: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x002062B8: addiu       $a0, $a0, -0xBCC
    ctx->r4 = ADD32(ctx->r4, -0XBCC);
    // 0x002062BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002062C0: jal         0x00200518
    // 0x002062C4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_00200518(rdram, ctx);
        goto after_0;
    // 0x002062C4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_0:
    // 0x002062C8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002062CC: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x002062D0: andi        $a0, $s1, 0xC
    ctx->r4 = ctx->r17 & 0XC;
    // 0x002062D4: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x002062D8: j           L_002062E4
    // 0x002062DC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
        goto L_002062E4;
    // 0x002062DC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_002062E0:
    // 0x002062E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002062E4:
    // 0x002062E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002062E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002062EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002062F0: jr          $ra
    // 0x002062F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002062F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00290CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290CCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00290CD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00290CD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00290CD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00290CDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00290CE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00290CE4: jal         0x0029E230
    // 0x00290CE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x00290CE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x00290CEC: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x00290CF0: beq         $a1, $zero, L_00290D40
    if (ctx->r5 == 0) {
        // 0x00290CF4: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_00290D40;
    }
    // 0x00290CF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00290CF8:
    // 0x00290CF8: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x00290CFC: beq         $a2, $zero, L_00290D1C
    if (ctx->r6 == 0) {
        // 0x00290D00: nop
    
            goto L_00290D1C;
    }
    // 0x00290D00: nop

    // 0x00290D04: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x00290D08: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x00290D0C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00290D10: beq         $v0, $zero, L_00290D2C
    if (ctx->r2 == 0) {
        // 0x00290D14: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_00290D2C;
    }
    // 0x00290D14: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x00290D18: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
L_00290D1C:
    // 0x00290D1C: jal         0x002933E0
    // 0x00290D20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x00290D20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00290D24: j           L_00290D40
    // 0x00290D28: nop

        goto L_00290D40;
    // 0x00290D28: nop

L_00290D2C:
    // 0x00290D2C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x00290D30: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x00290D34: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x00290D38: bne         $a1, $zero, L_00290CF8
    if (ctx->r5 != 0) {
        // 0x00290D3C: nop
    
            goto L_00290CF8;
    }
    // 0x00290D3C: nop

L_00290D40:
    // 0x00290D40: jal         0x0029E230
    // 0x00290D44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E230(rdram, ctx);
        goto after_2;
    // 0x00290D44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00290D48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00290D4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00290D50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00290D54: jr          $ra
    // 0x00290D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00290D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029815C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029815C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00298160: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00298164: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00298168: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0029816C: mtc1        $a3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r7;
    // 0x00298170: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x00298174: lwc1        $f22, 0x58($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00298178: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x0029817C: lwc1        $f23, 0x5C($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x00298180: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00298184: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00298188: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029818C: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x00298190: lwc1        $f24, 0x60($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00298194: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00298198: jal         0x00297BCC
    // 0x0029819C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x0029819C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002981A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002981A4: lwc1        $f0, -0x57E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57E8);
    // 0x002981A8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002981AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002981B0: lwc1        $f0, -0x57E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57E4);
    // 0x002981B4: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002981B8: jal         0x002974C0
    // 0x002981BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x002981BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x002981C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002981C4: jal         0x002982F0
    // 0x002981C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x002981C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x002981CC: add.s       $f2, $f22, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f23.fl;
    // 0x002981D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002981D4: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002981D8: sub.s       $f3, $f22, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f3.fl = ctx->f22.fl - ctx->f23.fl;
    // 0x002981DC: div.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
    // 0x002981E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002981E4: lwc1        $f1, -0x57E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X57E0);
    // 0x002981E8: add.s       $f0, $f22, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x002981EC: swc1        $f21, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x002981F0: swc1        $f20, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f20.u32l;
    // 0x002981F4: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x002981F8: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x002981FC: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00298200: div.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00298204: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x00298208: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0029820C: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
L_00298210:
    // 0x00298210: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00298214: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00298218:
    // 0x00298218: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0029821C: mul.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x00298220: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00298224: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00298228: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x0029822C: bne         $v0, $zero, L_00298218
    if (ctx->r2 != 0) {
        // 0x00298230: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00298218;
    }
    // 0x00298230: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00298234: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00298238: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x0029823C: bne         $v0, $zero, L_00298210
    if (ctx->r2 != 0) {
        // 0x00298240: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_00298210;
    }
    // 0x00298240: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x00298244: beq         $s1, $zero, L_002982C0
    if (ctx->r17 == 0) {
        // 0x00298248: nop
    
            goto L_002982C0;
    }
    // 0x00298248: nop

    // 0x0029824C: add.s       $f2, $f22, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f23.fl;
    // 0x00298250: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298254: lwc1        $f0, -0x57DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57DC);
    // 0x00298258: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0029825C: nop

    // 0x00298260: bc1t        L_002982BC
    if (c1cs) {
        // 0x00298264: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002982BC;
    }
    // 0x00298264: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x00298268: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029826C: lwc1        $f0, -0x57D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X57D8);
    // 0x00298270: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298274: lwc1        $f1, -0x57D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X57D4);
    // 0x00298278: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0029827C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00298280: nop

    // 0x00298284: bc1tl       L_0029829C
    if (c1cs) {
        // 0x00298288: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0029829C;
    }
    goto skip_0;
    // 0x00298288: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0029828C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00298290: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00298294: j           L_002982B0
    // 0x00298298: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
        goto L_002982B0;
    // 0x00298298: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_0029829C:
    // 0x0029829C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002982A0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002982A4: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x002982A8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002982AC: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_002982B0:
    // 0x002982B0: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x002982B4: bne         $v0, $zero, L_002982C0
    if (ctx->r2 != 0) {
        // 0x002982B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002982C0;
    }
    // 0x002982B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002982BC:
    // 0x002982BC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_002982C0:
    // 0x002982C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002982C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002982C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002982CC: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x002982D0: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x002982D4: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x002982D8: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x002982DC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002982E0: jr          $ra
    // 0x002982E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002982E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004527E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004527E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004527E8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004527EC: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004527F0: addiu       $a2, $a2, -0x640C
    ctx->r6 = ADD32(ctx->r6, -0X640C);
    // 0x004527F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004527F8: jal         0x00416894
    // 0x004527FC: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004527FC: nop

    after_0:
    // 0x00452800: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452808: jr          $ra
    // 0x0045280C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045280C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426084: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00426088: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0042608C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426090: beq         $v1, $v0, L_004260A0
    if (ctx->r3 == ctx->r2) {
        // 0x00426094: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_004260A0;
    }
    // 0x00426094: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00426098: j           L_0042614C
    // 0x0042609C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_0042614C;
    // 0x0042609C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_004260A0:
    // 0x004260A0: jal         0x00285878
    // 0x004260A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x004260A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x004260A8: jal         0x002847E0
    // 0x004260AC: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x004260AC: nop

    after_1:
    // 0x004260B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004260B4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004260B8: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x004260BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004260C0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004260C4: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x004260C8: bne         $s0, $zero, L_00426140
    if (ctx->r16 != 0) {
        // 0x004260CC: sll         $a0, $s1, 1
        ctx->r4 = S32(ctx->r17 << 1);
            goto L_00426140;
    }
    // 0x004260CC: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x004260D0: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x004260D4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x004260D8: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x004260DC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x004260E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004260E4: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x004260E8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x004260EC: sll         $a3, $s1, 7
    ctx->r7 = S32(ctx->r17 << 7);
    // 0x004260F0: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x004260F4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004260F8: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x004260FC: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x00426100: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00426104: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x00426108: addu        $v1, $a3, $v0
    ctx->r3 = ADD32(ctx->r7, ctx->r2);
    // 0x0042610C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00426110: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00426114: lhu         $a1, 0xC($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0XC);
    // 0x00426118: addiu       $v0, $a3, 0xA
    ctx->r2 = ADD32(ctx->r7, 0XA);
    // 0x0042611C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00426120: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x00426124: jal         0x00427780
    // 0x00426128: addiu       $a3, $a3, 0xE
    ctx->r7 = ADD32(ctx->r7, 0XE);
    func_00427780(rdram, ctx);
        goto after_2;
    // 0x00426128: addiu       $a3, $a3, 0xE
    ctx->r7 = ADD32(ctx->r7, 0XE);
    after_2:
    // 0x0042612C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00426130: bnel        $s0, $zero, L_00426138
    if (ctx->r16 != 0) {
        // 0x00426134: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00426138;
    }
    goto skip_0;
    // 0x00426134: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_0:
L_00426138:
    // 0x00426138: jal         0x004258E8
    // 0x0042613C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x0042613C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_00426140:
    // 0x00426140: jal         0x002858A4
    // 0x00426144: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x00426144: nop

    after_4:
    // 0x00426148: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0042614C:
    // 0x0042614C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00426150: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00426154: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00426158: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0042615C: jr          $ra
    // 0x00426160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00426160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042F9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F9B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042F9B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042F9B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042F9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042F9C0: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0042F9C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0042F9C8: jal         0x00280C28
    // 0x0042F9CC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    func_00280C28(rdram, ctx);
        goto after_0;
    // 0x0042F9CC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    after_0:
    // 0x0042F9D0: jal         0x0020F79C
    // 0x0042F9D4: addiu       $a0, $s0, 0x14C
    ctx->r4 = ADD32(ctx->r16, 0X14C);
    func_0020F79C(rdram, ctx);
        goto after_1;
    // 0x0042F9D4: addiu       $a0, $s0, 0x14C
    ctx->r4 = ADD32(ctx->r16, 0X14C);
    after_1:
    // 0x0042F9D8: jal         0x0020F79C
    // 0x0042F9DC: addiu       $a0, $s0, 0x1CC
    ctx->r4 = ADD32(ctx->r16, 0X1CC);
    func_0020F79C(rdram, ctx);
        goto after_2;
    // 0x0042F9DC: addiu       $a0, $s0, 0x1CC
    ctx->r4 = ADD32(ctx->r16, 0X1CC);
    after_2:
    // 0x0042F9E0: addiu       $a0, $s0, 0x18C
    ctx->r4 = ADD32(ctx->r16, 0X18C);
    // 0x0042F9E4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0042F9E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042F9EC: lwc1        $f21, -0x6810($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6810);
    // 0x0042F9F0: addiu       $v0, $s0, 0x12C
    ctx->r2 = ADD32(ctx->r16, 0X12C);
    // 0x0042F9F4: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x0042F9F8: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0042F9FC: swc1        $f20, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f20.u32l;
    // 0x0042FA00: jal         0x0020F79C
    // 0x0042FA04: swc1        $f21, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    func_0020F79C(rdram, ctx);
        goto after_3;
    // 0x0042FA04: swc1        $f21, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    after_3:
    // 0x0042FA08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042FA0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042FA10: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0042FA14: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0042FA18: swc1        $f0, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f0.u32l;
    // 0x0042FA1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042FA20: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0042FA24: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0042FA28: swc1        $f0, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f0.u32l;
    // 0x0042FA2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042FA30: lwc1        $f0, -0x680C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X680C);
    // 0x0042FA34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042FA38: lwc1        $f1, -0x6808($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6808);
    // 0x0042FA3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042FA40: sw          $v0, 0x500($s0)
    MEM_W(0X500, ctx->r16) = ctx->r2;
    // 0x0042FA44: addiu       $v0, $zero, 0x3E3
    ctx->r2 = ADD32(0, 0X3E3);
    // 0x0042FA48: swc1        $f20, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f20.u32l;
    // 0x0042FA4C: swc1        $f20, 0x294($s0)
    MEM_W(0X294, ctx->r16) = ctx->f20.u32l;
    // 0x0042FA50: sb          $zero, 0x508($s0)
    MEM_B(0X508, ctx->r16) = 0;
    // 0x0042FA54: sb          $zero, 0x50C($s0)
    MEM_B(0X50C, ctx->r16) = 0;
    // 0x0042FA58: sb          $zero, 0x509($s0)
    MEM_B(0X509, ctx->r16) = 0;
    // 0x0042FA5C: sb          $zero, 0x50D($s0)
    MEM_B(0X50D, ctx->r16) = 0;
    // 0x0042FA60: sb          $zero, 0x50A($s0)
    MEM_B(0X50A, ctx->r16) = 0;
    // 0x0042FA64: sb          $zero, 0x50E($s0)
    MEM_B(0X50E, ctx->r16) = 0;
    // 0x0042FA68: sb          $zero, 0x50B($s0)
    MEM_B(0X50B, ctx->r16) = 0;
    // 0x0042FA6C: sb          $zero, 0x50F($s0)
    MEM_B(0X50F, ctx->r16) = 0;
    // 0x0042FA70: swc1        $f21, 0x504($s0)
    MEM_W(0X504, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x0042FA74: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042FA78: sw          $v0, 0x528($s0)
    MEM_W(0X528, ctx->r16) = ctx->r2;
    // 0x0042FA7C: sb          $zero, 0x530($s0)
    MEM_B(0X530, ctx->r16) = 0;
    // 0x0042FA80: swc1        $f21, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x0042FA84: swc1        $f21, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x0042FA88: swc1        $f0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->f0.u32l;
    // 0x0042FA8C: swc1        $f0, 0x514($s0)
    MEM_W(0X514, ctx->r16) = ctx->f0.u32l;
    // 0x0042FA90: swc1        $f1, 0x518($s0)
    MEM_W(0X518, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042FA94: jal         0x00281278
    // 0x0042FA98: swc1        $f1, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_00281278(rdram, ctx);
        goto after_4;
    // 0x0042FA98: swc1        $f1, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x0042FA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042FAA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FAA4: addiu       $v0, $s0, 0x94
    ctx->r2 = ADD32(ctx->r16, 0X94);
    // 0x0042FAA8: swc1        $f20, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f20.u32l;
    // 0x0042FAAC: swc1        $f20, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f20.u32l;
    // 0x0042FAB0: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAB4: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAB8: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x0042FABC: swc1        $f21, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f_odd[(21 - 1) * 2];
    // 0x0042FAC0: addiu       $v0, $s0, 0xAC
    ctx->r2 = ADD32(ctx->r16, 0XAC);
    // 0x0042FAC4: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAC8: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x0042FACC: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAD0: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAD4: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x0042FAD8: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0042FADC: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAE0: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAE4: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAE8: addiu       $v0, $s0, 0xD4
    ctx->r2 = ADD32(ctx->r16, 0XD4);
    // 0x0042FAEC: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAF0: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAF4: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x0042FAF8: jal         0x00280E64
    // 0x0042FAFC: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    func_00280E64(rdram, ctx);
        goto after_5;
    // 0x0042FAFC: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    after_5:
    // 0x0042FB00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FB04: addiu       $a2, $zero, 0x3FF
    ctx->r6 = ADD32(0, 0X3FF);
    // 0x0042FB08: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042FB0C: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0042FB10: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x0042FB14: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
L_0042FB18:
    // 0x0042FB18: sh          $a0, 0x298($v1)
    MEM_H(0X298, ctx->r3) = ctx->r4;
    // 0x0042FB1C: sh          $a0, 0x29A($v1)
    MEM_H(0X29A, ctx->r3) = ctx->r4;
    // 0x0042FB20: sh          $a2, 0x29C($v1)
    MEM_H(0X29C, ctx->r3) = ctx->r6;
    // 0x0042FB24: sh          $zero, 0x29E($v1)
    MEM_H(0X29E, ctx->r3) = 0;
    // 0x0042FB28: sh          $a0, 0x2A0($v1)
    MEM_H(0X2A0, ctx->r3) = ctx->r4;
    // 0x0042FB2C: sh          $a0, 0x2A2($v1)
    MEM_H(0X2A2, ctx->r3) = ctx->r4;
    // 0x0042FB30: sh          $zero, 0x2A4($v1)
    MEM_H(0X2A4, ctx->r3) = 0;
    // 0x0042FB34: sh          $zero, 0x2A6($v1)
    MEM_H(0X2A6, ctx->r3) = 0;
    // 0x0042FB38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042FB3C: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x0042FB40: bne         $v0, $zero, L_0042FB18
    if (ctx->r2 != 0) {
        // 0x0042FB44: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042FB18;
    }
    // 0x0042FB44: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042FB48: jal         0x00416614
    // 0x0042FB4C: addiu       $a0, $s0, 0x53C
    ctx->r4 = ADD32(ctx->r16, 0X53C);
    func_00416614(rdram, ctx);
        goto after_6;
    // 0x0042FB4C: addiu       $a0, $s0, 0x53C
    ctx->r4 = ADD32(ctx->r16, 0X53C);
    after_6:
    // 0x0042FB50: jal         0x0042FFF0
    // 0x0042FB54: addiu       $a0, $s0, 0x558
    ctx->r4 = ADD32(ctx->r16, 0X558);
    func_0042FFF0(rdram, ctx);
        goto after_7;
    // 0x0042FB54: addiu       $a0, $s0, 0x558
    ctx->r4 = ADD32(ctx->r16, 0X558);
    after_7:
    // 0x0042FB58: jal         0x0020F79C
    // 0x0042FB5C: addiu       $a0, $s0, 0xE3C
    ctx->r4 = ADD32(ctx->r16, 0XE3C);
    func_0020F79C(rdram, ctx);
        goto after_8;
    // 0x0042FB5C: addiu       $a0, $s0, 0xE3C
    ctx->r4 = ADD32(ctx->r16, 0XE3C);
    after_8:
    // 0x0042FB60: jal         0x0020F79C
    // 0x0042FB64: addiu       $a0, $s0, 0xE7C
    ctx->r4 = ADD32(ctx->r16, 0XE7C);
    func_0020F79C(rdram, ctx);
        goto after_9;
    // 0x0042FB64: addiu       $a0, $s0, 0xE7C
    ctx->r4 = ADD32(ctx->r16, 0XE7C);
    after_9:
    // 0x0042FB68: addiu       $a0, $s0, 0xE28
    ctx->r4 = ADD32(ctx->r16, 0XE28);
    // 0x0042FB6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FB70: sw          $zero, 0x52C($s0)
    MEM_W(0X52C, ctx->r16) = 0;
    // 0x0042FB74: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0042FB78: sw          $zero, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = 0;
    // 0x0042FB7C: jal         0x00200500
    // 0x0042FB80: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_10;
    // 0x0042FB80: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x0042FB84: jal         0x00281A98
    // 0x0042FB88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281A98(rdram, ctx);
        goto after_11;
    // 0x0042FB88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0042FB8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042FB90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FB94: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0042FB98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0042FB9C: jr          $ra
    // 0x0042FBA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042FBA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002975C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002975C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x002975C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002975CC: nop

    // 0x002975D0: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x002975D4: sdc1        $f29, 0xB0($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0XB0, ctx->r29);
    // 0x002975D8: mtc1        $a1, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r5;
    // 0x002975DC: mtc1        $a2, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r6;
    // 0x002975E0: sdc1        $f26, 0x98($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X98, ctx->r29);
    // 0x002975E4: lwc1        $f26, 0xD0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x002975E8: sdc1        $f27, 0xA0($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0XA0, ctx->r29);
    // 0x002975EC: lwc1        $f27, 0xD4($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0XD4);
    // 0x002975F0: sdc1        $f28, 0xA8($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0XA8, ctx->r29);
    // 0x002975F4: lwc1        $f28, 0xD8($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x002975F8: sdc1        $f25, 0x90($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X90, ctx->r29);
    // 0x002975FC: lwc1        $f25, 0xDC($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0XDC);
    // 0x00297600: sdc1        $f21, 0x70($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X70, ctx->r29);
    // 0x00297604: lwc1        $f21, 0xE0($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0XE0);
    // 0x00297608: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0029760C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00297610: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00297614: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00297618: sdc1        $f22, 0x78($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X78, ctx->r29);
    // 0x0029761C: lwc1        $f22, 0xE4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x00297620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00297624: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x00297628: sdc1        $f30, 0xB8($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0XB8, ctx->r29);
    // 0x0029762C: sdc1        $f24, 0x88($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X88, ctx->r29);
    // 0x00297630: sdc1        $f23, 0x80($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X80, ctx->r29);
    // 0x00297634: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x00297638: jal         0x00297BCC
    // 0x0029763C: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x0029763C: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    after_0:
    // 0x00297640: sub.s       $f26, $f26, $f29
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f26.fl = ctx->f26.fl - ctx->f29.fl;
    // 0x00297644: mul.s       $f12, $f26, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x00297648: sub.s       $f27, $f27, $f31
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f27.fl = ctx->f27.fl - ctx->f31.fl;
    // 0x0029764C: mul.s       $f1, $f27, $f27
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f1.fl = MUL_S(ctx->f27.fl, ctx->f27.fl);
    // 0x00297650: lwc1        $f7, 0xCC($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0XCC);
    // 0x00297654: sub.s       $f28, $f28, $f7
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f28.fl = ctx->f28.fl - ctx->f7.fl;
    // 0x00297658: mul.s       $f0, $f28, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x0029765C: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00297660: jal         0x00298470
    // 0x00297664: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x00297664: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_1:
    // 0x00297668: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029766C: lwc1        $f1, -0x5850($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5850);
    // 0x00297670: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00297674: mul.s       $f26, $f26, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f1.fl);
    // 0x00297678: nop

    // 0x0029767C: mul.s       $f28, $f28, $f1
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f1.fl);
    // 0x00297680: nop

    // 0x00297684: mul.s       $f27, $f27, $f1
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f27.fl = MUL_S(ctx->f27.fl, ctx->f1.fl);
    // 0x00297688: nop

    // 0x0029768C: mul.s       $f20, $f21, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = MUL_S(ctx->f21.fl, ctx->f28.fl);
    // 0x00297690: nop

    // 0x00297694: mul.s       $f0, $f22, $f27
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f27.fl);
    // 0x00297698: nop

    // 0x0029769C: mul.s       $f22, $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x002976A0: nop

    // 0x002976A4: mul.s       $f1, $f25, $f28
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f1.fl = MUL_S(ctx->f25.fl, ctx->f28.fl);
    // 0x002976A8: nop

    // 0x002976AC: mul.s       $f25, $f25, $f27
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f27.fl);
    // 0x002976B0: nop

    // 0x002976B4: mul.s       $f21, $f21, $f26
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f26.fl);
    // 0x002976B8: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x002976BC: mul.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x002976C0: sub.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f1.fl;
    // 0x002976C4: mul.s       $f1, $f22, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x002976C8: sub.s       $f25, $f25, $f21
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f25.fl = ctx->f25.fl - ctx->f21.fl;
    // 0x002976CC: mul.s       $f0, $f25, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = MUL_S(ctx->f25.fl, ctx->f25.fl);
    // 0x002976D0: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x002976D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002976D8: lwc1        $f30, -0x584C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X584C);
    // 0x002976DC: jal         0x00298470
    // 0x002976E0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x002976E0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_2:
    // 0x002976E4: div.s       $f1, $f30, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f30.fl, ctx->f0.fl);
    // 0x002976E8: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x002976EC: nop

    // 0x002976F0: mul.s       $f25, $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x002976F4: nop

    // 0x002976F8: mul.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x002976FC: nop

    // 0x00297700: mul.s       $f23, $f27, $f25
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f23.fl = MUL_S(ctx->f27.fl, ctx->f25.fl);
    // 0x00297704: nop

    // 0x00297708: mul.s       $f0, $f28, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f28.fl, ctx->f22.fl);
    // 0x0029770C: nop

    // 0x00297710: mul.s       $f24, $f28, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f28.fl, ctx->f20.fl);
    // 0x00297714: nop

    // 0x00297718: mul.s       $f1, $f26, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f1.fl = MUL_S(ctx->f26.fl, ctx->f25.fl);
    // 0x0029771C: nop

    // 0x00297720: mul.s       $f21, $f26, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f21.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x00297724: nop

    // 0x00297728: mul.s       $f2, $f27, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f27.fl, ctx->f20.fl);
    // 0x0029772C: sub.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x00297730: mul.s       $f12, $f23, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = MUL_S(ctx->f23.fl, ctx->f23.fl);
    // 0x00297734: sub.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f1.fl;
    // 0x00297738: mul.s       $f1, $f24, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x0029773C: sub.s       $f21, $f21, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f2.fl;
    // 0x00297740: mul.s       $f0, $f21, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x00297744: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00297748: jal         0x00298470
    // 0x0029774C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0029774C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_3:
    // 0x00297750: div.s       $f1, $f30, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f30.fl, ctx->f0.fl);
    // 0x00297754: mul.s       $f23, $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f1.fl);
    // 0x00297758: nop

    // 0x0029775C: mul.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f1.fl);
    // 0x00297760: nop

    // 0x00297764: mul.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x00297768: nop

    // 0x0029776C: mul.s       $f0, $f29, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f29.fl, ctx->f20.fl);
    // 0x00297770: nop

    // 0x00297774: mul.s       $f2, $f31, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f31.fl, ctx->f22.fl);
    // 0x00297778: lwc1        $f7, 0xCC($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0XCC);
    // 0x0029777C: mul.s       $f3, $f7, $f25
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f3.fl = MUL_S(ctx->f7.fl, ctx->f25.fl);
    // 0x00297780: nop

    // 0x00297784: mul.s       $f6, $f7, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f7.fl, ctx->f28.fl);
    // 0x00297788: nop

    // 0x0029778C: mul.s       $f1, $f29, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = MUL_S(ctx->f29.fl, ctx->f23.fl);
    // 0x00297790: nop

    // 0x00297794: mul.s       $f4, $f31, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f31.fl, ctx->f24.fl);
    // 0x00297798: nop

    // 0x0029779C: mul.s       $f5, $f7, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f5.fl = MUL_S(ctx->f7.fl, ctx->f21.fl);
    // 0x002977A0: nop

    // 0x002977A4: mul.s       $f29, $f29, $f26
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f29.fl = MUL_S(ctx->f29.fl, ctx->f26.fl);
    // 0x002977A8: nop

    // 0x002977AC: mul.s       $f31, $f31, $f27
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f31.fl = MUL_S(ctx->f31.fl, ctx->f27.fl);
    // 0x002977B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002977B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002977B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x002977BC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x002977C0: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x002977C4: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x002977C8: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x002977CC: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x002977D0: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x002977D4: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x002977D8: swc1        $f28, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f28.u32l;
    // 0x002977DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x002977E0: add.s       $f29, $f29, $f31
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f29.fl = ctx->f29.fl + ctx->f31.fl;
    // 0x002977E4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x002977E8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x002977EC: add.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f5.fl;
    // 0x002977F0: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x002977F4: swc1        $f23, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x002977F8: add.s       $f29, $f29, $f6
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f29.fl = ctx->f29.fl + ctx->f6.fl;
    // 0x002977FC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x00297800: swc1        $f21, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00297804: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00297808: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x0029780C: neg.s       $f29, $f29
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f29.fl); 
    ctx->f29.fl = -ctx->f29.fl;
    // 0x00297810: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x00297814: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00297818: jal         0x00297C1C
    // 0x0029781C: swc1        $f1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00297C1C(rdram, ctx);
        goto after_4;
    // 0x0029781C: swc1        $f1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x00297820: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x00297824: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00297828: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0029782C: ldc1        $f30, 0xB8($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0XB8);
    // 0x00297830: ldc1        $f29, 0xB0($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0XB0);
    // 0x00297834: ldc1        $f28, 0xA8($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0XA8);
    // 0x00297838: ldc1        $f27, 0xA0($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0XA0);
    // 0x0029783C: ldc1        $f26, 0x98($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X98);
    // 0x00297840: ldc1        $f25, 0x90($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X90);
    // 0x00297844: ldc1        $f24, 0x88($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X88);
    // 0x00297848: ldc1        $f23, 0x80($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X80);
    // 0x0029784C: ldc1        $f22, 0x78($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X78);
    // 0x00297850: ldc1        $f21, 0x70($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X70);
    // 0x00297854: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x00297858: jr          $ra
    // 0x0029785C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x0029785C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_002680F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002680F8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x002680FC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00268100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268104: beq         $v1, $v0, L_00268114
    if (ctx->r3 == ctx->r2) {
            // 0x00268108: nop

    func_00268114(rdram, ctx);
    return;
    }
    // 0x00268108: nop

    // 0x0026810C: jr          $ra
    // 0x00268110: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268110: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00467ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00467AE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467AE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00467AE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00467AEC: addiu       $a2, $zero, -0x28
    ctx->r6 = ADD32(0, -0X28);
    // 0x00467AF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00467AF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00467AF8: jal         0x0027ACC4
    // 0x00467AFC: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    func_0027ACC4(rdram, ctx);
        goto after_0;
    // 0x00467AFC: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    after_0:
    // 0x00467B00: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00467B04: addiu       $a1, $a1, 0x2C30
    ctx->r5 = ADD32(ctx->r5, 0X2C30);
    // 0x00467B08: jal         0x0027AD00
    // 0x00467B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_1;
    // 0x00467B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00467B10: addiu       $s1, $s0, 0x48
    ctx->r17 = ADD32(ctx->r16, 0X48);
    // 0x00467B14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00467B18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00467B1C: addiu       $a2, $zero, -0x14
    ctx->r6 = ADD32(0, -0X14);
    // 0x00467B20: jal         0x0027ACC4
    // 0x00467B24: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    func_0027ACC4(rdram, ctx);
        goto after_2;
    // 0x00467B24: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    after_2:
    // 0x00467B28: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00467B2C: addiu       $a1, $a1, 0x2C40
    ctx->r5 = ADD32(ctx->r5, 0X2C40);
    // 0x00467B30: jal         0x0027AD00
    // 0x00467B34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027AD00(rdram, ctx);
        goto after_3;
    // 0x00467B34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00467B38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00467B3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00467B40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467B44: jr          $ra
    // 0x00467B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00467B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002843D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002843D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002843D8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002843DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002843E0: lwc1        $f0, -0x6328($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6328);
    // 0x002843E4: lwc1        $f1, 0xA0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XA0);
    // 0x002843E8: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002843EC: jr          $ra
    // 0x002843F0: nop

    return;
    // 0x002843F0: nop

;}
RECOMP_FUNC void func_00419618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419618: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041961C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00419620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00419624: jal         0x00421250
    // 0x00419628: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00421250(rdram, ctx);
        goto after_0;
    // 0x00419628: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0041962C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00419630: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00419634: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00419638: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0041963C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00419640: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00419644: addiu       $a1, $a1, -0x4910
    ctx->r5 = ADD32(ctx->r5, -0X4910);
    // 0x00419648: jal         0x00416644
    // 0x0041964C: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0041964C: nop

    after_1:
    // 0x00419650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419654: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041965C: jr          $ra
    // 0x00419660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00406000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406000: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x00406004: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x00406008: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040600C: sw          $s4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r20;
    // 0x00406010: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00406014: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00406018: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040601C: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x00406020: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00406024: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00406028: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x0040602C: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x00406030: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x00406034: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x00406038: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x0040603C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00406040: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00406044: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00406048: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0040604C: jal         0x00246108
    // 0x00406050: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00406050: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00406054: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00406058: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0040605C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00406060: addiu       $s1, $s1, -0x62C
    ctx->r17 = ADD32(ctx->r17, -0X62C);
    // 0x00406064: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00406068: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x0040606C: sw          $s3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r19;
    // 0x00406070: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00406074: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00406078: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x0040607C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00406080: beq         $a0, $zero, L_00406338
    if (ctx->r4 == 0) {
        // 0x00406084: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00406338;
    }
    // 0x00406084: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00406088: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0040608C: bne         $v1, $v0, L_004060C8
    if (ctx->r3 != ctx->r2) {
        // 0x00406090: nop
    
            goto L_004060C8;
    }
    // 0x00406090: nop

    // 0x00406094: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x00406098: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x0040609C: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x004060A0: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x004060A4: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x004060A8: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x004060AC: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x004060B0: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x004060B4: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x004060B8: jal         0x00246310
    // 0x004060BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_1;
    // 0x004060BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x004060C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x004060C4: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
L_004060C8:
    // 0x004060C8: lw          $t0, 0x5C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X5C);
    // 0x004060CC: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
    // 0x004060D0: lw          $t2, 0x64($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X64);
    // 0x004060D4: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x004060D8: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x004060DC: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x004060E0: beq         $v1, $s3, L_004060F0
    if (ctx->r3 == ctx->r19) {
        // 0x004060E4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_004060F0;
    }
    // 0x004060E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x004060E8: bne         $v1, $v0, L_0040610C
    if (ctx->r3 != ctx->r2) {
        // 0x004060EC: addiu       $a0, $sp, 0xA0
        ctx->r4 = ADD32(ctx->r29, 0XA0);
            goto L_0040610C;
    }
    // 0x004060EC: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
L_004060F0:
    // 0x004060F0: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x004060F4: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x004060F8: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x004060FC: jal         0x00246310
    // 0x00406100: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_2;
    // 0x00406100: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00406104: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00406108: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
L_0040610C:
    // 0x0040610C: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x00406110: jal         0x0020EF2C
    // 0x00406114: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00406114: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_3:
    // 0x00406118: lwc1        $f0, 0xA0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x0040611C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00406120: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x00406124: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00406128: jal         0x00298470
    // 0x0040612C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x0040612C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x00406130: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406134: lwc1        $f1, 0x4A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4A4);
    // 0x00406138: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0040613C: nop

    // 0x00406140: bc1f        L_00406338
    if (!c1cs) {
        // 0x00406144: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_00406338;
    }
    // 0x00406144: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00406148: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040614C: addiu       $s0, $s0, -0x628
    ctx->r16 = ADD32(ctx->r16, -0X628);
    // 0x00406150: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00406154: bne         $a0, $a1, L_004061E8
    if (ctx->r4 != ctx->r5) {
        // 0x00406158: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_004061E8;
    }
    // 0x00406158: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0040615C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406160: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00406164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00406168: bne         $v1, $v0, L_00406180
    if (ctx->r3 != ctx->r2) {
        // 0x0040616C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00406180;
    }
    // 0x0040616C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406170: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406174: addiu       $v0, $v0, 0x1008
    ctx->r2 = ADD32(ctx->r2, 0X1008);
    // 0x00406178: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x0040617C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00406180:
    // 0x00406180: bne         $v1, $v0, L_00406194
    if (ctx->r3 != ctx->r2) {
        // 0x00406184: nop
    
            goto L_00406194;
    }
    // 0x00406184: nop

    // 0x00406188: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040618C: addiu       $v0, $v0, 0x10E4
    ctx->r2 = ADD32(ctx->r2, 0X10E4);
    // 0x00406190: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_00406194:
    // 0x00406194: bne         $v1, $a0, L_004061A8
    if (ctx->r3 != ctx->r4) {
        // 0x00406198: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004061A8;
    }
    // 0x00406198: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040619C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004061A0: addiu       $v0, $v0, 0x1238
    ctx->r2 = ADD32(ctx->r2, 0X1238);
    // 0x004061A4: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_004061A8:
    // 0x004061A8: lw          $a0, -0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X60);
    // 0x004061AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004061B0: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x004061B4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x004061B8: jal         0x00243414
    // 0x004061BC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x004061BC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_5:
    // 0x004061C0: lw          $a0, -0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X64);
    // 0x004061C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004061C8: jal         0x00243414
    // 0x004061CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x004061CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_6:
    // 0x004061D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004061D4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004061D8: jal         0x00243414
    // 0x004061DC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_00243414(rdram, ctx);
        goto after_7;
    // 0x004061DC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_7:
    // 0x004061E0: j           L_00406570
    // 0x004061E4: nop

        goto L_00406570;
    // 0x004061E4: nop

L_004061E8:
    // 0x004061E8: bne         $a0, $v0, L_0040625C
    if (ctx->r4 != ctx->r2) {
        // 0x004061EC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0040625C;
    }
    // 0x004061EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004061F0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004061F4: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x004061F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004061FC: bne         $v1, $v0, L_00406214
    if (ctx->r3 != ctx->r2) {
        // 0x00406200: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00406214;
    }
    // 0x00406200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406204: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406208: addiu       $v0, $v0, 0x1008
    ctx->r2 = ADD32(ctx->r2, 0X1008);
    // 0x0040620C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00406210: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00406214:
    // 0x00406214: bne         $v1, $v0, L_00406228
    if (ctx->r3 != ctx->r2) {
        // 0x00406218: nop
    
            goto L_00406228;
    }
    // 0x00406218: nop

    // 0x0040621C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406220: addiu       $v0, $v0, 0x10E4
    ctx->r2 = ADD32(ctx->r2, 0X10E4);
    // 0x00406224: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_00406228:
    // 0x00406228: bne         $v1, $a1, L_0040623C
    if (ctx->r3 != ctx->r5) {
        // 0x0040622C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0040623C;
    }
    // 0x0040622C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00406230: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406234: addiu       $v0, $v0, 0x1238
    ctx->r2 = ADD32(ctx->r2, 0X1238);
    // 0x00406238: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0040623C:
    // 0x0040623C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00406240: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x00406244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406248: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x0040624C: jal         0x00243414
    // 0x00406250: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x00406250: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    after_8:
    // 0x00406254: j           L_00406570
    // 0x00406258: nop

        goto L_00406570;
    // 0x00406258: nop

L_0040625C:
    // 0x0040625C: bne         $a0, $v0, L_0040633C
    if (ctx->r4 != ctx->r2) {
        // 0x00406260: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0040633C;
    }
    // 0x00406260: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00406264: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406268: lw          $v1, -0xA00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XA00);
    // 0x0040626C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00406270: lw          $a1, -0x4B8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4B8);
    // 0x00406274: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00406278: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040627C: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x00406280: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00406284: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040628C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00406290: lw          $a0, 0x18F0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X18F0);
    // 0x00406294: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00406298: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0040629C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x004062A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004062A4: sw          $v1, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = ctx->r3;
    // 0x004062A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004062AC: nop

    // 0x004062B0: bc1f        L_004062E8
    if (!c1cs) {
        // 0x004062B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004062E8;
    }
    // 0x004062B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004062B8: lw          $v1, -0x3D0($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X3D0);
    // 0x004062BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004062C0: sw          $zero, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = 0;
    // 0x004062C4: beq         $v1, $v0, L_004062E8
    if (ctx->r3 == ctx->r2) {
        // 0x004062C8: addu        $v0, $a1, $v0
        ctx->r2 = ADD32(ctx->r5, ctx->r2);
            goto L_004062E8;
    }
    // 0x004062C8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x004062CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004062D0: sw          $v0, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = ctx->r2;
    // 0x004062D4: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x004062D8: bne         $v0, $zero, L_004062E8
    if (ctx->r2 != 0) {
        // 0x004062DC: nop
    
            goto L_004062E8;
    }
    // 0x004062DC: nop

    // 0x004062E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004062E4: sw          $zero, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = 0;
L_004062E8:
    // 0x004062E8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004062EC: lw          $v1, -0x4B8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4B8);
    // 0x004062F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004062F4: lw          $a0, -0xA00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA00);
    // 0x004062F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004062FC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00406300: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00406304: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406308: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0040630C: lw          $v1, 0x18F0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X18F0);
    // 0x00406310: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00406314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00406318: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0040631C: addiu       $t3, $t3, -0x5D0
    ctx->r11 = ADD32(ctx->r11, -0X5D0);
    // 0x00406320: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00406324: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00406328: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0040632C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x00406330: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x00406334: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
L_00406338:
    // 0x00406338: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040633C:
    // 0x0040633C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00406340: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00406344: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00406348: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0040634C: jal         0x00245BAC
    // 0x00406350: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00245BAC(rdram, ctx);
        goto after_9;
    // 0x00406350: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_9:
    // 0x00406354: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x00406358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040635C: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x00406360: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00406364: addiu       $s1, $s1, -0x5D0
    ctx->r17 = ADD32(ctx->r17, -0X5D0);
    // 0x00406368: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x0040636C: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x00406370: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x00406374: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x00406378: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x0040637C: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x00406380: jal         0x0020EF2C
    // 0x00406384: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020EF2C(rdram, ctx);
        goto after_10;
    // 0x00406384: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_10:
    // 0x00406388: jal         0x0020EAA0
    // 0x0040638C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_11;
    // 0x0040638C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x00406390: lw          $v1, -0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X58);
    // 0x00406394: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406398: beq         $v1, $v0, L_004063AC
    if (ctx->r3 == ctx->r2) {
        // 0x0040639C: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_004063AC;
    }
    // 0x0040639C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x004063A0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x004063A4: bne         $v1, $v0, L_00406410
    if (ctx->r3 != ctx->r2) {
        // 0x004063A8: nop
    
            goto L_00406410;
    }
    // 0x004063A8: nop

L_004063AC:
    // 0x004063AC: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x004063B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004063B4: lwc1        $f0, 0x4A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A8);
    // 0x004063B8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004063BC: nop

    // 0x004063C0: bc1f        L_004063D8
    if (!c1cs) {
        // 0x004063C4: nop
    
            goto L_004063D8;
    }
    // 0x004063C4: nop

    // 0x004063C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004063CC: lwc1        $f0, 0x4AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4AC);
    // 0x004063D0: j           L_004063E4
    // 0x004063D4: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
        goto L_004063E4;
    // 0x004063D4: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
L_004063D8:
    // 0x004063D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004063DC: lwc1        $f0, 0x4B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4B0);
    // 0x004063E0: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
L_004063E4:
    // 0x004063E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004063E8: lwc1        $f20, 0x4B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4B4);
    // 0x004063EC: jal         0x002982F0
    // 0x004063F0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_12;
    // 0x004063F0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_12:
    // 0x004063F4: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x004063F8: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x004063FC: jal         0x002974C0
    // 0x00406400: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_13;
    // 0x00406400: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    after_13:
    // 0x00406404: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00406408: j           L_00406460
    // 0x0040640C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
        goto L_00406460;
    // 0x0040640C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
L_00406410:
    // 0x00406410: lwc1        $f14, -0x41C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, -0X41C);
    // 0x00406414: lui         $a2, 0x45A0
    ctx->r6 = S32(0X45A0 << 16);
    // 0x00406418: jal         0x0021160C
    // 0x0040641C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021160C(rdram, ctx);
        goto after_14;
    // 0x0040641C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_14:
    // 0x00406420: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00406424: jal         0x002982F0
    // 0x00406428: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_15;
    // 0x00406428: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_15:
    // 0x0040642C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00406430: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x00406434: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00406438: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0040643C: jal         0x002974C0
    // 0x00406440: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_16;
    // 0x00406440: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    after_16:
    // 0x00406444: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00406448: lwc1        $f1, 0x20($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X20);
    // 0x0040644C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00406450: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406454: lwc1        $f0, 0x4B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4B8);
    // 0x00406458: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0040645C: swc1        $f1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_00406460:
    // 0x00406460: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00406464: addiu       $a0, $a0, -0x61F
    ctx->r4 = ADD32(ctx->r4, -0X61F);
    // 0x00406468: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0040646C: beq         $v0, $zero, L_00406570
    if (ctx->r2 == 0) {
        // 0x00406470: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00406570;
    }
    // 0x00406470: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406474: lw          $v1, -0x9($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X9);
    // 0x00406478: beq         $v1, $v0, L_00406570
    if (ctx->r3 == ctx->r2) {
        // 0x0040647C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00406570;
    }
    // 0x0040647C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00406480: beq         $v1, $v0, L_00406570
    if (ctx->r3 == ctx->r2) {
        // 0x00406484: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00406570;
    }
    // 0x00406484: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406488: lw          $a0, 0x23($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X23);
    // 0x0040648C: bnel        $a0, $v0, L_00406564
    if (ctx->r4 != ctx->r2) {
        // 0x00406490: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00406564;
    }
    goto skip_0;
    // 0x00406490: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00406494: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406498: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0040649C: beq         $v1, $a0, L_004064CC
    if (ctx->r3 == ctx->r4) {
        // 0x004064A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004064CC;
    }
    // 0x004064A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004064A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004064A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004064AC: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x004064B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004064B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004064B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004064BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004064C0: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x004064C4: j           L_004064D8
    // 0x004064C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
        goto L_004064D8;
    // 0x004064C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_004064CC:
    // 0x004064CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004064D0: sw          $zero, -0x608($at)
    MEM_W(-0X608, ctx->r1) = 0;
    // 0x004064D4: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_004064D8:
    // 0x004064D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004064DC: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x004064E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004064E4: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x004064E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004064EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004064F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004064F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004064F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004064FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406500: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x00406504: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00406508: bne         $v0, $s0, L_00406518
    if (ctx->r2 != ctx->r16) {
        // 0x0040650C: nop
    
            goto L_00406518;
    }
    // 0x0040650C: nop

    // 0x00406510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406514: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00406518:
    // 0x00406518: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040651C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00406520: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00406524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406528: lwc1        $f14, 0x4BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BC);
    // 0x0040652C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00406530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00406534: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00406538: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0040653C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406540: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00406544: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00406548: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0040654C: jal         0x002119FC
    // 0x00406550: nop

    func_002119FC(rdram, ctx);
        goto after_17;
    // 0x00406550: nop

    after_17:
    // 0x00406554: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00406558: nop

    // 0x0040655C: bc1t        L_004064D8
    if (c1cs) {
        // 0x00406560: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004064D8;
    }
    // 0x00406560: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00406564:
    // 0x00406564: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00406568: jal         0x00404C44
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00404C44(rdram, ctx);
        goto after_18;
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_18:
L_00406570:
    // 0x00406570: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406574: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406578: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0040657C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406580: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406584: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406588: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0040658C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406590: jr          $ra
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_002895D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002895D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002895D4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x002895D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002895DC: jal         0x00288E58
    // 0x002895E0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x002895E0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002895E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002895E8: jr          $ra
    // 0x002895EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002895EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021137C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021137C: jr          $ra
    // 0x00211380: nop

    return;
    // 0x00211380: nop

;}
RECOMP_FUNC void func_004270AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004270AC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004270B0: beq         $v0, $zero, L_004270E0
    if (ctx->r2 == 0) {
        // 0x004270B4: nop
    
            goto L_004270E0;
    }
    // 0x004270B4: nop

L_004270B8:
    // 0x004270B8: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x004270BC: addiu       $v0, $a1, -0x61
    ctx->r2 = ADD32(ctx->r5, -0X61);
    // 0x004270C0: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x004270C4: beq         $v0, $zero, L_004270D0
    if (ctx->r2 == 0) {
        // 0x004270C8: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_004270D0;
    }
    // 0x004270C8: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x004270CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_004270D0:
    // 0x004270D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004270D4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004270D8: bne         $v0, $zero, L_004270B8
    if (ctx->r2 != 0) {
        // 0x004270DC: nop
    
            goto L_004270B8;
    }
    // 0x004270DC: nop

L_004270E0:
    // 0x004270E0: jr          $ra
    // 0x004270E4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x004270E4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00271A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271A90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271A94: jal         0x00275234
    // 0x00271A98: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    func_00275234(rdram, ctx);
        goto after_0;
    // 0x00271A98: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    after_0:
    // 0x00271A9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271AA0: jr          $ra
    // 0x00271AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00274830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00274834: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00274838: lw          $a0, 0xB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB0);
    // 0x0027483C: jal         0x00293CE0
    // 0x00274840: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_00293CE0(rdram, ctx);
        goto after_0;
    // 0x00274840: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_0:
    // 0x00274844: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00274848: jr          $ra
    // 0x0027484C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027484C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275BA4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275BA8: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275BAC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275BB0: jal         0x00271514
    // 0x00275BB4: nop

    func_00271514(rdram, ctx);
        goto after_0;
    // 0x00275BB4: nop

    after_0:
    // 0x00275BB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275BBC: jr          $ra
    // 0x00275BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026B4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026B4A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026B4A8: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x0026B4AC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x0026B4B0: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x0026B4B4: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x0026B4B8: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x0026B4BC: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x0026B4C0: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x0026B4C4: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x0026B4C8: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x0026B4CC: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x0026B4D0: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x0026B4D4: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x0026B4D8: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x0026B4DC: sdc1        $f23, 0x98($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X98, ctx->r29);
    // 0x0026B4E0: sdc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X90, ctx->r29);
    // 0x0026B4E4: sdc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X88, ctx->r29);
    // 0x0026B4E8: sdc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X80, ctx->r29);
    // 0x0026B4EC: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x0026B4F0: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x0026B4F4: bne         $v0, $zero, L_0026B504
    if (ctx->r2 != 0) {
        // 0x0026B4F8: sw          $a3, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->r7;
            goto L_0026B504;
    }
    // 0x0026B4F8: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x0026B4FC: j           L_0026B818
    // 0x0026B500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0026B818;
    // 0x0026B500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026B504:
    // 0x0026B504: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0026B508: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0026B50C: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    // 0x0026B510: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0026B514: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0026B518: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x0026B51C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0026B520: jal         0x002017D4
    // 0x0026B524: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0026B524: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0026B528: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0026B52C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x0026B530: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0026B534: jal         0x002017D4
    // 0x0026B538: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0026B538: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_1:
    // 0x0026B53C: lw          $s7, 0x4($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X4);
    // 0x0026B540: blez        $s7, L_0026B814
    if (SIGNED(ctx->r23) <= 0) {
        // 0x0026B544: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_0026B814;
    }
    // 0x0026B544: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0026B548: lui         $s6, 0x5555
    ctx->r22 = S32(0X5555 << 16);
    // 0x0026B54C: ori         $s6, $s6, 0x5556
    ctx->r22 = ctx->r22 | 0X5556;
    // 0x0026B550: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
    // 0x0026B554: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_0026B558:
    // 0x0026B558: lwc1        $f1, 0xA4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x0026B55C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0026B560: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B564: nop

    // 0x0026B568: bc1f        L_0026B7F8
    if (!c1cs) {
        // 0x0026B56C: nop
    
            goto L_0026B7F8;
    }
    // 0x0026B56C: nop

    // 0x0026B570: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026B574: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B578: nop

    // 0x0026B57C: bc1f        L_0026B7F8
    if (!c1cs) {
        // 0x0026B580: nop
    
            goto L_0026B7F8;
    }
    // 0x0026B580: nop

    // 0x0026B584: lwc1        $f1, 0xAC($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XAC);
    // 0x0026B588: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0026B58C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B590: nop

    // 0x0026B594: bc1f        L_0026B7F8
    if (!c1cs) {
        // 0x0026B598: nop
    
            goto L_0026B7F8;
    }
    // 0x0026B598: nop

    // 0x0026B59C: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0026B5A0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B5A4: nop

    // 0x0026B5A8: bc1f        L_0026B7F8
    if (!c1cs) {
        // 0x0026B5AC: nop
    
            goto L_0026B7F8;
    }
    // 0x0026B5AC: nop

    // 0x0026B5B0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0026B5B4: beq         $v0, $zero, L_0026B800
    if (ctx->r2 == 0) {
        // 0x0026B5B8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0026B800;
    }
    // 0x0026B5B8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0026B5BC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0026B5C0: sll         $v0, $s3, 5
    ctx->r2 = S32(ctx->r19 << 5);
    // 0x0026B5C4: addu        $s0, $v0, $t0
    ctx->r16 = ADD32(ctx->r2, ctx->r8);
L_0026B5C8:
    // 0x0026B5C8: lwc1        $f5, 0xA4($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x0026B5CC: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x0026B5D0: bne         $s0, $zero, L_0026B5E8
    if (ctx->r16 != 0) {
        // 0x0026B5D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0026B5E8;
    }
    // 0x0026B5D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026B5D8: j           L_0026B66C
    // 0x0026B5DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0026B66C;
    // 0x0026B5DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0026B5E0:
    // 0x0026B5E0: j           L_0026B66C
    // 0x0026B5E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0026B66C;
    // 0x0026B5E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026B5E8:
    // 0x0026B5E8: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
L_0026B5EC:
    // 0x0026B5EC: mult        $a1, $s6
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026B5F0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0026B5F4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x0026B5F8: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0026B5FC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0026B600: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x0026B604: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026B608: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026B60C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0026B610: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026B614: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0026B618: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x0026B61C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026B620: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026B624: lwc1        $f3, 0x8($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026B628: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0026B62C: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026B630: sub.s       $f0, $f5, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f5.fl - ctx->f1.fl;
    // 0x0026B634: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026B638: sub.s       $f3, $f4, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x0026B63C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026B640: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026B644: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026B648: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026B64C: c.lt.s      $f2, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f2.fl < ctx->f23.fl;
    // 0x0026B650: nop

    // 0x0026B654: bc1t        L_0026B5E0
    if (c1cs) {
        // 0x0026B658: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_0026B5E0;
    }
    // 0x0026B658: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0026B65C: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x0026B660: bnel        $v0, $zero, L_0026B5EC
    if (ctx->r2 != 0) {
        // 0x0026B664: addiu       $a1, $a0, 0x1
        ctx->r5 = ADD32(ctx->r4, 0X1);
            goto L_0026B5EC;
    }
    goto skip_0;
    // 0x0026B664: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x0026B668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0026B66C:
    // 0x0026B66C: beql        $v0, $zero, L_0026B7DC
    if (ctx->r2 == 0) {
        // 0x0026B670: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_0026B7DC;
    }
    goto skip_1;
    // 0x0026B670: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    skip_1:
    // 0x0026B674: beql        $s0, $fp, L_0026B7DC
    if (ctx->r16 == ctx->r30) {
        // 0x0026B678: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_0026B7DC;
    }
    goto skip_2;
    // 0x0026B678: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    skip_2:
    // 0x0026B67C: lwc1        $f21, 0xA4($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x0026B680: lwc1        $f20, 0xAC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x0026B684: bne         $s0, $zero, L_0026B69C
    if (ctx->r16 != 0) {
        // 0x0026B688: nop
    
            goto L_0026B69C;
    }
    // 0x0026B688: nop

    // 0x0026B68C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026B690: lwc1        $f1, 0x7FE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7FE0);
    // 0x0026B694: j           L_0026B7A4
    // 0x0026B698: nop

        goto L_0026B7A4;
    // 0x0026B698: nop

L_0026B69C:
    // 0x0026B69C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026B6A0: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026B6A4: beq         $s0, $v0, L_0026B6E0
    if (ctx->r16 == ctx->r2) {
        // 0x0026B6A8: nop
    
            goto L_0026B6E0;
    }
    // 0x0026B6A8: nop

    // 0x0026B6AC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026B6B0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026B6B4: jal         0x0020EF2C
    // 0x0026B6B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0026B6B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x0026B6BC: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026B6C0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026B6C4: jal         0x0020EF2C
    // 0x0026B6C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0026B6C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x0026B6CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026B6D0: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026B6D4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0026B6D8: jal         0x0020EFDC
    // 0x0026B6DC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_4;
    // 0x0026B6DC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
L_0026B6E0:
    // 0x0026B6E0: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0026B6E4: addiu       $t0, $t0, 0x2020
    ctx->r8 = ADD32(ctx->r8, 0X2020);
    // 0x0026B6E8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x0026B6EC: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x0026B6F0: lw          $t3, 0x8($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X8);
    // 0x0026B6F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0026B6F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x0026B6FC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x0026B700: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026B704: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026B708: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026B70C: c.eq.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl == ctx->f23.fl;
    // 0x0026B710: nop

    // 0x0026B714: bc1f        L_0026B750
    if (!c1cs) {
        // 0x0026B718: nop
    
            goto L_0026B750;
    }
    // 0x0026B718: nop

    // 0x0026B71C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026B720: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026B724: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026B728: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026B72C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026B730: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026B734: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026B738: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026B73C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026B740: lwc1        $f0, 0x7FE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FE4);
    // 0x0026B744: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026B748: j           L_0026B7A4
    // 0x0026B74C: nop

        goto L_0026B7A4;
    // 0x0026B74C: nop

L_0026B750:
    // 0x0026B750: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026B754: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0026B758: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0026B75C: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0026B760: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0026B764: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x0026B768: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x0026B76C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026B770: sub.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x0026B774: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026B778: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026B77C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0026B780: sub.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f21.fl;
    // 0x0026B784: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026B788: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026B78C: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026B790: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0026B794: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0026B798: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026B79C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0026B7A0: div.s       $f1, $f2, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
L_0026B7A4:
    // 0x0026B7A4: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x0026B7A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026B7AC: nop

    // 0x0026B7B0: bc1fl       L_0026B7DC
    if (!c1cs) {
        // 0x0026B7B4: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_0026B7DC;
    }
    goto skip_3;
    // 0x0026B7B4: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    skip_3:
    // 0x0026B7B8: beq         $s4, $zero, L_0026B7D0
    if (ctx->r20 == 0) {
        // 0x0026B7BC: sub.s       $f1, $f0, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0026B7D0;
    }
    // 0x0026B7BC: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026B7C0: c.lt.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl < ctx->f22.fl;
    // 0x0026B7C4: nop

    // 0x0026B7C8: bc1fl       L_0026B7DC
    if (!c1cs) {
        // 0x0026B7CC: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_0026B7DC;
    }
    goto skip_4;
    // 0x0026B7CC: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    skip_4:
L_0026B7D0:
    // 0x0026B7D0: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x0026B7D4: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    // 0x0026B7D8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_0026B7DC:
    // 0x0026B7DC: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0026B7E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0026B7E4: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x0026B7E8: bne         $v0, $zero, L_0026B5C8
    if (ctx->r2 != 0) {
        // 0x0026B7EC: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0026B5C8;
    }
    // 0x0026B7EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0026B7F0: j           L_0026B804
    // 0x0026B7F4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
        goto L_0026B804;
    // 0x0026B7F4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0026B7F8:
    // 0x0026B7F8: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0026B7FC: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_0026B800:
    // 0x0026B800: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0026B804:
    // 0x0026B804: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0026B808: slt         $v0, $s5, $s7
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x0026B80C: bne         $v0, $zero, L_0026B558
    if (ctx->r2 != 0) {
        // 0x0026B810: nop
    
            goto L_0026B558;
    }
    // 0x0026B810: nop

L_0026B814:
    // 0x0026B814: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_0026B818:
    // 0x0026B818: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x0026B81C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x0026B820: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x0026B824: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x0026B828: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x0026B82C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x0026B830: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0026B834: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x0026B838: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x0026B83C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x0026B840: ldc1        $f23, 0x98($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X98);
    // 0x0026B844: ldc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X90);
    // 0x0026B848: ldc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X88);
    // 0x0026B84C: ldc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X80);
    // 0x0026B850: jr          $ra
    // 0x0026B854: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x0026B854: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00445394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445394: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x00445398: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x0044539C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004453A0: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x004453A4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x004453A8: sdc1        $f21, 0x80($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X80, ctx->r29);
    // 0x004453AC: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x004453B0: jal         0x0026D518
    // 0x004453B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x004453B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x004453B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004453BC: lwc1        $f12, 0x1F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1F8);
    // 0x004453C0: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x004453C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004453C8: lwc1        $f14, 0x1FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x004453CC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x004453D0: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x004453D4: jal         0x002119FC
    // 0x004453D8: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x004453D8: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_1:
    // 0x004453DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004453E0: lwc1        $f12, 0x8B8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8B8);
    // 0x004453E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004453E8: lwc1        $f14, 0x8BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8BC);
    // 0x004453EC: jal         0x002119FC
    // 0x004453F0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x004453F0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_2:
    // 0x004453F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x004453F8: jal         0x002982F0
    // 0x004453FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x004453FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x00445400: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00445404: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00445408: jal         0x002974C0
    // 0x0044540C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x0044540C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x00445410: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00445414: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00445418: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044541C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00445420: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00445424: swc1        $f21, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(21 - 1) * 2];
    // 0x00445428: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0044542C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x00445430: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x00445434: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x00445438: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x0044543C: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x00445440: jal         0x00220A1C
    // 0x00445444: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_5;
    // 0x00445444: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x00445448: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0044544C: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x00445450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00445454: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00445458: lwc1        $f0, 0x8C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8C0);
    // 0x0044545C: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x00445460: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x00445464: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x00445468: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x0044546C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00445470: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x00445474: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x00445478: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x0044547C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x00445480: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00445484: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00445488: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0044548C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00445490: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x00445494: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x00445498: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x0044549C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x004454A0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x004454A4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x004454A8: jal         0x00227240
    // 0x004454AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00227240(rdram, ctx);
        goto after_6;
    // 0x004454AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x004454B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004454B4: beq         $a0, $zero, L_004454D8
    if (ctx->r4 == 0) {
        // 0x004454B8: nop
    
            goto L_004454D8;
    }
    // 0x004454B8: nop

    // 0x004454BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004454C0: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x004454C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004454C8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x004454CC: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x004454D0: jal         0x00246690
    // 0x004454D4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_7;
    // 0x004454D4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_7:
L_004454D8:
    // 0x004454D8: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x004454DC: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x004454E0: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x004454E4: ldc1        $f21, 0x80($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X80);
    // 0x004454E8: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x004454EC: jr          $ra
    // 0x004454F0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x004454F0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_00292A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292A74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00292A78: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00292A7C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00292A80: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00292A84: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00292A88: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00292A8C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00292A90: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00292A94: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00292A98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00292A9C: lw          $s2, 0x10($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X10);
    // 0x00292AA0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00292AA4: lbu         $v0, 0x34($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34);
    // 0x00292AA8: bne         $v0, $zero, L_00292B10
    if (ctx->r2 != 0) {
        // 0x00292AAC: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_00292B10;
    }
    // 0x00292AAC: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00292AB0: lw          $s0, 0x50($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X50);
    // 0x00292AB4: beq         $s0, $zero, L_00292B10
    if (ctx->r16 == 0) {
        // 0x00292AB8: addiu       $s6, $zero, 0x6
        ctx->r22 = ADD32(0, 0X6);
            goto L_00292B10;
    }
    // 0x00292AB8: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
L_00292ABC:
    // 0x00292ABC: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x00292AC0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00292AC4: bnel        $v0, $s6, L_00292B08
    if (ctx->r2 != ctx->r22) {
        // 0x00292AC8: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00292B08;
    }
    goto skip_0;
    // 0x00292AC8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00292ACC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00292AD0: bnel        $v0, $s4, L_00292B08
    if (ctx->r2 != ctx->r20) {
        // 0x00292AD4: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00292B08;
    }
    goto skip_1;
    // 0x00292AD4: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x00292AD8: beq         $s1, $zero, L_00292AF0
    if (ctx->r17 == 0) {
        // 0x00292ADC: nop
    
            goto L_00292AF0;
    }
    // 0x00292ADC: nop

    // 0x00292AE0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00292AE4: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00292AE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00292AEC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00292AF0:
    // 0x00292AF0: jal         0x002933B0
    // 0x00292AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_0;
    // 0x00292AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00292AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00292AFC: jal         0x002933E0
    // 0x00292B00: addiu       $a1, $s3, 0x48
    ctx->r5 = ADD32(ctx->r19, 0X48);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x00292B00: addiu       $a1, $s3, 0x48
    ctx->r5 = ADD32(ctx->r19, 0X48);
    after_1:
    // 0x00292B04: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00292B08:
    // 0x00292B08: bne         $s0, $zero, L_00292ABC
    if (ctx->r16 != 0) {
        // 0x00292B0C: nop
    
            goto L_00292ABC;
    }
    // 0x00292B0C: nop

L_00292B10:
    // 0x00292B10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00292B14: sb          $zero, 0x33($s2)
    MEM_B(0X33, ctx->r18) = 0;
    // 0x00292B18: sb          $v0, 0x34($s2)
    MEM_B(0X34, ctx->r18) = ctx->r2;
    // 0x00292B1C: sb          $zero, 0x30($s2)
    MEM_B(0X30, ctx->r18) = 0;
    // 0x00292B20: lw          $v0, 0x1C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1C);
    // 0x00292B24: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00292B28: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00292B2C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x00292B30: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00292B34: jal         0x002943D0
    // 0x00292B38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_002943D0(rdram, ctx);
        goto after_2;
    // 0x00292B38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00292B3C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00292B40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00292B44: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00292B48: jal         0x002943E0
    // 0x00292B4C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_002943E0(rdram, ctx);
        goto after_3;
    // 0x00292B4C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_3:
    // 0x00292B50: addiu       $a0, $s3, 0x48
    ctx->r4 = ADD32(ctx->r19, 0X48);
    // 0x00292B54: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00292B58: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00292B5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00292B60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00292B64: jal         0x00291034
    // 0x00292B68: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    func_00291034(rdram, ctx);
        goto after_4;
    // 0x00292B68: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_4:
    // 0x00292B6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00292B70: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00292B74: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00292B78: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00292B7C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00292B80: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00292B84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00292B88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00292B8C: jr          $ra
    // 0x00292B90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00292B90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00266E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266E00: beq         $t0, $v0, L_00266E28
    if (ctx->r8 == ctx->r2) {
        // 0x00266E04: sll         $v0, $t0, 2
        ctx->r2 = S32(ctx->r8 << 2);
            goto L_00266E28;
    }
    // 0x00266E04: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x00266E08: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x00266E0C: addu        $t1, $v0, $a0
    ctx->r9 = ADD32(ctx->r2, ctx->r4);
L_00266E10:
    // 0x00266E10: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00266E14: bne         $v0, $a2, L_00266E2C
    if (ctx->r2 != ctx->r6) {
        // 0x00266E18: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_00266E2C;
    }
    // 0x00266E18: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x00266E1C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00266E20: bne         $t0, $t2, L_00266E10
    if (ctx->r8 != ctx->r10) {
        // 0x00266E24: addiu       $t1, $t1, -0x4
        ctx->r9 = ADD32(ctx->r9, -0X4);
            goto L_00266E10;
    }
    // 0x00266E24: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
L_00266E28:
    // 0x00266E28: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
L_00266E2C:
    // 0x00266E2C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00266E30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00266E34: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00266E38: beq         $v0, $zero, L_00266E64
    if (ctx->r2 == 0) {
        // 0x00266E3C: nop
    
            goto L_00266E64;
    }
    // 0x00266E3C: nop

    // 0x00266E40: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00266E44: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_00266E48:
    // 0x00266E48: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00266E4C: bne         $v0, $a2, L_00266E64
    if (ctx->r2 != ctx->r6) {
        // 0x00266E50: nop
    
            goto L_00266E64;
    }
    // 0x00266E50: nop

    // 0x00266E54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00266E58: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00266E5C: bne         $v0, $zero, L_00266E48
    if (ctx->r2 != 0) {
        // 0x00266E60: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00266E48;
    }
    // 0x00266E60: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00266E64:
    // 0x00266E64: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00266E68: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00266E6C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00266E70: jr          $ra
    // 0x00266E74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00266E74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_002682FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002682FC: jr          $ra
    // 0x00268300: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268300: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00200C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200C38: ldr         $t7, 0x7368($k1)
    ctx->r15 = do_ldr(rdram, ctx->r15, ctx->r27, 0X7368);
;}
RECOMP_FUNC void func_004547AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B7DC:
    // 0x004547AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B810:
    // 0x004547B0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x004547B4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x004547B8: beq         $v0, $zero, L_004547CC
    if (ctx->r2 == 0) {
        // 0x004547BC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004547CC;
    }
    // 0x004547BC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004547C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004547C4: j           L_0041B7DC
    // 0x004547C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B7DC(rdram, ctx);
    return;
    // 0x004547C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_004547CC:
    // 0x004547CC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004547D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004547D4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004547D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004547DC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004547E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004547E4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004547E8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x004547EC: beq         $v0, $zero, L_00454804
    if (ctx->r2 == 0) {
        // 0x004547F0: nop
    
            goto L_00454804;
    }
    // 0x004547F0: nop

    // 0x004547F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004547F8: addiu       $v0, $v0, 0x5A4C
    ctx->r2 = ADD32(ctx->r2, 0X5A4C);
    // 0x004547FC: j           L_0041B810
    // 0x00454800: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B810(rdram, ctx);
    return;
    // 0x00454800: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454804:
    // 0x00454804: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454808: addiu       $v0, $v0, 0x5A68
    ctx->r2 = ADD32(ctx->r2, 0X5A68);
    // 0x0045480C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454810: jr          $ra
    // 0x00454814: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454814: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00239194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239194: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00239198: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x0023919C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x002391A0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002391A4: bne         $v0, $zero, L_002391BC
    if (ctx->r2 != 0) {
        // 0x002391A8: nop
    
            goto L_002391BC;
    }
    // 0x002391A8: nop

    // 0x002391AC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x002391B0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x002391B4: j           L_002391D4
    // 0x002391B8: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
        goto L_002391D4;
    // 0x002391B8: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_002391BC:
    // 0x002391BC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x002391C0: lw          $t0, 0x1C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C);
    // 0x002391C4: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x002391C8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x002391CC: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x002391D0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
L_002391D4:
    // 0x002391D4: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x002391D8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x002391DC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x002391E0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x002391E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002391E8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x002391EC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x002391F0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x002391F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x002391F8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x002391FC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00239200: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x00239204: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x00239208: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x0023920C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x00239210: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x00239214: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00239218: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x0023921C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00239220: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x00239224: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00239228: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0023922C: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x00239230: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x00239234: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x00239238: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0023923C: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x00239240: jal         0x00227C10
    // 0x00239244: nop

    func_00227C10(rdram, ctx);
        goto after_0;
    // 0x00239244: nop

    after_0:
    // 0x00239248: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x0023924C: jr          $ra
    // 0x00239250: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00239250: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0026DFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026DFB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026DFB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0026DFB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026DFBC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0026DFC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0026DFC4: lbu         $v0, 0x11($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X11);
    // 0x0026DFC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026DFCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026DFD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026DFD4: lw          $s1, 0x2628($at)
    ctx->r17 = MEM_W(ctx->r1, 0X2628);
    // 0x0026DFD8: beq         $s1, $zero, L_0026E0FC
    if (ctx->r17 == 0) {
        // 0x0026DFDC: nop
    
            goto L_0026E0FC;
    }
    // 0x0026DFDC: nop

    // 0x0026DFE0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0026DFE4: addiu       $v1, $v1, -0x550F
    ctx->r3 = ADD32(ctx->r3, -0X550F);
    // 0x0026DFE8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0026DFEC: bne         $v0, $zero, L_0026E000
    if (ctx->r2 != 0) {
        // 0x0026DFF0: addiu       $a1, $v1, -0x1201
        ctx->r5 = ADD32(ctx->r3, -0X1201);
            goto L_0026E000;
    }
    // 0x0026DFF0: addiu       $a1, $v1, -0x1201
    ctx->r5 = ADD32(ctx->r3, -0X1201);
    // 0x0026DFF4: lw          $a1, -0x1221($v1)
    ctx->r5 = MEM_W(ctx->r3, -0X1221);
    // 0x0026DFF8: beql        $a1, $zero, L_0026E000
    if (ctx->r5 == 0) {
        // 0x0026DFFC: addiu       $a1, $v1, -0x1201
        ctx->r5 = ADD32(ctx->r3, -0X1201);
            goto L_0026E000;
    }
    goto skip_0;
    // 0x0026DFFC: addiu       $a1, $v1, -0x1201
    ctx->r5 = ADD32(ctx->r3, -0X1201);
    skip_0:
L_0026E000:
    // 0x0026E000: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026E004: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x0026E008: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026E00C: bne         $v1, $v0, L_0026E08C
    if (ctx->r3 != ctx->r2) {
        // 0x0026E010: nop
    
            goto L_0026E08C;
    }
    // 0x0026E010: nop

    // 0x0026E014: lbu         $v0, 0x10($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10);
    // 0x0026E018: beq         $v0, $zero, L_0026E070
    if (ctx->r2 == 0) {
        // 0x0026E01C: sll         $v0, $v0, 3
        ctx->r2 = S32(ctx->r2 << 3);
            goto L_0026E070;
    }
    // 0x0026E01C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026E020: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026E024: lwc1        $f0, -0x7FC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7FC0);
    // 0x0026E028: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026E02C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026E030: lw          $a2, 0x69D8($at)
    ctx->r6 = MEM_W(ctx->r1, 0X69D8);
    // 0x0026E034: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0026E038: lw          $a3, 0x6D20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D20);
    // 0x0026E03C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0026E040: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0026E044: jal         0x002817A0
    // 0x0026E048: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002817A0(rdram, ctx);
        goto after_0;
    // 0x0026E048: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0026E04C: lbu         $v0, 0x10($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10);
    // 0x0026E050: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026E054: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026E058: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026E05C: lw          $a0, 0x69DC($at)
    ctx->r4 = MEM_W(ctx->r1, 0X69DC);
    // 0x0026E060: beq         $a0, $zero, L_0026E070
    if (ctx->r4 == 0) {
        // 0x0026E064: nop
    
            goto L_0026E070;
    }
    // 0x0026E064: nop

    // 0x0026E068: jal         0x0027580C
    // 0x0026E06C: nop

    func_0027580C(rdram, ctx);
        goto after_1;
    // 0x0026E06C: nop

    after_1:
L_0026E070:
    // 0x0026E070: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x0026E074: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0026E078: bne         $v0, $zero, L_0026E08C
    if (ctx->r2 != 0) {
        // 0x0026E07C: nop
    
            goto L_0026E08C;
    }
    // 0x0026E07C: nop

    // 0x0026E080: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x0026E084: jal         0x00412438
    // 0x0026E088: nop

    func_00412438(rdram, ctx);
        goto after_2;
    // 0x0026E088: nop

    after_2:
L_0026E08C:
    // 0x0026E08C: lbu         $v0, 0x12($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X12);
    // 0x0026E090: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x0026E094: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0026E098: lw          $v1, 0x20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X20);
    // 0x0026E09C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026E0A0: bne         $a0, $v1, L_0026E0E8
    if (ctx->r4 != ctx->r3) {
        // 0x0026E0A4: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_0026E0E8;
    }
    // 0x0026E0A4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x0026E0A8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x0026E0AC: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x0026E0B0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0026E0B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0026E0B8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0026E0BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0026E0C0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026E0C4: lw          $v0, 0x7158($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7158);
    // 0x0026E0C8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0026E0CC: beq         $a3, $zero, L_0026E0FC
    if (ctx->r7 == 0) {
        // 0x0026E0D0: addu        $a0, $v0, $v1
        ctx->r4 = ADD32(ctx->r2, ctx->r3);
            goto L_0026E0FC;
    }
    // 0x0026E0D0: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x0026E0D4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0026E0D8: jalr        $a3
    // 0x0026E0DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_3;
    // 0x0026E0DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0026E0E0: j           L_0026E0FC
    // 0x0026E0E4: nop

        goto L_0026E0FC;
    // 0x0026E0E4: nop

L_0026E0E8:
    // 0x0026E0E8: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0026E0EC: beq         $v0, $zero, L_0026E0FC
    if (ctx->r2 == 0) {
        // 0x0026E0F0: nop
    
            goto L_0026E0FC;
    }
    // 0x0026E0F0: nop

    // 0x0026E0F4: jalr        $v0
    // 0x0026E0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0026E0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_0026E0FC:
    // 0x0026E0FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0026E100: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0026E104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0026E108: jr          $ra
    // 0x0026E10C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026E10C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002886D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002886D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002886D4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002886D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002886DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002886E0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002886E4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x002886E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002886EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002886F0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002886F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x002886F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002886FC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00288700: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00288704: jal         0x0042C194
    // 0x00288708: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_0042C194(rdram, ctx);
        goto after_0;
    // 0x00288708: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_0:
    // 0x0028870C: beql        $v0, $zero, L_00288714
    if (ctx->r2 == 0) {
        // 0x00288710: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00288714;
    }
    goto skip_0;
    // 0x00288710: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_00288714:
    // 0x00288714: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00288718: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0028871C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00288720: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00288724: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00288728: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0028872C: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00288730: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00288734: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288738: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x0028873C: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00288740: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00288744: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288748: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x0028874C: sw          $s0, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r16;
    // 0x00288750: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288754: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00288758: sw          $s2, 0x3FFC($at)
    MEM_W(0X3FFC, ctx->r1) = ctx->r18;
    // 0x0028875C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288760: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00288764: sw          $v0, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r2;
    // 0x00288768: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0028876C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00288770: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00288774: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00288778: jr          $ra
    // 0x0028877C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0028877C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0026F078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F078: addiu       $a0, $s1, 0x6A88
    ctx->r4 = ADD32(ctx->r17, 0X6A88);
    // 0x0026F07C: jal         0x0026D288
    // 0x0026F080: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    func_0026D288(rdram, ctx);
        goto after_0;
    // 0x0026F080: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    after_0:
    // 0x0026F084: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026F088: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026F08C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0026F090: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026F094: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0026F098: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0026F09C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0026F0A0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0026F0A4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F0A8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0026F0AC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x0026F0B0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026F0B4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0026F0B8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0026F0BC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026F0C0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0026F0C4: jal         0x0020EF2C
    // 0x0026F0C8: addiu       $s1, $s0, 0x20
    ctx->r17 = ADD32(ctx->r16, 0X20);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026F0C8: addiu       $s1, $s0, 0x20
    ctx->r17 = ADD32(ctx->r16, 0X20);
    after_1:
    // 0x0026F0CC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F0D0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0026F0D4: jal         0x0020EF2C
    // 0x0026F0D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0026F0D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_2:
    // 0x0026F0DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F0E0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F0E4: jal         0x0020EFDC
    // 0x0026F0E8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_3;
    // 0x0026F0E8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0026F0EC: jal         0x0020F040
    // 0x0026F0F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_4;
    // 0x0026F0F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0026F0F4: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x0026F0F8: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x0026F0FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F100: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F104: lwc1        $f0, 0x4($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X4);
    // 0x0026F108: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F10C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026F110: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0026F114: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F118: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F11C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F120: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F124: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0026F128: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F12C: jal         0x0020EF2C
    // 0x0026F130: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x0026F130: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_5:
    // 0x0026F134: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F138: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0026F13C: jal         0x0020EF2C
    // 0x0026F140: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x0026F140: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x0026F144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026F148: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F14C: jal         0x0020EFDC
    // 0x0026F150: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_7;
    // 0x0026F150: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x0026F154: jal         0x0020F040
    // 0x0026F158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_8;
    // 0x0026F158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0026F15C: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0026F160: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0026F164: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F168: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0026F16C: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0026F170: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F174: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0026F178: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F17C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F180: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F184: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F188: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0026F18C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F190: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F194: addiu       $s1, $s0, 0x10
    ctx->r17 = ADD32(ctx->r16, 0X10);
    // 0x0026F198: jal         0x0020EF2C
    // 0x0026F19C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_9;
    // 0x0026F19C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_9:
    // 0x0026F1A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F1A4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026F1A8: jal         0x0020EF2C
    // 0x0026F1AC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0020EF2C(rdram, ctx);
        goto after_10;
    // 0x0026F1AC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_10:
    // 0x0026F1B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F1B4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F1B8: jal         0x0020EFDC
    // 0x0026F1BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_11;
    // 0x0026F1BC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_11:
    // 0x0026F1C0: jal         0x0020F040
    // 0x0026F1C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_12;
    // 0x0026F1C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0026F1C8: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x0026F1CC: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0026F1D0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F1D4: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F1D8: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0026F1DC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F1E0: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026F1E4: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F1E8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F1EC: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F1F0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F1F4: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F1F8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026F1FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F200: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026F204: jal         0x0020EF2C
    // 0x0026F208: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_13;
    // 0x0026F208: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    after_13:
    // 0x0026F20C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F210: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0026F214: jal         0x0020EF2C
    // 0x0026F218: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_14;
    // 0x0026F218: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_14:
    // 0x0026F21C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F220: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F224: jal         0x0020EFDC
    // 0x0026F228: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_15;
    // 0x0026F228: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_15:
    // 0x0026F22C: jal         0x0020F040
    // 0x0026F230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_16;
    // 0x0026F230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x0026F234: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x0026F238: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0026F23C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F240: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F244: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0026F248: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F24C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0026F250: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F254: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026F258: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026F25C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026F260: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F264: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0026F268: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0026F26C: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026F270: jal         0x0020EF2C
    // 0x0026F274: addiu       $s1, $s0, 0x30
    ctx->r17 = ADD32(ctx->r16, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_17;
    // 0x0026F274: addiu       $s1, $s0, 0x30
    ctx->r17 = ADD32(ctx->r16, 0X30);
    after_17:
    // 0x0026F278: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026F27C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0026F280: jal         0x0020EF2C
    // 0x0026F284: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0020EF2C(rdram, ctx);
        goto after_18;
    // 0x0026F284: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_18:
    // 0x0026F288: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026F28C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026F290: jal         0x0020EFDC
    // 0x0026F294: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EFDC(rdram, ctx);
        goto after_19;
    // 0x0026F294: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_19:
    // 0x0026F298: jal         0x0020F040
    // 0x0026F29C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_20;
    // 0x0026F29C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_20:
    // 0x0026F2A0: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0026F2A4: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0026F2A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026F2AC: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0026F2B0: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0026F2B4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0026F2B8: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0026F2BC: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0026F2C0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026F2C4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0026F2C8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026F2CC: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x0026F2D0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0026F2D4: lwc1        $f3, 0x28($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x0026F2D8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0026F2DC: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x0026F2E0: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0026F2E4: neg.s       $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = -ctx->f3.fl;
    // 0x0026F2E8: swc1        $f3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026F2EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0026F2F0: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x0026F2F4: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0026F2F8: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0026F2FC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026F300: lwc1        $f2, 0x54($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X54);
    // 0x0026F304: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0026F308: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026F30C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0026F310: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0026F314: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026F318: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0026F31C: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x0026F320: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0026F324: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0026F328: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0026F32C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0026F330: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0026F334: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0026F338: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026F33C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026F340: jr          $ra
    // 0x0026F344: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0026F344: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0023685C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023685C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00236860: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00236864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236868: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0023686C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00236870: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x00236874: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00236878: beq         $a1, $v0, L_0023689C
    if (ctx->r5 == ctx->r2) {
        // 0x0023687C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0023689C;
    }
    // 0x0023687C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00236880: addiu       $s0, $a0, 0x14
    ctx->r16 = ADD32(ctx->r4, 0X14);
    // 0x00236884: jal         0x00207914
    // 0x00236888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_00207914(rdram, ctx);
        goto after_0;
    // 0x00236888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0023688C: beq         $s1, $zero, L_0023689C
    if (ctx->r17 == 0) {
        // 0x00236890: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0023689C;
    }
    // 0x00236890: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00236894: jal         0x002316A0
    // 0x00236898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002316A0(rdram, ctx);
        goto after_1;
    // 0x00236898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0023689C:
    // 0x0023689C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002368A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002368A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002368A8: jr          $ra
    // 0x002368AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002368AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041BA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BA48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0041BA4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
;}
RECOMP_FUNC void func_00260358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260358: jr          $ra
    // 0x0026035C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026035C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
