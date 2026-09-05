#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0040457C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040457C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x00404580: sw          $s2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r18;
    // 0x00404584: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00404588: sw          $s4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r20;
    // 0x0040458C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00404590: sw          $s3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r19;
    // 0x00404594: sw          $ra, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r31;
    // 0x00404598: sw          $s1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r17;
    // 0x0040459C: sw          $s0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r16;
    // 0x004045A0: sdc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X100, ctx->r29);
    // 0x004045A4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x004045A8: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x004045AC: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x004045B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004045B4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004045B8: jal         0x002532EC
    // 0x004045BC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    func_002532EC(rdram, ctx);
        goto after_0;
    // 0x004045BC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    after_0:
    // 0x004045C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004045C4: beq         $v1, $zero, L_00404C20
    if (ctx->r3 == 0) {
        // 0x004045C8: nop
    
            goto L_00404C20;
    }
    // 0x004045C8: nop

    // 0x004045CC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004045D0: addiu       $s0, $s0, -0x5D4
    ctx->r16 = ADD32(ctx->r16, -0X5D4);
    // 0x004045D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004045D8: beq         $v0, $zero, L_004045EC
    if (ctx->r2 == 0) {
        // 0x004045DC: nop
    
            goto L_004045EC;
    }
    // 0x004045DC: nop

    // 0x004045E0: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x004045E4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x004045E8: sw          $v0, -0xCC($s0)
    MEM_W(-0XCC, ctx->r16) = ctx->r2;
L_004045EC:
    // 0x004045EC: lbu         $v0, -0xC8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC8);
    // 0x004045F0: bne         $v0, $zero, L_00404634
    if (ctx->r2 != 0) {
        // 0x004045F4: nop
    
            goto L_00404634;
    }
    // 0x004045F4: nop

    // 0x004045F8: lw          $v0, -0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XDC);
    // 0x004045FC: blez        $v0, L_00404628
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00404600: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00404628;
    }
    // 0x00404600: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00404604: lw          $a0, -0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, -0XB0);
    // 0x00404608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040460C: sb          $v0, -0xC8($s0)
    MEM_B(-0XC8, ctx->r16) = ctx->r2;
    // 0x00404610: jal         0x00243414
    // 0x00404614: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00404614: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00404618: lw          $a0, -0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, -0XAC);
    // 0x0040461C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00404620: jal         0x00243414
    // 0x00404624: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00404624: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_2:
L_00404628:
    // 0x00404628: lbu         $v0, -0xC8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC8);
    // 0x0040462C: beq         $v0, $zero, L_00404680
    if (ctx->r2 == 0) {
        // 0x00404630: nop
    
            goto L_00404680;
    }
    // 0x00404630: nop

L_00404634:
    // 0x00404634: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404638: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
    // 0x0040463C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404640: bne         $v0, $zero, L_00404680
    if (ctx->r2 != 0) {
        // 0x00404644: nop
    
            goto L_00404680;
    }
    // 0x00404644: nop

    // 0x00404648: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0040464C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404650: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00404654: nop

    // 0x00404658: bc1f        L_00404680
    if (!c1cs) {
        // 0x0040465C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00404680;
    }
    // 0x0040465C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00404660: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x00404664: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x00404668: jal         0x00243414
    // 0x0040466C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0040466C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_3:
    // 0x00404670: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x00404674: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00404678: jal         0x00243414
    // 0x0040467C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0040467C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_4:
L_00404680:
    // 0x00404680: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00404684: addiu       $s1, $s1, -0x6AC
    ctx->r17 = ADD32(ctx->r17, -0X6AC);
    // 0x00404688: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0040468C: blez        $a0, L_00404764
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00404690: nop
    
            goto L_00404764;
    }
    // 0x00404690: nop

    // 0x00404694: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x00404698: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040469C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x004046A0: nop

    // 0x004046A4: bc1f        L_00404764
    if (!c1cs) {
        // 0x004046A8: nop
    
            goto L_00404764;
    }
    // 0x004046A8: nop

    // 0x004046AC: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x004046B0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x004046B4: beq         $v0, $a1, L_00404764
    if (ctx->r2 == ctx->r5) {
        // 0x004046B8: nop
    
            goto L_00404764;
    }
    // 0x004046B8: nop

    // 0x004046BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004046C0: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x004046C4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x004046C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004046CC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004046D0: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x004046D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004046D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004046DC: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x004046E0: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x004046E4: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x004046E8: bne         $v0, $zero, L_00404700
    if (ctx->r2 != 0) {
        // 0x004046EC: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_00404700;
    }
    // 0x004046EC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x004046F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004046F4: sb          $v0, 0xC4($s1)
    MEM_B(0XC4, ctx->r17) = ctx->r2;
    // 0x004046F8: j           L_00404750
    // 0x004046FC: sw          $a1, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r5;
        goto L_00404750;
    // 0x004046FC: sw          $a1, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r5;
L_00404700:
    // 0x00404700: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404704: beq         $s0, $v0, L_0040474C
    if (ctx->r16 == ctx->r2) {
        // 0x00404708: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_0040474C;
    }
    // 0x00404708: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x0040470C: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00404710: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00404714: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00404718: jal         0x002119FC
    // 0x0040471C: nop

    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x0040471C: nop

    after_5:
    // 0x00404720: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404724: lwc1        $f1, 0x3B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3B8);
    // 0x00404728: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040472C: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00404730: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x00404734: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00404738: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0040473C: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00404740: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00404744: j           L_00404750
    // 0x00404748: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_00404750;
    // 0x00404748: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0040474C:
    // 0x0040474C: swc1        $f20, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f20.u32l;
L_00404750:
    // 0x00404750: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404754: lw          $a0, -0x67C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X67C);
    // 0x00404758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040475C: jal         0x00243414
    // 0x00404760: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x00404760: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_6:
L_00404764:
    // 0x00404764: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404768: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
    // 0x0040476C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404770: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00404774: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x00404778: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x0040477C: nop
    
            goto L_004049EC;
    }
    // 0x0040477C: nop

    // 0x00404780: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00404784: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x00404788: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0040478C: nop

    // 0x00404790: bc1f        L_004048B8
    if (!c1cs) {
        // 0x00404794: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_004048B8;
    }
    // 0x00404794: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00404798: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040479C: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x004047A0: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x004047A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047A8: lwc1        $f1, 0x3BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3BC);
    // 0x004047AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047B0: lwc1        $f2, 0x3C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3C0);
    // 0x004047B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047B8: lwc1        $f3, 0x3C4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3C4);
    // 0x004047BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047C0: lwc1        $f0, 0x3C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3C8);
    // 0x004047C4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x004047C8: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x004047CC: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x004047D0: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x004047D4: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x004047D8: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x004047DC: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x004047E0: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x004047E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004047E8: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x004047EC: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x004047F0: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x004047F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x004047F8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x004047FC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x00404800: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x00404804: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x00404808: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x0040480C: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x00404810: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00404814: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00404818: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0040481C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x00404820: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x00404824: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x00404828: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0040482C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x00404830: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00404834: jal         0x00228108
    // 0x00404838: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_7;
    // 0x00404838: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_7:
    // 0x0040483C: beq         $v0, $zero, L_004048B0
    if (ctx->r2 == 0) {
        // 0x00404840: nop
    
            goto L_004048B0;
    }
    // 0x00404840: nop

    // 0x00404844: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404848: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x0040484C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00404850: beq         $v1, $zero, L_004048A0
    if (ctx->r3 == 0) {
        // 0x00404854: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_004048A0;
    }
    // 0x00404854: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404858: bnel        $v0, $zero, L_004048A0
    if (ctx->r2 != 0) {
        // 0x0040485C: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_004048A0;
    }
    goto skip_0;
    // 0x0040485C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_0:
    // 0x00404860: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404864: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00404868: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0040486C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00404870: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404874: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00404878: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040487C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404880: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00404884: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00404888: beq         $v0, $v1, L_0040489C
    if (ctx->r2 == ctx->r3) {
        // 0x0040488C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0040489C;
    }
    // 0x0040488C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00404890: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x00404894: j           L_004048A0
    // 0x00404898: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
        goto L_004048A0;
    // 0x00404898: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_0040489C:
    // 0x0040489C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_004048A0:
    // 0x004048A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048A4: lwc1        $f0, 0x3CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3CC);
    // 0x004048A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004048AC: swc1        $f0, -0x6A4($at)
    MEM_W(-0X6A4, ctx->r1) = ctx->f0.u32l;
L_004048B0:
    // 0x004048B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004048B4: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
L_004048B8:
    // 0x004048B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004048BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004048C0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x004048C4: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x004048C8: nop
    
            goto L_004049EC;
    }
    // 0x004048C8: nop

    // 0x004048CC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x004048D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x004048D4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x004048D8: nop

    // 0x004048DC: bc1f        L_004049EC
    if (!c1cs) {
        // 0x004048E0: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_004049EC;
    }
    // 0x004048E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x004048E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004048E8: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x004048EC: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x004048F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048F4: lwc1        $f1, 0x3D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3D0);
    // 0x004048F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048FC: lwc1        $f2, 0x3D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3D4);
    // 0x00404900: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404904: lwc1        $f3, 0x3D8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3D8);
    // 0x00404908: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040490C: lwc1        $f0, 0x3DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3DC);
    // 0x00404910: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00404914: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x00404918: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040491C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x00404920: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00404924: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x00404928: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x0040492C: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x00404930: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00404934: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x00404938: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x0040493C: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x00404940: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00404944: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00404948: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0040494C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x00404950: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x00404954: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x00404958: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x0040495C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00404960: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00404964: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00404968: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x0040496C: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x00404970: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x00404974: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00404978: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0040497C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00404980: jal         0x00228108
    // 0x00404984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_8;
    // 0x00404984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_8:
    // 0x00404988: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x0040498C: nop
    
            goto L_004049EC;
    }
    // 0x0040498C: nop

    // 0x00404990: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404994: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x00404998: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040499C: beq         $v1, $zero, L_004049EC
    if (ctx->r3 == 0) {
        // 0x004049A0: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_004049EC;
    }
    // 0x004049A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004049A4: bnel        $v0, $zero, L_004049EC
    if (ctx->r2 != 0) {
        // 0x004049A8: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_004049EC;
    }
    goto skip_1;
    // 0x004049A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x004049AC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004049B0: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x004049B4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x004049B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004049BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004049C0: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x004049C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004049C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004049CC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x004049D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004049D4: beq         $v0, $v1, L_004049E8
    if (ctx->r2 == ctx->r3) {
        // 0x004049D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004049E8;
    }
    // 0x004049D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049DC: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x004049E0: j           L_004049EC
    // 0x004049E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
        goto L_004049EC;
    // 0x004049E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_004049E8:
    // 0x004049E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_004049EC:
    // 0x004049EC: beq         $s3, $zero, L_00404A8C
    if (ctx->r19 == 0) {
        // 0x004049F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00404A8C;
    }
    // 0x004049F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049F4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x004049F8: addiu       $s1, $s1, -0x5EC
    ctx->r17 = ADD32(ctx->r17, -0X5EC);
    // 0x004049FC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00404A00: beq         $v1, $v0, L_00404A8C
    if (ctx->r3 == ctx->r2) {
        // 0x00404A04: nop
    
            goto L_00404A8C;
    }
    // 0x00404A04: nop

    // 0x00404A08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A0C: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00404A10: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00404A14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00404A18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A1C: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00404A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404A24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404A28: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00404A2C: lw          $v1, -0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X8);
    // 0x00404A30: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x00404A34: beq         $v1, $zero, L_00404A8C
    if (ctx->r3 == 0) {
        // 0x00404A38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00404A8C;
    }
    // 0x00404A38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404A3C: beq         $s0, $v0, L_00404A88
    if (ctx->r16 == ctx->r2) {
        // 0x00404A40: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_00404A88;
    }
    // 0x00404A40: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x00404A44: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00404A48: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00404A4C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00404A50: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00404A54: jal         0x002119FC
    // 0x00404A58: nop

    func_002119FC(rdram, ctx);
        goto after_9;
    // 0x00404A58: nop

    after_9:
    // 0x00404A5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404A60: lwc1        $f1, 0x3E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3E0);
    // 0x00404A64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00404A68: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00404A6C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x00404A70: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00404A74: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00404A78: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00404A7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00404A80: j           L_00404A8C
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_00404A8C;
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00404A88:
    // 0x00404A88: swc1        $f20, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f20.u32l;
L_00404A8C:
    // 0x00404A8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00404A90: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00404A94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404A98: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x00404A9C: beq         $a0, $zero, L_00404AE4
    if (ctx->r4 == 0) {
        // 0x00404AA0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_00404AE4;
    }
    // 0x00404AA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00404AA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404AA8: lwc1        $f0, 0x3E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3E4);
    // 0x00404AAC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00404AB0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
L_00404AB4:
    // 0x00404AB4: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x00404AB8: sw          $zero, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = 0;
    // 0x00404ABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00404AC0: lw          $v1, 0x144($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X144);
    // 0x00404AC4: blez        $v1, L_00404AD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00404AC8: sw          $v0, 0x1F8($a0)
        MEM_W(0X1F8, ctx->r4) = ctx->r2;
            goto L_00404AD8;
    }
    // 0x00404AC8: sw          $v0, 0x1F8($a0)
    MEM_W(0X1F8, ctx->r4) = ctx->r2;
    // 0x00404ACC: lw          $v0, -0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X8);
    // 0x00404AD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00404AD4: sw          $v0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r2;
L_00404AD8:
    // 0x00404AD8: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00404ADC: bnel        $a0, $zero, L_00404AB4
    if (ctx->r4 != 0) {
        // 0x00404AE0: sw          $zero, 0x1EC($a0)
        MEM_W(0X1EC, ctx->r4) = 0;
            goto L_00404AB4;
    }
    goto skip_2;
    // 0x00404AE0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
    skip_2:
L_00404AE4:
    // 0x00404AE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404AE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00404AEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x00404AF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00404AF4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00404AF8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00404AFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00404B04: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00404B08: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00404B0C: jal         0x00246108
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_10;
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_10:
    // 0x00404B14: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00404B18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B1C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00404B20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00404B24: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404B28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404B2C: addiu       $s0, $s0, -0x5EC
    ctx->r16 = ADD32(ctx->r16, -0X5EC);
    // 0x00404B30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B34: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00404B38: bne         $v0, $s1, L_00404B4C
    if (ctx->r2 != ctx->r17) {
        // 0x00404B3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B4C;
    }
    // 0x00404B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B40: jal         0x00404FE0
    // 0x00404B44: nop

    func_00404FE0(rdram, ctx);
        goto after_11;
    // 0x00404B44: nop

    after_11:
    // 0x00404B48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B4C:
    // 0x00404B4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B50: jal         0x004050E0
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004050E0(rdram, ctx);
        goto after_12;
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_12:
    // 0x00404B58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00404B5C: bne         $v0, $s1, L_00404B70
    if (ctx->r2 != ctx->r17) {
        // 0x00404B60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B70;
    }
    // 0x00404B60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B64: jal         0x00405288
    // 0x00404B68: nop

    func_00405288(rdram, ctx);
        goto after_13;
    // 0x00404B68: nop

    after_13:
    // 0x00404B6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B70:
    // 0x00404B70: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B74: jal         0x004053C4
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004053C4(rdram, ctx);
        goto after_14;
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_14:
    // 0x00404B7C: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x00404B80: beq         $v0, $zero, L_00404C08
    if (ctx->r2 == 0) {
        // 0x00404B84: nop
    
            goto L_00404C08;
    }
    // 0x00404B84: nop

    // 0x00404B88: lw          $v0, -0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XBC);
    // 0x00404B8C: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404B90: nop
    
            goto L_00404BF8;
    }
    // 0x00404B90: nop

    // 0x00404B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404B98: lw          $v0, -0x5EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5EC);
    // 0x00404B9C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00404BA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00404BA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BA8: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404BAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00404BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00404BB4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00404BB8: bne         $v0, $s3, L_00404BF8
    if (ctx->r2 != ctx->r19) {
        // 0x00404BBC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BBC: nop

    // 0x00404BC0: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x00404BC4: bne         $v1, $v0, L_00404BF8
    if (ctx->r3 != ctx->r2) {
        // 0x00404BC8: nop
    
            goto L_00404BF8;
    }
    // 0x00404BC8: nop

    // 0x00404BCC: lw          $v0, -0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC4);
    // 0x00404BD0: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404BD4: nop
    
            goto L_00404BF8;
    }
    // 0x00404BD4: nop

    // 0x00404BD8: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x00404BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404BE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00404BE4: nop

    // 0x00404BE8: bc1f        L_00404BF8
    if (!c1cs) {
        // 0x00404BEC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BEC: nop

    // 0x00404BF0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x00404BF4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_00404BF8:
    // 0x00404BF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BFC: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404C00: bne         $v0, $zero, L_00404C20
    if (ctx->r2 != 0) {
        // 0x00404C04: nop
    
            goto L_00404C20;
    }
    // 0x00404C04: nop

L_00404C08:
    // 0x00404C08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404C0C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00404C10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00404C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404C18: beql        $v1, $v0, L_00404C20
    if (ctx->r3 == ctx->r2) {
        // 0x00404C1C: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_00404C20;
    }
    goto skip_3;
    // 0x00404C1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    skip_3:
L_00404C20:
    // 0x00404C20: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x00404C24: lw          $s4, 0xF8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF8);
    // 0x00404C28: lw          $s3, 0xF4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XF4);
    // 0x00404C2C: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x00404C30: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x00404C34: lw          $s0, 0xE8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE8);
    // 0x00404C38: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x00404C3C: jr          $ra
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_002811C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002811C4: jr          $ra
    // 0x002811C8: nop

    return;
    // 0x002811C8: nop

;}
RECOMP_FUNC void func_0026E42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E42C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E430: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E434: lh          $a0, 0x6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6);
    // 0x0026E438: jal         0x00275624
    // 0x0026E43C: nop

    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0026E43C: nop

    after_0:
    // 0x0026E440: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E444: jr          $ra
    // 0x0026E448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E288: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E28C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040E290: beq         $v0, $zero, L_0040E2A0
    if (ctx->r2 == 0) {
        // 0x0040E294: nop
    
            goto L_0040E2A0;
    }
    // 0x0040E294: nop

    // 0x0040E298: jal         0x00243414
    // 0x0040E29C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E29C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0040E2A0:
    // 0x0040E2A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E2A4: jr          $ra
    // 0x0040E2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E4E4: beq         $v0, $zero, L_0029E534
    if (ctx->r2 == 0) {
        // 0x0029E4E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0029E534;
    }
    // 0x0029E4E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029E4EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029E4F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0029E4F4: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x0029E4F8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029E4FC: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x0029E500: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0029E504: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0029E508: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x0029E50C: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x0029E510: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x0029E514: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x0029E518: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x0029E51C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_0029E520:
    // 0x0029E520: lbu         $s1, 0x0($a1)
    ctx->r17 = MEM_BU(ctx->r5, 0X0);
    // 0x0029E524: beq         $s1, $zero, L_0029E548
    if (ctx->r17 == 0) {
        // 0x0029E528: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0029E548;
    }
    // 0x0029E528: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0029E52C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
