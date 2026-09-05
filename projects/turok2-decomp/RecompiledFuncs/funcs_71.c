#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00265808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026580C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00265810: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265814: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00265818: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026581C: jal         0x00220408
    // 0x00265820: nop

    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00265820: nop

    after_0:
    // 0x00265824: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00265828: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026582C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00265830: jr          $ra
    // 0x00265834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041CAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CAB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041CAB4: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041CAB8: beq         $v0, $zero, L_0041CAD0
    if (ctx->r2 == 0) {
        // 0x0041CABC: nop
    
            goto L_0041CAD0;
    }
    // 0x0041CABC: nop

    // 0x0041CAC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041CAC4: addiu       $v0, $v0, 0x5C6C
    ctx->r2 = ADD32(ctx->r2, 0X5C6C);
    // 0x0041CAC8: j           L_0041CADC
    // 0x0041CACC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041CADC;
    // 0x0041CACC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041CAD0:
    // 0x0041CAD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041CAD4: addiu       $v0, $v0, 0x5C60
    ctx->r2 = ADD32(ctx->r2, 0X5C60);
    // 0x0041CAD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041CADC:
    // 0x0041CADC: jr          $ra
    // 0x0041CAE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041CAE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026A5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026A5A0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0026A5A4: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0026A5A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026A5AC: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x0026A5B0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026A5B4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0026A5B8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0026A5BC: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x0026A5C0: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x0026A5C4: sdc1        $f21, 0x90($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X90, ctx->r29);
    // 0x0026A5C8: sdc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X88, ctx->r29);
    // 0x0026A5CC: bne         $s0, $zero, L_0026A5FC
    if (ctx->r16 != 0) {
        // 0x0026A5D0: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_0026A5FC;
    }
    // 0x0026A5D0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0026A5D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A5D8: lwc1        $f0, 0x7F9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F9C);
    // 0x0026A5DC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026A5E0: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0026A5E4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026A5E8: sw          $zero, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = 0;
    // 0x0026A5EC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026A5F0: swc1        $f0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->f0.u32l;
    // 0x0026A5F4: j           L_0026A644
    // 0x0026A5F8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
        goto L_0026A644;
    // 0x0026A5F8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0026A5FC:
    // 0x0026A5FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026A600: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026A604: beq         $s0, $v0, L_0026A644
    if (ctx->r16 == ctx->r2) {
        // 0x0026A608: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0026A644;
    }
    // 0x0026A608: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026A60C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026A610: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026A614: jal         0x0020EF2C
    // 0x0026A618: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026A618: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x0026A61C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026A620: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026A624: jal         0x0020EF2C
    // 0x0026A628: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026A628: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x0026A62C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026A630: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026A634: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x0026A638: jal         0x0020EFDC
    // 0x0026A63C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026A63C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x0026A640: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0026A644:
    // 0x0026A644: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026A648: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026A64C: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026A650: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0026A654: addiu       $t2, $t2, 0x2020
    ctx->r10 = ADD32(ctx->r10, 0X2020);
    // 0x0026A658: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x0026A65C: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0026A660: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x0026A664: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0026A668: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0026A66C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0026A670: jal         0x0020EF2C
    // 0x0026A674: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0026A674: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0026A678: beq         $s0, $zero, L_0026A6A4
    if (ctx->r16 == 0) {
        // 0x0026A67C: nop
    
            goto L_0026A6A4;
    }
    // 0x0026A67C: nop

    // 0x0026A680: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A684: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0026A688: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0026A68C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0026A690: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x0026A694: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0026A698: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0026A69C: j           L_0026A6B4
    // 0x0026A6A0: nop

        goto L_0026A6B4;
    // 0x0026A6A0: nop

L_0026A6A4:
    // 0x0026A6A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A6A8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x0026A6AC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0026A6B0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_0026A6B4:
    // 0x0026A6B4: lwc1        $f3, 0x10($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026A6B8: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026A6BC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026A6C0: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026A6C4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0026A6C8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026A6CC: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x0026A6D0: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026A6D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A6D8: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0026A6DC: add.s       $f20, $f3, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0026A6E0: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0026A6E4: c.le.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl <= ctx->f20.fl;
    // 0x0026A6E8: nop

    // 0x0026A6EC: bc1f        L_0026A704
    if (!c1cs) {
        // 0x0026A6F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026A704;
    }
    // 0x0026A6F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026A6F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A6F8: lwc1        $f0, 0x7FA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FA0);
    // 0x0026A6FC: j           L_0026A774
    // 0x0026A700: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
        goto L_0026A774;
    // 0x0026A700: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
L_0026A704:
    // 0x0026A704: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x0026A708: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026A70C: jal         0x0020EF2C
    // 0x0026A710: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0026A710: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x0026A714: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026A718: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0026A71C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A720: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A724: lwc1        $f1, 0x44($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x0026A728: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0026A72C: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0026A730: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026A734: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026A738: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0026A73C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026A740: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026A744: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0026A748: div.s       $f3, $f0, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0026A74C: c.lt.s      $f21, $f3
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f21.fl < ctx->f3.fl;
    // 0x0026A750: nop

    // 0x0026A754: bc1f        L_0026A774
    if (!c1cs) {
        // 0x0026A758: swc1        $f3, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->f_odd[(3 - 1) * 2];
            goto L_0026A774;
    }
    // 0x0026A758: swc1        $f3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026A75C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A760: lwc1        $f0, 0x7FA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FA4);
    // 0x0026A764: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0026A768: nop

    // 0x0026A76C: bc1tl       L_0026A774
    if (c1cs) {
        // 0x0026A770: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026A774;
    }
    goto skip_0;
    // 0x0026A770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_0026A774:
    // 0x0026A774: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x0026A778: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x0026A77C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x0026A780: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0026A784: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0026A788: ldc1        $f21, 0x90($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X90);
    // 0x0026A78C: ldc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X88);
    // 0x0026A790: jr          $ra
    // 0x0026A794: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0026A794: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_00271B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271B20: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x00271B24: lhu         $v1, 0xE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE);
    // 0x00271B28: blez        $v0, L_00271BA0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00271B2C: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_00271BA0;
    }
    // 0x00271B2C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00271B30: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
L_00271B34:
    // 0x00271B34: addiu       $a3, $t1, 0x1
    ctx->r7 = ADD32(ctx->r9, 0X1);
    // 0x00271B38: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x00271B3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00271B40: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00271B44: beql        $v0, $zero, L_00271B8C
    if (ctx->r2 == 0) {
        // 0x00271B48: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_00271B8C;
    }
    goto skip_0;
    // 0x00271B48: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_0:
    // 0x00271B4C: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
    // 0x00271B50: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00271B54: addu        $a2, $v0, $a0
    ctx->r6 = ADD32(ctx->r2, ctx->r4);
L_00271B58:
    // 0x00271B58: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x00271B5C: lw          $a1, 0x10($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X10);
    // 0x00271B60: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x00271B64: beq         $v0, $zero, L_00271B74
    if (ctx->r2 == 0) {
        // 0x00271B68: nop
    
            goto L_00271B74;
    }
    // 0x00271B68: nop

    // 0x00271B6C: sw          $v1, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r3;
    // 0x00271B70: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
L_00271B74:
    // 0x00271B74: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x00271B78: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00271B7C: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00271B80: bne         $v0, $zero, L_00271B58
    if (ctx->r2 != 0) {
        // 0x00271B84: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_00271B58;
    }
    // 0x00271B84: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x00271B88: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_00271B8C:
    // 0x00271B8C: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x00271B90: lhu         $v1, 0xE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE);
    // 0x00271B94: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00271B98: bne         $v0, $zero, L_00271B34
    if (ctx->r2 != 0) {
        // 0x00271B9C: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_00271B34;
    }
    // 0x00271B9C: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
L_00271BA0:
    // 0x00271BA0: jr          $ra
    // 0x00271BA4: nop

    return;
    // 0x00271BA4: nop

;}
RECOMP_FUNC void func_00454614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B644:
    // 0x00454614: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B678:
    // 0x00454618: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0045461C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00454620: beq         $v0, $zero, L_00454634
    if (ctx->r2 == 0) {
        // 0x00454624: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454634;
    }
    // 0x00454624: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454628: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045462C: j           L_0041B644
    // 0x00454630: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B644(rdram, ctx);
    return;
    // 0x00454630: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454634:
    // 0x00454634: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454638: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045463C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454640: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454644: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454648: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045464C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454650: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00454654: beq         $v0, $zero, L_0045466C
    if (ctx->r2 == 0) {
        // 0x00454658: nop
    
            goto L_0045466C;
    }
    // 0x00454658: nop

    // 0x0045465C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454660: addiu       $v0, $v0, 0x59A4
    ctx->r2 = ADD32(ctx->r2, 0X59A4);
    // 0x00454664: j           L_0041B678
    // 0x00454668: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B678(rdram, ctx);
    return;
    // 0x00454668: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045466C:
    // 0x0045466C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454670: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x00454674: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454678: jr          $ra
    // 0x0045467C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045467C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042AA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AA80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042AA84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0042AA88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042AA8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042AA90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042AA94: addiu       $a1, $a1, -0x4F30
    ctx->r5 = ADD32(ctx->r5, -0X4F30);
    // 0x0042AA98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_0042AA9C:
    // 0x0042AA9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AAA0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042AAA4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042AAA8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0042AAAC: lbu         $v0, 0xD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XD);
    // 0x0042AAB0: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0042AAB4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0042AAB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042AABC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0042AAC0: sb          $v0, -0x4F2C($at)
    MEM_B(-0X4F2C, ctx->r1) = ctx->r2;
    // 0x0042AAC4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AAC8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042AACC: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042AAD0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0042AAD4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x0042AAD8: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x0042AADC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042AAE0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0042AAE4: sb          $v0, -0x4F24($at)
    MEM_B(-0X4F24, ctx->r1) = ctx->r2;
    // 0x0042AAE8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AAEC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042AAF0: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042AAF4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0042AAF8: lbu         $v0, 0x11($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X11);
    // 0x0042AAFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042AB00: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0042AB04: sb          $v0, -0x4F20($at)
    MEM_B(-0X4F20, ctx->r1) = ctx->r2;
    // 0x0042AB08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042AB0C: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x0042AB10: bne         $v0, $zero, L_0042AA9C
    if (ctx->r2 != 0) {
        // 0x0042AB14: nop
    
            goto L_0042AA9C;
    }
    // 0x0042AB14: nop

    // 0x0042AB18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AB1C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042AB20: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042AB24: lb          $v0, 0x11($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X11);
    // 0x0042AB28: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x0042AB2C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042AB2C(rdram, ctx);
;}
RECOMP_FUNC void func_0029B170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B170: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029B174: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0029B178: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029B17C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029B180: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029B184: jal         0x0029DFF0
    // 0x0029B188: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029B188: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0029B18C: jal         0x0029DFC0
    // 0x0029B190: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_0029DFC0(rdram, ctx);
        goto after_1;
    // 0x0029B190: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0029B194: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029B198: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0029B19C: lw          $v1, 0x2A20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2A20);
    // 0x0029B1A0: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x0029B1A4: lw          $s2, 0x2A28($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X2A28);
    // 0x0029B1A8: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0029B1AC: lw          $s3, 0x2A2C($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X2A2C);
    // 0x0029B1B0: jal         0x0029E010
    // 0x0029B1B4: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x0029B1B4: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    after_2:
    // 0x0029B1B8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0029B1BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0029B1C0: addu        $v1, $s3, $s1
    ctx->r3 = ADD32(ctx->r19, ctx->r17);
    // 0x0029B1C4: sltu        $a0, $v1, $s1
    ctx->r4 = ctx->r3 < ctx->r17 ? 1 : 0;
    // 0x0029B1C8: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x0029B1CC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0029B1D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029B1D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029B1D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029B1DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029B1E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029B1E4: jr          $ra
    // 0x0029B1E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029B1E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00262808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026280C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00262810: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00262814: beq         $v0, $zero, L_00262824
    if (ctx->r2 == 0) {
        // 0x00262818: nop
    
            goto L_00262824;
    }
    // 0x00262818: nop

    // 0x0026281C: jal         0x00243414
    // 0x00262820: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00262820: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    after_0:
