#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004419C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004419C8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004419CC: addiu       $v1, $v1, -0x4A0
    ctx->r3 = ADD32(ctx->r3, -0X4A0);
    // 0x004419D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x004419D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004419D8: jr          $ra
    // 0x004419DC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x004419DC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_0042D040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042D044: lwc1        $f0, 0x6050($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6050);
    // 0x0042D048: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x0042D04C: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x0042D050: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0042D054: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    // 0x0042D058: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x0042D05C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0042D060: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0042D064: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_0042D068:
    // 0x0042D068: jal         0x00227664
    // 0x0042D06C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00227664(rdram, ctx);
        goto after_0;
    // 0x0042D06C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0042D070: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042D074: slti        $v0, $s3, 0x20
    ctx->r2 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x0042D078: bne         $v0, $zero, L_0042D068
    if (ctx->r2 != 0) {
        // 0x0042D07C: addiu       $s1, $s1, 0x1B0
        ctx->r17 = ADD32(ctx->r17, 0X1B0);
            goto L_0042D068;
    }
    // 0x0042D07C: addiu       $s1, $s1, 0x1B0
    ctx->r17 = ADD32(ctx->r17, 0X1B0);
    // 0x0042D080: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D084: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D088: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D08C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D090: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D094: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D098: jr          $ra
    // 0x0042D09C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D09C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0020F680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F680: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0020F684: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020F688: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0020F68C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020F690: lwc1        $f3, 0x4($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0020F694: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020F698: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0020F69C: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0020F6A0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F6A4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020F6A8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020F6AC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F6B0: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0020F6B4: jr          $ra
    // 0x0020F6B8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    return;
    // 0x0020F6B8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_00259040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00259044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025904C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00259050: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00259054: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259058: lw          $s1, 0x1A8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1A8);
    // 0x0025905C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00259060: sw          $zero, 0x64($s2)
    MEM_W(0X64, ctx->r18) = 0;
    // 0x00259064: lw          $a0, 0x1A8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1A8);
    // 0x00259068: jal         0x00248720
    // 0x0025906C: addiu       $a1, $zero, 0x12B
    ctx->r5 = ADD32(0, 0X12B);
    func_00248720(rdram, ctx);
        goto after_0;
    // 0x0025906C: addiu       $a1, $zero, 0x12B
    ctx->r5 = ADD32(0, 0X12B);
    after_0:
    // 0x00259070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00259074: jal         0x00253DE0
    // 0x00259078: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    func_00253DE0(rdram, ctx);
        goto after_1;
    // 0x00259078: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    after_1:
    // 0x0025907C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00259080: jal         0x00253EB8
    // 0x00259084: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    func_00253EB8(rdram, ctx);
        goto after_2;
    // 0x00259084: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    after_2:
    // 0x00259088: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x0025908C: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x00259090: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00259094: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259098: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025909C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002590A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002590A4: lwc1        $f1, 0x72CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X72CC);
    // 0x002590A8: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x002590AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002590B0: swc1        $f0, 0x118($s2)
    MEM_W(0X118, ctx->r18) = ctx->f0.u32l;
    // 0x002590B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002590B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002590BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002590C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002590C4: jr          $ra
    // 0x002590C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002590C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040742C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040742C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00407430: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00407434: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00407438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040743C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00407440: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00407444: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00407448: beq         $v0, $zero, L_004074B8
    if (ctx->r2 == 0) {
        // 0x0040744C: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_004074B8;
    }
    // 0x0040744C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00407450: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00407454: addiu       $s0, $s0, -0x688
    ctx->r16 = ADD32(ctx->r16, -0X688);
    // 0x00407458: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0040745C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407460: jal         0x00243414
    // 0x00407464: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00407464: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00407468: lw          $a0, -0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X4);
    // 0x0040746C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407470: jal         0x00243414
    // 0x00407474: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00407474: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00407478: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040747C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407480: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x00407484: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00407488: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x0040748C: addiu       $a3, $a3, 0x1C40
    ctx->r7 = ADD32(ctx->r7, 0X1C40);
    // 0x00407490: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x00407494: addiu       $t0, $t0, 0x1F50
    ctx->r8 = ADD32(ctx->r8, 0X1F50);
    // 0x00407498: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x0040749C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x004074A0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x004074A4: ori         $v0, $v0, 0x300
    ctx->r2 = ctx->r2 | 0X300;
    // 0x004074A8: ori         $v1, $v1, 0x300
    ctx->r3 = ctx->r3 | 0X300;
    // 0x004074AC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004074B0: jal         0x00243414
    // 0x004074B4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004074B4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    after_2:
L_004074B8:
    // 0x004074B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004074BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004074C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004074C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004074C8: jr          $ra
    // 0x004074CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004074CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00276880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276880: lb          $v0, 0xF($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XF);
    // 0x00276884: jr          $ra
    // 0x00276888: nop

    return;
    // 0x00276888: nop

;}
RECOMP_FUNC void func_0024BD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024BD18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0024BD1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024BD20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024BD24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024BD28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024BD2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0024BD30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024BD34: lw          $v0, 0xA1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA1C);
    // 0x0024BD38: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024BD3C: bne         $v0, $zero, L_0024BF04
    if (ctx->r2 != 0) {
        // 0x0024BD40: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_0024BF04;
    }
    // 0x0024BD40: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0024BD44: lw          $v1, 0x520($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X520);
    // 0x0024BD48: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0024BD4C: beq         $v1, $v0, L_0024BF04
    if (ctx->r3 == ctx->r2) {
        // 0x0024BD50: nop
    
            goto L_0024BF04;
    }
    // 0x0024BD50: nop

    // 0x0024BD54: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024BD58: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0024BD5C: bne         $v0, $zero, L_0024BF04
    if (ctx->r2 != 0) {
        // 0x0024BD60: nop
    
            goto L_0024BF04;
    }
    // 0x0024BD60: nop

    // 0x0024BD64: jal         0x00284174
    // 0x0024BD68: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0024BD68: nop

    after_0:
    // 0x0024BD6C: bne         $v0, $zero, L_0024BF04
    if (ctx->r2 != 0) {
        // 0x0024BD70: nop
    
            goto L_0024BF04;
    }
    // 0x0024BD70: nop

    // 0x0024BD74: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024BD78: lbu         $v0, 0x31($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X31);
    // 0x0024BD7C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0024BD80: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0024BD84: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x0024BD88: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024BD8C: lw          $v0, -0x61D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X61D4);
    // 0x0024BD90: beq         $v0, $zero, L_0024BDB4
    if (ctx->r2 == 0) {
        // 0x0024BD94: nop
    
            goto L_0024BDB4;
    }
    // 0x0024BD94: nop

    // 0x0024BD98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0024BD9C: beq         $v0, $zero, L_0024BDB4
    if (ctx->r2 == 0) {
        // 0x0024BDA0: nop
    
            goto L_0024BDB4;
    }
    // 0x0024BDA0: nop

    // 0x0024BDA4: jal         0x002551A0
    // 0x0024BDA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002551A0(rdram, ctx);
        goto after_1;
    // 0x0024BDA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0024BDAC: j           L_0024BF04
    // 0x0024BDB0: nop

        goto L_0024BF04;
    // 0x0024BDB0: nop

L_0024BDB4:
    // 0x0024BDB4: lw          $v0, 0x380($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X380);
    // 0x0024BDB8: beq         $v0, $zero, L_0024BDD4
    if (ctx->r2 == 0) {
        // 0x0024BDBC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024BDD4;
    }
    // 0x0024BDBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024BDC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024BDC4: jal         0x0024BAD4
    // 0x0024BDC8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0024BAD4(rdram, ctx);
        goto after_2;
    // 0x0024BDC8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0024BDCC: j           L_0024BDE0
    // 0x0024BDD0: nop

        goto L_0024BDE0;
    // 0x0024BDD0: nop

L_0024BDD4:
    // 0x0024BDD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024BDD8: jal         0x0024B5A0
    // 0x0024BDDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0024B5A0(rdram, ctx);
        goto after_3;
    // 0x0024BDDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
L_0024BDE0:
    // 0x0024BDE0: lh          $v1, 0xB14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XB14);
    // 0x0024BDE4: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x0024BDE8: beq         $v1, $v0, L_0024BE08
    if (ctx->r3 == ctx->r2) {
        // 0x0024BDEC: nop
    
            goto L_0024BE08;
    }
    // 0x0024BDEC: nop

    // 0x0024BDF0: lw          $a0, 0x1280($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1280);
    // 0x0024BDF4: beq         $a0, $zero, L_0024BE08
    if (ctx->r4 == 0) {
        // 0x0024BDF8: nop
    
            goto L_0024BE08;
    }
    // 0x0024BDF8: nop

    // 0x0024BDFC: jal         0x0026E9EC
    // 0x0024BE00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026E9EC(rdram, ctx);
        goto after_4;
    // 0x0024BE00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0024BE04: sw          $zero, 0x1280($s1)
    MEM_W(0X1280, ctx->r17) = 0;
L_0024BE08:
    // 0x0024BE08: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0024BE0C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0024BE10: beq         $v1, $a0, L_0024BE84
    if (ctx->r3 == ctx->r4) {
        // 0x0024BE14: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_0024BE84;
    }
    // 0x0024BE14: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0024BE18: beq         $v0, $zero, L_0024BE30
    if (ctx->r2 == 0) {
        // 0x0024BE1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024BE30;
    }
    // 0x0024BE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024BE20: beq         $v1, $v0, L_0024BE44
    if (ctx->r3 == ctx->r2) {
        // 0x0024BE24: nop
    
            goto L_0024BE44;
    }
    // 0x0024BE24: nop

    // 0x0024BE28: j           L_0024BED8
    // 0x0024BE2C: nop

        goto L_0024BED8;
    // 0x0024BE2C: nop

L_0024BE30:
    // 0x0024BE30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024BE34: beq         $v1, $v0, L_0024BEA0
    if (ctx->r3 == ctx->r2) {
        // 0x0024BE38: nop
    
            goto L_0024BEA0;
    }
    // 0x0024BE38: nop

    // 0x0024BE3C: j           L_0024BED8
    // 0x0024BE40: nop

        goto L_0024BED8;
    // 0x0024BE40: nop

L_0024BE44:
    // 0x0024BE44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024BE48: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024BE4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024BE50: lwc1        $f1, 0x6C4C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C4C);
    // 0x0024BE54: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024BE58: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0024BE5C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024BE60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024BE64: lwc1        $f0, 0x6C50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C50);
    // 0x0024BE68: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0024BE6C: nop

    // 0x0024BE70: bc1f        L_0024BED8
    if (!c1cs) {
        // 0x0024BE74: swc1        $f1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0024BED8;
    }
    // 0x0024BE74: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024BE78: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0024BE7C: j           L_0024BED8
    // 0x0024BE80: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
        goto L_0024BED8;
    // 0x0024BE80: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_0024BE84:
    // 0x0024BE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024BE88: jal         0x00254F24
    // 0x0024BE8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00254F24(rdram, ctx);
        goto after_5;
    // 0x0024BE8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0024BE90: beq         $v0, $zero, L_0024BED8
    if (ctx->r2 == 0) {
        // 0x0024BE94: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024BED8;
    }
    // 0x0024BE94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024BE98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0024BE9C: sw          $zero, 0x1284($s1)
    MEM_W(0X1284, ctx->r17) = 0;
L_0024BEA0:
    // 0x0024BEA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024BEA4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024BEA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024BEAC: lwc1        $f1, 0x6C54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C54);
    // 0x0024BEB0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024BEB4: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0024BEB8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024BEBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024BEC0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0024BEC4: nop

    // 0x0024BEC8: bc1f        L_0024BED8
    if (!c1cs) {
        // 0x0024BECC: swc1        $f1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0024BED8;
    }
    // 0x0024BECC: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024BED0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0024BED4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0024BED8:
    // 0x0024BED8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0024BEDC: beql        $v0, $zero, L_0024BF04
    if (ctx->r2 == 0) {
        // 0x0024BEE0: sw          $zero, 0x1284($s1)
        MEM_W(0X1284, ctx->r17) = 0;
            goto L_0024BF04;
    }
    goto skip_0;
    // 0x0024BEE0: sw          $zero, 0x1284($s1)
    MEM_W(0X1284, ctx->r17) = 0;
    skip_0:
    // 0x0024BEE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024BEE8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024BEEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024BEF0: lwc1        $f1, 0x6C58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C58);
    // 0x0024BEF4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024BEF8: lwc1        $f1, 0x14($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x0024BEFC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024BF00: swc1        $f1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0024BF04:
    // 0x0024BF04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0024BF08: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024BF0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024BF10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024BF14: jr          $ra
    // 0x0024BF18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0024BF18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004691B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004691B8: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x004691BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004691C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004691C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x004691C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004691CC: addiu       $v0, $v0, -0x52B8
    ctx->r2 = ADD32(ctx->r2, -0X52B8);
    // 0x004691D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004691D4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x004691D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004691DC: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x004691E0: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x004691E4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x004691E8: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x004691EC: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x004691F0: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x004691F4: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x004691F8: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
    // 0x004691FC: sh          $zero, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = 0;
    // 0x00469200: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x00469204: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x00469208: sh          $v1, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r3;
    // 0x0046920C: sh          $v1, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r3;
    // 0x00469210: sh          $a0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r4;
    // 0x00469214: sh          $a0, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r4;
    // 0x00469218: sh          $zero, 0x38($a1)
    MEM_H(0X38, ctx->r5) = 0;
    // 0x0046921C: sh          $v1, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r3;
L_00469220:
    // 0x00469220: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    // 0x00469224: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x00469228: sb          $a3, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r7;
    // 0x0046922C: sb          $a3, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r7;
    // 0x00469230: sb          $a3, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r7;
    // 0x00469234: sb          $a3, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r7;
    // 0x00469238: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0046923C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00469240: bne         $v0, $zero, L_00469220
    if (ctx->r2 != 0) {
        // 0x00469244: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_00469220;
    }
    // 0x00469244: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00469248: jr          $ra
    // 0x0046924C: nop

    return;
    // 0x0046924C: nop

;}
RECOMP_FUNC void func_0041F32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F32C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0041F330: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x0041F334: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0041F338: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0041F33C: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x0041F340: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x0041F344: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x0041F348: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x0041F34C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x0041F350: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0041F354: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0041F358: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0041F35C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0041F360: addiu       $s5, $v0, -0x3
    ctx->r21 = ADD32(ctx->r2, -0X3);
    // 0x0041F364: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041F368: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041F36C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041F370: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x0041F374: beq         $v1, $zero, L_0041F38C
    if (ctx->r3 == 0) {
        // 0x0041F378: addiu       $s7, $v0, 0x688
        ctx->r23 = ADD32(ctx->r2, 0X688);
            goto L_0041F38C;
    }
    // 0x0041F378: addiu       $s7, $v0, 0x688
    ctx->r23 = ADD32(ctx->r2, 0X688);
    // 0x0041F37C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x0041F380: lw          $s4, 0x2028($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X2028);
    // 0x0041F384: j           L_0041F398
    // 0x0041F388: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
        goto L_0041F398;
    // 0x0041F388: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0041F38C:
    // 0x0041F38C: lw          $v0, 0x20($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X20);
    // 0x0041F390: lb          $s4, 0x4($v0)
    ctx->r20 = MEM_B(ctx->r2, 0X4);
    // 0x0041F394: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0041F398:
    // 0x0041F398: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0041F39C: jal         0x0041DD90
    // 0x0041F3A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x0041F3A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0041F3A4: beq         $v0, $zero, L_0041F3BC
    if (ctx->r2 == 0) {
        // 0x0041F3A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041F3BC;
    }
    // 0x0041F3A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F3AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F3B0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041F3B4: j           L_0041FB24
    // 0x0041F3B8: nop

        goto L_0041FB24;
    // 0x0041F3B8: nop