L_0029E530:
    // 0x0029E530: beq         $s1, $v0, L_0029E54C
    if (ctx->r17 == ctx->r2) {
        // 0x0029E534: subu        $s0, $s2, $a1
        ctx->r16 = SUB32(ctx->r18, ctx->r5);
            goto L_0029E54C;
    }
L_0029E534:
    // 0x0029E534: subu        $s0, $s2, $a1
    ctx->r16 = SUB32(ctx->r18, ctx->r5);
    // 0x0029E538: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E53C: lbu         $s1, 0x0($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E540: bne         $s1, $zero, L_0029E530
    if (ctx->r17 != 0) {
        // 0x0029E544: nop
    
            goto L_0029E530;
    }
    // 0x0029E544: nop

L_0029E548:
    // 0x0029E548: subu        $s0, $s2, $a1
    ctx->r16 = SUB32(ctx->r18, ctx->r5);
L_0029E54C:
    // 0x0029E54C: blez        $s0, L_0029E574
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E550: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029E574;
    }
    // 0x0029E550: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E554: jalr        $s4
    // 0x0029E558: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x0029E558: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0029E55C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E560: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E564: nop
    
            goto L_0029EA10;
    }
    // 0x0029E564: nop

    // 0x0029E568: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E56C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E570: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E574:
    // 0x0029E574: beq         $s1, $zero, L_0029EA10
    if (ctx->r17 == 0) {
        // 0x0029E578: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0029EA10;
    }
    // 0x0029E578: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E57C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x0029E580: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0029E584: addiu       $s0, $s0, -0x55B0
    ctx->r16 = ADD32(ctx->r16, -0X55B0);
    // 0x0029E588: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0029E58C: addiu       $s1, $s1, -0x55A8
    ctx->r17 = ADD32(ctx->r17, -0X55A8);
L_0029E590:
    // 0x0029E590: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E594: jal         0x0029E488
    // 0x0029E598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E488(rdram, ctx);
        goto after_1;
    // 0x0029E598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0029E59C: beq         $v0, $zero, L_0029E5C4
    if (ctx->r2 == 0) {
        // 0x0029E5A0: subu        $v0, $v0, $s0
        ctx->r2 = SUB32(ctx->r2, ctx->r16);
            goto L_0029E5C4;
    }
    // 0x0029E5A0: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x0029E5A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029E5A8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0029E5AC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0029E5B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029E5B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E5B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029E5BC: j           L_0029E590
    // 0x0029E5C0: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
        goto L_0029E590;
    // 0x0029E5C0: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
L_0029E5C4:
    // 0x0029E5C4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E5C8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x0029E5CC: bnel        $v1, $v0, L_0029E644
    if (ctx->r3 != ctx->r2) {
        // 0x0029E5D0: sw          $zero, 0x38($sp)
        MEM_W(0X38, ctx->r29) = 0;
            goto L_0029E644;
    }
    goto skip_0;
    // 0x0029E5D0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    skip_0:
    // 0x0029E5D4: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x0029E5D8: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029E5DC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029E5E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029E5E4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0029E5E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0029E5EC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0029E5F0: bgez        $a0, L_0029E60C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0029E5F4: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_0029E60C;
    }
    // 0x0029E5F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x0029E5F8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0029E5FC: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x0029E600: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x0029E604: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x0029E608: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
L_0029E60C:
    // 0x0029E60C: j           L_0029E658
    // 0x0029E610: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_0029E658;
    // 0x0029E610: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E614:
    // 0x0029E614: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x0029E618: slti        $v0, $v1, 0x3E7
    ctx->r2 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x0029E61C: beql        $v0, $zero, L_0029E644
    if (ctx->r2 == 0) {
        // 0x0029E620: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0029E644;
    }
    goto skip_1;
    // 0x0029E620: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0029E624: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0029E628: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E62C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E630: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029E634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E638: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E63C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x0029E640: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E644:
    // 0x0029E644: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E648: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E64C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x0029E650: bne         $v0, $zero, L_0029E614
    if (ctx->r2 != 0) {
        // 0x0029E654: nop
    
            goto L_0029E614;
    }
    // 0x0029E654: nop

L_0029E658:
    // 0x0029E658: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E65C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x0029E660: beq         $v1, $v0, L_0029E670
    if (ctx->r3 == ctx->r2) {
        // 0x0029E664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029E670;
    }
    // 0x0029E664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029E668: j           L_0029E6F0
    // 0x0029E66C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_0029E6F0;
    // 0x0029E66C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_0029E670:
    // 0x0029E670: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E674: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E678: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x0029E67C: bnel        $v1, $v0, L_0029E6DC
    if (ctx->r3 != ctx->r2) {
        // 0x0029E680: sw          $zero, 0x34($sp)
        MEM_W(0X34, ctx->r29) = 0;
            goto L_0029E6DC;
    }
    goto skip_2;
    // 0x0029E680: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    skip_2:
    // 0x0029E684: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E688: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x0029E68C: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029E690: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029E694: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029E698: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0029E69C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0029E6A0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0029E6A4: j           L_0029E6F0
    // 0x0029E6A8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
        goto L_0029E6F0;
    // 0x0029E6A8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
L_0029E6AC:
    // 0x0029E6AC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x0029E6B0: slti        $v0, $v1, 0x3E7
    ctx->r2 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x0029E6B4: beql        $v0, $zero, L_0029E6DC
    if (ctx->r2 == 0) {
        // 0x0029E6B8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0029E6DC;
    }
    goto skip_3;
    // 0x0029E6B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x0029E6BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0029E6C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E6C4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E6C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029E6CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E6D0: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E6D4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0029E6D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E6DC:
    // 0x0029E6DC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E6E0: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x0029E6E4: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x0029E6E8: bne         $v0, $zero, L_0029E6AC
    if (ctx->r2 != 0) {
        // 0x0029E6EC: nop
    
            goto L_0029E6AC;
    }
    // 0x0029E6EC: nop

L_0029E6F0:
    // 0x0029E6F0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E6F4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029E6F8: addiu       $a0, $a0, -0x5590
    ctx->r4 = ADD32(ctx->r4, -0X5590);
    // 0x0029E6FC: jal         0x0029E488
    // 0x0029E700: nop

    func_0029E488(rdram, ctx);
        goto after_2;
    // 0x0029E700: nop

    after_2:
    // 0x0029E704: beq         $v0, $zero, L_0029E714
    if (ctx->r2 == 0) {
        // 0x0029E708: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0029E714;
    }
    // 0x0029E708: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029E70C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E710: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029E714:
    // 0x0029E714: sb          $v0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r2;
    // 0x0029E718: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x0029E71C: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x0029E720: bne         $v1, $v0, L_0029E744
    if (ctx->r3 != ctx->r2) {
        // 0x0029E724: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0029E744;
    }
    // 0x0029E724: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0029E728: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E72C: bne         $v0, $v1, L_0029E748
    if (ctx->r2 != ctx->r3) {
        // 0x0029E730: addiu       $a1, $sp, 0x8C
        ctx->r5 = ADD32(ctx->r29, 0X8C);
            goto L_0029E748;
    }
    // 0x0029E730: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x0029E734: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029E738: sb          $v0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r2;
    // 0x0029E73C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029E740: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0029E744:
    // 0x0029E744: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
L_0029E748:
    // 0x0029E748: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    // 0x0029E74C: jal         0x0029EA34
    // 0x0029E750: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_0029EA34(rdram, ctx);
        goto after_3;
    // 0x0029E750: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x0029E754: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0029E758: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0029E75C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029E760: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0029E764: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0029E768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029E76C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029E770: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0029E774: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0029E778: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029E77C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029E780: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x0029E784: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0029E788: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0029E78C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0029E790: bne         $v0, $zero, L_0029E7F0
    if (ctx->r2 != 0) {
        // 0x0029E794: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_0029E7F0;
    }
    // 0x0029E794: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x0029E798: blez        $a0, L_0029E7F0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x0029E79C: nop
    
            goto L_0029E7F0;
    }
    // 0x0029E79C: nop

    // 0x0029E7A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029E7A4: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E7A8:
    // 0x0029E7A8: beq         $v0, $zero, L_0029E7B4
    if (ctx->r2 == 0) {
        // 0x0029E7AC: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E7B4;
    }
    // 0x0029E7AC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E7B0: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E7B4:
    // 0x0029E7B4: blezl       $s0, L_0029E7E8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E7B8: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E7E8;
    }
    goto skip_4;
    // 0x0029E7B8: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_4:
    // 0x0029E7BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E7C0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E7C4: addiu       $a1, $a1, -0x7660
    ctx->r5 = ADD32(ctx->r5, -0X7660);
    // 0x0029E7C8: jalr        $s4
    // 0x0029E7CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_4;
    // 0x0029E7CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0029E7D0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E7D4: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E7D8: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E7D8: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E7DC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E7E0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E7E4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E7E8:
    // 0x0029E7E8: bgtz        $s1, L_0029E7A8
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E7EC: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E7A8;
    }
    // 0x0029E7EC: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E7F0:
    // 0x0029E7F0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0029E7F4: blez        $a2, L_0029E820
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0029E7F8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029E820;
    }
    // 0x0029E7F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E7FC: jalr        $s4
    // 0x0029E800: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x0029E800: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x0029E804: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E808: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E80C: nop
    
            goto L_0029EA10;
    }
    // 0x0029E80C: nop

    // 0x0029E810: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E814: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0029E818: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E81C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E820:
    // 0x0029E820: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0029E824: blez        $v0, L_0029E87C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E828: nop
    
            goto L_0029E87C;
    }
    // 0x0029E828: nop

    // 0x0029E82C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E830: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E834:
    // 0x0029E834: beq         $v0, $zero, L_0029E840
    if (ctx->r2 == 0) {
        // 0x0029E838: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E840;
    }
    // 0x0029E838: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E83C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E840:
    // 0x0029E840: blezl       $s0, L_0029E874
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E844: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E874;
    }
    goto skip_5;
    // 0x0029E844: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_5:
    // 0x0029E848: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E84C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E850: addiu       $a1, $a1, -0x763C
    ctx->r5 = ADD32(ctx->r5, -0X763C);
    // 0x0029E854: jalr        $s4
    // 0x0029E858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x0029E858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0029E85C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E860: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E864: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E864: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E868: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E86C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E870: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E874:
    // 0x0029E874: bgtz        $s1, L_0029E834
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E878: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E834;
    }
    // 0x0029E878: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E87C:
    // 0x0029E87C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0029E880: blez        $a2, L_0029E8B0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0029E884: nop
    
            goto L_0029E8B0;
    }
    // 0x0029E884: nop

    // 0x0029E888: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0029E88C: jalr        $s4
    // 0x0029E890: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x0029E890: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0029E894: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E898: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E89C: nop
    
            goto L_0029EA10;
    }
    // 0x0029E89C: nop

    // 0x0029E8A0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E8A4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0029E8A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E8AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E8B0:
    // 0x0029E8B0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0029E8B4: blez        $v0, L_0029E90C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E8B8: nop
    
            goto L_0029E90C;
    }
    // 0x0029E8B8: nop

    // 0x0029E8BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E8C0: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E8C4:
    // 0x0029E8C4: beq         $v0, $zero, L_0029E8D0
    if (ctx->r2 == 0) {
        // 0x0029E8C8: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E8D0;
    }
    // 0x0029E8C8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E8CC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E8D0:
    // 0x0029E8D0: blezl       $s0, L_0029E904
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E8D4: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E904;
    }
    goto skip_6;
    // 0x0029E8D4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_6:
    // 0x0029E8D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E8DC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E8E0: addiu       $a1, $a1, -0x763C
    ctx->r5 = ADD32(ctx->r5, -0X763C);
    // 0x0029E8E4: jalr        $s4
    // 0x0029E8E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x0029E8E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0029E8EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E8F0: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E8F4: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E8F4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E8F8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E8FC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E900: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E904:
    // 0x0029E904: bgtz        $s1, L_0029E8C4
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E908: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E8C4;
    }
    // 0x0029E908: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E90C:
    // 0x0029E90C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0029E910: blez        $a2, L_0029E944
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0029E914: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029E944;
    }
    // 0x0029E914: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E918: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0029E91C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0029E920: jalr        $s4
    // 0x0029E924: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x0029E924: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_9:
    // 0x0029E928: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E92C: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E930: nop
    
            goto L_0029EA10;
    }
    // 0x0029E930: nop

    // 0x0029E934: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E938: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0029E93C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029E940: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E944:
    // 0x0029E944: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0029E948: blez        $v0, L_0029E9A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E94C: nop
    
            goto L_0029E9A0;
    }
    // 0x0029E94C: nop

    // 0x0029E950: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E954: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E958:
    // 0x0029E958: beq         $v0, $zero, L_0029E964
    if (ctx->r2 == 0) {
        // 0x0029E95C: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E964;
    }
    // 0x0029E95C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E960: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E964:
    // 0x0029E964: blezl       $s0, L_0029E998
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E968: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029E998;
    }
    goto skip_7;
    // 0x0029E968: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_7:
    // 0x0029E96C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E970: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E974: addiu       $a1, $a1, -0x763C
    ctx->r5 = ADD32(ctx->r5, -0X763C);
    // 0x0029E978: jalr        $s4
    // 0x0029E97C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x0029E97C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0029E980: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E984: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E988: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E988: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E98C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E990: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E994: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029E998:
    // 0x0029E998: bgtz        $s1, L_0029E958
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029E99C: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E958;
    }
    // 0x0029E99C: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E9A0:
    // 0x0029E9A0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0029E9A4: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0029E9A8: beq         $v0, $zero, L_0029E520
    if (ctx->r2 == 0) {
        // 0x0029E9AC: addiu       $a1, $s2, 0x1
        ctx->r5 = ADD32(ctx->r18, 0X1);
            goto L_0029E520;
    }
    // 0x0029E9AC: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    // 0x0029E9B0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0029E9B4: blez        $v0, L_0029E520
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029E9B8: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0029E520;
    }
    // 0x0029E9B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029E9BC: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_0029E9C0:
    // 0x0029E9C0: beq         $v0, $zero, L_0029E9CC
    if (ctx->r2 == 0) {
        // 0x0029E9C4: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_0029E9CC;
    }
    // 0x0029E9C4: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0029E9C8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0029E9CC:
    // 0x0029E9CC: blezl       $s0, L_0029EA00
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0029E9D0: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA00;
    }
    goto skip_8;
    // 0x0029E9D0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_8:
    // 0x0029E9D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029E9D8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029E9DC: addiu       $a1, $a1, -0x7660
    ctx->r5 = ADD32(ctx->r5, -0X7660);
    // 0x0029E9E0: jalr        $s4
    // 0x0029E9E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x0029E9E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0029E9E8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0029E9EC: beq         $s3, $zero, L_0029EA10
    if (ctx->r19 == 0) {
        // 0x0029E9F0: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_0029EA10;
    }
    // 0x0029E9F0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x0029E9F4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029E9F8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E9FC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_0029EA00:
    // 0x0029EA00: bgtz        $s1, L_0029E9C0
    if (SIGNED(ctx->r17) > 0) {
        // 0x0029EA04: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_0029E9C0;
    }
    // 0x0029EA04: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
    // 0x0029EA08: j           L_0029E520
    // 0x0029EA0C: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
        goto L_0029E520;
    // 0x0029EA0C: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
L_0029EA10:
    // 0x0029EA10: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0029EA14: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x0029EA18: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x0029EA1C: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x0029EA20: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x0029EA24: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x0029EA28: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x0029EA2C: jr          $ra
    // 0x0029EA30: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0029EA30: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0025EF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EF24: jr          $ra
    // 0x0025EF28: nop

    return;
    // 0x0025EF28: nop

;}
RECOMP_FUNC void func_00460610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460610: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00460614: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00460618: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0046061C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00460620: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00460624: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00460628: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0046062C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00460630: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00460634: jal         0x00429DE4
    // 0x00460638: sb          $a3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r7;
    entry_00429DE4(rdram, ctx);
        goto after_0;
    // 0x00460638: sb          $a3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r7;
    after_0:
    // 0x0046063C: bne         $v0, $zero, L_00460684
    if (ctx->r2 != 0) {
        // 0x00460640: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00460684;
    }
    // 0x00460640: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00460644: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    // 0x00460648: addu        $a2, $s2, $s0
    ctx->r6 = ADD32(ctx->r18, ctx->r16);