L_00262824:
    // 0x00262824: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00262828: jr          $ra
    // 0x0026282C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026282C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423964: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423968: lw          $v0, 0x9A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A4);
    // 0x0042396C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00423970: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00423978: bne         $v0, $zero, L_00423A2C
    if (ctx->r2 != 0) {
        // 0x0042397C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00423A2C;
    }
    // 0x0042397C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00423980: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423984: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00423988: beq         $v0, $zero, L_004239A0
    if (ctx->r2 == 0) {
        // 0x0042398C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004239A0;
    }
    // 0x0042398C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00423990: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00423994: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x00423998: j           L_004239AC
    // 0x0042399C: nop

        goto L_004239AC;
    // 0x0042399C: nop

L_004239A0:
    // 0x004239A0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004239A4: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x004239A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004239AC:
    // 0x004239AC: beq         $v1, $v0, L_00423A2C
    if (ctx->r3 == ctx->r2) {
        // 0x004239B0: nop
    
            goto L_00423A2C;
    }
    // 0x004239B0: nop

    // 0x004239B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004239B8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004239BC: beq         $v0, $zero, L_004239D4
    if (ctx->r2 == 0) {
        // 0x004239C0: nop
    
            goto L_004239D4;
    }
    // 0x004239C0: nop

    // 0x004239C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004239C8: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004239CC: j           L_004239DC
    // 0x004239D0: nop

        goto L_004239DC;
    // 0x004239D0: nop

L_004239D4:
    // 0x004239D4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004239D8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_004239DC:
    // 0x004239DC: jal         0x0028591C
    // 0x004239E0: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x004239E0: nop

    after_0:
    // 0x004239E4: beq         $v0, $zero, L_00423A2C
    if (ctx->r2 == 0) {
        // 0x004239E8: nop
    
            goto L_00423A2C;
    }
    // 0x004239E8: nop

    // 0x004239EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004239F0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004239F4: beq         $v0, $zero, L_00423A0C
    if (ctx->r2 == 0) {
        // 0x004239F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00423A0C;
    }
    // 0x004239F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004239FC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423A00: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00423A04: j           L_00423A14
    // 0x00423A08: nop

        goto L_00423A14;
    // 0x00423A08: nop

L_00423A0C:
    // 0x00423A0C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423A10: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00423A14:
    // 0x00423A14: jal         0x0041DD90
    // 0x00423A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00423A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00423A1C: beq         $v0, $zero, L_00423A2C
    if (ctx->r2 == 0) {
        // 0x00423A20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423A2C;
    }
    // 0x00423A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423A24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A28: sw          $v0, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r2;
L_00423A2C:
    // 0x00423A2C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423A30: lw          $v0, 0x9A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A4);
    // 0x00423A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00423A38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423A3C: jr          $ra
    // 0x00423A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024599C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024599C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002459A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002459A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002459A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002459AC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002459B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002459B4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002459B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002459BC: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x002459C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002459C4: jal         0x0020EF2C
    // 0x002459C8: addiu       $a2, $s2, 0x48
    ctx->r6 = ADD32(ctx->r18, 0X48);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x002459C8: addiu       $a2, $s2, 0x48
    ctx->r6 = ADD32(ctx->r18, 0X48);
    after_0:
    // 0x002459CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002459D0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x002459D4: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x002459D8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x002459DC: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x002459E0: sw          $a3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r7;
    // 0x002459E4: jal         0x0020F040
    // 0x002459E8: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x002459E8: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_1:
    // 0x002459EC: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x002459F0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002459F4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x002459F8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002459FC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00245A00: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00245A04: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245A08: jal         0x00298470
    // 0x00245A0C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x00245A0C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_2:
    // 0x00245A10: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x00245A14: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00245A18: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x00245A1C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00245A20: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00245A24: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x00245A28: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00245A2C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00245A30: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x00245A34: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x00245A38: sw          $v1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r3;
    // 0x00245A3C: sw          $a3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r7;
    // 0x00245A40: jal         0x0020F040
    // 0x00245A44: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x00245A44: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x00245A48: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00245A4C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00245A50: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00245A54: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00245A58: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00245A5C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00245A60: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245A64: jal         0x00298470
    // 0x00245A68: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00245A68: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_4:
    // 0x00245A6C: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x00245A70: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245A74: lwc1        $f1, 0x60($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X60);
    // 0x00245A78: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00245A7C: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x00245A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00245A84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00245A88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00245A8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00245A90: jr          $ra
    // 0x00245A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00245A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002932BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002932BC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002932C0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x002932C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002932C8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x002932CC: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x002932D0: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x002932D4: beq         $v0, $zero, L_00293308
    if (ctx->r2 == 0) {
        // 0x002932D8: nop
    
            goto L_00293308;
    }
    // 0x002932D8: nop

    // 0x002932DC: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
L_002932E0:
    // 0x002932E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002932E4: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x002932E8: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x002932EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002932F0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x002932F4: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x002932F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002932FC: andi        $v0, $a1, 0x80
    ctx->r2 = ctx->r5 & 0X80;
    // 0x00293300: bne         $v0, $zero, L_002932E0
    if (ctx->r2 != 0) {
        // 0x00293304: nop
    
            goto L_002932E0;
    }
    // 0x00293304: nop

L_00293308:
    // 0x00293308: jr          $ra
    // 0x0029330C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0029330C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0040DC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DC00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040DC04: lwc1        $f12, 0x900($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X900);
    // 0x0040DC08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040DC0C: lwc1        $f14, 0x904($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X904);
    // 0x0040DC10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DC14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040DC18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040DC1C: jal         0x002119FC
    // 0x0040DC20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0040DC20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0040DC24: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x0040DC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040DC2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DC30: jr          $ra
    // 0x0040DC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B190: jr          $ra
    // 0x0041B194: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    return;
    // 0x0041B194: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
;}
RECOMP_FUNC void func_00415508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00415508: beq         $v0, $zero, L_004156D8
    if (ctx->r2 == 0) {
            // 0x0041550C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004156D8(rdram, ctx);
    return;
    }
    // 0x0041550C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00415510: bltz        $v1, L_004156D8
    if (SIGNED(ctx->r3) < 0) {
            // 0x00415514: nop

    func_004156D8(rdram, ctx);
    return;
    }
    // 0x00415514: nop

    // 0x00415518: beq         $s4, $zero, L_00415524
    if (ctx->r20 == 0) {
        // 0x0041551C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00415524;
    }
    // 0x0041551C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00415520: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
L_00415524:
    // 0x00415524: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00415528: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0041552C: bne         $v0, $zero, L_004156D8
    if (ctx->r2 != 0) {
            // 0x00415530: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004156D8(rdram, ctx);
    return;
    }
    // 0x00415530: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00415534: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x00415538: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041553C: bne         $v1, $v0, L_004155AC
    if (ctx->r3 != ctx->r2) {
            // 0x00415540: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_004155AC(rdram, ctx);
    return;
    }
    // 0x00415540: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00415544: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00415548: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041554C: lw          $v1, 0xB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB0);
    // 0x00415550: ori         $v0, $v0, 0x202
    ctx->r2 = ctx->r2 | 0X202;
    // 0x00415554: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00415558: beq         $v0, $zero, L_0041557C
    if (ctx->r2 == 0) {
        // 0x0041555C: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_0041557C;
    }
    // 0x0041555C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x00415560: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00415564: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00415568: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0041556C: bgez        $v0, L_004155AC
    if (SIGNED(ctx->r2) >= 0) {
            // 0x00415570: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    func_004155AC(rdram, ctx);
    return;
    }
    // 0x00415570: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x00415574: j           L_004155AC
    // 0x00415578: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    func_004155AC(rdram, ctx);
    return;
    // 0x00415578: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_0041557C:
    // 0x0041557C: ori         $v0, $v0, 0x101
    ctx->r2 = ctx->r2 | 0X101;
    // 0x00415580: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00415584: beq         $v0, $zero, L_004155AC
    if (ctx->r2 == 0) {
            // 0x00415588: nop

    func_004155AC(rdram, ctx);
    return;
    }
    // 0x00415588: nop

    // 0x0041558C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00415590: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x00415594: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x00415598: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x0041559C: bne         $v0, $zero, L_004155AC
    if (ctx->r2 != 0) {
            // 0x004155A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_004155AC(rdram, ctx);
    return;
    }
    // 0x004155A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004155A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004155A8: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x004155AC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004155AC(rdram, ctx);
;}
RECOMP_FUNC void func_0027BC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BC60: jr          $ra
    // 0x0027BC64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0027BC64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026E4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E4A4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0026E4A8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0026E4AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0026E4B0: jr          $ra
    // 0x0026E4B4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0026E4B4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00256324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256324: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00256328: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0025632C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00256330: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00256334: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00256338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025633C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00256340: jal         0x00268A2C
    // 0x00256344: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    func_00268A2C(rdram, ctx);
        goto after_0;
    // 0x00256344: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    after_0:
    // 0x00256348: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0025634C: sw          $zero, 0xB98($s1)
    MEM_W(0XB98, ctx->r17) = 0;
    // 0x00256350: sw          $s2, 0xBA0($s1)
    MEM_W(0XBA0, ctx->r17) = ctx->r18;
    // 0x00256354: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00256358: swc1        $f0, 0xBA4($s1)
    MEM_W(0XBA4, ctx->r17) = ctx->f0.u32l;
    // 0x0025635C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00256360: swc1        $f0, 0xBA8($s1)
    MEM_W(0XBA8, ctx->r17) = ctx->f0.u32l;
    // 0x00256364: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00256368: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0025636C: swc1        $f0, 0xBAC($s1)
    MEM_W(0XBAC, ctx->r17) = ctx->f0.u32l;
    // 0x00256370: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x00256374: addiu       $a2, $s1, 0xBA4
    ctx->r6 = ADD32(ctx->r17, 0XBA4);
    // 0x00256378: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0025637C: lwc1        $f0, 0x38($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X38);
    // 0x00256380: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00256384: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00256388: lwc1        $f0, 0x3C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X3C);
    // 0x0025638C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256390: jal         0x0020EF2C
    // 0x00256394: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00256394: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00256398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025639C: jal         0x0020EAA0
    // 0x002563A0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0020EAA0(rdram, ctx);
        goto after_2;
    // 0x002563A0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x002563A4: beq         $s2, $zero, L_002563BC
    if (ctx->r18 == 0) {
        // 0x002563A8: swc1        $f0, 0xB9C($s1)
        MEM_W(0XB9C, ctx->r17) = ctx->f0.u32l;
            goto L_002563BC;
    }
    // 0x002563A8: swc1        $f0, 0xB9C($s1)
    MEM_W(0XB9C, ctx->r17) = ctx->f0.u32l;
    // 0x002563AC: lhu         $v0, 0x54($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X54);
    // 0x002563B0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002563B4: bne         $v0, $zero, L_002563C4
    if (ctx->r2 != 0) {
        // 0x002563B8: nop
    
            goto L_002563C4;
    }
    // 0x002563B8: nop

L_002563BC:
    // 0x002563BC: jal         0x00275624
    // 0x002563C0: addiu       $a0, $zero, 0x1450
    ctx->r4 = ADD32(0, 0X1450);
    func_00275624(rdram, ctx);
        goto after_3;
    // 0x002563C0: addiu       $a0, $zero, 0x1450
    ctx->r4 = ADD32(0, 0X1450);
    after_3:
