#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002887F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002887F0: jr          $ra
    // 0x002887F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x002887F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_002844F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002844F0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x002844F4: lw          $a1, 0x1BB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1BB0);
    // 0x002844F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002844FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00284500: lw          $v0, 0x48($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X48);
    // 0x00284504: bne         $v0, $zero, L_0028455C
    if (ctx->r2 != 0) {
        // 0x00284508: nop
    
            goto L_0028455C;
    }
    // 0x00284508: nop

    // 0x0028450C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x00284510: beq         $a1, $zero, L_00284520
    if (ctx->r5 == 0) {
        // 0x00284514: nop
    
            goto L_00284520;
    }
    // 0x00284514: nop

    // 0x00284518: jal         0x002052D8
    // 0x0028451C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x0028451C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_00284520:
    // 0x00284520: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284524: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284528: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0028452C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00284530: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00284534: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x00284538: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x0028453C: beq         $v1, $zero, L_0028454C
    if (ctx->r3 == 0) {
        // 0x00284540: sw          $zero, 0x60($v0)
        MEM_W(0X60, ctx->r2) = 0;
            goto L_0028454C;
    }
    // 0x00284540: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x00284544: jalr        $v1
    // 0x00284548: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x00284548: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    after_1:
L_0028454C:
    // 0x0028454C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00284550: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00284554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00284558: sw          $v0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r2;
L_0028455C:
    // 0x0028455C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00284560: jr          $ra
    // 0x00284564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00284564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002726DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002726DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002726E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002726E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002726E8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002726EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002726F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002726F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002726F8: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x002726FC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00272700: lw          $v0, 0xB0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB0);
    // 0x00272704: lw          $v0, 0x2B98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B98);
    // 0x00272708: lwc1        $f0, 0x510($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X510);
    // 0x0027270C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272710: lwc1        $f2, -0x7ED8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7ED8);
    // 0x00272714: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00272718: nop

    // 0x0027271C: bc1f        L_0027272C
    if (!c1cs) {
        // 0x00272720: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0027272C;
    }
    // 0x00272720: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00272724: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    // 0x00272728: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_0027272C:
    // 0x0027272C: nop

    // 0x00272730: bc1f        L_00272744
    if (!c1cs) {
        // 0x00272734: nop
    
            goto L_00272744;
    }
    // 0x00272734: nop

    // 0x00272738: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027273C: j           L_00272748
    // 0x00272740: nop

        goto L_00272748;
    // 0x00272740: nop

L_00272744:
    // 0x00272744: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00272748:
    // 0x00272748: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027274C: swc1        $f1, 0x2A30($at)
    MEM_W(0X2A30, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00272750: lb          $v1, 0x54($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X54);
    // 0x00272754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00272758: beq         $v1, $v0, L_00272784
    if (ctx->r3 == ctx->r2) {
        // 0x0027275C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00272784;
    }
    // 0x0027275C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00272760: bne         $v0, $zero, L_002727A0
    if (ctx->r2 != 0) {
        // 0x00272764: addiu       $s1, $s2, 0x10
        ctx->r17 = ADD32(ctx->r18, 0X10);
            goto L_002727A0;
    }
    // 0x00272764: addiu       $s1, $s2, 0x10
    ctx->r17 = ADD32(ctx->r18, 0X10);
    // 0x00272768: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027276C: bne         $v1, $v0, L_002727A0
    if (ctx->r3 != ctx->r2) {
        // 0x00272770: nop
    
            goto L_002727A0;
    }
    // 0x00272770: nop

    // 0x00272774: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272778: lwc1        $f0, -0x7ED4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7ED4);
    // 0x0027277C: j           L_0027278C
    // 0x00272780: nop

        goto L_0027278C;
    // 0x00272780: nop

L_00272784:
    // 0x00272784: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272788: lwc1        $f0, -0x7ED0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7ED0);
L_0027278C:
    // 0x0027278C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00272790: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00272794: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272798: swc1        $f0, 0x2A30($at)
    MEM_W(0X2A30, ctx->r1) = ctx->f0.u32l;
    // 0x0027279C: addiu       $s1, $s2, 0x10
    ctx->r17 = ADD32(ctx->r18, 0X10);
L_002727A0:
    // 0x002727A0: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x002727A4: lw          $v1, 0xB0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XB0);
    // 0x002727A8: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x002727AC: beq         $v0, $zero, L_002727C0
    if (ctx->r2 == 0) {
        // 0x002727B0: addiu       $s3, $s2, 0x74
        ctx->r19 = ADD32(ctx->r18, 0X74);
            goto L_002727C0;
    }
    // 0x002727B0: addiu       $s3, $s2, 0x74
    ctx->r19 = ADD32(ctx->r18, 0X74);
    // 0x002727B4: lwc1        $f21, 0x2BA8($v1)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r3, 0X2BA8);
    // 0x002727B8: j           L_002727E8
    // 0x002727BC: nop

        goto L_002727E8;
    // 0x002727BC: nop

L_002727C0:
    // 0x002727C0: lw          $v0, 0xC4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC4);
    // 0x002727C4: lwc1        $f21, 0x2BA0($v1)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r3, 0X2BA0);
    // 0x002727C8: beq         $v0, $zero, L_002727E8
    if (ctx->r2 == 0) {
        // 0x002727CC: nop
    
            goto L_002727E8;
    }
    // 0x002727CC: nop

    // 0x002727D0: lw          $v0, 0x2BB8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2BB8);
    // 0x002727D4: beq         $v0, $zero, L_002727E8
    if (ctx->r2 == 0) {
        // 0x002727D8: nop
    
            goto L_002727E8;
    }
    // 0x002727D8: nop

    // 0x002727DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002727E0: lwc1        $f0, -0x7ECC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7ECC);
    // 0x002727E4: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
L_002727E8:
    // 0x002727E8: lw          $v1, 0xA4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XA4);
    // 0x002727EC: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x002727F0: beq         $v0, $zero, L_00272904
    if (ctx->r2 == 0) {
        // 0x002727F4: nop
    
            goto L_00272904;
    }
    // 0x002727F4: nop

    // 0x002727F8: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x002727FC: bne         $v0, $zero, L_00272904
    if (ctx->r2 != 0) {
        // 0x00272800: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_00272904;
    }
    // 0x00272800: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x00272804: bne         $v0, $zero, L_00272904
    if (ctx->r2 != 0) {
        // 0x00272808: addiu       $v1, $s1, 0x34
        ctx->r3 = ADD32(ctx->r17, 0X34);
            goto L_00272904;
    }
    // 0x00272808: addiu       $v1, $s1, 0x34
    ctx->r3 = ADD32(ctx->r17, 0X34);
    // 0x0027280C: lw          $v0, 0xB0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB0);
    // 0x00272810: lw          $v0, 0x2B98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B98);
    // 0x00272814: lwc1        $f2, 0x34($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X34);
    // 0x00272818: lwc1        $f0, 0x114($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X114);
    // 0x0027281C: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00272820: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00272824: lwc1        $f3, 0x4($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00272828: addiu       $v0, $v0, 0x114
    ctx->r2 = ADD32(ctx->r2, 0X114);
    // 0x0027282C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00272830: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00272834: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00272838: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0027283C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00272840: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00272844: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00272848: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0027284C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00272850: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272854: lwc1        $f3, 0x2A30($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X2A30);
    // 0x00272858: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0027285C: nop

    // 0x00272860: bc1fl       L_00272874
    if (!c1cs) {
        // 0x00272864: div.s       $f0, $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
            goto L_00272874;
    }
    goto skip_0;
    // 0x00272864: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    skip_0:
    // 0x00272868: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x0027286C: j           L_00272880
    // 0x00272870: nop

        goto L_00272880;
    // 0x00272870: nop

L_00272874:
    // 0x00272874: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272878: lwc1        $f1, -0x7EC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EC8);
    // 0x0027287C: sub.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f1.fl - ctx->f0.fl;
L_00272880:
    // 0x00272880: lb          $v1, 0x44($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X44);
    // 0x00272884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00272888: beq         $v1, $v0, L_002728C4
    if (ctx->r3 == ctx->r2) {
        // 0x0027288C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002728C4;
    }
    // 0x0027288C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00272890: beq         $v0, $zero, L_002728A8
    if (ctx->r2 == 0) {
        // 0x00272894: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002728A8;
    }
    // 0x00272894: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00272898: beq         $v1, $zero, L_002728B8
    if (ctx->r3 == 0) {
        // 0x0027289C: nop
    
            goto L_002728B8;
    }
    // 0x0027289C: nop

    // 0x002728A0: j           L_002728D4
    // 0x002728A4: nop

        goto L_002728D4;
    // 0x002728A4: nop

L_002728A8:
    // 0x002728A8: bne         $v1, $v0, L_002728D4
    if (ctx->r3 != ctx->r2) {
        // 0x002728AC: mov.s       $f20, $f14
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
            goto L_002728D4;
    }
    // 0x002728AC: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x002728B0: j           L_002728D8
    // 0x002728B4: nop

        goto L_002728D8;
    // 0x002728B4: nop

L_002728B8:
    // 0x002728B8: mul.s       $f14, $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x002728BC: nop

    // 0x002728C0: mul.s       $f14, $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
L_002728C4:
    // 0x002728C4: nop

    // 0x002728C8: mul.s       $f20, $f14, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x002728CC: j           L_002728D8
    // 0x002728D0: nop

        goto L_002728D8;
    // 0x002728D0: nop

L_002728D4:
    // 0x002728D4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_002728D8:
    // 0x002728D8: jal         0x00284174
    // 0x002728DC: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x002728DC: nop

    after_0:
    // 0x002728E0: beql        $v0, $zero, L_00272910
    if (ctx->r2 == 0) {
        // 0x002728E4: swc1        $f20, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
            goto L_00272910;
    }
    goto skip_1;
    // 0x002728E4: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    skip_1:
    // 0x002728E8: lwc1        $f12, 0x1C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x002728EC: lui         $a2, 0x3C8B
    ctx->r6 = S32(0X3C8B << 16);
    // 0x002728F0: ori         $a2, $a2, 0x4396
    ctx->r6 = ctx->r6 | 0X4396;
    // 0x002728F4: jal         0x00211774
    // 0x002728F8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_00211774(rdram, ctx);
        goto after_1;
    // 0x002728F8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x002728FC: j           L_00272910
    // 0x00272900: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
        goto L_00272910;
    // 0x00272900: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_00272904:
    // 0x00272904: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272908: lwc1        $f0, -0x7EC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7EC4);
    // 0x0027290C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_00272910:
    // 0x00272910: lw          $v1, 0xA4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XA4);
    // 0x00272914: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00272918: beq         $v0, $zero, L_00272AB8
    if (ctx->r2 == 0) {
        // 0x0027291C: andi        $v0, $v1, 0x400
        ctx->r2 = ctx->r3 & 0X400;
            goto L_00272AB8;
    }
    // 0x0027291C: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x00272920: lh          $v0, 0x7C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X7C);
    // 0x00272924: lhu         $v1, 0x7C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X7C);
    // 0x00272928: blez        $v0, L_00272938
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0027292C: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_00272938;
    }
    // 0x0027292C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00272930: j           L_00272A84
    // 0x00272934: sh          $v0, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = ctx->r2;
        goto L_00272A84;
    // 0x00272934: sh          $v0, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = ctx->r2;
L_00272938:
    // 0x00272938: lwc1        $f1, 0x84($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X84);
    // 0x0027293C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00272940: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272944: nop

    // 0x00272948: bc1f        L_00272954
    if (!c1cs) {
        // 0x0027294C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00272954;
    }
    // 0x0027294C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00272950: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00272954:
    // 0x00272954: beq         $s0, $zero, L_00272984
    if (ctx->r16 == 0) {
        // 0x00272958: nop
    
            goto L_00272984;
    }
    // 0x00272958: nop

    // 0x0027295C: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x00272960: jal         0x0026D210
    // 0x00272964: nop

    func_0026D210(rdram, ctx);
        goto after_2;
    // 0x00272964: nop

    after_2:
    // 0x00272968: lwc1        $f1, 0x80($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X80);
    // 0x0027296C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272970: nop

    // 0x00272974: bc1f        L_00272A84
    if (!c1cs) {
        // 0x00272978: nop
    
            goto L_00272A84;
    }
    // 0x00272978: nop

    // 0x0027297C: j           L_002729A4
    // 0x00272980: nop

        goto L_002729A4;
    // 0x00272980: nop

L_00272984:
    // 0x00272984: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x00272988: jal         0x0026D210
    // 0x0027298C: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x0027298C: nop

    after_3:
    // 0x00272990: lwc1        $f1, 0x80($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X80);
    // 0x00272994: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272998: nop

    // 0x0027299C: bc1f        L_00272A84
    if (!c1cs) {
        // 0x002729A0: nop
    
            goto L_00272A84;
    }
    // 0x002729A0: nop

L_002729A4:
    // 0x002729A4: lwc1        $f0, 0x80($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X80);
    // 0x002729A8: lwc1        $f1, 0x84($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X84);
    // 0x002729AC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002729B0: beq         $s0, $zero, L_002729EC
    if (ctx->r16 == 0) {
        // 0x002729B4: swc1        $f0, 0x80($s2)
        MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
            goto L_002729EC;
    }
    // 0x002729B4: swc1        $f0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
    // 0x002729B8: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x002729BC: jal         0x0026D210
    // 0x002729C0: nop

    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x002729C0: nop

    after_4:
    // 0x002729C4: lwc1        $f1, 0x80($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X80);
    // 0x002729C8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002729CC: nop

    // 0x002729D0: bc1f        L_00272A84
    if (!c1cs) {
        // 0x002729D4: nop
    
            goto L_00272A84;
    }
    // 0x002729D4: nop

    // 0x002729D8: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x002729DC: jal         0x0026D210
    // 0x002729E0: nop

    func_0026D210(rdram, ctx);
        goto after_5;
    // 0x002729E0: nop

    after_5:
    // 0x002729E4: j           L_00272A84
    // 0x002729E8: swc1        $f0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
        goto L_00272A84;
    // 0x002729E8: swc1        $f0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
L_002729EC:
    // 0x002729EC: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x002729F0: jal         0x0026D210
    // 0x002729F4: nop

    func_0026D210(rdram, ctx);
        goto after_6;
    // 0x002729F4: nop

    after_6:
    // 0x002729F8: lwc1        $f1, 0x80($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X80);
    // 0x002729FC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272A00: nop

    // 0x00272A04: bc1f        L_00272A84
    if (!c1cs) {
        // 0x00272A08: nop
    
            goto L_00272A84;
    }
    // 0x00272A08: nop

    // 0x00272A0C: lhu         $a0, 0x4($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X4);
    // 0x00272A10: jal         0x0026D210
    // 0x00272A14: nop

    func_0026D210(rdram, ctx);
        goto after_7;
    // 0x00272A14: nop

    after_7:
    // 0x00272A18: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00272A1C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00272A20: nop

    // 0x00272A24: bc1f        L_00272A84
    if (!c1cs) {
        // 0x00272A28: swc1        $f0, 0x80($s2)
        MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
            goto L_00272A84;
    }
    // 0x00272A28: swc1        $f0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
    // 0x00272A2C: lw          $a0, 0xB0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XB0);
    // 0x00272A30: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x00272A34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00272A38: sw          $v0, 0xAC($s2)
    MEM_W(0XAC, ctx->r18) = ctx->r2;
    // 0x00272A3C: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    // 0x00272A40: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00272A44: beq         $v1, $v0, L_00272A84
    if (ctx->r3 == ctx->r2) {
        // 0x00272A48: addiu       $s0, $a0, 0x84
        ctx->r16 = ADD32(ctx->r4, 0X84);
            goto L_00272A84;
    }
    // 0x00272A48: addiu       $s0, $a0, 0x84
    ctx->r16 = ADD32(ctx->r4, 0X84);
    // 0x00272A4C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00272A50: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00272A54: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00272A58: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00272A5C: jal         0x00293E60
    // 0x00272A60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_8;
    // 0x00272A60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00272A64: jal         0x00293580
    // 0x00272A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_9;
    // 0x00272A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00272A6C: beq         $v0, $zero, L_00272A80
    if (ctx->r2 == 0) {
        // 0x00272A70: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00272A80;
    }
    // 0x00272A70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00272A74: jal         0x00293EC0
    // 0x00272A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_10;
    // 0x00272A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00272A7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00272A80:
    // 0x00272A80: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00272A84:
    // 0x00272A84: lhu         $a0, 0x74($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X74);
    // 0x00272A88: jal         0x0026D210
    // 0x00272A8C: nop

    func_0026D210(rdram, ctx);
        goto after_11;
    // 0x00272A8C: nop

    after_11:
    // 0x00272A90: lwc1        $f1, 0x80($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X80);
    // 0x00272A94: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00272A98: lwc1        $f1, 0x1C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1C);
    // 0x00272A9C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00272AA0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00272AA4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00272AA8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00272AAC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00272AB0: j           L_00272ADC
    // 0x00272AB4: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
        goto L_00272ADC;
    // 0x00272AB4: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00272AB8:
    // 0x00272AB8: beq         $v0, $zero, L_00272ACC
    if (ctx->r2 == 0) {
        // 0x00272ABC: nop
    
            goto L_00272ACC;
    }
    // 0x00272ABC: nop

    // 0x00272AC0: lwc1        $f1, 0x1C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1C);
    // 0x00272AC4: j           L_00272AD0
    // 0x00272AC8: nop

        goto L_00272AD0;
    // 0x00272AC8: nop

L_00272ACC:
    // 0x00272ACC: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
L_00272AD0:
    // 0x00272AD0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00272AD4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00272AD8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00272ADC:
    // 0x00272ADC: lw          $v1, 0xB0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XB0);
    // 0x00272AE0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00272AE4: addiu       $s1, $v1, 0x84
    ctx->r17 = ADD32(ctx->r3, 0X84);
    // 0x00272AE8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00272AEC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00272AF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00272AF4: lh          $a1, 0xDC($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XDC);
    // 0x00272AF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00272AFC: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x00272B00: jal         0x00293E60
    // 0x00272B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_12;
    // 0x00272B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00272B08: lwc1        $f1, 0xC8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC8);
    // 0x00272B0C: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00272B10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00272B14: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00272B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00272B1C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00272B20: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x00272B24: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00272B28: jal         0x00293E70
    // 0x00272B2C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00293E70(rdram, ctx);
        goto after_13;
    // 0x00272B2C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_13:
    // 0x00272B30: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00272B34: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00272B38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00272B3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00272B40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00272B44: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00272B48: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00272B4C: jr          $ra
    // 0x00272B50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00272B50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0043FAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00406B20:
    // 0x0043FAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_00406C38:
    // 0x0043FAAC: addu        $t2, $a1, $zero
    ctx->r10 = ADD32(ctx->r5, 0);
    // 0x0043FAB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0043FAB4: lb          $v0, 0xC7($t2)
    ctx->r2 = MEM_B(ctx->r10, 0XC7);
    // 0x0043FAB8: beq         $v0, $zero, L_0043FC40
    if (ctx->r2 == 0) {
        // 0x0043FABC: addu        $t1, $a0, $zero
        ctx->r9 = ADD32(ctx->r4, 0);
            goto L_0043FC40;
    }
    // 0x0043FABC: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x0043FAC0: lwc1        $f0, 0x8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
    // 0x0043FAC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043FAC8: lwc1        $f1, -0x5CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5CC);
    // 0x0043FACC: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0043FAD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043FAD4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0043FAD8: nop

    // 0x0043FADC: bc1f        L_0043FB08
    if (!c1cs) {
        // 0x0043FAE0: nop
    
            goto L_0043FB08;
    }
    // 0x0043FAE0: nop

    // 0x0043FAE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FAE8: lwc1        $f1, 0x4E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4E8);
    // 0x0043FAEC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0043FAF0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0043FAF4: nop

    // 0x0043FAF8: bc1f        L_0043FC40
    if (!c1cs) {
        // 0x0043FAFC: nop
    
            goto L_0043FC40;
    }
    // 0x0043FAFC: nop

    // 0x0043FB00: j           L_00406B20
    // 0x0043FB04: nop

    entry_00406B20(rdram, ctx);
    return;
    // 0x0043FB04: nop

