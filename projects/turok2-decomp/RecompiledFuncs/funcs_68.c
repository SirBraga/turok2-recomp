#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00236098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236098: jr          $ra
    // 0x0023609C: nop

    return;
    // 0x0023609C: nop

;}
RECOMP_FUNC void func_00451994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451998: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x0045199C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004519A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004519A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004519A8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004519AC: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x004519B0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004519B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x004519B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004519BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004519C0: lb          $v0, 0x20($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X20);
    // 0x004519C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004519C8: jal         0x0041648C
    // 0x004519CC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004519CC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004519D0: sb          $v0, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r2;
    // 0x004519D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004519D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004519DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004519E0: jr          $ra
    // 0x004519E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004519E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00220128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220128: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0022012C: mul.s       $f8, $f5, $f5
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f8.fl = MUL_S(ctx->f5.fl, ctx->f5.fl);
    // 0x00220130: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00220134: mul.s       $f9, $f1, $f1
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f9.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00220138: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0022013C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00220140: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x00220144: mul.s       $f3, $f0, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00220148: add.s       $f4, $f5, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = ctx->f5.fl + ctx->f5.fl;
    // 0x0022014C: mul.s       $f6, $f4, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00220150: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00220154: mul.s       $f7, $f0, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f7.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00220158: nop

    // 0x0022015C: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x00220160: nop

    // 0x00220164: mul.s       $f12, $f0, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00220168: nop

    // 0x0022016C: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x00220170: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x00220174: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00220178: add.s       $f2, $f3, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f8.fl;
    // 0x0022017C: sub.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f8.fl;
    // 0x00220180: sub.s       $f2, $f2, $f9
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f9.fl;
    // 0x00220184: add.s       $f11, $f6, $f7
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f11.fl = ctx->f6.fl + ctx->f7.fl;
    // 0x00220188: sub.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x0022018C: add.s       $f5, $f3, $f9
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f5.fl = ctx->f3.fl + ctx->f9.fl;
    // 0x00220190: sub.s       $f6, $f6, $f7
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f7.fl;
    // 0x00220194: add.s       $f4, $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x00220198: sub.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f9.fl;
    // 0x0022019C: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x002201A0: sub.s       $f5, $f5, $f10
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f10.fl;
    // 0x002201A4: add.s       $f7, $f1, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002201A8: swc1        $f11, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(11 - 1) * 2];
    // 0x002201AC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x002201B0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002201B4: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x002201B8: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x002201BC: add.s       $f3, $f3, $f10
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f10.fl;
    // 0x002201C0: swc1        $f7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(7 - 1) * 2];
    // 0x002201C4: swc1        $f1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x002201C8: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x002201CC: swc1        $f5, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    // 0x002201D0: swc1        $f3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x002201D4: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x002201D8: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x002201DC: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x002201E0: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x002201E4: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x002201E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002201EC: lwc1        $f0, 0x5D60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D60);
    // 0x002201F0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x002201F4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x002201F8: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x002201FC: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x00220200: jr          $ra
    // 0x00220204: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x00220204: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_00451AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418B34:
    // 0x00451AC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451AC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00451ACC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00451AD0: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00451AD4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00451AD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00451ADC: lb          $v0, 0x21($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X21);
    // 0x00451AE0: beq         $v0, $zero, L_00451B14
    if (ctx->r2 == 0) {
        // 0x00451AE4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00451B14;
    }
    // 0x00451AE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00451AE8: jal         0x004160F0
    // 0x00451AEC: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451AEC: nop

    after_0:
    // 0x00451AF0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451AF4: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00451AF8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451AFC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451B00: lb          $a2, 0x21($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X21);
    // 0x00451B04: jal         0x0029E3E0
    // 0x00451B08: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00451B08: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00451B0C: j           L_00418B34
    // 0x00451B10: nop

    entry_00418B34(rdram, ctx);
    return;
    // 0x00451B10: nop

L_00451B14:
    // 0x00451B14: jal         0x004160F0
    // 0x00451B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00451B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00451B1C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451B20: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00451B24: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451B28: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451B2C: jal         0x0029E3E0
    // 0x00451B30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00451B30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x00451B34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00451B38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00451B3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451B40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451B44: jr          $ra
    // 0x00451B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00263A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00263A18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00263A1C: jal         0x0020EEF8
    // 0x00263A20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    func_0020EEF8(rdram, ctx);
        goto after_0;
    // 0x00263A20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    after_0:
    // 0x00263A24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00263A28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00263A2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00263A30: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00263A34: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00263A38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00263A3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00263A40: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x00263A44: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00263A48: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00263A4C: lb          $s3, 0x37($s0)
    ctx->r19 = MEM_B(ctx->r16, 0X37);
    // 0x00263A50: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x00263A54: sltiu       $v0, $s3, 0x5
    ctx->r2 = ctx->r19 < 0X5 ? 1 : 0;
    // 0x00263A58: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263A5C: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00263DA4;
    }
    // 0x00263A5C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00263A60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263A64: addu        $at, $at, $v0
    gpr jr_addend_00263A6C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00263A68: lw          $v0, 0x7BE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X7BE0);
    // 0x00263A6C: jr          $v0
    // 0x00263A70: nop

    switch (jr_addend_00263A6C >> 2) {
        case 0: goto L_00263A74; break;
        case 1: goto L_00263BDC; break;
        case 2: goto L_00263CA0; break;
        case 3: goto L_00263B3C; break;
        case 4: goto L_00263D18; break;
        default: switch_error(__func__, 0x00263A6C, 0x800A7BE0);
    }
    // 0x00263A70: nop

L_00263A74:
    // 0x00263A74: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x00263A78: lui         $v0, 0xC0
    ctx->r2 = S32(0XC0 << 16);
    // 0x00263A7C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263A80: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263A84: lui         $v0, 0x400
        ctx->r2 = S32(0X400 << 16);
            goto L_00263DA4;
    }
    // 0x00263A84: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x00263A88: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263A8C: beq         $v0, $zero, L_00263AB8
    if (ctx->r2 == 0) {
        // 0x00263A90: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_00263AB8;
    }
    // 0x00263A90: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00263A94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263A98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263A9C: beql        $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263AA0: sw          $zero, 0x10C($s0)
        MEM_W(0X10C, ctx->r16) = 0;
            goto L_00263DA4;
    }
    goto skip_0;
    // 0x00263AA0: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    skip_0:
    // 0x00263AA4: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x00263AA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263AAC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00263AB0: j           L_00263AEC
    // 0x00263AB4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00263AEC;
    // 0x00263AB4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00263AB8:
    // 0x00263AB8: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
    // 0x00263ABC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263AC0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263AC4: nop

    // 0x00263AC8: bc1t        L_00263AE0
    if (c1cs) {
        // 0x00263ACC: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_00263AE0;
    }
    // 0x00263ACC: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00263AD0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263AD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263AD8: beq         $v0, $zero, L_00263AF4
    if (ctx->r2 == 0) {
        // 0x00263ADC: nop
    
            goto L_00263AF4;
    }
    // 0x00263ADC: nop

L_00263AE0:
    // 0x00263AE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263AE4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263AE8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00263AEC:
    // 0x00263AEC: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x00263AF0: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
L_00263AF4:
    // 0x00263AF4: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00263AF8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00263AFC: nop

    // 0x00263B00: bc1f        L_00263DA4
    if (!c1cs) {
        // 0x00263B04: lui         $v0, 0x100
        ctx->r2 = S32(0X100 << 16);
            goto L_00263DA4;
    }
    // 0x00263B04: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00263B08: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x00263B0C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x00263B10: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263B14: beq         $v0, $zero, L_00263B24
    if (ctx->r2 == 0) {
        // 0x00263B18: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00263B24;
    }
    // 0x00263B18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00263B1C: j           L_00263DA4
    // 0x00263B20: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_00263DA4;
    // 0x00263B20: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263B24:
    // 0x00263B24: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00263B28: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263B2C: bne         $v0, $zero, L_00263BBC
    if (ctx->r2 != 0) {
        // 0x00263B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263BBC;
    }
    // 0x00263B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00263B34: j           L_00263BC8
    // 0x00263B38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_00263BC8;
    // 0x00263B38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_00263B3C:
    // 0x00263B3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263B40: lwc1        $f20, 0x7BF4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7BF4);
    // 0x00263B44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263B48: lwc1        $f21, 0x7BF8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7BF8);
    // 0x00263B4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00263B50: jal         0x002119FC
    // 0x00263B54: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00263B54: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_1:
    // 0x00263B58: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00263B5C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00263B60: jal         0x002119FC
    // 0x00263B64: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00263B64: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00263B68: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00263B6C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00263B70: jal         0x002119FC
    // 0x00263B74: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00263B74: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x00263B78: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00263B7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263B80: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00263B84: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00263B88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263B8C: lwc1        $f1, 0x7BFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7BFC);
    // 0x00263B90: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x00263B94: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00263B98: nop

    // 0x00263B9C: bc1f        L_00263DA4
    if (!c1cs) {
        // 0x00263BA0: swc1        $f2, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
            goto L_00263DA4;
    }
    // 0x00263BA0: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x00263BA4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x00263BA8: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x00263BAC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00263BB0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263BB4: beq         $v0, $zero, L_00263BC4
    if (ctx->r2 == 0) {
        // 0x00263BB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263BC4;
    }
    // 0x00263BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00263BBC:
    // 0x00263BBC: j           L_00263DA4
    // 0x00263BC0: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_00263DA4;
    // 0x00263BC0: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263BC4:
    // 0x00263BC4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_00263BC8:
    // 0x00263BC8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00263BCC: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263BD0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00263DA4;
    }
    // 0x00263BD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00263BD4: j           L_00263DA4
    // 0x00263BD8: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
        goto L_00263DA4;
    // 0x00263BD8: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263BDC:
    // 0x00263BDC: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263BE0: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00263BE4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00263BE8: nop

    // 0x00263BEC: bc1f        L_00263C08
    if (!c1cs) {
        // 0x00263BF0: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_00263C08;
    }
    // 0x00263BF0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00263BF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263BF8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263BFC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00263C00: j           L_00263C80
    // 0x00263C04: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_00263C80;
    // 0x00263C04: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_00263C08:
    // 0x00263C08: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263C0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C10: beq         $v0, $zero, L_00263C28
    if (ctx->r2 == 0) {
        // 0x00263C14: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00263C28;
    }
    // 0x00263C14: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00263C18: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00263C1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C20: j           L_00263C80
    // 0x00263C24: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
        goto L_00263C80;
    // 0x00263C24: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_00263C28:
    // 0x00263C28: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x00263C2C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263C30: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00263C34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C38: beq         $v0, $zero, L_00263C50
    if (ctx->r2 == 0) {
        // 0x00263C3C: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_00263C50;
    }
    // 0x00263C3C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00263C40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263C44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C48: beq         $v0, $zero, L_00263C74
    if (ctx->r2 == 0) {
        // 0x00263C4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00263C74;
    }
    // 0x00263C4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00263C50:
    // 0x00263C50: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263C54: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00263C58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C5C: beq         $v0, $zero, L_00263C74
    if (ctx->r2 == 0) {
        // 0x00263C60: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00263C74;
    }
    // 0x00263C60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00263C64: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00263C68: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00263C6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263C70: sltu        $a0, $v0, $a0
    ctx->r4 = ctx->r2 < ctx->r4 ? 1 : 0;