L_0041F3BC:
    // 0x0041F3BC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F3C0: lw          $v0, 0x9A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A0);
    // 0x0041F3C4: beq         $v0, $zero, L_0041F7A0
    if (ctx->r2 == 0) {
        // 0x0041F3C8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041F7A0;
    }
    // 0x0041F3C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F3CC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F3D0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041F3D4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x0041F3D8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0041F3DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F3E0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041F3E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041F3E8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0041F3EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041F3F0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0041F3F4: jal         0x00425E74
    // 0x0041F3F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_1;
    // 0x0041F3F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x0041F3FC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0041F400: bne         $s1, $zero, L_0041F428
    if (ctx->r17 != 0) {
        // 0x0041F404: nop
    
            goto L_0041F428;
    }
    // 0x0041F404: nop

    // 0x0041F408: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F40C: bne         $v0, $zero, L_0041F428
    if (ctx->r2 != 0) {
        // 0x0041F410: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_0041F428;
    }
    // 0x0041F410: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x0041F414: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
    // 0x0041F418: jal         0x0041DA28
    // 0x0041F41C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041F41C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_2:
    // 0x0041F420: j           L_0041FB24
    // 0x0041F424: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041FB24;
    // 0x0041F424: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041F428:
    // 0x0041F428: jal         0x00426D8C
    // 0x0041F42C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00426D8C(rdram, ctx);
        goto after_3;
    // 0x0041F42C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x0041F430: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0041F434: bne         $v0, $v1, L_0041F484
    if (ctx->r2 != ctx->r3) {
        // 0x0041F438: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041F484;
    }
    // 0x0041F438: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F43C: jal         0x00426D8C
    // 0x0041F440: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_00426D8C(rdram, ctx);
        goto after_4;
    // 0x0041F440: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x0041F444: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0041F448: bne         $v0, $v1, L_0041F484
    if (ctx->r2 != ctx->r3) {
        // 0x0041F44C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041F484;
    }
    // 0x0041F44C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F450: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F454: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041F458: jal         0x00426D54
    // 0x0041F45C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00426D54(rdram, ctx);
        goto after_5;
    // 0x0041F45C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x0041F460: bne         $v0, $zero, L_0041F484
    if (ctx->r2 != 0) {
        // 0x0041F464: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041F484;
    }
    // 0x0041F464: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F468: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F46C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041F470: jal         0x00426D54
    // 0x0041F474: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_00426D54(rdram, ctx);
        goto after_6;
    // 0x0041F474: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x0041F478: beq         $v0, $zero, L_0041F484
    if (ctx->r2 == 0) {
        // 0x0041F47C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0041F484;
    }
    // 0x0041F47C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0041F480: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041F484:
    // 0x0041F484: beq         $v1, $zero, L_0041F4B8
    if (ctx->r3 == 0) {
        // 0x0041F488: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_0041F4B8;
    }
    // 0x0041F488: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0041F48C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F490: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041F494: jal         0x00426D54
    // 0x0041F498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_7;
    // 0x0041F498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0041F49C: sltiu       $s3, $v0, 0x1
    ctx->r19 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0041F4A0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F4A4: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041F4A8: jal         0x00426D54
    // 0x0041F4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_8;
    // 0x0041F4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0041F4B0: j           L_0041F4C0
    // 0x0041F4B4: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_0041F4C0;
    // 0x0041F4B4: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
L_0041F4B8:
    // 0x0041F4B8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0041F4BC: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0041F4C0:
    // 0x0041F4C0: bne         $s1, $zero, L_0041FACC
    if (ctx->r17 != 0) {
        // 0x0041F4C4: nop
    
            goto L_0041FACC;
    }
    // 0x0041F4C4: nop

    // 0x0041F4C8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F4CC: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F4D0: nop
    
            goto L_0041FACC;
    }
    // 0x0041F4D0: nop

    // 0x0041F4D4: beq         $s3, $zero, L_0041F584
    if (ctx->r19 == 0) {
        // 0x0041F4D8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041F584;
    }
    // 0x0041F4D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F4DC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F4E0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0041F4E4: addiu       $s1, $s1, 0x968
    ctx->r17 = ADD32(ctx->r17, 0X968);
    // 0x0041F4E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0041F4EC: jal         0x004265B0
    // 0x0041F4F0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_004265B0(rdram, ctx);
        goto after_9;
    // 0x0041F4F0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_9:
    // 0x0041F4F4: bne         $v0, $zero, L_0041F580
    if (ctx->r2 != 0) {
        // 0x0041F4F8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041F580;
    }
    // 0x0041F4F8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0041F4FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041F500: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041F504: jal         0x00426E78
    // 0x0041F508: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_10;
    // 0x0041F508: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x0041F50C: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x0041F510: bne         $v0, $v1, L_0041F580
    if (ctx->r2 != ctx->r3) {
        // 0x0041F514: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041F580;
    }
    // 0x0041F514: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0041F518: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0041F51C: addiu       $t3, $t3, 0x948
    ctx->r11 = ADD32(ctx->r11, 0X948);
    // 0x0041F520: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x0041F524: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x0041F528: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0041F52C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0041F530: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0041F534: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0041F538: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x0041F53C: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x0041F540: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x0041F544: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0041F548: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x0041F54C: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x0041F550: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0041F554: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F558: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F55C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F560: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F564: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F568: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F56C: addiu       $a1, $a1, -0x458C
    ctx->r5 = ADD32(ctx->r5, -0X458C);
    // 0x0041F570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F574: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x0041F578: j           L_0041FB18
    // 0x0041F57C: nop

        goto L_0041FB18;
    // 0x0041F57C: nop

L_0041F580:
    // 0x0041F580: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041F584:
    // 0x0041F584: beq         $s0, $zero, L_0041F6B4
    if (ctx->r16 == 0) {
        // 0x0041F588: nop
    
            goto L_0041F6B4;
    }
    // 0x0041F588: nop

    // 0x0041F58C: bne         $s2, $zero, L_0041F6B4
    if (ctx->r18 != 0) {
        // 0x0041F590: nop
    
            goto L_0041F6B4;
    }
    // 0x0041F590: nop

    // 0x0041F594: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F598: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F59C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F5A0: beq         $v0, $zero, L_0041F5C0
    if (ctx->r2 == 0) {
        // 0x0041F5A4: nop
    
            goto L_0041F5C0;
    }
    // 0x0041F5A4: nop

    // 0x0041F5A8: jal         0x002053A8
    // 0x0041F5AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_11;
    // 0x0041F5AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x0041F5B0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F5B4: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F5B8: jal         0x002052D8
    // 0x0041F5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_12;
    // 0x0041F5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
L_0041F5C0:
    // 0x0041F5C0: bne         $s0, $zero, L_0041F5D4
    if (ctx->r16 != 0) {
        // 0x0041F5C4: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_0041F5D4;
    }
    // 0x0041F5C4: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x0041F5C8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041F5CC: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041F5D0: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_0041F5D4:
    // 0x0041F5D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041F5D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041F5DC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0041F5E0: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x0041F5E4: jal         0x00204EDC
    // 0x0041F5E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_13;
    // 0x0041F5E8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_13:
    // 0x0041F5EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F5F0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0041F5F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F5F8: sw          $v0, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = ctx->r2;
    // 0x0041F5FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F600: sw          $a0, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = ctx->r4;
    // 0x0041F604: jal         0x00266C5C
    // 0x0041F608: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_14;
    // 0x0041F608: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0041F60C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F610: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F614: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F618: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041F61C: lw          $a2, 0x201C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X201C);
    // 0x0041F620: jal         0x004265B0
    // 0x0041F624: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    func_004265B0(rdram, ctx);
        goto after_15;
    // 0x0041F624: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    after_15:
    // 0x0041F628: bnel        $v0, $zero, L_0041F6B0
    if (ctx->r2 != 0) {
        // 0x0041F62C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041F6B0;
    }
    goto skip_0;
    // 0x0041F62C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0041F630: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041F634: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041F638: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0041F63C: bnel        $a1, $s7, L_0041F6B0
    if (ctx->r5 != ctx->r23) {
        // 0x0041F640: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041F6B0;
    }
    goto skip_1;
    // 0x0041F640: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x0041F644: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x0041F648: jal         0x00426E78
    // 0x0041F64C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00426E78(rdram, ctx);
        goto after_16;
    // 0x0041F64C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_16:
    // 0x0041F650: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041F654: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041F658: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041F65C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0041F660: lw          $v1, -0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4);
    // 0x0041F664: bne         $v0, $v1, L_0041F6B0
    if (ctx->r2 != ctx->r3) {
        // 0x0041F668: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041F6B0;
    }
    // 0x0041F668: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041F66C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041F670: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041F674: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0041F678: bne         $v1, $v0, L_0041F6B4
    if (ctx->r3 != ctx->r2) {
        // 0x0041F67C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041F6B4;
    }
    // 0x0041F67C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041F680: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0041F684: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F688: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F68C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F690: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F694: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F698: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F69C: addiu       $a1, $a1, -0x4718
    ctx->r5 = ADD32(ctx->r5, -0X4718);
    // 0x0041F6A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F6A4: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x0041F6A8: j           L_0041FB18
    // 0x0041F6AC: nop

        goto L_0041FB18;
    // 0x0041F6AC: nop

L_0041F6B0:
    // 0x0041F6B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041F6B4:
    // 0x0041F6B4: bne         $s3, $zero, L_0041FACC
    if (ctx->r19 != 0) {
        // 0x0041F6B8: nop
    
            goto L_0041FACC;
    }
    // 0x0041F6B8: nop

    // 0x0041F6BC: bne         $s0, $zero, L_0041FACC
    if (ctx->r16 != 0) {
        // 0x0041F6C0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041FACC;
    }
    // 0x0041F6C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041F6C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041F6C8: sw          $s5, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r21;
    // 0x0041F6CC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0041F6D0: addiu       $s1, $s1, 0x4B1C
    ctx->r17 = ADD32(ctx->r17, 0X4B1C);
    // 0x0041F6D4: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x0041F6D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0041F6DC: jal         0x00426E3C
    // 0x0041F6E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00426E3C(rdram, ctx);
        goto after_17;
    // 0x0041F6E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_17:
    // 0x0041F6E4: beq         $v0, $zero, L_0041F700
    if (ctx->r2 == 0) {
        // 0x0041F6E8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041F700;
    }
    // 0x0041F6E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041F6EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F6F0: addiu       $a1, $a1, 0x48D4
    ctx->r5 = ADD32(ctx->r5, 0X48D4);
    // 0x0041F6F4: jal         0x00426E04
    // 0x0041F6F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426E04(rdram, ctx);
        goto after_18;
    // 0x0041F6F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x0041F6FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_0041F700:
    // 0x0041F700: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F704: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0041F708:
    // 0x0041F708: beq         $a1, $zero, L_0041F714
    if (ctx->r5 == 0) {
        // 0x0041F70C: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_0041F714;
    }
    // 0x0041F70C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x0041F710: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
L_0041F714:
    // 0x0041F714: bnel        $s0, $zero, L_0041F728
    if (ctx->r16 != 0) {
        // 0x0041F718: sb          $s0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r16;
            goto L_0041F728;
    }
    goto skip_2;
    // 0x0041F718: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    skip_2:
    // 0x0041F71C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F720: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0041F724: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
L_0041F728:
    // 0x0041F728: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041F72C: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x0041F730: bne         $v0, $zero, L_0041F708
    if (ctx->r2 != 0) {
        // 0x0041F734: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041F708;
    }
    // 0x0041F734: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041F738: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0041F73C: addu        $s1, $s1, $a1
    ctx->r17 = ADD32(ctx->r17, ctx->r5);
    // 0x0041F740: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041F744: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0041F748:
    // 0x0041F748: beq         $a1, $zero, L_0041F754
    if (ctx->r5 == 0) {
        // 0x0041F74C: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_0041F754;
    }
    // 0x0041F74C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x0041F750: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
L_0041F754:
    // 0x0041F754: bnel        $s0, $zero, L_0041F768
    if (ctx->r16 != 0) {
        // 0x0041F758: sb          $s0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r16;
            goto L_0041F768;
    }
    goto skip_3;
    // 0x0041F758: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
    skip_3:
    // 0x0041F75C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F760: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x0041F764: sb          $s0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r16;
L_0041F768:
    // 0x0041F768: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041F76C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0041F770: bne         $v0, $zero, L_0041F748
    if (ctx->r2 != 0) {
        // 0x0041F774: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041F748;
    }
    // 0x0041F774: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041F778: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0041F77C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F780: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F784: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F788: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F78C: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F790: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F794: addiu       $a1, $a1, -0x4568
    ctx->r5 = ADD32(ctx->r5, -0X4568);
    // 0x0041F798: j           L_0041FB18
    // 0x0041F79C: nop

        goto L_0041FB18;
    // 0x0041F79C: nop

L_0041F7A0:
    // 0x0041F7A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F7A4: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041F7A8: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F7AC: nop
    
            goto L_0041FACC;
    }
    // 0x0041F7AC: nop

    // 0x0041F7B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F7B4: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041F7B8: beq         $v0, $zero, L_0041F8C0
    if (ctx->r2 == 0) {
        // 0x0041F7BC: nop
    
            goto L_0041F8C0;
    }
    // 0x0041F7BC: nop

    // 0x0041F7C0: bne         $s2, $zero, L_0041F8C0
    if (ctx->r18 != 0) {
        // 0x0041F7C4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041F8C0;
    }
    // 0x0041F7C4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F7C8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F7CC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041F7D0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0041F7D4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0041F7D8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0041F7DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F7E0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041F7E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041F7E8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0041F7EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041F7F0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0041F7F4: jal         0x00425E74
    // 0x0041F7F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_19;
    // 0x0041F7F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_19:
    // 0x0041F7FC: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F800: nop
    
            goto L_0041FACC;
    }
    // 0x0041F800: nop

    // 0x0041F804: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F808: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F80C: nop
    
            goto L_0041FACC;
    }
    // 0x0041F80C: nop

    // 0x0041F810: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F814: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041F818: jal         0x00426D54
    // 0x0041F81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_20;
    // 0x0041F81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x0041F820: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F824: addu        $a1, $s5, $zero
        ctx->r5 = ADD32(ctx->r21, 0);
            goto L_0041FACC;
    }
    // 0x0041F824: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F828: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F82C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041F830: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041F834: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041F838: jal         0x004265B0
    // 0x0041F83C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_004265B0(rdram, ctx);
        goto after_21;
    // 0x0041F83C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_21:
    // 0x0041F840: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F844: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FACC;
    }
    // 0x0041F844: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041F848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041F84C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041F850: jal         0x00426E78
    // 0x0041F854: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_22;
    // 0x0041F854: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_22:
    // 0x0041F858: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0041F85C: bne         $v0, $v1, L_0041FACC
    if (ctx->r2 != ctx->r3) {
        // 0x0041F860: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FACC;
    }
    // 0x0041F860: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041F864: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F868: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F86C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0041F870: addiu       $t3, $t3, 0x948
    ctx->r11 = ADD32(ctx->r11, 0X948);
    // 0x0041F874: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0041F878: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0041F87C: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0041F880: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0041F884: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0041F888: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0041F88C: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x0041F890: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x0041F894: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x0041F898: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0041F89C: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x0041F8A0: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x0041F8A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041F8A8: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041F8AC: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041F8B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F8B4: addiu       $a1, $a1, -0x45B0
    ctx->r5 = ADD32(ctx->r5, -0X45B0);
    // 0x0041F8B8: j           L_0041FB18
    // 0x0041F8BC: nop

        goto L_0041FB18;
    // 0x0041F8BC: nop