L_002563C4:
    // 0x002563C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002563C8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002563CC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002563D0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002563D4: jr          $ra
    // 0x002563D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002563D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004532EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004532EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004532F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004532F4: jal         0x004156FC
    // 0x004532F8: nop

    func_004156FC(rdram, ctx);
        goto after_0;
    // 0x004532F8: nop

    after_0:
    // 0x004532FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00453300: jr          $ra
    // 0x00453304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00453304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029A07C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_00428CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428CEC: jal         0x00268B48
    // 0x00428CF0: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    func_00268B48(rdram, ctx);
        goto after_0;
    // 0x00428CF0: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    after_0:
    // 0x00428CF4: sw          $s2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r18;
    // 0x00428CF8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00428CFC: sw          $fp, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r30;
    // 0x00428D00: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00428D04: sw          $s0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r16;
    // 0x00428D08: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00428D0C: sw          $s5, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r21;
    // 0x00428D10: sw          $ra, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r31;
    // 0x00428D14: sw          $s7, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r23;
    // 0x00428D18: sw          $s6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r22;
    // 0x00428D1C: sw          $s4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r20;
    // 0x00428D20: sw          $s3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r19;
    // 0x00428D24: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x00428D28: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00428D2C: lw          $s6, 0x178($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X178);
    // 0x00428D30: slt         $v0, $fp, $v0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428D34: beq         $v0, $zero, L_00428DF0
    if (ctx->r2 == 0) {
        // 0x00428D38: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_00428DF0;
    }
    // 0x00428D38: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00428D3C: bltz        $fp, L_004290F4
    if (SIGNED(ctx->r30) < 0) {
        // 0x00428D40: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D44: blez        $s6, L_00428DF0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00428D48: andi        $v0, $s6, 0x1F
        ctx->r2 = ctx->r22 & 0X1F;
            goto L_00428DF0;
    }
    // 0x00428D48: andi        $v0, $s6, 0x1F
    ctx->r2 = ctx->r22 & 0X1F;
    // 0x00428D4C: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x00428D50: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D54: bltz        $s0, L_00428DF0
    if (SIGNED(ctx->r16) < 0) {
        // 0x00428D58: andi        $v0, $s0, 0x1F
        ctx->r2 = ctx->r16 & 0X1F;
            goto L_00428DF0;
    }
    // 0x00428D58: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x00428D5C: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x00428D60: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D64: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428D68: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428D6C: beq         $v0, $zero, L_004290F4
    if (ctx->r2 == 0) {
        // 0x00428D70: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D74: jal         0x00429DFC
    // 0x00428D78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429DFC(rdram, ctx);
        goto after_1;
    // 0x00428D78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00428D7C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00428D80: bne         $v0, $v1, L_00428D90
    if (ctx->r2 != ctx->r3) {
        // 0x00428D84: nop
    
            goto L_00428D90;
    }
    // 0x00428D84: nop

L_00428D88:
    // 0x00428D88: j           L_004290F4
    // 0x00428D8C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004290F4;
    // 0x00428D8C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00428D90:
    // 0x00428D90: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00428D94: beq         $v0, $zero, L_00428DB4
    if (ctx->r2 == 0) {
        // 0x00428D98: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_00428DB4;
    }
    // 0x00428D98: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00428D9C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00428DA0: jal         0x00429EC4
    // 0x00428DA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_2;
    // 0x00428DA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00428DA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428DAC: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x00428DB0: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_004290F4;
    }
    // 0x00428DB0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
L_00428DB4:
    // 0x00428DB4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428DB8: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00428DBC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00428DC0: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x00428DC4: jal         0x00299680
    // 0x00428DC8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x00428DC8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x00428DCC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428DD0: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x00428DD4: nop
    
            goto L_004290F4;
    }
    // 0x00428DD4: nop

    // 0x00428DD8: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x00428DDC: beq         $v0, $zero, L_004290F4
    if (ctx->r2 == 0) {
        // 0x00428DE0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428DE0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428DE4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00428DE8: bne         $v0, $zero, L_00428DF8
    if (ctx->r2 != 0) {
        // 0x00428DEC: nop
    
            goto L_00428DF8;
    }
    // 0x00428DEC: nop

L_00428DF0:
    // 0x00428DF0: j           L_004290F4
    // 0x00428DF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_004290F4;
    // 0x00428DF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00428DF8:
    // 0x00428DF8: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00428DFC: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00428E00: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00428E04: bne         $v0, $zero, L_00428E34
    if (ctx->r2 != 0) {
        // 0x00428E08: nop
    
            goto L_00428E34;
    }
    // 0x00428E08: nop

    // 0x00428E0C: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x00428E10: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428E14: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428E18: beq         $v0, $zero, L_00428E34
    if (ctx->r2 == 0) {
        // 0x00428E1C: nop
    
            goto L_00428E34;
    }
    // 0x00428E1C: nop

    // 0x00428E20: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x00428E24: beq         $v0, $zero, L_00428E34
    if (ctx->r2 == 0) {
        // 0x00428E28: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00428E34;
    }
    // 0x00428E28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00428E2C: bgez        $v0, L_00428E4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00428E30: andi        $v0, $s5, 0xFF
        ctx->r2 = ctx->r21 & 0XFF;
            goto L_00428E4C;
    }
    // 0x00428E30: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
L_00428E34:
    // 0x00428E34: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x00428E38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00428E3C: beq         $a0, $v1, L_004290F4
    if (ctx->r4 == ctx->r3) {
        // 0x00428E40: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428E40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428E44: j           L_004290F4
    // 0x00428E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_004290F4;
    // 0x00428E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00428E4C:
    // 0x00428E4C: bne         $v0, $zero, L_00428E6C
    if (ctx->r2 != 0) {
        // 0x00428E50: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00428E6C;
    }
    // 0x00428E50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00428E54: lbu         $v0, 0x20($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X20);
    // 0x00428E58: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00428E5C: bne         $v0, $zero, L_00428E6C
    if (ctx->r2 != 0) {
        // 0x00428E60: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00428E6C;
    }
    // 0x00428E60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00428E64: j           L_004290F4
    // 0x00428E68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_004290F4;
    // 0x00428E68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_00428E6C:
    // 0x00428E6C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00428E70: bgez        $a3, L_00428E7C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00428E74: sb          $v0, 0x138($sp)
        MEM_B(0X138, ctx->r29) = ctx->r2;
            goto L_00428E7C;
    }
    // 0x00428E74: sb          $v0, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r2;
    // 0x00428E78: addiu       $a3, $a3, 0x1F
    ctx->r7 = ADD32(ctx->r7, 0X1F);
L_00428E7C:
    // 0x00428E7C: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00428E80: sra         $s1, $a3, 5
    ctx->r17 = S32(SIGNED(ctx->r7) >> 5);
    // 0x00428E84: sh          $v0, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r2;
    // 0x00428E88: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00428E8C: bne         $v0, $zero, L_00428F44
    if (ctx->r2 != 0) {
        // 0x00428E90: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00428F44;
    }
    // 0x00428E90: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00428E94: addiu       $s3, $sp, 0x138
    ctx->r19 = ADD32(ctx->r29, 0X138);
    // 0x00428E98: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x00428E9C: addiu       $s0, $sp, 0x13A
    ctx->r16 = ADD32(ctx->r29, 0X13A);
    // 0x00428EA0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_00428EA4:
    // 0x00428EA4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00428EA8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x00428EAC: beq         $v1, $v0, L_00428ED0
    if (ctx->r3 == ctx->r2) {
        // 0x00428EB0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00428ED0;
    }
    // 0x00428EB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428EB4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00428EB8: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x00428EBC: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x00428EC0: jal         0x00429AA4
    // 0x00428EC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_4;
    // 0x00428EC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x00428EC8: bne         $v0, $zero, L_00428F30
    if (ctx->r2 != 0) {
        // 0x00428ECC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00428F30;
    }
    // 0x00428ECC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00428ED0:
    // 0x00428ED0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428ED4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00428ED8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00428EDC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00428EE0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x00428EE4: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00428EE8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00428EEC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00428EF0: bne         $v0, $zero, L_00428F20
    if (ctx->r2 != 0) {
        // 0x00428EF4: nop
    
            goto L_00428F20;
    }
    // 0x00428EF4: nop

    // 0x00428EF8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00428EFC: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428F00: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428F04: beq         $v0, $zero, L_00428F20
    if (ctx->r2 == 0) {
        // 0x00428F08: nop
    
            goto L_00428F20;
    }
    // 0x00428F08: nop

    // 0x00428F0C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428F10: beq         $v0, $zero, L_00428F20
    if (ctx->r2 == 0) {
        // 0x00428F14: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00428F20;
    }
    // 0x00428F14: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00428F18: bgez        $v0, L_00428F30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00428F1C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00428F30;
    }
    // 0x00428F1C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00428F20:
    // 0x00428F20: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00428F24: bne         $v0, $s7, L_00428F30
    if (ctx->r2 != ctx->r23) {
        // 0x00428F28: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00428F30;
    }
    // 0x00428F28: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00428F2C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_00428F30:
    // 0x00428F30: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x00428F34: addiu       $s1, $s1, -0x8
        ctx->r17 = ADD32(ctx->r17, -0X8);
            goto L_00428D88;
    }
    // 0x00428F34: addiu       $s1, $s1, -0x8
    ctx->r17 = ADD32(ctx->r17, -0X8);
    // 0x00428F38: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00428F3C: beq         $v0, $zero, L_00428EA4
    if (ctx->r2 == 0) {
        // 0x00428F40: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00428EA4;
    }
    // 0x00428F40: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_00428F44:
    // 0x00428F44: bltzl       $v0, L_00428F4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x00428F48: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_00428F4C;
    }
    goto skip_0;
    // 0x00428F48: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_0:
L_00428F4C:
    // 0x00428F4C: sra         $s4, $v0, 5
    ctx->r20 = S32(SIGNED(ctx->r2) >> 5);
    // 0x00428F50: lw          $s3, 0x17C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X17C);
    // 0x00428F54: blez        $s4, L_00429090
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00428F58: andi        $v1, $s5, 0xFF
        ctx->r3 = ctx->r21 & 0XFF;
            goto L_00429090;
    }
    // 0x00428F58: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x00428F5C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_00428F60:
    // 0x00428F60: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00428F64: bne         $s1, $v0, L_00429008
    if (ctx->r17 != ctx->r2) {
        // 0x00428F68: nop
    
            goto L_00429008;
    }
    // 0x00428F68: nop

    // 0x00428F6C: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x00428F70: lbu         $v1, 0x13A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13A);
    // 0x00428F74: lbu         $v0, 0x138($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X138);
    // 0x00428F78: beq         $v1, $v0, L_00428FA0
    if (ctx->r3 == ctx->r2) {
        // 0x00428F7C: addiu       $s0, $sp, 0x13A
        ctx->r16 = ADD32(ctx->r29, 0X13A);
            goto L_00428FA0;
    }
    // 0x00428F7C: addiu       $s0, $sp, 0x13A
    ctx->r16 = ADD32(ctx->r29, 0X13A);
    // 0x00428F80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428F84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00428F88: sb          $v1, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r3;
    // 0x00428F8C: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x00428F90: jal         0x00429AA4
    // 0x00428F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_5;
    // 0x00428F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x00428F98: bne         $v0, $zero, L_00429000
    if (ctx->r2 != 0) {
        // 0x00428F9C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00429000;
    }
    // 0x00428F9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00428FA0:
    // 0x00428FA0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428FA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00428FA8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00428FAC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00428FB0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x00428FB4: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00428FB8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00428FBC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00428FC0: bne         $v0, $zero, L_00428FF0
    if (ctx->r2 != 0) {
        // 0x00428FC4: nop
    
            goto L_00428FF0;
    }
    // 0x00428FC4: nop

    // 0x00428FC8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00428FCC: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428FD0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428FD4: beq         $v0, $zero, L_00428FF0
    if (ctx->r2 == 0) {
        // 0x00428FD8: nop
    
            goto L_00428FF0;
    }
    // 0x00428FD8: nop

    // 0x00428FDC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428FE0: beq         $v0, $zero, L_00428FF0
    if (ctx->r2 == 0) {
        // 0x00428FE4: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00428FF0;
    }
    // 0x00428FE4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00428FE8: bgez        $v0, L_00429000
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00428FEC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00429000;
    }
    // 0x00428FEC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00428FF0:
    // 0x00428FF0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00428FF4: bne         $v0, $s6, L_00429000
    if (ctx->r2 != ctx->r22) {
        // 0x00428FF8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00429000;
    }
    // 0x00428FF8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00428FFC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_00429000:
    // 0x00429000: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x00429004: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00428D88;
    }
    // 0x00429004: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00429008:
    // 0x00429008: lbu         $v1, 0x13A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13A);
    // 0x0042900C: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00429010: beq         $v0, $v1, L_00429030
    if (ctx->r2 == ctx->r3) {
        // 0x00429014: nop
    
            goto L_00429030;
    }
    // 0x00429014: nop

    // 0x00429018: sb          $v1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r3;
    // 0x0042901C: jal         0x00429EC4
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_6;
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x00429024: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429028: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x0042902C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004290F4;
    }
    // 0x0042902C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00429030:
    // 0x00429030: lbu         $v0, 0x13B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X13B);
    // 0x00429034: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00429038: addu        $a2, $v0, $s1
    ctx->r6 = ADD32(ctx->r2, ctx->r17);
    // 0x0042903C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00429040: bne         $v0, $zero, L_00429060
    if (ctx->r2 != 0) {
        // 0x00429044: andi        $a2, $a2, 0xFFFF
        ctx->r6 = ctx->r6 & 0XFFFF;
            goto L_00429060;
    }
    // 0x00429044: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00429048: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042904C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429050: jal         0x00299680
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_7;
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00429058: j           L_00429078
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_00429078;
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429060:
    // 0x00429060: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429064: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429068: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042906C: jal         0x00299A40
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_8;
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_8:
    // 0x00429074: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429078:
    // 0x00429078: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x0042907C: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_00428D88;
    }
    // 0x0042907C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
    // 0x00429080: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00429084: bgtz        $s4, L_00428F60
    if (SIGNED(ctx->r20) > 0) {
        // 0x00429088: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00428F60;
    }
    // 0x00429088: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042908C: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