L_0046064C:
    // 0x0046064C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00460650: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00460654: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00460658: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0046065C: jal         0x00299A40
    // 0x00460660: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00460660: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00460664: bne         $v0, $zero, L_00460678
    if (ctx->r2 != 0) {
        // 0x00460668: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00460678;
    }
    // 0x00460668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0046066C: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00460670: bne         $v0, $zero, L_0046064C
    if (ctx->r2 != 0) {
        // 0x00460674: addu        $a2, $s2, $s0
        ctx->r6 = ADD32(ctx->r18, ctx->r16);
            goto L_0046064C;
    }
    // 0x00460674: addu        $a2, $s2, $s0
    ctx->r6 = ADD32(ctx->r18, ctx->r16);
L_00460678:
    // 0x00460678: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    // 0x0046067C: jal         0x00429DE4
    // 0x00460680: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00429DE4(rdram, ctx);
        goto after_2;
    // 0x00460680: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_00460684:
    // 0x00460684: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00460688: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0046068C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00460690: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00460694: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00460698: jr          $ra
    // 0x0046069C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0046069C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040ED94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040ED94: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0040ED98: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0040ED9C: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x0040EDA0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x0040EDA4: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x0040EDA8: jr          $ra
    // 0x0040EDAC: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    return;
    // 0x0040EDAC: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0026C114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C118: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C11C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026C120: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C124: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C128: jal         0x0022425C
    // 0x0026C12C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C12C: nop

    after_0:
    // 0x0026C130: beql        $v0, $zero, L_0026C13C
    if (ctx->r2 == 0) {
        // 0x0026C134: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026C13C;
    }
    goto skip_0;
    // 0x0026C134: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026C138: lbu         $v0, 0x59($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X59);
L_0026C13C:
    // 0x0026C13C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C140: jr          $ra
    // 0x0026C144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00240E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00240E90: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00240E94: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x00240E98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00240E9C: sw          $ra, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r31;
    // 0x00240EA0: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x00240EA4: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x00240EA8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00240EAC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240EB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00240EB4: beq         $v0, $zero, L_00240FEC
    if (ctx->r2 == 0) {
        // 0x00240EB8: nop
    
            goto L_00240FEC;
    }
    // 0x00240EB8: nop

    // 0x00240EBC: lb          $v0, 0x5($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X5);
    // 0x00240EC0: beq         $v0, $zero, L_00240FEC
    if (ctx->r2 == 0) {
        // 0x00240EC4: nop
    
            goto L_00240FEC;
    }
    // 0x00240EC4: nop

    // 0x00240EC8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00240ECC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00240ED0: jal         0x00268460
    // 0x00240ED4: nop

    func_00268460(rdram, ctx);
        goto after_0;
    // 0x00240ED4: nop

    after_0:
    // 0x00240ED8: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00240EDC: nop

    // 0x00240EE0: bc1t        L_00240FEC
    if (c1cs) {
        // 0x00240EE4: nop
    
            goto L_00240FEC;
    }
    // 0x00240EE4: nop

    // 0x00240EE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00240EEC: lw          $s1, 0x10($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X10);
    // 0x00240EF0: beq         $s1, $zero, L_00240FEC
    if (ctx->r17 == 0) {
        // 0x00240EF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00240FEC;
    }
    // 0x00240EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00240EF8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00240EFC: bne         $v1, $v0, L_00240F1C
    if (ctx->r3 != ctx->r2) {
        // 0x00240F00: addiu       $v0, $sp, 0x10
        ctx->r2 = ADD32(ctx->r29, 0X10);
            goto L_00240F1C;
    }
    // 0x00240F00: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x00240F04: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00240F08: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00240F0C: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x00240F10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00240F14: beq         $v0, $zero, L_00240FEC
    if (ctx->r2 == 0) {
        // 0x00240F18: addiu       $v0, $sp, 0x10
        ctx->r2 = ADD32(ctx->r29, 0X10);
            goto L_00240FEC;
    }
    // 0x00240F18: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
L_00240F1C:
    // 0x00240F1C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00240F20: sw          $v0, 0x1AB0($at)
    MEM_W(0X1AB0, ctx->r1) = ctx->r2;
    // 0x00240F24: jal         0x00268460
    // 0x00240F28: nop

    func_00268460(rdram, ctx);
        goto after_1;
    // 0x00240F28: nop

    after_1:
    // 0x00240F2C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00240F30: lw          $v0, 0x1AB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1AB0);
    // 0x00240F34: swc1        $f0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f0.u32l;
    // 0x00240F38: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x00240F3C: swc1        $f20, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f20.u32l;
    // 0x00240F40: swc1        $f20, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f20.u32l;
    // 0x00240F44: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00240F48: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x00240F4C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00240F50: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00240F54: nop

    // 0x00240F58: bc1f        L_00240F68
    if (!c1cs) {
        // 0x00240F5C: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_00240F68;
    }
    // 0x00240F5C: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x00240F60: j           L_00240F70
    // 0x00240F64: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
        goto L_00240F70;
    // 0x00240F64: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
L_00240F68:
    // 0x00240F68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00240F6C: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
L_00240F70:
    // 0x00240F70: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00240F74: lw          $v0, 0x1AB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1AB0);
    // 0x00240F78: lwc1        $f1, 0x54($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X54);
    // 0x00240F7C: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00240F80: lwc1        $f0, 0x54($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X54);
    // 0x00240F84: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00240F88: swc1        $f1, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240F8C: swc1        $f0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f0.u32l;
    // 0x00240F90: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00240F94: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00240F98: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00240F9C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00240FA0: nop

    // 0x00240FA4: bc1f        L_00240FB4
    if (!c1cs) {
        // 0x00240FA8: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_00240FB4;
    }
    // 0x00240FA8: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x00240FAC: j           L_00240FBC
    // 0x00240FB0: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
        goto L_00240FBC;
    // 0x00240FB0: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
L_00240FB4:
    // 0x00240FB4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00240FB8: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
L_00240FBC:
    // 0x00240FBC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00240FC0: lw          $v0, 0x1AB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1AB0);
    // 0x00240FC4: lwc1        $f1, 0x54($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X54);
    // 0x00240FC8: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00240FCC: lwc1        $f0, 0x54($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X54);
    // 0x00240FD0: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00240FD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00240FD8: swc1        $f1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240FDC: jal         0x00240800
    // 0x00240FE0: swc1        $f0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f0.u32l;
    entry_00240800(rdram, ctx);
        goto after_2;
    // 0x00240FE0: swc1        $f0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x00240FE4: jal         0x0026CC0C
    // 0x00240FE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026CC0C(rdram, ctx);
        goto after_3;
    // 0x00240FE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_00240FEC:
    // 0x00240FEC: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x00240FF0: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x00240FF4: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x00240FF8: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00240FFC: jr          $ra
    // 0x00241000: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00241000: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00259878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025987C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00259880: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00259884: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00259888: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025988C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259890: lw          $s0, 0x1A8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A8);
    // 0x00259894: lw          $v0, 0x1288($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1288);
    // 0x00259898: bne         $v0, $zero, L_002598AC
    if (ctx->r2 != 0) {
        // 0x0025989C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_002598AC;
    }
    // 0x0025989C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002598A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002598A4: jal         0x00253DE0
    // 0x002598A8: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    func_00253DE0(rdram, ctx);
        goto after_0;
    // 0x002598A8: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    after_0:
L_002598AC:
    // 0x002598AC: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x002598B0: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002598B4: bne         $v0, $zero, L_0025992C
    if (ctx->r2 != 0) {
        // 0x002598B8: nop
    
            goto L_0025992C;
    }
    // 0x002598B8: nop

    // 0x002598BC: jal         0x00253E68
    // 0x002598C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253E68(rdram, ctx);
        goto after_1;
    // 0x002598C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002598C4: lwc1        $f1, 0x110($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X110);
    // 0x002598C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002598CC: lwc1        $f0, 0x7324($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7324);
    // 0x002598D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002598D4: nop

    // 0x002598D8: bc1t        L_002598F8
    if (c1cs) {
        // 0x002598DC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002598F8;
    }
    // 0x002598DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002598E0: lwc1        $f1, 0x118($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X118);
    // 0x002598E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002598E8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002598EC: nop

    // 0x002598F0: bc1f        L_00259904
    if (!c1cs) {
        // 0x002598F4: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00259904;
    }
    // 0x002598F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_002598F8:
    // 0x002598F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002598FC: j           L_00259924
    // 0x00259900: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_00259924;
    // 0x00259900: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_00259904:
    // 0x00259904: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00259908: lw          $v0, -0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X990);
    // 0x0025990C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259910: lwc1        $f0, 0x7328($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7328);
    // 0x00259914: lwc1        $f1, 0x18($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X18);
    // 0x00259918: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025991C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00259920: swc1        $f1, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_00259924:
    // 0x00259924: jal         0x00243414
    // 0x00259928: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00259928: nop

    after_2:
L_0025992C:
    // 0x0025992C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00259930: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00259934: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025993C: jr          $ra
    // 0x00259940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00259940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029B6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B6E4: sw          $a0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r4;
    // 0x0029B6E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029B6EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
;}
RECOMP_FUNC void func_0026CC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CC0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026CC10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026CC14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026CC18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026CC1C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0026CC20: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0026CC24: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x0026CC28: beq         $a0, $zero, L_0026CC48
    if (ctx->r4 == 0) {
        // 0x0026CC2C: sh          $v0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r2;
            goto L_0026CC48;
    }
    // 0x0026CC2C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x0026CC30: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0026CC34: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0026CC38: beq         $v0, $zero, L_0026CC48
    if (ctx->r2 == 0) {
        // 0x0026CC3C: nop
    
            goto L_0026CC48;
    }
    // 0x0026CC3C: nop

    // 0x0026CC40: jal         0x0026CC0C
    // 0x0026CC44: nop

    func_0026CC0C(rdram, ctx);
        goto after_0;
    // 0x0026CC44: nop

    after_0:
L_0026CC48:
    // 0x0026CC48: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0026CC4C: beq         $a0, $zero, L_0026CC6C
    if (ctx->r4 == 0) {
        // 0x0026CC50: nop
    
            goto L_0026CC6C;
    }
    // 0x0026CC50: nop

    // 0x0026CC54: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0026CC58: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0026CC5C: beq         $v0, $zero, L_0026CC6C
    if (ctx->r2 == 0) {
        // 0x0026CC60: nop
    
            goto L_0026CC6C;
    }
    // 0x0026CC60: nop

    // 0x0026CC64: jal         0x0026CC0C
    // 0x0026CC68: nop

    func_0026CC0C(rdram, ctx);
        goto after_1;
    // 0x0026CC68: nop

    after_1:
L_0026CC6C:
    // 0x0026CC6C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0026CC70: beq         $a0, $zero, L_0026CC90
    if (ctx->r4 == 0) {
        // 0x0026CC74: nop
    
            goto L_0026CC90;
    }
    // 0x0026CC74: nop

    // 0x0026CC78: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0026CC7C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0026CC80: beq         $v0, $zero, L_0026CC90
    if (ctx->r2 == 0) {
        // 0x0026CC84: nop
    
            goto L_0026CC90;
    }
    // 0x0026CC84: nop

    // 0x0026CC88: jal         0x0026CC0C
    // 0x0026CC8C: nop

    func_0026CC0C(rdram, ctx);
        goto after_2;
    // 0x0026CC8C: nop

    after_2:
L_0026CC90:
    // 0x0026CC90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026CC94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026CC98: jr          $ra
    // 0x0026CC9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026CC9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027A7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027A7A0: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x0027A7A4: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x0027A7A8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0027A7AC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0027A7B0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x0027A7B4: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x0027A7B8: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x0027A7BC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x0027A7C0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x0027A7C4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x0027A7C8: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x0027A7CC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x0027A7D0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x0027A7D4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x0027A7D8: sdc1        $f29, 0xB8($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0XB8, ctx->r29);
    // 0x0027A7DC: sdc1        $f28, 0xB0($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0XB0, ctx->r29);
    // 0x0027A7E0: sdc1        $f27, 0xA8($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0XA8, ctx->r29);
    // 0x0027A7E4: sdc1        $f26, 0xA0($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0XA0, ctx->r29);
    // 0x0027A7E8: sdc1        $f25, 0x98($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X98, ctx->r29);
    // 0x0027A7EC: sdc1        $f24, 0x90($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X90, ctx->r29);
    // 0x0027A7F0: sdc1        $f23, 0x88($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X88, ctx->r29);
    // 0x0027A7F4: sdc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X80, ctx->r29);
    // 0x0027A7F8: sdc1        $f21, 0x78($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X78, ctx->r29);
    // 0x0027A7FC: sdc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X70, ctx->r29);
    // 0x0027A800: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x0027A804: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0027A808: lwc1        $f27, 0xD0($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0XD0);
    // 0x0027A80C: lwc1        $f28, 0xD4($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x0027A810: lw          $s1, 0xD8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD8);
    // 0x0027A814: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0027A818: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0027A81C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027A820: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027A824: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0027A828: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0027A82C: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x0027A830: beq         $t2, $zero, L_0027AC6C
    if (ctx->r10 == 0) {
        // 0x0027A834: addu        $s0, $a3, $zero
        ctx->r16 = ADD32(ctx->r7, 0);
            goto L_0027AC6C;
    }
    // 0x0027A834: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0027A838: addu        $a0, $t2, $zero
    ctx->r4 = ADD32(ctx->r10, 0);
    // 0x0027A83C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0027A840: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x0027A844: jal         0x0027AE44
    // 0x0027A848: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_0027AE44(rdram, ctx);
        goto after_0;
    // 0x0027A848: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_0:
    // 0x0027A84C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0027A850: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x0027A854: beq         $v1, $zero, L_0027AC6C
    if (ctx->r3 == 0) {
        // 0x0027A858: nop
    
            goto L_0027AC6C;
    }
    // 0x0027A858: nop

    // 0x0027A85C: lbu         $v0, 0x24($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X24);
    // 0x0027A860: beq         $v0, $zero, L_0027AA54
    if (ctx->r2 == 0) {
        // 0x0027A864: nop
    
            goto L_0027AA54;
    }
    // 0x0027A864: nop

    // 0x0027A868: beq         $s1, $zero, L_0027A9AC
    if (ctx->r17 == 0) {
        // 0x0027A86C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_0027A9AC;
    }
    // 0x0027A86C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x0027A870: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027A874: mtc1        $v0, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r2;
    // 0x0027A878: cvt.s.w     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f23.fl = CVT_S_W(ctx->f_odd[(23 - 1) * 2]);
    // 0x0027A87C: addiu       $s1, $v1, 0x8
    ctx->r17 = ADD32(ctx->r3, 0X8);
    // 0x0027A880: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0027A884: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0027A888: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x0027A88C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027A890: lwc1        $f3, -0x7C0C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7C0C);
    // 0x0027A894: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027A898: mtc1        $v0, $f22
    ctx->f22.u32l = ctx->r2;
    // 0x0027A89C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x0027A8A0: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0027A8A4: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0027A8A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027A8AC: mtc1        $v0, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r2;
    // 0x0027A8B0: cvt.s.w     $f29, $f29
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    ctx->f29.fl = CVT_S_W(ctx->f_odd[(29 - 1) * 2]);
    // 0x0027A8B4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027A8B8: nop

    // 0x0027A8BC: bc1t        L_0027AC60
    if (c1cs) {
        // 0x0027A8C0: sub.s       $f22, $f22, $f3
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
            goto L_0027AC60;
    }
    // 0x0027A8C0: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027A8C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027A8C8: ldc1        $f24, -0x7C08($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X7C08);
L_0027A8CC:
    // 0x0027A8CC: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x0027A8D0: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x0027A8D4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0027A8D8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0027A8DC: sub.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f3.fl;
    // 0x0027A8E0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027A8E4: nop

    // 0x0027A8E8: bc1t        L_0027A968
    if (c1cs) {
        // 0x0027A8EC: mov.s       $f21, $f29
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
            goto L_0027A968;
    }
    // 0x0027A8EC: mov.s       $f21, $f29
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
    // 0x0027A8F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027A8F4: lwc1        $f26, -0x7C00($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7C00);
    // 0x0027A8F8: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
L_0027A8FC:
    // 0x0027A8FC: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x0027A900: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027A904: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027A908: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0027A90C: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x0027A910: swc1        $f27, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x0027A914: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x0027A918: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0027A91C: jal         0x0027A4DC
    // 0x0027A920: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_0027A4DC(rdram, ctx);
        goto after_1;
    // 0x0027A920: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_1:
    // 0x0027A924: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x0027A928: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027A92C: bltzl       $s0, L_0027A934
    if (SIGNED(ctx->r16) < 0) {
        // 0x0027A930: add.d       $f1, $f1, $f24
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f24.d); 
    ctx->f1.d = ctx->f1.d + ctx->f24.d;
            goto L_0027A934;
    }
    goto skip_0;
    // 0x0027A930: add.d       $f1, $f1, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f24.d); 
    ctx->f1.d = ctx->f1.d + ctx->f24.d;
    skip_0:
L_0027A934:
    // 0x0027A934: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x0027A938: mul.s       $f1, $f1, $f27
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f27.fl);
    // 0x0027A93C: nop

    // 0x0027A940: mult        $s0, $s2
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027A944: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0027A948: sub.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f26.fl;
    // 0x0027A94C: c.eq.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl == ctx->f25.fl;
    // 0x0027A950: mflo        $t2
    ctx->r10 = lo;
    // 0x0027A954: srl         $v0, $t2, 1
    ctx->r2 = S32(U32(ctx->r10) >> 1);
    // 0x0027A958: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x0027A95C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0027A960: bc1f        L_0027A8FC
    if (!c1cs) {
        // 0x0027A964: add.s       $f21, $f21, $f1
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f1.fl;
            goto L_0027A8FC;
    }
    // 0x0027A964: add.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f1.fl;
L_0027A968:
    // 0x0027A968: mtc1        $s2, $f0
    ctx->f0.u32l = ctx->r18;
    // 0x0027A96C: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0027A970: bltzl       $s2, L_0027A978
    if (SIGNED(ctx->r18) < 0) {
        // 0x0027A974: add.d       $f0, $f0, $f24
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
            goto L_0027A978;
    }
    goto skip_1;
    // 0x0027A974: add.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
    skip_1:
L_0027A978:
    // 0x0027A978: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x0027A97C: mul.s       $f0, $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x0027A980: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027A984: lwc1        $f3, -0x7BFC($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BFC);
    // 0x0027A988: mov.s       $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    ctx->f1.fl = ctx->f22.fl;
    // 0x0027A98C: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027A990: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027A994: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0027A998: nop

    // 0x0027A99C: bc1f        L_0027A8CC
    if (!c1cs) {
        // 0x0027A9A0: add.s       $f23, $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
            goto L_0027A8CC;
    }
    // 0x0027A9A0: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0027A9A4: j           L_0027AC60
    // 0x0027A9A8: nop

        goto L_0027AC60;
    // 0x0027A9A8: nop

L_0027A9AC:
    // 0x0027A9AC: addu        $s7, $s0, $zero
    ctx->r23 = ADD32(ctx->r16, 0);
    // 0x0027A9B0: addiu       $s2, $v1, 0x8
    ctx->r18 = ADD32(ctx->r3, 0X8);
    // 0x0027A9B4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0027A9B8: lhu         $s5, 0x2($v1)
    ctx->r21 = MEM_HU(ctx->r3, 0X2);
    // 0x0027A9BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027A9C0: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x0027A9C4: beq         $s5, $v0, L_0027AC60
    if (ctx->r21 == ctx->r2) {
        // 0x0027A9C8: sw          $v1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r3;
            goto L_0027AC60;
    }
    // 0x0027A9C8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x0027A9CC: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x0027A9D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x0027A9D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0027A9D8:
    // 0x0027A9D8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0027A9DC: lhu         $s1, 0x0($t2)
    ctx->r17 = MEM_HU(ctx->r10, 0X0);
    // 0x0027A9E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x0027A9E4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0027A9E8: beq         $s1, $v1, L_0027AA40
    if (ctx->r17 == ctx->r3) {
        // 0x0027A9EC: sra         $s3, $t2, 16
        ctx->r19 = S32(SIGNED(ctx->r10) >> 16);
            goto L_0027AA40;
    }
    // 0x0027A9EC: sra         $s3, $t2, 16
    ctx->r19 = S32(SIGNED(ctx->r10) >> 16);
    // 0x0027A9F0: sll         $s6, $s7, 16
    ctx->r22 = S32(ctx->r23 << 16);
    // 0x0027A9F4: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_0027A9F8:
    // 0x0027A9F8: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x0027A9FC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0027AA00: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x0027AA04: lw          $s4, 0x4($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X4);
    // 0x0027AA08: sra         $a2, $s6, 16
    ctx->r6 = S32(SIGNED(ctx->r22) >> 16);
    // 0x0027AA0C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x0027AA10: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0027AA14: jal         0x0027A2C4
    // 0x0027AA18: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_0027A2C4(rdram, ctx);
        goto after_2;
    // 0x0027AA18: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_2:
    // 0x0027AA1C: mult        $s0, $s4
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027AA20: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0027AA24: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x0027AA28: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x0027AA2C: mflo        $t2
    ctx->r10 = lo;
    // 0x0027AA30: srl         $v0, $t2, 1
    ctx->r2 = S32(U32(ctx->r10) >> 1);
    // 0x0027AA34: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x0027AA38: bne         $s1, $fp, L_0027A9F8
    if (ctx->r17 != ctx->r30) {
        // 0x0027AA3C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0027A9F8;
    }
    // 0x0027AA3C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_0027AA40:
    // 0x0027AA40: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x0027AA44: bne         $s5, $v1, L_0027A9D8
    if (ctx->r21 != ctx->r3) {
        // 0x0027AA48: addu        $s7, $s7, $s4
        ctx->r23 = ADD32(ctx->r23, ctx->r20);
            goto L_0027A9D8;
    }
    // 0x0027AA48: addu        $s7, $s7, $s4
    ctx->r23 = ADD32(ctx->r23, ctx->r20);
    // 0x0027AA4C: j           L_0027AC60
    // 0x0027AA50: nop

        goto L_0027AC60;
    // 0x0027AA50: nop

L_0027AA54:
    // 0x0027AA54: beq         $s1, $zero, L_0027ABA8
    if (ctx->r17 == 0) {
        // 0x0027AA58: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_0027ABA8;
    }
    // 0x0027AA58: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x0027AA5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027AA60: mtc1        $v0, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r2;
    // 0x0027AA64: cvt.s.w     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f23.fl = CVT_S_W(ctx->f_odd[(23 - 1) * 2]);
    // 0x0027AA68: addiu       $s3, $v1, 0x8
    ctx->r19 = ADD32(ctx->r3, 0X8);
    // 0x0027AA6C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0027AA70: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x0027AA74: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x0027AA78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027AA7C: lwc1        $f3, -0x7BF8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BF8);
    // 0x0027AA80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027AA84: mtc1        $v0, $f22
    ctx->f22.u32l = ctx->r2;
    // 0x0027AA88: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x0027AA8C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0027AA90: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0027AA94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027AA98: mtc1        $v0, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r2;
    // 0x0027AA9C: cvt.s.w     $f29, $f29
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    ctx->f29.fl = CVT_S_W(ctx->f_odd[(29 - 1) * 2]);
    // 0x0027AAA0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027AAA4: nop

    // 0x0027AAA8: bc1t        L_0027AC60
    if (c1cs) {
        // 0x0027AAAC: sub.s       $f22, $f22, $f3
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
            goto L_0027AC60;
    }
    // 0x0027AAAC: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027AAB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027AAB4: ldc1        $f24, -0x7BF0($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X7BF0);
L_0027AAB8:
    // 0x0027AAB8: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x0027AABC: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x0027AAC0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0027AAC4: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0027AAC8: sub.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f3.fl;
    // 0x0027AACC: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027AAD0: nop

    // 0x0027AAD4: bc1t        L_0027AB64
    if (c1cs) {
        // 0x0027AAD8: mov.s       $f21, $f29
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
            goto L_0027AB64;
    }
    // 0x0027AAD8: mov.s       $f21, $f29
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
    // 0x0027AADC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027AAE0: lwc1        $f26, -0x7BE8($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7BE8);
    // 0x0027AAE4: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
L_0027AAE8:
    // 0x0027AAE8: addiu       $a0, $s3, 0x8
    ctx->r4 = ADD32(ctx->r19, 0X8);
    // 0x0027AAEC: lw          $s4, 0x4($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X4);
    // 0x0027AAF0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027AAF4: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x0027AAF8: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027AAFC: mult        $s0, $s4
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027AB00: swc1        $f27, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x0027AB04: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x0027AB08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027AB0C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x0027AB10: mflo        $s2
    ctx->r18 = lo;
    // 0x0027AB14: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x0027AB18: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    // 0x0027AB1C: jal         0x00279528
    // 0x0027AB20: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    func_00279528(rdram, ctx);
        goto after_3;
    // 0x0027AB20: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    after_3:
    // 0x0027AB24: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0027AB28: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0027AB2C: bltzl       $s0, L_0027AB34
    if (SIGNED(ctx->r16) < 0) {
        // 0x0027AB30: add.d       $f0, $f0, $f24
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
            goto L_0027AB34;
    }
    goto skip_2;
    // 0x0027AB30: add.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
    skip_2:
L_0027AB34:
    // 0x0027AB34: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x0027AB38: mul.s       $f0, $f0, $f27
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f27.fl);
    // 0x0027AB3C: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
    // 0x0027AB40: srl         $v0, $s2, 1
    ctx->r2 = S32(U32(ctx->r18) >> 1);
    // 0x0027AB44: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0027AB48: sub.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f26.fl;
    // 0x0027AB4C: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x0027AB50: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0027AB54: c.eq.s      $f1, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f1.fl == ctx->f25.fl;
    // 0x0027AB58: nop

    // 0x0027AB5C: bc1f        L_0027AAE8
    if (!c1cs) {
        // 0x0027AB60: add.s       $f21, $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
            goto L_0027AAE8;
    }
    // 0x0027AB60: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
L_0027AB64:
    // 0x0027AB64: mtc1        $s4, $f0
    ctx->f0.u32l = ctx->r20;
    // 0x0027AB68: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0027AB6C: bltzl       $s4, L_0027AB74
    if (SIGNED(ctx->r20) < 0) {
        // 0x0027AB70: add.d       $f0, $f0, $f24
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
            goto L_0027AB74;
    }
    goto skip_3;
    // 0x0027AB70: add.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
    skip_3:
L_0027AB74:
    // 0x0027AB74: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x0027AB78: mul.s       $f0, $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x0027AB7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027AB80: lwc1        $f3, -0x7BE4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BE4);
    // 0x0027AB84: mov.s       $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    ctx->f1.fl = ctx->f22.fl;
    // 0x0027AB88: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027AB8C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027AB90: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0027AB94: nop

    // 0x0027AB98: bc1f        L_0027AAB8
    if (!c1cs) {
        // 0x0027AB9C: add.s       $f23, $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
            goto L_0027AAB8;
    }
    // 0x0027AB9C: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0027ABA0: j           L_0027AC60
    // 0x0027ABA4: nop

        goto L_0027AC60;
    // 0x0027ABA4: nop

L_0027ABA8:
    // 0x0027ABA8: addu        $fp, $s0, $zero
    ctx->r30 = ADD32(ctx->r16, 0);
    // 0x0027ABAC: addiu       $s2, $v1, 0x8
    ctx->r18 = ADD32(ctx->r3, 0X8);
    // 0x0027ABB0: lhu         $s6, 0x2($v1)
    ctx->r22 = MEM_HU(ctx->r3, 0X2);
    // 0x0027ABB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027ABB8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x0027ABBC: beq         $s6, $v0, L_0027AC60
    if (ctx->r22 == ctx->r2) {
        // 0x0027ABC0: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0027AC60;
    }
    // 0x0027ABC0: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0027ABC4: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x0027ABC8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0027ABCC: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
L_0027ABD0:
    // 0x0027ABD0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x0027ABD4: lhu         $s3, 0x0($v1)
    ctx->r19 = MEM_HU(ctx->r3, 0X0);
    // 0x0027ABD8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0027ABDC: beq         $s3, $t1, L_0027AC54
    if (ctx->r19 == ctx->r9) {
        // 0x0027ABE0: sra         $s4, $t2, 16
        ctx->r20 = S32(SIGNED(ctx->r10) >> 16);
            goto L_0027AC54;
    }
    // 0x0027ABE0: sra         $s4, $t2, 16
    ctx->r20 = S32(SIGNED(ctx->r10) >> 16);
    // 0x0027ABE4: sll         $s7, $fp, 16
    ctx->r23 = S32(ctx->r30 << 16);
    // 0x0027ABE8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_0027ABEC:
    // 0x0027ABEC: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x0027ABF0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0027ABF4: sra         $a3, $s7, 16
    ctx->r7 = S32(SIGNED(ctx->r23) >> 16);
    // 0x0027ABF8: lw          $s5, 0x4($s2)
    ctx->r21 = MEM_W(ctx->r18, 0X4);
    // 0x0027ABFC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0027AC00: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0027AC04: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x0027AC08: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x0027AC0C: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027AC10: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x0027AC14: addu        $s4, $s4, $v0
    ctx->r20 = ADD32(ctx->r20, ctx->r2);
    // 0x0027AC18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027AC1C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0027AC20: mflo        $s1
    ctx->r17 = lo;
    // 0x0027AC24: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
    // 0x0027AC28: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x0027AC2C: jal         0x00279158
    // 0x0027AC30: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_00279158(rdram, ctx);
        goto after_4;
    // 0x0027AC30: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_4:
    // 0x0027AC34: srl         $s1, $s1, 1
    ctx->r17 = S32(U32(ctx->r17) >> 1);
    // 0x0027AC38: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x0027AC3C: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x0027AC40: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x0027AC44: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x0027AC48: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x0027AC4C: bne         $s3, $t0, L_0027ABEC
    if (ctx->r19 != ctx->r8) {
        // 0x0027AC50: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0027ABEC;
    }
    // 0x0027AC50: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_0027AC54:
    // 0x0027AC54: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x0027AC58: bne         $s6, $t1, L_0027ABD0
    if (ctx->r22 != ctx->r9) {
        // 0x0027AC5C: addu        $fp, $fp, $s5
        ctx->r30 = ADD32(ctx->r30, ctx->r21);
            goto L_0027ABD0;
    }
    // 0x0027AC5C: addu        $fp, $fp, $s5
    ctx->r30 = ADD32(ctx->r30, ctx->r21);
L_0027AC60:
    // 0x0027AC60: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x0027AC64: jal         0x0020565C
    // 0x0027AC68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020565C(rdram, ctx);
        goto after_5;
    // 0x0027AC68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
L_0027AC6C:
    // 0x0027AC6C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x0027AC70: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x0027AC74: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x0027AC78: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x0027AC7C: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x0027AC80: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x0027AC84: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x0027AC88: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x0027AC8C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x0027AC90: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x0027AC94: ldc1        $f29, 0xB8($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0XB8);
    // 0x0027AC98: ldc1        $f28, 0xB0($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0XB0);
    // 0x0027AC9C: ldc1        $f27, 0xA8($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0XA8);
    // 0x0027ACA0: ldc1        $f26, 0xA0($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0XA0);
    // 0x0027ACA4: ldc1        $f25, 0x98($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X98);
    // 0x0027ACA8: ldc1        $f24, 0x90($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X90);
    // 0x0027ACAC: ldc1        $f23, 0x88($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X88);
    // 0x0027ACB0: ldc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X80);
    // 0x0027ACB4: ldc1        $f21, 0x78($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X78);
    // 0x0027ACB8: ldc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X70);
    // 0x0027ACBC: jr          $ra
    // 0x0027ACC0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x0027ACC0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_0023E6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023E6D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0023E6DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0023E6E0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0023E6E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0023E6E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0023E6EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0023E6F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0023E6F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023E6F8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x0023E6FC: lw          $s1, 0x4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X4);
    // 0x0023E700: jal         0x002672C8
    // 0x0023E704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_0;
    // 0x0023E704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0023E708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023E70C: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x0023E710: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0023E714: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0023E718: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023E71C: jal         0x0026841C
    // 0x0023E720: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    func_0026841C(rdram, ctx);
        goto after_1;
    // 0x0023E720: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    after_1:
    // 0x0023E724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023E728: jal         0x002671B4
    // 0x0023E72C: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x0023E72C: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    after_2:
    // 0x0023E730: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0023E734: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E738: swc1        $f1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023E73C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023E740: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0023E744: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023E748: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0023E74C: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x0023E750: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023E754: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023E758: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0023E75C: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    // 0x0023E760: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x0023E764: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023E768: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0023E76C: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    // 0x0023E770: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x0023E774: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023E778: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    // 0x0023E77C: lwc1        $f1, 0x4C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4C);
    // 0x0023E780: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023E784: lwc1        $f3, 0xC($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0023E788: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x0023E78C: nop

    // 0x0023E790: bc1fl       L_0023E798
    if (!c1cs) {
        // 0x0023E794: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0023E798;
    }
    goto skip_0;
    // 0x0023E794: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_0:
L_0023E798:
    // 0x0023E798: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0023E79C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023E7A0: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0023E7A4: lwc1        $f1, 0x4C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4C);
    // 0x0023E7A8: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0023E7AC: nop

    // 0x0023E7B0: bc1fl       L_0023E7B8
    if (!c1cs) {
        // 0x0023E7B4: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0023E7B8;
    }
    goto skip_1;
    // 0x0023E7B4: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_1:
L_0023E7B8:
    // 0x0023E7B8: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0023E7BC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E7C0: swc1        $f0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f0.u32l;
    // 0x0023E7C4: lwc1        $f1, 0x54($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X54);
    // 0x0023E7C8: c.le.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl <= ctx->f3.fl;
    // 0x0023E7CC: nop

    // 0x0023E7D0: bc1fl       L_0023E7D8
    if (!c1cs) {
        // 0x0023E7D4: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_0023E7D8;
    }
    goto skip_2;
    // 0x0023E7D4: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_2:
L_0023E7D8:
    // 0x0023E7D8: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0023E7DC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023E7E0: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x0023E7E4: lwc1        $f1, 0x54($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X54);
    // 0x0023E7E8: c.le.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl <= ctx->f1.fl;
    // 0x0023E7EC: nop

    // 0x0023E7F0: bc1fl       L_0023E7F8
    if (!c1cs) {
        // 0x0023E7F4: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_0023E7F8;
    }
    goto skip_3;
    // 0x0023E7F4: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_3:
L_0023E7F8:
    // 0x0023E7F8: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0023E7FC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023E800: swc1        $f0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f0.u32l;
    // 0x0023E804: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0023E808: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0023E80C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0023E810: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023E814: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023E818: jr          $ra
    // 0x0023E81C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0023E81C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A1690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1690: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A1694: lw          $v0, -0x3D00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D00);
    // 0x002A1698: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002A169C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002A16A0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002A16A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A16A8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002A16AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002A16B0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002A16B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002A16B8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x002A16BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x002A16C0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x002A16C4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x002A16C8: bne         $v0, $zero, L_002A16D4
    if (ctx->r2 != 0) {
        // 0x002A16CC: sw          $s4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r20;
            goto L_002A16D4;
    }
    // 0x002A16CC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002A16D0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_002A16D4:
    // 0x002A16D4: beq         $s1, $zero, L_002A1704
    if (ctx->r17 == 0) {
        // 0x002A16D8: sltiu       $v0, $s1, 0x4
        ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
            goto L_002A1704;
    }
    // 0x002A16D8: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
L_002A16DC:
    // 0x002A16DC: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x002A16E0: beq         $v0, $zero, L_002A1700
    if (ctx->r2 == 0) {
        // 0x002A16E4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1700;
    }
    // 0x002A16E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A16E8: jal         0x002A157C
    // 0x002A16EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A157C(rdram, ctx);
        goto after_0;
    // 0x002A16EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_0:
    // 0x002A16F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002A16F4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x002A16F8: bne         $s1, $zero, L_002A16DC
    if (ctx->r17 != 0) {
        // 0x002A16FC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_002A16DC;
    }
    // 0x002A16FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_002A1700:
    // 0x002A1700: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
L_002A1704:
    // 0x002A1704: bne         $v0, $zero, L_002A17BC
    if (ctx->r2 != 0) {
        // 0x002A1708: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_002A17BC;
    }
    // 0x002A1708: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A170C: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x002A1710: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x002A1714: addiu       $s4, $v0, -0x7F10
    ctx->r20 = ADD32(ctx->r2, -0X7F10);
    // 0x002A1718: sltiu       $v0, $s1, 0x10
    ctx->r2 = ctx->r17 < 0X10 ? 1 : 0;
L_002A171C:
    // 0x002A171C: bne         $v0, $zero, L_002A1774
    if (ctx->r2 != 0) {
        // 0x002A1720: andi        $v0, $s0, 0xF
        ctx->r2 = ctx->r16 & 0XF;
            goto L_002A1774;
    }
    // 0x002A1720: andi        $v0, $s0, 0xF
    ctx->r2 = ctx->r16 & 0XF;
    // 0x002A1724: bne         $v0, $zero, L_002A1774
    if (ctx->r2 != 0) {
        // 0x002A1728: nop
    
            goto L_002A1774;
    }
    // 0x002A1728: nop

    // 0x002A172C: beq         $s3, $s5, L_002A1774
    if (ctx->r19 == ctx->r21) {
        // 0x002A1730: addiu       $a0, $s6, -0x7EF0
        ctx->r4 = ADD32(ctx->r22, -0X7EF0);
            goto L_002A1774;
    }
    // 0x002A1730: addiu       $a0, $s6, -0x7EF0
    ctx->r4 = ADD32(ctx->r22, -0X7EF0);
    // 0x002A1734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002A1738: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002A173C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x002A1740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1744: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1748: jal         0x002A2FB0
    // 0x002A174C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    func_002A2FB0(rdram, ctx);
        goto after_1;
    // 0x002A174C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_1:
    // 0x002A1750: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002A1754: beq         $s3, $s5, L_002A17B4
    if (ctx->r19 == ctx->r21) {
        // 0x002A1758: sltiu       $v0, $s1, 0x4
        ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
            goto L_002A17B4;
    }
    // 0x002A1758: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
    // 0x002A175C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002A1760: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A1764: jal         0x0029B6F0
    // 0x002A1768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002A1768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002A176C: j           L_002A17B0
    // 0x002A1770: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
        goto L_002A17B0;
    // 0x002A1770: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_002A1774:
    // 0x002A1774: jal         0x002A1384
    // 0x002A1778: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002A1384(rdram, ctx);
        goto after_3;
    // 0x002A1778: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x002A177C: srl         $v1, $v0, 24
    ctx->r3 = S32(U32(ctx->r2) >> 24);
    // 0x002A1780: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002A1784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A1788: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x002A178C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002A1790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A1794: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x002A1798: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002A179C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A17A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002A17A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A17A8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x002A17AC: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
L_002A17B0:
    // 0x002A17B0: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
L_002A17B4:
    // 0x002A17B4: beq         $v0, $zero, L_002A171C
    if (ctx->r2 == 0) {
        // 0x002A17B8: sltiu       $v0, $s1, 0x10
        ctx->r2 = ctx->r17 < 0X10 ? 1 : 0;
            goto L_002A171C;
    }
    // 0x002A17B8: sltiu       $v0, $s1, 0x10
    ctx->r2 = ctx->r17 < 0X10 ? 1 : 0;
L_002A17BC:
    // 0x002A17BC: beq         $s1, $zero, L_002A17E0
    if (ctx->r17 == 0) {
        // 0x002A17C0: nop
    
            goto L_002A17E0;
    }
    // 0x002A17C0: nop

L_002A17C4:
    // 0x002A17C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A17C8: jal         0x002A157C
    // 0x002A17CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A157C(rdram, ctx);
        goto after_4;
    // 0x002A17CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_4:
    // 0x002A17D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002A17D4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x002A17D8: bne         $s1, $zero, L_002A17C4
    if (ctx->r17 != 0) {
        // 0x002A17DC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_002A17C4;
    }
    // 0x002A17DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_002A17E0:
    // 0x002A17E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002A17E4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x002A17E8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x002A17EC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x002A17F0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x002A17F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002A17F8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002A17FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002A1800: jr          $ra
    // 0x002A1804: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002A1804: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004440B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004440B0: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x004440B4: sw          $s3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r19;
    // 0x004440B8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004440BC: sw          $s2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r18;
    // 0x004440C0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004440C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004440C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004440CC: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
    // 0x004440D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x004440D4: sw          $ra, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r31;
    // 0x004440D8: sw          $s1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r17;
    // 0x004440DC: jal         0x00246108
    // 0x004440E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004440E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x004440E4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x004440E8: beq         $v0, $zero, L_0044411C
    if (ctx->r2 == 0) {
        // 0x004440EC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0044411C;
    }
    // 0x004440EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004440F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x004440F4: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x004440F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004440FC: jal         0x00246108
    // 0x00444100: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x00444100: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x00444104: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00444108: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0044410C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444110: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x00444114: jal         0x00245BAC
    // 0x00444118: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x00444118: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
L_0044411C:
    // 0x0044411C: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00444120: beq         $v0, $zero, L_00444164
    if (ctx->r2 == 0) {
        // 0x00444124: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00444164;
    }
    // 0x00444124: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00444128: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0044412C: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x00444130: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00444134:
    // 0x00444134: lw          $a0, 0x630($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X630);
    // 0x00444138: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0044413C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00444140: jal         0x00243414
    // 0x00444144: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00444144: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_3:
    // 0x00444148: slti        $v0, $s1, 0x6
    ctx->r2 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x0044414C: bne         $v0, $zero, L_00444134
    if (ctx->r2 != 0) {
        // 0x00444150: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00444134;
    }
    // 0x00444150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00444154: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00444158: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0044415C: jal         0x00243414
    // 0x00444160: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00444160: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
L_00444164:
    // 0x00444164: lw          $ra, 0x138($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X138);
    // 0x00444168: lw          $s3, 0x134($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X134);
    // 0x0044416C: lw          $s2, 0x130($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X130);
    // 0x00444170: lw          $s1, 0x12C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X12C);
    // 0x00444174: lw          $s0, 0x128($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X128);
    // 0x00444178: jr          $ra
    // 0x0044417C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x0044417C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_0025EB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EB50: lbu         $v0, 0xC8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025EB54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EB58: lwc1        $f2, 0x77FC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X77FC);
    // 0x0025EB5C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025EB60: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025EB64: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0025EB68: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x0025EB6C: mtc1        $a3, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r7;
    // 0x0025EB70: sub.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0025EB74: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0025EB78: jr          $ra
    // 0x0025EB7C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    return;
    // 0x0025EB7C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
;}
RECOMP_FUNC void func_00266BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266BD4: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x00266BD8: addu        $a3, $a0, $v0
    ctx->r7 = ADD32(ctx->r4, ctx->r2);
    // 0x00266BDC: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
L_00266BE0:
    // 0x00266BE0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00266BE4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00266BE8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00266BEC: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x00266BF0: bne         $a2, $zero, L_00266BE0
    if (ctx->r6 != 0) {
        // 0x00266BF4: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_00266BE0;
    }
    // 0x00266BF4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x00266BF8: jr          $ra
    // 0x00266BFC: nop

    return;
    // 0x00266BFC: nop

;}
RECOMP_FUNC void func_00234348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00234348: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x0023434C: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x00234350: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00234354: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x00234358: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x0023435C: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x00234360: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x00234364: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x00234368: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x0023436C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x00234370: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00234374: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x00234378: sdc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X98, ctx->r29);
    // 0x0023437C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x00234380: lw          $s1, 0x8($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X8);
    // 0x00234384: lbu         $v1, 0x1C($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1C);
    // 0x00234388: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023438C: bne         $v1, $v0, L_002343D4
    if (ctx->r3 != ctx->r2) {
        // 0x00234390: nop
    
            goto L_002343D4;
    }
    // 0x00234390: nop

    // 0x00234394: lwc1        $f0, 0x4C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X4C);
    // 0x00234398: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023439C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002343A0: nop

    // 0x002343A4: bc1f        L_002343D4
    if (!c1cs) {
        // 0x002343A8: nop
    
            goto L_002343D4;
    }
    // 0x002343A8: nop

    // 0x002343AC: lw          $v0, 0x40($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X40);
    // 0x002343B0: beq         $v0, $zero, L_002343D4
    if (ctx->r2 == 0) {
        // 0x002343B4: nop
    
            goto L_002343D4;
    }
    // 0x002343B4: nop

L_002343B8:
    // 0x002343B8: lwc1        $f0, 0x4C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X4C);
    // 0x002343BC: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002343C0: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x002343C4: lwc1        $f0, 0xAC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x002343C8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002343CC: bne         $v0, $zero, L_002343B8
    if (ctx->r2 != 0) {
        // 0x002343D0: add.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_002343B8;
    }
    // 0x002343D0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_002343D4:
    // 0x002343D4: jal         0x0020798C
    // 0x002343D8: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    func_0020798C(rdram, ctx);
        goto after_0;
    // 0x002343D8: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    after_0:
    // 0x002343DC: beq         $v0, $zero, L_002348F4
    if (ctx->r2 == 0) {
        // 0x002343E0: sw          $v0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r2;
            goto L_002348F4;
    }
    // 0x002343E0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x002343E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002343E8: jal         0x002079D8
    // 0x002343EC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_002079D8(rdram, ctx);
        goto after_1;
    // 0x002343EC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x002343F0: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x002343F4: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x002343F8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x002343FC: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234400: lbu         $v0, 0x23($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X23);
    // 0x00234404: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x00234408: lw          $v0, 0x3C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X3C);
    // 0x0023440C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00234410: beq         $v0, $zero, L_0023442C
    if (ctx->r2 == 0) {
        // 0x00234414: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_0023442C;
    }
    // 0x00234414: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00234418: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0023441C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x00234420: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x00234424: j           L_0023443C
    // 0x00234428: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
        goto L_0023443C;
    // 0x00234428: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
L_0023442C:
    // 0x0023442C: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x00234430: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x00234434: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x00234438: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
L_0023443C:
    // 0x0023443C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234440: lbu         $v0, 0x21($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X21);
    // 0x00234444: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00234448: lwc1        $f1, 0x6478($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6478);
    // 0x0023444C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00234450: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00234454: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00234458: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x0023445C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234460: lbu         $v0, 0x22($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X22);
    // 0x00234464: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00234468: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023446C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00234470: beq         $a0, $zero, L_002344F4
    if (ctx->r4 == 0) {
        // 0x00234474: swc1        $f0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
            goto L_002344F4;
    }
    // 0x00234474: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x00234478: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0023447C: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x00234480: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00234484: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x00234488: sllv        $v0, $v1, $v0
    ctx->r2 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x0023448C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00234490: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00234494: swc1        $f1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00234498: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x0023449C: lbu         $v0, 0x1D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1D);
    // 0x002344A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002344A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002344A8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002344AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002344B0: lwc1        $f0, 0x647C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X647C);
    // 0x002344B4: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x002344B8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002344BC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002344C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002344C4: lwc1        $f0, 0x6480($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6480);
    // 0x002344C8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002344CC: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002344D0: swc1        $f1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002344D4: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x002344D8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002344DC: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x002344E0: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x002344E4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x002344E8: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x002344EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002344F0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
L_002344F4:
    // 0x002344F4: lwc1        $f0, 0x28($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X28);
    // 0x002344F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002344FC: lwc1        $f20, 0x6484($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6484);
    // 0x00234500: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00234504: nop

    // 0x00234508: bc1f        L_00234524
    if (!c1cs) {
        // 0x0023450C: nop
    
            goto L_00234524;
    }
    // 0x0023450C: nop

L_00234510:
    // 0x00234510: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00234514: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00234518: nop

    // 0x0023451C: bc1t        L_00234510
    if (c1cs) {
        // 0x00234520: swc1        $f0, 0x28($s5)
        MEM_W(0X28, ctx->r21) = ctx->f0.u32l;
            goto L_00234510;
    }
    // 0x00234520: swc1        $f0, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->f0.u32l;
L_00234524:
    // 0x00234524: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00234528: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0023452C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00234530: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00234534: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00234538: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0023453C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00234540: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00234544: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00234548: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023454C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00234550: bltz        $v1, L_002345F4
    if (SIGNED(ctx->r3) < 0) {
        // 0x00234554: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002345F4;
    }
    // 0x00234554: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00234558: bne         $v0, $zero, L_002345EC
    if (ctx->r2 != 0) {
        // 0x0023455C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_002345EC;
    }
    // 0x0023455C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00234560: bne         $v1, $v0, L_002345F4
    if (ctx->r3 != ctx->r2) {
        // 0x00234564: nop
    
            goto L_002345F4;
    }
    // 0x00234564: nop

    // 0x00234568: jal         0x00207A70
    // 0x0023456C: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_00207A70(rdram, ctx);
        goto after_2;
    // 0x0023456C: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_2:
    // 0x00234570: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x00234574: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00234578: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0023457C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00234580: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00234584: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00234588: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x0023458C: lbu         $a0, 0x1A($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1A);
    // 0x00234590: lbu         $a1, 0x1B($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1B);
    // 0x00234594: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x00234598: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023459C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002345A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002345A4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002345A8: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x002345AC: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x002345B0: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x002345B4: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x002345B8: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x002345BC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002345C0: lbu         $v0, 0x16($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X16);
    // 0x002345C4: lbu         $a0, 0x17($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X17);
    // 0x002345C8: lbu         $v1, 0x18($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X18);
    // 0x002345CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002345D0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002345D4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002345D8: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x002345DC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002345E0: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x002345E4: j           L_002345F4
    // 0x002345E8: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_002345F4;
    // 0x002345E8: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_002345EC:
    // 0x002345EC: jal         0x00207A70
    // 0x002345F0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_00207A70(rdram, ctx);
        goto after_3;
    // 0x002345F0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_3:
L_002345F4:
    // 0x002345F4: jal         0x00207FEC
    // 0x002345F8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_00207FEC(rdram, ctx);
        goto after_4;
    // 0x002345F8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_4:
    // 0x002345FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00234600: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00234604: lw          $s1, 0x44($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X44);
    // 0x00234608: lbu         $s4, 0x23($a1)
    ctx->r20 = MEM_BU(ctx->r5, 0X23);
    // 0x0023460C: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x00234610: jal         0x00234C88
    // 0x00234614: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_00234C88(rdram, ctx);
        goto after_5;
    // 0x00234614: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x00234618: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    // 0x0023461C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00234620: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00234624: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x00234628: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0023462C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00234630: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00234634: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00234638: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0023463C: jal         0x00206B30
    // 0x00234640: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_00206B30(rdram, ctx);
        goto after_6;
    // 0x00234640: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_6:
    // 0x00234644: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x00234648: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0023464C: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00234650: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x00234654: addiu       $s6, $s4, -0x1
    ctx->r22 = ADD32(ctx->r20, -0X1);
    // 0x00234658: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0023465C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00234660: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00234664: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00234668: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0023466C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00234670: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00234674: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00234678: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0023467C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00234680: beq         $s1, $zero, L_002348E8
    if (ctx->r17 == 0) {
        // 0x00234684: sw          $v0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r2;
            goto L_002348E8;
    }
    // 0x00234684: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00234688: beq         $s2, $zero, L_002348E8
    if (ctx->r18 == 0) {
        // 0x0023468C: nop
    
            goto L_002348E8;
    }
    // 0x0023468C: nop

    // 0x00234690: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00234694: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00234698: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023469C: nop

    // 0x002346A0: bc1f        L_002348E8
    if (!c1cs) {
        // 0x002346A4: addiu       $s7, $sp, 0x38
        ctx->r23 = ADD32(ctx->r29, 0X38);
            goto L_002348E8;
    }
    // 0x002346A4: addiu       $s7, $sp, 0x38
    ctx->r23 = ADD32(ctx->r29, 0X38);
    // 0x002346A8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002346AC: sll         $a1, $s4, 12
    ctx->r5 = S32(ctx->r20 << 12);
    // 0x002346B0: andi        $v0, $s4, 0x7F
    ctx->r2 = ctx->r20 & 0X7F;
    // 0x002346B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002346B8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x002346BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002346C0: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x002346C4: sll         $a0, $s4, 1
    ctx->r4 = S32(ctx->r20 << 1);
    // 0x002346C8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x002346CC: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x002346D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002346D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002346D8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002346DC: andi        $fp, $a0, 0xFF
    ctx->r30 = ctx->r4 & 0XFF;
    // 0x002346E0: sll         $t0, $fp, 8
    ctx->r8 = S32(ctx->r30 << 8);
    // 0x002346E4: sw          $a1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r5;
    // 0x002346E8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