L_00263C74:
    // 0x00263C74: beq         $a0, $zero, L_00263C80
    if (ctx->r4 == 0) {
        // 0x00263C78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00263C80;
    }
    // 0x00263C78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00263C7C: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00263C80:
    // 0x00263C80: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263C84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263C88: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263C8C: nop

    // 0x00263C90: bc1f        L_00263D08
    if (!c1cs) {
        // 0x00263C94: nop
    
            goto L_00263D08;
    }
    // 0x00263C94: nop

    // 0x00263C98: j           L_00263CE8
    // 0x00263C9C: nop

        goto L_00263CE8;
    // 0x00263C9C: nop

L_00263CA0:
    // 0x00263CA0: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263CA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263CA8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263CAC: nop

    // 0x00263CB0: bc1fl       L_00263CCC
    if (!c1cs) {
        // 0x00263CB4: sb          $zero, 0x37($s0)
        MEM_B(0X37, ctx->r16) = 0;
            goto L_00263CCC;
    }
    goto skip_1;
    // 0x00263CB4: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    skip_1:
    // 0x00263CB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263CBC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263CC0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00263CC4: j           L_00263CD0
    // 0x00263CC8: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_00263CD0;
    // 0x00263CC8: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_00263CCC:
    // 0x00263CCC: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
L_00263CD0:
    // 0x00263CD0: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263CD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263CD8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263CDC: nop

    // 0x00263CE0: bc1f        L_00263D08
    if (!c1cs) {
        // 0x00263CE4: nop
    
            goto L_00263D08;
    }
    // 0x00263CE4: nop

L_00263CE8:
    // 0x00263CE8: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00263CEC: jal         0x00266F50
    // 0x00263CF0: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    func_00266F50(rdram, ctx);
        goto after_4;
    // 0x00263CF0: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    after_4:
    // 0x00263CF4: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x00263CF8: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00263CFC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263D00: j           L_00263DA4
    // 0x00263D04: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00263DA4;
    // 0x00263D04: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00263D08:
    // 0x00263D08: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263D0C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00263D10: j           L_00263DA4
    // 0x00263D14: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
        goto L_00263DA4;
    // 0x00263D14: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
L_00263D18:
    // 0x00263D18: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263D1C: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00263D20: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00263D24: nop

    // 0x00263D28: bc1f        L_00263D40
    if (!c1cs) {
        // 0x00263D2C: nop
    
            goto L_00263D40;
    }
    // 0x00263D2C: nop

    // 0x00263D30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00263D34: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00263D38: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00263D3C: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_00263D40:
    // 0x00263D40: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263D44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263D48: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00263D4C: nop

    // 0x00263D50: bc1f        L_00263D78
    if (!c1cs) {
        // 0x00263D54: nop
    
            goto L_00263D78;
    }
    // 0x00263D54: nop

    // 0x00263D58: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00263D5C: jal         0x00266F50
    // 0x00263D60: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    func_00266F50(rdram, ctx);
        goto after_5;
    // 0x00263D60: div.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f1.fl);
    after_5:
    // 0x00263D64: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x00263D68: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00263D6C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263D70: j           L_00263D84
    // 0x00263D74: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00263D84;
    // 0x00263D74: swc1        $f1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00263D78:
    // 0x00263D78: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263D7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00263D80: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
L_00263D84:
    // 0x00263D84: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00263D88: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00263D8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263D90: beq         $v0, $zero, L_00263DA4
    if (ctx->r2 == 0) {
        // 0x00263D94: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00263DA4;
    }
    // 0x00263D94: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00263D98: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00263D9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263DA0: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_00263DA4:
    // 0x00263DA4: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x00263DA8: beq         $s3, $v0, L_00263DB4
    if (ctx->r19 == ctx->r2) {
        // 0x00263DAC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00263DB4;
    }
    // 0x00263DAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00263DB0: sb          $v0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r2;
L_00263DB4:
    // 0x00263DB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00263DB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00263DBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00263DC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00263DC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00263DC8: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00263DCC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00263DD0: jr          $ra
    // 0x00263DD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00263DD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0044FEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416F70:
    // 0x0044FEA8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
L_00416F74:
    // 0x0044FEAC: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
L_00416F78:
    // 0x0044FEB0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0044FEB4: beq         $v1, $v0, L_0044FF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0044FEB8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044FF5C;
    }
    // 0x0044FEB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044FEBC: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x0044FEC0: beq         $v0, $zero, L_0044FF0C
    if (ctx->r2 == 0) {
        // 0x0044FEC4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_0044FF0C;
    }
    // 0x0044FEC4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0044FEC8: beql        $v1, $v0, L_0044FF70
    if (ctx->r3 == ctx->r2) {
        // 0x0044FECC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0044FF70;
    }
    goto skip_0;
    // 0x0044FECC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x0044FED0: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x0044FED4: beq         $v0, $zero, L_0044FEEC
    if (ctx->r2 == 0) {
        // 0x0044FED8: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0044FEEC;
    }
    // 0x0044FED8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0044FEDC: beq         $v1, $v0, L_0044FF74
    if (ctx->r3 == ctx->r2) {
        // 0x0044FEE0: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_0044FF74;
    }
    // 0x0044FEE0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0044FEE4: j           L_00416F78
    // 0x0044FEE8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    entry_00416F78(rdram, ctx);
    return;
    // 0x0044FEE8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0044FEEC:
    // 0x0044FEEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0044FEF0: beq         $v1, $v0, L_0044FF70
    if (ctx->r3 == ctx->r2) {
        // 0x0044FEF4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_0044FF70;
    }
    // 0x0044FEF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0044FEF8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0044FEFC: beq         $v1, $v0, L_0044FF54
    if (ctx->r3 == ctx->r2) {
        // 0x0044FF00: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044FF54;
    }
    // 0x0044FF00: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044FF04: j           L_00416F74
    // 0x0044FF08: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    entry_00416F74(rdram, ctx);
    return;
    // 0x0044FF08: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044FF0C:
    // 0x0044FF0C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x0044FF10: beq         $v1, $v0, L_0044FF70
    if (ctx->r3 == ctx->r2) {
        // 0x0044FF14: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_0044FF70;
    }
    // 0x0044FF14: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x0044FF18: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x0044FF1C: beq         $v0, $zero, L_0044FF34
    if (ctx->r2 == 0) {
        // 0x0044FF20: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_0044FF34;
    }
    // 0x0044FF20: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x0044FF24: beq         $v1, $v0, L_0044FF64
    if (ctx->r3 == ctx->r2) {
        // 0x0044FF28: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044FF64;
    }
    // 0x0044FF28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044FF2C: j           L_00416F74
    // 0x0044FF30: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    entry_00416F74(rdram, ctx);
    return;
    // 0x0044FF30: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044FF34:
    // 0x0044FF34: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x0044FF38: beq         $v1, $v0, L_0044FF70
    if (ctx->r3 == ctx->r2) {
        // 0x0044FF3C: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_0044FF70;
    }
    // 0x0044FF3C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x0044FF40: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0044FF44: beq         $v1, $v0, L_0044FF6C
    if (ctx->r3 == ctx->r2) {
        // 0x0044FF48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044FF6C;
    }
    // 0x0044FF48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044FF4C: j           L_00416F74
    // 0x0044FF50: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    entry_00416F74(rdram, ctx);
    return;
    // 0x0044FF50: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044FF54:
    // 0x0044FF54: j           L_00416F70
    // 0x0044FF58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    entry_00416F70(rdram, ctx);
    return;
    // 0x0044FF58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_0044FF5C:
    // 0x0044FF5C: j           L_00416F70
    // 0x0044FF60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    entry_00416F70(rdram, ctx);
    return;
    // 0x0044FF60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_0044FF64:
    // 0x0044FF64: j           L_00416F70
    // 0x0044FF68: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    entry_00416F70(rdram, ctx);
    return;
    // 0x0044FF68: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_0044FF6C:
    // 0x0044FF6C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0044FF70:
    // 0x0044FF70: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044FF74:
    // 0x0044FF74: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0044FF78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044FF7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044FF80: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x0044FF84: jr          $ra
    // 0x0044FF88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x0044FF88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void func_0025FDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FDD8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025FDDC: lh          $v0, 0x6E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6E);
    // 0x0025FDE0: jr          $ra
    // 0x0025FDE4: nop

    return;
    // 0x0025FDE4: nop

;}
RECOMP_FUNC void func_00232FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232FB4: jr          $ra
    // 0x00232FB8: nop

    return;
    // 0x00232FB8: nop