L_00429090:
    // 0x00429090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00429094: bne         $v1, $v0, L_004290F4
    if (ctx->r3 != ctx->r2) {
        // 0x00429098: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x00429098: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042909C: lbu         $v1, 0x20($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X20);
    // 0x004290A0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x004290A4: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x004290A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x004290A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004290AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004290B0: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x004290B4: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x004290B8: jal         0x00429EC4
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_9;
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_9:
    // 0x004290C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290C4: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x004290C8: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_004290F4;
    }
    // 0x004290C8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004290CC: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x004290D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004290D4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004290D8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004290DC: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x004290E0: jal         0x00299A40
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_10;
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_10:
    // 0x004290E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290EC: beql        $v1, $zero, L_004290F4
    if (ctx->r3 == 0) {
        // 0x004290F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    goto skip_1;
    // 0x004290F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
L_004290F4:
    // 0x004290F4: lw          $ra, 0x164($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X164);
    // 0x004290F8: lw          $fp, 0x160($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X160);
    // 0x004290FC: lw          $s7, 0x15C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X15C);
    // 0x00429100: lw          $s6, 0x158($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X158);
    // 0x00429104: lw          $s5, 0x154($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X154);
    // 0x00429108: lw          $s4, 0x150($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X150);
    // 0x0042910C: lw          $s3, 0x14C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14C);
    // 0x00429110: lw          $s2, 0x148($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X148);
    // 0x00429114: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x00429118: lw          $s0, 0x140($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X140);
    // 0x0042911C: jr          $ra
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_00425754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425754: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00425758: lw          $v0, 0x7BEC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7BEC);
    // 0x0042575C: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // turok2: reconnected split function: a stray ELF symbol at 0x00425760 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00425760(rdram, ctx);
;}
RECOMP_FUNC void func_0042C96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C96C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042C970: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042C974: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042C978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0042C97C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042C980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042C984: lw          $s1, 0x1180($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1180);
    // 0x0042C988: beq         $s1, $zero, L_0042C9C4
    if (ctx->r17 == 0) {
        // 0x0042C98C: nop
    
            goto L_0042C9C4;
    }
    // 0x0042C98C: nop

L_0042C990:
    // 0x0042C990: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x0042C994: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x0042C998: jal         0x0026DFB0
    // 0x0042C99C: nop

    func_0026DFB0(rdram, ctx);
        goto after_0;
    // 0x0042C99C: nop

    after_0:
    // 0x0042C9A0: addiu       $a0, $s2, 0x1180
    ctx->r4 = ADD32(ctx->r18, 0X1180);
    // 0x0042C9A4: jal         0x00200738
    // 0x0042C9A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0042C9A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0042C9AC: addiu       $a0, $s2, 0x1194
    ctx->r4 = ADD32(ctx->r18, 0X1194);
    // 0x0042C9B0: jal         0x00200518
    // 0x0042C9B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x0042C9B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0042C9B8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0042C9BC: bne         $s1, $zero, L_0042C990
    if (ctx->r17 != 0) {
        // 0x0042C9C0: nop
    
            goto L_0042C990;
    }
    // 0x0042C9C0: nop

L_0042C9C4:
    // 0x0042C9C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042C9C8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042C9CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042C9D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C9D4: jr          $ra
    // 0x0042C9D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042C9D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00426CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426CD4: blez        $a2, L_00426D4C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00426CD8: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_00426D4C;
    }
    // 0x00426CD8: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x00426CDC: addiu       $t3, $zero, 0x42
    ctx->r11 = ADD32(0, 0X42);
L_00426CE0:
    // 0x00426CE0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426CE4: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00426CE8: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00426CEC: bnel        $v0, $zero, L_00426CF4
    if (ctx->r2 != 0) {
        // 0x00426CF0: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00426CF4;
    }
    goto skip_0;
    // 0x00426CF0: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_0:
L_00426CF4:
    // 0x00426CF4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x00426CF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00426CFC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00426D00: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
L_00426D04:
    // 0x00426D04: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x00426D08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426D0C: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x00426D10: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00426D14: bnel        $v1, $v0, L_00426D24
    if (ctx->r3 != ctx->r2) {
        // 0x00426D18: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00426D24;
    }
    goto skip_1;
    // 0x00426D18: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x00426D1C: j           L_00426D30
    // 0x00426D20: sb          $a3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r7;
        goto L_00426D30;
    // 0x00426D20: sb          $a3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r7;
L_00426D24:
    // 0x00426D24: slti        $v0, $a3, 0x42
    ctx->r2 = SIGNED(ctx->r7) < 0X42 ? 1 : 0;
    // 0x00426D28: bne         $v0, $zero, L_00426D04
    if (ctx->r2 != 0) {
        // 0x00426D2C: nop
    
            goto L_00426D04;
    }
    // 0x00426D2C: nop

L_00426D30:
    // 0x00426D30: beql        $a3, $t3, L_00426D38
    if (ctx->r7 == ctx->r11) {
        // 0x00426D34: sb          $zero, 0x0($a1)
        MEM_B(0X0, ctx->r5) = 0;
            goto L_00426D38;
    }
    goto skip_2;
    // 0x00426D34: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    skip_2:
L_00426D38:
    // 0x00426D38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426D3C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x00426D40: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00426D44: bne         $v0, $zero, L_00426CE0
    if (ctx->r2 != 0) {
        // 0x00426D48: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00426CE0;
    }
    // 0x00426D48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00426D4C:
    // 0x00426D4C: jr          $ra
    // 0x00426D50: nop

    return;
    // 0x00426D50: nop

;}
RECOMP_FUNC void func_00430070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00430074: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00430078: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x0043007C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00430080: addiu       $a1, $a1, 0x5A80
    ctx->r5 = ADD32(ctx->r5, 0X5A80);
    // 0x00430084: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00430088: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0043008C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00430090: jal         0x0026EB3C
    // 0x00430094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0026EB3C(rdram, ctx);
        goto after_0;
    // 0x00430094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00430098: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043009C: addiu       $s0, $s0, 0x6798
    ctx->r16 = ADD32(ctx->r16, 0X6798);
    // 0x004300A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004300A4: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x004300A8: addiu       $a1, $a1, 0x6770
    ctx->r5 = ADD32(ctx->r5, 0X6770);
    // 0x004300AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004300B0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004300B4: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x004300B8: jal         0x0029B030
    // 0x004300BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x004300BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x004300C0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x004300C4: addiu       $s1, $s1, 0x6758
    ctx->r17 = ADD32(ctx->r17, 0X6758);
    // 0x004300C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004300CC: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x004300D0: addiu       $a1, $a1, 0x5E9C
    ctx->r5 = ADD32(ctx->r5, 0X5E9C);
    // 0x004300D4: jal         0x0029B030
    // 0x004300D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x004300D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x004300DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x004300E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004300E4: jal         0x0029B950
    // 0x004300E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x004300E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x004300EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004300F0: addiu       $a1, $a1, 0x6CF1
    ctx->r5 = ADD32(ctx->r5, 0X6CF1);
    // 0x004300F4: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x004300F8: addiu       $a2, $a2, 0x6778
    ctx->r6 = ADD32(ctx->r6, 0X6778);
    // 0x004300FC: jal         0x00298A40
    // 0x00430100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osContInit_recomp(rdram, ctx);
        goto after_4;
    // 0x00430100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00430104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00430108: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0043010C: jal         0x0029B820
    // 0x00430110: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00430110: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_5:
    // 0x00430114: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00430118: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0043011C: addiu       $s1, $s1, 0x652C
    ctx->r17 = ADD32(ctx->r17, 0X652C);
    // 0x00430120: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00430124: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430128: sh          $v0, 0x5EB8($at)
    MEM_H(0X5EB8, ctx->r1) = ctx->r2;
    // 0x0043012C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00430130: sb          $zero, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = 0;
L_00430134:
    // 0x00430134: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00430138: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0043013C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00430140: sw          $zero, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = 0;
    // 0x00430144: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430148: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0043014C: sw          $zero, 0x67B0($at)
    MEM_W(0X67B0, ctx->r1) = 0;
    // 0x00430150: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430154: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00430158: sw          $zero, 0x5EA8($at)
    MEM_W(0X5EA8, ctx->r1) = 0;
    // 0x0043015C: jal         0x00285A80
    // 0x00430160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A80(rdram, ctx);
        goto after_6;
    // 0x00430160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00430164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00430168: jal         0x004301C8
    // 0x0043016C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_004301C8(rdram, ctx);
        goto after_7;
    // 0x0043016C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00430170: beql        $v0, $zero, L_00430198
    if (ctx->r2 == 0) {
        // 0x00430174: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_00430198;
    }
    goto skip_0;
    // 0x00430174: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x00430178: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0043017C: lbu         $v0, 0x6CF2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF2);
    // 0x00430180: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430184: sh          $s0, 0x5EB8($at)
    MEM_H(0X5EB8, ctx->r1) = ctx->r16;
    // 0x00430188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043018C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00430190: sb          $v0, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = ctx->r2;
    // 0x00430194: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_00430198:
    // 0x00430198: bgez        $s0, L_00430134
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0043019C: addiu       $s1, $s1, -0x224
        ctx->r17 = ADD32(ctx->r17, -0X224);
            goto L_00430134;
    }
    // 0x0043019C: addiu       $s1, $s1, -0x224
    ctx->r17 = ADD32(ctx->r17, -0X224);
    // 0x004301A0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004301A4: lh          $v0, 0x5EB8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5EB8);
    // 0x004301A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004301AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004301B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004301B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004301B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004301BC: sb          $v1, 0x6CF0($at)
    MEM_B(0X6CF0, ctx->r1) = ctx->r3;
    // 0x004301C0: jr          $ra
    // 0x004301C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004301C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00417E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417E84: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00417E88: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00417E8C: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00417E90: bne         $v0, $zero, L_00417EB0
    if (ctx->r2 != 0) {
        // 0x00417E94: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00417EB0;
    }
    // 0x00417E94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00417E98: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00417E9C: bnel        $v0, $zero, L_00417EB4
    if (ctx->r2 != 0) {
        // 0x00417EA0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00417EB4;
    }
    goto skip_0;
    // 0x00417EA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00417EA4: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00417EA8: beq         $v0, $zero, L_00417EB4
    if (ctx->r2 == 0) {
        // 0x00417EAC: nop
    
            goto L_00417EB4;
    }
    // 0x00417EAC: nop