L_0041F8C0:
    // 0x0041F8C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F8C4: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041F8C8: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F8CC: nop
    
            goto L_0041FACC;
    }
    // 0x0041F8CC: nop

    // 0x0041F8D0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F8D4: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041F8D8: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F8DC: nop
    
            goto L_0041FACC;
    }
    // 0x0041F8DC: nop

    // 0x0041F8E0: bne         $s2, $zero, L_0041FADC
    if (ctx->r18 != 0) {
        // 0x0041F8E4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041FADC;
    }
    // 0x0041F8E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F8E8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F8EC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041F8F0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0041F8F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0041F8F8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0041F8FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F900: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041F904: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041F908: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0041F90C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041F910: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0041F914: jal         0x00425E74
    // 0x0041F918: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00425E74(rdram, ctx);
        goto after_23;
    // 0x0041F918: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_23:
    // 0x0041F91C: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F920: nop
    
            goto L_0041FACC;
    }
    // 0x0041F920: nop

    // 0x0041F924: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041F928: beq         $v0, $zero, L_0041FACC
    if (ctx->r2 == 0) {
        // 0x0041F92C: nop
    
            goto L_0041FACC;
    }
    // 0x0041F92C: nop

    // 0x0041F930: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041F934: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041F938: jal         0x00426D54
    // 0x0041F93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_24;
    // 0x0041F93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x0041F940: bne         $v0, $zero, L_0041FACC
    if (ctx->r2 != 0) {
        // 0x0041F944: nop
    
            goto L_0041FACC;
    }
    // 0x0041F944: nop

    // 0x0041F948: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F94C: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F950: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F954: beq         $v0, $zero, L_0041F974
    if (ctx->r2 == 0) {
        // 0x0041F958: nop
    
            goto L_0041F974;
    }
    // 0x0041F958: nop

    // 0x0041F95C: jal         0x002053A8
    // 0x0041F960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_25;
    // 0x0041F960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_25:
    // 0x0041F964: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F968: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F96C: jal         0x002052D8
    // 0x0041F970: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_26;
    // 0x0041F970: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_26:
L_0041F974:
    // 0x0041F974: bne         $s0, $zero, L_0041F988
    if (ctx->r16 != 0) {
        // 0x0041F978: sll         $s0, $s0, 8
        ctx->r16 = S32(ctx->r16 << 8);
            goto L_0041F988;
    }
    // 0x0041F978: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x0041F97C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041F980: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041F984: addiu       $s0, $v0, 0x688
    ctx->r16 = ADD32(ctx->r2, 0X688);
L_0041F988:
    // 0x0041F988: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041F98C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041F990: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0041F994: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x0041F998: jal         0x00204EDC
    // 0x0041F99C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00204EDC(rdram, ctx);
        goto after_27;
    // 0x0041F99C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_27:
    // 0x0041F9A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041F9A4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0041F9A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F9AC: sw          $v0, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = ctx->r2;
    // 0x0041F9B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F9B4: sw          $a0, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = ctx->r4;
    // 0x0041F9B8: jal         0x00266C5C
    // 0x0041F9BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_28;
    // 0x0041F9BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_28:
    // 0x0041F9C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041F9C4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041F9C8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F9CC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041F9D0: lw          $a2, 0x201C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X201C);
    // 0x0041F9D4: jal         0x004265B0
    // 0x0041F9D8: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    func_004265B0(rdram, ctx);
        goto after_29;
    // 0x0041F9D8: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    after_29:
    // 0x0041F9DC: bne         $v0, $zero, L_0041FA54
    if (ctx->r2 != 0) {
        // 0x0041F9E0: nop
    
            goto L_0041FA54;
    }
    // 0x0041F9E0: nop

    // 0x0041F9E4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041F9E8: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041F9EC: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0041F9F0: bne         $a1, $s7, L_0041FA54
    if (ctx->r5 != ctx->r23) {
        // 0x0041F9F4: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_0041FA54;
    }
    // 0x0041F9F4: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x0041F9F8: jal         0x00426E78
    // 0x0041F9FC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00426E78(rdram, ctx);
        goto after_30;
    // 0x0041F9FC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_30:
    // 0x0041FA00: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041FA04: lw          $a0, 0x201C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X201C);
    // 0x0041FA08: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041FA0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0041FA10: lw          $v1, -0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4);
    // 0x0041FA14: bne         $v0, $v1, L_0041FA54
    if (ctx->r2 != ctx->r3) {
        // 0x0041FA18: nop
    
            goto L_0041FA54;
    }
    // 0x0041FA18: nop

    // 0x0041FA1C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041FA20: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041FA24: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0041FA28: bne         $v1, $v0, L_0041FA54
    if (ctx->r3 != ctx->r2) {
        // 0x0041FA2C: nop
    
            goto L_0041FA54;
    }
    // 0x0041FA2C: nop

    // 0x0041FA30: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FA34: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FA38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041FA3C: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FA40: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FA44: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FA48: addiu       $a1, $a1, -0x473C
    ctx->r5 = ADD32(ctx->r5, -0X473C);
    // 0x0041FA4C: j           L_0041FB18
    // 0x0041FA50: nop

        goto L_0041FB18;
    // 0x0041FA50: nop

L_0041FA54:
    // 0x0041FA54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA58: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041FA5C: bne         $v0, $zero, L_0041FA74
    if (ctx->r2 != 0) {
        // 0x0041FA60: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041FA74;
    }
    // 0x0041FA60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041FA64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FA68: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041FA6C: beq         $v0, $zero, L_0041FA7C
    if (ctx->r2 == 0) {
        // 0x0041FA70: nop
    
            goto L_0041FA7C;
    }
    // 0x0041FA70: nop

L_0041FA74:
    // 0x0041FA74: jal         0x002053A8
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_31;
    // 0x0041FA78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_31:
L_0041FA7C:
    // 0x0041FA7C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA80: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041FA84: beq         $a1, $zero, L_0041FA94
    if (ctx->r5 == 0) {
        // 0x0041FA88: nop
    
            goto L_0041FA94;
    }
    // 0x0041FA88: nop

    // 0x0041FA8C: jal         0x002052D8
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_32;
    // 0x0041FA90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_32:
L_0041FA94:
    // 0x0041FA94: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041FA98: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041FA9C: beq         $a1, $zero, L_0041FAAC
    if (ctx->r5 == 0) {
        // 0x0041FAA0: nop
    
            goto L_0041FAAC;
    }
    // 0x0041FAA0: nop

    // 0x0041FAA4: jal         0x002052D8
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_33;
    // 0x0041FAA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_33:
L_0041FAAC:
    // 0x0041FAAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB0: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041FAB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAB8: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041FABC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC0: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041FAC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041FAC8: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
L_0041FACC:
    // 0x0041FACC: beq         $s2, $zero, L_0041FB24
    if (ctx->r18 == 0) {
        // 0x0041FAD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041FB24;
    }
    // 0x0041FAD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FAD4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FAD8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
L_0041FADC:
    // 0x0041FADC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAE0: addiu       $v1, $v1, -0x4910
    ctx->r3 = ADD32(ctx->r3, -0X4910);
    // 0x0041FAE4: beq         $v0, $zero, L_0041FAF4
    if (ctx->r2 == 0) {
        // 0x0041FAE8: nop
    
            goto L_0041FAF4;
    }
    // 0x0041FAE8: nop

    // 0x0041FAEC: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041FAF0: addiu       $v1, $v1, -0x4958
    ctx->r3 = ADD32(ctx->r3, -0X4958);
L_0041FAF4:
    // 0x0041FAF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041FAF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041FAFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0041FB00: lw          $a2, 0x1C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1C);
    // 0x0041FB04: lw          $a3, 0x20($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X20);
    // 0x0041FB08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041FB0C: addiu       $a1, $a1, -0x3DD0
    ctx->r5 = ADD32(ctx->r5, -0X3DD0);
    // 0x0041FB10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041FB14: sw          $s5, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r21;
L_0041FB18:
    // 0x0041FB18: jal         0x00416644
    // 0x0041FB1C: nop

    func_00416644(rdram, ctx);
        goto after_34;
    // 0x0041FB1C: nop

    after_34:
    // 0x0041FB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041FB24:
    // 0x0041FB24: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0041FB28: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041FB2C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041FB30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041FB34: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041FB38: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041FB3C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041FB40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041FB44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041FB48: jr          $ra
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041FB4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_002576F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002576F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002576F4: lwc1        $f0, 0x7240($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7240);
    // 0x002576F8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002576FC: nop

    // 0x00257700: bc1f        L_00257714
    if (!c1cs) {
            // 0x00257704: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    func_00257714(rdram, ctx);
    return;
    }
    // 0x00257704: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00257708: addiu       $v0, $zero, 0x8A7
    ctx->r2 = ADD32(0, 0X8A7);
    // 0x0025770C: jr          $ra
    // 0x00257710: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
    return;
    // 0x00257710: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0029C8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0028F89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F89C: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x0028F8A0: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x0028F8A4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0028F8A8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0028F8AC: lw          $v0, 0xC($t1)
    ctx->r2 = MEM_W(ctx->r9, 0XC);
    // 0x0028F8B0: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x0028F8B4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0028F8B8: lw          $v0, 0x10($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X10);
    // 0x0028F8BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0028F8C0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
L_0028F8C4:
    // 0x0028F8C4: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x0028F8C8: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x0028F8CC: lw          $v0, 0x58($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X58);
    // 0x0028F8D0: addu        $v1, $t1, $t0
    ctx->r3 = ADD32(ctx->r9, ctx->r8);
    // 0x0028F8D4: sw          $v0, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r2;
    // 0x0028F8D8: lbu         $v0, 0x98($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X98);
    // 0x0028F8DC: addu        $a0, $a1, $t0
    ctx->r4 = ADD32(ctx->r5, ctx->r8);
    // 0x0028F8E0: sb          $v0, 0x8C($a0)
    MEM_B(0X8C, ctx->r4) = ctx->r2;
    // 0x0028F8E4: lbu         $v0, 0xA8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA8);
    // 0x0028F8E8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0028F8EC: sb          $v0, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r2;
    // 0x0028F8F0: lw          $v0, 0xB8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB8);
    // 0x0028F8F4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0028F8F8: sw          $v0, 0xAC($a2)
    MEM_W(0XAC, ctx->r6) = ctx->r2;
    // 0x0028F8FC: slti        $v0, $t0, 0x10
    ctx->r2 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x0028F900: bne         $v0, $zero, L_0028F8C4
    if (ctx->r2 != 0) {
        // 0x0028F904: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0028F8C4;
    }
    // 0x0028F904: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0028F908: jr          $ra
    // 0x0028F90C: nop

    return;
    // 0x0028F90C: nop

;}
RECOMP_FUNC void func_0040EB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EB68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EB6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040EB70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040EB74: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0040EB78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040EB7C: lwc1        $f0, 0x93C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X93C);
    // 0x0040EB80: lwc1        $f1, 0x180($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X180);
    // 0x0040EB84: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040EB88: nop

    // 0x0040EB8C: bc1f        L_0040EBD4
    if (!c1cs) {
        // 0x0040EB90: nop
    
            goto L_0040EBD4;
    }
    // 0x0040EB90: nop

    // 0x0040EB94: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0040EB98: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x0040EB9C: jal         0x002532A8
    // 0x0040EBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x0040EBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0040EBA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040EBA8: beq         $a0, $zero, L_0040EBD4
    if (ctx->r4 == 0) {
        // 0x0040EBAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0040EBD4;
    }
    // 0x0040EBAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040EBB0: addiu       $v1, $s0, 0x1268
    ctx->r3 = ADD32(ctx->r16, 0X1268);
    // 0x0040EBB4: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
    // 0x0040EBB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0040EBBC: sw          $v0, 0x9E4($a0)
    MEM_W(0X9E4, ctx->r4) = ctx->r2;
    // 0x0040EBC0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0040EBC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040EBC8: ori         $v0, $v0, 0x120
    ctx->r2 = ctx->r2 | 0X120;
    // 0x0040EBCC: jal         0x00248BA8
    // 0x0040EBD0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x0040EBD0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_1:
L_0040EBD4:
    // 0x0040EBD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040EBD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040EBDC: jr          $ra
    // 0x0040EBE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040EBE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A948: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A94C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A950: lhu         $a3, 0x8E($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8E);
    // 0x0025A954: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A958: addiu       $a2, $a2, 0x240
    ctx->r6 = ADD32(ctx->r6, 0X240);
    // 0x0025A95C: jal         0x00245A98
    // 0x0025A960: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A960: nop

    after_0:
    // 0x0025A964: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A968: jr          $ra
    // 0x0025A96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004477D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004477D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004477DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004477E0: lw          $v0, 0x510($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X510);
    // 0x004477E4: bne         $v0, $zero, L_004478B0
    if (ctx->r2 != 0) {
        // 0x004477E8: nop
    
            goto L_004478B0;
    }
    // 0x004477E8: nop

    // 0x004477EC: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x004477F0: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x004477F4: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x004477F8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x004477FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447800: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447804: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x00447808: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0044780C: blez        $v0, L_00447834
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447810: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_00447834;
    }
    // 0x00447810: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x00447814: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447818:
    // 0x00447818: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0044781C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447820: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447824: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447828: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044782C: bne         $v0, $zero, L_00447818
    if (ctx->r2 != 0) {
        // 0x00447830: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447818;
    }
    // 0x00447830: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447834:
    // 0x00447834: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447838: blez        $v0, L_00447860
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044783C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447860;
    }
    // 0x0044783C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447840: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447844:
    // 0x00447844: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00447848: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0044784C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447850: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447854: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447858: bne         $v0, $zero, L_00447844
    if (ctx->r2 != 0) {
        // 0x0044785C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447844;
    }
    // 0x0044785C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447860:
    // 0x00447860: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447864: blez        $v0, L_0044788C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447868: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044788C;
    }
    // 0x00447868: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044786C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447870:
    // 0x00447870: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00447874: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447878: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0044787C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447880: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447884: bne         $v0, $zero, L_00447870
    if (ctx->r2 != 0) {
        // 0x00447888: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447870;
    }
    // 0x00447888: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0044788C:
    // 0x0044788C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x00447890: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x00447894: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00447898: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0044789C: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x004478A0: beq         $v0, $zero, L_004478B0
    if (ctx->r2 == 0) {
        // 0x004478A4: nop
    
            goto L_004478B0;
    }
    // 0x004478A4: nop

    // 0x004478A8: jalr        $v0
    // 0x004478AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004478AC: nop

    after_0:
L_004478B0:
    // 0x004478B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004478B4: jr          $ra
    // 0x004478B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004478B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00417D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417D78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00417D7C: lwc1        $f0, 0x8FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8FC);
    // 0x00417D80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00417D84: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00417D88: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00417D8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417D90: lwc1        $f1, 0xEE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XEE8);
    // 0x00417D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00417D98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00417D9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00417DA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00417DA4: swc1        $f0, 0x8FC($at)
    MEM_W(0X8FC, ctx->r1) = ctx->f0.u32l;
    // 0x00417DA8: bc1f        L_00417DC8
    if (!c1cs) {
        // 0x00417DAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00417DC8;
    }
    // 0x00417DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00417DB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00417DB4: addiu       $a0, $a0, -0x5350
    ctx->r4 = ADD32(ctx->r4, -0X5350);
    // 0x00417DB8: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x00417DBC: jal         0x002534E0
    // 0x00417DC0: addiu       $a0, $a0, -0x1440
    ctx->r4 = ADD32(ctx->r4, -0X1440);
    func_002534E0(rdram, ctx);
        goto after_0;
    // 0x00417DC0: addiu       $a0, $a0, -0x1440
    ctx->r4 = ADD32(ctx->r4, -0X1440);
    after_0:
    // 0x00417DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00417DC8:
    // 0x00417DC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00417DCC: jr          $ra
    // 0x00417DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00271DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271DE0: beq         $v0, $zero, L_00271E14
    if (ctx->r2 == 0) {
        // 0x00271DE4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00271E14;
    }
    // 0x00271DE4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00271DE8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00271DEC:
    // 0x00271DEC: lw          $v0, 0x1E64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E64);
    // 0x00271DF0: beql        $v0, $a1, L_00271DF8
    if (ctx->r2 == ctx->r5) {
        // 0x00271DF4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00271DF8;
    }
    goto skip_0;
    // 0x00271DF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_00271DF8:
    // 0x00271DF8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00271DFC: slti        $v0, $a2, 0x11
    ctx->r2 = SIGNED(ctx->r6) < 0X11 ? 1 : 0;
    // 0x00271E00: bne         $v0, $zero, L_00271DEC
    if (ctx->r2 != 0) {
        // 0x00271E04: addiu       $a0, $a0, 0xCC
        ctx->r4 = ADD32(ctx->r4, 0XCC);
            goto L_00271DEC;
    }
    // 0x00271E04: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, 0XCC);
    // 0x00271E08: slti        $v1, $v1, 0x6
    ctx->r3 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x00271E0C: beq         $v1, $zero, L_00271E18
    if (ctx->r3 == 0) {
        // 0x00271E10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00271E18;
    }
    // 0x00271E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00271E14:
    // 0x00271E14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00271E18:
    // 0x00271E18: jr          $ra
    // 0x00271E1C: nop

    return;
    // 0x00271E1C: nop