L_002346EC:
    // 0x002346EC: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x002346F0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002346F4: nop

    // 0x002346F8: bc1f        L_002348E8
    if (!c1cs) {
        // 0x002346FC: nop
    
            goto L_002348E8;
    }
    // 0x002346FC: nop

    // 0x00234700: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x00234704: jal         0x00235F8C
    // 0x00234708: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00235F8C(rdram, ctx);
        goto after_7;
    // 0x00234708: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x0023470C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00234710: beq         $s0, $zero, L_002348E8
    if (ctx->r16 == 0) {
        // 0x00234714: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_002348E8;
    }
    // 0x00234714: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00234718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023471C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x00234720: lw          $a3, 0xA8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XA8);
    // 0x00234724: jal         0x00233868
    // 0x00234728: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00233868(rdram, ctx);
        goto after_8;
    // 0x00234728: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0023472C: lui         $a3, 0xDA38
    ctx->r7 = S32(0XDA38 << 16);
    // 0x00234730: ori         $a3, $a3, 0x3
    ctx->r7 = ctx->r7 | 0X3;
    // 0x00234734: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x00234738: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x0023473C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00234740: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00234744: sw          $a2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r6;
    // 0x00234748: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0023474C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00234750: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x00234754: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x00234758: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0023475C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00234760: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x00234764: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    // 0x00234768: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x0023476C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00234770: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00234774: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00234778: jal         0x00235F8C
    // 0x0023477C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    func_00235F8C(rdram, ctx);
        goto after_9;
    // 0x0023477C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_9:
    // 0x00234780: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00234784: beq         $s0, $zero, L_002348E8
    if (ctx->r16 == 0) {
        // 0x00234788: nop
    
            goto L_002348E8;
    }
    // 0x00234788: nop

    // 0x0023478C: lwc1        $f0, 0xA8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XA8);
    // 0x00234790: lwc1        $f1, 0xA8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA8);
    // 0x00234794: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00234798: nop

    // 0x0023479C: bc1f        L_002347BC
    if (!c1cs) {
        // 0x002347A0: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_002347BC;
    }
    // 0x002347A0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002347A4: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
L_002347A8:
    // 0x002347A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002347AC: nop

    // 0x002347B0: bc1tl       L_002347A8
    if (c1cs) {
        // 0x002347B4: sub.s       $f0, $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_002347A8;
    }
    goto skip_0;
    // 0x002347B4: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    skip_0:
    // 0x002347B8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_002347BC:
    // 0x002347BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002347C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x002347C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002347C8: jal         0x00233868
    // 0x002347CC: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    func_00233868(rdram, ctx);
        goto after_10;
    // 0x002347CC: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    after_10:
    // 0x002347D0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x002347D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002347D8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002347DC: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x002347E0: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x002347E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002347E8: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x002347EC: blez        $s6, L_00234864
    if (SIGNED(ctx->r22) <= 0) {
        // 0x002347F0: sw          $t0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r8;
            goto L_00234864;
    }
    // 0x002347F0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_002347F4:
    // 0x002347F4: sll         $a0, $a3, 1
    ctx->r4 = S32(ctx->r7 << 1);
    // 0x002347F8: addu        $v1, $s4, $a3
    ctx->r3 = ADD32(ctx->r20, ctx->r7);
    // 0x002347FC: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x00234800: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00234804: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x00234808: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0023480C: sll         $v0, $v1, 9
    ctx->r2 = S32(ctx->r3 << 9);
    // 0x00234810: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x00234814: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00234818: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0023481C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00234820: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00234824: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00234828: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x0023482C: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x00234830: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00234834: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x00234838: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0023483C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00234840: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00234844: sw          $a1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r5;
    // 0x00234848: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0023484C: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x00234850: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00234854: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00234858: slt         $v0, $a3, $s6
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0023485C: bne         $v0, $zero, L_002347F4
    if (ctx->r2 != 0) {
        // 0x00234860: sw          $a0, 0x4($a2)
        MEM_W(0X4, ctx->r6) = ctx->r4;
            goto L_002347F4;
    }
    // 0x00234860: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
L_00234864:
    // 0x00234864: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00234868: lbu         $v0, 0x12($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X12);
    // 0x0023486C: beq         $v0, $zero, L_002348B8
    if (ctx->r2 == 0) {
        // 0x00234870: sll         $v1, $a3, 1
        ctx->r3 = S32(ctx->r7 << 1);
            goto L_002348B8;
    }
    // 0x00234870: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x00234874: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00234878: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0023487C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00234880: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x00234884: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00234888: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0023488C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x00234890: addu        $v0, $s4, $a3
    ctx->r2 = ADD32(ctx->r20, ctx->r7);
    // 0x00234894: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00234898: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x0023489C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002348A0: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x002348A4: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x002348A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002348AC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x002348B0: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x002348B4: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_002348B8:
    // 0x002348B8: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x002348BC: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x002348C0: beq         $s1, $zero, L_002348E8
    if (ctx->r17 == 0) {
        // 0x002348C4: nop
    
            goto L_002348E8;
    }
    // 0x002348C4: nop

    // 0x002348C8: beq         $s2, $zero, L_002348E8
    if (ctx->r18 == 0) {
        // 0x002348CC: nop
    
            goto L_002348E8;
    }
    // 0x002348CC: nop

    // 0x002348D0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002348D4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002348D8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002348DC: nop

    // 0x002348E0: bc1t        L_002346EC
    if (c1cs) {
        // 0x002348E4: nop
    
            goto L_002346EC;
    }
    // 0x002348E4: nop

L_002348E8:
    // 0x002348E8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x002348EC: jal         0x002051F4
    // 0x002348F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_11;
    // 0x002348F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
L_002348F4:
    // 0x002348F4: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x002348F8: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x002348FC: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x00234900: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x00234904: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x00234908: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x0023490C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x00234910: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x00234914: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00234918: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0023491C: ldc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X98);
    // 0x00234920: jr          $ra
    // 0x00234924: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x00234924: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00421CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421CA0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421CA4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421CA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421CAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00421CB0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00421CB4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00421CB8: beq         $v0, $zero, L_00421CD0
    if (ctx->r2 == 0) {
        // 0x00421CBC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00421CD0;
    }
    // 0x00421CBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421CC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421CC4: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x00421CC8: j           L_00421D08
    // 0x00421CCC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00421D08;
    // 0x00421CCC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00421CD0:
    // 0x00421CD0: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00421CD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00421CD8: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00421CDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421CE0: addiu       $v0, $v0, 0x45E0
    ctx->r2 = ADD32(ctx->r2, 0X45E0);
    // 0x00421CE4: jal         0x004160F0
    // 0x00421CE8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00421CE8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00421CEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00421CF0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00421CF4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421CF8: addiu       $a1, $a1, 0x1410
    ctx->r5 = ADD32(ctx->r5, 0X1410);
    // 0x00421CFC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00421D00: jal         0x0029E3E0
    // 0x00421D04: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00421D04: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    after_1:
L_00421D08:
    // 0x00421D08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00421D0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421D10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421D14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421D18: jr          $ra
    // 0x00421D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002897C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002897C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002897C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002897CC: jal         0x00288F60
    // 0x002897D0: nop

    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x002897D0: nop

    after_0:
    // 0x002897D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002897D8: jr          $ra
    // 0x002897DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002897DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002626E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002626E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002626EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002626F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002626F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002626F8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002626FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00262700: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00262704: lw          $s1, 0x14($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X14);
    // 0x00262708: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026270C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00262710: sw          $zero, 0x10C($s2)
    MEM_W(0X10C, ctx->r18) = 0;
    // 0x00262714: sw          $zero, 0x110($s2)
    MEM_W(0X110, ctx->r18) = 0;
    // 0x00262718: lwc1        $f0, 0x7C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x0026271C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00262720: jal         0x00220408
    // 0x00262724: swc1        $f0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f0.u32l;
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00262724: swc1        $f0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f0.u32l;
    after_0:
    // 0x00262728: bne         $v0, $zero, L_0026278C
    if (ctx->r2 != 0) {
        // 0x0026272C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0026278C;
    }
    // 0x0026272C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00262730: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00262734: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00262738: beq         $v0, $zero, L_00262754
    if (ctx->r2 == 0) {
        // 0x0026273C: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00262754;
    }
    // 0x0026273C: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00262740: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00262744: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00262748: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0026274C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00262750: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00262754:
    // 0x00262754: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00262758: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0026275C: beq         $v0, $zero, L_00262780
    if (ctx->r2 == 0) {
        // 0x00262760: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00262780;
    }
    // 0x00262760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00262764: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00262768: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0026276C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00262770: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00262774: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00262778: j           L_00262794
    // 0x0026277C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
        goto L_00262794;
    // 0x0026277C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00262780:
    // 0x00262780: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00262784: j           L_00262794
    // 0x00262788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_00262794;
    // 0x00262788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0026278C:
    // 0x0026278C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00262790: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_00262794:
    // 0x00262794: jal         0x00243414
    // 0x00262798: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00262798: nop

    after_1:
    // 0x0026279C: sb          $zero, 0x37($s2)
    MEM_B(0X37, ctx->r18) = 0;
    // 0x002627A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002627A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002627A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002627AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002627B0: jr          $ra
    // 0x002627B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002627B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00211B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211B30: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00211B34: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00211B38: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x00211B3C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00211B40: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00211B44: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x00211B48: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00211B4C: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x00211B50: lw          $a3, 0x8($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X8);
    // 0x00211B54: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00211B58: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x00211B5C: sw          $a3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r7;
    // 0x00211B60: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x00211B64: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00211B68: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211B6C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x00211B70: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00211B74: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00211B78: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211B7C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x00211B80: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x00211B84: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00211B88: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00211B8C: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x00211B90: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x00211B94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00211B98: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x00211B9C: swc1        $f1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00211BA0: jr          $ra
    // 0x00211BA4: swc1        $f1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x00211BA4: swc1        $f1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0042452C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042452C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424530: lw          $v0, 0x2040($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2040);
    // 0x00424534: bne         $v0, $zero, L_00424544
    if (ctx->r2 != 0) {
        // 0x00424538: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_00424544;
    }
    // 0x00424538: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x0042453C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424540: sw          $v0, 0x2040($at)
    MEM_W(0X2040, ctx->r1) = ctx->r2;
L_00424544:
    // 0x00424544: jr          $ra
    // 0x00424548: nop

    return;
    // 0x00424548: nop

;}
RECOMP_FUNC void func_0021E958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E958: jr          $ra
    // 0x0021E95C: nop

    return;
    // 0x0021E95C: nop

;}
RECOMP_FUNC void func_0028F710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F710: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0028F714: jr          $ra
    // 0x0028F718: nop

    return;
    // 0x0028F718: nop

;}
RECOMP_FUNC void func_00290D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290D8C: lh          $a0, -0x2098($at)
    ctx->r4 = MEM_H(ctx->r1, -0X2098);
    // turok2: reconnected split function: a stray ELF symbol at 0x00290D90 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00290D90(rdram, ctx);
;}
RECOMP_FUNC void func_00291268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291268: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
;}
RECOMP_FUNC void func_00224F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224F48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00224F4C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00224F50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224F54: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00224F58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00224F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00224F60: lw          $a0, 0x3C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X3C);
    // 0x00224F64: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x00224F68: jal         0x0020185C
    // 0x00224F6C: nop

    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00224F6C: nop

    after_0:
    // 0x00224F70: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00224F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00224F78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224F7C: jr          $ra
    // 0x00224F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00224F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042461C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042461C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424620: addiu       $v0, $v0, 0x40F8
    ctx->r2 = ADD32(ctx->r2, 0X40F8);
    // 0x00424624: jr          $ra
    // 0x00424628: nop

    return;
    // 0x00424628: nop

;}
RECOMP_FUNC void func_00402A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00402A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402A18: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00402A1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00402A20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00402A24: lw          $a3, 0x9C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X9C);
    // 0x00402A28: lw          $t0, 0xA0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA0);
    // 0x00402A2C: lw          $t1, 0xA4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA4);
    // 0x00402A30: sw          $a3, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r7;
    // 0x00402A34: sw          $t0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r8;
    // 0x00402A38: sw          $t1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r9;
    // 0x00402A3C: lw          $v0, 0xA8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA8);
    // 0x00402A40: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    // 0x00402A44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00402A48: lw          $v0, -0xA10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA10);
    // 0x00402A4C: bne         $v0, $zero, L_00402A64
    if (ctx->r2 != 0) {
        // 0x00402A50: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00402A64;
    }
    // 0x00402A50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00402A54: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00402A58: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00402A5C: bne         $v1, $v0, L_00402A78
    if (ctx->r3 != ctx->r2) {
        // 0x00402A60: lui         $v1, 0xDFFF
        ctx->r3 = S32(0XDFFF << 16);
            goto L_00402A78;
    }
    // 0x00402A60: lui         $v1, 0xDFFF
    ctx->r3 = S32(0XDFFF << 16);
L_00402A64:
    // 0x00402A64: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00402A68: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x00402A6C: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    // 0x00402A70: j           L_00402A84
    // 0x00402A74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_00402A84;
    // 0x00402A74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00402A78:
    // 0x00402A78: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00402A7C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00402A80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00402A84:
    // 0x00402A84: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00402A88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402A8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00402A90: jal         0x0025AD90
    // 0x00402A94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0025AD90(rdram, ctx);
        goto after_0;
    // 0x00402A94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00402A98: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00402A9C: beq         $v0, $zero, L_00402AB8
    if (ctx->r2 == 0) {
        // 0x00402AA0: nop
    
            goto L_00402AB8;
    }
    // 0x00402AA0: nop

    // 0x00402AA4: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00402AA8: beq         $v0, $zero, L_00402AB8
    if (ctx->r2 == 0) {
        // 0x00402AAC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00402AB8;
    }
    // 0x00402AAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402AB0: jalr        $v0
    // 0x00402AB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00402AB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00402AB8:
    // 0x00402AB8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00402ABC: addiu       $a0, $a0, -0xC60
    ctx->r4 = ADD32(ctx->r4, -0XC60);
    // 0x00402AC0: jal         0x004021C8
    // 0x00402AC4: nop

    func_004021C8(rdram, ctx);
        goto after_2;
    // 0x00402AC4: nop

    after_2:
    // 0x00402AC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00402ACC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00402AD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402AD4: jr          $ra
    // 0x00402AD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00402AD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00253018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253018: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025301C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253024: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00253028: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025302C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00253030: beq         $a1, $zero, L_00253040
    if (ctx->r5 == 0) {
        // 0x00253034: nop
    
            goto L_00253040;
    }
    // 0x00253034: nop

    // 0x00253038: jal         0x0020565C
    // 0x0025303C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020565C(rdram, ctx);
        goto after_0;
    // 0x0025303C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_00253040:
    // 0x00253040: lw          $s0, 0x20($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X20);
    // 0x00253044: beq         $s0, $zero, L_00253090
    if (ctx->r16 == 0) {
        // 0x00253048: nop
    
            goto L_00253090;
    }
    // 0x00253048: nop

    // 0x0025304C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00253050: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
L_00253054:
    // 0x00253054: jal         0x0021EBC0
    // 0x00253058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021EBC0(rdram, ctx);
        goto after_1;
    // 0x00253058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0025305C: jal         0x0021EBC0
    // 0x00253060: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021EBC0(rdram, ctx);
        goto after_2;
    // 0x00253060: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_2:
    // 0x00253064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253068: jal         0x002542B4
    // 0x0025306C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002542B4(rdram, ctx);
        goto after_3;
    // 0x0025306C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00253070: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x00253074: beq         $v0, $zero, L_00253084
    if (ctx->r2 == 0) {
        // 0x00253078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00253084;
    }
    // 0x00253078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025307C: jal         0x0021EAE8
    // 0x00253080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_0021EAE8(rdram, ctx);
        goto after_4;
    // 0x00253080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_00253084:
    // 0x00253084: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00253088: bne         $s0, $zero, L_00253054
    if (ctx->r16 != 0) {
        // 0x0025308C: nop
    
            goto L_00253054;
    }
    // 0x0025308C: nop

L_00253090:
    // 0x00253090: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00253094: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253098: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025309C: jr          $ra
    // 0x002530A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002530A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00259794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259798: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025979C: lw          $v1, 0x1A8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1A8);
    // 0x002597A0: sw          $zero, 0x64($a1)
    MEM_W(0X64, ctx->r5) = 0;
    // 0x002597A4: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x002597A8: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x002597AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002597B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002597B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002597B8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002597BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002597C0: lwc1        $f1, 0x7320($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7320);
    // 0x002597C4: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x002597C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002597CC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002597D0: swc1        $f0, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->f0.u32l;
    // 0x002597D4: jal         0x00253EB8
    // 0x002597D8: addiu       $a1, $zero, 0x1A9
    ctx->r5 = ADD32(0, 0X1A9);
    func_00253EB8(rdram, ctx);
        goto after_0;
    // 0x002597D8: addiu       $a1, $zero, 0x1A9
    ctx->r5 = ADD32(0, 0X1A9);
    after_0:
    // 0x002597DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002597E0: jr          $ra
    // 0x002597E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002597E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00265EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265EF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00265EF4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00265EF8: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x00265EFC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00265F00: beq         $v0, $zero, L_00265F18
    if (ctx->r2 == 0) {
        // 0x00265F04: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00265F18;
    }
    // 0x00265F04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00265F08: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x00265F0C: srl         $v0, $v0, 22
    ctx->r2 = S32(U32(ctx->r2) >> 22);
    // 0x00265F10: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00265F14: andi        $a3, $v0, 0x1
    ctx->r7 = ctx->r2 & 0X1;