L_00417EB0:
    // 0x00417EB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00417EB4:
    // 0x00417EB4: jr          $ra
    // 0x00417EB8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00417EB8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_002525BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002525BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002525C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002525C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002525C8: addiu       $s0, $s0, -0x5350
    ctx->r16 = ADD32(ctx->r16, -0X5350);
    // 0x002525CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x002525D0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002525D4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002525D8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002525DC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002525E0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x002525E4: beq         $v0, $zero, L_00252820
    if (ctx->r2 == 0) {
        // 0x002525E8: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00252820;
    }
    // 0x002525E8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002525EC: jal         0x00254A5C
    // 0x002525F0: nop

    func_00254A5C(rdram, ctx);
        goto after_0;
    // 0x002525F0: nop

    after_0:
    // 0x002525F4: beq         $v0, $zero, L_00252624
    if (ctx->r2 == 0) {
        // 0x002525F8: nop
    
            goto L_00252624;
    }
    // 0x002525F8: nop

    // 0x002525FC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00252600: blez        $v0, L_00252624
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00252604: nop
    
            goto L_00252624;
    }
    // 0x00252604: nop

    // 0x00252608: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0025260C: bne         $v0, $zero, L_00252624
    if (ctx->r2 != 0) {
        // 0x00252610: nop
    
            goto L_00252624;
    }
    // 0x00252610: nop

    // 0x00252614: jal         0x002534E0
    // 0x00252618: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002534E0(rdram, ctx);
        goto after_1;
    // 0x00252618: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0025261C: j           L_00252820
    // 0x00252620: nop

        goto L_00252820;
    // 0x00252620: nop

L_00252624:
    // 0x00252624: jal         0x00254B9C
    // 0x00252628: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00254B9C(rdram, ctx);
        goto after_2;
    // 0x00252628: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0025262C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00252630: addiu       $s0, $s0, -0x5350
    ctx->r16 = ADD32(ctx->r16, -0X5350);
    // 0x00252634: lw          $v1, 0x40($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X40);
    // 0x00252638: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0025263C: beq         $v1, $s3, L_00252678
    if (ctx->r3 == ctx->r19) {
        // 0x00252640: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_00252678;
    }
    // 0x00252640: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00252644: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00252648: bne         $v0, $zero, L_00252660
    if (ctx->r2 != 0) {
        // 0x0025264C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00252660;
    }
    // 0x0025264C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00252650: beq         $v1, $v0, L_002526D0
    if (ctx->r3 == ctx->r2) {
        // 0x00252654: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_002526D0;
    }
    // 0x00252654: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00252658: beq         $v1, $v0, L_00252820
    if (ctx->r3 == ctx->r2) {
        // 0x0025265C: nop
    
            goto L_00252820;
    }
    // 0x0025265C: nop

L_00252660:
    // 0x00252660: jal         0x00254B6C
    // 0x00252664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00254B6C(rdram, ctx);
        goto after_3;
    // 0x00252664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00252668: jal         0x00252840
    // 0x0025266C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00252840(rdram, ctx);
        goto after_4;
    // 0x0025266C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00252670: j           L_00252820
    // 0x00252674: sw          $s3, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r19;
        goto L_00252820;
    // 0x00252674: sw          $s3, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r19;
L_00252678:
    // 0x00252678: jal         0x00252840
    // 0x0025267C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00252840(rdram, ctx);
        goto after_5;
    // 0x0025267C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00252680: blez        $s1, L_00252820
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00252684: nop
    
            goto L_00252820;
    }
    // 0x00252684: nop

    // 0x00252688: jal         0x002113A4
    // 0x0025268C: nop

    func_002113A4(rdram, ctx);
        goto after_6;
    // 0x0025268C: nop

    after_6:
    // 0x00252690: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x00252694: bne         $s1, $zero, L_002526A0
    if (ctx->r17 != 0) {
        // 0x00252698: nop
    
            goto L_002526A0;
    }
    // 0x00252698: nop

    // 0x0025269C: break       7
    do_break(2434716);
L_002526A0:
    // 0x002526A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002526A4: bne         $s1, $at, L_002526B8
    if (ctx->r17 != ctx->r1) {
        // 0x002526A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002526B8;
    }
    // 0x002526A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002526AC: bne         $v0, $at, L_002526B8
    if (ctx->r2 != ctx->r1) {
        // 0x002526B0: nop
    
            goto L_002526B8;
    }
    // 0x002526B0: nop

    // 0x002526B4: break       6
    do_break(2434740);
L_002526B8:
    // 0x002526B8: mfhi        $v1
    ctx->r3 = hi;
    // 0x002526BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002526C0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x002526C4: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x002526C8: j           L_00252820
    // 0x002526CC: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
        goto L_00252820;
    // 0x002526CC: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
L_002526D0:
    // 0x002526D0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x002526D4: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x002526D8: bne         $s1, $zero, L_002526E4
    if (ctx->r17 != 0) {
        // 0x002526DC: nop
    
            goto L_002526E4;
    }
    // 0x002526DC: nop

    // 0x002526E0: break       7
    do_break(2434784);
L_002526E4:
    // 0x002526E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002526E8: bne         $s1, $at, L_002526FC
    if (ctx->r17 != ctx->r1) {
        // 0x002526EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002526FC;
    }
    // 0x002526EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002526F0: bne         $v0, $at, L_002526FC
    if (ctx->r2 != ctx->r1) {
        // 0x002526F4: nop
    
            goto L_002526FC;
    }
    // 0x002526F4: nop

    // 0x002526F8: break       6
    do_break(2434808);
L_002526FC:
    // 0x002526FC: mfhi        $a1
    ctx->r5 = hi;
    // 0x00252700: jal         0x00254B04
    // 0x00252704: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00254B04(rdram, ctx);
        goto after_7;
    // 0x00252704: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00252708: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0025270C: lw          $s0, 0x51C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X51C);
    // 0x00252710: beq         $s0, $zero, L_002527CC
    if (ctx->r16 == 0) {
        // 0x00252714: nop
    
            goto L_002527CC;
    }
    // 0x00252714: nop

    // 0x00252718: lw          $v0, 0x54C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54C);
    // 0x0025271C: bne         $v0, $zero, L_002527CC
    if (ctx->r2 != 0) {
        // 0x00252720: nop
    
            goto L_002527CC;
    }
    // 0x00252720: nop

    // 0x00252724: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00252728: lbu         $a0, -0x5516($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5516);
    // 0x0025272C: jal         0x00279028
    // 0x00252730: nop

    func_00279028(rdram, ctx);
        goto after_8;
    // 0x00252730: nop

    after_8:
    // 0x00252734: lwc1        $f5, 0x288($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00252738: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025273C: lwc1        $f2, 0x708C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X708C);
    // 0x00252740: mul.s       $f1, $f5, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x00252744: lwc1        $f3, 0x28C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00252748: mul.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0025274C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00252750: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00252754: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252758: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025275C: lwc1        $f4, 0x7090($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7090);
    // 0x00252760: div.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = DIV_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00252764: mul.s       $f6, $f5, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x00252768: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0025276C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00252770: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00252774: div.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00252778: mul.s       $f4, $f3, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x0025277C: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x00252780: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00252784: lwc1        $f1, 0x294($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x00252788: addiu       $a0, $zero, 0x1FB
    ctx->r4 = ADD32(0, 0X1FB);
    // 0x0025278C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00252790: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00252794: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x00252798: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x0025279C: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x002527A0: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x002527A4: sub.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x002527A8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002527AC: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002527B0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x002527B4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x002527B8: trunc.w.s   $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x002527BC: mfc1        $a3, $f7
    ctx->r7 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002527C0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x002527C4: jal         0x0027B320
    // 0x002527C8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_9;
    // 0x002527C8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_9:
L_002527CC:
    // 0x002527CC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002527D0: addiu       $s0, $s0, -0x5350
    ctx->r16 = ADD32(ctx->r16, -0X5350);
    // 0x002527D4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x002527D8: subu        $v1, $v1, $s1
    ctx->r3 = SUB32(ctx->r3, ctx->r17);
    // 0x002527DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002527E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002527E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002527E8: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x002527EC: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x002527F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002527F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002527F8: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x002527FC: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00252800: bne         $a0, $zero, L_00252820
    if (ctx->r4 != 0) {
        // 0x00252804: nop
    
            goto L_00252820;
    }
    // 0x00252804: nop

    // 0x00252808: jal         0x00254B6C
    // 0x0025280C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00254B6C(rdram, ctx);
        goto after_10;
    // 0x0025280C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x00252810: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00252814: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x00252818: jal         0x0025247C
    // 0x0025281C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0025247C(rdram, ctx);
        goto after_11;
    // 0x0025281C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
L_00252820:
    // 0x00252820: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00252824: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00252828: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0025282C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00252830: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00252834: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00252838: jr          $ra
    // 0x0025283C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0025283C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00424EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00424EF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00424EFC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424F00: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424F04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00424F08: jal         0x00224C08
    // 0x00424F0C: nop

    func_00224C08(rdram, ctx);
        goto after_0;
    // 0x00424F0C: nop

    after_0:
    // 0x00424F10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00424F14: jr          $ra
    // 0x00424F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DCFC: jr          $ra
    // 0x0040DD00: nop

    return;
    // 0x0040DD00: nop

;}
RECOMP_FUNC void func_0028F910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F910: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028F914: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
    // 0x0028F918: bne         $v0, $zero, L_0028F928
    if (ctx->r2 != 0) {
            // 0x0028F91C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    func_0028F928(rdram, ctx);
    return;
    }
    // 0x0028F91C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x0028F920: jr          $ra
    // 0x0028F924: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0028F924: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00267FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267FC4: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x00267FC8: jr          $ra
    // 0x00267FCC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    return;
    // 0x00267FCC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
;}
RECOMP_FUNC void func_004472E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004472E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004472E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004472EC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x004472F0: beq         $v0, $zero, L_00447300
    if (ctx->r2 == 0) {
        // 0x004472F4: nop
    
            goto L_00447300;
    }
    // 0x004472F4: nop

    // 0x004472F8: jal         0x00243414
    // 0x004472FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004472FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_00447300:
    // 0x00447300: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447304: jr          $ra
    // 0x00447308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026A9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026A9C0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0026A9C4: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x0026A9C8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0026A9CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0026A9D0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x0026A9D4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0026A9D8: sdc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X80, ctx->r29);
    // 0x0026A9DC: bne         $s0, $zero, L_0026AA0C
    if (ctx->r16 != 0) {
        // 0x0026A9E0: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_0026AA0C;
    }
    // 0x0026A9E0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0026A9E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A9E8: lwc1        $f0, 0x7FB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FB0);
    // 0x0026A9EC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026A9F0: sw          $zero, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = 0;
    // 0x0026A9F4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026A9F8: sw          $zero, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = 0;
    // 0x0026A9FC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026AA00: swc1        $f0, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->f0.u32l;
    // 0x0026AA04: j           L_0026AAD4
    // 0x0026AA08: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
        goto L_0026AAD4;
    // 0x0026AA08: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
L_0026AA0C:
    // 0x0026AA0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026AA10: lw          $v0, 0x260C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X260C);
    // 0x0026AA14: beq         $s0, $v0, L_0026AAD4
    if (ctx->r16 == ctx->r2) {
        // 0x0026AA18: addiu       $s1, $sp, 0x30
        ctx->r17 = ADD32(ctx->r29, 0X30);
            goto L_0026AAD4;
    }
    // 0x0026AA18: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0026AA1C: bne         $s0, $zero, L_0026AA4C
    if (ctx->r16 != 0) {
        // 0x0026AA20: nop
    
            goto L_0026AA4C;
    }
    // 0x0026AA20: nop

    // 0x0026AA24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AA28: lwc1        $f0, 0x7FB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FB4);
    // 0x0026AA2C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026AA30: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0026AA34: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026AA38: sw          $zero, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = 0;
    // 0x0026AA3C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026AA40: swc1        $f0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->f0.u32l;
    // 0x0026AA44: j           L_0026AA90
    // 0x0026AA48: nop

        goto L_0026AA90;
    // 0x0026AA48: nop

L_0026AA4C:
    // 0x0026AA4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026AA50: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026AA54: beq         $s0, $v0, L_0026AA90
    if (ctx->r16 == ctx->r2) {
        // 0x0026AA58: nop
    
            goto L_0026AA90;
    }
    // 0x0026AA58: nop

    // 0x0026AA5C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026AA60: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026AA64: jal         0x0020EF2C
    // 0x0026AA68: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026AA68: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x0026AA6C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026AA70: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026AA74: jal         0x0020EF2C
    // 0x0026AA78: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026AA78: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x0026AA7C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026AA80: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026AA84: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x0026AA88: jal         0x0020EFDC
    // 0x0026AA8C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026AA8C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