L_0043FB08:
    // 0x0043FB08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FB0C: lwc1        $f0, 0x4EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4EC);
    // 0x0043FB10: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0043FB14: nop

    // 0x0043FB18: bc1f        L_0043FC40
    if (!c1cs) {
        // 0x0043FB1C: nop
    
            goto L_0043FC40;
    }
    // 0x0043FB1C: nop

    // 0x0043FB20: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x0043FB24: addiu       $a3, $a3, -0x62E
    ctx->r7 = ADD32(ctx->r7, -0X62E);
    // 0x0043FB28: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x0043FB2C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0043FB30: addiu       $a0, $a0, 0x1C40
    ctx->r4 = ADD32(ctx->r4, 0X1C40);
    // 0x0043FB34: addiu       $a1, $zero, -0x301
    ctx->r5 = ADD32(0, -0X301);
    // 0x0043FB38: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0043FB3C: addiu       $a2, $a2, 0x1F50
    ctx->r6 = ADD32(ctx->r6, 0X1F50);
    // 0x0043FB40: sw          $zero, 0x18($t1)
    MEM_W(0X18, ctx->r9) = 0;
    // 0x0043FB44: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x0043FB48: sw          $zero, 0x20($t1)
    MEM_W(0X20, ctx->r9) = 0;
    // 0x0043FB4C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x0043FB50: sw          $t0, 0x32($a3)
    MEM_W(0X32, ctx->r7) = ctx->r8;
    // 0x0043FB54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0043FB58: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0043FB5C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0043FB60: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x0043FB64: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0043FB68: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0043FB6C: lw          $a2, 0x6($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X6);
    // 0x0043FB70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043FB74: bne         $a2, $v0, L_0043FC10
    if (ctx->r6 != ctx->r2) {
        // 0x0043FB78: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0043FC10;
    }
    // 0x0043FB78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0043FB7C: lwc1        $f0, 0x6A($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X6A);
    // 0x0043FB80: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x0043FB84: lwc1        $f0, 0x6E($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X6E);
    // 0x0043FB88: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x0043FB8C: lwc1        $f0, 0x72($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X72);
    // 0x0043FB90: sw          $zero, 0x50($t1)
    MEM_W(0X50, ctx->r9) = 0;
    // 0x0043FB94: swc1        $f0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f0.u32l;
    // 0x0043FB98: lw          $a0, -0x3CA($a3)
    ctx->r4 = MEM_W(ctx->r7, -0X3CA);
    // 0x0043FB9C: addiu       $v1, $a3, -0x3CA
    ctx->r3 = ADD32(ctx->r7, -0X3CA);
    // 0x0043FBA0: bne         $a0, $a1, L_0043FBC0
    if (ctx->r4 != ctx->r5) {
        // 0x0043FBA4: sw          $a1, 0xA($a3)
        MEM_W(0XA, ctx->r7) = ctx->r5;
            goto L_0043FBC0;
    }
    // 0x0043FBA4: sw          $a1, 0xA($a3)
    MEM_W(0XA, ctx->r7) = ctx->r5;
    // 0x0043FBA8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FBAC: addiu       $v0, $v0, 0x12D4
    ctx->r2 = ADD32(ctx->r2, 0X12D4);
    // 0x0043FBB0: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x0043FBB4: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x0043FBB8: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x0043FBBC: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_0043FBC0:
    // 0x0043FBC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043FBC4: bne         $a0, $v0, L_0043FBE4
    if (ctx->r4 != ctx->r2) {
        // 0x0043FBC8: nop
    
            goto L_0043FBE4;
    }
    // 0x0043FBC8: nop

    // 0x0043FBCC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FBD0: addiu       $v0, $v0, 0x1344
    ctx->r2 = ADD32(ctx->r2, 0X1344);
    // 0x0043FBD4: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x0043FBD8: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x0043FBDC: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x0043FBE0: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_0043FBE4:
    // 0x0043FBE4: bne         $a0, $a2, L_0043FC04
    if (ctx->r4 != ctx->r6) {
        // 0x0043FBE8: addu        $a0, $t1, $zero
        ctx->r4 = ADD32(ctx->r9, 0);
            goto L_0043FC04;
    }
    // 0x0043FBE8: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x0043FBEC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043FBF0: addiu       $v0, $v0, 0x13EC
    ctx->r2 = ADD32(ctx->r2, 0X13EC);
    // 0x0043FBF4: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x0043FBF8: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x0043FBFC: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x0043FC00: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_0043FC04:
    // 0x0043FC04: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x0043FC08: j           L_00406C38
    // 0x0043FC0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    entry_00406C38(rdram, ctx);
    return;
    // 0x0043FC0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_0043FC10:
    // 0x0043FC10: lbu         $v0, -0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, -0X1);
    // 0x0043FC14: bne         $v0, $zero, L_0043FC30
    if (ctx->r2 != 0) {
        // 0x0043FC18: addu        $a0, $t1, $zero
        ctx->r4 = ADD32(ctx->r9, 0);
            goto L_0043FC30;
    }
    // 0x0043FC18: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x0043FC1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043FC20: sw          $v0, 0xA($a3)
    MEM_W(0XA, ctx->r7) = ctx->r2;
    // 0x0043FC24: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x0043FC28: j           L_00406C38
    // 0x0043FC2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    entry_00406C38(rdram, ctx);
    return;
    // 0x0043FC2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_0043FC30:
    // 0x0043FC30: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x0043FC34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0043FC38: jal         0x00243414
    // 0x0043FC3C: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0043FC3C: nop

    after_0:
L_0043FC40:
    // 0x0043FC40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0043FC44: jr          $ra
    // 0x0043FC48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0043FC48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C524:
    // 0x00455484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_0041C534:
    // 0x00455488: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045548C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455490: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455494: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00455498: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0045549C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x004554A0: beq         $v0, $zero, L_004554B4
    if (ctx->r2 == 0) {
        // 0x004554A4: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_004554B4;
    }
    // 0x004554A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004554A8: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x004554AC: bnel        $v0, $zero, L_004554B4
    if (ctx->r2 != 0) {
        // 0x004554B0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_004554B4;
    }
    goto skip_0;
    // 0x004554B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_004554B4:
    // 0x004554B4: lbu         $v0, 0x29($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X29);
    // 0x004554B8: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x004554BC: bltzl       $a2, L_004554C4
    if (SIGNED(ctx->r6) < 0) {
        // 0x004554C0: addiu       $a2, $v0, -0x79
        ctx->r6 = ADD32(ctx->r2, -0X79);
            goto L_004554C4;
    }
    goto skip_1;
    // 0x004554C0: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
    skip_1:
L_004554C4:
    // 0x004554C4: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x004554C8: bne         $s0, $zero, L_004554E0
    if (ctx->r16 != 0) {
        // 0x004554CC: nop
    
            goto L_004554E0;
    }
    // 0x004554CC: nop

    // 0x004554D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004554D4: addiu       $v0, $v0, 0x4050
    ctx->r2 = ADD32(ctx->r2, 0X4050);
    // 0x004554D8: j           L_0041C534
    // 0x004554DC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_0041C534(rdram, ctx);
    return;
    // 0x004554DC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_004554E0:
    // 0x004554E0: blez        $s0, L_00455508
    if (SIGNED(ctx->r16) <= 0) {
        // 0x004554E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00455508;
    }
    // 0x004554E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004554E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004554EC: addiu       $v0, $v0, 0x4068
    ctx->r2 = ADD32(ctx->r2, 0X4068);
    // 0x004554F0: jal         0x004160F0
    // 0x004554F4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x004554F4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x004554F8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004554FC: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x00455500: j           L_0041C524
    // 0x00455504: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0041C524(rdram, ctx);
    return;
    // 0x00455504: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00455508:
    // 0x00455508: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045550C: addiu       $v0, $v0, 0x4068
    ctx->r2 = ADD32(ctx->r2, 0X4068);
    // 0x00455510: jal         0x004160F0
    // 0x00455514: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00455514: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00455518: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045551C: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x00455520: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00455524: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00455528: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045552C: jal         0x0029E3E0
    // 0x00455530: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00455530: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x00455534: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455538: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045553C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455540: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455544: jr          $ra
    // 0x00455548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00279EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00279EEC: addu        $t4, $a0, $zero
    ctx->r12 = ADD32(ctx->r4, 0);
    // 0x00279EF0: lui         $t1, 0xF590
    ctx->r9 = S32(0XF590 << 16);
    // 0x00279EF4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00279EF8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00279EFC: ori         $t1, $t1, 0x100
    ctx->r9 = ctx->r9 | 0X100;
    // 0x00279F00: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x00279F04: addu        $t6, $a2, $zero
    ctx->r14 = ADD32(ctx->r6, 0);
    // 0x00279F08: addu        $t7, $a3, $zero
    ctx->r15 = ADD32(ctx->r7, 0);
    // 0x00279F0C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00279F10: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x00279F14: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x00279F18: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00279F1C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00279F20: addu        $t3, $t2, $zero
    ctx->r11 = ADD32(ctx->r10, 0);
    // 0x00279F24: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00279F28: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x00279F2C: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x00279F30: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00279F34: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00279F38: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x00279F3C: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x00279F40: addiu       $t0, $v1, 0x10
    ctx->r8 = ADD32(ctx->r3, 0X10);
    // 0x00279F44: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00279F48: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00279F4C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00279F50: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00279F54: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00279F58: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00279F5C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00279F60: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00279F64: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x00279F68: bgez        $t2, L_00279F74
    if (SIGNED(ctx->r10) >= 0) {
        // 0x00279F6C: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_00279F74;
    }
    // 0x00279F6C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00279F70: addiu       $t3, $t2, 0xF
    ctx->r11 = ADD32(ctx->r10, 0XF);
L_00279F74:
    // 0x00279F74: sra         $a1, $t3, 4
    ctx->r5 = S32(SIGNED(ctx->r11) >> 4);
    // 0x00279F78: blez        $a1, L_00279F84
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00279F7C: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_00279F84;
    }
    // 0x00279F7C: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x00279F80: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_00279F84:
    // 0x00279F84: mult        $t2, $t5
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279F88: mflo        $t8
    ctx->r24 = lo;
    // 0x00279F8C: addiu       $v0, $t8, 0x3
    ctx->r2 = ADD32(ctx->r24, 0X3);
    // 0x00279F90: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x00279F94: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x00279F98: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x00279F9C: beql        $v0, $zero, L_00279FA4
    if (ctx->r2 == 0) {
        // 0x00279FA0: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_00279FA4;
    }
    goto skip_0;
    // 0x00279FA0: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_0:
L_00279FA4:
    // 0x00279FA4: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x00279FA8: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279FAC: blez        $a1, L_00279FF0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00279FB0: or          $a0, $v0, $t1
        ctx->r4 = ctx->r2 | ctx->r9;
            goto L_00279FF0;
    }
    // 0x00279FB0: or          $a0, $v0, $t1
    ctx->r4 = ctx->r2 | ctx->r9;
    // 0x00279FB4: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x00279FB8: bne         $a1, $zero, L_00279FC4
    if (ctx->r5 != 0) {
        // 0x00279FBC: nop
    
            goto L_00279FC4;
    }
    // 0x00279FBC: nop

    // 0x00279FC0: break       7
    do_break(2596800);
L_00279FC4:
    // 0x00279FC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00279FC8: bne         $a1, $at, L_00279FDC
    if (ctx->r5 != ctx->r1) {
        // 0x00279FCC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00279FDC;
    }
    // 0x00279FCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00279FD0: bne         $v1, $at, L_00279FDC
    if (ctx->r3 != ctx->r1) {
        // 0x00279FD4: nop
    
            goto L_00279FDC;
    }
    // 0x00279FD4: nop

    // 0x00279FD8: break       6
    do_break(2596824);
L_00279FDC:
    // 0x00279FDC: mflo        $v0
    ctx->r2 = lo;
    // 0x00279FE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279FE4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279FE8: j           L_00279FFC
    // 0x00279FEC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_00279FFC;
    // 0x00279FEC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00279FF0:
    // 0x00279FF0: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00279FF4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279FF8: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_00279FFC:
    // 0x00279FFC: lui         $a2, 0xF580
    ctx->r6 = S32(0XF580 << 16);
    // 0x0027A000: ori         $a2, $a2, 0x100
    ctx->r6 = ctx->r6 | 0X100;
    // 0x0027A004: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0027A008: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0027A00C: addu        $t1, $t2, $zero
    ctx->r9 = ADD32(ctx->r10, 0);
    // 0x0027A010: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027A014: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x0027A018: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x0027A01C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0027A020: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0027A024: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x0027A028: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0027A02C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027A030: sra         $v0, $t2, 1
    ctx->r2 = S32(SIGNED(ctx->r10) >> 1);
    // 0x0027A034: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0027A038: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0027A03C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x0027A040: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027A044: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x0027A048: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x0027A04C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027A050: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x0027A054: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0027A058: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x0027A05C: addiu       $v1, $t2, -0x1
    ctx->r3 = ADD32(ctx->r10, -0X1);
    // 0x0027A060: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027A064: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A068: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027A06C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0027A070: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027A074: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0027A078: addiu       $v0, $t5, -0x1
    ctx->r2 = ADD32(ctx->r13, -0X1);
    // 0x0027A07C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A080: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A084: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027A088: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x0027A08C: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x0027A090: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x0027A094: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0027A098: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x0027A09C: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x0027A0A0: addiu       $a2, $a0, 0x20
    ctx->r6 = ADD32(ctx->r4, 0X20);
    // 0x0027A0A4: lui         $v0, 0xF510
    ctx->r2 = S32(0XF510 << 16);
    // 0x0027A0A8: addiu       $a3, $a0, 0x28
    ctx->r7 = ADD32(ctx->r4, 0X28);
    // 0x0027A0AC: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027A0B0: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x0027A0B4: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x0027A0B8: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x0027A0BC: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x0027A0C0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x0027A0C4: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x0027A0C8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0027A0CC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027A0D0: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x0027A0D4: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0027A0D8: bgez        $t2, L_0027A0E4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x0027A0DC: sw          $v0, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r2;
            goto L_0027A0E4;
    }
    // 0x0027A0DC: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x0027A0E0: addiu       $t1, $t2, 0x3
    ctx->r9 = ADD32(ctx->r10, 0X3);
L_0027A0E4:
    // 0x0027A0E4: sra         $a1, $t1, 2
    ctx->r5 = S32(SIGNED(ctx->r9) >> 2);
    // 0x0027A0E8: blez        $a1, L_0027A0F4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027A0EC: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_0027A0F4;
    }
    // 0x0027A0EC: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x0027A0F0: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_0027A0F4:
    // 0x0027A0F4: mult        $t2, $t5
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027A0F8: mflo        $t8
    ctx->r24 = lo;
    // 0x0027A0FC: addiu       $a0, $t8, -0x1
    ctx->r4 = ADD32(ctx->r24, -0X1);
    // 0x0027A100: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x0027A104: beql        $v0, $zero, L_0027A10C
    if (ctx->r2 == 0) {
        // 0x0027A108: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_0027A10C;
    }
    goto skip_1;
    // 0x0027A108: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_1:
L_0027A10C:
    // 0x0027A10C: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x0027A110: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027A114: blez        $a1, L_0027A158
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027A118: or          $a0, $v0, $t0
        ctx->r4 = ctx->r2 | ctx->r8;
            goto L_0027A158;
    }
    // 0x0027A118: or          $a0, $v0, $t0
    ctx->r4 = ctx->r2 | ctx->r8;
    // 0x0027A11C: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x0027A120: bne         $a1, $zero, L_0027A12C
    if (ctx->r5 != 0) {
        // 0x0027A124: nop
    
            goto L_0027A12C;
    }
    // 0x0027A124: nop

    // 0x0027A128: break       7
    do_break(2597160);
L_0027A12C:
    // 0x0027A12C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027A130: bne         $a1, $at, L_0027A144
    if (ctx->r5 != ctx->r1) {
        // 0x0027A134: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027A144;
    }
    // 0x0027A134: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027A138: bne         $v1, $at, L_0027A144
    if (ctx->r3 != ctx->r1) {
        // 0x0027A13C: nop
    
            goto L_0027A144;
    }
    // 0x0027A13C: nop

    // 0x0027A140: break       6
    do_break(2597184);
L_0027A144:
    // 0x0027A144: mflo        $v0
    ctx->r2 = lo;
    // 0x0027A148: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A14C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027A150: j           L_0027A164
    // 0x0027A154: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_0027A164;
    // 0x0027A154: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0027A158:
    // 0x0027A158: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x0027A15C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027A160: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_0027A164:
    // 0x0027A164: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x0027A168: addiu       $t1, $t1, -0x71DC
    ctx->r9 = ADD32(ctx->r9, -0X71DC);
    // 0x0027A16C: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x0027A170: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027A174: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x0027A178: lui         $t4, 0xF200
    ctx->r12 = S32(0XF200 << 16);
    // 0x0027A17C: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x0027A180: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x0027A184: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    // 0x0027A188: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x0027A18C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027A190: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0027A194: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0027A198: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0027A19C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x0027A1A0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027A1A4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027A1A8: lui         $v1, 0xF510
    ctx->r3 = S32(0XF510 << 16);
    // 0x0027A1AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027A1B0: addiu       $a2, $t0, 0x10
    ctx->r6 = ADD32(ctx->r8, 0X10);
    // 0x0027A1B4: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x0027A1B8: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0027A1BC: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x0027A1C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A1C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A1C8: sll         $t3, $v0, 12
    ctx->r11 = S32(ctx->r2 << 12);
    // 0x0027A1CC: addiu       $v0, $t5, -0x1
    ctx->r2 = ADD32(ctx->r13, -0X1);
    // 0x0027A1D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A1D4: andi        $t2, $v0, 0xFFF
    ctx->r10 = ctx->r2 & 0XFFF;
    // 0x0027A1D8: or          $v0, $t3, $t2
    ctx->r2 = ctx->r11 | ctx->r10;
    // 0x0027A1DC: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x0027A1E0: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x0027A1E4: sw          $t4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r12;
    // 0x0027A1E8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027A1EC: addiu       $a0, $t0, 0x18
    ctx->r4 = ADD32(ctx->r8, 0X18);
    // 0x0027A1F0: bgez        $a1, L_0027A1FC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0027A1F4: sw          $a0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r4;
            goto L_0027A1FC;
    }
    // 0x0027A1F4: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x0027A1F8: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
L_0027A1FC:
    // 0x0027A1FC: lui         $v1, 0xF580
    ctx->r3 = S32(0XF580 << 16);
    // 0x0027A200: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x0027A204: lui         $a3, 0x400
    ctx->r7 = S32(0X400 << 16);
    // 0x0027A208: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x0027A20C: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x0027A210: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x0027A214: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027A218: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027A21C: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x0027A220: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0027A224: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0027A228: addiu       $a2, $t0, 0x20
    ctx->r6 = ADD32(ctx->r8, 0X20);
    // 0x0027A22C: or          $v0, $t2, $v0
    ctx->r2 = ctx->r10 | ctx->r2;
    // 0x0027A230: or          $v0, $t3, $v0
    ctx->r2 = ctx->r11 | ctx->r2;
    // 0x0027A234: addiu       $a1, $t0, 0x28
    ctx->r5 = ADD32(ctx->r8, 0X28);
    // 0x0027A238: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x0027A23C: sw          $t4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r12;
    // 0x0027A240: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027A244: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x0027A248: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x0027A24C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0027A250: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0027A254: addu        $v1, $t6, $v1
    ctx->r3 = ADD32(ctx->r14, ctx->r3);
    // 0x0027A258: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027A25C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A260: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027A264: addu        $v0, $t7, $v0
    ctx->r2 = ADD32(ctx->r15, ctx->r2);
    // 0x0027A268: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A26C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A270: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0027A274: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027A278: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x0027A27C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A280: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027A284: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x0027A288: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x0027A28C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A290: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027A294: addiu       $v1, $t0, 0x30
    ctx->r3 = ADD32(ctx->r8, 0X30);
    // 0x0027A298: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0027A29C: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x0027A2A0: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x0027A2A4: sw          $v0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r2;
    // 0x0027A2A8: addiu       $v0, $t0, 0x38
    ctx->r2 = ADD32(ctx->r8, 0X38);
    // 0x0027A2AC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0027A2B0: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x0027A2B4: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x0027A2B8: sw          $v0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r2;
    // 0x0027A2BC: jr          $ra
    // 0x0027A2C0: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    return;
    // 0x0027A2C0: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
;}
RECOMP_FUNC void func_0028CF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CF7C: sw          $zero, 0x128C($s0)
    MEM_W(0X128C, ctx->r16) = 0;