L_00265F18:
    // 0x00265F18: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00265F1C: beq         $v0, $zero, L_00265F34
    if (ctx->r2 == 0) {
        // 0x00265F20: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_00265F34;
    }
    // 0x00265F20: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00265F24: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x00265F28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265F2C: bnel        $v0, $zero, L_00265F34
    if (ctx->r2 != 0) {
        // 0x00265F30: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_00265F34;
    }
    goto skip_0;
    // 0x00265F30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    skip_0:
L_00265F34:
    // 0x00265F34: beq         $a3, $zero, L_00265F78
    if (ctx->r7 == 0) {
        // 0x00265F38: nop
    
            goto L_00265F78;
    }
    // 0x00265F38: nop

    // 0x00265F3C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00265F40: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x00265F44: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00265F48: bltzl       $v1, L_00265F50
    if (SIGNED(ctx->r3) < 0) {
        // 0x00265F4C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00265F50;
    }
    goto skip_1;
    // 0x00265F4C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_1:
L_00265F50:
    // 0x00265F50: bne         $v1, $zero, L_00265F78
    if (ctx->r3 != 0) {
        // 0x00265F54: sw          $v1, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r3;
            goto L_00265F78;
    }
    // 0x00265F54: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00265F58: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00265F5C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00265F60: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00265F64: beq         $v0, $zero, L_00265F70
    if (ctx->r2 == 0) {
        // 0x00265F68: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00265F70;
    }
    // 0x00265F68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00265F6C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_00265F70:
    // 0x00265F70: jal         0x00243414
    // 0x00265F74: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00265F74: nop

    after_0:
L_00265F78:
    // 0x00265F78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265F7C: jr          $ra
    // 0x00265F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A764: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A768: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A76C: lhu         $a3, 0x84($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X84);
    // 0x0025A770: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A774: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x0025A778: jal         0x00245A98
    // 0x0025A77C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A77C: nop

    after_0:
    // 0x0025A780: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A784: jr          $ra
    // 0x0025A788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045BDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0025E650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E650: jr          $ra
    // 0x0025E654: nop

    return;
    // 0x0025E654: nop

;}
RECOMP_FUNC void func_0045F898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F898: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0045F89C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F8A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F8A4: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F8A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F8AC: bne         $v1, $v0, L_0045F8E4
    if (ctx->r3 != ctx->r2) {
            // 0x0045F8B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_0045F8E4(rdram, ctx);
    return;
    }
    // 0x0045F8B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045F8B4: sll         $v1, $a0, 7
    ctx->r3 = S32(ctx->r4 << 7);
    // 0x0045F8B8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0045F8BC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045F8C0: lw          $a0, 0x2224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2224);
    // 0x0045F8C4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045F8C8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0045F8CC: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x0045F8D0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0045F8D4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0045F8D8: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    // 0x0045F8DC: jr          $ra
    // 0x0045F8E0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    return;
    // 0x0045F8E0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_0025F358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F35C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F360: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F364: beq         $v0, $zero, L_0025F374
    if (ctx->r2 == 0) {
        // 0x0025F368: nop
    
            goto L_0025F374;
    }
    // 0x0025F368: nop

    // 0x0025F36C: jal         0x00243414
    // 0x0025F370: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F370: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025F374:
    // 0x0025F374: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F378: jr          $ra
    // 0x0025F37C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F37C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00205904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205908: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020590C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00205910: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00205914: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00205918: jal         0x0029DFF0
    // 0x0020591C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0020591C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00205920: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00205924: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205928: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x0020592C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205930: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205934: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205938: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020593C: beq         $v1, $v0, L_00205968
    if (ctx->r3 == ctx->r2) {
        // 0x00205940: nop
    
            goto L_00205968;
    }
    // 0x00205940: nop

    // 0x00205944: jal         0x0029E010
    // 0x00205948: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00205948: nop

    after_1:
    // 0x0020594C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205950: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205954: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205958: jal         0x0029B6F0
    // 0x0020595C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0020595C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205960: j           L_00205970
    // 0x00205964: nop

        goto L_00205970;
    // 0x00205964: nop

L_00205968:
    // 0x00205968: jal         0x0029E010
    // 0x0020596C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0020596C: nop

    after_3:
L_00205970:
    // 0x00205970: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00205974: beq         $a0, $zero, L_0020599C
    if (ctx->r4 == 0) {
        // 0x00205978: nop
    
            goto L_0020599C;
    }
    // 0x00205978: nop

    // 0x0020597C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00205980: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00205984: bne         $v0, $zero, L_0020599C
    if (ctx->r2 != 0) {
        // 0x00205988: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_0020599C;
    }
    // 0x00205988: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0020598C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00205990: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00205994: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00205998: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_0020599C:
    // 0x0020599C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x002059A0: beq         $a0, $zero, L_002059C8
    if (ctx->r4 == 0) {
        // 0x002059A4: nop
    
            goto L_002059C8;
    }
    // 0x002059A4: nop

    // 0x002059A8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002059AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002059B0: bne         $v0, $zero, L_002059C8
    if (ctx->r2 != 0) {
        // 0x002059B4: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_002059C8;
    }
    // 0x002059B4: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x002059B8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002059BC: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x002059C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002059C4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_002059C8:
    // 0x002059C8: jal         0x0029DFF0
    // 0x002059CC: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x002059CC: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    after_4:
    // 0x002059D0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002059D4: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002059D8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002059DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002059E0: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002059E4: beq         $v1, $zero, L_00205A10
    if (ctx->r3 == 0) {
        // 0x002059E8: nop
    
            goto L_00205A10;
    }
    // 0x002059E8: nop

    // 0x002059EC: jal         0x0029E010
    // 0x002059F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x002059F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x002059F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002059F8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002059FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205A00: jal         0x0029B820
    // 0x00205A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x00205A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x00205A08: j           L_00205A18
    // 0x00205A0C: nop

        goto L_00205A18;
    // 0x00205A0C: nop

L_00205A10:
    // 0x00205A10: jal         0x0029E010
    // 0x00205A14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00205A14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
L_00205A18:
    // 0x00205A18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00205A1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00205A20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00205A24: jr          $ra
    // 0x00205A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00419D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419D94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419D98: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00419D9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00419DA0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00419DA4: addiu       $s0, $s0, -0x5514
    ctx->r16 = ADD32(ctx->r16, -0X5514);
    // 0x00419DA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00419DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00419DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00419DB4: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x00419DB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00419DBC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00419DC0: jal         0x0041648C
    // 0x00419DC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00419DC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00419DC8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00419DCC: addiu       $v0, $zero, 0xF7
    ctx->r2 = ADD32(0, 0XF7);
    // 0x00419DD0: beql        $a1, $v0, L_00419DD8
    if (ctx->r5 == ctx->r2) {
        // 0x00419DD4: addiu       $a1, $zero, 0xF8
        ctx->r5 = ADD32(0, 0XF8);
            goto L_00419DD8;
    }
    goto skip_0;
    // 0x00419DD4: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
    skip_0:
L_00419DD8:
    // 0x00419DD8: jal         0x002759B4
    // 0x00419DDC: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    func_002759B4(rdram, ctx);
        goto after_1;
    // 0x00419DDC: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    after_1:
    // 0x00419DE0: bgtz        $v0, L_00419DF0
    if (SIGNED(ctx->r2) > 0) {
        // 0x00419DE4: nop
    
            goto L_00419DF0;
    }
    // 0x00419DE4: nop

    // 0x00419DE8: jal         0x002759C4
    // 0x00419DEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_002759C4(rdram, ctx);
        goto after_2;
    // 0x00419DEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_00419DF0:
    // 0x00419DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419DF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419DFC: jr          $ra
    // 0x00419E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00427524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427524: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00427528: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0042752C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00427530: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00427534: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00427538: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0042753C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00427540: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00427544: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x00427548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042754C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00427550: lbu         $s3, 0x6B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X6B);
    // 0x00427554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427558: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0042755C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x00427560: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00427564: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00427568: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0042756C: bne         $s3, $zero, L_00427578
    if (ctx->r19 != 0) {
        // 0x00427570: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_00427578;
    }
    // 0x00427570: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x00427574: lw          $v0, 0x60($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X60);
L_00427578:
    // 0x00427578: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042757C: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x00427580: beq         $v0, $zero, L_004275AC
    if (ctx->r2 == 0) {
        // 0x00427584: sll         $v0, $s0, 1
        ctx->r2 = S32(ctx->r16 << 1);
            goto L_004275AC;
    }
    // 0x00427584: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00427588: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0042758C: addu        $v1, $v0, $s4
    ctx->r3 = ADD32(ctx->r2, ctx->r20);
L_00427590:
    // 0x00427590: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00427594: beq         $v0, $a1, L_004275B0
    if (ctx->r2 == ctx->r5) {
        // 0x00427598: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_004275B0;
    }
    // 0x00427598: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0042759C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004275A0: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x004275A4: bne         $v0, $zero, L_00427590
    if (ctx->r2 != 0) {
        // 0x004275A8: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00427590;
    }
    // 0x004275A8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_004275AC:
    // 0x004275AC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_004275B0:
    // 0x004275B0: bne         $s0, $v0, L_004275CC
    if (ctx->r16 != ctx->r2) {
        // 0x004275B4: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_004275CC;
    }
    // 0x004275B4: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x004275B8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x004275BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004275C0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_004275C4:
    // 0x004275C4: j           L_004276C0
    // 0x004275C8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    entry_004276C0(rdram, ctx);
    return;
    // 0x004275C8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_004275CC:
    // 0x004275CC: addiu       $v0, $sp, 0x2F
    ctx->r2 = ADD32(ctx->r29, 0X2F);
L_004275D0:
    // 0x004275D0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x004275D4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004275D8: bgez        $v1, L_004275D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004275DC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004275D0;
    }
    // 0x004275DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004275E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004275E4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x004275E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004275EC: addu        $s0, $a1, $v0
    ctx->r16 = ADD32(ctx->r5, ctx->r2);
    // 0x004275F0: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x004275F4: beq         $v0, $zero, L_0042766C
    if (ctx->r2 == 0) {
        // 0x004275F8: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0042766C;
    }
    // 0x004275F8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x004275FC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x00427600: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00427604: addu        $s1, $v0, $s4
    ctx->r17 = ADD32(ctx->r2, ctx->r20);
L_00427608:
    // 0x00427608: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042760C: beq         $v0, $zero, L_0042766C
    if (ctx->r2 == 0) {
        // 0x00427610: nop
    
            goto L_0042766C;
    }
    // 0x00427610: nop

    // 0x00427614: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x00427618: bnel        $v0, $fp, L_0042765C
    if (ctx->r2 != ctx->r30) {
        // 0x0042761C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042765C;
    }
    goto skip_0;
    // 0x0042761C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    skip_0:
    // 0x00427620: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00427624: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00427628: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x0042762C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00427630: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427634: sb          $s3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r19;
    // 0x00427638: jal         0x004276F0
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    func_004276F0(rdram, ctx);
        goto after_0;
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    after_0:
    // 0x00427640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00427644: bne         $a0, $zero, L_004275C4
    if (ctx->r4 != 0) {
        // 0x00427648: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_004275C4;
    }
    // 0x00427648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042764C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00427654: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00427658: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_0042765C:
    // 0x0042765C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427660: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427664: bne         $v0, $zero, L_00427608
    if (ctx->r2 != 0) {
        // 0x00427668: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00427608;
    }
    // 0x00427668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042766C:
    // 0x0042766C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00427670: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00427674: bne         $s0, $v0, L_00427698
    if (ctx->r16 != ctx->r2) {
        // 0x00427678: sw          $s7, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r23;
            goto L_00427698;
    }
    // 0x00427678: sw          $s7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r23;
    // 0x0042767C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427680: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427684: beql        $v0, $zero, L_0042769C
    if (ctx->r2 == 0) {
        // 0x00427688: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0042769C;
    }
    goto skip_1;
    // 0x00427688: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    skip_1:
    // 0x0042768C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00427690: j           L_004275C4
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
        goto L_004275C4;
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
L_00427698:
    // 0x00427698: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0042769C:
    // 0x0042769C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x004276A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004276A0(rdram, ctx);
;}
RECOMP_FUNC void func_002C232C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_002893B0:
    // 0x002C232C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002C2330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002C2334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002C2338: jal         0x00266B80
    // 0x002C233C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x002C233C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002C2340: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x002C2344: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x002C2348: beq         $v1, $zero, L_002C2360
    if (ctx->r3 == 0) {
        // 0x002C234C: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_002C2360;
    }
    // 0x002C234C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x002C2350: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002C2354: lw          $v0, 0x6D68($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D68);
    // 0x002C2358: bnel        $v0, $zero, L_002C2360
    if (ctx->r2 != 0) {
        // 0x002C235C: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_002C2360;
    }
    goto skip_0;
    // 0x002C235C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    skip_0:
L_002C2360:
    // 0x002C2360: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002C2364: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x002C2368: lwc1        $f1, 0x3FD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FD0);
    // 0x002C236C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002C2370: lwc1        $f0, -0x6204($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6204);
    // 0x002C2374: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002C2378: nop

    // 0x002C237C: bc1f        L_002C238C
    if (!c1cs) {
        // 0x002C2380: nop
    
            goto L_002C238C;
    }
    // 0x002C2380: nop

    // 0x002C2384: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002C2388: sw          $zero, 0x6D6C($at)
    MEM_W(0X6D6C, ctx->r1) = 0;
L_002C238C:
    // 0x002C238C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002C2390: lw          $v0, 0x6D6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D6C);
    // 0x002C2394: beq         $v0, $zero, L_002C23A8
    if (ctx->r2 == 0) {
        // 0x002C2398: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002C23A8;
    }
    // 0x002C2398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002C239C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x002C23A0: j           L_002893B0
    // 0x002C23A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    entry_002893B0(rdram, ctx);
    return;
    // 0x002C23A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_002C23A8:
    // 0x002C23A8: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x002C23AC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x002C23B0: jal         0x00288D3C
    // 0x002C23B4: nop

    func_00288D3C(rdram, ctx);
        goto after_1;
    // 0x002C23B4: nop

    after_1:
    // 0x002C23B8: beq         $v0, $zero, L_002C23C8
    if (ctx->r2 == 0) {
        // 0x002C23BC: nop
    
            goto L_002C23C8;
    }
    // 0x002C23BC: nop

    // 0x002C23C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002C23C4: sw          $zero, 0x6D6C($at)
    MEM_W(0X6D6C, ctx->r1) = 0;
L_002C23C8:
    // 0x002C23C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002C23CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002C23D0: jr          $ra
    // 0x002C23D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002C23D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004160F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004160F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004160F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004160F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004160FC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x00416100: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00416104: bne         $v1, $v0, L_0041611C
    if (ctx->r3 != ctx->r2) {
        // 0x00416108: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041611C;
    }
    // 0x00416108: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041610C: jal         0x00413230
    // 0x00416110: nop

    func_00413230(rdram, ctx);
        goto after_0;
    // 0x00416110: nop

    after_0:
    // 0x00416114: j           L_00416120
    // 0x00416118: nop

        goto L_00416120;
    // 0x00416118: nop

L_0041611C:
    // 0x0041611C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