L_0026AA90:
    // 0x0026AA90: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026AA94: addiu       $a0, $a0, 0x2030
    ctx->r4 = ADD32(ctx->r4, 0X2030);
    // 0x0026AA98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026AA9C: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026AAA0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026AAA4: addiu       $t1, $t1, 0x2020
    ctx->r9 = ADD32(ctx->r9, 0X2020);
    // 0x0026AAA8: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0026AAAC: addiu       $t0, $t0, 0x2030
    ctx->r8 = ADD32(ctx->r8, 0X2030);
    // 0x0026AAB0: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x0026AAB4: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x0026AAB8: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0026AABC: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x0026AAC0: lw          $v1, 0x8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8);
    // 0x0026AAC4: sw          $v1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r3;
    // 0x0026AAC8: jal         0x0020F040
    // 0x0026AACC: nop

    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x0026AACC: nop

    after_3:
    // 0x0026AAD0: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
L_0026AAD4:
    // 0x0026AAD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026AAD8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026AADC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AAE0: lwc1        $f20, 0x7FB8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7FB8);
    // 0x0026AAE4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0026AAE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026AAEC: sw          $s0, 0x260C($at)
    MEM_W(0X260C, ctx->r1) = ctx->r16;
    // 0x0026AAF0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026AAF4: addiu       $t1, $t1, 0x2030
    ctx->r9 = ADD32(ctx->r9, 0X2030);
    // 0x0026AAF8: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x0026AAFC: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x0026AB00: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x0026AB04: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0026AB08: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x0026AB0C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026AB10: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0026AB14: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x0026AB18: jal         0x0020EFDC
    // 0x0026AB1C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_4;
    // 0x0026AB1C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x0026AB20: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0026AB24: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0026AB28: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0026AB2C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026AB30: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0026AB34: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0026AB38: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026AB3C: jal         0x00298470
    // 0x0026AB40: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_5;
    // 0x0026AB40: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_5:
    // 0x0026AB44: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0026AB48: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026AB4C: nop

    // 0x0026AB50: bc1f        L_0026AB6C
    if (!c1cs) {
        // 0x0026AB54: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0026AB6C;
    }
    // 0x0026AB54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026AB58: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026AB5C: swc1        $f1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026AB60: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026AB64: j           L_0026ABF8
    // 0x0026AB68: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
        goto L_0026ABF8;
    // 0x0026AB68: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
L_0026AB6C:
    // 0x0026AB6C: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0026AB70: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0026AB74: jal         0x0020EF60
    // 0x0026AB78: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x0026AB78: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_6:
    // 0x0026AB7C: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026AB80: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026AB84: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026AB88: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026AB8C: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026AB90: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026AB94: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026AB98: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026AB9C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0026ABA0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026ABA4: jal         0x0021153C
    // 0x0026ABA8: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_7;
    // 0x0026ABA8: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_7:
    // 0x0026ABAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026ABB0: lwc1        $f1, 0x7FBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7FBC);
    // 0x0026ABB4: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026ABB8: jal         0x002982F0
    // 0x0026ABBC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_8;
    // 0x0026ABBC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_8:
    // 0x0026ABC0: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0026ABC4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026ABC8: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0026ABCC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026ABD0: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0026ABD4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026ABD8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026ABDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0026ABE0: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0026ABE4: swc1        $f3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026ABE8: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x0026ABEC: jal         0x002974C0
    // 0x0026ABF0: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_9;
    // 0x0026ABF0: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_9:
    // 0x0026ABF4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_0026ABF8:
    // 0x0026ABF8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0026ABFC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0026AC00: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x0026AC04: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x0026AC08: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x0026AC0C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0026AC10: sw          $a3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r7;
    // 0x0026AC14: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x0026AC18: sw          $t1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r9;
    // 0x0026AC1C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x0026AC20: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x0026AC24: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0026AC28: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0026AC2C: ldc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X80);
    // 0x0026AC30: jr          $ra
    // 0x0026AC34: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0026AC34: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_00283BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283BC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283BC4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00283BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00283BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00283BD4: lw          $a0, 0xDC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XDC);
    // 0x00283BD8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00283BDC: beq         $a0, $s0, L_00283CC4
    if (ctx->r4 == ctx->r16) {
        // 0x00283BE0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00283CC4;
    }
    // 0x00283BE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00283BE4: jal         0x0040FD6C
    // 0x00283BE8: nop

    func_0040FD6C(rdram, ctx);
        goto after_0;
    // 0x00283BE8: nop

    after_0:
    // 0x00283BEC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283BF0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283BF4: jal         0x00284174
    // 0x00283BF8: sw          $s0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r16;
    func_00284174(rdram, ctx);
        goto after_1;
    // 0x00283BF8: sw          $s0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r16;
    after_1:
    // 0x00283BFC: beq         $v0, $zero, L_00283CB8
    if (ctx->r2 == 0) {
        // 0x00283C00: nop
    
            goto L_00283CB8;
    }
    // 0x00283C00: nop

    // 0x00283C04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00283C08: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00283C0C: bne         $v0, $zero, L_00283C24
    if (ctx->r2 != 0) {
        // 0x00283C10: nop
    
            goto L_00283C24;
    }
    // 0x00283C10: nop

    // 0x00283C14: jal         0x00284240
    // 0x00283C18: nop

    func_00284240(rdram, ctx);
        goto after_2;
    // 0x00283C18: nop

    after_2:
    // 0x00283C1C: beq         $v0, $zero, L_00283C38
    if (ctx->r2 == 0) {
        // 0x00283C20: nop
    
            goto L_00283C38;
    }
    // 0x00283C20: nop

L_00283C24:
    // 0x00283C24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283C28: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283C2C: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00283C30: j           L_00283CB8
    // 0x00283C34: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
        goto L_00283CB8;
    // 0x00283C34: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
L_00283C38:
    // 0x00283C38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283C3C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00283C40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283C44: lwc1        $f0, -0x6340($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6340);
    // 0x00283C48: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00283C4C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283C50: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283C54: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00283C58: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x00283C5C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00283C60: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00283C64: swc1        $f1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00283C68: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00283C6C: nop

    // 0x00283C70: bc1f        L_00283C80
    if (!c1cs) {
        // 0x00283C74: swc1        $f0, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
            goto L_00283C80;
    }
    // 0x00283C74: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x00283C78: jal         0x002838A4
    // 0x00283C7C: nop

    func_002838A4(rdram, ctx);
        goto after_3;
    // 0x00283C7C: nop

    after_3:
L_00283C80:
    // 0x00283C80: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283C84: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283C88: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x00283C8C: lwc1        $f1, 0x2C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X2C);
    // 0x00283C90: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00283C94: nop

    // 0x00283C98: bc1f        L_00283CB8
    if (!c1cs) {
        // 0x00283C9C: nop
    
            goto L_00283CB8;
    }
    // 0x00283C9C: nop

    // 0x00283CA0: lw          $v0, 0xB4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB4);
    // 0x00283CA4: beq         $v0, $zero, L_00283CB8
    if (ctx->r2 == 0) {
        // 0x00283CA8: swc1        $f1, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_00283CB8;
    }
    // 0x00283CA8: swc1        $f1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00283CAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00283CB0: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x00283CB4: sw          $zero, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = 0;
L_00283CB8:
    // 0x00283CB8: jal         0x00412798
    // 0x00283CBC: nop

    func_00412798(rdram, ctx);
        goto after_4;
    // 0x00283CBC: nop

    after_4:
    // 0x00283CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00283CC4:
    // 0x00283CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00283CC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00283CCC: jr          $ra
    // 0x00283CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00283CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00290E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290E90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290E94: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00290E98: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x00290E9C: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x00290EA0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00290EA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00290EA8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290EAC: jal         0x00291034
    // 0x00290EB0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00290EB0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00290EB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290EB8: jr          $ra
    // 0x00290EBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290EBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040E0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E0E0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040E0E4: beq         $v0, $zero, L_0040E0F8
    if (ctx->r2 == 0) {
        // 0x0040E0E8: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_0040E0F8;
    }
    // 0x0040E0E8: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040E0EC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040E0F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040E0F4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_0040E0F8:
    // 0x0040E0F8: jr          $ra
    // 0x0040E0FC: nop

    return;
    // 0x0040E0FC: nop

;}
RECOMP_FUNC void func_00403660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403660: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00403664: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00403668: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040366C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x00403670: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00403674: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00403678: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0040367C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00403680: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00403684: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00403688: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x0040368C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00403690: addiu       $v0, $v0, -0xC60
    ctx->r2 = ADD32(ctx->r2, -0XC60);
    // 0x00403694: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00403698: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0040369C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x004036A0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x004036A4: lw          $s4, 0x0($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X0);
    // 0x004036A8: addiu       $s1, $v0, 0xC
    ctx->r17 = ADD32(ctx->r2, 0XC);
    // 0x004036AC: lw          $s5, 0x14C($s4)
    ctx->r21 = MEM_W(ctx->r20, 0X14C);
L_004036B0:
    // 0x004036B0: sllv        $v0, $s6, $s0
    ctx->r2 = S32(ctx->r22 << (ctx->r16 & 31));
    // 0x004036B4: and         $v0, $s5, $v0
    ctx->r2 = ctx->r21 & ctx->r2;
    // 0x004036B8: beq         $v0, $zero, L_00403728
    if (ctx->r2 == 0) {
        // 0x004036BC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00403728;
    }
    // 0x004036BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004036C0: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x004036C4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x004036C8: sw          $s0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r16;
    // 0x004036CC: jal         0x0021DC84
    // 0x004036D0: sw          $s0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r16;
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x004036D0: sw          $s0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r16;
    after_0:
    // 0x004036D4: jal         0x00236324
    // 0x004036D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00236324(rdram, ctx);
        goto after_1;
    // 0x004036D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x004036DC: jal         0x00235898
    // 0x004036E0: nop

    func_00235898(rdram, ctx);
        goto after_2;
    // 0x004036E0: nop

    after_2:
    // 0x004036E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004036E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x004036EC: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x004036F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004036F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004036F8: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x004036FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00403700: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00403704: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x00403708: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0040370C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00403710: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00403714: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00403718: jal         0x0020A33C
    // 0x0040371C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_3;
    // 0x0040371C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_3:
    // 0x00403720: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00403724: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
L_00403728:
    // 0x00403728: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040372C: slti        $v0, $s0, 0x5
    ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x00403730: bne         $v0, $zero, L_004036B0
    if (ctx->r2 != 0) {
        // 0x00403734: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_004036B0;
    }
    // 0x00403734: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00403738: lb          $v1, 0x174($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X174);
    // 0x0040373C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00403740: bnel        $v1, $v0, L_00403748
    if (ctx->r3 != ctx->r2) {
        // 0x00403744: sw          $zero, 0x54($s4)
        MEM_W(0X54, ctx->r20) = 0;
            goto L_00403748;
    }
    goto skip_0;
    // 0x00403744: sw          $zero, 0x54($s4)
    MEM_W(0X54, ctx->r20) = 0;
    skip_0:
L_00403748:
    // 0x00403748: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0040374C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00403750: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00403754: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00403758: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0040375C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00403760: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00403764: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00403768: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040376C: jr          $ra
    // 0x00403770: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00403770: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00454C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00454C0C: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_00454C10:
    // 0x00454C10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00454C14: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00454C18: lbu         $v0, 0x5E8C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5E8C);
    // 0x00454C1C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00454C20: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x00454C24: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x00454C28: bne         $v0, $zero, L_00454C10
    if (ctx->r2 != 0) {
        // 0x00454C2C: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_00454C10;
    }
    // 0x00454C2C: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00454C30: jr          $ra
    // 0x00454C34: nop

    return;
    // 0x00454C34: nop

;}
RECOMP_FUNC void func_0023881C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023881C: jr          $ra
    // 0x00238820: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x00238820: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_0025E798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025E79C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0025E7A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025E7A4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0025E7A8: lhu         $a0, 0x42($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X42);
    // 0x0025E7AC: beq         $a0, $zero, L_0025E7D4
    if (ctx->r4 == 0) {
        // 0x0025E7B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025E7D4;
    }
    // 0x0025E7B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025E7B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0025E7B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025E7BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025E7C0: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x0025E7C4: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x0025E7C8: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x0025E7CC: jal         0x00275544
    // 0x0025E7D0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_0;
    // 0x0025E7D0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_0:
L_0025E7D4:
    // 0x0025E7D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025E7D8: jr          $ra
    // 0x0025E7DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025E7DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00239350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00239354: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00239358: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x0023935C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x00239360: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00239364: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00239368: bne         $v0, $zero, L_0023938C
    if (ctx->r2 != 0) {
        // 0x0023936C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_0023938C;
    }
    // 0x0023936C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x00239370: beq         $a0, $zero, L_0023938C
    if (ctx->r4 == 0) {
        // 0x00239374: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023938C;
    }
    // 0x00239374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00239378: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0023937C: bne         $v1, $v0, L_0023938C
    if (ctx->r3 != ctx->r2) {
        // 0x00239380: nop
    
            goto L_0023938C;
    }
    // 0x00239380: nop

    // 0x00239384: jal         0x00246860
    // 0x00239388: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00246860(rdram, ctx);
        goto after_0;
    // 0x00239388: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
L_0023938C:
    // 0x0023938C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00239390: jr          $ra
    // 0x00239394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00239394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00416644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416644: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00416648: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0041664C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00416650: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00416654: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00416658: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0041665C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00416660: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00416664: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00416668: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0041666C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00416670: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x00416674: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00416678: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041667C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00416680: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00416684: blez        $v1, L_004166BC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00416688: addiu       $a1, $v0, 0x1D8
        ctx->r5 = ADD32(ctx->r2, 0X1D8);
            goto L_004166BC;
    }
    // 0x00416688: addiu       $a1, $v0, 0x1D8
    ctx->r5 = ADD32(ctx->r2, 0X1D8);
    // 0x0041668C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x00416690: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00416694: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_00416698:
    // 0x00416698: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0041669C: bne         $v0, $t0, L_004166A8
    if (ctx->r2 != ctx->r8) {
        // 0x004166A0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004166A8;
    }
    // 0x004166A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004166A4: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_004166A8:
    // 0x004166A8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x004166AC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x004166B0: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004166B4: bne         $v0, $zero, L_00416698
    if (ctx->r2 != 0) {
        // 0x004166B8: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_00416698;
    }
    // 0x004166B8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_004166BC:
    // 0x004166BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004166C0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004166C4: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x004166C8: jal         0x00204EDC
    // 0x004166CC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x004166CC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x004166D0: beql        $v0, $zero, L_00416740
    if (ctx->r2 == 0) {
        // 0x004166D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00416740;
    }
    goto skip_0;
    // 0x004166D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x004166D8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x004166DC: bne         $s0, $zero, L_004166EC
    if (ctx->r16 != 0) {
        // 0x004166E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004166EC;
    }
    // 0x004166E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004166E4: j           L_00416740
    // 0x004166E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00416740;
    // 0x004166E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004166EC:
    // 0x004166EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004166F0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004166F4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x004166F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004166FC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00416700: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x00416704: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x00416708: jal         0x00414EA8
    // 0x0041670C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0041670C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x00416710: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00416714: jal         0x00200518
    // 0x00416718: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00416718: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041671C: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x00416720: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00416724: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x00416728: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0041672C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00416730: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x00416734: beql        $v0, $zero, L_0041673C
    if (ctx->r2 == 0) {
        // 0x00416738: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_0041673C;
    }
    goto skip_1;
    // 0x00416738: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_1:
L_0041673C:
    // 0x0041673C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00416740:
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
RECOMP_FUNC void func_00455248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045524C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455250: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00455254: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00455258: addiu       $s0, $s0, -0x550D
    ctx->r16 = ADD32(ctx->r16, -0X550D);
    // 0x0045525C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00455260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00455264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00455268: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045526C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00455270: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00455274: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00455278: jal         0x0041648C
    // 0x0045527C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0045527C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00455280: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00455284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00455288: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045528C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455290: jr          $ra
    // 0x00455294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0043EC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043EC68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0043EC6C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0043EC70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0043EC74: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043EC78: addiu       $s1, $s1, -0x624
    ctx->r17 = ADD32(ctx->r17, -0X624);
    // 0x0043EC7C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0043EC80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0043EC84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0043EC88: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0043EC8C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0043EC90: bne         $v0, $v1, L_0043ECA8
    if (ctx->r2 != ctx->r3) {
        // 0x0043EC94: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_0043ECA8;
    }
    // 0x0043EC94: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0043EC98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043EC9C: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x0043ECA0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x0043ECA4: sw          $v1, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r3;
L_0043ECA8:
    // 0x0043ECA8: lw          $v0, -0x3D4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3D4);
    // 0x0043ECAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0043ECB0: bne         $v0, $a0, L_0043ECC8
    if (ctx->r2 != ctx->r4) {
        // 0x0043ECB4: addiu       $s2, $s1, -0x3D4
        ctx->r18 = ADD32(ctx->r17, -0X3D4);
            goto L_0043ECC8;
    }
    // 0x0043ECB4: addiu       $s2, $s1, -0x3D4
    ctx->r18 = ADD32(ctx->r17, -0X3D4);
    // 0x0043ECB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043ECBC: lwc1        $f0, 0x488($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X488);
    // 0x0043ECC0: swc1        $f0, 0x1FC($s3)
    MEM_W(0X1FC, ctx->r19) = ctx->f0.u32l;
    // 0x0043ECC4: lw          $v0, -0x3D4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3D4);
L_0043ECC8:
    // 0x0043ECC8: bne         $v0, $v1, L_0043ECDC
    if (ctx->r2 != ctx->r3) {
        // 0x0043ECCC: nop
    
            goto L_0043ECDC;
    }
    // 0x0043ECCC: nop

    // 0x0043ECD0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043ECD4: lwc1        $f0, 0x48C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X48C);
    // 0x0043ECD8: swc1        $f0, 0x1FC($s3)
    MEM_W(0X1FC, ctx->r19) = ctx->f0.u32l;
L_0043ECDC:
    // 0x0043ECDC: lw          $v1, -0x3D4($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X3D4);
    // 0x0043ECE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043ECE4: bne         $v1, $v0, L_0043ECF8
    if (ctx->r3 != ctx->r2) {
        // 0x0043ECE8: nop
    
            goto L_0043ECF8;
    }
    // 0x0043ECE8: nop

    // 0x0043ECEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043ECF0: lwc1        $f0, 0x490($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X490);
    // 0x0043ECF4: swc1        $f0, 0x1FC($s3)
    MEM_W(0X1FC, ctx->r19) = ctx->f0.u32l;
L_0043ECF8:
    // 0x0043ECF8: lw          $v0, -0x3D4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3D4);
    // 0x0043ECFC: bne         $v0, $a0, L_0043ED50
    if (ctx->r2 != ctx->r4) {
        // 0x0043ED00: nop
    
            goto L_0043ED50;
    }
    // 0x0043ED00: nop

    // 0x0043ED04: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0043ED08: bne         $v0, $zero, L_0043ED50
    if (ctx->r2 != 0) {
        // 0x0043ED0C: addiu       $a0, $s1, -0x284
        ctx->r4 = ADD32(ctx->r17, -0X284);
            goto L_0043ED50;
    }
    // 0x0043ED0C: addiu       $a0, $s1, -0x284
    ctx->r4 = ADD32(ctx->r17, -0X284);
    // 0x0043ED10: lui         $s0, 0x43
    ctx->r16 = S32(0X43 << 16);
    // 0x0043ED14: addiu       $s0, $s0, 0x1A74
    ctx->r16 = ADD32(ctx->r16, 0X1A74);
    // 0x0043ED18: jal         0x00236314
    // 0x0043ED1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0043ED1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0043ED20: addiu       $a0, $s1, -0x220
    ctx->r4 = ADD32(ctx->r17, -0X220);
    // 0x0043ED24: jal         0x00236314
    // 0x0043ED28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_1;
    // 0x0043ED28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0043ED2C: addiu       $a0, $s1, -0x158
    ctx->r4 = ADD32(ctx->r17, -0X158);
    // 0x0043ED30: jal         0x00236314
    // 0x0043ED34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_2;
    // 0x0043ED34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0043ED38: addiu       $a0, $s1, -0x1BC
    ctx->r4 = ADD32(ctx->r17, -0X1BC);
    // 0x0043ED3C: jal         0x00236314
    // 0x0043ED40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_3;
    // 0x0043ED40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0043ED44: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0043ED48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043ED4C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
L_0043ED50:
    // 0x0043ED50: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043ED54: addiu       $s1, $s1, -0x9F8
    ctx->r17 = ADD32(ctx->r17, -0X9F8);
    // 0x0043ED58: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0043ED5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043ED60: bne         $v1, $v0, L_0043ED9C
    if (ctx->r3 != ctx->r2) {
        // 0x0043ED64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0043ED9C;
    }
    // 0x0043ED64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043ED68: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x0043ED6C: bne         $v1, $v0, L_0043ED9C
    if (ctx->r3 != ctx->r2) {
        // 0x0043ED70: addiu       $a0, $s1, 0x24
        ctx->r4 = ADD32(ctx->r17, 0X24);
            goto L_0043ED9C;
    }
    // 0x0043ED70: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x0043ED74: lui         $s0, 0x43
    ctx->r16 = S32(0X43 << 16);
    // 0x0043ED78: addiu       $s0, $s0, 0x1A74
    ctx->r16 = ADD32(ctx->r16, 0X1A74);
    // 0x0043ED7C: jal         0x00236314
    // 0x0043ED80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_4;
    // 0x0043ED80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0043ED84: addiu       $a0, $s1, 0xEC
    ctx->r4 = ADD32(ctx->r17, 0XEC);
    // 0x0043ED88: jal         0x00236314
    // 0x0043ED8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_5;
    // 0x0043ED8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0043ED90: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x0043ED94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043ED98: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