;}
RECOMP_FUNC void func_002A1954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1954: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A1958: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A195C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002A1960: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A1964: nor         $s2, $zero, $s0
    ctx->r18 = ~(0 | ctx->r16);
    // 0x002A1968: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x002A196C: and         $s0, $s0, $v0
    ctx->r16 = ctx->r16 & ctx->r2;
    // 0x002A1970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A1974: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1978: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A197C: andi        $s2, $s2, 0x3
    ctx->r18 = ctx->r18 & 0X3;
    // 0x002A1980: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002A1984: jal         0x002A1384
    // 0x002A1988: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A1988: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    after_0:
    // 0x002A198C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A1990: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x002A1994: sllv        $v1, $v1, $s2
    ctx->r3 = S32(ctx->r3 << (ctx->r18 & 31));
    // 0x002A1998: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x002A199C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002A19A0: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x002A19A4: sllv        $s1, $s1, $s2
    ctx->r17 = S32(ctx->r17 << (ctx->r18 & 31));
    // 0x002A19A8: jal         0x002A1350
    // 0x002A19AC: or          $a1, $v0, $s1
    ctx->r5 = ctx->r2 | ctx->r17;
    func_002A1350(rdram, ctx);
        goto after_1;
    // 0x002A19AC: or          $a1, $v0, $s1
    ctx->r5 = ctx->r2 | ctx->r17;
    after_1:
    // 0x002A19B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002A19B4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A19B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A19BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A19C0: jr          $ra
    // 0x002A19C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A19C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00450F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450F00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00450F04: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00450F08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00450F0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00450F10: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00450F14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00450F18: lw          $s0, 0x518($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X518);
    // 0x00450F1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00450F20: lbu         $a1, 0x32($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X32);
    // 0x00450F24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00450F28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00450F2C: jal         0x0041648C
    // 0x00450F30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00450F30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00450F34: sb          $v0, 0x32($s0)
    MEM_B(0X32, ctx->r16) = ctx->r2;
    // 0x00450F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00450F3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00450F40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00450F44: jr          $ra
    // 0x00450F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00450F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002629A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002629A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002629A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002629AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002629B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002629B4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002629B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002629BC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002629C0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002629C4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002629C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002629CC: jal         0x00220408
    // 0x002629D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x002629D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002629D4: bne         $v0, $zero, L_00262A04
    if (ctx->r2 != 0) {
        // 0x002629D8: nop
    
            goto L_00262A04;
    }
    // 0x002629D8: nop

    // 0x002629DC: lb          $v0, 0x34($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X34);
    // 0x002629E0: bne         $v0, $zero, L_00262A04
    if (ctx->r2 != 0) {
        // 0x002629E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00262A04;
    }
    // 0x002629E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002629E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002629EC: jal         0x00262960
    // 0x002629F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00262960(rdram, ctx);
        goto after_1;
    // 0x002629F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x002629F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002629F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002629FC: jal         0x00243414
    // 0x00262A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00262A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_00262A04:
    // 0x00262A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00262A08: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00262A0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00262A10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00262A14: jr          $ra
    // 0x00262A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00262A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042EF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EF2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042EF30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042EF34: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0042EF38: addiu       $s1, $s1, 0x56B0
    ctx->r17 = ADD32(ctx->r17, 0X56B0);
    // 0x0042EF3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042EF40: lw          $v0, 0x6D60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D60);
    // 0x0042EF44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0042EF48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042EF4C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042EF50: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042EF54: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042EF58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042EF5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EF60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042EF64: sw          $v0, 0x6D60($at)
    MEM_W(0X6D60, ctx->r1) = ctx->r2;
    // 0x0042EF68: lw          $v0, 0x1C8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C8);
    // 0x0042EF6C: addu        $t0, $s2, $zero
    ctx->r8 = ADD32(ctx->r18, 0);
    // 0x0042EF70: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x0042EF74: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    // 0x0042EF78: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x0042EF7C: bne         $v0, $zero, L_0042EFCC
    if (ctx->r2 != 0) {
        // 0x0042EF80: sw          $v1, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r3;
            goto L_0042EFCC;
    }
    // 0x0042EF80: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x0042EF84: sw          $v1, 0x1C8($s1)
    MEM_W(0X1C8, ctx->r17) = ctx->r3;
    // 0x0042EF88: addiu       $v1, $s1, 0x1CC
    ctx->r3 = ADD32(ctx->r17, 0X1CC);
    // 0x0042EF8C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042EF90: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x0042EF94: addiu       $a0, $v0, 0x180
    ctx->r4 = ADD32(ctx->r2, 0X180);
L_0042EF98:
    // 0x0042EF98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x0042EF9C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x0042EFA0: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x0042EFA4: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x0042EFA8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x0042EFAC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x0042EFB0: sw          $t8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r24;
    // 0x0042EFB4: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x0042EFB8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0042EFBC: bne         $v0, $a0, L_0042EF98
    if (ctx->r2 != ctx->r4) {
        // 0x0042EFC0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042EF98;
    }
    // 0x0042EFC0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042EFC4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x0042EFC8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_0042EFCC:
    // 0x0042EFCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042EFD0: lui         $t5, 0x43
    ctx->r13 = S32(0X43 << 16);
    // 0x0042EFD4: addiu       $t5, $t5, -0x1310
    ctx->r13 = ADD32(ctx->r13, -0X1310);
    // 0x0042EFD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0042EFDC: lui         $t3, 0x43
    ctx->r11 = S32(0X43 << 16);
    // 0x0042EFE0: addiu       $t3, $t3, -0x8A4
    ctx->r11 = ADD32(ctx->r11, -0X8A4);
    // 0x0042EFE4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x0042EFE8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x0042EFEC: addiu       $t4, $t4, -0x5528
    ctx->r12 = ADD32(ctx->r12, -0X5528);
    // 0x0042EFF0: addu        $t1, $t4, $zero
    ctx->r9 = ADD32(ctx->r12, 0);
L_0042EFF4:
    // 0x0042EFF4: sll         $a0, $a2, 5
    ctx->r4 = S32(ctx->r6 << 5);
    // 0x0042EFF8: addu        $v0, $a0, $s1
    ctx->r2 = ADD32(ctx->r4, ctx->r17);
    // 0x0042EFFC: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x0042F000: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x0042F004: addiu       $v1, $v1, 0x94
    ctx->r3 = ADD32(ctx->r3, 0X94);
    // 0x0042F008: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0042F00C: sb          $zero, 0x68($t4)
    MEM_B(0X68, ctx->r12) = 0;
    // 0x0042F010: sb          $zero, 0xA8($t1)
    MEM_B(0XA8, ctx->r9) = 0;
    // 0x0042F014: lh          $a1, 0x10($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X10);
    // 0x0042F018: addiu       $a0, $a0, 0x114
    ctx->r4 = ADD32(ctx->r4, 0X114);
    // 0x0042F01C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x0042F020: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x0042F024: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x0042F028: sw          $t5, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r13;
    // 0x0042F02C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x0042F030: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x0042F034: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x0042F038: lh          $v0, 0x18($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X18);
    // 0x0042F03C: addiu       $t1, $t1, 0x40
    ctx->r9 = ADD32(ctx->r9, 0X40);
    // 0x0042F040: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x0042F044: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x0042F048: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x0042F04C: sw          $t3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r11;
    // 0x0042F050: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x0042F054: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x0042F058: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0042F05C: lh          $v0, 0x20($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X20);
    // 0x0042F060: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x0042F064: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0042F068: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x0042F06C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x0042F070: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    // 0x0042F074: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x0042F078: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x0042F07C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042F080: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x0042F084: bne         $v0, $zero, L_0042EFF4
    if (ctx->r2 != 0) {
        // 0x0042F088: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_0042EFF4;
    }
    // 0x0042F088: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x0042F08C: addiu       $v0, $s1, 0x194
    ctx->r2 = ADD32(ctx->r17, 0X194);
    // 0x0042F090: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0042F094: lh          $a0, 0x6($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6);
    // 0x0042F098: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x0042F09C: addiu       $v1, $v1, -0x838
    ctx->r3 = ADD32(ctx->r3, -0X838);
    // 0x0042F0A0: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x0042F0A4: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x0042F0A8: sw          $s3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r19;
    // 0x0042F0AC: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x0042F0B0: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x0042F0B4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x0042F0B8: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x0042F0BC: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x0042F0C0: sw          $zero, 0x1B8($s1)
    MEM_W(0X1B8, ctx->r17) = 0;
    // 0x0042F0C4: sw          $v0, 0x1B4($s1)
    MEM_W(0X1B4, ctx->r17) = ctx->r2;
    // 0x0042F0C8: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x0042F0CC: sw          $zero, 0x1C0($s1)
    MEM_W(0X1C0, ctx->r17) = 0;
    // 0x0042F0D0: sw          $zero, 0x1C4($s1)
    MEM_W(0X1C4, ctx->r17) = 0;
    // 0x0042F0D4: sw          $v0, 0x1BC($s1)
    MEM_W(0X1BC, ctx->r17) = ctx->r2;
    // 0x0042F0D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042F0DC: addiu       $v0, $v0, -0x5358
    ctx->r2 = ADD32(ctx->r2, -0X5358);
    // 0x0042F0E0: addiu       $s0, $v0, -0x1D0
    ctx->r16 = ADD32(ctx->r2, -0X1D0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042F0E4 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042F0E4(rdram, ctx);
;}
RECOMP_FUNC void func_00294BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294BDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00294BE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294BE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294BE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00294BEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294BF0: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x00294BF4: beq         $s0, $zero, L_00294C1C
    if (ctx->r16 == 0) {
        // 0x00294BF8: nop
    
            goto L_00294C1C;
    }
    // 0x00294BF8: nop

L_00294BFC:
    // 0x00294BFC: jal         0x002933B0
    // 0x00294C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_0;
    // 0x00294C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00294C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294C08: jal         0x002933E0
    // 0x00294C0C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x00294C0C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_1:
    // 0x00294C10: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x00294C14: bne         $s0, $zero, L_00294BFC
    if (ctx->r16 != 0) {
        // 0x00294C18: nop
    
            goto L_00294BFC;
    }
    // 0x00294C18: nop

L_00294C1C:
    // 0x00294C1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00294C20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00294C24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294C28: jr          $ra
    // 0x00294C2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00294C2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00275904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275908: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0027590C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275910: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275914: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275918: jal         0x002717C0
    // 0x0027591C: nop

    func_002717C0(rdram, ctx);
        goto after_0;
    // 0x0027591C: nop

    after_0:
    // 0x00275920: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275924: jr          $ra
    // 0x00275928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00440158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440158: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0044015C: addiu       $v1, $v1, -0x5DC
    ctx->r3 = ADD32(ctx->r3, -0X5DC);
    // 0x00440160: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00440164: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00440168: bne         $a0, $zero, L_00440174
    if (ctx->r4 != 0) {
        // 0x0044016C: sw          $v0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r2;
            goto L_00440174;
    }
    // 0x0044016C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00440170: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_00440174:
    // 0x00440174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00440178: bne         $a0, $v0, L_00440190
    if (ctx->r4 != ctx->r2) {
        // 0x0044017C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00440190;
    }
    // 0x0044017C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00440180: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00440184: addiu       $v0, $v0, 0x1580
    ctx->r2 = ADD32(ctx->r2, 0X1580);
    // 0x00440188: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x0044018C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00440190:
    // 0x00440190: bne         $a0, $v0, L_004401A8
    if (ctx->r4 != ctx->r2) {
        // 0x00440194: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004401A8;
    }
    // 0x00440194: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00440198: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0044019C: addiu       $v0, $v0, 0x1620
    ctx->r2 = ADD32(ctx->r2, 0X1620);
    // 0x004401A0: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x004401A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_004401A8:
    // 0x004401A8: bne         $a0, $v0, L_004401C0
    if (ctx->r4 != ctx->r2) {
        // 0x004401AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004401C0;
    }
    // 0x004401AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004401B0: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004401B4: addiu       $v0, $v0, 0x1544
    ctx->r2 = ADD32(ctx->r2, 0X1544);
    // 0x004401B8: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x004401BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_004401C0:
    // 0x004401C0: bne         $a0, $v0, L_004401D4
    if (ctx->r4 != ctx->r2) {
        // 0x004401C4: nop
    
            goto L_004401D4;
    }
    // 0x004401C4: nop

    // 0x004401C8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004401CC: addiu       $v0, $v0, 0x15BC
    ctx->r2 = ADD32(ctx->r2, 0X15BC);
    // 0x004401D0: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
L_004401D4:
    // 0x004401D4: jr          $ra
    // 0x004401D8: nop

    return;
    // 0x004401D8: nop

;}
RECOMP_FUNC void func_00268BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268BE0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00268BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268BE8: beq         $v1, $v0, L_00268BF8
    if (ctx->r3 == ctx->r2) {
            // 0x00268BEC: nop

    func_00268BF8(rdram, ctx);
    return;
    }
    // 0x00268BEC: nop

    // 0x00268BF0: jr          $ra
    // 0x00268BF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268BF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002998B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002998B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002998B4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002998B8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002998BC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002998C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002998C4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002998C8: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x002998CC: addiu       $s2, $s2, 0xE20
    ctx->r18 = ADD32(ctx->r18, 0XE20);
    // 0x002998D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002998D4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002998D8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x002998DC: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x002998E0: sw          $v0, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r2;
    // 0x002998E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002998E8: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x002998EC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x002998F0: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x002998F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002998F8: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x002998FC: sb          $s1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r17;
    // 0x00299900: jal         0x00299E00
    // 0x00299904: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    func_00299E00(rdram, ctx);
        goto after_0;
    // 0x00299904: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    after_0:
    // 0x00299908: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029990C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x00299910: addiu       $a0, $sp, 0x2F
    ctx->r4 = ADD32(ctx->r29, 0X2F);
    // 0x00299914: sll         $s0, $s0, 5
    ctx->r16 = S32(ctx->r16 << 5);
    // 0x00299918: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0029991C: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x00299920: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00299924: sb          $s1, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r17;
L_00299928:
    // 0x00299928: sb          $a1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r5;
    // 0x0029992C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00299930: bgez        $v1, L_00299928
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00299934: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_00299928;
    }
    // 0x00299934: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00299938: beql        $s3, $zero, L_00299960
    if (ctx->r19 == 0) {
        // 0x0029993C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00299960;
    }
    goto skip_0;
    // 0x0029993C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00299940: blez        $s3, L_0029995C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00299944: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0029995C;
    }
    // 0x00299944: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00299948:
    // 0x00299948: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x0029994C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00299950: slt         $v0, $v1, $s3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00299954: bne         $v0, $zero, L_00299948
    if (ctx->r2 != 0) {
        // 0x00299958: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00299948;
    }
    // 0x00299958: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0029995C:
    // 0x0029995C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00299960:
    // 0x00299960: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x00299964: beq         $v0, $zero, L_002999C4
    if (ctx->r2 == 0) {
        // 0x00299968: addiu       $v1, $sp, 0x10
        ctx->r3 = ADD32(ctx->r29, 0X10);
            goto L_002999C4;
    }
    // 0x00299968: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x0029996C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_00299970:
    // 0x00299970: lwl         $a2, 0x0($v1)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r3, 0X0);
    // 0x00299974: lwr         $a2, 0x3($v1)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r3, 0X3);
    // 0x00299978: lwl         $a3, 0x4($v1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r3, 0X4);
    // 0x0029997C: lwr         $a3, 0x7($v1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r3, 0X7);
    // 0x00299980: lwl         $t0, 0x8($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X8);
    // 0x00299984: lwr         $t0, 0xB($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0XB);
    // 0x00299988: lwl         $t1, 0xC($v1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r3, 0XC);
    // 0x0029998C: lwr         $t1, 0xF($v1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r3, 0XF);
    // 0x00299990: swl         $a2, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r6);
    // 0x00299994: swr         $a2, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r6);
    // 0x00299998: swl         $a3, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r7);
    // 0x0029999C: swr         $a3, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r7);
    // 0x002999A0: swl         $t0, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r8);
    // 0x002999A4: swr         $t0, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r8);
    // 0x002999A8: swl         $t1, 0xC($a0)
    do_swl(rdram, 0XC, ctx->r4, ctx->r9);
    // 0x002999AC: swr         $t1, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r9);
    // 0x002999B0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002999B4: bne         $v1, $v0, L_00299970
    if (ctx->r3 != ctx->r2) {
        // 0x002999B8: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00299970;
    }
    // 0x002999B8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x002999BC: j           L_002999F8
    // 0x002999C0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
        goto L_002999F8;
    // 0x002999C0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_002999C4:
    // 0x002999C4: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_002999C8:
    // 0x002999C8: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x002999CC: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x002999D0: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x002999D4: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x002999D8: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x002999DC: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x002999E0: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x002999E4: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x002999E8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002999EC: bne         $v1, $v0, L_002999C8
    if (ctx->r3 != ctx->r2) {
        // 0x002999F0: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_002999C8;
    }
    // 0x002999F0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x002999F4: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_002999F8:
    // 0x002999F8: lwl         $a2, 0x0($v1)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r3, 0X0);
    // 0x002999FC: lwr         $a2, 0x3($v1)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r3, 0X3);
    // 0x00299A00: lwl         $a3, 0x4($v1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r3, 0X4);
    // 0x00299A04: lwr         $a3, 0x7($v1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r3, 0X7);
    // 0x00299A08: swl         $a2, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r6);
    // 0x00299A0C: swr         $a2, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r6);
    // 0x00299A10: swl         $a3, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r7);
    // 0x00299A14: swr         $a3, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r7);
    // 0x00299A18: sb          $v0, 0x28($s2)
    MEM_B(0X28, ctx->r18) = ctx->r2;
    // 0x00299A1C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00299A20: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00299A24: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00299A28: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00299A2C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00299A30: jr          $ra
    // 0x00299A34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00299A34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0044DEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044DEA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0044DEAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0044DEB0: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0044DEB4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0044DEB8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0044DEBC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0044DEC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0044DEC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0044DEC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0044DECC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x0044DED0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0044DED4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x0044DED8: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x0044DEDC: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x0044DEE0: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x0044DEE4: addiu       $v1, $s2, 0x1D8
    ctx->r3 = ADD32(ctx->r18, 0X1D8);
    // 0x0044DEE8: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x0044DEEC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
    // 0x0044DEF0: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x0044DEF4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x0044DEF8: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x0044DEFC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0044DF00: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0044DF04: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x0044DF08: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0044DF0C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0044DF10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0044DF14: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0044DF18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044DF1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0044DF20: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x0044DF24: blez        $v0, L_0044E014
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044DF28: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0044E014;
    }
    // 0x0044DF28: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0044DF2C: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x0044DF30: lui         $t5, 0x180
    ctx->r13 = S32(0X180 << 16);
    // 0x0044DF34: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x0044DF38: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x0044DF3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0044DF40: addu        $t0, $s1, $zero
    ctx->r8 = ADD32(ctx->r17, 0);
    // 0x0044DF44: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_0044DF48:
    // 0x0044DF48: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x0044DF4C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0044DF50: addu        $a0, $a2, $v0
    ctx->r4 = ADD32(ctx->r6, ctx->r2);
    // 0x0044DF54: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x0044DF58: sw          $s1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r17;
    // 0x0044DF5C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0044DF60: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x0044DF64: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0044DF68: or          $v0, $v0, $t5
    ctx->r2 = ctx->r2 | ctx->r13;
    // 0x0044DF6C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0044DF70: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x0044DF74: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x0044DF78: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x0044DF7C: sh          $v0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r2;
    // 0x0044DF80: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x0044DF84: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
    // 0x0044DF88: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x0044DF8C: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x0044DF90: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x0044DF94: sb          $v0, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r2;
    // 0x0044DF98: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x0044DF9C: sb          $v0, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r2;
    // 0x0044DFA0: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0044DFA4: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x0044DFA8: sw          $t4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r12;
    // 0x0044DFAC: sw          $s2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r18;
    // 0x0044DFB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0044DFB4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0044DFB8: bne         $v0, $t2, L_0044DFC4
    if (ctx->r2 != ctx->r10) {
        // 0x0044DFBC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0044DFC4;
    }
    // 0x0044DFBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0044DFC0: addiu       $a1, $zero, 0x330
    ctx->r5 = ADD32(0, 0X330);
L_0044DFC4:
    // 0x0044DFC4: beql        $a1, $zero, L_0044E000
    if (ctx->r5 == 0) {
        // 0x0044DFC8: addiu       $t0, $t0, 0x24
        ctx->r8 = ADD32(ctx->r8, 0X24);
            goto L_0044E000;
    }
    goto skip_0;
    // 0x0044DFC8: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    skip_0:
    // 0x0044DFCC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x0044DFD0: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    // 0x0044DFD4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0044DFD8: beql        $v0, $t2, L_0044DFE0
    if (ctx->r2 == ctx->r10) {
        // 0x0044DFDC: sw          $t3, 0x328($a1)
        MEM_W(0X328, ctx->r5) = ctx->r11;
            goto L_0044DFE0;
    }
    goto skip_1;
    // 0x0044DFDC: sw          $t3, 0x328($a1)
    MEM_W(0X328, ctx->r5) = ctx->r11;
    skip_1:
L_0044DFE0:
    // 0x0044DFE0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0044DFE4: bne         $v0, $t2, L_0044DFF0
    if (ctx->r2 != ctx->r10) {
        // 0x0044DFE8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044DFF0;
    }
    // 0x0044DFE8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044DFEC: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0044DFF0:
    // 0x0044DFF0: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x0044DFF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044DFF8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x0044DFFC: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
L_0044E000:
    // 0x0044E000: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x0044E004: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0044E008: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044E00C: bne         $v0, $zero, L_0044DF48
    if (ctx->r2 != 0) {
        // 0x0044E010: addiu       $a2, $a2, 0x28
        ctx->r6 = ADD32(ctx->r6, 0X28);
            goto L_0044DF48;
    }
    // 0x0044E010: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
L_0044E014:
    // 0x0044E014: sw          $s0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r16;
    // 0x0044E018: sw          $a3, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r7;
    // 0x0044E01C: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0044E020: sw          $s3, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r19;
    // 0x0044E024: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x0044E028: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x0044E02C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0044E030: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    // 0x0044E034: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x0044E038: lhu         $v1, 0x14($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X14);
    // 0x0044E03C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044E040: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
    // 0x0044E044: sw          $zero, 0x30($s2)
    MEM_W(0X30, ctx->r18) = 0;
    // 0x0044E048: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x0044E04C: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x0044E050: sw          $zero, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = 0;
    // 0x0044E054: jal         0x00416B28
    // 0x0044E058: sh          $v1, 0x2A($s2)
    MEM_H(0X2A, ctx->r18) = ctx->r3;
    func_00416B28(rdram, ctx);
        goto after_0;
    // 0x0044E058: sh          $v1, 0x2A($s2)
    MEM_H(0X2A, ctx->r18) = ctx->r3;
    after_0:
    // 0x0044E05C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044E060: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x0044E064: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x0044E068: sw          $s5, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r21;
    // 0x0044E06C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0044E070:
    // 0x0044E070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044E074: sll         $a1, $a2, 7
    ctx->r5 = S32(ctx->r6 << 7);