L_00416120:
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
RECOMP_FUNC void func_002568CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002568CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002568D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002568D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002568D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002568DC: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x002568E0: addiu       $a0, $s0, 0xA40
    ctx->r4 = ADD32(ctx->r16, 0XA40);
    // 0x002568E4: sll         $a1, $v0, 4
    ctx->r5 = S32(ctx->r2 << 4);
    // 0x002568E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x002568EC: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x002568F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x002568F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x002568F8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002568FC: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x00256900: jal         0x002470E8
    // 0x00256904: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_002470E8(rdram, ctx);
        goto after_0;
    // 0x00256904: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x00256908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025690C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00256910: sw          $zero, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = 0;
    // 0x00256914: sw          $zero, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = 0;
    // 0x00256918: sw          $zero, 0xA80($s0)
    MEM_W(0XA80, ctx->r16) = 0;
    // 0x0025691C: sw          $zero, 0xA84($s0)
    MEM_W(0XA84, ctx->r16) = 0;
    // 0x00256920: sw          $v0, 0xA88($s0)
    MEM_W(0XA88, ctx->r16) = ctx->r2;
    // 0x00256924: sw          $zero, 0xA8C($s0)
    MEM_W(0XA8C, ctx->r16) = 0;
    // 0x00256928: sw          $zero, 0xA90($s0)
    MEM_W(0XA90, ctx->r16) = 0;
    // 0x0025692C: sw          $zero, 0xA94($s0)
    MEM_W(0XA94, ctx->r16) = 0;
    // 0x00256930: sw          $zero, 0xA9C($s0)
    MEM_W(0XA9C, ctx->r16) = 0;
    // 0x00256934: sw          $zero, 0xAFC($s0)
    MEM_W(0XAFC, ctx->r16) = 0;
    // 0x00256938: sw          $zero, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = 0;
    // 0x0025693C: sw          $zero, 0x1284($s0)
    MEM_W(0X1284, ctx->r16) = 0;
    // 0x00256940: sw          $zero, 0xAB0($s0)
    MEM_W(0XAB0, ctx->r16) = 0;
    // 0x00256944: sw          $zero, 0xAB4($s0)
    MEM_W(0XAB4, ctx->r16) = 0;
    // 0x00256948: sw          $zero, 0xAB8($s0)
    MEM_W(0XAB8, ctx->r16) = 0;
    // 0x0025694C: sw          $zero, 0xABC($s0)
    MEM_W(0XABC, ctx->r16) = 0;
    // 0x00256950: sw          $zero, 0xAC8($s0)
    MEM_W(0XAC8, ctx->r16) = 0;
    // 0x00256954: sw          $zero, 0xACC($s0)
    MEM_W(0XACC, ctx->r16) = 0;
    // 0x00256958: sw          $zero, 0xAD0($s0)
    MEM_W(0XAD0, ctx->r16) = 0;
    // 0x0025695C: sw          $zero, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = 0;
    // 0x00256960: sw          $zero, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = 0;
    // 0x00256964: sw          $zero, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = 0;
    // 0x00256968: jal         0x00253CFC
    // 0x0025696C: sw          $zero, 0xAE0($s0)
    MEM_W(0XAE0, ctx->r16) = 0;
    func_00253CFC(rdram, ctx);
        goto after_1;
    // 0x0025696C: sw          $zero, 0xAE0($s0)
    MEM_W(0XAE0, ctx->r16) = 0;
    after_1:
    // 0x00256970: swc1        $f0, 0xAE4($s0)
    MEM_W(0XAE4, ctx->r16) = ctx->f0.u32l;
    // 0x00256974: sw          $zero, 0xAE8($s0)
    MEM_W(0XAE8, ctx->r16) = 0;
    // 0x00256978: lwc1        $f0, 0xAE8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAE8);
    // 0x0025697C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256980: lwc1        $f1, 0x7200($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7200);
    // 0x00256984: addiu       $v0, $s0, 0xAEC
    ctx->r2 = ADD32(ctx->r16, 0XAEC);
    // 0x00256988: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x0025698C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x00256990: swc1        $f0, 0xAEC($s0)
    MEM_W(0XAEC, ctx->r16) = ctx->f0.u32l;
    // 0x00256994: swc1        $f1, 0xAF8($s0)
    MEM_W(0XAF8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00256998: swc1        $f0, 0xB24($s0)
    MEM_W(0XB24, ctx->r16) = ctx->f0.u32l;
    // 0x0025699C: swc1        $f1, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002569A0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x002569A4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002569A8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x002569AC: sw          $v1, 0xAA0($s0)
    MEM_W(0XAA0, ctx->r16) = ctx->r3;
    // 0x002569B0: sw          $a2, 0xAA4($s0)
    MEM_W(0XAA4, ctx->r16) = ctx->r6;
    // 0x002569B4: sw          $a3, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->r7;
    // 0x002569B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002569BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002569C0: jr          $ra
    // 0x002569C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002569C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026E3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E3F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E3F4: lh          $a0, 0x6($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X6);
    // 0x0026E3F8: jal         0x00275624
    // 0x0026E3FC: nop

    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0026E3FC: nop

    after_0:
    // 0x0026E400: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E404: jr          $ra
    // 0x0026E408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00428B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428B9C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00428BA0: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00428BA4: addiu       $a3, $a3, 0xE20
    ctx->r7 = ADD32(ctx->r7, 0XE20);
    // 0x00428BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00428BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00428BB0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x00428BB4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x00428BB8: addiu       $t0, $t0, 0x13DC
    ctx->r8 = ADD32(ctx->r8, 0X13DC);
    // 0x00428BBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00428BC0: sb          $a0, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = ctx->r4;
    // 0x00428BC4: sw          $v0, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r2;
    // 0x00428BC8: sb          $v1, 0x0($sp)
    MEM_B(0X0, ctx->r29) = ctx->r3;
    // 0x00428BCC: sb          $v0, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r2;
    // 0x00428BD0: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x00428BD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00428BD8: sb          $v0, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r2;
    // 0x00428BDC: sb          $a0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r4;
    // 0x00428BE0: sb          $v1, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r3;
    // 0x00428BE4: sb          $v1, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r3;
    // 0x00428BE8: sb          $v1, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r3;
    // 0x00428BEC: beq         $a1, $zero, L_00428C28
    if (ctx->r5 == 0) {
        // 0x00428BF0: sb          $v1, 0x7($sp)
        MEM_B(0X7, ctx->r29) = ctx->r3;
            goto L_00428C28;
    }
    // 0x00428BF0: sb          $v1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r3;
L_00428BF4:
    // 0x00428BF4: lwl         $t1, 0x0($sp)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r29, 0X0);
    // 0x00428BF8: lwr         $t1, 0x3($sp)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r29, 0X3);
    // 0x00428BFC: lwl         $t2, 0x4($sp)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r29, 0X4);
    // 0x00428C00: lwr         $t2, 0x7($sp)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r29, 0X7);
    // 0x00428C04: swl         $t1, 0x0($a3)
    do_swl(rdram, 0X0, ctx->r7, ctx->r9);
    // 0x00428C08: swr         $t1, 0x3($a3)
    do_swr(rdram, 0X3, ctx->r7, ctx->r9);
    // 0x00428C0C: swl         $t2, 0x4($a3)
    do_swl(rdram, 0X4, ctx->r7, ctx->r10);
    // 0x00428C10: swr         $t2, 0x7($a3)
    do_swr(rdram, 0X7, ctx->r7, ctx->r10);
    // 0x00428C14: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x00428C18: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00428C1C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428C20: bne         $v0, $zero, L_00428BF4
    if (ctx->r2 != 0) {
        // 0x00428C24: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_00428BF4;
    }
    // 0x00428C24: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
L_00428C28:
    // 0x00428C28: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00428C2C: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x00428C30: jr          $ra
    // 0x00428C34: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00428C34: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_002216DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002216DC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x002216E0: lw          $t0, -0x6730($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6730);
    // 0x002216E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x002216E8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x002216EC: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x002216F0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x002216F4: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x002216F8: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x002216FC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00221700: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00221704: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00221708: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0022170C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00221710: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00221714: beq         $t0, $zero, L_002219F4
    if (ctx->r8 == 0) {
        // 0x00221718: sw          $t0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r8;
            goto L_002219F4;
    }
    // 0x00221718: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0022171C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00221720: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00221724: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00221728: jal         0x002017D4
    // 0x0022172C: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0022172C: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00221730: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x00221734: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00221738: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0022173C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00221740: jal         0x002017D4
    // 0x00221744: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00221744: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x00221748: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0022174C: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x00221750: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00221754: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00221758: jal         0x002017D4
    // 0x0022175C: addiu       $s5, $t1, -0x1
    ctx->r21 = ADD32(ctx->r9, -0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0022175C: addiu       $s5, $t1, -0x1
    ctx->r21 = ADD32(ctx->r9, -0X1);
    after_2:
    // 0x00221760: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00221764: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00221768: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x0022176C: jal         0x002017D4
    // 0x00221770: addiu       $s4, $v0, 0x8
    ctx->r20 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00221770: addiu       $s4, $v0, 0x8
    ctx->r20 = ADD32(ctx->r2, 0X8);
    after_3:
    // 0x00221774: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00221778: addiu       $s6, $s0, -0x1
    ctx->r22 = ADD32(ctx->r16, -0X1);
    // 0x0022177C: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00221780: jal         0x002017D4
    // 0x00221784: addiu       $s2, $v0, 0x8
    ctx->r18 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00221784: addiu       $s2, $v0, 0x8
    ctx->r18 = ADD32(ctx->r2, 0X8);
    after_4:
    // 0x00221788: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022178C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x00221790: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00221794: blez        $t0, L_002217D8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00221798: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_002217D8;
    }
    // 0x00221798: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0022179C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002217A0: lwc1        $f1, 0x5A10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A10);
    // 0x002217A4: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
L_002217A8:
    // 0x002217A8: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x002217AC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002217B0: nop

    // 0x002217B4: bc1f        L_002217D8
    if (!c1cs) {
        // 0x002217B8: nop
    
            goto L_002217D8;
    }
    // 0x002217B8: nop

    // 0x002217BC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002217C0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x002217C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x002217C8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x002217CC: slt         $v0, $t1, $t0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x002217D0: bne         $v0, $zero, L_002217A8
    if (ctx->r2 != 0) {
        // 0x002217D4: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_002217A8;
    }
    // 0x002217D4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_002217D8:
    // 0x002217D8: bltz        $s5, L_0022180C
    if (SIGNED(ctx->r21) < 0) {
        // 0x002217DC: sll         $v0, $s5, 2
        ctx->r2 = S32(ctx->r21 << 2);
            goto L_0022180C;
    }
    // 0x002217DC: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x002217E0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002217E4: lwc1        $f1, 0x5A1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A1C);
    // 0x002217E8: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
L_002217EC:
    // 0x002217EC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002217F0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002217F4: nop

    // 0x002217F8: bc1fl       L_00221810
    if (!c1cs) {
        // 0x002217FC: slt         $v0, $a0, $s0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_00221810;
    }
    goto skip_0;
    // 0x002217FC: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    skip_0:
    // 0x00221800: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x00221804: bgez        $s5, L_002217EC
    if (SIGNED(ctx->r21) >= 0) {
        // 0x00221808: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_002217EC;
    }
    // 0x00221808: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_0022180C:
    // 0x0022180C: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
L_00221810:
    // 0x00221810: beq         $v0, $zero, L_00221848
    if (ctx->r2 == 0) {
        // 0x00221814: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00221848;
    }
    // 0x00221814: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00221818: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0022181C: lwc1        $f1, 0x5A18($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A18);
    // 0x00221820: addu        $v1, $v0, $s2
    ctx->r3 = ADD32(ctx->r2, ctx->r18);
L_00221824:
    // 0x00221824: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00221828: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022182C: nop

    // 0x00221830: bc1f        L_00221848
    if (!c1cs) {
        // 0x00221834: nop
    
            goto L_00221848;
    }
    // 0x00221834: nop

    // 0x00221838: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0022183C: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00221840: bne         $v0, $zero, L_00221824
    if (ctx->r2 != 0) {
        // 0x00221844: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00221824;
    }
    // 0x00221844: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00221848:
    // 0x00221848: bltz        $s6, L_0022187C
    if (SIGNED(ctx->r22) < 0) {
        // 0x0022184C: sll         $v0, $s6, 2
        ctx->r2 = S32(ctx->r22 << 2);
            goto L_0022187C;
    }
    // 0x0022184C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
    // 0x00221850: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00221854: lwc1        $f1, 0x5A24($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A24);
    // 0x00221858: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
L_0022185C:
    // 0x0022185C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00221860: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221864: nop

    // 0x00221868: bc1f        L_00221880
    if (!c1cs) {
        // 0x0022186C: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_00221880;
    }
    // 0x0022186C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00221870: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x00221874: bgez        $s6, L_0022185C
    if (SIGNED(ctx->r22) >= 0) {
        // 0x00221878: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_0022185C;
    }
    // 0x00221878: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_0022187C:
    // 0x0022187C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_00221880:
    // 0x00221880: slt         $v0, $s6, $s3
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00221884: bne         $v0, $zero, L_002219F0
    if (ctx->r2 != 0) {
        // 0x00221888: addiu       $s2, $fp, 0x14AC
        ctx->r18 = ADD32(ctx->r30, 0X14AC);
            goto L_002219F0;
    }
    // 0x00221888: addiu       $s2, $fp, 0x14AC
    ctx->r18 = ADD32(ctx->r30, 0X14AC);
    // 0x0022188C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x00221890: mult        $s3, $t0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00221894: mflo        $s4
    ctx->r20 = lo;
L_00221898:
    // 0x00221898: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x0022189C: slt         $v0, $s5, $s1
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x002218A0: bne         $v0, $zero, L_002219DC
    if (ctx->r2 != 0) {
        // 0x002218A4: addu        $a2, $s1, $s4
        ctx->r6 = ADD32(ctx->r17, ctx->r20);
            goto L_002219DC;
    }
    // 0x002218A4: addu        $a2, $s1, $s4
    ctx->r6 = ADD32(ctx->r17, ctx->r20);
L_002218A8:
    // 0x002218A8: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x002218AC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002218B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x002218B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002218B8: addu        $s0, $t1, $v0
    ctx->r16 = ADD32(ctx->r9, ctx->r2);
    // 0x002218BC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x002218C0: bnel        $v0, $zero, L_002219D0
    if (ctx->r2 != 0) {
        // 0x002218C4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002219D0;
    }
    goto skip_1;
    // 0x002218C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x002218C8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002218CC: beq         $v0, $zero, L_00221940
    if (ctx->r2 == 0) {
        // 0x002218D0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00221940;
    }
    // 0x002218D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002218D4: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
L_002218D8:
    // 0x002218D8: lwc1        $f0, 0x350($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X350);
    // 0x002218DC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x002218E0: nop

    // 0x002218E4: bc1f        L_00221934
    if (!c1cs) {
        // 0x002218E8: nop
    
            goto L_00221934;
    }
    // 0x002218E8: nop

    // 0x002218EC: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x002218F0: lwc1        $f0, 0x35C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X35C);
    // 0x002218F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002218F8: nop

    // 0x002218FC: bc1f        L_00221934
    if (!c1cs) {
        // 0x00221900: nop
    
            goto L_00221934;
    }
    // 0x00221900: nop

    // 0x00221904: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00221908: lwc1        $f0, 0x358($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X358);
    // 0x0022190C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221910: nop

    // 0x00221914: bc1f        L_00221934
    if (!c1cs) {
        // 0x00221918: nop
    
            goto L_00221934;
    }
    // 0x00221918: nop

    // 0x0022191C: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00221920: lwc1        $f0, 0x364($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X364);
    // 0x00221924: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221928: nop

    // 0x0022192C: bc1tl       L_00221940
    if (c1cs) {
        // 0x00221930: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00221940;
    }
    goto skip_2;
    // 0x00221930: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_2:
L_00221934:
    // 0x00221934: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00221938: bne         $v0, $zero, L_002218D8
    if (ctx->r2 != 0) {
        // 0x0022193C: nop
    
            goto L_002218D8;
    }
    // 0x0022193C: nop

L_00221940:
    // 0x00221940: beql        $v1, $zero, L_002219D0
    if (ctx->r3 == 0) {
        // 0x00221944: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002219D0;
    }
    goto skip_3;
    // 0x00221944: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x00221948: lw          $a0, 0x50($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X50);
    // 0x0022194C: lw          $a1, 0x20($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X20);
    // 0x00221950: jal         0x0020185C
    // 0x00221954: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_5;
    // 0x00221954: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x00221958: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022195C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00221960: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x00221964: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00221968: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x0022196C: addiu       $v0, $v0, 0xD00
    ctx->r2 = ADD32(ctx->r2, 0XD00);
    // 0x00221970: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00221974: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00221978: addiu       $v0, $v0, 0x5F6C
    ctx->r2 = ADD32(ctx->r2, 0X5F6C);
    // 0x0022197C: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x00221980: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00221984: jal         0x0020367C
    // 0x00221988: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_6;
    // 0x00221988: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_6:
    // 0x0022198C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00221990: beql        $a1, $zero, L_002219D0
    if (ctx->r5 == 0) {
        // 0x00221994: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002219D0;
    }
    goto skip_4;
    // 0x00221994: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x00221998: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0022199C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002219A0: beq         $v0, $zero, L_002219C4
    if (ctx->r2 == 0) {
        // 0x002219A4: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_002219C4;
    }
    // 0x002219A4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x002219A8: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    // 0x002219AC: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x002219B0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x002219B4: beq         $s7, $v0, L_002219F0
    if (ctx->r23 == ctx->r2) {
        // 0x002219B8: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_002219F0;
    }
    // 0x002219B8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x002219BC: j           L_002219D0
    // 0x002219C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_002219D0;
    // 0x002219C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_002219C4:
    // 0x002219C4: jal         0x002051F4
    // 0x002219C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x002219C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x002219CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_002219D0:
    // 0x002219D0: slt         $v0, $s5, $s1
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x002219D4: beq         $v0, $zero, L_002218A8
    if (ctx->r2 == 0) {
        // 0x002219D8: addu        $a2, $s1, $s4
        ctx->r6 = ADD32(ctx->r17, ctx->r20);
            goto L_002218A8;
    }
    // 0x002219D8: addu        $a2, $s1, $s4
    ctx->r6 = ADD32(ctx->r17, ctx->r20);
L_002219DC:
    // 0x002219DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x002219E0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x002219E4: slt         $v0, $s6, $s3
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x002219E8: beq         $v0, $zero, L_00221898
    if (ctx->r2 == 0) {
        // 0x002219EC: addu        $s4, $s4, $t0
        ctx->r20 = ADD32(ctx->r20, ctx->r8);
            goto L_00221898;
    }
    // 0x002219EC: addu        $s4, $s4, $t0
    ctx->r20 = ADD32(ctx->r20, ctx->r8);
L_002219F0:
    // 0x002219F0: sw          $s7, 0x14A8($fp)
    MEM_W(0X14A8, ctx->r30) = ctx->r23;
L_002219F4:
    // 0x002219F4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x002219F8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x002219FC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00221A00: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00221A04: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00221A08: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00221A0C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00221A10: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00221A14: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00221A18: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00221A1C: jr          $ra
    // 0x00221A20: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00221A20: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00293324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293324: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00293328: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0029332C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00293330: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00293334: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x00293338: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0029333C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00293340: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00293344: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00293348: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0029334C: jr          $ra
    // 0x00293350: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    return;
    // 0x00293350: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
;}