;}
RECOMP_FUNC void func_0042C46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042C474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042C478: jal         0x0028D0E0
    // 0x0042C47C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x0042C47C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // turok2: reconnected split function: a stray ELF symbol at 0x0042C480 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042C480(rdram, ctx);
;}
RECOMP_FUNC void func_00422ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00422EDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00422EE0: jal         0x00284174
    // 0x00422EE4: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00422EE4: nop

    after_0:
    // 0x00422EE8: beql        $v0, $zero, L_00422F08
    if (ctx->r2 == 0) {
        // 0x00422EEC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00422F08;
    }
    goto skip_0;
    // 0x00422EEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00422EF0: jal         0x00284240
    // 0x00422EF4: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x00422EF4: nop

    after_1:
    // 0x00422EF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00422EFC: beq         $v1, $zero, L_00422F08
    if (ctx->r3 == 0) {
        // 0x00422F00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00422F08;
    }
    // 0x00422F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00422F04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00422F08:
    // 0x00422F08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00422F0C: jr          $ra
    // 0x00422F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00422F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00211074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00211078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021107C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00211080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00211084: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00211088: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0021108C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00211090: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00211094: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00211098: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0021109C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002110A0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002110A4: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x002110A8: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x002110AC: jal         0x00298470
    // 0x002110B0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x002110B0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_0:
    // 0x002110B4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002110B8: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x002110BC: nop

    // 0x002110C0: bc1t        L_00211104
    if (c1cs) {
        // 0x002110C4: nop
    
            goto L_00211104;
    }
    // 0x002110C4: nop

    // 0x002110C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002110CC: lwc1        $f1, 0x5650($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5650);
    // 0x002110D0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x002110D4: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002110D8: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x002110DC: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x002110E0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x002110E4: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002110E8: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x002110EC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002110F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002110F4: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x002110F8: swc1        $f3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002110FC: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x00211100: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00211104:
    // 0x00211104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00211108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021110C: jr          $ra
    // 0x00211110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00211110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267F64: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00267F68: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00267F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267F70: bne         $v1, $v0, L_00267FA0
    if (ctx->r3 != ctx->r2) {
            // 0x00267F74: nop

    func_00267FA0(rdram, ctx);
    return;
    }
    // 0x00267F74: nop

    // 0x00267F78: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x00267F7C: blez        $v0, L_00267F94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00267F80: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00267F94;
    }
    // 0x00267F80: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00267F84: lw          $v0, 0x48($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X48);
    // 0x00267F88: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00267F8C: beq         $v0, $zero, L_00267F98
    if (ctx->r2 == 0) {
        // 0x00267F90: nop
    
            goto L_00267F98;
    }
    // 0x00267F90: nop

L_00267F94:
    // 0x00267F94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00267F98:
    // 0x00267F98: jr          $ra
    // 0x00267F9C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00267F9C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00253AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253AB4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00253AB8: jr          $ra
    // 0x00253ABC: nop

    return;
    // 0x00253ABC: nop

;}
RECOMP_FUNC void func_00292530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00292534: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00292538: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0029253C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00292540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00292544: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00292548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029254C: lw          $s0, 0x50($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X50);
    // 0x00292550: beq         $s0, $zero, L_002925C4
    if (ctx->r16 == 0) {
        // 0x00292554: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002925C4;
    }
    // 0x00292554: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00292558: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
L_0029255C:
    // 0x0029255C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00292560: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x00292564: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00292568: bne         $v0, $t0, L_002925B8
    if (ctx->r2 != ctx->r8) {
        // 0x0029256C: addu        $a3, $a3, $a0
        ctx->r7 = ADD32(ctx->r7, ctx->r4);
            goto L_002925B8;
    }
    // 0x0029256C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x00292570: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00292574: bnel        $v0, $a1, L_002925BC
    if (ctx->r2 != ctx->r5) {
        // 0x00292578: addu        $s0, $v1, $zero
        ctx->r16 = ADD32(ctx->r3, 0);
            goto L_002925BC;
    }
    goto skip_0;
    // 0x00292578: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x0029257C: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00292580: beql        $v0, $zero, L_002925C4
    if (ctx->r2 == 0) {
        // 0x00292584: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002925C4;
    }
    goto skip_1;
    // 0x00292584: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_1:
    // 0x00292588: beq         $v1, $zero, L_0029259C
    if (ctx->r3 == 0) {
        // 0x0029258C: nop
    
            goto L_0029259C;
    }
    // 0x0029258C: nop

    // 0x00292590: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x00292594: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00292598: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
L_0029259C:
    // 0x0029259C: jal         0x002933B0
    // 0x002925A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_0;
    // 0x002925A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002925A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002925A8: jal         0x002933E0
    // 0x002925AC: addiu       $a1, $s2, 0x48
    ctx->r5 = ADD32(ctx->r18, 0X48);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x002925AC: addiu       $a1, $s2, 0x48
    ctx->r5 = ADD32(ctx->r18, 0X48);
    after_1:
    // 0x002925B0: j           L_002925C8
    // 0x002925B4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_002925C8;
    // 0x002925B4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002925B8:
    // 0x002925B8: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_002925BC:
    // 0x002925BC: bne         $s0, $zero, L_0029255C
    if (ctx->r16 != 0) {
        // 0x002925C0: nop
    
            goto L_0029255C;
    }
    // 0x002925C0: nop

L_002925C4:
    // 0x002925C4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002925C8:
    // 0x002925C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002925CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002925D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002925D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002925D8: jr          $ra
    // 0x002925DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002925DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00275D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275D34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00275D38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275D3C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00275D40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00275D44: bne         $a1, $zero, L_00275D8C
    if (ctx->r5 != 0) {
        // 0x00275D48: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00275D8C;
    }
    // 0x00275D48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275D4C: j           L_00275DAC
    // 0x00275D50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00275DAC;
    // 0x00275D50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00275D54:
    // 0x00275D54: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00275D58: jal         0x00275864
    // 0x00275D5C: nop

    func_00275864(rdram, ctx);
        goto after_0;
    // 0x00275D5C: nop

    after_0:
    // 0x00275D60: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x00275D64: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00275D68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275D6C: sw          $v0, 0x2A84($at)
    MEM_W(0X2A84, ctx->r1) = ctx->r2;
    // 0x00275D70: jal         0x00200738
    // 0x00275D74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00275D74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00275D78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00275D7C: jal         0x00200574
    // 0x00275D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00275D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00275D84: j           L_00275DAC
    // 0x00275D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00275DAC;
    // 0x00275D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00275D8C:
    // 0x00275D8C: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x00275D90: beq         $s0, $zero, L_00275DAC
    if (ctx->r16 == 0) {
        // 0x00275D94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00275DAC;
    }
    // 0x00275D94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00275D98:
    // 0x00275D98: beq         $s0, $a1, L_00275D54
    if (ctx->r16 == ctx->r5) {
        // 0x00275D9C: nop
    
            goto L_00275D54;
    }
    // 0x00275D9C: nop

    // 0x00275DA0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00275DA4: bne         $s0, $zero, L_00275D98
    if (ctx->r16 != 0) {
        // 0x00275DA8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00275D98;
    }
    // 0x00275DA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00275DAC:
    // 0x00275DAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00275DB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00275DB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275DB8: jr          $ra
    // 0x00275DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00275DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025A550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A554: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A558: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A55C: lhu         $a3, 0x88($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X88);
    // 0x0025A560: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A564: addiu       $a2, $a2, -0x238
    ctx->r6 = ADD32(ctx->r6, -0X238);
    // 0x0025A568: jal         0x00245A98
    // 0x0025A56C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A56C: nop

    after_0:
    // 0x0025A570: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A574: jr          $ra
    // 0x0025A578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00281354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281354: jr          $ra
    // 0x00281358: nop

    return;
    // 0x00281358: nop

;}
RECOMP_FUNC void func_0041C9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041C9E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041C9E4: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C9E8: jal         0x0042E14C
    // 0x0041C9EC: nop

    func_0042E14C(rdram, ctx);
        goto after_0;
    // 0x0041C9EC: nop

    after_0:
    // 0x0041C9F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041C9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C9F8: jr          $ra
    // 0x0041C9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041C9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00211420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00211424: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00211428: jal         0x0027BC34
    // 0x0021142C: nop

    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x0021142C: nop

    after_0:
    // 0x00211430: beq         $v0, $zero, L_00211448
    if (ctx->r2 == 0) {
        // 0x00211434: lui         $v1, 0xA84A
        ctx->r3 = S32(0XA84A << 16);
            goto L_00211448;
    }
    // 0x00211434: lui         $v1, 0xA84A
    ctx->r3 = S32(0XA84A << 16);
    // 0x00211438: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0021143C: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00211440: j           L_00211454
    // 0x00211444: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
        goto L_00211454;
    // 0x00211444: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_00211448:
    // 0x00211448: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021144C: lw          $v0, -0x2878($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2878);
    // 0x00211450: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_00211454:
    // 0x00211454: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00211458: lui         $v0, 0x5834
    ctx->r2 = S32(0X5834 << 16);
    // 0x0021145C: ori         $v0, $v0, 0x8C2D
    ctx->r2 = ctx->r2 | 0X8C2D;
    // 0x00211460: mflo        $a1
    ctx->r5 = lo;
    // 0x00211464: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00211468: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021146C: sw          $v0, -0x2878($at)
    MEM_W(-0X2878, ctx->r1) = ctx->r2;
    // 0x00211470: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x00211474: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00211478: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0021147C: lw          $a0, -0x2878($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2878);
    // 0x00211480: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00211484: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x00211488: srl         $a0, $a0, 16
    ctx->r4 = S32(U32(ctx->r4) >> 16);
    // 0x0021148C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00211490: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00211494: jr          $ra
    // 0x00211498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00211498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020B554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020B558: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020B55C: jal         0x0020B5B8
    // 0x0020B560: nop

    func_0020B5B8(rdram, ctx);
        goto after_0;
    // 0x0020B560: nop

    after_0:
    // 0x0020B564: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020B568: lw          $v0, -0x4760($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4760);
    // 0x0020B56C: beq         $v0, $zero, L_0020B590
    if (ctx->r2 == 0) {
        // 0x0020B570: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_0020B590;
    }
    // 0x0020B570: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0020B574: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B578: sw          $v0, -0x475C($at)
    MEM_W(-0X475C, ctx->r1) = ctx->r2;
    // 0x0020B57C: lui         $v0, 0xC400
    ctx->r2 = S32(0XC400 << 16);
    // 0x0020B580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B584: sw          $v0, -0x4758($at)
    MEM_W(-0X4758, ctx->r1) = ctx->r2;
    // 0x0020B588: j           L_0020B5A4
    // 0x0020B58C: lui         $v0, 0xC800
    ctx->r2 = S32(0XC800 << 16);
        goto L_0020B5A4;
    // 0x0020B58C: lui         $v0, 0xC800
    ctx->r2 = S32(0XC800 << 16);