;}
RECOMP_FUNC void func_0022515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022515C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00225160: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225164: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00225168: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0022516C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00225170: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00225174: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00225178: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0022517C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225180: lw          $s0, 0x1168($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1168);
    // 0x00225184: lw          $s1, 0x1178($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1178);
    // 0x00225188: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0022518C: beq         $s0, $v0, L_002251BC
    if (ctx->r16 == ctx->r2) {
        // 0x00225190: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_002251BC;
    }
    // 0x00225190: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00225194: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_00225198:
    // 0x00225198: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x0022519C: bnel        $v0, $s3, L_002251B0
    if (ctx->r2 != ctx->r19) {
        // 0x002251A0: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_002251B0;
    }
    goto skip_0;
    // 0x002251A0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x002251A4: jal         0x0026E210
    // 0x002251A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026E210(rdram, ctx);
        goto after_0;
    // 0x002251A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002251AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_002251B0:
    // 0x002251B0: bne         $s0, $s4, L_00225198
    if (ctx->r16 != ctx->r20) {
        // 0x002251B4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00225198;
    }
    // 0x002251B4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x002251B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002251BC:
    // 0x002251BC: lw          $s0, 0x116C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X116C);
    // 0x002251C0: lw          $s1, 0x117C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X117C);
    // 0x002251C4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002251C8: beq         $s0, $v0, L_002251F0
    if (ctx->r16 == ctx->r2) {
        // 0x002251CC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_002251F0;
    }
    // 0x002251CC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_002251D0:
    // 0x002251D0: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x002251D4: bnel        $v0, $s3, L_002251E8
    if (ctx->r2 != ctx->r19) {
        // 0x002251D8: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_002251E8;
    }
    goto skip_1;
    // 0x002251D8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_1:
    // 0x002251DC: jal         0x0026E210
    // 0x002251E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026E210(rdram, ctx);
        goto after_1;
    // 0x002251E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002251E4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_002251E8:
    // 0x002251E8: bne         $s0, $s2, L_002251D0
    if (ctx->r16 != ctx->r18) {
        // 0x002251EC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_002251D0;
    }
    // 0x002251EC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_002251F0:
    // 0x002251F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002251F4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002251F8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002251FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225200: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225204: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225208: jr          $ra
    // 0x0022520C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0022520C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00295410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00295410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00295414: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00295418: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029541C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00295420: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00295424: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00295428: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0029542C: lui         $a1, 0x29
    ctx->r5 = S32(0X29 << 16);
    // 0x00295430: addiu       $a1, $a1, 0x4D60
    ctx->r5 = ADD32(ctx->r5, 0X4D60);
    // 0x00295434: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x00295438: addiu       $a2, $a2, 0x4E3C
    ctx->r6 = ADD32(ctx->r6, 0X4E3C);
    // 0x0029543C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00295440: jal         0x00296340
    // 0x00295444: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x00295444: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x00295448: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0029544C: sw          $s1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r17;
    // 0x00295450: sw          $s2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r18;
    // 0x00295454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00295458: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029545C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00295460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00295464: jr          $ra
    // 0x00295468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00295468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00282340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00282340: addiu       $sp, $sp, -0x210
    ctx->r29 = ADD32(ctx->r29, -0X210);
    // 0x00282344: sw          $s7, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r23;
    // 0x00282348: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0028234C: sw          $s3, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r19;
    // 0x00282350: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00282354: sw          $s1, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r17;
    // 0x00282358: addiu       $s1, $s7, 0x14
    ctx->r17 = ADD32(ctx->r23, 0X14);
    // 0x0028235C: sw          $ra, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r31;
    // 0x00282360: sw          $fp, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r30;
    // 0x00282364: sw          $s6, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r22;
    // 0x00282368: sw          $s5, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r21;
    // 0x0028236C: sw          $s4, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r20;
    // 0x00282370: sw          $s2, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r18;
    // 0x00282374: sw          $s0, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r16;
    // 0x00282378: sdc1        $f23, 0x208($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X208, ctx->r29);
    // 0x0028237C: sdc1        $f22, 0x200($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X200, ctx->r29);
    // 0x00282380: sdc1        $f21, 0x1F8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X1F8, ctx->r29);
    // 0x00282384: sdc1        $f20, 0x1F0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X1F0, ctx->r29);
    // 0x00282388: jal         0x0020798C
    // 0x0028238C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020798C(rdram, ctx);
        goto after_0;
    // 0x0028238C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00282390: beq         $v0, $zero, L_00282E0C
    if (ctx->r2 == 0) {
        // 0x00282394: sw          $v0, 0x1AC($sp)
        MEM_W(0X1AC, ctx->r29) = ctx->r2;
            goto L_00282E0C;
    }
    // 0x00282394: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x00282398: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0028239C: jal         0x002079D8
    // 0x002823A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_002079D8(rdram, ctx);
        goto after_1;
    // 0x002823A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x002823A4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x002823A8: beq         $v0, $zero, L_00282E00
    if (ctx->r2 == 0) {
        // 0x002823AC: nop
    
            goto L_00282E00;
    }
    // 0x002823AC: nop

    // 0x002823B0: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x002823B4: addiu       $s2, $s2, -0x71DC
    ctx->r18 = ADD32(ctx->r18, -0X71DC);
    // 0x002823B8: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x002823BC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002823C0: lw          $s0, 0xC($s7)
    ctx->r16 = MEM_W(ctx->r23, 0XC);
    // 0x002823C4: lwc1        $f1, 0x20C($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X20C);
    // 0x002823C8: lwc1        $f2, 0x218($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X218);
    // 0x002823CC: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002823D0: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x002823D4: lwc1        $f3, 0xC($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x002823D8: lbu         $a3, 0x2($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X2);
    // 0x002823DC: lbu         $t1, 0x3($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X3);
    // 0x002823E0: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x002823E4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002823E8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002823EC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x002823F0: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x002823F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002823F8: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002823FC: trunc.w.s   $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00282400: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282404: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00282408: bne         $v1, $zero, L_00282414
    if (ctx->r3 != 0) {
        // 0x0028240C: nop
    
            goto L_00282414;
    }
    // 0x0028240C: nop

    // 0x00282410: break       7
    do_break(2630672);
L_00282414:
    // 0x00282414: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00282418: bne         $v1, $at, L_0028242C
    if (ctx->r3 != ctx->r1) {
        // 0x0028241C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0028242C;
    }
    // 0x0028241C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00282420: bne         $v0, $at, L_0028242C
    if (ctx->r2 != ctx->r1) {
        // 0x00282424: nop
    
            goto L_0028242C;
    }
    // 0x00282424: nop

    // 0x00282428: break       6
    do_break(2630696);
L_0028242C:
    // 0x0028242C: mfhi        $a2
    ctx->r6 = hi;
    // 0x00282430: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282434: lwc1        $f0, -0x6390($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6390);
    // 0x00282438: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0028243C: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x00282440: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00282444: sw          $t0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r8;
    // 0x00282448: mul.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0028244C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00282450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00282454: sllv        $a3, $v0, $a3
    ctx->r7 = S32(ctx->r2 << (ctx->r7 & 31));
    // 0x00282458: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x0028245C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00282460: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x00282464: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00282468: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028246C: sllv        $v0, $v0, $t1
    ctx->r2 = S32(ctx->r2 << (ctx->r9 & 31));
    // 0x00282470: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00282474: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00282478: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0028247C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00282480: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00282484: trunc.w.s   $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00282488: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x0028248C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282490: swc1        $f7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x00282494: jal         0x00206B30
    // 0x00282498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00206B30(rdram, ctx);
        goto after_2;
    // 0x00282498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x0028249C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002824A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002824A4: lwc1        $f23, -0x638C($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X638C);
    // 0x002824A8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x002824AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002824B0: lwc1        $f20, -0x6388($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6388);
    // 0x002824B4: bltz        $v0, L_002824C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x002824B8: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_002824C4;
    }
    // 0x002824B8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x002824BC: bne         $v0, $zero, L_00282540
    if (ctx->r2 != 0) {
        // 0x002824C0: nop
    
            goto L_00282540;
    }
    // 0x002824C0: nop

L_002824C4:
    // 0x002824C4: jal         0x00207A70
    // 0x002824C8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_00207A70(rdram, ctx);
        goto after_3;
    // 0x002824C8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x002824CC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002824D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002824D4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002824D8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x002824DC: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x002824E0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002824E4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x002824E8: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x002824EC: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x002824F0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002824F4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002824F8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002824FC: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00282500: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00282504: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x00282508: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0028250C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x00282510: sb          $v0, 0x198($sp)
    MEM_B(0X198, ctx->r29) = ctx->r2;
    // 0x00282514: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x00282518: sb          $v0, 0x199($sp)
    MEM_B(0X199, ctx->r29) = ctx->r2;
    // 0x0028251C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x00282520: sb          $v0, 0x19A($sp)
    MEM_B(0X19A, ctx->r29) = ctx->r2;
    // 0x00282524: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x00282528: sb          $v0, 0x1A0($sp)
    MEM_B(0X1A0, ctx->r29) = ctx->r2;
    // 0x0028252C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x00282530: sb          $v0, 0x1A1($sp)
    MEM_B(0X1A1, ctx->r29) = ctx->r2;
    // 0x00282534: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x00282538: j           L_00282564
    // 0x0028253C: sb          $v0, 0x1A2($sp)
    MEM_B(0X1A2, ctx->r29) = ctx->r2;
        goto L_00282564;
    // 0x0028253C: sb          $v0, 0x1A2($sp)
    MEM_B(0X1A2, ctx->r29) = ctx->r2;
L_00282540:
    // 0x00282540: jal         0x00207A70
    // 0x00282544: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_00207A70(rdram, ctx);
        goto after_4;
    // 0x00282544: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_4:
    // 0x00282548: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028254C: sb          $v0, 0x198($sp)
    MEM_B(0X198, ctx->r29) = ctx->r2;
    // 0x00282550: sb          $v0, 0x199($sp)
    MEM_B(0X199, ctx->r29) = ctx->r2;
    // 0x00282554: sb          $v0, 0x19A($sp)
    MEM_B(0X19A, ctx->r29) = ctx->r2;
    // 0x00282558: sb          $v0, 0x1A0($sp)
    MEM_B(0X1A0, ctx->r29) = ctx->r2;
    // 0x0028255C: sb          $v0, 0x1A1($sp)
    MEM_B(0X1A1, ctx->r29) = ctx->r2;
    // 0x00282560: sb          $v0, 0x1A2($sp)
    MEM_B(0X1A2, ctx->r29) = ctx->r2;
L_00282564:
    // 0x00282564: lwc1        $f0, 0x25C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X25C);
    // 0x00282568: lwc1        $f1, 0x268($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X268);
    // 0x0028256C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00282570: lwc1        $f1, 0x274($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X274);
    // 0x00282574: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00282578: lwc1        $f1, 0x280($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X280);
    // 0x0028257C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00282580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282584: lwc1        $f3, -0x6384($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6384);
    // 0x00282588: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0028258C: lwc1        $f1, 0x250($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X250);
    // 0x00282590: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x00282594: sw          $t2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r10;
    // 0x00282598: lwc1        $f6, 0x210($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X210);
    // 0x0028259C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002825A0: nop

    // 0x002825A4: bc1fl       L_002825AC
    if (!c1cs) {
        // 0x002825A8: sw          $zero, 0x1A8($sp)
        MEM_W(0X1A8, ctx->r29) = 0;
            goto L_002825AC;
    }
    goto skip_0;
    // 0x002825A8: sw          $zero, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = 0;
    skip_0:
L_002825AC:
    // 0x002825AC: lbu         $v0, 0x28($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28);
    // 0x002825B0: sub.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f6.fl;
    // 0x002825B4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x002825B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x002825BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x002825C0: c.lt.s      $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f1.fl < ctx->f5.fl;
    // 0x002825C4: nop

    // 0x002825C8: bc1tl       L_002825D0
    if (c1cs) {
        // 0x002825CC: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_002825D0;
    }
    goto skip_1;
    // 0x002825CC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_1:
L_002825D0:
    // 0x002825D0: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x002825D4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x002825D8: nop

    // 0x002825DC: bc1f        L_00282618
    if (!c1cs) {
        // 0x002825E0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00282618;
    }
    // 0x002825E0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002825E4: mul.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x002825E8: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002825EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002825F0: lwc1        $f0, -0x6380($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6380);
    // 0x002825F4: mul.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002825F8: c.lt.s      $f3, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f3.fl < ctx->f5.fl;
    // 0x002825FC: nop

    // 0x00282600: bc1f        L_00282610
    if (!c1cs) {
        // 0x00282604: nop
    
            goto L_00282610;
    }
    // 0x00282604: nop

    // 0x00282608: j           L_00282618
    // 0x0028260C: mov.s       $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
        goto L_00282618;
    // 0x0028260C: mov.s       $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
L_00282610:
    // 0x00282610: mul.s       $f0, $f3, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x00282614: div.s       $f4, $f0, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
L_00282618:
    // 0x00282618: addiu       $t0, $sp, 0xC0
    ctx->r8 = ADD32(ctx->r29, 0XC0);
    // 0x0028261C: lwc1        $f0, 0x208($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X208);
    // 0x00282620: lwc1        $f1, 0x220($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X220);
    // 0x00282624: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    // 0x00282628: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028262C: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x00282630: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00282634: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00282638: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028263C: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
L_00282640:
    // 0x00282640: lwc1        $f0, 0x24C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24C);
    // 0x00282644: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x00282648: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x0028264C: lwc1        $f0, 0x254($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X254);
    // 0x00282650: bne         $s1, $zero, L_00282664
    if (ctx->r17 != 0) {
        // 0x00282654: swc1        $f0, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
            goto L_00282664;
    }
    // 0x00282654: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x00282658: lbu         $v0, 0x198($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X198);
    // 0x0028265C: j           L_00282668
    // 0x00282660: nop

        goto L_00282668;
    // 0x00282660: nop

L_00282664:
    // 0x00282664: lbu         $v0, 0x1A0($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1A0);
L_00282668:
    // 0x00282668: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0028266C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00282670: bne         $s1, $zero, L_00282684
    if (ctx->r17 != 0) {
        // 0x00282674: swc1        $f0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
            goto L_00282684;
    }
    // 0x00282674: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x00282678: lbu         $v0, 0x199($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X199);
    // 0x0028267C: j           L_00282688
    // 0x00282680: nop

        goto L_00282688;
    // 0x00282680: nop

L_00282684:
    // 0x00282684: lbu         $v0, 0x1A1($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1A1);
L_00282688:
    // 0x00282688: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0028268C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00282690: bne         $s1, $zero, L_002826A4
    if (ctx->r17 != 0) {
        // 0x00282694: swc1        $f0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
            goto L_002826A4;
    }
    // 0x00282694: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x00282698: lbu         $v0, 0x19A($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X19A);
    // 0x0028269C: j           L_002826A8
    // 0x002826A0: nop

        goto L_002826A8;
    // 0x002826A0: nop

L_002826A4:
    // 0x002826A4: lbu         $v0, 0x1A2($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1A2);
L_002826A8:
    // 0x002826A8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002826AC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002826B0: bne         $s1, $zero, L_002826C0
    if (ctx->r17 != 0) {
        // 0x002826B4: swc1        $f0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
            goto L_002826C0;
    }
    // 0x002826B4: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x002826B8: j           L_002826C4
    // 0x002826BC: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
        goto L_002826C4;
    // 0x002826BC: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