L_0043ED9C:
    // 0x0043ED9C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043EDA0: addiu       $s0, $s0, -0x9F8
    ctx->r16 = ADD32(ctx->r16, -0X9F8);
    // 0x0043EDA4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0043EDA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043EDAC: bne         $v1, $v0, L_0043EDDC
    if (ctx->r3 != ctx->r2) {
        // 0x0043EDB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043EDDC;
    }
    // 0x0043EDB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043EDB4: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0043EDB8: bne         $v1, $v0, L_0043EDDC
    if (ctx->r3 != ctx->r2) {
        // 0x0043EDBC: nop
    
            goto L_0043EDDC;
    }
    // 0x0043EDBC: nop

    // 0x0043EDC0: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0043EDC4: addiu       $a1, $a1, 0x1A74
    ctx->r5 = ADD32(ctx->r5, 0X1A74);
    // 0x0043EDC8: jal         0x00236314
    // 0x0043EDCC: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    func_00236314(rdram, ctx);
        goto after_6;
    // 0x0043EDCC: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_6:
    // 0x0043EDD0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0043EDD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043EDD8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_0043EDDC:
    // 0x0043EDDC: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0043EDE0: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x0043EDE4: sw          $v0, 0xD4($s3)
    MEM_W(0XD4, ctx->r19) = ctx->r2;
    // 0x0043EDE8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0043EDEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0043EDF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0043EDF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0043EDF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0043EDFC: jr          $ra
    // 0x0043EE00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0043EE00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00263954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263954: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00263958: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0026395C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00263960: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00263964: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x00263968: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x0026396C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00263970: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x00263974: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00263978: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x0026397C: addiu       $a3, $s0, 0x10C
    ctx->r7 = ADD32(ctx->r16, 0X10C);
    // 0x00263980: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x00263984: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00263988: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0026398C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00263990: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x00263994: lw          $t1, 0x1C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X1C);
    // 0x00263998: lw          $t2, 0x20($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X20);
    // 0x0026399C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002639A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002639A4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x002639A8: lw          $t0, 0x40($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X40);
    // 0x002639AC: lw          $t1, 0x44($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X44);
    // 0x002639B0: lw          $t2, 0x48($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X48);
    // 0x002639B4: lw          $t3, 0x4C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4C);
    // 0x002639B8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x002639BC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x002639C0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x002639C4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x002639C8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x002639CC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x002639D0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x002639D4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x002639D8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x002639DC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x002639E0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x002639E4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002639E8: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002639EC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x002639F0: jal         0x0022F350
    // 0x002639F4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    func_0022F350(rdram, ctx);
        goto after_0;
    // 0x002639F4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    after_0:
    // 0x002639F8: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x002639FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00263A00: sw          $v1, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->r3;
    // 0x00263A04: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x00263A08: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00263A0C: jr          $ra
    // 0x00263A10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00263A10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00275AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275AE4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00275AE8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275AEC: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275AF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275AF4: jal         0x002718D8
    // 0x00275AF8: nop

    func_002718D8(rdram, ctx);
        goto after_0;
    // 0x00275AF8: nop

    after_0:
    // 0x00275AFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275B00: jr          $ra
    // 0x00275B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027BE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BE90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027BE94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027BE98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027BE9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027BEA0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0027BEA4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x0027BEA8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0027BEAC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0027BEB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x0027BEB4: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x0027BEB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0027BEBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027BEC0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0027BEC4: jal         0x0020EF2C
    // 0x0027BEC8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0027BEC8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x0027BECC: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0027BED0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0027BED4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0027BED8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0027BEDC: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0027BEE0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0027BEE4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0027BEE8: jal         0x00298470
    // 0x0027BEEC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0027BEEC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x0027BEF0: lwc1        $f1, 0x14($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X14);
    // 0x0027BEF4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0027BEF8: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0027BEFC: nop

    // 0x0027BF00: bc1f        L_0027C058
    if (!c1cs) {
        // 0x0027BF04: nop
    
            goto L_0027C058;
    }
    // 0x0027BF04: nop

    // 0x0027BF08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BF0C: lwc1        $f0, -0x6820($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6820);
    // 0x0027BF10: div.s       $f12, $f20, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f1.fl);
    // 0x0027BF14: jal         0x00266F50
    // 0x0027BF18: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    func_00266F50(rdram, ctx);
        goto after_2;
    // 0x0027BF18: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    after_2:
    // 0x0027BF1C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0027BF20: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x0027BF24: beq         $v1, $zero, L_0027BF60
    if (ctx->r3 == 0) {
        // 0x0027BF28: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_0027BF60;
    }
    // 0x0027BF28: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x0027BF2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027BF30: bne         $v1, $v0, L_0027BF74
    if (ctx->r3 != ctx->r2) {
        // 0x0027BF34: nop
    
            goto L_0027BF74;
    }
    // 0x0027BF34: nop

    // 0x0027BF38: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0027BF3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BF40: lwc1        $f12, -0x681C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X681C);
    // 0x0027BF44: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0027BF48: jal         0x002982F0
    // 0x0027BF4C: nop

    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0027BF4C: nop

    after_3:
    // 0x0027BF50: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0027BF54: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027BF58: j           L_0027BF78
    // 0x0027BF5C: nop

        goto L_0027BF78;
    // 0x0027BF5C: nop

L_0027BF60:
    // 0x0027BF60: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027BF64: jal         0x002119FC
    // 0x0027BF68: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x0027BF68: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    after_4:
    // 0x0027BF6C: j           L_0027BF78
    // 0x0027BF70: nop

        goto L_0027BF78;
    // 0x0027BF70: nop

L_0027BF74:
    // 0x0027BF74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_0027BF78:
    // 0x0027BF78: mul.s       $f1, $f0, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0027BF7C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0027BF80: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027BF84: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x0027BF88: lw          $v1, 0x2C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2C);
    // 0x0027BF8C: beq         $v1, $zero, L_0027BFC8
    if (ctx->r3 == 0) {
        // 0x0027BF90: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_0027BFC8;
    }
    // 0x0027BF90: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x0027BF94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027BF98: bne         $v1, $v0, L_0027BFDC
    if (ctx->r3 != ctx->r2) {
        // 0x0027BF9C: nop
    
            goto L_0027BFDC;
    }
    // 0x0027BF9C: nop

    // 0x0027BFA0: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0027BFA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BFA8: lwc1        $f12, -0x6818($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6818);
    // 0x0027BFAC: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0027BFB0: jal         0x002982F0
    // 0x0027BFB4: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0027BFB4: nop

    after_5:
    // 0x0027BFB8: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0027BFBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027BFC0: j           L_0027BFE0
    // 0x0027BFC4: nop

        goto L_0027BFE0;
    // 0x0027BFC4: nop

L_0027BFC8:
    // 0x0027BFC8: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027BFCC: jal         0x002119FC
    // 0x0027BFD0: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    func_002119FC(rdram, ctx);
        goto after_6;
    // 0x0027BFD0: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    after_6:
    // 0x0027BFD4: j           L_0027BFE0
    // 0x0027BFD8: nop

        goto L_0027BFE0;
    // 0x0027BFD8: nop

L_0027BFDC:
    // 0x0027BFDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_0027BFE0:
    // 0x0027BFE0: mul.s       $f1, $f0, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0027BFE4: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0027BFE8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027BFEC: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x0027BFF0: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x0027BFF4: beq         $v1, $zero, L_0027C030
    if (ctx->r3 == 0) {
        // 0x0027BFF8: addiu       $s0, $s1, 0x40
        ctx->r16 = ADD32(ctx->r17, 0X40);
            goto L_0027C030;
    }
    // 0x0027BFF8: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0027BFFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027C000: bne         $v1, $v0, L_0027C044
    if (ctx->r3 != ctx->r2) {
        // 0x0027C004: nop
    
            goto L_0027C044;
    }
    // 0x0027C004: nop

    // 0x0027C008: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0027C00C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C010: lwc1        $f12, -0x6814($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6814);
    // 0x0027C014: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0027C018: jal         0x002982F0
    // 0x0027C01C: nop

    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0027C01C: nop

    after_7:
    // 0x0027C020: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0027C024: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027C028: j           L_0027C048
    // 0x0027C02C: nop

        goto L_0027C048;
    // 0x0027C02C: nop

L_0027C030:
    // 0x0027C030: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0027C034: jal         0x002119FC
    // 0x0027C038: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    func_002119FC(rdram, ctx);
        goto after_8;
    // 0x0027C038: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    after_8:
    // 0x0027C03C: j           L_0027C048
    // 0x0027C040: nop

        goto L_0027C048;
    // 0x0027C040: nop

L_0027C044:
    // 0x0027C044: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_0027C048:
    // 0x0027C048: mul.s       $f1, $f0, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0027C04C: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0027C050: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C054: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
L_0027C058:
    // 0x0027C058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0027C05C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0027C060: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027C064: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027C068: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0027C06C: jr          $ra
    // 0x0027C070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027C070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00268838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026883C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00268840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00268844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00268848: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x0026884C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268850: bne         $v1, $v0, L_00268868
    if (ctx->r3 != ctx->r2) {
        // 0x00268854: nop
    
            goto L_00268868;
    }
    // 0x00268854: nop

    // 0x00268858: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0026885C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00268860: bne         $v0, $zero, L_002688B8
    if (ctx->r2 != 0) {
        // 0x00268864: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002688B8;
    }
    // 0x00268864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00268868:
    // 0x00268868: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0026886C: bne         $a0, $zero, L_00268880
    if (ctx->r4 != 0) {
        // 0x00268870: nop
    
            goto L_00268880;
    }
    // 0x00268870: nop

    // 0x00268874: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00268878: j           L_00268894
    // 0x0026887C: nop

        goto L_00268894;
    // 0x0026887C: nop

L_00268880:
    // 0x00268880: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00268884: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x00268888: jal         0x0026BE60
    // 0x0026888C: nop

    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x0026888C: nop

    after_0:
    // 0x00268890: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_00268894:
    // 0x00268894: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00268898: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026889C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002688A0: lwc1        $f1, 0x7ED4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7ED4);
    // 0x002688A4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002688A8: nop

    // 0x002688AC: bc1t        L_002688B8
    if (c1cs) {
        // 0x002688B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002688B8;
    }
    // 0x002688B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002688B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002688B8:
    // 0x002688B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002688BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002688C0: jr          $ra
    // 0x002688C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002688C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004155AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004155AC: bne         $s3, $zero, L_004155F4
    if (ctx->r19 != 0) {
        // 0x004155B0: lui         $v1, 0x6
        ctx->r3 = S32(0X6 << 16);
            goto L_004155F4;
    }
    // 0x004155B0: lui         $v1, 0x6
    ctx->r3 = S32(0X6 << 16);
    // 0x004155B4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004155B8: jal         0x00285628
    // 0x004155BC: nop

    func_00285628(rdram, ctx);
        goto after_0;
    // 0x004155BC: nop

    after_0:
    // 0x004155C0: beq         $v0, $zero, L_004155D0
    if (ctx->r2 == 0) {
        // 0x004155C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004155D0;
    }
    // 0x004155C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004155C8: jal         0x004151B4
    // 0x004155CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_004151B4(rdram, ctx);
        goto after_1;
    // 0x004155CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
L_004155D0:
    // 0x004155D0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004155D4: jal         0x00285670
    // 0x004155D8: nop

    func_00285670(rdram, ctx);
        goto after_2;
    // 0x004155D8: nop

    after_2:
    // 0x004155DC: beq         $v0, $zero, L_0041560C
    if (ctx->r2 == 0) {
            // 0x004155E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041560C(rdram, ctx);
    return;
    }
    // 0x004155E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004155E4: jal         0x004151B4
    // 0x004155E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_004151B4(rdram, ctx);
        goto after_3;
    // 0x004155E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_3:
    // 0x004155EC: j           L_0041560C
    // 0x004155F0: nop

    func_0041560C(rdram, ctx);
    return;
    // 0x004155F0: nop

L_004155F4:
    // 0x004155F4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x004155F8: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x004155FC: ori         $v1, $v1, 0x303
    ctx->r3 = ctx->r3 | 0X303;
    // 0x00415600: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00415604: bnel        $v0, $zero, L_0041560C
    if (ctx->r2 != 0) {
            // 0x00415608: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0041560C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00415608: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // turok2: reconnected split function: a stray ELF symbol at 0x0041560C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041560C(rdram, ctx);
;}
RECOMP_FUNC void func_00421454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421454: lw          $a1, 0x518($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X518);
    // 0x00421458: lbu         $v1, 0x30($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X30);
    // 0x0042145C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421460: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x00421464: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x00421468: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x0042146C: sh          $v1, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r3;
    // 0x00421470: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x00421474: sh          $v1, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r3;
    // 0x00421478: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x0042147C: sh          $v1, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r3;
    // 0x00421480: lhu         $v1, 0x6($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X6);
    // 0x00421484: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00421488: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x0042148C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x00421490: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x00421494: sh          $v1, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r3;
    // 0x00421498: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_0042149C:
    // 0x0042149C: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x004214A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004214A4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004214A8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x004214AC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004214B0: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x004214B4: bne         $v0, $zero, L_0042149C
    if (ctx->r2 != 0) {
        // 0x004214B8: addu        $v0, $a1, $a0
        ctx->r2 = ADD32(ctx->r5, ctx->r4);
            goto L_0042149C;
    }
    // 0x004214B8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x004214BC: jr          $ra
    // 0x004214C0: nop

    return;
    // 0x004214C0: nop

;}
RECOMP_FUNC void func_00257720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00257724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025772C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00257730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00257734: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00257738: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x0025773C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00257740: bne         $v0, $zero, L_00257774
    if (ctx->r2 != 0) {
        // 0x00257744: nop
    
            goto L_00257774;
    }
    // 0x00257744: nop

    // 0x00257748: jal         0x00268A5C
    // 0x0025774C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    func_00268A5C(rdram, ctx);
        goto after_0;
    // 0x0025774C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    after_0:
    // 0x00257750: lwc1        $f1, 0xAE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAE4);
    // 0x00257754: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00257758: lwc1        $f2, 0x7244($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7244);
    // 0x0025775C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00257760: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00257764: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x00257768: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0025776C: jal         0x002117DC
    // 0x00257770: addiu       $a0, $s0, 0xAA4
    ctx->r4 = ADD32(ctx->r16, 0XAA4);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x00257770: addiu       $a0, $s0, 0xAA4
    ctx->r4 = ADD32(ctx->r16, 0XAA4);
    after_1:
L_00257774:
    // 0x00257774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00257778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025777C: jr          $ra
    // 0x00257780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00257780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