L_0020B590:
    // 0x0020B590: lui         $v0, 0xC08
    ctx->r2 = S32(0XC08 << 16);
    // 0x0020B594: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B598: sw          $zero, -0x475C($at)
    MEM_W(-0X475C, ctx->r1) = 0;
    // 0x0020B59C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B5A0: sw          $v0, -0x4758($at)
    MEM_W(-0X4758, ctx->r1) = ctx->r2;
L_0020B5A4:
    // 0x0020B5A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B5A8: sw          $v0, -0x4754($at)
    MEM_W(-0X4754, ctx->r1) = ctx->r2;
    // 0x0020B5AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020B5B0: jr          $ra
    // 0x0020B5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020B5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002768A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002768A4: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x002768A8: jr          $ra
    // 0x002768AC: nop

    return;
    // 0x002768AC: nop

;}
RECOMP_FUNC void func_00423D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D18: addiu       $v0, $v0, 0x5264
    ctx->r2 = ADD32(ctx->r2, 0X5264);
    // 0x00423D1C: j           L_00423D30
    // 0x00423D20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00423D30(rdram, ctx);
    return;
    // 0x00423D20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00423D24 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00423D24(rdram, ctx);
;}
RECOMP_FUNC void func_0026EF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EF30: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026EF34: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0026EF38: beq         $a1, $zero, L_0026EF50
    if (ctx->r5 == 0) {
        // 0x0026EF3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026EF50;
    }
    // 0x0026EF3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026EF40: beq         $a1, $v0, L_0026EF94
    if (ctx->r5 == ctx->r2) {
            // 0x0026EF44: nop

    func_0026EF94(rdram, ctx);
    return;
    }
    // 0x0026EF44: nop

    // 0x0026EF48: j           L_0026EFA0
    // 0x0026EF4C: nop

    func_0026EFA0(rdram, ctx);
    return;
    // 0x0026EF4C: nop

L_0026EF50:
    // 0x0026EF50: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026EF54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EF58: lwc1        $f1, -0x7F84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F84);
    // 0x0026EF5C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026EF60: lwc1        $f1, 0x14($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X14);
    // 0x0026EF64: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026EF68: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0026EF6C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0026EF70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0026EF74: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x0026EF78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EF7C: lwc1        $f1, -0x7F80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F80);
    // 0x0026EF80: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0026EF84: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0026EF88: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026EF8C: jr          $ra
    // 0x0026EF90: nop

    return;
    // 0x0026EF90: nop

;}
RECOMP_FUNC void func_0041D76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D76C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0041D770: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0041D774: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0041D778: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041D77C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0041D780: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0041D784: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0041D788: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041D78C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041D790: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x0041D794: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0041D798: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041D79C: lw          $s1, 0x1C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1C);
    // 0x0041D7A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041D7A4: jal         0x0025340C
    // 0x0041D7A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041D7A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0041D7AC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041D7B0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041D7B0(rdram, ctx);
;}
RECOMP_FUNC void func_00226828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226828: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0022682C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226830: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x00226834: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00226838: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0022683C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00226840: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00226844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226848: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0022684C: beq         $a1, $zero, L_00226860
    if (ctx->r5 == 0) {
        // 0x00226850: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_00226860;
    }
    // 0x00226850: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00226854: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00226858: j           L_00226864
    // 0x0022685C: nop

        goto L_00226864;
    // 0x0022685C: nop

L_00226860:
    // 0x00226860: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
L_00226864:
    // 0x00226864: jal         0x002017D4
    // 0x00226868: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226868: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0022686C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226870: jal         0x002017D4
    // 0x00226874: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226874: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00226878: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022687C: jal         0x002017D4
    // 0x00226880: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226880: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00226884: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022688C: jal         0x002017D4
    // 0x00226890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00226890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00226894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226898: jal         0x00201818
    // 0x0022689C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x0022689C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x002268A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002268A4: jal         0x002017D4
    // 0x002268A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002268A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x002268AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002268B0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002268B4: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x002268B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002268BC: beq         $s3, $zero, L_002268E8
    if (ctx->r19 == 0) {
        // 0x002268C0: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002268E8;
    }
    // 0x002268C0: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x002268C4: bgez        $s1, L_002268D0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x002268C8: addu        $v1, $s1, $zero
        ctx->r3 = ADD32(ctx->r17, 0);
            goto L_002268D0;
    }
    // 0x002268C8: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x002268CC: addiu       $v1, $s1, 0x7
    ctx->r3 = ADD32(ctx->r17, 0X7);
L_002268D0:
    // 0x002268D0: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x002268D4: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x002268D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002268DC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002268E0: j           L_0022690C
    // 0x002268E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_0022690C;
    // 0x002268E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_002268E8:
    // 0x002268E8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x002268EC: bltzl       $v0, L_002268F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x002268F0: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_002268F4;
    }
    goto skip_0;
    // 0x002268F0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_0:
L_002268F4:
    // 0x002268F4: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x002268F8: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x002268FC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00226900: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x00226904: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00226908: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_0022690C:
    // 0x0022690C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00226910: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00226914: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00226918: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022691C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226920: jr          $ra
    // 0x00226924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00226924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00294E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294E3C: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x00294E40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00294E44: bne         $a1, $v0, L_00294E64
    if (ctx->r5 != ctx->r2) {
        // 0x00294E48: nop
    
            goto L_00294E64;
    }
    // 0x00294E48: nop

    // 0x00294E4C: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00294E50: sllv        $v0, $v1, $v0
    ctx->r2 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x00294E54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00294E58: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x00294E5C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00294E60: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
L_00294E64:
    // 0x00294E64: jr          $ra
    // 0x00294E68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00294E68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0044F188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0044F18C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0044F190: lbu         $v0, 0x17($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X17);
    // 0x0044F194: sb          $zero, 0x19($sp)
    MEM_B(0X19, ctx->r29) = 0;
    // 0x0044F198: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x0044F19C: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0044F1A0: jal         0x00413F74
    // 0x0044F1A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_0;
    // 0x0044F1A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0044F1A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0044F1AC: jr          $ra
    // 0x0044F1B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0044F1B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00262830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262830: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00262834: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00262838: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026283C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00262840: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00262844: jal         0x002623EC
    // 0x00262848: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_002623EC(rdram, ctx);
        goto after_0;
    // 0x00262848: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0026284C: beq         $v0, $zero, L_00262860
    if (ctx->r2 == 0) {
        // 0x00262850: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00262860;
    }
    // 0x00262850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00262854: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00262858: jal         0x00243414
    // 0x0026285C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0026285C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    after_1:
L_00262860:
    // 0x00262860: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00262864: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00262868: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026286C: jr          $ra
    // 0x00262870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00262870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00412E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412E6C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00412E70: sra         $a3, $a1, 3
    ctx->r7 = S32(SIGNED(ctx->r5) >> 3);
    // 0x00412E74: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x00412E78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00412E7C: beq         $a2, $zero, L_00412E98
    if (ctx->r6 == 0) {
            // 0x00412E80: sllv        $a0, $v0, $a1
    ctx->r4 = S32(ctx->r2 << (ctx->r5 & 31));
    func_00412E98(rdram, ctx);
    return;
    }
    // 0x00412E80: sllv        $a0, $v0, $a1
    ctx->r4 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00412E84: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x00412E88: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00412E8C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00412E90: jr          $ra
    // 0x00412E94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x00412E94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_00298C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298C98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00298C9C: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00298CA0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00298CA4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00298CA8: addiu       $a3, $a3, 0x13E0
    ctx->r7 = ADD32(ctx->r7, 0X13E0);
    // 0x00298CAC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00298CB0: addiu       $v1, $v1, 0x13DC
    ctx->r3 = ADD32(ctx->r3, 0X13DC);
    // 0x00298CB4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00298CB8: beq         $v0, $zero, L_00298D40
    if (ctx->r2 == 0) {
        // 0x00298CBC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00298D40;
    }
    // 0x00298CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00298CC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x00298CC4: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x00298CC8: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_00298CCC:
    // 0x00298CCC: lwl         $t4, 0x0($a3)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r7, 0X0);
    // 0x00298CD0: lwr         $t4, 0x3($a3)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r7, 0X3);
    // 0x00298CD4: lwl         $t5, 0x4($a3)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r7, 0X4);
    // 0x00298CD8: lwr         $t5, 0x7($a3)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r7, 0X7);
    // 0x00298CDC: swl         $t4, 0x0($sp)
    do_swl(rdram, 0X0, ctx->r29, ctx->r12);
    // 0x00298CE0: swr         $t4, 0x3($sp)
    do_swr(rdram, 0X3, ctx->r29, ctx->r12);
    // 0x00298CE4: swl         $t5, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r13);
    // 0x00298CE8: swr         $t5, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r13);
    // 0x00298CEC: lbu         $v0, 0x2($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2);
    // 0x00298CF0: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00298CF4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x00298CF8: bne         $v0, $zero, L_00298D24
    if (ctx->r2 != 0) {
        // 0x00298CFC: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_00298D24;
    }
    // 0x00298CFC: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x00298D00: lbu         $v0, 0x5($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X5);
    // 0x00298D04: lbu         $v1, 0x4($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X4);
    // 0x00298D08: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00298D0C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00298D10: sllv        $v0, $t3, $a2
    ctx->r2 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x00298D14: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x00298D18: lbu         $v1, 0x6($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6);
    // 0x00298D1C: or          $t1, $t1, $v0
    ctx->r9 = ctx->r9 | ctx->r2;
    // 0x00298D20: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_00298D24:
    // 0x00298D24: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00298D28: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x00298D2C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00298D30: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x00298D34: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00298D38: bne         $v0, $zero, L_00298CCC
    if (ctx->r2 != 0) {
        // 0x00298D3C: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_00298CCC;
    }
    // 0x00298D3C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_00298D40:
    // 0x00298D40: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x00298D44: jr          $ra
    // 0x00298D48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00298D48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00425E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425E74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00425E78: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00425E7C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00425E80: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00425E84: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00425E88: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x00425E8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425E90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00425E94: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x00425E98: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00425E9C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00425EA0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00425EA4: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00425EA8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00425EAC: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x00425EB0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00425EB4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00425EB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00425EBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00425EC0: beq         $v0, $v1, L_00425ED0
    if (ctx->r2 == ctx->r3) {
        // 0x00425EC4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00425ED0;
    }
    // 0x00425EC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00425EC8: j           L_00426038
    // 0x00425ECC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00426038(rdram, ctx);
    return;
    // 0x00425ECC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00425ED0:
    // 0x00425ED0: sll         $v0, $s3, 7
    ctx->r2 = S32(ctx->r19 << 7);
    // 0x00425ED4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00425ED8: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x00425EDC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00425EE0: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x00425EE4: sll         $s2, $s4, 5
    ctx->r18 = S32(ctx->r20 << 5);
    // 0x00425EE8: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00425EEC: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x00425EF0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00425EF4: bne         $v0, $zero, L_00425F04
    if (ctx->r2 != 0) {
        // 0x00425EF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00425F04;
    }
    // 0x00425EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00425EFC: j           L_00426034
    // 0x00425F00: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    entry_00426034(rdram, ctx);
    return;
    // 0x00425F00: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_00425F04:
    // 0x00425F04: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00425F08: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00425F0C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425F10: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x00425F14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00425F18: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00425F1C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00425F20: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00425F24: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x00425F28: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x00425F2C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00425F30: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00425F34: lw          $a1, 0x2224($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2224);
    // 0x00425F38: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
    // 0x00425F3C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x00425F40: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x00425F44: jal         0x0029E460
    // 0x00425F48: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00425F48: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_0:
    // 0x00425F4C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00425F50: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00425F54: lw          $a1, 0x2224($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2224);
    // 0x00425F58: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00425F5C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x00425F60: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x00425F64: jal         0x0029E460
    // 0x00425F68: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    func_0029E460(rdram, ctx);
        goto after_1;
    // 0x00425F68: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    after_1:
    // 0x00425F6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425F70: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x00425F74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425F78: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x00425F7C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x00425F80: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // turok2: reconnected split function: a stray ELF symbol at 0x00425F84 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00425F84(rdram, ctx);
;}
RECOMP_FUNC void func_0045CC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00429124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429124: beq         $s3, $zero, L_004291E8
    if (ctx->r19 == 0) {
        // 0x00429128: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_004291E8;
    }
    // 0x00429128: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x0042912C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00429130: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00429134: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x00429138: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042913C: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x00429140: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x00429144: lbu         $v0, 0x65($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X65);
    // 0x00429148: beq         $v0, $zero, L_00429164
    if (ctx->r2 == 0) {
        // 0x0042914C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00429164;
    }
    // 0x0042914C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00429150: jal         0x00429EC4
    // 0x00429154: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00429154: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_0:
    // 0x00429158: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042915C: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x00429160: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_004292CC;
    }
    // 0x00429160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429164:
    // 0x00429164: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429168: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0042916C: jal         0x00299680
    // 0x00429170: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429170: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00429174: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429178: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x0042917C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_004292CC;
    }
    // 0x0042917C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00429180: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00429184: jal         0x00429DB4
    // 0x00429188: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    func_00429DB4(rdram, ctx);
        goto after_2;
    // 0x00429188: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    after_2:
    // 0x0042918C: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x00429190: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x00429194: bne         $v1, $v0, L_004291AC
    if (ctx->r3 != ctx->r2) {
        // 0x00429198: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_004291AC;
    }
    // 0x00429198: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0042919C: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x004291A0: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x004291A4: beq         $v1, $v0, L_004291F4
    if (ctx->r3 == ctx->r2) {
        // 0x004291A8: nop
    
            goto L_004291F4;
    }
    // 0x004291A8: nop

L_004291AC:
    // 0x004291AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004291B0: jal         0x00429748
    // 0x004291B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00429748(rdram, ctx);
        goto after_3;
    // 0x004291B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x004291B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004291BC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004291C0: bne         $v1, $v0, L_004291EC
    if (ctx->r3 != ctx->r2) {
        // 0x004291C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004291EC;
    }
    // 0x004291C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004291C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004291CC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004291D0: jal         0x00429460
    // 0x004291D4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_4;
    // 0x004291D4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004291D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004291DC: beq         $v1, $zero, L_004291F4
    if (ctx->r3 == 0) {
        // 0x004291E0: nop
    
            goto L_004291F4;
    }
    // 0x004291E0: nop

    // 0x004291E4: j           L_004292CC
    // 0x004291E8: nop

        goto L_004292CC;
L_004291E8:
    // 0x004291E8: nop

L_004291EC:
    // 0x004291EC: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x004291F0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004292CC;
    }
    // 0x004291F0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004291F4:
    // 0x004291F4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x004291F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004291FC: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429200: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429200: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00429208: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042920C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00429210: jal         0x00429460
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_5;
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00429218: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042921C: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x00429220: nop
    
            goto L_004292CC;
    }
    // 0x00429220: nop

    // 0x00429224: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x00429228: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0042922C: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429230: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429230: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429234: j           L_004292CC
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_004292CC;
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0042923C:
    // 0x0042923C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429240:
    // 0x00429240: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429244: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429248: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042924C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429250: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429254: bne         $v0, $zero, L_00429240
    if (ctx->r2 != 0) {
        // 0x00429258: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429240;
    }
    // 0x00429258: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x0042925C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429260: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429264: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429268: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x0042926C: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429270: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429274: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0042927C: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429280: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429284: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429288: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x0042928C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429290: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429294: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429298: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x0042929C: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x004292A0: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x004292A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004292A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004292AC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004292B0: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x004292B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004292B8: jal         0x00299680
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_6;
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_6:
    // 0x004292C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004292C4: beql        $v1, $zero, L_004292CC
    if (ctx->r3 == 0) {
        // 0x004292C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004292CC;
    }
    goto skip_0;
    // 0x004292C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004292CC:
    // 0x004292CC: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x004292D0: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x004292D4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004292D8: jr          $ra
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00418158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418158: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041815C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00418160: lb          $v1, 0x2B($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2B);
    // 0x00418164: beq         $v1, $zero, L_0041817C
    if (ctx->r3 == 0) {
        // 0x00418168: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041817C;
    }
    // 0x00418168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041816C: beq         $v1, $v0, L_0041818C
    if (ctx->r3 == ctx->r2) {
        // 0x00418170: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041818C;
    }
    // 0x00418170: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418174: j           L_0041819C
    // 0x00418178: nop

        goto L_0041819C;
    // 0x00418178: nop

L_0041817C:
    // 0x0041817C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418180: addiu       $v0, $v0, 0x4210
    ctx->r2 = ADD32(ctx->r2, 0X4210);
    // 0x00418184: j           L_00418198
    // 0x00418188: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418198;
    // 0x00418188: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041818C:
    // 0x0041818C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418190: addiu       $v0, $v0, 0x4220
    ctx->r2 = ADD32(ctx->r2, 0X4220);
    // 0x00418194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418198:
    // 0x00418198: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041819C:
    // 0x0041819C: jr          $ra
    // 0x004181A0: nop

    return;
    // 0x004181A0: nop

;}
RECOMP_FUNC void func_00265E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265E20: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00265E24: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00265E28: beq         $v0, $zero, L_00265E54
    if (ctx->r2 == 0) {
        // 0x00265E2C: nop
    
            goto L_00265E54;
    }
    // 0x00265E2C: nop

    // 0x00265E30: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00265E34: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00265E38: beq         $v0, $zero, L_00265E54
    if (ctx->r2 == 0) {
        // 0x00265E3C: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00265E54;
    }
    // 0x00265E3C: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00265E40: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00265E44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265E48: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00265E4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265E50: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00265E54:
    // 0x00265E54: jr          $ra
    // 0x00265E58: nop

    return;
    // 0x00265E58: nop

;}
RECOMP_FUNC void func_002541E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002541E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002541E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002541EC: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x002541F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002541F4: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x002541F8: bne         $v0, $zero, L_00254208
    if (ctx->r2 != 0) {
        // 0x002541FC: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_00254208;
    }
    // 0x002541FC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00254200: j           L_0025424C
    // 0x00254204: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
        goto L_0025424C;
    // 0x00254204: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
L_00254208:
    // 0x00254208: lw          $v0, 0x20C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20C);
    // 0x0025420C: beq         $v0, $zero, L_00254234
    if (ctx->r2 == 0) {
        // 0x00254210: nop
    
            goto L_00254234;
    }
    // 0x00254210: nop

    // 0x00254214: lw          $v0, 0x518($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X518);
    // 0x00254218: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0025421C: beq         $v0, $zero, L_00254234
    if (ctx->r2 == 0) {
        // 0x00254220: nop
    
            goto L_00254234;
    }
    // 0x00254220: nop

    // 0x00254224: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00254228: lw          $a2, -0x24A4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X24A4);
    // 0x0025422C: j           L_0025424C
    // 0x00254230: nop

        goto L_0025424C;
    // 0x00254230: nop