L_002826C0:
    // 0x002826C0: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
L_002826C4:
    // 0x002826C4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x002826C8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x002826CC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x002826D0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x002826D4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x002826D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002826DC: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x002826E0: bne         $v0, $zero, L_00282640
    if (ctx->r2 != 0) {
        // 0x002826E4: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_00282640;
    }
    // 0x002826E4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x002826E8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002826EC: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x002826F0: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x002826F4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x002826F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002826FC: lwc1        $f21, -0x637C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X637C);
L_00282700:
    // 0x00282700: addiu       $a0, $s3, 0x2F8
    ctx->r4 = ADD32(ctx->r19, 0X2F8);
    // 0x00282704: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00282708: jal         0x0026F400
    // 0x0028270C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026F400(rdram, ctx);
        goto after_5;
    // 0x0028270C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00282710: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00282714: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    // 0x00282718: nop

    // 0x0028271C: bc1f        L_00282764
    if (!c1cs) {
        // 0x00282720: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00282764;
    }
    // 0x00282720: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00282724: c.lt.s      $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f2.fl < ctx->f21.fl;
    // 0x00282728: nop

    // 0x0028272C: bc1f        L_00282764
    if (!c1cs) {
        // 0x00282730: nop
    
            goto L_00282764;
    }
    // 0x00282730: nop

    // 0x00282734: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00282738: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0028273C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00282740: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00282744: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00282748: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0028274C: swc1        $f1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00282750: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x00282754: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00282758: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0028275C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00282760: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00282764:
    // 0x00282764: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x00282768: bne         $v0, $zero, L_00282700
    if (ctx->r2 != 0) {
        // 0x0028276C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_00282700;
    }
    // 0x0028276C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
        turok2_patch_sky_layer_corners(rdram, ctx);

    // 0x00282770: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00282774: addiu       $s5, $sp, 0x38
    ctx->r21 = ADD32(ctx->r29, 0X38);
    // 0x00282778: addiu       $t3, $sp, 0xE4
    ctx->r11 = ADD32(ctx->r29, 0XE4);
    // 0x0028277C: addiu       $t4, $sp, 0xF0
    ctx->r12 = ADD32(ctx->r29, 0XF0);
    // 0x00282780: addiu       $t5, $sp, 0x168
    ctx->r13 = ADD32(ctx->r29, 0X168);
    // 0x00282784: addiu       $t2, $sp, 0x178
    ctx->r10 = ADD32(ctx->r29, 0X178);
    // 0x00282788: addiu       $fp, $sp, 0x78
    ctx->r30 = ADD32(ctx->r29, 0X78);
    // 0x0028278C: sw          $t3, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r11;
    // 0x00282790: addiu       $t3, $sp, 0x100
    ctx->r11 = ADD32(ctx->r29, 0X100);
    // 0x00282794: sw          $t4, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r12;
    // 0x00282798: addiu       $t4, $sp, 0xD8
    ctx->r12 = ADD32(ctx->r29, 0XD8);
    // 0x0028279C: addu        $s6, $s4, $zero
    ctx->r22 = ADD32(ctx->r20, 0);
    // 0x002827A0: sw          $t5, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r13;
    // 0x002827A4: sw          $t2, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r10;
    // 0x002827A8: sw          $t3, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r11;
    // 0x002827AC: sw          $t4, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r12;
    // 0x002827B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002827B4:
    // 0x002827B4: beq         $s4, $v0, L_002827E4
    if (ctx->r20 == ctx->r2) {
        // 0x002827B8: slti        $v0, $s4, 0x2
        ctx->r2 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
            goto L_002827E4;
    }
    // 0x002827B8: slti        $v0, $s4, 0x2
    ctx->r2 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x002827BC: bnel        $v0, $zero, L_002827D8
    if (ctx->r2 != 0) {
        // 0x002827C0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002827D8;
    }
    goto skip_2;
    // 0x002827C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
    // 0x002827C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002827C8: beq         $s4, $v0, L_002827F4
    if (ctx->r20 == ctx->r2) {
        // 0x002827CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_002827F4;
    }
    // 0x002827CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002827D0: beq         $s4, $v0, L_00282804
    if (ctx->r20 == ctx->r2) {
        // 0x002827D4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00282804;
    }
    // 0x002827D4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_002827D8:
    // 0x002827D8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002827DC: j           L_0028280C
    // 0x002827E0: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
        goto L_0028280C;
    // 0x002827E0: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_002827E4:
    // 0x002827E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002827E8: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x002827EC: j           L_0028280C
    // 0x002827F0: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
        goto L_0028280C;
    // 0x002827F0: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_002827F4:
    // 0x002827F4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002827F8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x002827FC: j           L_0028280C
    // 0x00282800: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
        goto L_0028280C;
    // 0x00282800: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_00282804:
    // 0x00282804: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x00282808: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0028280C:
    // 0x0028280C: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
    // 0x00282810: and         $v0, $s0, $v0
    ctx->r2 = ctx->r16 & ctx->r2;
    // 0x00282814: lw          $a0, 0x1B8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B8);
    // 0x00282818: lw          $a1, 0x1B0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B0);
    // 0x0028281C: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00282820: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x00282824: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00282828: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0028282C: sw          $t5, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r13;
    // 0x00282830: sw          $t2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r10;
    // 0x00282834: sw          $t3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r11;
    // 0x00282838: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x0028283C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00282840: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00282844: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00282848: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x0028284C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00282850: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x00282854: sw          $t5, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r13;
    // 0x00282858: sw          $t2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r10;
    // 0x0028285C: sw          $t3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r11;
    // 0x00282860: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x00282864: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00282868: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0028286C: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00282870: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x00282874: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00282878: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0028287C: sw          $t5, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r13;
    // 0x00282880: sw          $t2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r10;
    // 0x00282884: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x00282888: jal         0x0020EF2C
    // 0x0028288C: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x0028288C: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    after_6:
    // 0x00282890: lw          $a0, 0x1BC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1BC);
    // 0x00282894: lw          $a1, 0x1B4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B4);
    // 0x00282898: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    // 0x0028289C: jal         0x0020EF2C
    // 0x002828A0: nop

    func_0020EF2C(rdram, ctx);
        goto after_7;
    // 0x002828A0: nop

    after_7:
    // 0x002828A4: lw          $a1, 0x1B8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B8);
    // 0x002828A8: lw          $a2, 0x1BC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1BC);
    // 0x002828AC: jal         0x0020EFDC
    // 0x002828B0: addiu       $a0, $sp, 0x188
    ctx->r4 = ADD32(ctx->r29, 0X188);
    func_0020EFDC(rdram, ctx);
        goto after_8;
    // 0x002828B0: addiu       $a0, $sp, 0x188
    ctx->r4 = ADD32(ctx->r29, 0X188);
    after_8:
    // 0x002828B4: lwc1        $f1, 0x18C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18C);
    // 0x002828B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002828BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002828C0: nop

    // 0x002828C4: bc1f        L_002828E0
    if (!c1cs) {
        // 0x002828C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002828E0;
    }
    // 0x002828C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002828CC: lw          $t5, 0x1A8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1A8);
    // 0x002828D0: bne         $t5, $v0, L_002828EC
    if (ctx->r13 != ctx->r2) {
        // 0x002828D4: sll         $a1, $s0, 2
        ctx->r5 = S32(ctx->r16 << 2);
            goto L_002828EC;
    }
    // 0x002828D4: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x002828D8: j           L_00282DF0
    // 0x002828DC: addiu       $s6, $s6, 0x30
    ctx->r22 = ADD32(ctx->r22, 0X30);
        goto L_00282DF0;
    // 0x002828DC: addiu       $s6, $s6, 0x30
    ctx->r22 = ADD32(ctx->r22, 0X30);
L_002828E0:
    // 0x002828E0: lw          $t2, 0x1A8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A8);
    // 0x002828E4: beq         $t2, $zero, L_00282DEC
    if (ctx->r10 == 0) {
        // 0x002828E8: sll         $a1, $s0, 2
        ctx->r5 = S32(ctx->r16 << 2);
            goto L_00282DEC;
    }
    // 0x002828E8: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
L_002828EC:
    // 0x002828EC: addu        $v0, $fp, $a1
    ctx->r2 = ADD32(ctx->r30, ctx->r5);
    // 0x002828F0: sll         $a0, $s2, 2
    ctx->r4 = S32(ctx->r18 << 2);
    // 0x002828F4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002828F8: addu        $v0, $fp, $a0
    ctx->r2 = ADD32(ctx->r30, ctx->r4);
    // 0x002828FC: sll         $a2, $s3, 2
    ctx->r6 = S32(ctx->r19 << 2);
    // 0x00282900: addiu       $v1, $sp, 0x90
    ctx->r3 = ADD32(ctx->r29, 0X90);
    // 0x00282904: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282908: lwc1        $f2, -0x6378($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6378);
    // 0x0028290C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00282910: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    // 0x00282914: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00282918: addu        $v0, $fp, $a2
    ctx->r2 = ADD32(ctx->r30, ctx->r6);
    // 0x0028291C: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    // 0x00282920: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00282924: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x00282928: swc1        $f0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f0.u32l;
    // 0x0028292C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00282930: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x00282934: swc1        $f0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f0.u32l;
    // 0x00282938: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0028293C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00282940: swc1        $f0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f0.u32l;
    // 0x00282944: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00282948: addiu       $v1, $sp, 0xA8
    ctx->r3 = ADD32(ctx->r29, 0XA8);
    // 0x0028294C: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x00282950: swc1        $f0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f0.u32l;
    // 0x00282954: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00282958: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0028295C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00282960: swc1        $f0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f0.u32l;
    // 0x00282964: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00282968: addiu       $v0, $sp, 0xC0
    ctx->r2 = ADD32(ctx->r29, 0XC0);
    // 0x0028296C: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x00282970: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00282974: lw          $v1, 0x1C0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C0);
    // 0x00282978: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    // 0x0028297C: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x00282980: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00282984: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x00282988: swc1        $f0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f0.u32l;
    // 0x0028298C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00282990: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00282994: swc1        $f0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f0.u32l;
    // 0x00282998: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0028299C: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
    // 0x002829A0: and         $v0, $s0, $v0
    ctx->r2 = ctx->r16 & ctx->r2;
    // 0x002829A4: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x002829A8: swc1        $f0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f0.u32l;
    // 0x002829AC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x002829B0: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x002829B4: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x002829B8: sw          $t3, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r11;
    // 0x002829BC: sw          $t4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r12;
    // 0x002829C0: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x002829C4: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x002829C8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x002829CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002829D0: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x002829D4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x002829D8: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x002829DC: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x002829E0: sw          $t3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r11;
    // 0x002829E4: sw          $t4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r12;
    // 0x002829E8: sw          $t5, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r13;
    // 0x002829EC: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x002829F0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x002829F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002829F8: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x002829FC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x00282A00: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x00282A04: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x00282A08: sw          $t3, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r11;
    // 0x00282A0C: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x00282A10: sw          $t5, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r13;
L_00282A14:
    // 0x00282A14: lwc1        $f1, 0xD8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XD8);
    // 0x00282A18: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00282A1C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00282A20: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00282A24: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x00282A28: lwc1        $f1, 0xE0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XE0);
    // 0x00282A2C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00282A30: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00282A34: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00282A38: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x00282A3C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00282A40: lwc1        $f1, 0x1C($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X1C);
    // 0x00282A44: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00282A48: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x00282A4C: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x00282A50: lwc1        $f0, 0x20($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X20);
    // 0x00282A54: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00282A58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00282A5C: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x00282A60: swc1        $f1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00282A64: bne         $v0, $zero, L_00282A14
    if (ctx->r2 != 0) {
        // 0x00282A68: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_00282A14;
    }
    // 0x00282A68: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x00282A6C: lwc1        $f0, 0x118($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X118);
    // 0x00282A70: lwc1        $f2, 0x10C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x00282A74: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00282A78: nop

    // 0x00282A7C: bc1fl       L_00282A84
    if (!c1cs) {
        // 0x00282A80: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_00282A84;
    }
    goto skip_3;
    // 0x00282A80: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
L_00282A84:
    // 0x00282A84: lwc1        $f1, 0x100($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X100);
    // 0x00282A88: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00282A8C: nop

    // 0x00282A90: bc1fl       L_00282A98
    if (!c1cs) {
        // 0x00282A94: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00282A98;
    }
    goto skip_4;
    // 0x00282A94: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_00282A98:
    // 0x00282A98: lwc1        $f3, 0x118($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X118);
    // 0x00282A9C: c.le.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl <= ctx->f2.fl;
    // 0x00282AA0: nop

    // 0x00282AA4: bc1fl       L_00282AAC
    if (!c1cs) {
        // 0x00282AA8: mov.s       $f3, $f2
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
            goto L_00282AAC;
    }
    goto skip_5;
    // 0x00282AA8: mov.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
    skip_5:
L_00282AAC:
    // 0x00282AAC: c.le.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl <= ctx->f1.fl;
    // 0x00282AB0: nop

    // 0x00282AB4: bc1fl       L_00282ABC
    if (!c1cs) {
        // 0x00282AB8: mov.s       $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
            goto L_00282ABC;
    }
    goto skip_6;
    // 0x00282AB8: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
    skip_6:
L_00282ABC:
    // 0x00282ABC: lwc1        $f5, 0x120($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X120);
    // 0x00282AC0: lwc1        $f2, 0x114($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X114);
    // 0x00282AC4: c.le.s      $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f2.fl <= ctx->f5.fl;
    // 0x00282AC8: nop

    // 0x00282ACC: bc1fl       L_00282AD4
    if (!c1cs) {
        // 0x00282AD0: mov.s       $f5, $f2
        CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f5.fl = ctx->f2.fl;
            goto L_00282AD4;
    }
    goto skip_7;
    // 0x00282AD0: mov.s       $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f5.fl = ctx->f2.fl;
    skip_7:
L_00282AD4:
    // 0x00282AD4: lwc1        $f1, 0x108($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X108);
    // 0x00282AD8: c.le.s      $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f1.fl <= ctx->f5.fl;
    // 0x00282ADC: nop

    // 0x00282AE0: bc1fl       L_00282AE8
    if (!c1cs) {
        // 0x00282AE4: mov.s       $f5, $f1
        CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f5.fl = ctx->f1.fl;
            goto L_00282AE8;
    }
    goto skip_8;
    // 0x00282AE4: mov.s       $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f5.fl = ctx->f1.fl;
    skip_8:
L_00282AE8:
    // 0x00282AE8: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    // 0x00282AEC: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x00282AF0: nop

    // 0x00282AF4: bc1fl       L_00282AFC
    if (!c1cs) {
        // 0x00282AF8: mov.s       $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
            goto L_00282AFC;
    }
    goto skip_9;
    // 0x00282AF8: mov.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
    skip_9:
L_00282AFC:
    // 0x00282AFC: c.le.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl <= ctx->f1.fl;
    // 0x00282B00: nop

    // 0x00282B04: bc1fl       L_00282B0C
    if (!c1cs) {
        // 0x00282B08: mov.s       $f4, $f1
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
            goto L_00282B0C;
    }
    goto skip_10;
    // 0x00282B08: mov.s       $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
    skip_10:
L_00282B0C:
    // 0x00282B0C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00282B10: nop

    // 0x00282B14: bc1fl       L_00282B40
    if (!c1cs) {
        // 0x00282B18: neg.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
            goto L_00282B40;
    }
    goto skip_11;
    // 0x00282B18: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    skip_11:
    // 0x00282B1C: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00282B20: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282B24: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282B28: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00282B2C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00282B30: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x00282B34: mul.s       $f6, $f1, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00282B38: j           L_00282B74
    // 0x00282B3C: nop

        goto L_00282B74;
    // 0x00282B3C: nop