L_0044E078:
    // 0x0044E078: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E07C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0044E080: lhu         $v0, 0x1CD2($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1CD2);
    // 0x0044E084: addu        $v1, $s2, $a1
    ctx->r3 = ADD32(ctx->r18, ctx->r5);
    // 0x0044E088: sh          $v0, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r2;
    // 0x0044E08C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E090: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0044E094: lhu         $v0, 0x1CD6($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1CD6);
    // 0x0044E098: sh          $v0, 0x4A($v1)
    MEM_H(0X4A, ctx->r3) = ctx->r2;
    // 0x0044E09C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E0A0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0044E0A4: lhu         $v0, 0x1CDA($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1CDA);
    // 0x0044E0A8: sh          $v0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r2;
    // 0x0044E0AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E0B0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0044E0B4: lbu         $v0, 0x1CDF($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1CDF);
    // 0x0044E0B8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0044E0BC: sb          $v0, 0x54($v1)
    MEM_B(0X54, ctx->r3) = ctx->r2;
    // 0x0044E0C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E0C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0044E0C8: lbu         $v0, 0x1CE3($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1CE3);
    // 0x0044E0CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0044E0D0: sb          $v0, 0x55($v1)
    MEM_B(0X55, ctx->r3) = ctx->r2;
    // 0x0044E0D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044E0D8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0044E0DC: lbu         $v0, 0x1CE7($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1CE7);
    // 0x0044E0E0: sb          $a3, 0x57($v1)
    MEM_B(0X57, ctx->r3) = ctx->r7;
    // 0x0044E0E4: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
    // 0x0044E0E8: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x0044E0EC: sb          $v0, 0x56($v1)
    MEM_B(0X56, ctx->r3) = ctx->r2;
    // 0x0044E0F0: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x0044E0F4: bne         $v0, $zero, L_0044E078
    if (ctx->r2 != 0) {
        // 0x0044E0F8: addiu       $a0, $a0, 0x18
        ctx->r4 = ADD32(ctx->r4, 0X18);
            goto L_0044E078;
    }
    // 0x0044E0F8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x0044E0FC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0044E100: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x0044E104: bne         $v0, $zero, L_0044E070
    if (ctx->r2 != 0) {
        // 0x0044E108: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0044E070;
    }
    // 0x0044E108: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0044E10C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044E110: sw          $zero, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = 0;
    // 0x0044E114: sw          $zero, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = 0;
    // 0x0044E118: jal         0x00416C00
    // 0x0044E11C: sw          $zero, 0xBC($s3)
    MEM_W(0XBC, ctx->r19) = 0;
    func_00416C00(rdram, ctx);
        goto after_1;
    // 0x0044E11C: sw          $zero, 0xBC($s3)
    MEM_W(0XBC, ctx->r19) = 0;
    after_1:
    // 0x0044E120: jal         0x00416C0C
    // 0x0044E124: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00416C0C(rdram, ctx);
        goto after_2;
    // 0x0044E124: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0044E128: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0044E12C: beq         $v1, $zero, L_0044E13C
    if (ctx->r3 == 0) {
        // 0x0044E130: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0044E13C;
    }
    // 0x0044E130: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044E134: jalr        $v1
    // 0x0044E138: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x0044E138: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_3:
L_0044E13C:
    // 0x0044E13C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044E140: lw          $s1, 0x10($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X10);
    // 0x0044E144: lw          $s0, 0xC($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XC);
    // 0x0044E148: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0044E14C: beq         $s1, $v0, L_0044E190
    if (ctx->r17 == ctx->r2) {
        // 0x0044E150: lui         $s4, 0x400
        ctx->r20 = S32(0X400 << 16);
            goto L_0044E190;
    }
    // 0x0044E150: lui         $s4, 0x400
    ctx->r20 = S32(0X400 << 16);
    // 0x0044E154: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_0044E158:
    // 0x0044E158: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0044E15C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0044E160: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x0044E164: beql        $v0, $zero, L_0044E188
    if (ctx->r2 == 0) {
        // 0x0044E168: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_0044E188;
    }
    goto skip_2;
    // 0x0044E168: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_2:
    // 0x0044E16C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x0044E170: beq         $v0, $zero, L_0044E184
    if (ctx->r2 == 0) {
        // 0x0044E174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044E184;
    }
    // 0x0044E174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044E178: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0044E17C: jalr        $v0
    // 0x0044E180: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0044E180: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
L_0044E184:
    // 0x0044E184: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_0044E188:
    // 0x0044E188: bne         $s1, $s3, L_0044E158
    if (ctx->r17 != ctx->r19) {
        // 0x0044E18C: addiu       $s0, $s0, 0x28
        ctx->r16 = ADD32(ctx->r16, 0X28);
            goto L_0044E158;
    }
    // 0x0044E18C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
L_0044E190:
    // 0x0044E190: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0044E194: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0044E198: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0044E19C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0044E1A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0044E1A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0044E1A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0044E1AC: jr          $ra
    // 0x0044E1B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044E1B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002179F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002179F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002179F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002179F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002179FC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00217A00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00217A04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00217A08: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00217A0C: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x00217A10: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00217A14: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x00217A18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00217A1C: bne         $a1, $v0, L_00217A90
    if (ctx->r5 != ctx->r2) {
        // 0x00217A20: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_00217A90;
    }
    // 0x00217A20: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00217A24: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x00217A28: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00217A2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00217A30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00217A34: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x00217A38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217A3C: lwc1        $f1, 0x59CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59CC);
    // 0x00217A40: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217A44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217A48: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217A4C: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00217A50: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x00217A54: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217A58: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217A5C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217A60: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x00217A64: lh          $v0, 0x10($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X10);
    // 0x00217A68: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217A6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217A70: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217A74: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x00217A78: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x00217A7C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217A80: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217A84: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217A88: j           L_00217AC0
    // 0x00217A8C: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_00217AC0;
    // 0x00217A8C: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_00217A90:
    // 0x00217A90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00217A94: jal         0x002017D4
    // 0x00217A98: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00217A98: nop

    after_0:
    // 0x00217A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00217AA0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x00217AA4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x00217AA8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x00217AAC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x00217AB0: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x00217AB4: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x00217AB8: jal         0x0020DAA4
    // 0x00217ABC: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_0020DAA4(rdram, ctx);
        goto after_1;
    // 0x00217ABC: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_1:
L_00217AC0:
    // 0x00217AC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00217AC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00217AC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00217ACC: jr          $ra
    // 0x00217AD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00217AD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422750: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00422754: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422758: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0042275C: jr          $ra
    // 0x00422760: nop

    return;
    // 0x00422760: nop

;}
RECOMP_FUNC void func_00465C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465C24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00465C28: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x00465C2C: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x00465C30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00465C34: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00465C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00465C3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00465C40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00465C44: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00465C48: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00465C4C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00465C50: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00465C54: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00465C58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00465C5C: jal         0x00200B00
    // 0x00465C60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00465C60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00465C64: beq         $v0, $zero, L_00465D00
    if (ctx->r2 == 0) {
        // 0x00465C68: nop
    
            goto L_00465D00;
    }
    // 0x00465C68: nop

    // 0x00465C6C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00465C70: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x00465C74: lw          $s6, 0x0($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X0);
    // 0x00465C78: blez        $s6, L_00465CFC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00465C7C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00465CFC;
    }
    // 0x00465C7C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00465C80: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x00465C84: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_00465C88:
    // 0x00465C88: jal         0x002017D4
    // 0x00465C8C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00465C8C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00465C90: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00465C94: jal         0x002017D4
    // 0x00465C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00465C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00465C9C: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x00465CA0: blez        $s4, L_00465CEC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00465CA4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00465CEC;
    }
    // 0x00465CA4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00465CA8: addiu       $s0, $v0, 0x18
    ctx->r16 = ADD32(ctx->r2, 0X18);
L_00465CAC:
    // 0x00465CAC: lw          $s1, -0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, -0X4);
    // 0x00465CB0: beql        $s1, $s7, L_00465CD4
    if (ctx->r17 == ctx->r23) {
        // 0x00465CB4: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_00465CD4;
    }
    goto skip_0;
    // 0x00465CB4: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    skip_0:
    // 0x00465CB8: lw          $a0, 0x58($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X58);
    // 0x00465CBC: jal         0x002017D4
    // 0x00465CC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00465CC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x00465CC4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00465CC8: sll         $v1, $s1, 5
    ctx->r3 = S32(ctx->r17 << 5);
    // 0x00465CCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00465CD0: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
L_00465CD4:
    // 0x00465CD4: jal         0x00210EF0
    // 0x00465CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210EF0(rdram, ctx);
        goto after_4;
    // 0x00465CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00465CDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00465CE0: slt         $v0, $s2, $s4
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00465CE4: bne         $v0, $zero, L_00465CAC
    if (ctx->r2 != 0) {
        // 0x00465CE8: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_00465CAC;
    }
    // 0x00465CE8: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_00465CEC:
    // 0x00465CEC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00465CF0: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00465CF4: bnel        $v0, $zero, L_00465C88
    if (ctx->r2 != 0) {
        // 0x00465CF8: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00465C88;
    }
    goto skip_1;
    // 0x00465CF8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_1:
L_00465CFC:
    // 0x00465CFC: sw          $s5, 0x68($fp)
    MEM_W(0X68, ctx->r30) = ctx->r21;
L_00465D00:
    // 0x00465D00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00465D04: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00465D08: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00465D0C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00465D10: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00465D14: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00465D18: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00465D1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00465D20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00465D24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465D28: jr          $ra
    // 0x00465D2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00465D2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00281B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281B64: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00281B68: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00281B6C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x00281B70: jr          $ra
    // 0x00281B74: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    return;
    // 0x00281B74: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00468F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468F10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00468F14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00468F18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00468F1C: addiu       $a0, $s2, 0x8B4
    ctx->r4 = ADD32(ctx->r18, 0X8B4);
    // 0x00468F20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468F24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00468F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00468F2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00468F30: jal         0x00200500
    // 0x00468F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x00468F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00468F38: addiu       $a0, $s2, 0x8A0
    ctx->r4 = ADD32(ctx->r18, 0X8A0);
    // 0x00468F3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468F40: jal         0x00200500
    // 0x00468F44: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00468F44: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x00468F48: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00468F4C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00468F50:
    // 0x00468F50: addiu       $a0, $s2, 0x8A0
    ctx->r4 = ADD32(ctx->r18, 0X8A0);
    // 0x00468F54: jal         0x00200574
    // 0x00468F58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00468F58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00468F5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00468F60: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00468F64: bne         $v0, $zero, L_00468F50
    if (ctx->r2 != 0) {
        // 0x00468F68: addiu       $s0, $s0, 0x228
        ctx->r16 = ADD32(ctx->r16, 0X228);
            goto L_00468F50;
    }
    // 0x00468F68: addiu       $s0, $s0, 0x228
    ctx->r16 = ADD32(ctx->r16, 0X228);
    // 0x00468F6C: sh          $zero, 0x8C8($s2)
    MEM_H(0X8C8, ctx->r18) = 0;
    // 0x00468F70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00468F74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00468F78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468F7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468F80: jr          $ra
    // 0x00468F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00468F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004212EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004212EC: beq         $a0, $zero, L_004212FC
    if (ctx->r4 == 0) {
            // 0x004212F0: nop

    func_004212FC(rdram, ctx);
    return;
    }
    // 0x004212F0: nop

    // 0x004212F4: jr          $ra
    // 0x004212F8: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    return;
    // 0x004212F8: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
;}
RECOMP_FUNC void func_0040EF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EF64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EF68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040EF6C: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x0040EF70: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040EF74: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x0040EF78: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0040EF7C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040EF80: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EF84: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x0040EF88: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0040EF8C: blez        $v0, L_0040EFB4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EF90: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_0040EFB4;
    }
    // 0x0040EF90: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x0040EF94: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040EF98:
    // 0x0040EF98: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0040EF9C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EFA0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040EFA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EFA8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EFAC: bne         $v0, $zero, L_0040EF98
    if (ctx->r2 != 0) {
        // 0x0040EFB0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040EF98;
    }
    // 0x0040EFB0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040EFB4:
    // 0x0040EFB4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040EFB8: blez        $v0, L_0040EFE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EFBC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040EFE0;
    }
    // 0x0040EFBC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EFC0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040EFC4:
    // 0x0040EFC4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0040EFC8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EFCC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040EFD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EFD4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EFD8: bne         $v0, $zero, L_0040EFC4
    if (ctx->r2 != 0) {
        // 0x0040EFDC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040EFC4;
    }
    // 0x0040EFDC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040EFE0:
    // 0x0040EFE0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040EFE4: blez        $v0, L_0040F00C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EFE8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040F00C;
    }
    // 0x0040EFE8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EFEC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040EFF0:
    // 0x0040EFF0: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040EFF4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EFF8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040EFFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040F000: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040F004: bne         $v0, $zero, L_0040EFF0
    if (ctx->r2 != 0) {
        // 0x0040F008: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040EFF0;
    }
    // 0x0040F008: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040F00C:
    // 0x0040F00C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0040F010: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x0040F014: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040F018: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040F01C: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040F020: beq         $v0, $zero, L_0040F030
    if (ctx->r2 == 0) {
        // 0x0040F024: nop
    
            goto L_0040F030;
    }
    // 0x0040F024: nop

    // 0x0040F028: jalr        $v0
    // 0x0040F02C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040F02C: nop

    after_0:
L_0040F030:
    // 0x0040F030: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040F034: jr          $ra
    // 0x0040F038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040F038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002407FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002407FC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00240800: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00240804: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x00240808: addiu       $v0, $v0, -0x76B4
    ctx->r2 = ADD32(ctx->r2, -0X76B4);
    // 0x0024080C: addiu       $t0, $sp, 0x50
    ctx->r8 = ADD32(ctx->r29, 0X50);
    // 0x00240810: sltu        $v0, $t0, $v0
    ctx->r2 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x00240814: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00240818: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0024081C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00240820: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00240824: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00240828: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0024082C: bne         $v0, $zero, L_00240E70
    if (ctx->r2 != 0) {
        // 0x00240830: sw          $a0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r4;
            goto L_00240E70;
    }
    // 0x00240830: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x00240834: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00240838: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x0024083C: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x00240840: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00240844: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00240848: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0024084C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00240850: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x00240854: sb          $zero, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = 0;
    // 0x00240858: sb          $zero, 0x29($sp)
    MEM_B(0X29, ctx->r29) = 0;
    // 0x0024085C: sb          $zero, 0x28($sp)
    MEM_B(0X28, ctx->r29) = 0;
    // 0x00240860: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_00240864:
    // 0x00240864: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00240868: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024086C: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240870: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00240874: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x00240878: beq         $a2, $zero, L_002408EC
    if (ctx->r6 == 0) {
        // 0x0024087C: sw          $a2, 0x6C($a0)
        MEM_W(0X6C, ctx->r4) = ctx->r6;
            goto L_002408EC;
    }
    // 0x0024087C: sw          $a2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r6;
    // 0x00240880: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x00240884: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00240888: bnel        $v0, $zero, L_00240E64
    if (ctx->r2 != 0) {
        // 0x0024088C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_0;
    // 0x0024088C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00240890: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00240894: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x00240898: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0024089C: beql        $v0, $zero, L_002408D0
    if (ctx->r2 == 0) {
        // 0x002408A0: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_002408D0;
    }
    goto skip_1;
    // 0x002408A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x002408A4: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x002408A8: beq         $v0, $v1, L_002408F0
    if (ctx->r2 == ctx->r3) {
        // 0x002408AC: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_002408F0;
    }
    // 0x002408AC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002408B0: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002408B4: beq         $v0, $v1, L_002408F0
    if (ctx->r2 == ctx->r3) {
        // 0x002408B8: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_002408F0;
    }
    // 0x002408B8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002408BC: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x002408C0: bnel        $v0, $v1, L_00240E64
    if (ctx->r2 != ctx->r3) {
        // 0x002408C4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_2;
    // 0x002408C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x002408C8: j           L_002408F0
    // 0x002408CC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
        goto L_002408F0;
    // 0x002408CC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_002408D0:
    // 0x002408D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x002408D4: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x002408D8: jal         0x0023B664
    // 0x002408DC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    func_0023B664(rdram, ctx);
        goto after_0;
    // 0x002408DC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    after_0:
    // 0x002408E0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002408E4: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x002408E8: sw          $v0, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->r2;
L_002408EC:
    // 0x002408EC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_002408F0:
    // 0x002408F0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x002408F4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002408F8: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x002408FC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00240900: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240904: beq         $s0, $s2, L_00240918
    if (ctx->r16 == ctx->r18) {
        // 0x00240908: sw          $v0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r2;
            goto L_00240918;
    }
    // 0x00240908: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0024090C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x00240910: j           L_0024091C
    // 0x00240914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_0024091C;
    // 0x00240914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_00240918:
    // 0x00240918: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024091C:
    // 0x0024091C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00240920: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240924: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00240928: lw          $a1, 0x1AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1AB0);
    // 0x0024092C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00240930: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00240934: lwc1        $f1, 0x74($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X74);
    // 0x00240938: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0024093C: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x00240940: nop

    // 0x00240944: bc1f        L_00240964
    if (!c1cs) {
        // 0x00240948: nop
    
            goto L_00240964;
    }
    // 0x00240948: nop

    // 0x0024094C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00240950: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240954: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00240958: nop

    // 0x0024095C: bc1tl       L_00240E64
    if (c1cs) {
        // 0x00240960: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_3;
    // 0x00240960: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
L_00240964:
    // 0x00240964: lwc1        $f1, 0x7C($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X7C);
    // 0x00240968: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x0024096C: nop

    // 0x00240970: bc1f        L_00240990
    if (!c1cs) {
        // 0x00240974: nop
    
            goto L_00240990;
    }
    // 0x00240974: nop

    // 0x00240978: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0024097C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240980: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00240984: nop

    // 0x00240988: bc1tl       L_00240E64
    if (c1cs) {
        // 0x0024098C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_4;
    // 0x0024098C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
L_00240990:
    // 0x00240990: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240994: lwc1        $f1, 0x78($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X78);
    // 0x00240998: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0024099C: nop

    // 0x002409A0: bc1f        L_002409C0
    if (!c1cs) {
        // 0x002409A4: nop
    
            goto L_002409C0;
    }
    // 0x002409A4: nop

    // 0x002409A8: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x002409AC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002409B0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002409B4: nop

    // 0x002409B8: bc1tl       L_00240E64
    if (c1cs) {
        // 0x002409BC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_5;
    // 0x002409BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
L_002409C0:
    // 0x002409C0: lwc1        $f1, 0x80($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X80);
    // 0x002409C4: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x002409C8: nop

    // 0x002409CC: bc1f        L_002409EC
    if (!c1cs) {
        // 0x002409D0: nop
    
            goto L_002409EC;
    }
    // 0x002409D0: nop

    // 0x002409D4: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x002409D8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002409DC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002409E0: nop

    // 0x002409E4: bc1tl       L_00240E64
    if (c1cs) {
        // 0x002409E8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_6;
    // 0x002409E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_6:
L_002409EC:
    // 0x002409EC: lw          $a0, 0x6C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X6C);
    // 0x002409F0: beq         $a0, $zero, L_00240A08
    if (ctx->r4 == 0) {
        // 0x002409F4: nop
    
            goto L_00240A08;
    }
    // 0x002409F4: nop

    // 0x002409F8: jal         0x00240800
    // 0x002409FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    entry_00240800(rdram, ctx);
        goto after_1;
    // 0x002409FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x00240A00: j           L_00240E68
    // 0x00240A04: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
        goto L_00240E68;
    // 0x00240A04: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
L_00240A08:
    // 0x00240A08: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00240A0C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240A10: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x00240A14: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00240A18: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00240A1C: swc1        $f0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f0.u32l;
    // 0x00240A20: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00240A24: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00240A28: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240A2C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240A30: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00240A34: swc1        $f1, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240A38: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240A3C: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00240A40: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240A44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00240A48: lwc1        $f2, 0x3C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x00240A4C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240A50: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240A54: swc1        $f0, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->f0.u32l;
    // 0x00240A58: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240A5C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240A60: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00240A64: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240A68: lwc1        $f0, 0x44($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X44);
    // 0x00240A6C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00240A70: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00240A74: swc1        $f1, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240A78: c.le.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl <= ctx->f2.fl;
    // 0x00240A7C: nop

    // 0x00240A80: bc1f        L_00240E60
    if (!c1cs) {
        // 0x00240A84: swc1        $f2, 0x5C($a1)
        MEM_W(0X5C, ctx->r5) = ctx->f2.u32l;
            goto L_00240E60;
    }
    // 0x00240A84: swc1        $f2, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f2.u32l;
    // 0x00240A88: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240A8C: lwc1        $f0, 0x60($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X60);
    // 0x00240A90: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00240A94: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x00240A98: lwc1        $f0, 0x58($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X58);
    // 0x00240A9C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00240AA0: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
    // 0x00240AA4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240AA8: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00240AAC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00240AB0: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x00240AB4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240AB8: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x00240ABC: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x00240AC0: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240AC4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240AC8: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x00240ACC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00240AD0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00240AD4: swc1        $f1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240AD8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x00240ADC: nop

    // 0x00240AE0: bc1f        L_00240E60
    if (!c1cs) {
        // 0x00240AE4: swc1        $f2, 0x60($a1)
        MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
            goto L_00240E60;
    }
    // 0x00240AE4: swc1        $f2, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
    // 0x00240AE8: addu        $v1, $s3, $s0
    ctx->r3 = ADD32(ctx->r19, ctx->r16);
    // 0x00240AEC: sw          $zero, 0x70($a1)
    MEM_W(0X70, ctx->r5) = 0;
    // 0x00240AF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00240AF4: bne         $v0, $zero, L_00240B54
    if (ctx->r2 != 0) {
        // 0x00240AF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00240B54;
    }
    // 0x00240AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00240AFC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00240B00: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240B04: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240B08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x00240B0C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x00240B10: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x00240B14: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240B18: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240B1C: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00240B20: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00240B24: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00240B28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00240B2C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00240B30: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x00240B34: lw          $a2, 0x54($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X54);
    // 0x00240B38: jal         0x0023B38C
    // 0x00240B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023B38C(rdram, ctx);
        goto after_2;
    // 0x00240B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x00240B40: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240B44: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240B48: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00240B4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00240B50: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
L_00240B54:
    // 0x00240B54: beq         $s0, $s2, L_00240B60
    if (ctx->r16 == ctx->r18) {
        // 0x00240B58: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00240B60;
    }
    // 0x00240B58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00240B5C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_00240B60:
    // 0x00240B60: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00240B64: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00240B68: bne         $v0, $zero, L_00240BDC
    if (ctx->r2 != 0) {
        // 0x00240B6C: nop
    
            goto L_00240BDC;
    }
    // 0x00240B6C: nop

    // 0x00240B70: beq         $s0, $s2, L_00240B7C
    if (ctx->r16 == ctx->r18) {
        // 0x00240B74: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00240B7C;
    }
    // 0x00240B74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00240B78: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_00240B7C:
    // 0x00240B7C: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x00240B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00240B84: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00240B88: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240B8C: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240B90: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x00240B94: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x00240B98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x00240B9C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240BA0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240BA4: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00240BA8: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00240BAC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00240BB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00240BB4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00240BB8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x00240BBC: lw          $a2, 0x54($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X54);
    // 0x00240BC0: jal         0x0023B38C
    // 0x00240BC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023B38C(rdram, ctx);
        goto after_3;
    // 0x00240BC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x00240BC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240BCC: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240BD0: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00240BD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00240BD8: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
L_00240BDC:
    // 0x00240BDC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00240BE0: lw          $v0, 0x1AB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1AB0);
    // 0x00240BE4: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x00240BE8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00240BEC: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x00240BF0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00240BF4: jal         0x00298470
    // 0x00240BF8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00240BF8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x00240BFC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00240C00: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240C04: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240C08: c.eq.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl == ctx->f20.fl;
    // 0x00240C0C: nop

    // 0x00240C10: bc1t        L_00240DEC
    if (c1cs) {
        // 0x00240C14: swc1        $f2, 0x58($v1)
        MEM_W(0X58, ctx->r3) = ctx->f2.u32l;
            goto L_00240DEC;
    }
    // 0x00240C14: swc1        $f2, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f2.u32l;
    // 0x00240C18: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x00240C1C: lwc1        $f1, 0x3C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X3C);
    // 0x00240C20: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00240C24: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00240C28: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00240C2C: swc1        $f0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f0.u32l;
    // 0x00240C30: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240C34: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00240C38: lwc1        $f1, 0x44($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X44);
    // 0x00240C3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00240C40: swc1        $f2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f2.u32l;
    // 0x00240C44: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240C48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00240C4C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240C50: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x00240C54: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x00240C58: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    // 0x00240C5C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00240C60: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00240C64: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240C68: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x00240C6C: lwc1        $f1, 0x54($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X54);
    // 0x00240C70: lwc1        $f0, 0x38($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X38);
    // 0x00240C74: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240C78: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x00240C7C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00240C80: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00240C84: lwc1        $f0, 0x60($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X60);
    // 0x00240C88: swc1        $f1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240C8C: div.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240C90: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00240C94: swc1        $f2, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f2.u32l;
    // 0x00240C98: bc1f        L_00240DEC
    if (!c1cs) {
        // 0x00240C9C: swc1        $f1, 0x68($v1)
        MEM_W(0X68, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_00240DEC;
    }
    // 0x00240C9C: swc1        $f1, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240CA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00240CA4: lwc1        $f0, 0x6810($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6810);
    // 0x00240CA8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00240CAC: nop

    // 0x00240CB0: bc1f        L_00240DEC
    if (!c1cs) {
        // 0x00240CB4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00240DEC;
    }
    // 0x00240CB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00240CB8: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x00240CBC: bne         $v0, $s2, L_00240DA4
    if (ctx->r2 != ctx->r18) {
        // 0x00240CC0: nop
    
            goto L_00240DA4;
    }
    // 0x00240CC0: nop

    // 0x00240CC4: lwc1        $f1, 0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X7C);
    // 0x00240CC8: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x00240CCC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240CD0: nop

    // 0x00240CD4: bc1f        L_00240D28
    if (!c1cs) {
        // 0x00240CD8: nop
    
            goto L_00240D28;
    }
    // 0x00240CD8: nop

    // 0x00240CDC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00240CE0: lwc1        $f1, 0x64($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X64);
    // 0x00240CE4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240CE8: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240CEC: nop

    // 0x00240CF0: bc1f        L_00240D28
    if (!c1cs) {
        // 0x00240CF4: nop
    
            goto L_00240D28;
    }
    // 0x00240CF4: nop

    // 0x00240CF8: lwc1        $f1, 0x68($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X68);
    // 0x00240CFC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240D00: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D04: nop

    // 0x00240D08: bc1f        L_00240D28
    if (!c1cs) {
        // 0x00240D0C: nop
    
            goto L_00240D28;
    }
    // 0x00240D0C: nop

    // 0x00240D10: lwc1        $f1, 0x6C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X6C);
    // 0x00240D14: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240D18: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D1C: nop

    // 0x00240D20: bc1t        L_00240DEC
    if (c1cs) {
        // 0x00240D24: nop
    
            goto L_00240DEC;
    }
    // 0x00240D24: nop

L_00240D28:
    // 0x00240D28: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240D2C: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240D30: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00240D34: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x00240D38: bne         $v0, $s2, L_00240DA4
    if (ctx->r2 != ctx->r18) {
        // 0x00240D3C: nop
    
            goto L_00240DA4;
    }
    // 0x00240D3C: nop

    // 0x00240D40: lwc1        $f1, 0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X7C);
    // 0x00240D44: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x00240D48: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D4C: nop

    // 0x00240D50: bc1f        L_00240DA4
    if (!c1cs) {
        // 0x00240D54: nop
    
            goto L_00240DA4;
    }
    // 0x00240D54: nop

    // 0x00240D58: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x00240D5C: lwc1        $f1, 0x64($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X64);
    // 0x00240D60: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240D64: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D68: nop

    // 0x00240D6C: bc1f        L_00240DA4
    if (!c1cs) {
        // 0x00240D70: nop
    
            goto L_00240DA4;
    }
    // 0x00240D70: nop

    // 0x00240D74: lwc1        $f1, 0x68($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X68);
    // 0x00240D78: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240D7C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D80: nop

    // 0x00240D84: bc1f        L_00240DA4
    if (!c1cs) {
        // 0x00240D88: nop
    
            goto L_00240DA4;
    }
    // 0x00240D88: nop

    // 0x00240D8C: lwc1        $f1, 0x6C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X6C);
    // 0x00240D90: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240D94: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D98: nop

    // 0x00240D9C: bc1t        L_00240DEC
    if (c1cs) {
        // 0x00240DA0: nop
    
            goto L_00240DEC;
    }
    // 0x00240DA0: nop

L_00240DA4:
    // 0x00240DA4: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00240DA8: lw          $a2, 0x1AB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1AB0);
    // 0x00240DAC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00240DB0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00240DB8: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00240DBC: addiu       $a1, $a2, 0x3C
    ctx->r5 = ADD32(ctx->r6, 0X3C);
    // 0x00240DC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00240DC4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x00240DC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00240DCC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x00240DD0: jal         0x0023AB18
    // 0x00240DD4: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    func_0023AB18(rdram, ctx);
        goto after_5;
    // 0x00240DD4: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    after_5:
    // 0x00240DD8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240DDC: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240DE0: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00240DE4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00240DE8: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
L_00240DEC:
    // 0x00240DEC: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00240DF0: lw          $a1, 0x1AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1AB0);
    // 0x00240DF4: lw          $v0, 0x70($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X70);
    // 0x00240DF8: beql        $v0, $zero, L_00240E64
    if (ctx->r2 == 0) {
        // 0x00240DFC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_7;
    // 0x00240DFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
    // 0x00240E00: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240E04: lw          $a0, 0x1ADC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1ADC);
    // 0x00240E08: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00240E0C: addiu       $v0, $a0, 0xA0
    ctx->r2 = ADD32(ctx->r4, 0XA0);
    // 0x00240E10: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x00240E14: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00240E18: addiu       $v0, $a0, 0x9C
    ctx->r2 = ADD32(ctx->r4, 0X9C);
    // 0x00240E1C: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x00240E20: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E24: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x00240E28: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E2C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x00240E30: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E34: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00240E38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E3C: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x00240E40: sw          $s0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r16;
    // 0x00240E44: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E48: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240E4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240E50: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x00240E54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00240E58: bne         $v0, $zero, L_00240E70
    if (ctx->r2 != 0) {
        // 0x00240E5C: nop
    
            goto L_00240E70;
    }
    // 0x00240E5C: nop

L_00240E60:
    // 0x00240E60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00240E64:
    // 0x00240E64: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
L_00240E68:
    // 0x00240E68: bne         $v0, $zero, L_00240864
    if (ctx->r2 != 0) {
        // 0x00240E6C: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_00240864;
    }
    // 0x00240E6C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_00240E70:
    // 0x00240E70: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00240E74: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00240E78: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00240E7C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00240E80: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00240E84: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00240E88: jr          $ra
    // 0x00240E8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00240E8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004559D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004559D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004559DC: addiu       $a0, $a0, -0x5350
    ctx->r4 = ADD32(ctx->r4, -0X5350);
    // 0x004559E0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x004559E4: bne         $v0, $zero, L_004559F8
    if (ctx->r2 != 0) {
        // 0x004559E8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004559F8;
    }
    // 0x004559E8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004559EC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004559F0: beq         $v0, $zero, L_004559FC
    if (ctx->r2 == 0) {
        // 0x004559F4: nop
    
            goto L_004559FC;
    }
    // 0x004559F4: nop

L_004559F8:
    // 0x004559F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_004559FC:
    // 0x004559FC: jr          $ra
    // 0x00455A00: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00455A00: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00426480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00426484: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00426488: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042648C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00426490: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00426494: jal         0x00285878
    // 0x00426498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00426498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042649C: jal         0x002847E0
    // 0x004264A0: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x004264A0: nop

    after_1:
    // 0x004264A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004264A8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004264AC: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x004264B0: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x004264B4: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x004264B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x004264BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004264C0: addiu       $a0, $a0, 0xAA0
    ctx->r4 = ADD32(ctx->r4, 0XAA0);
    // 0x004264C4: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x004264C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004264CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004264D0: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x004264D4: beq         $v1, $zero, L_004264E8
    if (ctx->r3 == 0) {
        // 0x004264D8: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_004264E8;
    }
    // 0x004264D8: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x004264DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x004264E0: j           L_00426508
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00426508;
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004264E8:
    // 0x004264E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004264EC: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x004264F0: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x004264F4: jal         0x00299198
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00299198(rdram, ctx);
        goto after_2;
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004264FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00426500: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00426504: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00426508:
    // 0x00426508: beq         $v0, $zero, L_00426518
    if (ctx->r2 == 0) {
        // 0x0042650C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426518;
    }
    // 0x0042650C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426510: j           L_00426534
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_00426534;
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00426518:
    // 0x00426518: jal         0x004258E8
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00426520: beq         $v0, $zero, L_00426530
    if (ctx->r2 == 0) {
        // 0x00426524: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426530;
    }
    // 0x00426524: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426528: j           L_00426534
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00426534;
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00426530:
    // 0x00426530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00426534:
    // 0x00426534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426538: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0042653C: sw          $v0, 0xC60($at)
    MEM_W(0XC60, ctx->r1) = ctx->r2;
    // 0x00426540: jal         0x002858A4
    // 0x00426544: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x00426544: nop

    after_4:
    // 0x00426548: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042654C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426554: jr          $ra
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020F85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F85C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0020F860: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F864: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F868: lwc1        $f3, 0x10($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0020F86C: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F870: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020F874: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F878: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x0020F87C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020F880: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020F884: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F888: lwc1        $f1, 0x30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0020F88C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F890: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x0020F894: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0020F898: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F89C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F8A0: lwc1        $f3, 0x14($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0020F8A4: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F8A8: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020F8AC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F8B0: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020F8B4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020F8B8: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020F8BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F8C0: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x0020F8C4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F8C8: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0020F8CC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020F8D0: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F8D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F8D8: lwc1        $f3, 0x18($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x0020F8DC: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F8E0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020F8E4: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F8E8: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020F8EC: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020F8F0: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020F8F4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F8F8: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x0020F8FC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F900: jr          $ra
    // 0x0020F904: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    return;
    // 0x0020F904: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00268080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268080: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00268084: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00268088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026808C: beq         $v1, $v0, L_0026809C
    if (ctx->r3 == ctx->r2) {
            // 0x00268090: nop

    func_0026809C(rdram, ctx);
    return;
    }
    // 0x00268090: nop

    // 0x00268094: jr          $ra
    // 0x00268098: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268098: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0023726C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023726C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00237270: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00237274: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00237278: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023727C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00237280: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00237284: beq         $s1, $s0, L_00237498
    if (ctx->r17 == ctx->r16) {
        // 0x00237288: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237498;
    }
    // 0x00237288: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023728C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00237290: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237294: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237298: beq         $v0, $zero, L_002372B0
    if (ctx->r2 == 0) {
        // 0x0023729C: nop
    
            goto L_002372B0;
    }
    // 0x0023729C: nop

    // 0x002372A0: jal         0x00267090
    // 0x002372A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00267090(rdram, ctx);
        goto after_0;
    // 0x002372A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002372A8: beq         $v0, $zero, L_00237498
    if (ctx->r2 == 0) {
        // 0x002372AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237498;
    }
    // 0x002372AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002372B0:
    // 0x002372B0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002372B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002372B8: beq         $v1, $a2, L_002373E8
    if (ctx->r3 == ctx->r6) {
        // 0x002372BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002373E8;
    }
    // 0x002372BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002372C0: bne         $v1, $v0, L_00237498
    if (ctx->r3 != ctx->r2) {
        // 0x002372C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00237498;
    }
    // 0x002372C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002372C8: lw          $a0, 0x10C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10C);
    // 0x002372CC: beq         $a0, $zero, L_002373AC
    if (ctx->r4 == 0) {
        // 0x002372D0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_002373AC;
    }
    // 0x002372D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002372D4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002372D8: bne         $v0, $a2, L_0023738C
    if (ctx->r2 != ctx->r6) {
        // 0x002372DC: nop
    
            goto L_0023738C;
    }
    // 0x002372DC: nop

    // 0x002372E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002372E4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002372E8: bne         $v0, $zero, L_00237384
    if (ctx->r2 != 0) {
        // 0x002372EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00237384;
    }
    // 0x002372EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002372F0: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x002372F4: lhu         $v0, 0xB8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XB8);
    // 0x002372F8: beq         $v1, $v0, L_00237380
    if (ctx->r3 == ctx->r2) {
        // 0x002372FC: lui         $v0, 0x31
        ctx->r2 = S32(0X31 << 16);
            goto L_00237380;
    }
    // 0x002372FC: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x00237300: lw          $a2, 0xD4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XD4);
    // 0x00237304: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x00237308: beq         $v0, $zero, L_00237384
    if (ctx->r2 == 0) {
        // 0x0023730C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237384;
    }
    // 0x0023730C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00237310: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00237314: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00237318: beq         $v0, $zero, L_00237338
    if (ctx->r2 == 0) {
        // 0x0023731C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00237338;
    }
    // 0x0023731C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237320: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00237324: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237328: bne         $v0, $zero, L_00237338
    if (ctx->r2 != 0) {
        // 0x0023732C: and         $v0, $a2, $v1
        ctx->r2 = ctx->r6 & ctx->r3;
            goto L_00237338;
    }
    // 0x0023732C: and         $v0, $a2, $v1
    ctx->r2 = ctx->r6 & ctx->r3;
    // 0x00237330: beq         $v0, $zero, L_00237384
    if (ctx->r2 == 0) {
        // 0x00237334: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237384;
    }
    // 0x00237334: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00237338:
    // 0x00237338: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0023733C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00237340: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00237344: beq         $v1, $v0, L_00237378
    if (ctx->r3 == ctx->r2) {
        // 0x00237348: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00237378;
    }
    // 0x00237348: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0023734C: beq         $v0, $zero, L_00237364
    if (ctx->r2 == 0) {
        // 0x00237350: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00237364;
    }
    // 0x00237350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00237354: beq         $v1, $v0, L_00237378
    if (ctx->r3 == ctx->r2) {
        // 0x00237358: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237378;
    }
    // 0x00237358: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023735C: j           L_00237384
    // 0x00237360: nop

        goto L_00237384;
    // 0x00237360: nop

L_00237364:
    // 0x00237364: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00237368: beq         $v1, $v0, L_00237378
    if (ctx->r3 == ctx->r2) {
        // 0x0023736C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00237378;
    }
    // 0x0023736C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00237370: bne         $v1, $v0, L_00237384
    if (ctx->r3 != ctx->r2) {
        // 0x00237374: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237384;
    }
    // 0x00237374: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00237378:
    // 0x00237378: j           L_00237384
    // 0x0023737C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00237384;
    // 0x0023737C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00237380:
    // 0x00237380: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00237384:
    // 0x00237384: beq         $v0, $zero, L_00237498
    if (ctx->r2 == 0) {
        // 0x00237388: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237498;
    }
    // 0x00237388: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023738C:
    // 0x0023738C: lw          $v0, 0x10C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10C);
    // 0x00237390: bne         $s1, $v0, L_002373AC
    if (ctx->r17 != ctx->r2) {
        // 0x00237394: nop
    
            goto L_002373AC;
    }
    // 0x00237394: nop

    // 0x00237398: lw          $v0, 0xF8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XF8);
    // 0x0023739C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002373A0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x002373A4: bne         $v0, $zero, L_00237498
    if (ctx->r2 != 0) {
        // 0x002373A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237498;
    }
    // 0x002373A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002373AC:
    // 0x002373AC: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x002373B0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x002373B4: bne         $v1, $v0, L_00237498
    if (ctx->r3 != ctx->r2) {
        // 0x002373B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00237498;
    }
    // 0x002373B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002373BC: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002373C0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002373C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002373C8: bne         $v1, $v0, L_00237498
    if (ctx->r3 != ctx->r2) {
        // 0x002373CC: nop
    
            goto L_00237498;
    }
    // 0x002373CC: nop

    // 0x002373D0: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x002373D4: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x002373D8: bne         $v1, $v0, L_00237498
    if (ctx->r3 != ctx->r2) {
        // 0x002373DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00237498;
    }
    // 0x002373DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002373E0: j           L_00237498
    // 0x002373E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00237498;
    // 0x002373E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002373E8:
    // 0x002373E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002373EC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002373F0: bne         $v0, $zero, L_0023748C
    if (ctx->r2 != 0) {
        // 0x002373F4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0023748C;
    }
    // 0x002373F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002373F8: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x002373FC: lhu         $v0, 0xB8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XB8);
    // 0x00237400: beq         $v1, $v0, L_00237488
    if (ctx->r3 == ctx->r2) {
        // 0x00237404: lui         $v0, 0x31
        ctx->r2 = S32(0X31 << 16);
            goto L_00237488;
    }
    // 0x00237404: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x00237408: lw          $a0, 0xD4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD4);
    // 0x0023740C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00237410: beq         $v0, $zero, L_0023748C
    if (ctx->r2 == 0) {
        // 0x00237414: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0023748C;
    }
    // 0x00237414: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00237418: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0023741C: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00237420: beq         $v0, $zero, L_00237440
    if (ctx->r2 == 0) {
        // 0x00237424: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00237440;
    }
    // 0x00237424: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237428: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0023742C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237430: bne         $v0, $zero, L_00237440
    if (ctx->r2 != 0) {
        // 0x00237434: and         $v0, $a0, $v1
        ctx->r2 = ctx->r4 & ctx->r3;
            goto L_00237440;
    }
    // 0x00237434: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x00237438: beq         $v0, $zero, L_0023748C
    if (ctx->r2 == 0) {
        // 0x0023743C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0023748C;
    }
    // 0x0023743C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00237440:
    // 0x00237440: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00237444: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00237448: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0023744C: beq         $v1, $v0, L_00237480
    if (ctx->r3 == ctx->r2) {
        // 0x00237450: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00237480;
    }
    // 0x00237450: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x00237454: beq         $v0, $zero, L_0023746C
    if (ctx->r2 == 0) {
        // 0x00237458: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023746C;
    }
    // 0x00237458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023745C: beq         $v1, $v0, L_00237480
    if (ctx->r3 == ctx->r2) {
        // 0x00237460: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00237480;
    }
    // 0x00237460: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00237464: j           L_0023748C
    // 0x00237468: nop

        goto L_0023748C;
    // 0x00237468: nop

L_0023746C:
    // 0x0023746C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00237470: beq         $v1, $v0, L_00237480
    if (ctx->r3 == ctx->r2) {
        // 0x00237474: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00237480;
    }
    // 0x00237474: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00237478: bne         $v1, $v0, L_0023748C
    if (ctx->r3 != ctx->r2) {
        // 0x0023747C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0023748C;
    }
    // 0x0023747C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00237480:
    // 0x00237480: j           L_0023748C
    // 0x00237484: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_0023748C;
    // 0x00237484: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00237488:
    // 0x00237488: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0023748C:
    // 0x0023748C: beq         $v1, $zero, L_00237498
    if (ctx->r3 == 0) {
        // 0x00237490: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00237498;
    }
    // 0x00237490: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00237494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00237498:
    // 0x00237498: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0023749C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002374A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002374A4: jr          $ra
    // 0x002374A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002374A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002368B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002368B0: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x002368B4: beq         $v1, $zero, L_00236900
    if (ctx->r3 == 0) {
        // 0x002368B8: nop
    
            goto L_00236900;
    }
    // 0x002368B8: nop

    // 0x002368BC: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x002368C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002368C4: beq         $v0, $zero, L_002368DC
    if (ctx->r2 == 0) {
        // 0x002368C8: nop
    
            goto L_002368DC;
    }
    // 0x002368C8: nop

    // 0x002368CC: lbu         $v0, 0x10F($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10F);
    // 0x002368D0: beq         $v0, $zero, L_002368DC
    if (ctx->r2 == 0) {
        // 0x002368D4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_002368DC;
    }
    // 0x002368D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002368D8: sb          $v0, 0x10F($v1)
    MEM_B(0X10F, ctx->r3) = ctx->r2;
L_002368DC:
    // 0x002368DC: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x002368E0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002368E4: beq         $v0, $zero, L_00236900
    if (ctx->r2 == 0) {
        // 0x002368E8: nop
    
            goto L_00236900;
    }
    // 0x002368E8: nop

    // 0x002368EC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x002368F0: lbu         $v0, 0x1B5($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1B5);
    // 0x002368F4: beq         $v0, $zero, L_00236900
    if (ctx->r2 == 0) {
        // 0x002368F8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00236900;
    }
    // 0x002368F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002368FC: sb          $v0, 0x1B5($v1)
    MEM_B(0X1B5, ctx->r3) = ctx->r2;
L_00236900:
    // 0x00236900: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00236904: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x00236908: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x0023690C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00236910: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00236914: nop

    // 0x00236918: bc1tl       L_00236920
    if (c1cs) {
        // 0x0023691C: swc1        $f1, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00236920;
    }
    goto skip_0;
    // 0x0023691C: swc1        $f1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_00236920:
    // 0x00236920: jr          $ra
    // 0x00236924: nop

    return;
    // 0x00236924: nop

;}
RECOMP_FUNC void func_0021F5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F5B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0021F5BC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0021F5C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021F5C4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0021F5C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021F5CC: lw          $v0, 0xD4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD4);
    // 0x0021F5D0: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0021F5D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021F5D8: beq         $v0, $zero, L_0021F648
    if (ctx->r2 == 0) {
        // 0x0021F5DC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0021F648;
    }
    // 0x0021F5DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0021F5E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F5E4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021F5E8: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x0021F5EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021F5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021F5F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021F5F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021F5FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021F600: lw          $a1, 0xA4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XA4);
    // 0x0021F604: lw          $a2, 0xB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XB0);
    // 0x0021F608: jal         0x0020367C
    // 0x0021F60C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021F60C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x0021F610: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021F614: beql        $s0, $zero, L_0021F64C
    if (ctx->r16 == 0) {
        // 0x0021F618: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0021F64C;
    }
    goto skip_0;
    // 0x0021F618: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x0021F61C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0021F620: jal         0x002017D4
    // 0x0021F624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021F624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0021F628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021F62C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0021F630: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021F634: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x0021F638: jal         0x002051F4
    // 0x0021F63C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0021F63C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x0021F640: j           L_0021F64C
    // 0x0021F644: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_0021F64C;
    // 0x0021F644: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0021F648:
    // 0x0021F648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0021F64C:
    // 0x0021F64C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0021F650: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0021F654: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021F658: jr          $ra
    // 0x0021F65C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0021F65C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040768C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040768C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407690: lwc1        $f0, 0x534($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X534);
    // 0x00407694: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00407698: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040769C: swc1        $f0, -0x61C($at)
    MEM_W(-0X61C, ctx->r1) = ctx->f0.u32l;
    // 0x004076A0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004076A4: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004076A8: jr          $ra
    // 0x004076AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004076AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002A2008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002A200C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2010: ori         $a0, $a0, 0xFFF4
    ctx->r4 = ctx->r4 | 0XFFF4;
    // 0x002A2014: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002A2018: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002A201C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A2020: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A2024: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A2028: jal         0x002A1384
    // 0x002A202C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A202C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A2030: lui         $v1, 0xB1FF
    ctx->r3 = S32(0XB1FF << 16);
    // 0x002A2034: ori         $v1, $v1, 0xFFFC
    ctx->r3 = ctx->r3 | 0XFFFC;
    // 0x002A2038: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A203C: ori         $a0, $a0, 0xFFF8
    ctx->r4 = ctx->r4 | 0XFFF8;
    // 0x002A2040: jal         0x002A1384
    // 0x002A2044: and         $s4, $v0, $v1
    ctx->r20 = ctx->r2 & ctx->r3;
    func_002A1384(rdram, ctx);
        goto after_1;
    // 0x002A2044: and         $s4, $v0, $v1
    ctx->r20 = ctx->r2 & ctx->r3;
    after_1:
    // 0x002A2048: lui         $v1, 0x1FF
    ctx->r3 = S32(0X1FF << 16);
    // 0x002A204C: ori         $v1, $v1, 0xFFFC
    ctx->r3 = ctx->r3 | 0XFFFC;
    // 0x002A2050: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2054: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x002A2058: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A205C: jal         0x002A1350
    // 0x002A2060: and         $s1, $v0, $v1
    ctx->r17 = ctx->r2 & ctx->r3;
    func_002A1350(rdram, ctx);
        goto after_2;
    // 0x002A2060: and         $s1, $v0, $v1
    ctx->r17 = ctx->r2 & ctx->r3;
    after_2:
    // 0x002A2064: lui         $a0, 0xB000
    ctx->r4 = S32(0XB000 << 16);
L_002A2068:
    // 0x002A2068: jal         0x002A1384
    // 0x002A206C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    func_002A1384(rdram, ctx);
        goto after_3;
    // 0x002A206C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    after_3:
    // 0x002A2070: bne         $v0, $zero, L_002A2088
    if (ctx->r2 != 0) {
        // 0x002A2074: srl         $v1, $s1, 2
        ctx->r3 = S32(U32(ctx->r17) >> 2);
            goto L_002A2088;
    }
    // 0x002A2074: srl         $v1, $s1, 2
    ctx->r3 = S32(U32(ctx->r17) >> 2);
    // 0x002A2078: jal         0x002A13BC
    // 0x002A207C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    func_002A13BC(rdram, ctx);
        goto after_4;
    // 0x002A207C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    after_4:
    // 0x002A2080: j           L_002A2068
    // 0x002A2084: lui         $a0, 0xB000
    ctx->r4 = S32(0XB000 << 16);
        goto L_002A2068;
    // 0x002A2084: lui         $a0, 0xB000
    ctx->r4 = S32(0XB000 << 16);
L_002A2088:
    // 0x002A2088: beq         $v1, $zero, L_002A20CC
    if (ctx->r3 == 0) {
        // 0x002A208C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002A20CC;
    }
    // 0x002A208C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002A2090: lui         $v0, 0xB07F
    ctx->r2 = S32(0XB07F << 16);
    // 0x002A2094: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A2098: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x002A209C: and         $s2, $s4, $v0
    ctx->r18 = ctx->r20 & ctx->r2;
    // 0x002A20A0: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_002A20A4:
    // 0x002A20A4: jal         0x002A1384
    // 0x002A20A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002A1384(rdram, ctx);
        goto after_5;
    // 0x002A20A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x002A20AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A20B0: jal         0x002A1350
    // 0x002A20B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_002A1350(rdram, ctx);
        goto after_6;
    // 0x002A20B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_6:
    // 0x002A20B8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x002A20BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A20C0: sltu        $v0, $s0, $s3
    ctx->r2 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x002A20C4: bne         $v0, $zero, L_002A20A4
    if (ctx->r2 != 0) {
        // 0x002A20C8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_002A20A4;
    }
    // 0x002A20C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_002A20CC:
    // 0x002A20CC: jal         0x002A13BC
    // 0x002A20D0: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    func_002A13BC(rdram, ctx);
        goto after_7;
    // 0x002A20D0: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    after_7:
    // 0x002A20D4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A20D8: ori         $a0, $a0, 0xFFF4
    ctx->r4 = ctx->r4 | 0XFFF4;
    // 0x002A20DC: jal         0x002A1350
    // 0x002A20E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_8;
    // 0x002A20E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x002A20E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002A20E8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002A20EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A20F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A20F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A20F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A20FC: jr          $ra
    // 0x002A2100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002A2100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00287ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00287ABC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00287AC0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00287AC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00287AC8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00287ACC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00287AD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00287AD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00287AD8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00287ADC: jal         0x0029B170
    // 0x00287AE0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    func_0029B170(rdram, ctx);
        goto after_0;
    // 0x00287AE0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00287AE4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x00287AE8: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    // 0x00287AEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00287AF0: lw          $a0, -0x52F8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X52F8);
    // 0x00287AF4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287AF8: lw          $a1, -0x52F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52F4);
    // 0x00287AFC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00287B00: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x00287B04: sltu        $v0, $s3, $a1
    ctx->r2 = ctx->r19 < ctx->r5 ? 1 : 0;
    // 0x00287B08: subu        $a1, $s3, $a1
    ctx->r5 = SUB32(ctx->r19, ctx->r5);
    // 0x00287B0C: subu        $a0, $s2, $a0
    ctx->r4 = SUB32(ctx->r18, ctx->r4);
    // 0x00287B10: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x00287B14: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x00287B18: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x00287B1C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00287B20: jal         0x002A4650
    // 0x00287B24: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_1;
    // 0x00287B24: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_1:
    // 0x00287B28: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00287B2C: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x00287B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00287B34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00287B38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00287B3C: jal         0x002A50E0
    // 0x00287B40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_2;
    // 0x00287B40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00287B44: blez        $v0, L_00287B5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00287B48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00287B5C;
    }
    // 0x00287B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00287B4C: jal         0x002A5130
    // 0x00287B50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_3;
    // 0x00287B50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00287B54: j           L_00287B90
    // 0x00287B58: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_00287B90;
    // 0x00287B58: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_00287B5C:
    // 0x00287B5C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x00287B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00287B64: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x00287B68: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x00287B6C: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x00287B70: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x00287B74: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x00287B78: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x00287B7C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00287B80: jal         0x002A5130
    // 0x00287B84: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_4;
    // 0x00287B84: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_4:
    // 0x00287B88: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00287B8C: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
L_00287B90:
    // 0x00287B90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287B94: lwc1        $f0, -0x624C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X624C);
    // 0x00287B98: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00287B9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287BA0: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287BA4: lw          $v0, 0x3FD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00287BA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00287BAC: lwc1        $f1, -0x6248($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6248);
    // 0x00287BB0: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x00287BB4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00287BB8: sw          $s2, -0x52F8($at)
    MEM_W(-0X52F8, ctx->r1) = ctx->r18;
    // 0x00287BBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00287BC0: sw          $s3, -0x52F4($at)
    MEM_W(-0X52F4, ctx->r1) = ctx->r19;
    // 0x00287BC4: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00287BC8: bne         $v0, $v1, L_00287BF0
    if (ctx->r2 != ctx->r3) {
        // 0x00287BCC: lui         $a0, 0x2
        ctx->r4 = S32(0X2 << 16);
            goto L_00287BF0;
    }
    // 0x00287BCC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00287BD0: ori         $a0, $a0, 0x317C
    ctx->r4 = ctx->r4 | 0X317C;
    // 0x00287BD4: jal         0x00416AF8
    // 0x00287BD8: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    func_00416AF8(rdram, ctx);
        goto after_5;
    // 0x00287BD8: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    after_5:
    // 0x00287BDC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287BE0: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287BE4: sw          $v0, 0x3FF4($at)
    MEM_W(0X3FF4, ctx->r1) = ctx->r2;
    // 0x00287BE8: j           L_00287BFC
    // 0x00287BEC: nop

        goto L_00287BFC;
    // 0x00287BEC: nop

L_00287BF0:
    // 0x00287BF0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287BF4: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287BF8: sw          $zero, 0x3FF4($at)
    MEM_W(0X3FF4, ctx->r1) = 0;
L_00287BFC:
    // 0x00287BFC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00287C00: lw          $v0, 0x8F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8F8);
    // 0x00287C04: beq         $v0, $zero, L_00287C3C
    if (ctx->r2 == 0) {
        // 0x00287C08: nop
    
            goto L_00287C3C;
    }
    // 0x00287C08: nop

    // 0x00287C0C: jal         0x0027BC34
    // 0x00287C10: nop

    func_0027BC34(rdram, ctx);
        goto after_6;
    // 0x00287C10: nop

    after_6:
    // 0x00287C14: bne         $v0, $zero, L_00287C3C
    if (ctx->r2 != 0) {
        // 0x00287C18: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00287C3C;
    }
    // 0x00287C18: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00287C1C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287C20: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287C24: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00287C28: bne         $v1, $v0, L_00287C4C
    if (ctx->r3 != ctx->r2) {
        // 0x00287C2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00287C4C;
    }
    // 0x00287C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00287C30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287C34: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287C38: sw          $v0, 0x3FF4($at)
    MEM_W(0X3FF4, ctx->r1) = ctx->r2;
L_00287C3C:
    // 0x00287C3C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287C40: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287C44: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00287C48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00287C4C:
    // 0x00287C4C: beq         $v1, $v0, L_00287C6C
    if (ctx->r3 == ctx->r2) {
        // 0x00287C50: nop
    
            goto L_00287C6C;
    }
    // 0x00287C50: nop

    // 0x00287C54: beq         $v1, $zero, L_00287CF0
    if (ctx->r3 == 0) {
        // 0x00287C58: sltiu       $v0, $v1, 0x5
        ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
            goto L_00287CF0;
    }
    // 0x00287C58: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00287C5C: beq         $v0, $zero, L_00287CF0
    if (ctx->r2 == 0) {
        // 0x00287C60: sltiu       $v0, $v1, 0x3
        ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
            goto L_00287CF0;
    }
    // 0x00287C60: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x00287C64: bne         $v0, $zero, L_00287CF0
    if (ctx->r2 != 0) {
        // 0x00287C68: nop
    
            goto L_00287CF0;
    }
    // 0x00287C68: nop

L_00287C6C:
    // 0x00287C6C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00287C70: lw          $a2, -0x4F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4F64);
    // 0x00287C74: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00287C78: lw          $a3, -0x4EF4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4EF4);
    // 0x00287C7C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00287C80: lw          $a0, 0x6CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CA8);
    // 0x00287C84: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287C88: lw          $a1, -0x52EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52EC);
    // 0x00287C8C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287C90: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00287C94: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00287C98: sltu        $t0, $a2, $a1
    ctx->r8 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x00287C9C: beq         $t0, $zero, L_00287CA8
    if (ctx->r8 == 0) {
        // 0x00287CA0: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_00287CA8;
    }
    // 0x00287CA0: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x00287CA4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287CA8:
    // 0x00287CA8: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287CAC: bnel        $v0, $zero, L_00287CB4
    if (ctx->r2 != 0) {
        // 0x00287CB0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287CB4;
    }
    goto skip_0;
    // 0x00287CB0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00287CB4:
    // 0x00287CB4: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287CB8: bnel        $v0, $zero, L_00287CC0
    if (ctx->r2 != 0) {
        // 0x00287CBC: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287CC0;
    }
    goto skip_1;
    // 0x00287CBC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_1:
L_00287CC0:
    // 0x00287CC0: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287CC4: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287CC8: lui         $t2, 0xAAAA
    ctx->r10 = S32(0XAAAA << 16);
    // 0x00287CCC: ori         $t2, $t2, 0xAAAB
    ctx->r10 = ctx->r10 | 0XAAAB;
    // 0x00287CD0: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287CD4: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287CD8: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
    // 0x00287CDC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00287CE0: bne         $v0, $zero, L_00287FF4
    if (ctx->r2 != 0) {
        // 0x00287CE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00287FF4;
    }
    // 0x00287CE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00287CE8: j           L_00287FC0
    // 0x00287CEC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
        goto L_00287FC0;
    // 0x00287CEC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_00287CF0:
    // 0x00287CF0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00287CF4: lw          $a2, -0x4F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4F64);
    // 0x00287CF8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00287CFC: lw          $a3, -0x4EF4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4EF4);
    // 0x00287D00: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00287D04: lw          $a0, 0x6CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CA8);
    // 0x00287D08: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287D0C: lw          $a1, -0x52EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52EC);
    // 0x00287D10: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287D14: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00287D18: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00287D1C: sltu        $t0, $a2, $a1
    ctx->r8 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x00287D20: beq         $t0, $zero, L_00287D2C
    if (ctx->r8 == 0) {
        // 0x00287D24: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_00287D2C;
    }
    // 0x00287D24: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x00287D28: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287D2C:
    // 0x00287D2C: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287D30: bnel        $v0, $zero, L_00287D38
    if (ctx->r2 != 0) {
        // 0x00287D34: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287D38;
    }
    goto skip_2;
    // 0x00287D34: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_2:
L_00287D38:
    // 0x00287D38: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287D3C: bnel        $v0, $zero, L_00287D44
    if (ctx->r2 != 0) {
        // 0x00287D40: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287D44;
    }
    goto skip_3;
    // 0x00287D40: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_3:
L_00287D44:
    // 0x00287D44: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287D48: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287D4C: lui         $t2, 0xAAAA
    ctx->r10 = S32(0XAAAA << 16);
    // 0x00287D50: ori         $t2, $t2, 0xAAAB
    ctx->r10 = ctx->r10 | 0XAAAB;
    // 0x00287D54: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287D58: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287D5C: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
    // 0x00287D60: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00287D64: bne         $v0, $zero, L_00287DA4
    if (ctx->r2 != 0) {
        // 0x00287D68: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_00287DA4;
    }
    // 0x00287D68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00287D6C: beq         $t0, $zero, L_00287D78
    if (ctx->r8 == 0) {
        // 0x00287D70: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_00287D78;
    }
    // 0x00287D70: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287D74: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287D78:
    // 0x00287D78: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287D7C: bnel        $v0, $zero, L_00287D84
    if (ctx->r2 != 0) {
        // 0x00287D80: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287D84;
    }
    goto skip_4;
    // 0x00287D80: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_4:
L_00287D84:
    // 0x00287D84: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287D88: bnel        $v0, $zero, L_00287D90
    if (ctx->r2 != 0) {
        // 0x00287D8C: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287D90;
    }
    goto skip_5;
    // 0x00287D8C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_5:
L_00287D90:
    // 0x00287D90: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287D94: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287D98: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287D9C: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287DA0: srl         $v1, $t3, 1
    ctx->r3 = S32(U32(ctx->r11) >> 1);
L_00287DA4:
    // 0x00287DA4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00287DA8: lw          $v0, -0x6760($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6760);
    // 0x00287DAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00287DB0: sw          $v1, -0x52F0($at)
    MEM_W(-0X52F0, ctx->r1) = ctx->r3;
    // 0x00287DB4: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x00287DB8: bne         $v0, $zero, L_00287E7C
    if (ctx->r2 != 0) {
        // 0x00287DBC: nop
    
            goto L_00287E7C;
    }
    // 0x00287DBC: nop

    // 0x00287DC0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00287DC4: lw          $a2, -0x4F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4F64);
    // 0x00287DC8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00287DCC: lw          $a3, -0x4EF4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4EF4);
    // 0x00287DD0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00287DD4: lw          $a0, 0x6CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CA8);
    // 0x00287DD8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287DDC: lw          $a1, -0x52EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52EC);
    // 0x00287DE0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287DE4: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00287DE8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00287DEC: sltu        $t0, $a2, $a1
    ctx->r8 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x00287DF0: beq         $t0, $zero, L_00287DFC
    if (ctx->r8 == 0) {
        // 0x00287DF4: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_00287DFC;
    }
    // 0x00287DF4: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x00287DF8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287DFC:
    // 0x00287DFC: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287E00: bnel        $v0, $zero, L_00287E08
    if (ctx->r2 != 0) {
        // 0x00287E04: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287E08;
    }
    goto skip_6;
    // 0x00287E04: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_6:
L_00287E08:
    // 0x00287E08: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287E0C: bnel        $v0, $zero, L_00287E14
    if (ctx->r2 != 0) {
        // 0x00287E10: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287E14;
    }
    goto skip_7;
    // 0x00287E10: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_7:
L_00287E14:
    // 0x00287E14: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287E18: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287E1C: lui         $t2, 0xAAAA
    ctx->r10 = S32(0XAAAA << 16);
    // 0x00287E20: ori         $t2, $t2, 0xAAAB
    ctx->r10 = ctx->r10 | 0XAAAB;
    // 0x00287E24: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287E28: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287E2C: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
    // 0x00287E30: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x00287E34: bne         $v0, $zero, L_00287E74
    if (ctx->r2 != 0) {
        // 0x00287E38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00287E74;
    }
    // 0x00287E38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00287E3C: beq         $t0, $zero, L_00287E48
    if (ctx->r8 == 0) {
        // 0x00287E40: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_00287E48;
    }
    // 0x00287E40: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287E44: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287E48:
    // 0x00287E48: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287E4C: bnel        $v0, $zero, L_00287E54
    if (ctx->r2 != 0) {
        // 0x00287E50: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287E54;
    }
    goto skip_8;
    // 0x00287E50: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_8:
L_00287E54:
    // 0x00287E54: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287E58: bnel        $v0, $zero, L_00287E60
    if (ctx->r2 != 0) {
        // 0x00287E5C: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287E60;
    }
    goto skip_9;
    // 0x00287E5C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_9:
L_00287E60:
    // 0x00287E60: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287E64: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287E68: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287E6C: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287E70: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
L_00287E74:
    // 0x00287E74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00287E78: sw          $v0, -0x52F0($at)
    MEM_W(-0X52F0, ctx->r1) = ctx->r2;
L_00287E7C:
    // 0x00287E7C: jal         0x00284188
    // 0x00287E80: nop

    func_00284188(rdram, ctx);
        goto after_7;
    // 0x00287E80: nop

    after_7:
    // 0x00287E84: beq         $v0, $zero, L_00287FFC
    if (ctx->r2 == 0) {
        // 0x00287E88: nop
    
            goto L_00287FFC;
    }
    // 0x00287E88: nop

    // 0x00287E8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00287E90: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00287E94: lw          $v0, 0x3FD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00287E98: addiu       $v0, $v0, -0xF
    ctx->r2 = ADD32(ctx->r2, -0XF);
    // 0x00287E9C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00287EA0: beq         $v0, $zero, L_00287F40
    if (ctx->r2 == 0) {
        // 0x00287EA4: nop
    
            goto L_00287F40;
    }
    // 0x00287EA4: nop

    // 0x00287EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00287EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00287EB0: slti        $v0, $v0, 0xDF
    ctx->r2 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
    // 0x00287EB4: beq         $v0, $zero, L_00287F40
    if (ctx->r2 == 0) {
        // 0x00287EB8: nop
    
            goto L_00287F40;
    }
    // 0x00287EB8: nop

    // 0x00287EBC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00287EC0: lw          $a2, -0x4F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4F64);
    // 0x00287EC4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00287EC8: lw          $a3, -0x4EF4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4EF4);
    // 0x00287ECC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00287ED0: lw          $a0, 0x6CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CA8);
    // 0x00287ED4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287ED8: lw          $a1, -0x52EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52EC);
    // 0x00287EDC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287EE0: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00287EE4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00287EE8: sltu        $t0, $a2, $a1
    ctx->r8 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x00287EEC: beq         $t0, $zero, L_00287EF8
    if (ctx->r8 == 0) {
        // 0x00287EF0: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_00287EF8;
    }
    // 0x00287EF0: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x00287EF4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287EF8:
    // 0x00287EF8: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287EFC: bnel        $v0, $zero, L_00287F04
    if (ctx->r2 != 0) {
        // 0x00287F00: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287F04;
    }
    goto skip_10;
    // 0x00287F00: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_10:
L_00287F04:
    // 0x00287F04: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287F08: bnel        $v0, $zero, L_00287F10
    if (ctx->r2 != 0) {
        // 0x00287F0C: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287F10;
    }
    goto skip_11;
    // 0x00287F0C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_11:
L_00287F10:
    // 0x00287F10: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287F14: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287F18: lui         $t2, 0xAAAA
    ctx->r10 = S32(0XAAAA << 16);
    // 0x00287F1C: ori         $t2, $t2, 0xAAAB
    ctx->r10 = ctx->r10 | 0XAAAB;
    // 0x00287F20: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287F24: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287F28: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
    // 0x00287F2C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00287F30: beq         $v0, $zero, L_00287FBC
    if (ctx->r2 == 0) {
        // 0x00287F34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00287FBC;
    }
    // 0x00287F34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00287F38: j           L_00287FF4
    // 0x00287F3C: nop

        goto L_00287FF4;
    // 0x00287F3C: nop

L_00287F40:
    // 0x00287F40: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00287F44: lw          $a2, -0x4F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4F64);
    // 0x00287F48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00287F4C: lw          $a3, -0x4EF4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4EF4);
    // 0x00287F50: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00287F54: lw          $a0, 0x6CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CA8);
    // 0x00287F58: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00287F5C: lw          $a1, -0x52EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52EC);
    // 0x00287F60: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00287F64: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00287F68: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00287F6C: sltu        $t0, $a2, $a1
    ctx->r8 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x00287F70: beq         $t0, $zero, L_00287F7C
    if (ctx->r8 == 0) {
        // 0x00287F74: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_00287F7C;
    }
    // 0x00287F74: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x00287F78: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_00287F7C:
    // 0x00287F7C: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287F80: bnel        $v0, $zero, L_00287F88
    if (ctx->r2 != 0) {
        // 0x00287F84: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287F88;
    }
    goto skip_12;
    // 0x00287F84: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_12:
L_00287F88:
    // 0x00287F88: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287F8C: bnel        $v0, $zero, L_00287F94
    if (ctx->r2 != 0) {
        // 0x00287F90: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287F94;
    }
    goto skip_13;
    // 0x00287F90: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_13:
L_00287F94:
    // 0x00287F94: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287F98: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287F9C: lui         $t2, 0xAAAA
    ctx->r10 = S32(0XAAAA << 16);
    // 0x00287FA0: ori         $t2, $t2, 0xAAAB
    ctx->r10 = ctx->r10 | 0XAAAB;
    // 0x00287FA4: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287FA8: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287FAC: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
    // 0x00287FB0: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x00287FB4: bne         $v0, $zero, L_00287FF4
    if (ctx->r2 != 0) {
        // 0x00287FB8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00287FF4;
    }
    // 0x00287FB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00287FBC:
    // 0x00287FBC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_00287FC0:
    // 0x00287FC0: bnel        $t0, $zero, L_00287FC8
    if (ctx->r8 != 0) {
        // 0x00287FC4: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_00287FC8;
    }
    goto skip_14;
    // 0x00287FC4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_14:
L_00287FC8:
    // 0x00287FC8: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x00287FCC: bnel        $v0, $zero, L_00287FD4
    if (ctx->r2 != 0) {
        // 0x00287FD0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00287FD4;
    }
    goto skip_15;
    // 0x00287FD0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_15:
L_00287FD4:
    // 0x00287FD4: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x00287FD8: bnel        $v0, $zero, L_00287FE0
    if (ctx->r2 != 0) {
        // 0x00287FDC: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00287FE0;
    }
    goto skip_16;
    // 0x00287FDC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_16:
L_00287FE0:
    // 0x00287FE0: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x00287FE4: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x00287FE8: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00287FEC: mfhi        $t3
    ctx->r11 = hi;
    // 0x00287FF0: srl         $v0, $t3, 1
    ctx->r2 = S32(U32(ctx->r11) >> 1);
L_00287FF4:
    // 0x00287FF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00287FF8: sw          $v0, -0x52F0($at)
    MEM_W(-0X52F0, ctx->r1) = ctx->r2;
L_00287FFC:
    // 0x00287FFC: jal         0x0027BC68
    // 0x00288000: nop

    func_0027BC68(rdram, ctx);
        goto after_8;
    // 0x00288000: nop

    after_8:
        turok2_patch_native_60(rdram, ctx);

    // 0x00288004: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00288008: lw          $v1, -0x52F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X52F0);
    // 0x0028800C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00288010: lwc1        $f1, -0x4F5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4F5C);
    // 0x00288014: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00288018: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0028801C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00288020: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
        if (ctx->f1.fl == 0.0f) {
        ctx->f1.fl = 1.0f;
    }

    // 0x00288024: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00288028: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028802C: swc1        $f0, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f0.u32l;
    // 0x00288030: jal         0x00284188
    // 0x00288034: nop

    func_00284188(rdram, ctx);
        goto after_9;
    // 0x00288034: nop

    after_9:
    // 0x00288038: beq         $v0, $zero, L_00288048
    if (ctx->r2 == 0) {
        // 0x0028803C: nop
    
            goto L_00288048;
    }
    // 0x0028803C: nop

    // 0x00288040: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288044: swc1        $f20, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f20.u32l;
L_00288048:
        turok2_patch_lock_increment(rdram, ctx);

    // 0x00288048: jal         0x0027BC34
    // 0x0028804C: nop

    func_0027BC34(rdram, ctx);
        goto after_10;
    // 0x0028804C: nop

    after_10:
    // 0x00288050: beq         $v0, $zero, L_00288084
    if (ctx->r2 == 0) {
        // 0x00288054: nop
    
            goto L_00288084;
    }
    // 0x00288054: nop

    // 0x00288058: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028805C: lw          $v1, -0x52F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X52F0);
    // 0x00288060: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288064: lwc1        $f1, -0x6244($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6244);
    // 0x00288068: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0028806C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00288070: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00288074: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00288078: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028807C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288080: swc1        $f0, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f0.u32l;
L_00288084:
        turok2_patch_relock_increment(rdram, ctx);

    // 0x00288084: jal         0x00204DE0
    // 0x00288088: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00204DE0(rdram, ctx);
        goto after_11;
    // 0x00288088: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x0028808C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00288090: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x00288094: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00288098: lw          $v1, -0x6758($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6758);
    // 0x0028809C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002880A0: sw          $v0, -0xEC0($at)
    MEM_W(-0XEC0, ctx->r1) = ctx->r2;
    // 0x002880A4: bne         $v1, $zero, L_002880B4
    if (ctx->r3 != 0) {
        // 0x002880A8: nop
    
            goto L_002880B4;
    }
    // 0x002880A8: nop

    // 0x002880AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x002880B0: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_002880B4:
    // 0x002880B4: jal         0x00287248
    // 0x002880B8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00287248(rdram, ctx);
        goto after_12;
    // 0x002880B8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_12:
    // 0x002880BC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002880C0: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x002880C4: lwc1        $f0, 0x3FD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3FD0);
    // 0x002880C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002880CC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002880D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002880D4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002880D8: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x002880DC: swc1        $f0, 0x3FD0($at)
    MEM_W(0X3FD0, ctx->r1) = ctx->f0.u32l;
    // 0x002880E0: jal         0x00288FDC
    // 0x002880E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00288FDC(rdram, ctx);
        goto after_13;
    // 0x002880E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
    // 0x002880E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002880EC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x002880F0: jal         0x00416AF8
    // 0x002880F4: nop

    func_00416AF8(rdram, ctx);
        goto after_14;
    // 0x002880F4: nop

    after_14:
    // 0x002880F8: bne         $v0, $zero, L_00288158
    if (ctx->r2 != 0) {
        // 0x002880FC: nop
    
            goto L_00288158;
    }
    // 0x002880FC: nop

    // 0x00288100: jal         0x00284188
    // 0x00288104: nop

    func_00284188(rdram, ctx);
        goto after_15;
    // 0x00288104: nop

    after_15:
    // 0x00288108: beq         $v0, $zero, L_00288158
    if (ctx->r2 == 0) {
        // 0x0028810C: nop
    
            goto L_00288158;
    }
    // 0x0028810C: nop

    // 0x00288110: jal         0x00284408
    // 0x00288114: nop

    func_00284408(rdram, ctx);
        goto after_16;
    // 0x00288114: nop

    after_16:
    // 0x00288118: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x0028811C: bne         $v0, $v1, L_00288158
    if (ctx->r2 != ctx->r3) {
        // 0x00288120: nop
    
            goto L_00288158;
    }
    // 0x00288120: nop

    // 0x00288124: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00288128: lw          $v0, -0x530C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X530C);
    // 0x0028812C: bne         $v0, $zero, L_00288168
    if (ctx->r2 != 0) {
        // 0x00288130: nop
    
            goto L_00288168;
    }
    // 0x00288130: nop

    // 0x00288134: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288138: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x0028813C: lw          $v0, 0x3FF4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FF4);
    // 0x00288140: bne         $v0, $zero, L_00288158
    if (ctx->r2 != 0) {
        // 0x00288144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00288158;
    }
    // 0x00288144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00288148: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028814C: sw          $v0, -0x530C($at)
    MEM_W(-0X530C, ctx->r1) = ctx->r2;
    // 0x00288150: jal         0x00412B14
    // 0x00288154: nop

    func_00412B14(rdram, ctx);
        goto after_17;
    // 0x00288154: nop

    after_17:
L_00288158:
    // 0x00288158: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028815C: lw          $v0, -0x530C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X530C);
    // 0x00288160: beq         $v0, $zero, L_0028817C
    if (ctx->r2 == 0) {
        // 0x00288164: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028817C;
    }
    // 0x00288164: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00288168:
    // 0x00288168: jal         0x00284240
    // 0x0028816C: nop

    func_00284240(rdram, ctx);
        goto after_18;
    // 0x0028816C: nop

    after_18:
    // 0x00288170: bne         $v0, $zero, L_0028817C
    if (ctx->r2 != 0) {
        // 0x00288174: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0028817C;
    }
    // 0x00288174: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00288178: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0028817C:
    // 0x0028817C: beq         $v1, $zero, L_002881C4
    if (ctx->r3 == 0) {
        // 0x00288180: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_002881C4;
    }
    // 0x00288180: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x00288184: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288188: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x0028818C: lw          $v0, 0x3FD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288190: beq         $v0, $v1, L_002881C4
    if (ctx->r2 == ctx->r3) {
        // 0x00288194: nop
    
            goto L_002881C4;
    }
    // 0x00288194: nop

    // 0x00288198: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0028819C: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x002881A0: lw          $v0, 0x3FDC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FDC);
    // 0x002881A4: beq         $v0, $v1, L_002881C4
    if (ctx->r2 == ctx->r3) {
        // 0x002881A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002881C4;
    }
    // 0x002881A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002881AC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002881B0: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x002881B4: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x002881B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002881BC: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x002881C0: sw          $v1, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r3;
L_002881C4:
    // 0x002881C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002881C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002881CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002881D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002881D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002881D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002881DC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x002881E0: jr          $ra
    // 0x002881E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002881E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00259E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259E8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259E90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259E94: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259E98: lhu         $a3, 0x76($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X76);
    // 0x00259E9C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259EA0: addiu       $a2, $a2, -0x8E0
    ctx->r6 = ADD32(ctx->r6, -0X8E0);
    // 0x00259EA4: jal         0x00245A98
    // 0x00259EA8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259EA8: nop

    after_0:
    // 0x00259EAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259EB0: jr          $ra
    // 0x00259EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BF18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BF1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044BF20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044BF24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044BF28: jal         0x002017D4
    // 0x0044BF2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BF2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044BF30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044BF34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0044BF38: jal         0x002017D4
    // 0x0044BF3C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044BF3C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0044BF40: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0044BF44: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x0044BF48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044BF4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044BF50: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x0044BF54: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0044BF58: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0044BF5C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0044BF60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044BF64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044BF68: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0044BF6C: jr          $ra
    // 0x0044BF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00248A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00248A8C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x00248A90: addiu       $v1, $a0, 0x3C
    ctx->r3 = ADD32(ctx->r4, 0X3C);
L_00248A94:
    // 0x00248A94: sh          $zero, 0x934($v1)
    MEM_H(0X934, ctx->r3) = 0;
    // 0x00248A98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00248A9C: bgez        $v0, L_00248A94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00248AA0: addiu       $v1, $v1, -0x2
        ctx->r3 = ADD32(ctx->r3, -0X2);
            goto L_00248A94;
    }
    // 0x00248AA0: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
    // 0x00248AA4: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x00248AA8: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
L_00248AAC:
    // 0x00248AAC: sb          $zero, 0x972($v1)
    MEM_B(0X972, ctx->r3) = 0;
    // 0x00248AB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00248AB4: bgez        $v0, L_00248AAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00248AB8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_00248AAC;
    }
    // 0x00248AB8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00248ABC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00248AC0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00248AC4: beq         $v0, $zero, L_00248B1C
    if (ctx->r2 == 0) {
        // 0x00248AC8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_00248B1C;
    }
    // 0x00248AC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00248ACC: lw          $v1, 0x520($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X520);
    // 0x00248AD0: bne         $v1, $v0, L_00248AF0
    if (ctx->r3 != ctx->r2) {
        // 0x00248AD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248AF0;
    }
    // 0x00248AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248AD8: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x00248ADC: sb          $v0, 0x994($a0)
    MEM_B(0X994, ctx->r4) = ctx->r2;
    // 0x00248AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00248AE4: sh          $v1, 0x998($a0)
    MEM_H(0X998, ctx->r4) = ctx->r3;
    // 0x00248AE8: j           L_00248B0C
    // 0x00248AEC: sh          $v1, 0x99A($a0)
    MEM_H(0X99A, ctx->r4) = ctx->r3;
        goto L_00248B0C;
    // 0x00248AEC: sh          $v1, 0x99A($a0)
    MEM_H(0X99A, ctx->r4) = ctx->r3;
L_00248AF0:
    // 0x00248AF0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x00248AF4: sb          $v0, 0x98A($a0)
    MEM_B(0X98A, ctx->r4) = ctx->r2;
    // 0x00248AF8: sb          $v0, 0x992($a0)
    MEM_B(0X992, ctx->r4) = ctx->r2;
    // 0x00248AFC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00248B00: sh          $v0, 0x99A($a0)
    MEM_H(0X99A, ctx->r4) = ctx->r2;
    // 0x00248B04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00248B08: sh          $v1, 0x998($a0)
    MEM_H(0X998, ctx->r4) = ctx->r3;
L_00248B0C:
    // 0x00248B0C: sh          $v0, 0x99C($a0)
    MEM_H(0X99C, ctx->r4) = ctx->r2;
    // 0x00248B10: sh          $v1, 0xB14($a0)
    MEM_H(0XB14, ctx->r4) = ctx->r3;
    // 0x00248B14: j           L_00248B58
    // 0x00248B18: sh          $v1, 0x996($a0)
    MEM_H(0X996, ctx->r4) = ctx->r3;
        goto L_00248B58;
    // 0x00248B18: sh          $v1, 0x996($a0)
    MEM_H(0X996, ctx->r4) = ctx->r3;
L_00248B1C:
    // 0x00248B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248B20: sb          $v0, 0x972($a0)
    MEM_B(0X972, ctx->r4) = ctx->r2;
    // 0x00248B24: sb          $v0, 0x974($a0)
    MEM_B(0X974, ctx->r4) = ctx->r2;
    // 0x00248B28: sb          $v0, 0x989($a0)
    MEM_B(0X989, ctx->r4) = ctx->r2;
    // 0x00248B2C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00248B30: sh          $v0, 0x934($a0)
    MEM_H(0X934, ctx->r4) = ctx->r2;
    // 0x00248B34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248B38: sh          $v0, 0x95E($a0)
    MEM_H(0X95E, ctx->r4) = ctx->r2;
    // 0x00248B3C: sh          $v0, 0x962($a0)
    MEM_H(0X962, ctx->r4) = ctx->r2;
    // 0x00248B40: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x00248B44: sh          $zero, 0xB14($a0)
    MEM_H(0XB14, ctx->r4) = 0;
    // 0x00248B48: sh          $zero, 0x996($a0)
    MEM_H(0X996, ctx->r4) = 0;
    // 0x00248B4C: sh          $zero, 0x998($a0)
    MEM_H(0X998, ctx->r4) = 0;
    // 0x00248B50: sh          $zero, 0x99A($a0)
    MEM_H(0X99A, ctx->r4) = 0;
    // 0x00248B54: sh          $v0, 0x99C($a0)
    MEM_H(0X99C, ctx->r4) = ctx->r2;
L_00248B58:
    // 0x00248B58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00248B5C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00248B60: beq         $v0, $zero, L_00248BA0
    if (ctx->r2 == 0) {
        // 0x00248B64: nop
    
            goto L_00248BA0;
    }
    // 0x00248B64: nop

    // 0x00248B68: lh          $v0, 0xB14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XB14);
    // 0x00248B6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00248B70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248B74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00248B78: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00248B7C: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x00248B80: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00248B84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00248B88: sw          $v1, 0x3F4($a0)
    MEM_W(0X3F4, ctx->r4) = ctx->r3;
    // 0x00248B8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248B90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00248B94: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00248B98: lw          $v0, 0x4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4C);
    // 0x00248B9C: sw          $v0, 0x4D0($a0)
    MEM_W(0X4D0, ctx->r4) = ctx->r2;
L_00248BA0:
    // 0x00248BA0: jr          $ra
    // 0x00248BA4: nop

    return;
    // 0x00248BA4: nop

;}
RECOMP_FUNC void func_00218248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218248: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x0021824C: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00218250: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00218254: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x00218258: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x0021825C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00218260: mflo        $a3
    ctx->r7 = lo;
    // 0x00218264: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x00218268: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021826C: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x00218270: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00218274: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00218278: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x0021827C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00218280: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00218284: beq         $a0, $zero, L_0021829C
    if (ctx->r4 == 0) {
        // 0x00218288: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0021829C;
    }
    // 0x00218288: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0021828C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x00218290: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00218294: sllv        $a1, $a1, $v0
    ctx->r5 = S32(ctx->r5 << (ctx->r2 & 31));
    // 0x00218298: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
L_0021829C:
    // 0x0021829C: sltiu       $v0, $a2, 0x20
    ctx->r2 = ctx->r6 < 0X20 ? 1 : 0;
    // 0x002182A0: beq         $v0, $zero, L_002182B4
    if (ctx->r2 == 0) {
        // 0x002182A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002182B4;
    }
    // 0x002182A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002182A8: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002182AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002182B0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_002182B4:
    // 0x002182B4: jr          $ra
    // 0x002182B8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x002182B8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00419260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419260: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419264: lb          $v1, -0x54FB($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X54FB);
    // 0x00419268: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0041926C: beq         $v0, $zero, L_00419314
    if (ctx->r2 == 0) {
            // 0x00419270: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    entry_00419314(rdram, ctx);
    return;
    }
    // 0x00419270: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00419274: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00419278: addu        $at, $at, $v0
    gpr jr_addend_00419280 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041927C: lw          $v0, 0xFE0($at)
    ctx->r2 = ADD32(ctx->r1, 0XFE0);
    // 0x00419280: jr          $v0
    // 0x00419284: nop

    switch (jr_addend_00419280 >> 2) {
        case 0: goto L_00419288; break;
        case 1: goto L_00419298; break;
        case 2: goto L_004192A8; break;
        case 3: goto L_004192B8; break;
        case 4: goto L_004192C8; break;
        case 5: goto L_004192D8; break;
        case 6: goto L_004192E8; break;
        case 7: goto L_004192F8; break;
        case 8: goto L_00419308; break;
        default: switch_error(__func__, 0x00419280, 0x800C0FE0);
    }
    // 0x00419284: nop

L_00419288:
    // 0x00419288: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041928C: addiu       $v0, $v0, 0x608C
    ctx->r2 = ADD32(ctx->r2, 0X608C);
    // 0x00419290: j           L_00419314
    // 0x00419294: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x00419294: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419298:
    // 0x00419298: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041929C: addiu       $v0, $v0, 0x60A4
    ctx->r2 = ADD32(ctx->r2, 0X60A4);
    // 0x004192A0: j           L_00419314
    // 0x004192A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192A8:
    // 0x004192A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192AC: addiu       $v0, $v0, 0x60BC
    ctx->r2 = ADD32(ctx->r2, 0X60BC);
    // 0x004192B0: j           L_00419314
    // 0x004192B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192B8:
    // 0x004192B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192BC: addiu       $v0, $v0, 0x60D4
    ctx->r2 = ADD32(ctx->r2, 0X60D4);
    // 0x004192C0: j           L_00419314
    // 0x004192C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192C8:
    // 0x004192C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192CC: addiu       $v0, $v0, 0x60EC
    ctx->r2 = ADD32(ctx->r2, 0X60EC);
    // 0x004192D0: j           L_00419314
    // 0x004192D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192D8:
    // 0x004192D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192DC: addiu       $v0, $v0, 0x6104
    ctx->r2 = ADD32(ctx->r2, 0X6104);
    // 0x004192E0: j           L_00419314
    // 0x004192E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192E8:
    // 0x004192E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192EC: addiu       $v0, $v0, 0x611C
    ctx->r2 = ADD32(ctx->r2, 0X611C);
    // 0x004192F0: j           L_00419314
    // 0x004192F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192F8:
    // 0x004192F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192FC: addiu       $v0, $v0, 0x6134
    ctx->r2 = ADD32(ctx->r2, 0X6134);
    // 0x00419300: j           L_00419314
    // 0x00419304: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x00419304: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419308:
    // 0x00419308: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041930C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041930C(rdram, ctx);
;}
RECOMP_FUNC void func_00260A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260A34: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00260A38: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x00260A3C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00260A40: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x00260A44: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00260A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00260A4C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00260A50: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00260A54: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x00260A58: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x00260A5C: jal         0x00246108
    // 0x00260A60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00260A60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00260A64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260A68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260A6C: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x00260A70: jal         0x0024599C
    // 0x00260A74: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x00260A74: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00260A78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260A7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260A80: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00260A84: jal         0x00260730
    // 0x00260A88: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00260730(rdram, ctx);
        goto after_2;
    // 0x00260A88: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00260A8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260A90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260A94: jal         0x0025D030
    // 0x00260A98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025D030(rdram, ctx);
        goto after_3;
    // 0x00260A98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00260A9C: beq         $v0, $zero, L_00260AD4
    if (ctx->r2 == 0) {
        // 0x00260AA0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00260AD4;
    }
    // 0x00260AA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260AA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260AA8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00260AAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00260AB0: jal         0x00243414
    // 0x00260AB4: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00260AB4: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
    after_4:
    // 0x00260AB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260ABC: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x00260AC0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x00260AC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260AC8: jal         0x0025EB50
    // 0x00260ACC: sb          $zero, 0x37($s1)
    MEM_B(0X37, ctx->r17) = 0;
    func_0025EB50(rdram, ctx);
        goto after_5;
    // 0x00260ACC: sb          $zero, 0x37($s1)
    MEM_B(0X37, ctx->r17) = 0;
    after_5:
    // 0x00260AD0: swc1        $f0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f0.u32l;
L_00260AD4:
    // 0x00260AD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260AD8: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00260ADC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00260AE0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00260AE4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x00260AE8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00260AEC: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x00260AF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260AF4: jal         0x0025EB50
    // 0x00260AF8: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    func_0025EB50(rdram, ctx);
        goto after_6;
    // 0x00260AF8: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    after_6:
    // 0x00260AFC: lwc1        $f1, 0x64($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X64);
    // 0x00260B00: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00260B04: nop

    // 0x00260B08: bc1f        L_00260B20
    if (!c1cs) {
        // 0x00260B0C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00260B20;
    }
    // 0x00260B0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00260B10: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    // 0x00260B14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260B18: jal         0x00243414
    // 0x00260B1C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_7;
    // 0x00260B1C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
L_00260B20:
    // 0x00260B20: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x00260B24: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x00260B28: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x00260B2C: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x00260B30: jr          $ra
    // 0x00260B34: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x00260B34: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_0026C764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C768: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C76C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026C770: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C774: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C778: jal         0x0022425C
    // 0x0026C77C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C77C: nop

    after_0:
    // 0x0026C780: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0026C784: beq         $a0, $zero, L_0026C79C
    if (ctx->r4 == 0) {
        // 0x0026C788: lui         $v1, 0xFFF7
        ctx->r3 = S32(0XFFF7 << 16);
            goto L_0026C79C;
    }
    // 0x0026C788: lui         $v1, 0xFFF7
    ctx->r3 = S32(0XFFF7 << 16);
    // 0x0026C78C: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0026C790: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0026C794: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026C798: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
L_0026C79C:
    // 0x0026C79C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C7A0: jr          $ra
    // 0x0026C7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256A8C: bne         $a2, $zero, L_00256AA0
    if (ctx->r6 != 0) {
            // 0x00256A90: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    func_00256AA0(rdram, ctx);
    return;
    }
    // 0x00256A90: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00256A94: lbu         $v0, 0x52C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52C);
    // 0x00256A98: jr          $ra
    // 0x00256A9C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    return;
    // 0x00256A9C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
;}
RECOMP_FUNC void func_0025FD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FD60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025FD64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025FD68: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025FD6C: beq         $v0, $zero, L_0025FD8C
    if (ctx->r2 == 0) {
        // 0x0025FD70: nop
    
            goto L_0025FD8C;
    }
    // 0x0025FD70: nop

    // 0x0025FD74: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0025FD78: beq         $v0, $zero, L_0025FD84
    if (ctx->r2 == 0) {
        // 0x0025FD7C: addiu       $a2, $zero, 0x3C
        ctx->r6 = ADD32(0, 0X3C);
            goto L_0025FD84;
    }
    // 0x0025FD7C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x0025FD80: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_0025FD84:
    // 0x0025FD84: jal         0x00243414
    // 0x0025FD88: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025FD88: nop

    after_0:
L_0025FD8C:
    // 0x0025FD8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025FD90: jr          $ra
    // 0x0025FD94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025FD94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026437C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00264380: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00264384: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00264388: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026438C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00264390: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00264394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00264398: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026439C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002643A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002643A4: jal         0x00220408
    // 0x002643A8: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x002643A8: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    after_0:
    // 0x002643AC: bne         $v0, $zero, L_002643D4
    if (ctx->r2 != 0) {
        // 0x002643B0: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_002643D4;
    }
    // 0x002643B0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002643B4: lui         $v0, 0xFFFE
    ctx->r2 = S32(0XFFFE << 16);
    // 0x002643B8: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x002643BC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002643C0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x002643C4: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
    // 0x002643C8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x002643CC: j           L_00264434
    // 0x002643D0: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
        goto L_00264434;
    // 0x002643D0: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
L_002643D4:
    // 0x002643D4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002643D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002643DC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x002643E0: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x002643E4: beq         $v0, $zero, L_00264400
    if (ctx->r2 == 0) {
        // 0x002643E8: nop
    
            goto L_00264400;
    }
    // 0x002643E8: nop

    // 0x002643EC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002643F0: beq         $v0, $zero, L_00264400
    if (ctx->r2 == 0) {
        // 0x002643F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00264400;
    }
    // 0x002643F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002643F8: jalr        $v0
    // 0x002643FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x002643FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_00264400:
    // 0x00264400: lwc1        $f0, 0x48($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X48);
    // 0x00264404: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00264408: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0026440C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00264410: lwc1        $f1, 0x124($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X124);
    // 0x00264414: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00264418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026441C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00264420: jal         0x00263A20
    // 0x00264424: swc1        $f1, 0x124($s1)
    MEM_W(0X124, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_00263A20(rdram, ctx);
        goto after_2;
    // 0x00264424: swc1        $f1, 0x124($s1)
    MEM_W(0X124, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x00264428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026442C: jal         0x00263DD8
    // 0x00264430: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00263DD8(rdram, ctx);
        goto after_3;
    // 0x00264430: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_00264434:
    // 0x00264434: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00264438: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026443C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00264440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00264444: jr          $ra
    // 0x00264448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00264448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00440374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00440378: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044037C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00440380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00440384: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00440388: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044038C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00440390: beq         $v0, $zero, L_004403DC
    if (ctx->r2 == 0) {
        // 0x00440394: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_004403DC;
    }
    // 0x00440394: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00440398: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0044039C: addiu       $s0, $s0, -0x624
    ctx->r16 = ADD32(ctx->r16, -0X624);
    // 0x004403A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004403A4: lwc1        $f12, 0x50C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X50C);
    // 0x004403A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004403AC: lwc1        $f14, 0x510($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X510);
    // 0x004403B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004403B4: jal         0x002119FC
    // 0x004403B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x004403B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004403BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004403C0: lwc1        $f1, 0x514($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X514);
    // 0x004403C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004403C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004403CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004403D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004403D4: jal         0x00243414
    // 0x004403D8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x004403D8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    after_1:
L_004403DC:
    // 0x004403DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004403E0: lw          $v0, -0x624($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X624);
    // 0x004403E4: bne         $v0, $zero, L_004403F8
    if (ctx->r2 != 0) {
        // 0x004403E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004403F8;
    }
    // 0x004403E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004403EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004403F0: jal         0x00243414
    // 0x004403F4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004403F4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
L_004403F8:
    // 0x004403F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004403FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00440400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00440404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00440408: jr          $ra
    // 0x0044040C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044040C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00293B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293B1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00293B20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00293B24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00293B28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00293B2C: addiu       $s1, $s0, 0x28
    ctx->r17 = ADD32(ctx->r16, 0X28);
    // 0x00293B30: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00293B34: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x00293B38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
L_00293B3C:
    // 0x00293B3C: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x00293B40: bne         $v0, $s2, L_00293B64
    if (ctx->r2 != ctx->r18) {
        // 0x00293B44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00293B64;
    }
    // 0x00293B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00293B48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x00293B4C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293B50: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x00293B54: jal         0x00291034
    // 0x00293B58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293B58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00293B5C: j           L_00293B70
    // 0x00293B60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_00293B70;
    // 0x00293B60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_00293B64:
    // 0x00293B64: jal         0x002936E0
    // 0x00293B68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002936E0(rdram, ctx);
        goto after_1;
    // 0x00293B68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00293B6C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_00293B70:
    // 0x00293B70: jal         0x00290F9C
    // 0x00293B74: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    func_00290F9C(rdram, ctx);
        goto after_2;
    // 0x00293B74: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x00293B78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00293B7C: beq         $a0, $zero, L_00293B3C
    if (ctx->r4 == 0) {
        // 0x00293B80: sw          $a0, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->r4;
            goto L_00293B3C;
    }
    // 0x00293B80: sw          $a0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r4;
    // 0x00293B84: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x00293B88: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00293B8C: sw          $v1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r3;
    // 0x00293B90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00293B94: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00293B98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00293B9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00293BA0: jr          $ra
    // 0x00293BA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00293BA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00291034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291034: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00291038: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029103C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00291040: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00291044: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00291048: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029104C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00291050: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00291054: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00291058: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0029105C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00291060: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00291064: jal         0x0029E230
    // 0x00291068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x00291068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0029106C: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x00291070: bne         $s0, $zero, L_0029109C
    if (ctx->r16 != 0) {
        // 0x00291074: addu        $s5, $v0, $zero
        ctx->r21 = ADD32(ctx->r2, 0);
            goto L_0029109C;
    }
    // 0x00291074: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00291078: j           L_00291114
    // 0x0029107C: nop

        goto L_00291114;
    // 0x0029107C: nop

L_00291080:
    // 0x00291080: sw          $s1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r17;
    // 0x00291084: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x00291088: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x0029108C: jal         0x002933E0
    // 0x00291090: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x00291090: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    after_1:
    // 0x00291094: j           L_00291114
    // 0x00291098: nop

        goto L_00291114;
    // 0x00291098: nop

L_0029109C:
    // 0x0029109C: jal         0x002933B0
    // 0x002910A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_2;
    // 0x002910A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002910A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002910A8: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x002910AC: jal         0x00291270
    // 0x002910B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00291270(rdram, ctx);
        goto after_3;
    // 0x002910B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x002910B4: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x002910B8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002910BC: beql        $s1, $v0, L_002910C4
    if (ctx->r17 == ctx->r2) {
        // 0x002910C0: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_002910C4;
    }
    goto skip_0;
    // 0x002910C0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    skip_0:
L_002910C4:
    // 0x002910C4: addiu       $a1, $s4, 0x8
    ctx->r5 = ADD32(ctx->r20, 0X8);
    // 0x002910C8: beq         $a1, $zero, L_00291114
    if (ctx->r5 == 0) {
        // 0x002910CC: nop
    
            goto L_00291114;
    }
    // 0x002910CC: nop

L_002910D0:
    // 0x002910D0: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x002910D4: bne         $a2, $zero, L_002910F8
    if (ctx->r6 != 0) {
        // 0x002910D8: nop
    
            goto L_002910F8;
    }
    // 0x002910D8: nop

    // 0x002910DC: beql        $s2, $zero, L_002910E8
    if (ctx->r18 == 0) {
        // 0x002910E0: sw          $s1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r17;
            goto L_002910E8;
    }
    goto skip_1;
    // 0x002910E0: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
    skip_1:
    // 0x002910E4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_002910E8:
    // 0x002910E8: jal         0x002933E0
    // 0x002910EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933E0(rdram, ctx);
        goto after_4;
    // 0x002910EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002910F0: j           L_00291114
    // 0x002910F4: nop

        goto L_00291114;
    // 0x002910F4: nop

L_002910F8:
    // 0x002910F8: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x002910FC: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00291100: bne         $v0, $zero, L_00291080
    if (ctx->r2 != 0) {
        // 0x00291104: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00291080;
    }
    // 0x00291104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00291108: subu        $s1, $s1, $v1
    ctx->r17 = SUB32(ctx->r17, ctx->r3);
    // 0x0029110C: j           L_002910D0
    // 0x00291110: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
        goto L_002910D0;
    // 0x00291110: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
L_00291114:
    // 0x00291114: jal         0x0029E230
    // 0x00291118: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_0029E230(rdram, ctx);
        goto after_5;
    // 0x00291118: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_5:
    // 0x0029111C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00291120: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00291124: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00291128: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029112C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00291130: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00291134: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00291138: jr          $ra
    // 0x0029113C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029113C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00220260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00220264: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00220268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0022026C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00220270: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00220274: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00220278: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0022027C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00220280: bne         $v0, $zero, L_002202E0
    if (ctx->r2 != 0) {
        // 0x00220284: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_002202E0;
    }
    // 0x00220284: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00220288: lw          $a2, 0xE0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XE0);
    // 0x0022028C: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x00220290: bne         $v0, $zero, L_002202E4
    if (ctx->r2 != 0) {
        // 0x00220294: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_002202E4;
    }
    // 0x00220294: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00220298: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x0022029C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002202A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002202A4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002202A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002202AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002202B0: addiu       $v0, $v0, -0x288
    ctx->r2 = ADD32(ctx->r2, -0X288);
    // 0x002202B4: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002202B8: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x002202BC: bne         $v0, $zero, L_002202E8
    if (ctx->r2 != 0) {
        // 0x002202C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002202E8;
    }
    // 0x002202C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002202C4: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
    // 0x002202C8: lui         $v0, 0xCA45
    ctx->r2 = S32(0XCA45 << 16);
    // 0x002202CC: ori         $v0, $v0, 0x87E7
    ctx->r2 = ctx->r2 | 0X87E7;
    // 0x002202D0: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002202D4: mfhi        $a3
    ctx->r7 = hi;
    // 0x002202D8: j           L_002202E4
    // 0x002202DC: srl         $s1, $a3, 9
    ctx->r17 = S32(U32(ctx->r7) >> 9);
        goto L_002202E4;
    // 0x002202DC: srl         $s1, $a3, 9
    ctx->r17 = S32(U32(ctx->r7) >> 9);
L_002202E0:
    // 0x002202E0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_002202E4:
    // 0x002202E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002202E8:
    // 0x002202E8: beq         $s1, $v0, L_002203F0
    if (ctx->r17 == ctx->r2) {
        // 0x002202EC: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_002203F0;
    }
    // 0x002202EC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x002202F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002202F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002202F8: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x002202FC: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00220300: beq         $v0, $v1, L_002203F0
    if (ctx->r2 == ctx->r3) {
        // 0x00220304: sllv        $v0, $s1, $v1
        ctx->r2 = S32(ctx->r17 << (ctx->r3 & 31));
            goto L_002203F0;
    }
    // 0x00220304: sllv        $v0, $s1, $v1
    ctx->r2 = S32(ctx->r17 << (ctx->r3 & 31));
    // 0x00220308: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0022030C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00220310: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00220314: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x00220318: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0022031C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00220320: lw          $v1, 0x14($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X14);
    // 0x00220324: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00220328: addiu       $v0, $v0, -0x9
    ctx->r2 = ADD32(ctx->r2, -0X9);
    // 0x0022032C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00220330: beq         $v0, $zero, L_00220348
    if (ctx->r2 == 0) {
        // 0x00220334: nop
    
            goto L_00220348;
    }
    // 0x00220334: nop

    // 0x00220338: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0022033C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00220340: bne         $v0, $zero, L_002203F0
    if (ctx->r2 != 0) {
        // 0x00220344: nop
    
            goto L_002203F0;
    }
    // 0x00220344: nop

L_00220348:
    // 0x00220348: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x0022034C: jal         0x002017D4
    // 0x00220350: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00220350: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00220354: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00220358: jal         0x002017D4
    // 0x0022035C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0022035C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00220360: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00220364: jal         0x002017D4
    // 0x00220368: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00220368: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0022036C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00220370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220374: jal         0x002017D4
    // 0x00220378: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00220378: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0022037C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220380: jal         0x00201818
    // 0x00220384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00220384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00220388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022038C: jal         0x002017D4
    // 0x00220390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00220390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00220394: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00220398: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x0022039C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002203A0: beq         $s2, $zero, L_002203CC
    if (ctx->r18 == 0) {
        // 0x002203A4: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002203CC;
    }
    // 0x002203A4: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x002203A8: bgez        $s1, L_002203B4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x002203AC: addu        $v1, $s1, $zero
        ctx->r3 = ADD32(ctx->r17, 0);
            goto L_002203B4;
    }
    // 0x002203AC: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x002203B0: addiu       $v1, $s1, 0x7
    ctx->r3 = ADD32(ctx->r17, 0X7);
L_002203B4:
    // 0x002203B4: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x002203B8: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x002203BC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002203C0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002203C4: j           L_002203F0
    // 0x002203C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_002203F0;
    // 0x002203C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_002203CC:
    // 0x002203CC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x002203D0: bltzl       $v0, L_002203D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x002203D4: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_002203D8;
    }
    goto skip_0;
    // 0x002203D4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_0:
L_002203D8:
    // 0x002203D8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x002203DC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002203E0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x002203E4: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x002203E8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002203EC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_002203F0:
    // 0x002203F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002203F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002203F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002203FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00220400: jr          $ra
    // 0x00220404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00220404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00210E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210E64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00210E68: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00210E6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00210E70: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x00210E74: jal         0x00210EF0
    // 0x00210E78: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x00210E78: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x00210E7C: jal         0x00210EF0
    // 0x00210E80: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_00210EF0(rdram, ctx);
        goto after_1;
    // 0x00210E80: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x00210E84: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00210E88: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00210E8C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x00210E90: nop

    // 0x00210E94: bc1f        L_00210EB4
    if (!c1cs) {
        // 0x00210E98: nop
    
            goto L_00210EB4;
    }
    // 0x00210E98: nop

    // 0x00210E9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210EA0: lwc1        $f0, 0x5638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5638);
    // 0x00210EA4: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00210EA8: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x00210EAC: j           L_00210EC8
    // 0x00210EB0: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
        goto L_00210EC8;
    // 0x00210EB0: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
L_00210EB4:
    // 0x00210EB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210EB8: lwc1        $f0, 0x563C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X563C);
    // 0x00210EBC: sub.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00210EC0: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x00210EC4: sub.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f3.fl;
L_00210EC8:
    // 0x00210EC8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00210ECC: nop

    // 0x00210ED0: bc1tl       L_00210ED8
    if (c1cs) {
        // 0x00210ED4: swc1        $f3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_00210ED8;
    }
    goto skip_0;
    // 0x00210ED4: swc1        $f3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    skip_0:
L_00210ED8:
    // 0x00210ED8: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00210EDC: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00210EE0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00210EE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00210EE8: jr          $ra
    // 0x00210EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00210EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