L_00254234:
    // 0x00254234: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00254238: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x0025423C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00254240: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254244: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00254248: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
L_0025424C:
    // 0x0025424C: lw          $a3, 0xC04($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC04);
    // 0x00254250: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00254254: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00254258: jal         0x002241D8
    // 0x0025425C: nop

    func_002241D8(rdram, ctx);
        goto after_0;
    // 0x0025425C: nop

    after_0:
    // 0x00254260: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00254264: jr          $ra
    // 0x00254268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00254268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00254A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254A5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00254A60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00254A64: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00254A68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00254A6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00254A70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00254A74: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x00254A78: beq         $s0, $zero, L_00254AEC
    if (ctx->r16 == 0) {
        // 0x00254A7C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00254AEC;
    }
    // 0x00254A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00254A80: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00254A84: addiu       $s2, $s2, -0x5350
    ctx->r18 = ADD32(ctx->r18, -0X5350);
    // 0x00254A88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00254A8C:
    // 0x00254A8C: jal         0x0025340C
    // 0x00254A90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00254A90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00254A94: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00254A98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00254A9C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_00254AA0:
    // 0x00254AA0: beql        $a0, $a2, L_00254AC0
    if (ctx->r4 == ctx->r6) {
        // 0x00254AA4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00254AC0;
    }
    goto skip_0;
    // 0x00254AA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x00254AA8: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00254AAC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x00254AB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00254AB4: lhu         $v0, 0x10($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X10);
    // 0x00254AB8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00254ABC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00254AC0:
    // 0x00254AC0: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00254AC4: bne         $v0, $zero, L_00254AA0
    if (ctx->r2 != 0) {
        // 0x00254AC8: nop
    
            goto L_00254AA0;
    }
    // 0x00254AC8: nop

    // 0x00254ACC: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00254AD0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00254AD4: beq         $v0, $zero, L_00254AEC
    if (ctx->r2 == 0) {
        // 0x00254AD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00254AEC;
    }
    // 0x00254AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254ADC: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00254AE0: bne         $s0, $zero, L_00254A8C
    if (ctx->r16 != 0) {
        // 0x00254AE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00254A8C;
    }
    // 0x00254AE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00254AE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00254AEC:
    // 0x00254AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00254AF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00254AF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00254AF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00254AFC: jr          $ra
    // 0x00254B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00254B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00299674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299674: jal         0x0025EB24
    // 0x00299678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025EB24(rdram, ctx);
        goto after_0;
    // 0x00299678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0029967C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
;}
RECOMP_FUNC void func_0040813C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040813C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00408140: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00408144: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00408148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040814C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00408150: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00408154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040815C: jal         0x002532A8
    // 0x00408160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00408160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00408164: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x00408168: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0040816C: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x00408170: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00408174: addiu       $a2, $a2, 0x6674
    ctx->r6 = ADD32(ctx->r6, 0X6674);
    // 0x00408178: jal         0x0027FC2C
    // 0x0040817C: nop

    func_0027FC2C(rdram, ctx);
        goto after_1;
    // 0x0040817C: nop

    after_1:
    // 0x00408180: addiu       $a1, $zero, 0x5336
    ctx->r5 = ADD32(0, 0X5336);
    // 0x00408184: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408188: lwc1        $f0, 0x588($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X588);
    // 0x0040818C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00408190: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    // 0x00408194: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00408198: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0040819C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x004081A0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x004081A4: jal         0x00219F74
    // 0x004081A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_2;
    // 0x004081A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004081AC: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x004081B0: addiu       $s1, $s1, 0xF0
    ctx->r17 = ADD32(ctx->r17, 0XF0);
    // 0x004081B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004081B8: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x004081BC: sb          $v0, 0xC6($a1)
    MEM_B(0XC6, ctx->r5) = ctx->r2;
    // 0x004081C0: addiu       $v0, $zero, 0x5336
    ctx->r2 = ADD32(0, 0X5336);
    // 0x004081C4: sh          $v0, 0xC4($a1)
    MEM_H(0XC4, ctx->r5) = ctx->r2;
    // 0x004081C8: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x004081CC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x004081D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004081D4: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x004081D8: jal         0x0027AD98
    // 0x004081DC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    func_0027AD98(rdram, ctx);
        goto after_3;
    // 0x004081DC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    after_3:
    // 0x004081E0: jal         0x0027ADA0
    // 0x004081E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027ADA0(rdram, ctx);
        goto after_4;
    // 0x004081E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x004081E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004081EC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004081F0: jal         0x00225D0C
    // 0x004081F4: nop

    func_00225D0C(rdram, ctx);
        goto after_5;
    // 0x004081F4: nop

    after_5:
    // 0x004081F8: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x004081FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00408200: beq         $v1, $v0, L_00408288
    if (ctx->r3 == ctx->r2) {
        // 0x00408204: nop
    
            goto L_00408288;
    }
    // 0x00408204: nop

    // 0x00408208: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040820C: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00408210: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00408214: lw          $a1, -0x6770($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6770);
    // 0x00408218: beq         $a0, $zero, L_00408288
    if (ctx->r4 == 0) {
        // 0x0040821C: nop
    
            goto L_00408288;
    }
    // 0x0040821C: nop

    // 0x00408220: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00408224: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x00408228: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
L_0040822C:
    // 0x0040822C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00408230: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408234: bne         $v0, $t0, L_0040827C
    if (ctx->r2 != ctx->r8) {
        // 0x00408238: nop
    
            goto L_0040827C;
    }
    // 0x00408238: nop

    // 0x0040823C: lw          $v0, 0x1B8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1B8);
    // 0x00408240: bne         $v0, $zero, L_0040827C
    if (ctx->r2 != 0) {
        // 0x00408244: nop
    
            goto L_0040827C;
    }
    // 0x00408244: nop

    // 0x00408248: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0040824C: beq         $v0, $zero, L_00408264
    if (ctx->r2 == 0) {
        // 0x00408250: nop
    
            goto L_00408264;
    }
    // 0x00408250: nop

    // 0x00408254: lw          $v1, 0x1C0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C0);
    // 0x00408258: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0040825C: bne         $v1, $v0, L_0040827C
    if (ctx->r3 != ctx->r2) {
        // 0x00408260: nop
    
            goto L_0040827C;
    }
    // 0x00408260: nop

L_00408264:
    // 0x00408264: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00408268: sw          $a1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r5;
    // 0x0040826C: sw          $a1, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r5;
    // 0x00408270: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00408274: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00408278: sw          $v0, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r2;
L_0040827C:
    // 0x0040827C: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00408280: bne         $a0, $zero, L_0040822C
    if (ctx->r4 != 0) {
        // 0x00408284: nop
    
            goto L_0040822C;
    }
    // 0x00408284: nop

L_00408288:
    // 0x00408288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040828C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00408290: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00408294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408298: jr          $ra
    // 0x0040829C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040829C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0027A2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027A2C4: addu        $t4, $a1, $zero
    ctx->r12 = ADD32(ctx->r5, 0);
    // 0x0027A2C8: addu        $t5, $a2, $zero
    ctx->r13 = ADD32(ctx->r6, 0);
    // 0x0027A2CC: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    // 0x0027A2D0: lui         $a3, 0xF590
    ctx->r7 = S32(0XF590 << 16);
    // 0x0027A2D4: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x0027A2D8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0027A2DC: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0027A2E0: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
    // 0x0027A2E4: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x0027A2E8: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x0027A2EC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0027A2F0: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x0027A2F4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0027A2F8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027A2FC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0027A300: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x0027A304: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x0027A308: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0027A30C: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x0027A310: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x0027A314: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0027A318: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x0027A31C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x0027A320: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027A324: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0027A328: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0027A32C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0027A330: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027A334: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x0027A338: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0027A33C: bgez        $t2, L_0027A348
    if (SIGNED(ctx->r10) >= 0) {
        // 0x0027A340: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_0027A348;
    }
    // 0x0027A340: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x0027A344: addiu       $t0, $t2, 0xF
    ctx->r8 = ADD32(ctx->r10, 0XF);
L_0027A348:
    // 0x0027A348: sra         $a1, $t0, 4
    ctx->r5 = S32(SIGNED(ctx->r8) >> 4);
    // 0x0027A34C: blez        $a1, L_0027A358
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027A350: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_0027A358;
    }
    // 0x0027A350: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x0027A354: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_0027A358:
    // 0x0027A358: mult        $t2, $t3
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027A35C: mflo        $t6
    ctx->r14 = lo;
    // 0x0027A360: addiu       $v0, $t6, 0x3
    ctx->r2 = ADD32(ctx->r14, 0X3);
    // 0x0027A364: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x0027A368: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x0027A36C: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x0027A370: beql        $v0, $zero, L_0027A378
    if (ctx->r2 == 0) {
        // 0x0027A374: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_0027A378;
    }
    goto skip_0;
    // 0x0027A374: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_0:
L_0027A378:
    // 0x0027A378: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x0027A37C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027A380: blez        $a1, L_0027A3C4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027A384: or          $a0, $v0, $t1
        ctx->r4 = ctx->r2 | ctx->r9;
            goto L_0027A3C4;
    }
    // 0x0027A384: or          $a0, $v0, $t1
    ctx->r4 = ctx->r2 | ctx->r9;
    // 0x0027A388: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x0027A38C: bne         $a1, $zero, L_0027A398
    if (ctx->r5 != 0) {
        // 0x0027A390: nop
    
            goto L_0027A398;
    }
    // 0x0027A390: nop

    // 0x0027A394: break       7
    do_break(2597780);