L_00282B40:
    // 0x00282B40: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00282B44: nop

    // 0x00282B48: bc1f        L_00282B70
    if (!c1cs) {
        // 0x00282B4C: nop
    
            goto L_00282B70;
    }
    // 0x00282B4C: nop

    // 0x00282B50: div.s       $f0, $f3, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f3.fl, ctx->f20.fl);
    // 0x00282B54: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282B58: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282B5C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00282B60: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00282B64: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00282B68: j           L_00282B74
    // 0x00282B6C: nop

        goto L_00282B74;
    // 0x00282B6C: nop

L_00282B70:
    // 0x00282B70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_00282B74:
    // 0x00282B74: c.le.s      $f20, $f5
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f20.fl <= ctx->f5.fl;
    // 0x00282B78: nop

    // 0x00282B7C: bc1f        L_00282BA8
    if (!c1cs) {
        // 0x00282B80: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00282BA8;
    }
    // 0x00282B80: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00282B84: div.s       $f0, $f5, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f5.fl, ctx->f20.fl);
    // 0x00282B88: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282B8C: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282B90: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00282B94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00282B98: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x00282B9C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00282BA0: j           L_00282BE4
    // 0x00282BA4: addu        $t0, $s6, $zero
    ctx->r8 = ADD32(ctx->r22, 0);
        goto L_00282BE4;
    // 0x00282BA4: addu        $t0, $s6, $zero
    ctx->r8 = ADD32(ctx->r22, 0);
L_00282BA8:
    // 0x00282BA8: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x00282BAC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x00282BB0: nop

    // 0x00282BB4: bc1f        L_00282BDC
    if (!c1cs) {
        // 0x00282BB8: addu        $t0, $s6, $zero
        ctx->r8 = ADD32(ctx->r22, 0);
            goto L_00282BDC;
    }
    // 0x00282BB8: addu        $t0, $s6, $zero
    ctx->r8 = ADD32(ctx->r22, 0);
    // 0x00282BBC: div.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x00282BC0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282BC4: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282BC8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00282BCC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00282BD0: mul.s       $f1, $f0, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00282BD4: j           L_00282BE4
    // 0x00282BD8: nop

        goto L_00282BE4;
    // 0x00282BD8: nop

L_00282BDC:
    // 0x00282BDC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00282BE0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00282BE4:
    // 0x00282BE4: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x00282BE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00282BEC: lw          $a2, 0x1C0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C0);
    // 0x00282BF0: lw          $a1, 0x1C4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C4);
    // 0x00282BF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282BF8: lwc1        $f0, -0x6374($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6374);
    // 0x00282BFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282C00: lwc1        $f2, -0x6370($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6370);
    // 0x00282C04: div.s       $f3, $f0, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f23.fl);
L_00282C08:
    // 0x00282C08: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00282C0C: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00282C10: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00282C14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00282C18: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00282C1C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00282C20: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x00282C24: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00282C28: sll         $v1, $s1, 4
    ctx->r3 = S32(ctx->r17 << 4);
    // 0x00282C2C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00282C30: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x00282C34: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00282C38: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282C3C: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282C40: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00282C44: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00282C48: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282C4C: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282C50: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x00282C54: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00282C58: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282C5C: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282C60: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x00282C64: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x00282C68: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x00282C6C: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00282C70: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282C74: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282C78: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x00282C7C: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x00282C80: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00282C84: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00282C88: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282C8C: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282C90: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
    // 0x00282C94: addu        $v0, $sp, $a0
    ctx->r2 = ADD32(ctx->r29, ctx->r4);
    // 0x00282C98: lwc1        $f0, 0x128($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X128);
    // 0x00282C9C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00282CA0: nop

    // 0x00282CA4: bc1tl       L_00282CBC
    if (c1cs) {
        // 0x00282CA8: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_00282CBC;
    }
    goto skip_12;
    // 0x00282CA8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_12:
    // 0x00282CAC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282CB0: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282CB4: j           L_00282CCC
    // 0x00282CB8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_00282CCC;
    // 0x00282CB8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_00282CBC:
    // 0x00282CBC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282CC0: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282CC4: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00282CC8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_00282CCC:
    // 0x00282CCC: addu        $v0, $sp, $a0
    ctx->r2 = ADD32(ctx->r29, ctx->r4);
    // 0x00282CD0: lwc1        $f0, 0x138($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X138);
    // 0x00282CD4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00282CD8: nop

    // 0x00282CDC: bc1tl       L_00282CF4
    if (c1cs) {
        // 0x00282CE0: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_00282CF4;
    }
    goto skip_13;
    // 0x00282CE0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_13:
    // 0x00282CE4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282CE8: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282CEC: j           L_00282D04
    // 0x00282CF0: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_00282D04;
    // 0x00282CF0: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_00282CF4:
    // 0x00282CF4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282CF8: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282CFC: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00282D00: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_00282D04:
    // 0x00282D04: addu        $v0, $sp, $a0
    ctx->r2 = ADD32(ctx->r29, ctx->r4);
    // 0x00282D08: lwc1        $f0, 0x148($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X148);
    // 0x00282D0C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00282D10: nop

    // 0x00282D14: bc1tl       L_00282D2C
    if (c1cs) {
        // 0x00282D18: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_00282D2C;
    }
    goto skip_14;
    // 0x00282D18: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_14:
    // 0x00282D1C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282D20: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282D24: j           L_00282D3C
    // 0x00282D28: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_00282D3C;
    // 0x00282D28: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_00282D2C:
    // 0x00282D2C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282D30: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282D34: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00282D38: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_00282D3C:
    // 0x00282D3C: addu        $v0, $sp, $a0
    ctx->r2 = ADD32(ctx->r29, ctx->r4);
    // 0x00282D40: lwc1        $f0, 0x158($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X158);
    // 0x00282D44: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00282D48: nop

    // 0x00282D4C: bc1tl       L_00282D64
    if (c1cs) {
        // 0x00282D50: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_00282D64;
    }
    goto skip_15;
    // 0x00282D50: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_15:
    // 0x00282D54: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282D58: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282D5C: j           L_00282D74
    // 0x00282D60: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
        goto L_00282D74;
    // 0x00282D60: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_00282D64:
    // 0x00282D64: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00282D68: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00282D6C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00282D70: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_00282D74:
    // 0x00282D74: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00282D78: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x00282D7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00282D80: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x00282D84: bne         $v0, $zero, L_00282C08
    if (ctx->r2 != 0) {
        // 0x00282D88: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_00282C08;
    }
    // 0x00282D88: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x00282D8C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00282D90: ori         $v0, $v0, 0x3006
    ctx->r2 = ctx->r2 | 0X3006;
    // 0x00282D94: lui         $a3, 0x500
    ctx->r7 = S32(0X500 << 16);
    // 0x00282D98: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00282D9C: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00282DA0: ori         $a3, $a3, 0x204
    ctx->r7 = ctx->r7 | 0X204;
    // 0x00282DA4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00282DA8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00282DAC: lw          $a0, 0x6D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D1C);
    // 0x00282DB0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00282DB4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00282DB8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00282DBC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00282DC0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x00282DC4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00282DC8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00282DCC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00282DD0: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x00282DD4: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00282DD8: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00282DDC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00282DE0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00282DE4: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x00282DE8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_00282DEC:
    // 0x00282DEC: addiu       $s6, $s6, 0x30
    ctx->r22 = ADD32(ctx->r22, 0X30);
L_00282DF0:
    // 0x00282DF0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00282DF4: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x00282DF8: bne         $v0, $zero, L_002827B4
    if (ctx->r2 != 0) {
        // 0x00282DFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002827B4;
    }
    // 0x00282DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00282E00:
    // 0x00282E00: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x00282E04: jal         0x002051F4
    // 0x00282E08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_9;
    // 0x00282E08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
L_00282E0C:
    // 0x00282E0C: lw          $ra, 0x1EC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1EC);
    // 0x00282E10: lw          $fp, 0x1E8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1E8);
    // 0x00282E14: lw          $s7, 0x1E4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1E4);
    // 0x00282E18: lw          $s6, 0x1E0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1E0);
    // 0x00282E1C: lw          $s5, 0x1DC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1DC);
    // 0x00282E20: lw          $s4, 0x1D8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X1D8);
    // 0x00282E24: lw          $s3, 0x1D4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1D4);
    // 0x00282E28: lw          $s2, 0x1D0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1D0);
    // 0x00282E2C: lw          $s1, 0x1CC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1CC);
    // 0x00282E30: lw          $s0, 0x1C8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C8);
    // 0x00282E34: ldc1        $f23, 0x208($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X208);
    // 0x00282E38: ldc1        $f22, 0x200($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X200);
    // 0x00282E3C: ldc1        $f21, 0x1F8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X1F8);
    // 0x00282E40: ldc1        $f20, 0x1F0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X1F0);
    // 0x00282E44: jr          $ra
    // 0x00282E48: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
    return;
    // 0x00282E48: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
;}
RECOMP_FUNC void func_00264CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264CEC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00264CF0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00264CF4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00264CF8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00264CFC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00264D00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00264D04: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x00264D08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00264D0C: bne         $v1, $v0, L_00264D80
    if (ctx->r3 != ctx->r2) {
        // 0x00264D10: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00264D80;
    }
    // 0x00264D10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00264D14: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00264D18: addiu       $s0, $s0, 0x1CE0
    ctx->r16 = ADD32(ctx->r16, 0X1CE0);
    // 0x00264D1C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00264D20: beq         $v0, $zero, L_00264D80
    if (ctx->r2 == 0) {
        // 0x00264D24: nop
    
            goto L_00264D80;
    }
    // 0x00264D24: nop

    // 0x00264D28: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00264D2C: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x00264D30: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00264D34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00264D38: bne         $v1, $v0, L_00264D80
    if (ctx->r3 != ctx->r2) {
        // 0x00264D3C: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00264D80;
    }
    // 0x00264D3C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00264D40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00264D44: addiu       $a2, $zero, 0x500
    ctx->r6 = ADD32(0, 0X500);
    // 0x00264D48: lui         $a3, 0x41CC
    ctx->r7 = S32(0X41CC << 16);
    // 0x00264D4C: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00264D50: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00264D54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00264D58: jal         0x00245828
    // 0x00264D5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_0;
    // 0x00264D5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00264D60: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00264D64: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00264D68: jal         0x002465C8
    // 0x00264D6C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002465C8(rdram, ctx);
        goto after_1;
    // 0x00264D6C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00264D70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00264D74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00264D78: jal         0x00243414
    // 0x00264D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00264D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_00264D80:
    // 0x00264D80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00264D84: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00264D88: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00264D8C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00264D90: jr          $ra
    // 0x00264D94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00264D94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00204D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204D90: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00204D94: jr          $ra
    // 0x00204D98: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    return;
    // 0x00204D98: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
;}
RECOMP_FUNC void func_002856B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002856B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002856BC: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002856C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002856C4: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x002856C8: ori         $v1, $v1, 0x808
    ctx->r3 = ctx->r3 | 0X808;
    // 0x002856CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002856D0: beq         $v0, $zero, L_002856F4
    if (ctx->r2 == 0) {
        // 0x002856D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002856F4;
    }
    // 0x002856D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002856D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002856DC: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x002856E0: beq         $v0, $zero, L_002856F4
    if (ctx->r2 == 0) {
        // 0x002856E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002856F4;
    }
    // 0x002856E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002856E8: jal         0x00275624
    // 0x002856EC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x002856EC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_0:
    // 0x002856F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002856F4:
    // 0x002856F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002856F8: jr          $ra
    // 0x002856FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002856FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00225B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00225B48: lw          $a3, 0xDF8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XDF8);
    // 0x00225B4C: blez        $a3, L_00225B74
    if (SIGNED(ctx->r7) <= 0) {
        // 0x00225B50: addiu       $a0, $a0, 0xBF8
        ctx->r4 = ADD32(ctx->r4, 0XBF8);
            goto L_00225B74;
    }
    // 0x00225B50: addiu       $a0, $a0, 0xBF8
    ctx->r4 = ADD32(ctx->r4, 0XBF8);
L_00225B54:
    // 0x00225B54: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00225B58: lw          $v0, 0x1A8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A8);
    // 0x00225B5C: beql        $v0, $a1, L_00225B64
    if (ctx->r2 == ctx->r5) {
        // 0x00225B60: sw          $zero, 0x1A8($v1)
        MEM_W(0X1A8, ctx->r3) = 0;
            goto L_00225B64;
    }
    goto skip_0;
    // 0x00225B60: sw          $zero, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = 0;
    skip_0:
L_00225B64:
    // 0x00225B64: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00225B68: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00225B6C: bne         $v0, $zero, L_00225B54
    if (ctx->r2 != 0) {
        // 0x00225B70: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00225B54;
    }
    // 0x00225B70: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00225B74:
    // 0x00225B74: jr          $ra
    // 0x00225B78: nop

    return;
    // 0x00225B78: nop

;}
RECOMP_FUNC void func_00289D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289D64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289D6C: jal         0x00288F60
    // 0x00289D70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x00289D70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289D74: jal         0x002860A4
    // 0x00289D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002860A4(rdram, ctx);
        goto after_1;
    // 0x00289D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00289D7C: jal         0x002862A4
    // 0x00289D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002862A4(rdram, ctx);
        goto after_2;
    // 0x00289D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00289D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00289D88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289D8C: jr          $ra
    // 0x00289D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0026514C:
    // 0x0029E138: j           L_0026514C
    // 0x0029E13C: nop

    entry_0026514C(rdram, ctx);
    return;
    // 0x0029E13C: nop

;}
RECOMP_FUNC void func_002820B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002820B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002820B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002820BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002820C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002820C4: jal         0x002053A8
    // 0x002820C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x002820C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x002820CC: lw          $a1, 0xF00($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF00);
    // 0x002820D0: beq         $a1, $zero, L_002820EC
    if (ctx->r5 == 0) {
        // 0x002820D4: nop
    
            goto L_002820EC;
    }
    // 0x002820D4: nop

    // 0x002820D8: jal         0x002052D8
    // 0x002820DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x002820DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x002820E0: sw          $zero, 0xF00($s0)
    MEM_W(0XF00, ctx->r16) = 0;
    // 0x002820E4: sw          $zero, 0xF04($s0)
    MEM_W(0XF04, ctx->r16) = 0;
    // 0x002820E8: sw          $zero, 0xF08($s0)
    MEM_W(0XF08, ctx->r16) = 0;
L_002820EC:
    // 0x002820EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002820F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002820F4: jr          $ra
    // 0x002820F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002820F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00225D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225D94: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x00225D98: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00225D9C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00225DA0: mflo        $a2
    ctx->r6 = lo;
    // 0x00225DA4: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00225DA8: jr          $ra
    // 0x00225DAC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    return;
    // 0x00225DAC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_0040DDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DDAC: jr          $ra
    // 0x0040DDB0: nop

    return;
    // 0x0040DDB0: nop

;}
RECOMP_FUNC void func_00238C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238C34: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238C3C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238C40: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00238C44: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238C48: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238C4C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238C50: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00238C54: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238C58: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00238C5C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00238C60: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00238C64: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00238C68: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x00238C6C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238C70: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238C74: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238C78: jal         0x00237AFC
    // 0x00238C7C: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00238C7C: nop

    after_0:
    // 0x00238C80: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238C84: jr          $ra
    // 0x00238C88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238C88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00228B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228B8C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00228B90: jr          $ra
    // 0x00228B94: nop

    return;
    // 0x00228B94: nop

;}
RECOMP_FUNC void func_002895F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002895F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002895F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002895F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002895FC: jal         0x00288F60
    // 0x00289600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x00289600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289604: jal         0x00289108
    // 0x00289608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00289108(rdram, ctx);
        goto after_1;
    // 0x00289608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0028960C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00289610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289614: jr          $ra
    // 0x00289618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00217E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217E4C: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00217E50: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x00217E54: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00217E58: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00217E5C: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x00217E60: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00217E64: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00217E68: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x00217E6C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x00217E70: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00217E74: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00217E78: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00217E7C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00217E80: beq         $a0, $zero, L_00217E98
    if (ctx->r4 == 0) {
        // 0x00217E84: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00217E98;
    }
    // 0x00217E84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00217E88: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x00217E8C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00217E90: sllv        $a2, $a2, $v0
    ctx->r6 = S32(ctx->r6 << (ctx->r2 & 31));
    // 0x00217E94: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