L_0027A398:
    // 0x0027A398: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027A39C: bne         $a1, $at, L_0027A3B0
    if (ctx->r5 != ctx->r1) {
        // 0x0027A3A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027A3B0;
    }
    // 0x0027A3A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027A3A4: bne         $v1, $at, L_0027A3B0
    if (ctx->r3 != ctx->r1) {
        // 0x0027A3A8: nop
    
            goto L_0027A3B0;
    }
    // 0x0027A3A8: nop

    // 0x0027A3AC: break       6
    do_break(2597804);
L_0027A3B0:
    // 0x0027A3B0: mflo        $v0
    ctx->r2 = lo;
    // 0x0027A3B4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A3B8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027A3BC: j           L_0027A3D0
    // 0x0027A3C0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
        goto L_0027A3D0;
    // 0x0027A3C0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_0027A3C4:
    // 0x0027A3C4: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x0027A3C8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027A3CC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0027A3D0:
    // 0x0027A3D0: lui         $a3, 0xF580
    ctx->r7 = S32(0XF580 << 16);
    // 0x0027A3D4: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x0027A3D8: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x0027A3DC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0027A3E0: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x0027A3E4: ori         $t1, $t1, 0x400
    ctx->r9 = ctx->r9 | 0X400;
    // 0x0027A3E8: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x0027A3EC: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027A3F0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0027A3F4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0027A3F8: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x0027A3FC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x0027A400: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027A404: sra         $v0, $t2, 1
    ctx->r2 = S32(SIGNED(ctx->r10) >> 1);
    // 0x0027A408: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0027A40C: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0027A410: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x0027A414: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027A418: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x0027A41C: addiu       $t0, $a1, 0x10
    ctx->r8 = ADD32(ctx->r5, 0X10);
    // 0x0027A420: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027A424: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x0027A428: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027A42C: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x0027A430: addiu       $v1, $t2, -0x1
    ctx->r3 = ADD32(ctx->r10, -0X1);
    // 0x0027A434: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027A438: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A43C: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027A440: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0027A444: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x0027A448: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0027A44C: addiu       $v0, $t3, -0x1
    ctx->r2 = ADD32(ctx->r11, -0X1);
    // 0x0027A450: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A454: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A458: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027A45C: addiu       $a3, $a1, 0x18
    ctx->r7 = ADD32(ctx->r5, 0X18);
    // 0x0027A460: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0027A464: addu        $v1, $t4, $t2
    ctx->r3 = ADD32(ctx->r12, ctx->r10);
    // 0x0027A468: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027A46C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A470: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027A474: addu        $v0, $t5, $t3
    ctx->r2 = ADD32(ctx->r13, ctx->r11);
    // 0x0027A478: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A47C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A480: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x0027A484: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0027A488: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027A48C: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x0027A490: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A494: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027A498: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x0027A49C: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x0027A4A0: sll         $v1, $t5, 2
    ctx->r3 = S32(ctx->r13 << 2);
    // 0x0027A4A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A4A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027A4AC: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x0027A4B0: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x0027A4B4: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x0027A4B8: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0027A4BC: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x0027A4C0: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x0027A4C4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x0027A4C8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0027A4CC: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x0027A4D0: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x0027A4D4: jr          $ra
    // 0x0027A4D8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    return;
    // 0x0027A4D8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
;}
RECOMP_FUNC void func_00226F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00280E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280E64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00280E68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00280E6C: sh          $a1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r5;
    // 0x00280E70: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x00280E74: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00280E78: sh          $zero, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = 0;
    // 0x00280E7C: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x00280E80: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00280E84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280E88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00280E8C: lw          $v0, 0x6CB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CB0);
    // 0x00280E90: beq         $v0, $zero, L_00280EA0
    if (ctx->r2 == 0) {
        // 0x00280E94: nop
    
            goto L_00280EA0;
    }
    // 0x00280E94: nop

    // 0x00280E98: jalr        $v0
    // 0x00280E9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00280E9C: nop

    after_0:
L_00280EA0:
    // 0x00280EA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00280EA4: jr          $ra
    // 0x00280EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00280EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041C274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C274: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C278: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x0041C27C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C280: beq         $v1, $v0, L_0041C2C0
    if (ctx->r3 == ctx->r2) {
        // 0x0041C284: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041C2C0;
    }
    // 0x0041C284: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041C288: beq         $v0, $zero, L_0041C2A0
    if (ctx->r2 == 0) {
        // 0x0041C28C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041C2A0;
    }
    // 0x0041C28C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041C290: beq         $v1, $zero, L_0041C2B0
    if (ctx->r3 == 0) {
        // 0x0041C294: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041C2B0;
    }
    // 0x0041C294: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C298: j           L_0041C2E0
    // 0x0041C29C: nop

        goto L_0041C2E0;
    // 0x0041C29C: nop

L_0041C2A0:
    // 0x0041C2A0: beq         $v1, $v0, L_0041C2D0
    if (ctx->r3 == ctx->r2) {
        // 0x0041C2A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041C2D0;
    }
    // 0x0041C2A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C2A8: j           L_0041C2E0
    // 0x0041C2AC: nop

        goto L_0041C2E0;
    // 0x0041C2AC: nop

L_0041C2B0:
    // 0x0041C2B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C2B4: addiu       $v0, $v0, 0x3F90
    ctx->r2 = ADD32(ctx->r2, 0X3F90);
    // 0x0041C2B8: j           L_0041C2DC
    // 0x0041C2BC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C2DC;
    // 0x0041C2BC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C2C0:
    // 0x0041C2C0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C2C4: addiu       $v0, $v0, 0x3FA8
    ctx->r2 = ADD32(ctx->r2, 0X3FA8);
    // 0x0041C2C8: j           L_0041C2DC
    // 0x0041C2CC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C2DC;
    // 0x0041C2CC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C2D0:
    // 0x0041C2D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C2D4: addiu       $v0, $v0, 0x3FC0
    ctx->r2 = ADD32(ctx->r2, 0X3FC0);
    // 0x0041C2D8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C2DC:
    // 0x0041C2DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041C2E0:
    // 0x0041C2E0: jr          $ra
    // 0x0041C2E4: nop

    return;
    // 0x0041C2E4: nop