L_00217E98:
    // 0x00217E98: sltiu       $v0, $a1, 0x20
    ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x00217E9C: beq         $v0, $zero, L_00217EB0
    if (ctx->r2 == 0) {
        // 0x00217EA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00217EB0;
    }
    // 0x00217EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217EA4: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217EA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217EAC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_00217EB0:
    // 0x00217EB0: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00217EB4: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00217EB8: bgezl       $v1, L_00217ED0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00217EBC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00217ED0;
    }
    goto skip_0;
    // 0x00217EBC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00217EC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217EC4: ldc1        $f0, 0x59D0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59D0);
    // 0x00217EC8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00217ECC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00217ED0:
    // 0x00217ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217ED4: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217ED8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217EDC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00217EE0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00217EE4: lwc1        $f2, 0xC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC);
    // 0x00217EE8: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217EEC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00217EF0: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x00217EF4: jr          $ra
    // 0x00217EF8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    return;
    // 0x00217EF8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
;}
RECOMP_FUNC void func_004079BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004079BC: jr          $ra
    // 0x004079C0: nop

    return;
    // 0x004079C0: nop

;}
RECOMP_FUNC void func_00450C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417C84:
    // 0x00450C0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00450C10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450C14: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00450C18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00450C1C: addiu       $v0, $v0, -0x5468
    ctx->r2 = ADD32(ctx->r2, -0X5468);
    // 0x00450C20: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00450C24: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00450C28: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00450C2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00450C30:
    // 0x00450C30: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x00450C34: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00450C38: bgez        $s0, L_00450C30
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00450C3C: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00450C30;
    }
    // 0x00450C3C: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00450C40: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00450C44: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00450C48: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00450C4C: addiu       $s1, $s1, -0x54A8
    ctx->r17 = ADD32(ctx->r17, -0X54A8);
    // 0x00450C50: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00450C54: addiu       $s2, $s2, 0x5EC0
    ctx->r18 = ADD32(ctx->r18, 0X5EC0);
L_00450C58:
    // 0x00450C58: jal         0x002855E8
    // 0x00450C5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00450C5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00450C60: beql        $v0, $zero, L_00450C74
    if (ctx->r2 == 0) {
        // 0x00450C64: addiu       $s1, $s1, 0x40
        ctx->r17 = ADD32(ctx->r17, 0X40);
            goto L_00450C74;
    }
    goto skip_0;
    // 0x00450C64: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    skip_0:
    // 0x00450C68: sb          $s3, 0x28($s1)
    MEM_B(0X28, ctx->r17) = ctx->r19;
    // 0x00450C6C: j           L_00417C84
    // 0x00450C70: sb          $s0, 0x2F($s1)
    MEM_B(0X2F, ctx->r17) = ctx->r16;
    entry_00417C84(rdram, ctx);
    return;
    // 0x00450C70: sb          $s0, 0x2F($s1)
    MEM_B(0X2F, ctx->r17) = ctx->r16;
L_00450C74:
    // 0x00450C74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00450C78: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00450C7C: bne         $v0, $zero, L_00450C58
    if (ctx->r2 != 0) {
        // 0x00450C80: addiu       $s2, $s2, 0x224
        ctx->r18 = ADD32(ctx->r18, 0X224);
            goto L_00450C58;
    }
    // 0x00450C80: addiu       $s2, $s2, 0x224
    ctx->r18 = ADD32(ctx->r18, 0X224);
    // 0x00450C84: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00450C88: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00450C8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00450C90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00450C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450C98: jr          $ra
    // 0x00450C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00450C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00265EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265EC8: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x00265ECC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00265ED0: jr          $ra
    // 0x00265ED4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    return;
    // 0x00265ED4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
;}
RECOMP_FUNC void func_0045156C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045156C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451570: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00451574: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045157C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451580: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451584: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451588: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0045158C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451590: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451594: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451598: lb          $v0, 0x27($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X27);
    // 0x0045159C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004515A0: jal         0x0041648C
    // 0x004515A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004515A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004515A8: sb          $v0, 0x27($s0)
    MEM_B(0X27, ctx->r16) = ctx->r2;
    // 0x004515AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004515B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004515B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004515B8: jr          $ra
    // 0x004515BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004515BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00289910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289910: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00289914: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00289918: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0028991C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289920: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289924: sw          $zero, -0x530C($at)
    MEM_W(-0X530C, ctx->r1) = 0;
    // 0x00289928: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028992C: sw          $zero, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = 0;
    // 0x00289930: jal         0x002886AC
    // 0x00289934: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_002886AC(rdram, ctx);
        goto after_0;
    // 0x00289934: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289938: jal         0x0042F590
    // 0x0028993C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_0042F590(rdram, ctx);
        goto after_1;
    // 0x0028993C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_1:
    // 0x00289940: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289944: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00289948: lw          $v0, 0x3FD4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD4);
    // 0x0028994C: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x00289950: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00289954: bne         $v0, $zero, L_00289970
    if (ctx->r2 != 0) {
        // 0x00289958: nop
    
            goto L_00289970;
    }
    // 0x00289958: nop

    // 0x0028995C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289960: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00289964: lw          $v0, 0x3FFC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FFC);
    // 0x00289968: beq         $v0, $zero, L_002899A8
    if (ctx->r2 == 0) {
        // 0x0028996C: nop
    
            goto L_002899A8;
    }
    // 0x0028996C: nop

L_00289970:
    // 0x00289970: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289974: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00289978: lw          $v0, 0x3FFC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FFC);
    // 0x0028997C: beq         $v0, $zero, L_00289998
    if (ctx->r2 == 0) {
        // 0x00289980: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00289998;
    }
    // 0x00289980: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00289984: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289988: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x0028998C: sw          $zero, 0x3FFC($at)
    MEM_W(0X3FFC, ctx->r1) = 0;
    // 0x00289990: j           L_002899A8
    // 0x00289994: nop

        goto L_002899A8;
    // 0x00289994: nop

L_00289998:
    // 0x00289998: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x0028999C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002899A0: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x002899A4: sw          $v0, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r2;
L_002899A8:
    // 0x002899A8: jal         0x0028D0E0
    // 0x002899AC: nop

    func_0028D0E0(rdram, ctx);
        goto after_2;
    // 0x002899AC: nop

    after_2:
    // 0x002899B0: beq         $v0, $zero, L_002899D0
    if (ctx->r2 == 0) {
        // 0x002899B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002899D0;
    }
    // 0x002899B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002899B8: jal         0x0028D0D0
    // 0x002899BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0028D0D0(rdram, ctx);
        goto after_3;
    // 0x002899BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_3:
    // 0x002899C0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002899C4: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x002899C8: sw          $v0, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r2;
    // 0x002899CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002899D0:
    // 0x002899D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002899D4: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x002899D8: lbu         $a1, 0x3E42($at)
    ctx->r5 = MEM_BU(ctx->r1, 0X3E42);
    // 0x002899DC: jal         0x002888BC
    // 0x002899E0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002888BC(rdram, ctx);
        goto after_4;
    // 0x002899E0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002899E4: jal         0x0028D0E0
    // 0x002899E8: nop

    func_0028D0E0(rdram, ctx);
        goto after_5;
    // 0x002899E8: nop

    after_5:
    // 0x002899EC: beq         $v0, $zero, L_002899FC
    if (ctx->r2 == 0) {
        // 0x002899F0: nop
    
            goto L_002899FC;
    }
    // 0x002899F0: nop

    // 0x002899F4: jal         0x0028D100
    // 0x002899F8: nop

    func_0028D100(rdram, ctx);
        goto after_6;
    // 0x002899F8: nop

    after_6:
L_002899FC:
    // 0x002899FC: jal         0x00241860
    // 0x00289A00: nop

    entry_00241860(rdram, ctx);
        goto after_7;
    // 0x00289A00: nop

    after_7:
    // 0x00289A04: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00289A08: ori         $a0, $a0, 0x3DF0
    ctx->r4 = ctx->r4 | 0X3DF0;
    // 0x00289A0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289A10: lwc1        $f0, -0x61E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61E8);
    // 0x00289A14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289A18: swc1        $f0, 0x6D34($at)
    MEM_W(0X6D34, ctx->r1) = ctx->f0.u32l;
    // 0x00289A1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289A20: swc1        $f0, 0x6D2C($at)
    MEM_W(0X6D2C, ctx->r1) = ctx->f0.u32l;
    // 0x00289A24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289A28: swc1        $f0, 0x6D30($at)
    MEM_W(0X6D30, ctx->r1) = ctx->f0.u32l;
    // 0x00289A2C: jal         0x00430500
    // 0x00289A30: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_00430500(rdram, ctx);
        goto after_8;
    // 0x00289A30: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_8:
    // 0x00289A34: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00289A38: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00289A3C: lw          $a1, 0x3C4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C4);
    // 0x00289A40: jal         0x0042C3BC
    // 0x00289A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042C3BC(rdram, ctx);
        goto after_9;
    // 0x00289A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00289A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00289A4C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289A50: addu        $at, $s1, $at
    ctx->r1 = ADD32(ctx->r17, ctx->r1);
    // 0x00289A54: lw          $a1, 0x3FF8($at)
    ctx->r5 = MEM_W(ctx->r1, 0X3FF8);
    // 0x00289A58: jal         0x0042C700
    // 0x00289A5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042C700(rdram, ctx);
        goto after_10;
    // 0x00289A5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x00289A60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00289A64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00289A68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289A6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00289A70: sw          $zero, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = 0;
    // 0x00289A74: jr          $ra
    // 0x00289A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00289A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402E44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00402E48: lw          $v0, -0xA10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA10);
    // 0x00402E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402E50: bne         $v0, $zero, L_00402E60
    if (ctx->r2 != 0) {
        // 0x00402E54: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00402E60;
    }
    // 0x00402E54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00402E58: jal         0x00243414
    // 0x00402E5C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00402E5C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
L_00402E60:
    // 0x00402E60: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00402E64: jr          $ra
    // 0x00402E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426C88: blez        $a2, L_00426CCC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00426C8C: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00426CCC;
    }
    // 0x00426C8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00426C90: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_00426C94:
    // 0x00426C94: addu        $v1, $a0, $a3
    ctx->r3 = ADD32(ctx->r4, ctx->r7);
    // 0x00426C98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00426C9C: sltiu       $v0, $v0, 0x42
    ctx->r2 = ctx->r2 < 0X42 ? 1 : 0;
    // 0x00426CA0: beql        $v0, $zero, L_00426CBC
    if (ctx->r2 == 0) {
        // 0x00426CA4: sb          $t0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r8;
            goto L_00426CBC;
    }
    goto skip_0;
    // 0x00426CA4: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    skip_0:
    // 0x00426CA8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00426CAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426CB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426CB4: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00426CB8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_00426CBC:
    // 0x00426CBC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00426CC0: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00426CC4: bne         $v0, $zero, L_00426C94
    if (ctx->r2 != 0) {
        // 0x00426CC8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00426C94;
    }
    // 0x00426CC8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00426CCC:
    // 0x00426CCC: jr          $ra
    // 0x00426CD0: nop

    return;
    // 0x00426CD0: nop

;}
RECOMP_FUNC void func_00245724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00245728: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0024572C: jal         0x00268C04
    // 0x00245730: nop

    func_00268C04(rdram, ctx);
        goto after_0;
    // 0x00245730: nop

    after_0:
    // 0x00245734: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00245738: slti        $v0, $v1, 0xD
    ctx->r2 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x0024573C: beq         $v0, $zero, L_00245788
    if (ctx->r2 == 0) {
        // 0x00245740: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_00245788;
    }
    // 0x00245740: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x00245744: beq         $v0, $zero, L_00245808
    if (ctx->r2 == 0) {
        // 0x00245748: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_00245808;
    }
    // 0x00245748: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x0024574C: beq         $v0, $zero, L_00245774
    if (ctx->r2 == 0) {
        // 0x00245750: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00245774;
    }
    // 0x00245750: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x00245754: beq         $v0, $zero, L_0024581C
    if (ctx->r2 == 0) {
        // 0x00245758: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024581C;
    }
    // 0x00245758: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024575C: blez        $v1, L_00245818
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00245760: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_00245818;
    }
    // 0x00245760: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00245764: bne         $v0, $zero, L_0024581C
    if (ctx->r2 != 0) {
        // 0x00245768: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024581C;
    }
    // 0x00245768: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024576C: j           L_0024581C
    // 0x00245770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0024581C;
    // 0x00245770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245774:
    // 0x00245774: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x00245778: bne         $v0, $zero, L_0024581C
    if (ctx->r2 != 0) {
        // 0x0024577C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024581C;
    }
    // 0x0024577C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00245780: j           L_0024581C
    // 0x00245784: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_0024581C;
    // 0x00245784: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00245788:
    // 0x00245788: slti        $v0, $v1, 0x13
    ctx->r2 = SIGNED(ctx->r3) < 0X13 ? 1 : 0;
    // 0x0024578C: beq         $v0, $zero, L_002457AC
    if (ctx->r2 == 0) {
        // 0x00245790: slti        $v0, $v1, 0x11
        ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
            goto L_002457AC;
    }
    // 0x00245790: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x00245794: beq         $v0, $zero, L_00245810
    if (ctx->r2 == 0) {
        // 0x00245798: slti        $v0, $v1, 0xF
        ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
            goto L_00245810;
    }
    // 0x00245798: slti        $v0, $v1, 0xF
    ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x0024579C: bne         $v0, $zero, L_0024581C
    if (ctx->r2 != 0) {
        // 0x002457A0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_0024581C;
    }
    // 0x002457A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x002457A4: j           L_0024581C
    // 0x002457A8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_0024581C;
    // 0x002457A8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_002457AC:
    // 0x002457AC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x002457B0: beq         $v1, $v0, L_00245800
    if (ctx->r3 == ctx->r2) {
        // 0x002457B4: slti        $v0, $v1, 0x65
        ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
            goto L_00245800;
    }
    // 0x002457B4: slti        $v0, $v1, 0x65
    ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x002457B8: beq         $v0, $zero, L_002457D0
    if (ctx->r2 == 0) {
        // 0x002457BC: slti        $v0, $v1, 0x15
        ctx->r2 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
            goto L_002457D0;
    }
    // 0x002457BC: slti        $v0, $v1, 0x15
    ctx->r2 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
    // 0x002457C0: beq         $v0, $zero, L_00245818
    if (ctx->r2 == 0) {
        // 0x002457C4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00245818;
    }
    // 0x002457C4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x002457C8: j           L_0024581C
    // 0x002457CC: nop

        goto L_0024581C;
    // 0x002457CC: nop

L_002457D0:
    // 0x002457D0: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x002457D4: beq         $v1, $v0, L_00245800
    if (ctx->r3 == ctx->r2) {
        // 0x002457D8: slt         $v0, $v1, $v0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_00245800;
    }
    // 0x002457D8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002457DC: bne         $v0, $zero, L_0024581C
    if (ctx->r2 != 0) {
        // 0x002457E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024581C;
    }
    // 0x002457E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002457E4: slti        $v0, $v1, 0x464
    ctx->r2 = SIGNED(ctx->r3) < 0X464 ? 1 : 0;
    // 0x002457E8: beq         $v0, $zero, L_00245818
    if (ctx->r2 == 0) {
        // 0x002457EC: slti        $v0, $v1, 0x460
        ctx->r2 = SIGNED(ctx->r3) < 0X460 ? 1 : 0;
            goto L_00245818;
    }
    // 0x002457EC: slti        $v0, $v1, 0x460
    ctx->r2 = SIGNED(ctx->r3) < 0X460 ? 1 : 0;
    // 0x002457F0: bne         $v0, $zero, L_0024581C
    if (ctx->r2 != 0) {
        // 0x002457F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024581C;
    }
    // 0x002457F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002457F8: j           L_0024581C
    // 0x002457FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_0024581C;
    // 0x002457FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00245800:
    // 0x00245800: j           L_0024581C
    // 0x00245804: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_0024581C;
    // 0x00245804: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00245808:
    // 0x00245808: j           L_0024581C
    // 0x0024580C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_0024581C;
    // 0x0024580C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00245810:
    // 0x00245810: j           L_0024581C
    // 0x00245814: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_0024581C;
    // 0x00245814: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_00245818:
    // 0x00245818: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0024581C:
    // 0x0024581C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00245820: jr          $ra
    // 0x00245824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00245824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00446D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446D30: jr          $ra
    // 0x00446D34: nop

    return;
    // 0x00446D34: nop