;}
RECOMP_FUNC void STVM_MapTLB(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0021E500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0021E428:
    // The c.lt.s at 0x0021E4F8 lives in the preceding split C body.
    // Reconstruct its condition before executing the original bc1f.
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x0021E500: bc1f        L_0021E510
    if (!c1cs) {
        // 0x0021E504: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0021E510;
    }
    // 0x0021E504: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0021E508: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x0021E50C: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_0021E510:
    // 0x0021E510: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0021E514: bne         $v0, $zero, L_0021E428
    if (ctx->r2 != 0) {
            // 0x0021E518: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    static_4_0021E428(rdram, ctx);
    return;
    }
    // 0x0021E518: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x0021E51C: beq         $s4, $zero, L_0021E590
    if (ctx->r20 == 0) {
        // 0x0021E520: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_0021E590;
    }
    // 0x0021E520: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x0021E524: lw          $v1, 0xB8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB8);
    // 0x0021E528: addiu       $a0, $s4, 0x70
    ctx->r4 = ADD32(ctx->r20, 0X70);
L_0021E52C:
    // 0x0021E52C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x0021E530: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0021E534: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0021E538: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x0021E53C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x0021E540: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x0021E544: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x0021E548: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x0021E54C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0021E550: bne         $v0, $a0, L_0021E52C
    if (ctx->r2 != ctx->r4) {
        // 0x0021E554: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0021E52C;
    }
    // 0x0021E554: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0021E558: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x0021E55C: lw          $v0, 0xD4($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XD4);
    // 0x0021E560: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021E564: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021E568: beq         $v0, $zero, L_0021E590
    if (ctx->r2 == 0) {
        // 0x0021E56C: nop
    
            goto L_0021E590;
    }
    // 0x0021E56C: nop

    // 0x0021E570: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021E574: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0021E578: bne         $v0, $zero, L_0021E590
    if (ctx->r2 != 0) {
        // 0x0021E57C: nop
    
            goto L_0021E590;
    }
    // 0x0021E57C: nop

    // 0x0021E580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E584: lwc1        $f0, 0x5CDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CDC);
    // 0x0021E588: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x0021E58C: swc1        $f0, 0x68($t0)
    MEM_W(0X68, ctx->r8) = ctx->f0.u32l;
L_0021E590:
    // 0x0021E590: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x0021E594: jal         0x002051F4
    // 0x0021E598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x0021E598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0021E59C: sltu        $v0, $zero, $s4
    ctx->r2 = 0 < ctx->r20 ? 1 : 0;
    // 0x0021E5A0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x0021E5A4: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x0021E5A8: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x0021E5AC: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x0021E5B0: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x0021E5B4: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x0021E5B8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0021E5BC: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0021E5C0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0021E5C4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0021E5C8: ldc1        $f20, 0xA0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA0);
    // 0x0021E5CC: jr          $ra
    // 0x0021E5D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0021E5D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_002666B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002666B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002666B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002666B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002666BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002666C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002666C4: sb          $v0, 0x35($a1)
    MEM_B(0X35, ctx->r5) = ctx->r2;
    // 0x002666C8: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    // 0x002666CC: sw          $a2, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = ctx->r6;
    // 0x002666D0: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x002666D4: jal         0x0021E9A4
    // 0x002666D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0021E9A4(rdram, ctx);
        goto after_0;
    // 0x002666D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x002666DC: jal         0x0021A7EC
    // 0x002666E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A7EC(rdram, ctx);
        goto after_1;
    // 0x002666E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002666E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002666E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002666EC: jr          $ra
    // 0x002666F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002666F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00422484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422484: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422488: lhu         $v1, 0x94C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X94C);
    // 0x0042248C: sltiu       $v0, $v1, 0x32
    ctx->r2 = ctx->r3 < 0X32 ? 1 : 0;
    // 0x00422490: beq         $v0, $zero, L_004224A8
    if (ctx->r2 == 0) {
        // 0x00422494: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004224A8;
    }
    // 0x00422494: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00422498: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042249C: addiu       $a1, $a1, 0x4934
    ctx->r5 = ADD32(ctx->r5, 0X4934);
    // 0x004224A0: j           L_004225D4
    // 0x004224A4: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x004224A4: nop

L_004224A8:
    // 0x004224A8: addiu       $v0, $v1, -0x32
    ctx->r2 = ADD32(ctx->r3, -0X32);
    // 0x004224AC: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x004224B0: beq         $v0, $zero, L_004224C8
    if (ctx->r2 == 0) {
        // 0x004224B4: addiu       $v0, $v1, -0x96
        ctx->r2 = ADD32(ctx->r3, -0X96);
            goto L_004224C8;
    }
    // 0x004224B4: addiu       $v0, $v1, -0x96
    ctx->r2 = ADD32(ctx->r3, -0X96);
    // 0x004224B8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004224BC: addiu       $a1, $a1, 0x4940
    ctx->r5 = ADD32(ctx->r5, 0X4940);
    // 0x004224C0: j           L_004225D4
    // 0x004224C4: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x004224C4: nop

L_004224C8:
    // 0x004224C8: sltiu       $v0, $v0, 0x96
    ctx->r2 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x004224CC: beq         $v0, $zero, L_004224E4
    if (ctx->r2 == 0) {
        // 0x004224D0: addiu       $v0, $v1, -0x12C
        ctx->r2 = ADD32(ctx->r3, -0X12C);
            goto L_004224E4;
    }
    // 0x004224D0: addiu       $v0, $v1, -0x12C
    ctx->r2 = ADD32(ctx->r3, -0X12C);
    // 0x004224D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004224D8: addiu       $a1, $a1, 0x494C
    ctx->r5 = ADD32(ctx->r5, 0X494C);
    // 0x004224DC: j           L_004225D4
    // 0x004224E0: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x004224E0: nop

L_004224E4:
    // 0x004224E4: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x004224E8: beq         $v0, $zero, L_00422500
    if (ctx->r2 == 0) {
        // 0x004224EC: addiu       $v0, $v1, -0x1F4
        ctx->r2 = ADD32(ctx->r3, -0X1F4);
            goto L_00422500;
    }
    // 0x004224EC: addiu       $v0, $v1, -0x1F4
    ctx->r2 = ADD32(ctx->r3, -0X1F4);
    // 0x004224F0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004224F4: addiu       $a1, $a1, 0x4958
    ctx->r5 = ADD32(ctx->r5, 0X4958);
    // 0x004224F8: j           L_004225D4
    // 0x004224FC: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x004224FC: nop

L_00422500:
    // 0x00422500: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x00422504: beq         $v0, $zero, L_0042251C
    if (ctx->r2 == 0) {
        // 0x00422508: addiu       $v0, $v1, -0x320
        ctx->r2 = ADD32(ctx->r3, -0X320);
            goto L_0042251C;
    }
    // 0x00422508: addiu       $v0, $v1, -0x320
    ctx->r2 = ADD32(ctx->r3, -0X320);
    // 0x0042250C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422510: addiu       $a1, $a1, 0x4964
    ctx->r5 = ADD32(ctx->r5, 0X4964);
    // 0x00422514: j           L_004225D4
    // 0x00422518: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x00422518: nop

L_0042251C:
    // 0x0042251C: sltiu       $v0, $v0, 0x1F4
    ctx->r2 = ctx->r2 < 0X1F4 ? 1 : 0;
    // 0x00422520: beq         $v0, $zero, L_00422538
    if (ctx->r2 == 0) {
        // 0x00422524: addiu       $v0, $v1, -0x514
        ctx->r2 = ADD32(ctx->r3, -0X514);
            goto L_00422538;
    }
    // 0x00422524: addiu       $v0, $v1, -0x514
    ctx->r2 = ADD32(ctx->r3, -0X514);
    // 0x00422528: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042252C: addiu       $a1, $a1, 0x4970
    ctx->r5 = ADD32(ctx->r5, 0X4970);
    // 0x00422530: j           L_004225D4
    // 0x00422534: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x00422534: nop

L_00422538:
    // 0x00422538: sltiu       $v0, $v0, 0x2BC
    ctx->r2 = ctx->r2 < 0X2BC ? 1 : 0;
    // 0x0042253C: beq         $v0, $zero, L_00422554
    if (ctx->r2 == 0) {
        // 0x00422540: addiu       $v0, $v1, -0x7D0
        ctx->r2 = ADD32(ctx->r3, -0X7D0);
            goto L_00422554;
    }
    // 0x00422540: addiu       $v0, $v1, -0x7D0
    ctx->r2 = ADD32(ctx->r3, -0X7D0);
    // 0x00422544: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422548: addiu       $a1, $a1, 0x497C
    ctx->r5 = ADD32(ctx->r5, 0X497C);
    // 0x0042254C: j           L_004225D4
    // 0x00422550: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x00422550: nop

L_00422554:
    // 0x00422554: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x00422558: beq         $v0, $zero, L_00422570
    if (ctx->r2 == 0) {
        // 0x0042255C: addiu       $v0, $v1, -0xBB8
        ctx->r2 = ADD32(ctx->r3, -0XBB8);
            goto L_00422570;
    }
    // 0x0042255C: addiu       $v0, $v1, -0xBB8
    ctx->r2 = ADD32(ctx->r3, -0XBB8);
    // 0x00422560: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422564: addiu       $a1, $a1, 0x4988
    ctx->r5 = ADD32(ctx->r5, 0X4988);
    // 0x00422568: j           L_004225D4
    // 0x0042256C: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x0042256C: nop

L_00422570:
    // 0x00422570: sltiu       $v0, $v0, 0x5DC
    ctx->r2 = ctx->r2 < 0X5DC ? 1 : 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x00422574 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00422574(rdram, ctx);
;}
RECOMP_FUNC void func_00219910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219910: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00219914: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x00219918: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021991C: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x00219920: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x00219924: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x00219928: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x0021992C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x00219930: jr          $ra
    // 0x00219934: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    return;
    // 0x00219934: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0046706C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042E0AC:
    // 0x0046706C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0042E0F4:
    // 0x00467070: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x00467074: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00467078: lbu         $v1, -0x550F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550F);
    // 0x0046707C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00467080: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467084: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00467088: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0046708C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00467090: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00467094: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00467098: beq         $v1, $zero, L_004670A8
    if (ctx->r3 == 0) {
        // 0x0046709C: sll         $s1, $v0, 1
        ctx->r17 = S32(ctx->r2 << 1);
            goto L_004670A8;
    }
    // 0x0046709C: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    // 0x004670A0: j           L_0042E0AC
    // 0x004670A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_0042E0AC(rdram, ctx);
    return;
    // 0x004670A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004670A8:
    // 0x004670A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004670AC: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
    // 0x004670B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004670B4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x004670B8: bne         $v0, $zero, L_004670DC
    if (ctx->r2 != 0) {
        // 0x004670BC: nop
    
            goto L_004670DC;
    }
    // 0x004670BC: nop

    // 0x004670C0: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x004670C4: jal         0x00285BD0
    // 0x004670C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x004670C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x004670CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004670D0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x004670D4: beq         $v0, $zero, L_004670EC
    if (ctx->r2 == 0) {
        // 0x004670D8: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_004670EC;
    }
    // 0x004670D8: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_004670DC:
    // 0x004670DC: jal         0x002540E4
    // 0x004670E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_1;
    // 0x004670E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004670E4: j           L_0042E0F4
    // 0x004670E8: nop

    entry_0042E0F4(rdram, ctx);
    return;
    // 0x004670E8: nop

L_004670EC:
    // 0x004670EC: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x004670F0: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x004670F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x004670F8: lwc1        $f0, 0x6AC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC4);
    // 0x004670FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00467100: jal         0x00248340
    // 0x00467104: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_2;
    // 0x00467104: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00467108: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0046710C: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x00467110: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x00467114: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x00467118: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0046711C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00467120: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x00467124: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00467128: bne         $v1, $v0, L_00467178
    if (ctx->r3 != ctx->r2) {
        // 0x0046712C: nop
    
            goto L_00467178;
    }
    // 0x0046712C: nop

    // 0x00467130: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467134: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467138: bne         $v0, $zero, L_00467188
    if (ctx->r2 != 0) {
        // 0x0046713C: nop
    
            goto L_00467188;
    }
    // 0x0046713C: nop

    // 0x00467140: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00467144: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00467148: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0046714C: bne         $v0, $zero, L_00467178
    if (ctx->r2 != 0) {
        // 0x00467150: nop
    
            goto L_00467178;
    }
    // 0x00467150: nop

    // 0x00467154: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x00467158: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0046715C: beq         $v0, $zero, L_00467178
    if (ctx->r2 == 0) {
        // 0x00467160: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_00467178;
    }
    // 0x00467160: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00467164: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00467168: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0046716C: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x00467170: jal         0x0027580C
    // 0x00467174: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x00467174: nop

    after_3:
L_00467178:
    // 0x00467178: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0046717C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467180: beq         $v0, $zero, L_00467194
    if (ctx->r2 == 0) {
        // 0x00467184: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00467194;
    }
    // 0x00467184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00467188:
    // 0x00467188: jal         0x00248A8C
    // 0x0046718C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x0046718C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00467190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00467194:
    // 0x00467194: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00467198: lw          $a1, 0x92C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X92C);
    // 0x0046719C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x004671A0: jal         0x00248BA8
    // 0x004671A4: sw          $zero, 0xBF8($a0)
    MEM_W(0XBF8, ctx->r4) = 0;
    func_00248BA8(rdram, ctx);
        goto after_5;
    // 0x004671A4: sw          $zero, 0xBF8($a0)
    MEM_W(0XBF8, ctx->r4) = 0;
    after_5:
    // 0x004671A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004671AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004671B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004671B4: jr          $ra
    // 0x004671B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004671B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00446BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446BD0: jr          $ra
    // 0x00446BD4: nop

    return;
    // 0x00446BD4: nop

;}