;}
RECOMP_FUNC void func_0040E090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E090: lw          $v0, 0x510($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X510);
    // 0x0040E094: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040E098: jr          $ra
    // 0x0040E09C: sw          $v0, 0x510($a1)
    MEM_W(0X510, ctx->r5) = ctx->r2;
    return;
    // 0x0040E09C: sw          $v0, 0x510($a1)
    MEM_W(0X510, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00407DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407DC0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00407DC4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00407DC8: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x00407DCC: lw          $s4, -0x690($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X690);
    // 0x00407DD0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00407DD4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00407DD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00407DDC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00407DE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00407DE4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00407DE8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00407DEC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x00407DF0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x00407DF4: addiu       $fp, $zero, 0x1D
    ctx->r30 = ADD32(0, 0X1D);
    // 0x00407DF8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00407DFC: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
    // 0x00407E00: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00407E04: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x00407E08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00407E0C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x00407E10: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x00407E14: lw          $s7, 0x14C($s4)
    ctx->r23 = MEM_W(ctx->r20, 0X14C);
L_00407E18:
    // 0x00407E18: sllv        $v0, $s6, $s0
    ctx->r2 = S32(ctx->r22 << (ctx->r16 & 31));
    // 0x00407E1C: and         $v0, $s7, $v0
    ctx->r2 = ctx->r23 & ctx->r2;
    // 0x00407E20: beql        $v0, $zero, L_00407ED0
    if (ctx->r2 == 0) {
        // 0x00407E24: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00407ED0;
    }
    goto skip_0;
    // 0x00407E24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00407E28: bnel        $s0, $s6, L_00407E48
    if (ctx->r16 != ctx->r22) {
        // 0x00407E2C: sw          $s0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r16;
            goto L_00407E48;
    }
    goto skip_1;
    // 0x00407E2C: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    skip_1:
    // 0x00407E30: lb          $v0, 0x174($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X174);
    // 0x00407E34: bnel        $v0, $fp, L_00407E48
    if (ctx->r2 != ctx->r30) {
        // 0x00407E38: sw          $s0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r16;
            goto L_00407E48;
    }
    goto skip_2;
    // 0x00407E38: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    skip_2:
    // 0x00407E3C: sw          $s5, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r21;
    // 0x00407E40: j           L_00407E4C
    // 0x00407E44: sw          $s5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r21;
        goto L_00407E4C;
    // 0x00407E44: sw          $s5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r21;
L_00407E48:
    // 0x00407E48: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
L_00407E4C:
    // 0x00407E4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00407E50: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x00407E54: jal         0x0021DC84
    // 0x00407E58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x00407E58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00407E5C: jal         0x00284188
    // 0x00407E60: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x00407E60: nop

    after_1:
    // 0x00407E64: bnel        $v0, $zero, L_00407E88
    if (ctx->r2 != 0) {
        // 0x00407E68: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00407E88;
    }
    goto skip_3;
    // 0x00407E68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_3:
    // 0x00407E6C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00407E70: addiu       $a0, $a0, -0x9D4
    ctx->r4 = ADD32(ctx->r4, -0X9D4);
    // 0x00407E74: jal         0x00236324
    // 0x00407E78: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    func_00236324(rdram, ctx);
        goto after_2;
    // 0x00407E78: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    after_2:
    // 0x00407E7C: jal         0x00235898
    // 0x00407E80: nop

    func_00235898(rdram, ctx);
        goto after_3;
    // 0x00407E80: nop

    after_3:
    // 0x00407E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00407E88:
    // 0x00407E88: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00407E8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00407E90: lb          $v0, 0x151($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X151);
    // 0x00407E94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407E98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00407E9C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00407EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00407EA4: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00407EA8: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00407EAC: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00407EB0: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00407EB4: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00407EB8: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00407EBC: jal         0x0020A33C
    // 0x00407EC0: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_4;
    // 0x00407EC0: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_4:
    // 0x00407EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00407EC8: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x00407ECC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00407ED0:
    // 0x00407ED0: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00407ED4: bne         $v0, $zero, L_00407E18
    if (ctx->r2 != 0) {
        // 0x00407ED8: addiu       $s2, $s2, 0x64
        ctx->r18 = ADD32(ctx->r18, 0X64);
            goto L_00407E18;
    }
    // 0x00407ED8: addiu       $s2, $s2, 0x64
    ctx->r18 = ADD32(ctx->r18, 0X64);
    // 0x00407EDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00407EE0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00407EE4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00407EE8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00407EEC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00407EF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00407EF4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00407EF8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00407EFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00407F00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00407F04: jr          $ra
    // 0x00407F08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00407F08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00227184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00227188: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0022718C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00227190: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00227194: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00227198: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0022719C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x002271A0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002271A4: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x002271A8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002271AC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x002271B0: sltu        $v0, $s3, $s2
    ctx->r2 = ctx->r19 < ctx->r18 ? 1 : 0;
    // 0x002271B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002271B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002271BC: beq         $v0, $zero, L_00227214
    if (ctx->r2 == 0) {
        // 0x002271C0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00227214;
    }
    // 0x002271C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002271C4: addu        $s0, $s3, $s4
    ctx->r16 = ADD32(ctx->r19, ctx->r20);
L_002271C8:
    // 0x002271C8: sltu        $v0, $s2, $s0
    ctx->r2 = ctx->r18 < ctx->r16 ? 1 : 0;
    // 0x002271CC: bne         $v0, $zero, L_002271F8
    if (ctx->r2 != 0) {
        // 0x002271D0: addu        $s1, $s3, $zero
        ctx->r17 = ADD32(ctx->r19, 0);
            goto L_002271F8;
    }
    // 0x002271D0: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x002271D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002271D8:
    // 0x002271D8: jalr        $s5
    // 0x002271DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_0;
    // 0x002271DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002271E0: bgtzl       $v0, L_002271E8
    if (SIGNED(ctx->r2) > 0) {
        // 0x002271E4: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_002271E8;
    }
    goto skip_0;
    // 0x002271E4: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    skip_0:
L_002271E8:
    // 0x002271E8: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x002271EC: sltu        $v0, $s2, $s0
    ctx->r2 = ctx->r18 < ctx->r16 ? 1 : 0;
    // 0x002271F0: beq         $v0, $zero, L_002271D8
    if (ctx->r2 == 0) {
        // 0x002271F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002271D8;
    }
    // 0x002271F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002271F8:
    // 0x002271F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002271FC: jalr        $s6
    // 0x00227200: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_1;
    // 0x00227200: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00227204: subu        $s2, $s2, $s4
    ctx->r18 = SUB32(ctx->r18, ctx->r20);
    // 0x00227208: sltu        $v0, $s3, $s2
    ctx->r2 = ctx->r19 < ctx->r18 ? 1 : 0;
    // 0x0022720C: bne         $v0, $zero, L_002271C8
    if (ctx->r2 != 0) {
        // 0x00227210: addu        $s0, $s3, $s4
        ctx->r16 = ADD32(ctx->r19, ctx->r20);
            goto L_002271C8;
    }
    // 0x00227210: addu        $s0, $s3, $s4
    ctx->r16 = ADD32(ctx->r19, ctx->r20);
L_00227214:
    // 0x00227214: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00227218: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0022721C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00227220: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00227224: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00227228: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0022722C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00227230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00227234: jr          $ra
    // 0x00227238: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00227238: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0022723C: nop

;}
RECOMP_FUNC void func_0021EBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021EBC0: lw          $a1, 0x98($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X98);
    // 0x0021EBC4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0021EBC8: addiu       $v1, $zero, -0x201
    ctx->r3 = ADD32(0, -0X201);
    // 0x0021EBCC: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x0021EBD0: sw          $zero, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = 0;
    // 0x0021EBD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021EBD8: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0021EBDC: jr          $ra
    // 0x0021EBE0: sw          $a1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r5;
    return;
    // 0x0021EBE0: sw          $a1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00261B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261B78: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00261B7C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00261B80: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00261B84: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00261B88: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00261B8C: addiu       $s1, $s1, 0x1D7C
    ctx->r17 = ADD32(ctx->r17, 0X1D7C);
    // 0x00261B90: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00261B94: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00261B98: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00261B9C: beq         $v0, $zero, L_00261BBC
    if (ctx->r2 == 0) {
        // 0x00261BA0: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00261BBC;
    }
    // 0x00261BA0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261BA4: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
    // 0x00261BA8: lw          $t1, 0xA0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA0);
    // 0x00261BAC: lw          $t2, 0xA4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA4);
    // 0x00261BB0: sw          $t0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r8;
    // 0x00261BB4: sw          $t1, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r9;
    // 0x00261BB8: sw          $t2, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r10;
L_00261BBC:
    // 0x00261BBC: lw          $a0, -0x9C($s1)
    ctx->r4 = MEM_W(ctx->r17, -0X9C);
    // 0x00261BC0: beq         $a0, $zero, L_00261C20
    if (ctx->r4 == 0) {
        // 0x00261BC4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00261C20;
    }
    // 0x00261BC4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00261BC8: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00261BCC: bne         $v1, $v0, L_00261C20
    if (ctx->r3 != ctx->r2) {
        // 0x00261BD0: nop
    
            goto L_00261C20;
    }
    // 0x00261BD0: nop

    // 0x00261BD4: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x00261BD8: bne         $a0, $v0, L_00261C20
    if (ctx->r4 != ctx->r2) {
        // 0x00261BDC: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00261C20;
    }
    // 0x00261BDC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00261BE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00261BE4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x00261BE8: lui         $a3, 0x41CC
    ctx->r7 = S32(0X41CC << 16);
    // 0x00261BEC: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00261BF0: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00261BF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00261BF8: jal         0x00245828
    // 0x00261BFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_0;
    // 0x00261BFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00261C00: lw          $a0, -0x9C($s1)
    ctx->r4 = MEM_W(ctx->r17, -0X9C);
    // 0x00261C04: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00261C08: jal         0x002465C8
    // 0x00261C0C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002465C8(rdram, ctx);
        goto after_1;
    // 0x00261C0C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00261C10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261C14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00261C18: jal         0x00243414
    // 0x00261C1C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00261C1C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
L_00261C20:
    // 0x00261C20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00261C24: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00261C28: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00261C2C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00261C30: jr          $ra
    // 0x00261C34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00261C34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00454ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041BF24:
    // 0x00454ECC: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
L_0041BF28:
    // 0x00454ED0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00454ED4: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x00454ED8: beq         $v0, $zero, L_00454EEC
    if (ctx->r2 == 0) {
        // 0x00454EDC: nop
    
            goto L_00454EEC;
    }
    // 0x00454EDC: nop

    // 0x00454EE0: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00454EE4: bnel        $v0, $zero, L_00454EEC
    if (ctx->r2 != 0) {
        // 0x00454EE8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00454EEC;
    }
    goto skip_0;
    // 0x00454EE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_00454EEC:
    // 0x00454EEC: lb          $v1, 0x2B($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X2B);
    // 0x00454EF0: beq         $v1, $zero, L_00454F08
    if (ctx->r3 == 0) {
        // 0x00454EF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00454F08;
    }
    // 0x00454EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00454EF8: beq         $v1, $v0, L_00454F18
    if (ctx->r3 == ctx->r2) {
        // 0x00454EFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00454F18;
    }
    // 0x00454EFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454F00: j           L_0041BF28
    // 0x00454F04: nop

    entry_0041BF28(rdram, ctx);
    return;
    // 0x00454F04: nop

L_00454F08:
    // 0x00454F08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454F0C: addiu       $v0, $v0, 0x3EB8
    ctx->r2 = ADD32(ctx->r2, 0X3EB8);
    // 0x00454F10: j           L_0041BF24
    // 0x00454F14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041BF24(rdram, ctx);
    return;
    // 0x00454F14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454F18:
    // 0x00454F18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454F1C: addiu       $v0, $v0, 0x3ED0
    ctx->r2 = ADD32(ctx->r2, 0X3ED0);
    // 0x00454F20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454F24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454F28: jr          $ra
    // 0x00454F2C: nop

    return;
    // 0x00454F2C: nop

;}
RECOMP_FUNC void func_00297260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297260: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x00297264: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00297268: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0029726C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00297270: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x00297274: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00297278: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029727C: lwc1        $f1, -0x58E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X58E8);
    // 0x00297280: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00297284: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00297288: nop

    // 0x0029728C: bc1f        L_002972A0
    if (!c1cs) {
        // 0x00297290: swc1        $f2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
            goto L_002972A0;
    }
    // 0x00297290: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x00297294: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297298: lwc1        $f0, -0x58E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X58E4);
    // 0x0029729C: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_002972A0:
    // 0x002972A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002972A4: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    // 0x002972A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002972AC: nop

    // 0x002972B0: bc1f        L_002972BC
    if (!c1cs) {
        // 0x002972B4: swc1        $f1, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_002972BC;
    }
    // 0x002972B4: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x002972B8: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
L_002972BC:
    // 0x002972BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002972C0: lwc1        $f0, -0x58E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X58E0);
    // 0x002972C4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002972C8: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x002972CC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002972D0: jr          $ra
    // 0x002972D4: nop

    return;
    // 0x002972D4: nop

;}
RECOMP_FUNC void func_0020F5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F5C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0020F5C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020F5C8: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0020F5CC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020F5D0: lwc1        $f20, 0x4($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0020F5D4: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0020F5D8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0020F5DC: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020F5E0: c.eq.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl == ctx->f21.fl;
    // 0x0020F5E4: nop

    // 0x0020F5E8: bc1tl       L_0020F66C
    if (c1cs) {
        // 0x0020F5EC: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_0020F66C;
    }
    goto skip_0;
    // 0x0020F5EC: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    skip_0:
    // 0x0020F5F0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F5F4: nop

    // 0x0020F5F8: mul.s       $f1, $f20, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0020F5FC: nop

    // 0x0020F600: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0020F604: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F608: add.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020F60C: c.eq.s      $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f12.fl == ctx->f21.fl;
    // 0x0020F610: nop

    // 0x0020F614: bc1t        L_0020F66C
    if (c1cs) {
        // 0x0020F618: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_0020F66C;
    }
    // 0x0020F618: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x0020F61C: jal         0x00298470
    // 0x0020F620: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F620: nop

    after_0:
    // 0x0020F624: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F628: lwc1        $f1, 0x55D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55D8);
    // 0x0020F62C: div.s       $f12, $f20, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0020F630: c.lt.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl < ctx->f1.fl;
    // 0x0020F634: nop

    // 0x0020F638: bc1t        L_0020F66C
    if (c1cs) {
        // 0x0020F63C: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_0020F66C;
    }
    // 0x0020F63C: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x0020F640: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F644: lwc1        $f0, 0x55DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X55DC);
    // 0x0020F648: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x0020F64C: nop

    // 0x0020F650: bc1t        L_0020F66C
    if (c1cs) {
        // 0x0020F654: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_0020F66C;
    }
    // 0x0020F654: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x0020F658: jal         0x0021153C
    // 0x0020F65C: nop

    func_0021153C(rdram, ctx);
        goto after_1;
    // 0x0020F65C: nop

    after_1:
    // 0x0020F660: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F664: lwc1        $f1, 0x55E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55E0);
    // 0x0020F668: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0020F66C:
    // 0x0020F66C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020F670: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0020F674: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020F678: jr          $ra
    // 0x0020F67C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0020F67C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
