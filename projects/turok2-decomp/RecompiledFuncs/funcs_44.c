#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002810EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002810EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002810F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002810F4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002810F8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002810FC: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00281100: addiu       $a0, $a0, 0x1CC
    ctx->r4 = ADD32(ctx->r4, 0X1CC);
    // 0x00281104: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00281108: jal         0x0020F9D4
    // 0x0028110C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020F9D4(rdram, ctx);
        goto after_0;
    // 0x0028110C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00281110: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00281114: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00281118: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0028111C: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00281120: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00281124: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00281128: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0028112C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00281130: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00281134: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00281138: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x0028113C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00281140: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x00281144: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00281148: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x0028114C: srl         $a0, $v0, 31
    ctx->r4 = S32(U32(ctx->r2) >> 31);
    // 0x00281150: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00281154: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00281158: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0028115C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00281160: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00281164: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00281168: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0028116C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x00281170: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00281174: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00281178: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0028117C: swc1        $f1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281180: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00281184: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00281188: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028118C: jr          $ra
    // 0x00281190: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00281190: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00258D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258D8C: jr          $ra
    // 0x00258D90: addiu       $v0, $zero, 0x4EF2
    ctx->r2 = ADD32(0, 0X4EF2);
    return;
    // 0x00258D90: addiu       $v0, $zero, 0x4EF2
    ctx->r2 = ADD32(0, 0X4EF2);
;}
RECOMP_FUNC void func_004445D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004445D4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004445D8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004445DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004445E0: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004445E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004445E8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004445EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004445F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004445F4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x004445F8: jal         0x00246108
    // 0x004445FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004445FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444604: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444608: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0044460C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444610: jal         0x00245BAC
    // 0x00444614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444618: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0044461C: beq         $v0, $zero, L_00444630
    if (ctx->r2 == 0) {
        // 0x00444620: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444630;
    }
    // 0x00444620: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444624: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444628: jal         0x00243414
    // 0x0044462C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0044462C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_00444630:
    // 0x00444630: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444634: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444638: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0044463C: jr          $ra
    // 0x00444640: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444640: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002327F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002327F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002327F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002327FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00232800: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00232804: addiu       $a0, $a0, -0x6720
    ctx->r4 = ADD32(ctx->r4, -0X6720);
    // 0x00232808: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0023280C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00232810: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00232814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00232818: bnel        $v1, $v0, L_00232864
    if (ctx->r3 != ctx->r2) {
        // 0x0023281C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00232864;
    }
    goto skip_0;
    // 0x0023281C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00232820: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00232824: lw          $s1, -0x10($a0)
    ctx->r17 = MEM_W(ctx->r4, -0X10);
    // 0x00232828: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0023282C: jal         0x0020F85C
    // 0x00232830: addiu       $a0, $s1, 0x20C
    ctx->r4 = ADD32(ctx->r17, 0X20C);
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x00232830: addiu       $a0, $s1, 0x20C
    ctx->r4 = ADD32(ctx->r17, 0X20C);
    after_0:
    // 0x00232834: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00232838: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023283C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00232840: nop

    // 0x00232844: bc1tl       L_0023284C
    if (c1cs) {
        // 0x00232848: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_0023284C;
    }
    goto skip_1;
    // 0x00232848: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_1:
L_0023284C:
    // 0x0023284C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00232850: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00232854: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00232858: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0023285C: j           L_00232874
    // 0x00232860: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
        goto L_00232874;
    // 0x00232860: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00232864:
    // 0x00232864: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00232868: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023286C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00232870: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00232874:
    // 0x00232874: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00232878: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x0023287C: jal         0x0022D2FC
    // 0x00232880: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0022D2FC(rdram, ctx);
        goto after_1;
    // 0x00232880: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_1:
    // 0x00232884: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00232888: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0023288C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00232890: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x00232894: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00232898: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023289C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002328A0: jr          $ra
    // 0x002328A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002328A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0023417C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023417C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00234180: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x00234184: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00234188: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0023418C: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00234190: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00234194: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00234198: lw          $s1, 0x40($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X40);
    // 0x0023419C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002341A0: beq         $s1, $zero, L_00234318
    if (ctx->r17 == 0) {
        // 0x002341A4: sw          $zero, 0x4C($s3)
        MEM_W(0X4C, ctx->r19) = 0;
            goto L_00234318;
    }
    // 0x002341A4: sw          $zero, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = 0;
L_002341A8:
    // 0x002341A8: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x002341AC: beq         $s0, $zero, L_002342C0
    if (ctx->r16 == 0) {
        // 0x002341B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002342C0;
    }
    // 0x002341B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002341B4: bne         $s0, $v0, L_00234218
    if (ctx->r16 != ctx->r2) {
        // 0x002341B8: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00234218;
    }
    // 0x002341B8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002341BC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002341C0: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x002341C4: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x002341C8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002341CC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x002341D0: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x002341D4: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x002341D8: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x002341DC: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x002341E0: addiu       $v1, $v1, 0x68
    ctx->r3 = ADD32(ctx->r3, 0X68);
L_002341E4:
    // 0x002341E4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x002341E8: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x002341EC: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x002341F0: lw          $t3, 0xC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC);
    // 0x002341F4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x002341F8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x002341FC: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x00234200: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x00234204: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00234208: bne         $a0, $v1, L_002341E4
    if (ctx->r4 != ctx->r3) {
        // 0x0023420C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_002341E4;
    }
    // 0x0023420C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00234210: j           L_002342B0
    // 0x00234214: sw          $zero, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = 0;
        goto L_002342B0;
    // 0x00234214: sw          $zero, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = 0;
L_00234218:
    // 0x00234218: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023421C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00234220: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00234224: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x00234228: jal         0x0020D908
    // 0x0023422C: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x0023422C: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_0:
    // 0x00234230: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00234234: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00234238: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023423C: lwc1        $f0, 0x6470($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6470);
    // 0x00234240: beq         $v0, $zero, L_00234250
    if (ctx->r2 == 0) {
        // 0x00234244: nop
    
            goto L_00234250;
    }
    // 0x00234244: nop

    // 0x00234248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023424C: lwc1        $f0, 0x6474($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6474);
L_00234250:
    // 0x00234250: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00234254: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00234258: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0023425C: jal         0x0021034C
    // 0x00234260: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_1;
    // 0x00234260: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00234264: jal         0x0020F7EC
    // 0x00234268: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x00234268: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023426C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00234270: jal         0x002101A0
    // 0x00234274: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    func_002101A0(rdram, ctx);
        goto after_3;
    // 0x00234274: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    after_3:
    // 0x00234278: lw          $v0, 0x3C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X3C);
    // 0x0023427C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00234280: beq         $v0, $zero, L_00234298
    if (ctx->r2 == 0) {
        // 0x00234284: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00234298;
    }
    // 0x00234284: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00234288: jal         0x002101BC
    // 0x0023428C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    func_002101BC(rdram, ctx);
        goto after_4;
    // 0x0023428C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    after_4:
    // 0x00234290: j           L_002342B0
    // 0x00234294: nop

        goto L_002342B0;
    // 0x00234294: nop

L_00234298:
    // 0x00234298: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023429C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x002342A0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x002342A4: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x002342A8: jal         0x0020D274
    // 0x002342AC: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_5;
    // 0x002342AC: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_5:
L_002342B0:
    // 0x002342B0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x002342B4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002342B8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002342BC: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_002342C0:
    // 0x002342C0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x002342C4: beq         $s0, $zero, L_0023430C
    if (ctx->r16 == 0) {
        // 0x002342C8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0023430C;
    }
    // 0x002342C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002342CC: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x002342D0: jal         0x0020EF2C
    // 0x002342D4: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x002342D4: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    after_6:
    // 0x002342D8: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x002342DC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002342E0: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x002342E4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002342E8: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002342EC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x002342F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002342F4: jal         0x00298470
    // 0x002342F8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_7;
    // 0x002342F8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_7:
    // 0x002342FC: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x00234300: lwc1        $f1, 0x4C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4C);
    // 0x00234304: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00234308: swc1        $f1, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_0023430C:
    // 0x0023430C: lw          $s1, 0x4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4);
    // 0x00234310: bne         $s1, $zero, L_002341A8
    if (ctx->r17 != 0) {
        // 0x00234314: nop
    
            goto L_002341A8;
    }
    // 0x00234314: nop

L_00234318:
    // 0x00234318: beq         $s2, $zero, L_0023432C
    if (ctx->r18 == 0) {
        // 0x0023431C: nop
    
            goto L_0023432C;
    }
    // 0x0023431C: nop

    // 0x00234320: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00234324: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00234328: swc1        $f0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->f0.u32l;
L_0023432C:
    // 0x0023432C: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x00234330: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00234334: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00234338: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0023433C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00234340: jr          $ra
    // 0x00234344: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00234344: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00408EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408EAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00408EB0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00408EB4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00408EB8: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x00408EBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00408EC0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00408EC4: nop

    // 0x00408EC8: bc1f        L_00408F3C
    if (!c1cs) {
        // 0x00408ECC: nop
    
            goto L_00408F3C;
    }
    // 0x00408ECC: nop

    // 0x00408ED0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00408ED4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00408ED8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00408EDC: j           L_00408FA0
    // 0x00408EE0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
        goto L_00408FA0;
    // 0x00408EE0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
L_00408EE4:
    // 0x00408EE4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00408EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408EEC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00408EF0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00408EF4: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00408EF8: jal         0x00246690
    // 0x00408EFC: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_0;
    // 0x00408EFC: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_0:
    // 0x00408F00: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00408F04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00408F08: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x00408F0C: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x00408F10: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00408F14: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00408F18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00408F1C: jal         0x00245828
    // 0x00408F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_1;
    // 0x00408F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x00408F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408F28: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00408F2C: jal         0x0025B2D4
    // 0x00408F30: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_2;
    // 0x00408F30: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00408F34: j           L_00408FA0
    // 0x00408F38: nop

        goto L_00408FA0;
    // 0x00408F38: nop

L_00408F3C:
    // 0x00408F3C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408F40: lwc1        $f12, 0x5B4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5B4);
    // 0x00408F44: jal         0x0021149C
    // 0x00408F48: nop

    func_0021149C(rdram, ctx);
        goto after_3;
    // 0x00408F48: nop

    after_3:
    // 0x00408F4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408F50: lwc1        $f1, 0x5B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B8);
    // 0x00408F54: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00408F58: nop

    // 0x00408F5C: bc1t        L_00408FA0
    if (c1cs) {
        // 0x00408F60: nop
    
            goto L_00408FA0;
    }
    // 0x00408F60: nop

    // 0x00408F64: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00408F68: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00408F6C: beq         $s0, $zero, L_00408FA0
    if (ctx->r16 == 0) {
        // 0x00408F70: nop
    
            goto L_00408FA0;
    }
    // 0x00408F70: nop

    // 0x00408F74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00408F78:
    // 0x00408F78: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00408F7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408F80: bne         $v0, $v1, L_00408F94
    if (ctx->r2 != ctx->r3) {
        // 0x00408F84: nop
    
            goto L_00408F94;
    }
    // 0x00408F84: nop

    // 0x00408F88: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00408F8C: bnel        $v0, $zero, L_00408EE4
    if (ctx->r2 != 0) {
        // 0x00408F90: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_00408EE4;
    }
    goto skip_0;
    // 0x00408F90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    skip_0:
L_00408F94:
    // 0x00408F94: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x00408F98: bne         $s0, $zero, L_00408F78
    if (ctx->r16 != 0) {
        // 0x00408F9C: nop
    
            goto L_00408F78;
    }
    // 0x00408F9C: nop

L_00408FA0:
    // 0x00408FA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00408FA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00408FA8: jr          $ra
    // 0x00408FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00408FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002949A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002949A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002949A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002949AC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x002949B0: lw          $s1, 0x7760($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X7760);
    // 0x002949B4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x002949B8: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x002949BC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x002949C0: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x002949C4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002949C8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x002949CC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002949D0: addu        $s4, $s7, $zero
    ctx->r20 = ADD32(ctx->r23, 0);
    // 0x002949D4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002949D8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x002949DC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x002949E0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002949E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002949E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002949EC: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x002949F0: bne         $v0, $zero, L_00294A00
    if (ctx->r2 != 0) {
        // 0x002949F4: sh          $zero, 0x1C($sp)
        MEM_H(0X1C, ctx->r29) = 0;
            goto L_00294A00;
    }
    // 0x002949F4: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x002949F8: j           L_00294B24
    // 0x002949FC: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
        goto L_00294B24;
    // 0x002949FC: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
L_00294A00:
    // 0x00294A00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00294A04: jal         0x00294C70
    // 0x00294A08: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00294C70(rdram, ctx);
        goto after_0;
    // 0x00294A08: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00294A0C: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00294A10: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00294A14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00294A18: slt         $v0, $v0, $s3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00294A1C: beq         $v0, $zero, L_00294A84
    if (ctx->r2 == 0) {
        // 0x00294A20: nop
    
            goto L_00294A84;
    }
    // 0x00294A20: nop

    // 0x00294A24: addiu       $s0, $zero, -0x10
    ctx->r16 = ADD32(0, -0X10);
L_00294A28:
    // 0x00294A28: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00294A2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00294A30: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x00294A34: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00294A38: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
        turok2_patch_fix_jalr(rdram, ctx);

    // 0x00294A3C: jalr        $v0
    // 0x00294A40: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00294A40: nop

    after_1:
        turok2_patch_jalr_done(rdram, ctx);

    // 0x00294A44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00294A48: jal         0x00294D18
    // 0x00294A4C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00294D18(rdram, ctx);
        goto after_2;
    // 0x00294A4C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00294A50: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00294A54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00294A58: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x00294A5C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00294A60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00294A64: jal         0x00294C70
    // 0x00294A68: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
    func_00294C70(rdram, ctx);
        goto after_3;
    // 0x00294A68: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
    after_3:
    // 0x00294A6C: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00294A70: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00294A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00294A78: slt         $v0, $v0, $s3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00294A7C: bne         $v0, $zero, L_00294A28
    if (ctx->r2 != 0) {
        // 0x00294A80: nop
    
            goto L_00294A28;
    }
    // 0x00294A80: nop

L_00294A84:
    // 0x00294A84: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00294A88: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
    // 0x00294A8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00294A90: blez        $s3, L_00294B10
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00294A94: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_00294B10;
    }
    // 0x00294A94: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00294A98: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_00294A9C:
    // 0x00294A9C: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x00294AA0: slt         $v0, $v1, $s3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00294AA4: beq         $v0, $zero, L_00294AB0
    if (ctx->r2 == 0) {
        // 0x00294AA8: addu        $s2, $s3, $zero
        ctx->r18 = ADD32(ctx->r19, 0);
            goto L_00294AB0;
    }
    // 0x00294AA8: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x00294AAC: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
L_00294AB0:
    // 0x00294AB0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x00294AB4: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x00294AB8: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x00294ABC: lw          $s0, 0x38($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X38);
        turok2_patch_audio_frame(rdram, ctx);

    // 0x00294AC0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00294AC4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
        turok2_patch_fix_jalr(rdram, ctx);

    // 0x00294AC8: jalr        $v0
    // 0x00294ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x00294ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
        turok2_patch_jalr_done(rdram, ctx);

    // 0x00294AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294AD4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x00294AD8: addiu       $v0, $s4, 0x8
    ctx->r2 = ADD32(ctx->r20, 0X8);
    // 0x00294ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00294AE0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00294AE4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00294AE8: jalr        $v0
    // 0x00294AEC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_5;
    // 0x00294AEC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00294AF0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00294AF4: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x00294AF8: sll         $v1, $s2, 2
    ctx->r3 = S32(ctx->r18 << 2);
    // 0x00294AFC: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00294B00: addu        $s5, $s5, $v1
    ctx->r21 = ADD32(ctx->r21, ctx->r3);
    // 0x00294B04: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00294B08: bgtz        $s3, L_00294A9C
    if (SIGNED(ctx->r19) > 0) {
        // 0x00294B0C: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_00294A9C;
    }
    // 0x00294B0C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_00294B10:
    // 0x00294B10: subu        $v0, $s4, $s7
    ctx->r2 = SUB32(ctx->r20, ctx->r23);
    // 0x00294B14: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00294B18: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x00294B1C: jal         0x00294BDC
    // 0x00294B20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00294BDC(rdram, ctx);
        goto after_6;
    // 0x00294B20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_00294B24:
    // 0x00294B24: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x00294B28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00294B2C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00294B30: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00294B34: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00294B38: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00294B3C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00294B40: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00294B44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00294B48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00294B4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00294B50: jr          $ra
    // 0x00294B54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00294B54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0045C284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C284: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045C288: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045C28C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0045C290: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045C294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C298: lw          $s0, 0x1C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C);
    // 0x0045C29C: jal         0x00284174
    // 0x0045C2A0: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0045C2A0: nop

    after_0:
    // 0x0045C2A4: beq         $v0, $zero, L_0045C2C0
    if (ctx->r2 == 0) {
        // 0x0045C2A8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0045C2C0;
    }
    // 0x0045C2A8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0045C2AC: jal         0x00284240
    // 0x0045C2B0: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x0045C2B0: nop

    after_1:
    // 0x0045C2B4: beq         $v0, $zero, L_0045C2C0
    if (ctx->r2 == 0) {
        // 0x0045C2B8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0045C2C0;
    }
    // 0x0045C2B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045C2BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0045C2C0:
    // 0x0045C2C0: bne         $v1, $zero, L_0045C2F4
    if (ctx->r3 != 0) {
        // 0x0045C2C4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045C2F4;
    }
    // 0x0045C2C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045C2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C2CC: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x0045C2D0: jal         0x002484F8
    // 0x0045C2D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002484F8(rdram, ctx);
        goto after_2;
    // 0x0045C2D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0045C2D8: beq         $v0, $zero, L_0045C2F0
    if (ctx->r2 == 0) {
        // 0x0045C2DC: sh          $zero, 0x0($s1)
        MEM_H(0X0, ctx->r17) = 0;
            goto L_0045C2F0;
    }
    // 0x0045C2DC: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x0045C2E0: jal         0x00412B14
    // 0x0045C2E4: nop

    func_00412B14(rdram, ctx);
        goto after_3;
    // 0x0045C2E4: nop

    after_3:
    // 0x0045C2E8: jal         0x00412438
    // 0x0045C2EC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    func_00412438(rdram, ctx);
        goto after_4;
    // 0x0045C2EC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_4:
L_0045C2F0:
    // 0x0045C2F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045C2F4:
    // 0x0045C2F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045C2F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045C2FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C300: jr          $ra
    // 0x0045C304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045C304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00412B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412B14: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00412B18: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00412B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00412B20: jr          $ra
    // 0x00412B24: sw          $v0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r2;
    return;
    // 0x00412B24: sw          $v0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_0041B470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B470: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B474: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B478: xori        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 ^ 0X20;
    // 0x0041B47C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B480: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B484: jr          $ra
    // 0x0041B488: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B488: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00217AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217AD8: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217ADC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217AE0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217AE4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217AE8: jr          $ra
    // 0x00217AEC: div.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    return;
    // 0x00217AEC: div.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
;}
RECOMP_FUNC void func_0025A120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A124: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A128: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A12C: lhu         $a3, 0x7A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7A);
    // 0x0025A130: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A134: addiu       $a2, $a2, -0x580
    ctx->r6 = ADD32(ctx->r6, -0X580);
    // 0x0025A138: jal         0x00245A98
    // 0x0025A13C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A13C: nop

    after_0:
    // 0x0025A140: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A144: jr          $ra
    // 0x0025A148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00235FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235FBC: jr          $ra
    // 0x00235FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00235FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0029A6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A6DC: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
;}
RECOMP_FUNC void func_00268438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268438: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x0026843C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00268440: beq         $v0, $zero, L_00268454
    if (ctx->r2 == 0) {
            // 0x00268444: nop

    func_00268454(rdram, ctx);
    return;
    }
    // 0x00268444: nop

    // 0x00268448: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026844C: jr          $ra
    // 0x00268450: nop

    return;
    // 0x00268450: nop

;}
RECOMP_FUNC void func_00274A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274A98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00274A9C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00274AA0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00274AA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274AA8: sll         $s0, $a1, 1
    ctx->r16 = S32(ctx->r5 << 1);
    // 0x00274AAC: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    // 0x00274AB0: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00274AB4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00274AB8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00274ABC: addu        $s0, $s0, $a0
    ctx->r16 = ADD32(ctx->r16, ctx->r4);
    // 0x00274AC0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00274AC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00274AC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00274ACC: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00274AD0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00274AD4: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x00274AD8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00274ADC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00274AE0: lh          $a1, 0x60($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X60);
    // 0x00274AE4: jal         0x00293530
    // 0x00274AE8: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_00293530(rdram, ctx);
        goto after_0;
    // 0x00274AE8: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_0:
    // 0x00274AEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00274AF0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00274AF4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x00274AF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274AFC: sh          $v0, 0x60($s1)
    MEM_H(0X60, ctx->r17) = ctx->r2;
    // 0x00274B00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274B04: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x00274B08: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00274B0C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00274B10: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
    // 0x00274B14: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x00274B18: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x00274B1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00274B20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00274B24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274B28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00274B2C: jr          $ra
    // 0x00274B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00274B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004457B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004457B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004457B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004457BC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x004457C0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x004457C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004457C8: jal         0x00243414
    // 0x004457CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004457CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x004457D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004457D4: jr          $ra
    // 0x004457D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004457D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00235FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00235FF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00235FFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236000: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00236004: lw          $s0, 0x6A88($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X6A88);
        turok2_patch_scale_swoosh_edge(rdram, ctx);

    // 0x00236008: beq         $s0, $zero, L_00236028
    if (ctx->r16 == 0) {
        // 0x0023600C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00236028;
    }
    // 0x0023600C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00236010: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x00236014: jal         0x0026D2D0
    // 0x00236018: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026D2D0(rdram, ctx);
        goto after_0;
    // 0x00236018: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0023601C: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x00236020: jal         0x0026D288
    // 0x00236024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026D288(rdram, ctx);
        goto after_1;
    // 0x00236024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00236028:
    // 0x00236028: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0023602C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00236030: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00236034: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00236038: jr          $ra
    // 0x0023603C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0023603C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004550B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004550B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004550BC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004550C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004550C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004550C8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x004550CC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004550D0: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x004550D4: beql        $v0, $zero, L_004550EC
    if (ctx->r2 == 0) {
        // 0x004550D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004550EC;
    }
    goto skip_0;
    // 0x004550D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x004550DC: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x004550E0: bnel        $v0, $zero, L_004550E8
    if (ctx->r2 != 0) {
        // 0x004550E4: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_004550E8;
    }
    goto skip_1;
    // 0x004550E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_004550E8:
    // 0x004550E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004550EC:
    // 0x004550EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004550F0: lbu         $a1, 0x2E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E);
    // 0x004550F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004550F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004550FC: jal         0x0041648C
    // 0x00455100: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00455100: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00455104: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x00455108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045510C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00455110: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455114: jr          $ra
    // 0x00455118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020656C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020656C: beq         $a1, $zero, L_00206578
    if (ctx->r5 == 0) {
        // 0x00206570: addiu       $t0, $zero, -0x201
        ctx->r8 = ADD32(0, -0X201);
            goto L_00206578;
    }
    // 0x00206570: addiu       $t0, $zero, -0x201
    ctx->r8 = ADD32(0, -0X201);
    // 0x00206574: addiu       $t0, $zero, -0x401
    ctx->r8 = ADD32(0, -0X401);
L_00206578:
    // 0x00206578: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0020657C: lw          $a3, -0x4F40($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4F40);
    // 0x00206580: beq         $a3, $zero, L_002065B4
    if (ctx->r7 == 0) {
        // 0x00206584: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002065B4;
    }
    // 0x00206584: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206588: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_0020658C:
    // 0x0020658C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206590: lw          $v0, -0x7E30($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E30);
    // 0x00206594: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00206598: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0020659C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x002065A0: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x002065A4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x002065A8: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x002065AC: bne         $v0, $zero, L_0020658C
    if (ctx->r2 != 0) {
        // 0x002065B0: addiu       $a2, $a2, 0x28
        ctx->r6 = ADD32(ctx->r6, 0X28);
            goto L_0020658C;
    }
    // 0x002065B0: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
L_002065B4:
    // 0x002065B4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x002065B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002065BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002065C0: sw          $zero, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = 0;
    // 0x002065C4: jr          $ra
    // 0x002065C8: nop

    return;
    // 0x002065C8: nop

;}
RECOMP_FUNC void func_00451F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418FF4:
    // 0x00451F84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451F88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00451F8C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00451F90: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00451F94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00451F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00451F9C: lb          $v0, 0x2B($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2B);
    // 0x00451FA0: beq         $v0, $zero, L_00451FD4
    if (ctx->r2 == 0) {
        // 0x00451FA4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00451FD4;
    }
    // 0x00451FA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00451FA8: jal         0x004160F0
    // 0x00451FAC: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451FAC: nop

    after_0:
    // 0x00451FB0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451FB4: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00451FB8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451FBC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451FC0: lb          $a2, 0x2B($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X2B);
    // 0x00451FC4: jal         0x0029E3E0
    // 0x00451FC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00451FC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00451FCC: j           L_00418FF4
    // 0x00451FD0: nop

    entry_00418FF4(rdram, ctx);
    return;
    // 0x00451FD0: nop

L_00451FD4:
    // 0x00451FD4: jal         0x004160F0
    // 0x00451FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00451FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00451FDC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451FE0: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00451FE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451FE8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451FEC: jal         0x0029E3E0
    // 0x00451FF0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00451FF0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x00451FF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00451FF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00451FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00452000: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452004: jr          $ra
    // 0x00452008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00294C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294C30: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00294C34: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00294C38: lwc1        $f1, 0x44($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X44);
    // 0x00294C3C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00294C40: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00294C44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00294C48: lwc1        $f1, -0x5B38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5B38);
    // 0x00294C4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00294C50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00294C54: lwc1        $f1, -0x5B34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5B34);
    // 0x00294C58: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00294C5C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00294C60: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00294C64: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00294C68: jr          $ra
    // 0x00294C6C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    return;
    // 0x00294C6C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
;}
RECOMP_FUNC void func_004186FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004186FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418700: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00418704: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041870C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418710: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418714: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418718: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041871C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418724: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418728: lb          $v0, 0x28($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X28);
    // 0x0041872C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418730: jal         0x0041648C
    // 0x00418734: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418734: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418738: sb          $v0, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r2;
    // 0x0041873C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418740: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418744: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418748: jr          $ra
    // 0x0041874C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041874C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00281060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281060: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00281064: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00281068: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x0028106C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x00281070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00281074: sb          $a1, 0x532($a0)
    MEM_B(0X532, ctx->r4) = ctx->r5;
    // 0x00281078: sb          $a2, 0x536($a0)
    MEM_B(0X536, ctx->r4) = ctx->r6;
    // 0x0028107C: sb          $a3, 0x537($a0)
    MEM_B(0X537, ctx->r4) = ctx->r7;
    // 0x00281080: sb          $zero, 0x539($a0)
    MEM_B(0X539, ctx->r4) = 0;
    // 0x00281084: sw          $zero, 0x520($a0)
    MEM_W(0X520, ctx->r4) = 0;
    // 0x00281088: sw          $v0, 0x52C($a0)
    MEM_W(0X52C, ctx->r4) = ctx->r2;
    // 0x0028108C: sb          $v1, 0x538($a0)
    MEM_B(0X538, ctx->r4) = ctx->r3;
    // 0x00281090: sb          $t0, 0x533($a0)
    MEM_B(0X533, ctx->r4) = ctx->r8;
    // 0x00281094: sb          $t1, 0x534($a0)
    MEM_B(0X534, ctx->r4) = ctx->r9;
    // 0x00281098: jr          $ra
    // 0x0028109C: sb          $t2, 0x535($a0)
    MEM_B(0X535, ctx->r4) = ctx->r10;
    return;
    // 0x0028109C: sb          $t2, 0x535($a0)
    MEM_B(0X535, ctx->r4) = ctx->r10;
;}
RECOMP_FUNC void func_0040E72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E72C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040E730: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040E734: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040E738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040E73C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040E740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040E744: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0040E748: blez        $v0, L_0040E77C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E74C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040E77C;
    }
    // 0x0040E74C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040E750: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_0040E754:
    // 0x0040E754: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x0040E758: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0040E75C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040E760: jal         0x00243414
    // 0x0040E764: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E764: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040E768: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0040E76C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040E770: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E774: bne         $v0, $zero, L_0040E754
    if (ctx->r2 != 0) {
        // 0x0040E778: nop
    
            goto L_0040E754;
    }
    // 0x0040E778: nop

L_0040E77C:
    // 0x0040E77C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040E780: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040E784: lw          $v0, 0x4F8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4F8);
    // 0x0040E788: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E78C: lwc1        $f0, 0x934($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X934);
    // 0x0040E790: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0040E794: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040E798: addiu       $v0, $v0, 0x24C8
    ctx->r2 = ADD32(ctx->r2, 0X24C8);
    // 0x0040E79C: sw          $v0, 0x530($s2)
    MEM_W(0X530, ctx->r18) = ctx->r2;
    // 0x0040E7A0: addiu       $v0, $s2, 0x530
    ctx->r2 = ADD32(ctx->r18, 0X530);
    // 0x0040E7A4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040E7A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0040E7AC: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0040E7B0: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x0040E7B4: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x0040E7B8: jal         0x00225C84
    // 0x0040E7BC: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    func_00225C84(rdram, ctx);
        goto after_1;
    // 0x0040E7BC: swc1        $f1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0040E7C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040E7C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040E7C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040E7CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E7D0: jr          $ra
    // 0x0040E7D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040E7D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029B9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B9AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00407D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00407D70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00407D74: jal         0x00284204
    // 0x00407D78: nop

    func_00284204(rdram, ctx);
        goto after_0;
    // 0x00407D78: nop

    after_0:
    // 0x00407D7C: beq         $v0, $zero, L_00407DB4
    if (ctx->r2 == 0) {
        // 0x00407D80: nop
    
            goto L_00407DB4;
    }
    // 0x00407D80: nop

    // 0x00407D84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00407D88: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00407D8C: jal         0x002532A8
    // 0x00407D90: nop

    func_002532A8(rdram, ctx);
        goto after_1;
    // 0x00407D90: nop

    after_1:
    // 0x00407D94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00407D98: beq         $a0, $zero, L_00407DB4
    if (ctx->r4 == 0) {
        // 0x00407D9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00407DB4;
    }
    // 0x00407D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00407DA0: sw          $v0, 0x9F0($a0)
    MEM_W(0X9F0, ctx->r4) = ctx->r2;
    // 0x00407DA4: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    // 0x00407DA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00407DAC: jal         0x00248BA8
    // 0x00407DB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_2;
    // 0x00407DB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_00407DB4:
    // 0x00407DB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00407DB8: jr          $ra
    // 0x00407DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00407DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0023C8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C8A0: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x0023C8A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0023C8A8: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0023C8AC: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x0023C8B0: lw          $a3, 0x38($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X38);
    // 0x0023C8B4: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x0023C8B8: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x0023C8BC: sw          $a3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r7;
    // 0x0023C8C0: lwc1        $f1, 0x4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4);
    // 0x0023C8C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023C8C8: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0023C8CC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023C8D0: nop

    // 0x0023C8D4: bc1t        L_0023C930
    if (c1cs) {
        // 0x0023C8D8: nop
    
            goto L_0023C930;
    }
    // 0x0023C8D8: nop

    // 0x0023C8DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0023C8E0: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0023C8E4: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x0023C8E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023C8EC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0023C8F0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x0023C8F4: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0023C8F8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0023C8FC: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x0023C900: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C904: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023C908: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0023C90C: lwc1        $f1, 0x0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x0023C910: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0023C914: lwc1        $f3, 0x4($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X4);
    // 0x0023C918: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0023C91C: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0023C920: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0023C924: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C928: j           L_0023C958
    // 0x0023C92C: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
        goto L_0023C958;
    // 0x0023C92C: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
L_0023C930:
    // 0x0023C930: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0023C934: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0023C938: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C93C: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x0023C940: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C944: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0023C948: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C94C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023C950: lwc1        $f1, 0x66AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X66AC);
    // 0x0023C954: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_0023C958:
    // 0x0023C958: jr          $ra
    // 0x0023C95C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0023C95C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021F7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F7F4: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x0021F7F8: lw          $a0, 0xF0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF0);
    // 0x0021F7FC: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x0021F800: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0021F804: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0021F808: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x0021F80C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0021F810: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x0021F814: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0021F818: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0021F81C: sdc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD8, ctx->r29);
    // 0x0021F820: sdc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD0, ctx->r29);
    // 0x0021F824: beq         $s4, $zero, L_0021F94C
    if (ctx->r20 == 0) {
        // 0x0021F828: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_0021F94C;
    }
    // 0x0021F828: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0021F82C: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x0021F830: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0021F834: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x0021F838: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0021F83C: lwc1        $f0, 0x38($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X38);
    // 0x0021F840: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x0021F844: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0021F848: lw          $t0, 0x18($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X18);
    // 0x0021F84C: lw          $t1, 0x1C($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X1C);
    // 0x0021F850: lw          $t2, 0x20($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X20);
    // 0x0021F854: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0021F858: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0021F85C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0021F860: lb          $v1, 0x12($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X12);
    // 0x0021F864: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021F868: lwc1        $f0, 0x5D1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D1C);
    // 0x0021F86C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021F870: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021F874: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021F878: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021F87C: lwc1        $f21, -0x3468($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X3468);
    // 0x0021F880: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0021F884: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0021F888: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021F88C: lwc1        $f0, 0x5D20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D20);
    // 0x0021F890: beq         $a0, $v0, L_0021F8A0
    if (ctx->r4 == ctx->r2) {
        // 0x0021F894: nop
    
            goto L_0021F8A0;
    }
    // 0x0021F894: nop

    // 0x0021F898: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x0021F89C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
L_0021F8A0:
    // 0x0021F8A0: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0021F8A4: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x0021F8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021F8AC: jal         0x0020FF80
    // 0x0021F8B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020FF80(rdram, ctx);
        goto after_0;
    // 0x0021F8B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0021F8B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021F8B8: lwc1        $f20, 0x5D24($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5D24);
    // 0x0021F8BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0021F8C0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021F8C4: jal         0x0020EF60
    // 0x0021F8C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x0021F8C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x0021F8CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0021F8D0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0021F8D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0021F8D8: jal         0x00210318
    // 0x0021F8DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_2;
    // 0x0021F8DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0021F8E0: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0021F8E4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0021F8E8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0021F8EC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0021F8F0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0021F8F4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x0021F8F8: jal         0x0020FCC4
    // 0x0021F8FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020FCC4(rdram, ctx);
        goto after_3;
    // 0x0021F8FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0021F900: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021F904: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021F908: jal         0x0020C618
    // 0x0021F90C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020C618(rdram, ctx);
        goto after_4;
    // 0x0021F90C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0021F910: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0021F914: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021F918: jal         0x0020EF60
    // 0x0021F91C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0021F91C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0021F920: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0021F924: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0021F928: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0021F92C: jal         0x00210318
    // 0x0021F930: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210318(rdram, ctx);
        goto after_6;
    // 0x0021F930: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0021F934: lb          $v0, 0x14($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X14);
    // 0x0021F938: bne         $v0, $s4, L_0021F94C
    if (ctx->r2 != ctx->r20) {
        // 0x0021F93C: nop
    
            goto L_0021F94C;
    }
    // 0x0021F93C: nop

    // 0x0021F940: lbu         $v0, 0x12($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X12);
    // 0x0021F944: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_flinch_s3(rdram, ctx);

    // 0x0021F948: sb          $v0, 0x12($s3)
    MEM_B(0X12, ctx->r19) = ctx->r2;
L_0021F94C:
    // 0x0021F94C: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x0021F950: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x0021F954: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x0021F958: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x0021F95C: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0021F960: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x0021F964: ldc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD8);
    // 0x0021F968: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x0021F96C: jr          $ra
    // 0x0021F970: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x0021F970: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_00298528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298528: ori         $v0, $v0, 0x83E1
    ctx->r2 = ctx->r2 | 0X83E1;
    // 0x0029852C: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00298530: mfhi        $t0
    ctx->r8 = hi;
    // 0x00298534: srl         $a3, $t0, 4
    ctx->r7 = S32(U32(ctx->r8) >> 4);
    // 0x00298538: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x0029853C: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x00298540: beql        $v0, $zero, L_00298548
    if (ctx->r2 == 0) {
        // 0x00298544: addiu       $a3, $zero, 0x10
        ctx->r7 = ADD32(0, 0X10);
            goto L_00298548;
    }
    goto skip_0;
    // 0x00298544: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    skip_0:
L_00298548:
    // 0x00298548: lui         $v1, 0xA450
    ctx->r3 = S32(0XA450 << 16);
    // 0x0029854C: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x00298550: lui         $a0, 0xA450
    ctx->r4 = S32(0XA450 << 16);
    // 0x00298554: ori         $a0, $a0, 0x14
    ctx->r4 = ctx->r4 | 0X14;
    // 0x00298558: lui         $a1, 0xA450
    ctx->r5 = S32(0XA450 << 16);
    // 0x0029855C: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    // 0x00298560: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x00298564: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00298568: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x0029856C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00298570: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00298574: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00298578: lw          $v0, -0x7700($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7700);
    // 0x0029857C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00298580: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00298584: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x00298588: bne         $a2, $zero, L_00298594
    if (ctx->r6 != 0) {
        // 0x0029858C: nop
    
            goto L_00298594;
    }
    // 0x0029858C: nop

    // 0x00298590: break       7
    do_break(2721168);
L_00298594:
    // 0x00298594: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00298598: bne         $a2, $at, L_002985AC
    if (ctx->r6 != ctx->r1) {
        // 0x0029859C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002985AC;
    }
    // 0x0029859C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002985A0: bne         $v0, $at, L_002985AC
    if (ctx->r2 != ctx->r1) {
        // 0x002985A4: nop
    
            goto L_002985AC;
    }
    // 0x002985A4: nop

    // 0x002985A8: break       6
    do_break(2721192);
L_002985AC:
    // 0x002985AC: mflo        $v0
    ctx->r2 = lo;
    // 0x002985B0: jr          $ra
    // 0x002985B4: nop

    return;
    // 0x002985B4: nop

;}
RECOMP_FUNC void func_00426E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426E04: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426E08: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426E0C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x00426E10: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426E14: beq         $v0, $zero, L_00426E34
    if (ctx->r2 == 0) {
        // 0x00426E18: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_00426E34;
    }
    // 0x00426E18: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_00426E1C:
    // 0x00426E1C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426E20: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426E24: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00426E28: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426E2C: bne         $v0, $zero, L_00426E1C
    if (ctx->r2 != 0) {
        // 0x00426E30: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00426E1C;
    }
    // 0x00426E30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00426E34:
    // 0x00426E34: jr          $ra
    // 0x00426E38: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00426E38: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_004269CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004269CC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x004269D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004269D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004269D8: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x004269DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004269E0: bne         $v1, $v0, L_00426A18
    if (ctx->r3 != ctx->r2) {
            // 0x004269E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_00426A18(rdram, ctx);
    return;
    }
    // 0x004269E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004269E8: sll         $v1, $a0, 7
    ctx->r3 = S32(ctx->r4 << 7);
    // 0x004269EC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004269F0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004269F4: lw          $a0, 0x2224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2224);
    // 0x004269F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004269FC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00426A00: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x00426A04: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00426A08: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00426A0C: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    // 0x00426A10: jr          $ra
    // 0x00426A14: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    return;
    // 0x00426A14: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_00260990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00260994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00260998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026099C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002609A0: jal         0x0025E428
    // 0x002609A4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_0025E428(rdram, ctx);
        goto after_0;
    // 0x002609A4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002609A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002609AC: bne         $v0, $v1, L_002609C0
    if (ctx->r2 != ctx->r3) {
        // 0x002609B0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_002609C0;
    }
    // 0x002609B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002609B4: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x002609B8: beq         $v1, $v0, L_002609E8
    if (ctx->r3 == ctx->r2) {
        // 0x002609BC: nop
    
            goto L_002609E8;
    }
    // 0x002609BC: nop

L_002609C0:
    // 0x002609C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002609C4: lwc1        $f20, 0x79D0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X79D0);
    // 0x002609C8: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x002609CC: jal         0x0021170C
    // 0x002609D0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x002609D0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x002609D4: lwc1        $f12, 0x10C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x002609D8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x002609DC: jal         0x0021170C
    // 0x002609E0: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x002609E0: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x002609E4: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
L_002609E8:
    // 0x002609E8: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x002609EC: bne         $v0, $zero, L_00260A20
    if (ctx->r2 != 0) {
        // 0x002609F0: nop
    
            goto L_00260A20;
    }
    // 0x002609F0: nop

    // 0x002609F4: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x002609F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002609FC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00260A00: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00260A04: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00260A08: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00260A0C: nop

    // 0x00260A10: bc1f        L_00260A20
    if (!c1cs) {
        // 0x00260A14: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_00260A20;
    }
    // 0x00260A14: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x00260A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00260A1C: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00260A20:
    // 0x00260A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00260A24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00260A28: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00260A2C: jr          $ra
    // 0x00260A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00260A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002837E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002837E0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002837E4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002837E8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x002837EC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002837F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002837F4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x002837F8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x002837FC: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00283800: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x00283804: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x00283808: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x0028380C: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x00283810: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x00283814: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x00283818: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x0028381C: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x00283820: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x00283824: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x00283828: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x0028382C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x00283830: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00283834: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x00283838: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x0028383C: sw          $zero, 0x50($v0)
    MEM_W(0X50, ctx->r2) = 0;
    // 0x00283840: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x00283844: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x00283848: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x0028384C: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x00283850: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x00283854: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x00283858: sw          $zero, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = 0;
    // 0x0028385C: sw          $v1, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r3;
    // 0x00283860: sw          $v1, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->r3;
    // 0x00283864: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
    // 0x00283868: sw          $zero, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = 0;
    // 0x0028386C: sw          $zero, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = 0;
    // 0x00283870: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
    // 0x00283874: sw          $zero, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = 0;
    // 0x00283878: sw          $v1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r3;
    // 0x0028387C: sw          $v1, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r3;
    // 0x00283880: sw          $v1, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r3;
    // 0x00283884: sw          $zero, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = 0;
    // 0x00283888: sw          $zero, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = 0;
    // 0x0028388C: sw          $zero, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = 0;
    // 0x00283890: sw          $zero, 0xF0($v0)
    MEM_W(0XF0, ctx->r2) = 0;
    // 0x00283894: sw          $zero, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = 0;
    // 0x00283898: sw          $zero, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = 0;
    // 0x0028389C: jr          $ra
    // 0x002838A0: sw          $zero, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = 0;
    return;
    // 0x002838A0: sw          $zero, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = 0;
;}
RECOMP_FUNC void func_0042273C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042273C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00422740: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422744: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x00422748: jr          $ra
    // 0x0042274C: nop

    return;
    // 0x0042274C: nop

;}
RECOMP_FUNC void func_00231C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231C58: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00231C5C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x00231C60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00231C64: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x00231C68: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00231C6C: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231C70: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00231C74: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00231C78: beq         $v0, $zero, L_00231CA8
    if (ctx->r2 == 0) {
        // 0x00231C7C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00231CA8;
    }
    // 0x00231C7C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00231C80: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00231C84: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00231C88: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00231C8C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00231C90: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00231C94: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231C98: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231C9C: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00231CA0: j           L_00231CC4
    // 0x00231CA4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_00231CC4;
    // 0x00231CA4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231CA8:
    // 0x00231CA8: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00231CAC: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x00231CB0: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x00231CB4: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231CB8: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231CBC: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00231CC0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231CC4:
    // 0x00231CC4: jal         0x0020E810
    // 0x00231CC8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x00231CC8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x00231CCC: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00231CD0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00231CD4: addiu       $a0, $a0, 0x1DA8
    ctx->r4 = ADD32(ctx->r4, 0X1DA8);
    // 0x00231CD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00231CDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00231CE0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00231CE4: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00231CE8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00231CEC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00231CF0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00231CF4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00231CF8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00231CFC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00231D00: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00231D04: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00231D08: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00231D0C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00231D10: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00231D14: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00231D18: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x00231D1C: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x00231D20: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x00231D24: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00231D28: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00231D2C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00231D30: lw          $v0, 0x190($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X190);
    // 0x00231D34: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00231D38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00231D3C: bnel        $v0, $zero, L_00231D4C
    if (ctx->r2 != 0) {
        // 0x00231D40: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_00231D4C;
    }
    goto skip_0;
    // 0x00231D40: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    skip_0:
    // 0x00231D44: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x00231D48: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_00231D4C:
    // 0x00231D4C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x00231D50: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x00231D54: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x00231D58: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00231D5C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231D60: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00231D64: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x00231D68: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00231D6C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00231D70: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x00231D74: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x00231D78: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x00231D7C: jal         0x0022F350
    // 0x00231D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_1;
    // 0x00231D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00231D84: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00231D88: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00231D8C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00231D90: jr          $ra
    // 0x00231D94: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00231D94: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0021A658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021A658: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0021A65C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0021A660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021A664: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0021A668: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0021A66C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0021A670: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0021A674: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0021A678: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021A67C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0021A680: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021A684: beq         $v0, $zero, L_0021A7B4
    if (ctx->r2 == 0) {
        // 0x0021A688: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_0021A7B4;
    }
    // 0x0021A688: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021A68C: lw          $a2, 0x170($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X170);
    // 0x0021A690: beq         $a2, $zero, L_0021A7B4
    if (ctx->r6 == 0) {
        // 0x0021A694: nop
    
            goto L_0021A7B4;
    }
    // 0x0021A694: nop

    // 0x0021A698: lw          $s2, 0xC($a2)
    ctx->r18 = MEM_W(ctx->r6, 0XC);
    // 0x0021A69C: bne         $s2, $zero, L_0021A6AC
    if (ctx->r18 != 0) {
        // 0x0021A6A0: nop
    
            goto L_0021A6AC;
    }
    // 0x0021A6A0: nop

    // 0x0021A6A4: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x0021A6A8: addiu       $s2, $s2, 0x1EB0
    ctx->r18 = ADD32(ctx->r18, 0X1EB0);
L_0021A6AC:
    // 0x0021A6AC: lhu         $v0, 0x204($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X204);
    // 0x0021A6B0: lwc1        $f20, 0x8($s2)
    ctx->f20.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0021A6B4: addiu       $v0, $v0, -0x2B0C
    ctx->r2 = ADD32(ctx->r2, -0X2B0C);
    // 0x0021A6B8: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x0021A6BC: bnel        $v0, $zero, L_0021A6C4
    if (ctx->r2 != 0) {
        // 0x0021A6C0: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_0021A6C4;
    }
    goto skip_0;
    // 0x0021A6C0: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
L_0021A6C4:
    // 0x0021A6C4: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x0021A6C8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x0021A6CC: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0021A6D0: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x0021A6D4: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x0021A6D8: jal         0x00239F00
    // 0x0021A6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_0;
    // 0x0021A6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0021A6E0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0021A6E4: beq         $s1, $v1, L_0021A6F0
    if (ctx->r17 == ctx->r3) {
        // 0x0021A6E8: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_0021A6F0;
    }
    // 0x0021A6E8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0021A6EC: sw          $s1, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->r17;
L_0021A6F0:
    // 0x0021A6F0: beq         $s1, $zero, L_0021A744
    if (ctx->r17 == 0) {
        // 0x0021A6F4: swc1        $f20, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->f20.u32l;
            goto L_0021A744;
    }
    // 0x0021A6F4: swc1        $f20, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f20.u32l;
    // 0x0021A6F8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0021A6FC: beq         $v0, $zero, L_0021A744
    if (ctx->r2 == 0) {
        // 0x0021A700: nop
    
            goto L_0021A744;
    }
    // 0x0021A700: nop

    // 0x0021A704: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x0021A708: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x0021A70C: beq         $v1, $v0, L_0021A744
    if (ctx->r3 == ctx->r2) {
        // 0x0021A710: nop
    
            goto L_0021A744;
    }
    // 0x0021A710: nop

    // 0x0021A714: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0021A718: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021A71C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A720: bne         $v1, $v0, L_0021A744
    if (ctx->r3 != ctx->r2) {
        // 0x0021A724: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0021A744;
    }
    // 0x0021A724: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021A728: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0021A72C: jal         0x0026E19C
    // 0x0021A730: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E19C(rdram, ctx);
        goto after_1;
    // 0x0021A730: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021A734: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0021A738: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x0021A73C: jal         0x0026E19C
    // 0x0021A740: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E19C(rdram, ctx);
        goto after_2;
    // 0x0021A740: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_0021A744:
    // 0x0021A744: beq         $s3, $zero, L_0021A794
    if (ctx->r19 == 0) {
        // 0x0021A748: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0021A794;
    }
    // 0x0021A748: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021A74C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021A750: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021A754: bne         $v0, $zero, L_0021A794
    if (ctx->r2 != 0) {
        // 0x0021A758: nop
    
            goto L_0021A794;
    }
    // 0x0021A758: nop

    // 0x0021A75C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0021A760: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021A764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A768: bne         $v1, $v0, L_0021A794
    if (ctx->r3 != ctx->r2) {
        // 0x0021A76C: nop
    
            goto L_0021A794;
    }
    // 0x0021A76C: nop

    // 0x0021A770: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021A774: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0021A778: beq         $a0, $zero, L_0021A794
    if (ctx->r4 == 0) {
        // 0x0021A77C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0021A794;
    }
    // 0x0021A77C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0021A780: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0021A784: bne         $v0, $v1, L_0021A794
    if (ctx->r2 != ctx->r3) {
        // 0x0021A788: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_0021A794;
    }
    // 0x0021A788: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0021A78C: jal         0x0026E110
    // 0x0021A790: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_3;
    // 0x0021A790: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
L_0021A794:
    // 0x0021A794: lw          $v0, 0x23C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X23C);
    // 0x0021A798: beq         $v0, $zero, L_0021A7CC
    if (ctx->r2 == 0) {
        // 0x0021A79C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021A7CC;
    }
    // 0x0021A79C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021A7A0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0021A7A4: jalr        $v0
    // 0x0021A7A8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0021A7A8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x0021A7AC: j           L_0021A7CC
    // 0x0021A7B0: nop

        goto L_0021A7CC;
    // 0x0021A7B0: nop

L_0021A7B4:
    // 0x0021A7B4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x0021A7B8: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x0021A7BC: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x0021A7C0: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x0021A7C4: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x0021A7C8: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
L_0021A7CC:
    // 0x0021A7CC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0021A7D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0021A7D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0021A7D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0021A7DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0021A7E0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0021A7E4: jr          $ra
    // 0x0021A7E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0021A7E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00452520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452524: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452528: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045252C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452530: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00452534: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00452538: jal         0x00285A68
    // 0x0045253C: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x0045253C: nop

    after_0:
    // 0x00452540: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00452544: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00452548: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045254C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00452550: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00452554: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00452558: addiu       $a1, $a1, -0x439C
    ctx->r5 = ADD32(ctx->r5, -0X439C);
    // 0x0045255C: jal         0x00416644
    // 0x00452560: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00452560: nop

    after_1:
    // 0x00452564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452568: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045256C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452570: jr          $ra
    // 0x00452574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00461250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042839C:
    // 0x00461250: addiu       $sp, $sp, -0x488
    ctx->r29 = ADD32(ctx->r29, -0X488);
L_004283F4:
    // 0x00461254: sw          $s2, 0x468($sp)
    MEM_W(0X468, ctx->r29) = ctx->r18;
L_00428654:
    // 0x00461258: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_0042865C:
    // 0x0046125C: sw          $s7, 0x47C($sp)
    MEM_W(0X47C, ctx->r29) = ctx->r23;
    // 0x00461260: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00461264: sw          $ra, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r31;
    // 0x00461268: sw          $fp, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r30;
    // 0x0046126C: sw          $s6, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->r22;
    // 0x00461270: sw          $s5, 0x474($sp)
    MEM_W(0X474, ctx->r29) = ctx->r21;
    // 0x00461274: sw          $s4, 0x470($sp)
    MEM_W(0X470, ctx->r29) = ctx->r20;
    // 0x00461278: sw          $s3, 0x46C($sp)
    MEM_W(0X46C, ctx->r29) = ctx->r19;
    // 0x0046127C: sw          $s1, 0x464($sp)
    MEM_W(0X464, ctx->r29) = ctx->r17;
    // 0x00461280: jal         0x00429D1C
    // 0x00461284: sw          $s0, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r16;
    func_00429D1C(rdram, ctx);
        goto after_0;
    // 0x00461284: sw          $s0, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r16;
    after_0:
    // 0x00461288: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046128C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00461290: bne         $v1, $v0, L_004612A4
    if (ctx->r3 != ctx->r2) {
        // 0x00461294: nop
    
            goto L_004612A4;
    }
    // 0x00461294: nop

    // 0x00461298: jal         0x004297D8
    // 0x0046129C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_004297D8(rdram, ctx);
        goto after_1;
    // 0x0046129C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x004612A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_004612A4:
    // 0x004612A4: beq         $v1, $zero, L_004612B4
    if (ctx->r3 == 0) {
        // 0x004612A8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004612B4;
    }
    // 0x004612A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004612AC:
    // 0x004612AC: j           L_0042865C
    // 0x004612B0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    entry_0042865C(rdram, ctx);
    return;
    // 0x004612B0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004612B4:
    // 0x004612B4: jal         0x0042868C
    // 0x004612B8: addiu       $a1, $sp, 0x258
    ctx->r5 = ADD32(ctx->r29, 0X258);
    entry_0042868C(rdram, ctx);
        goto after_2;
    // 0x004612B8: addiu       $a1, $sp, 0x258
    ctx->r5 = ADD32(ctx->r29, 0X258);
    after_2:
    // 0x004612BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004612C0: bne         $v1, $zero, L_0046165C
    if (ctx->r3 != 0) {
        // 0x004612C4: nop
    
            goto L_0046165C;
    }
    // 0x004612C4: nop

    // 0x004612C8: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004612CC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004612D0: beq         $v0, $zero, L_00461468
    if (ctx->r2 == 0) {
        // 0x004612D4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00461468;
    }
    // 0x004612D4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004612D8: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x004612DC: addiu       $s5, $sp, 0x118
    ctx->r21 = ADD32(ctx->r29, 0X118);
    // 0x004612E0: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
L_004612E4:
    // 0x004612E4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004612E8: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x004612EC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004612F0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x004612F4: jal         0x00299680
    // 0x004612F8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x004612F8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x004612FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461300: bne         $v1, $zero, L_0046165C
    if (ctx->r3 != 0) {
        // 0x00461304: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0046165C;
    }
    // 0x00461304: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00461308: lhu         $v0, 0x21C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X21C);
    // 0x0046130C: beq         $v0, $zero, L_004613E4
    if (ctx->r2 == 0) {
        // 0x00461310: nop
    
            goto L_004613E4;
    }
    // 0x00461310: nop

    // 0x00461314: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x00461318: beq         $v0, $zero, L_004613F0
    if (ctx->r2 == 0) {
        // 0x0046131C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004613F0;
    }
    // 0x0046131C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00461320: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00461324: lhu         $s0, 0x21E($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X21E);
    // 0x00461328: j           L_0042839C
    // 0x0046132C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    entry_0042839C(rdram, ctx);
    return;
    // 0x0046132C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_00461330:
    // 0x00461330: bltz        $v0, L_004613C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x00461334: srl         $v1, $a0, 8
        ctx->r3 = S32(U32(ctx->r4) >> 8);
            goto L_004613C8;
    }
    // 0x00461334: srl         $v1, $a0, 8
    ctx->r3 = S32(U32(ctx->r4) >> 8);
    // 0x00461338: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0046133C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00461340: beq         $v0, $a3, L_0046136C
    if (ctx->r2 == ctx->r7) {
        // 0x00461344: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0046136C;
    }
    // 0x00461344: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461348: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0046134C: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x00461350: jal         0x004299C4
    // 0x00461354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_004299C4(rdram, ctx);
        goto after_4;
    // 0x00461354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x00461358: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046135C: beq         $v1, $zero, L_00461370
    if (ctx->r3 == 0) {
        // 0x00461360: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00461370;
    }
    // 0x00461360: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461364: bne         $v1, $s6, L_0046165C
    if (ctx->r3 != ctx->r22) {
        // 0x00461368: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0046165C;
    }
    // 0x00461368: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0046136C:
    // 0x0046136C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00461370:
    // 0x00461370: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00461374: addiu       $a2, $sp, 0x258
    ctx->r6 = ADD32(ctx->r29, 0X258);
    // 0x00461378: jal         0x004287D8
    // 0x0046137C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    entry_004287D8(rdram, ctx);
        goto after_5;
    // 0x0046137C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    after_5:
    // 0x00461380: subu        $a1, $v0, $s4
    ctx->r5 = SUB32(ctx->r2, ctx->r20);
    // 0x00461384: bne         $a1, $zero, L_004613F0
    if (ctx->r5 != 0) {
        // 0x00461388: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_004613F0;
    }
    // 0x00461388: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0046138C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00461390: sllv        $v0, $v0, $s4
    ctx->r2 = S32(ctx->r2 << (ctx->r20 & 31));
    // 0x00461394: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00461398: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x0046139C: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x004613A0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x004613A4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004613A8: bne         $v0, $zero, L_004613C8
    if (ctx->r2 != 0) {
        // 0x004613AC: srl         $v0, $a0, 8
        ctx->r2 = S32(U32(ctx->r4) >> 8);
            goto L_004613C8;
    }
    // 0x004613AC: srl         $v0, $a0, 8
    ctx->r2 = S32(U32(ctx->r4) >> 8);
    // 0x004613B0: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x004613B4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x004613B8: beq         $v0, $zero, L_004613C8
    if (ctx->r2 == 0) {
        // 0x004613BC: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_004613C8;
    }
    // 0x004613BC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x004613C0: bne         $v0, $zero, L_00461330
    if (ctx->r2 != 0) {
        // 0x004613C4: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_00461330;
    }
    // 0x004613C4: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_004613C8:
    // 0x004613C8: bnel        $a1, $zero, L_004613F4
    if (ctx->r5 != 0) {
        // 0x004613CC: sh          $zero, 0x21C($sp)
        MEM_H(0X21C, ctx->r29) = 0;
            goto L_004613F4;
    }
    goto skip_0;
    // 0x004613CC: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
    skip_0:
    // 0x004613D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004613D4: beq         $s0, $v0, L_00461454
    if (ctx->r16 == ctx->r2) {
        // 0x004613D8: nop
    
            goto L_00461454;
    }
    // 0x004613D8: nop

    // 0x004613DC: j           L_004283F4
    // 0x004613E0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
    entry_004283F4(rdram, ctx);
    return;
    // 0x004613E0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
L_004613E4:
    // 0x004613E4: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x004613E8: beq         $v0, $zero, L_00461454
    if (ctx->r2 == 0) {
        // 0x004613EC: nop
    
            goto L_00461454;
    }
    // 0x004613EC: nop

L_004613F0:
    // 0x004613F0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
L_004613F4:
    // 0x004613F4: sw          $zero, 0x218($sp)
    MEM_W(0X218, ctx->r29) = 0;
    // 0x004613F8: sh          $zero, 0x21E($sp)
    MEM_H(0X21E, ctx->r29) = 0;
    // 0x004613FC: sb          $zero, 0x220($sp)
    MEM_B(0X220, ctx->r29) = 0;
    // 0x00461400: sh          $zero, 0x222($sp)
    MEM_H(0X222, ctx->r29) = 0;
    // 0x00461404: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00461408: beq         $v0, $zero, L_00461428
    if (ctx->r2 == 0) {
        // 0x0046140C: nop
    
            goto L_00461428;
    }
    // 0x0046140C: nop

    // 0x00461410: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00461414: jal         0x00429DE4
    // 0x00461418: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_6;
    // 0x00461418: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0046141C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461420: bne         $v1, $zero, L_0046165C
    if (ctx->r3 != 0) {
        // 0x00461424: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0046165C;
    }
    // 0x00461424: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00461428:
    // 0x00461428: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0046142C: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x00461430: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00461434: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00461438: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0046143C: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x00461440: jal         0x00299A40
    // 0x00461444: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_7;
    // 0x00461444: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_7:
    // 0x00461448: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046144C: bne         $v1, $zero, L_004612AC
    if (ctx->r3 != 0) {
        // 0x00461450: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_004612AC;
    }
    // 0x00461450: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_00461454:
    // 0x00461454: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00461458: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0046145C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00461460: bne         $v0, $zero, L_004612E4
    if (ctx->r2 != 0) {
        // 0x00461464: addiu       $a3, $sp, 0x218
        ctx->r7 = ADD32(ctx->r29, 0X218);
            goto L_004612E4;
    }
    // 0x00461464: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
L_00461468:
    // 0x00461468: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0046146C: blez        $v0, L_004614E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00461470: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004614E4;
    }
    // 0x00461470: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00461474: addiu       $s0, $sp, 0x238
    ctx->r16 = ADD32(ctx->r29, 0X238);
L_00461478:
    // 0x00461478: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x0046147C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00461480: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00461484: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00461488: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x0046148C: jal         0x00299680
    // 0x00461490: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_8;
    // 0x00461490: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_8:
    // 0x00461494: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461498: bne         $v1, $zero, L_0046165C
    if (ctx->r3 != 0) {
        // 0x0046149C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0046165C;
    }
    // 0x0046149C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004614A0: lhu         $v0, 0x21C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X21C);
    // 0x004614A4: beql        $v0, $zero, L_004614D0
    if (ctx->r2 == 0) {
        // 0x004614A8: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004614D0;
    }
    goto skip_1;
    // 0x004614A8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_1:
    // 0x004614AC: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x004614B0: beql        $v0, $zero, L_004614D0
    if (ctx->r2 == 0) {
        // 0x004614B4: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004614D0;
    }
    goto skip_2;
    // 0x004614B4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_2:
    // 0x004614B8: lhu         $v1, 0x21E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X21E);
    // 0x004614BC: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x004614C0: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x004614C4: bnel        $v0, $zero, L_004614D0
    if (ctx->r2 != 0) {
        // 0x004614C8: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004614D0;
    }
    goto skip_3;
    // 0x004614C8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_3:
    // 0x004614CC: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_004614D0:
    // 0x004614D0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004614D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004614D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004614DC: bne         $v0, $zero, L_00461478
    if (ctx->r2 != 0) {
        // 0x004614E0: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_00461478;
    }
    // 0x004614E0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_004614E4:
    // 0x004614E4: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004614E8: beq         $v0, $zero, L_00461638
    if (ctx->r2 == 0) {
        // 0x004614EC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00461638;
    }
    // 0x004614EC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004614F0: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x004614F4: addiu       $s4, $sp, 0x18
    ctx->r20 = ADD32(ctx->r29, 0X18);
    // 0x004614F8: addiu       $s5, $sp, 0x118
    ctx->r21 = ADD32(ctx->r29, 0X118);
    // 0x004614FC: addiu       $s6, $sp, 0x238
    ctx->r22 = ADD32(ctx->r29, 0X238);
    // 0x00461500: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00461504:
    // 0x00461504: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x00461508: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0046150C: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x00461510: jal         0x004299C4
    // 0x00461514: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    entry_004299C4(rdram, ctx);
        goto after_9;
    // 0x00461514: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00461518: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046151C: beq         $v1, $zero, L_0046152C
    if (ctx->r3 == 0) {
        // 0x00461520: nop
    
            goto L_0046152C;
    }
    // 0x00461520: nop

    // 0x00461524: bne         $v1, $fp, L_0046165C
    if (ctx->r3 != ctx->r30) {
        // 0x00461528: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0046165C;
    }
    // 0x00461528: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0046152C:
    // 0x0046152C: bne         $s0, $zero, L_00461538
    if (ctx->r16 != 0) {
        // 0x00461530: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00461538;
    }
    // 0x00461530: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00461534: lw          $a1, 0x60($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X60);
L_00461538:
    // 0x00461538: blez        $a1, L_00461564
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0046153C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00461564;
    }
    // 0x0046153C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00461540: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00461544: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_00461548:
    // 0x00461548: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0046154C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00461550: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00461554: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x00461558: slt         $v0, $s1, $a1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0046155C: bne         $v0, $zero, L_00461548
    if (ctx->r2 != 0) {
        // 0x00461560: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_00461548;
    }
    // 0x00461560: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_00461564:
    // 0x00461564: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00461568: beq         $v0, $zero, L_00461588
    if (ctx->r2 == 0) {
        // 0x0046156C: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_00461588;
    }
    // 0x0046156C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00461570: addu        $v1, $v0, $s4
    ctx->r3 = ADD32(ctx->r2, ctx->r20);
L_00461574:
    // 0x00461574: sh          $fp, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r30;
    // 0x00461578: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0046157C: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00461580: bne         $v0, $zero, L_00461574
    if (ctx->r2 != 0) {
        // 0x00461584: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00461574;
    }
    // 0x00461584: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00461588:
    // 0x00461588: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0046158C: blez        $v0, L_00461604
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00461590: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00461604;
    }
    // 0x00461590: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00461594: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x00461598: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0046159C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_004615A0:
    // 0x004615A0: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x004615A4: bne         $v0, $t0, L_004615EC
    if (ctx->r2 != ctx->r8) {
        // 0x004615A8: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_004615EC;
    }
    // 0x004615A8: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_004615AC:
    // 0x004615AC: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x004615B0: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x004615B4: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x004615B8: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x004615BC: bnel        $v1, $zero, L_004615F0
    if (ctx->r3 != 0) {
        // 0x004615C0: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_004615F0;
    }
    goto skip_4;
    // 0x004615C0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_4:
    // 0x004615C4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x004615C8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004615CC: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x004615D0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x004615D4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x004615D8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004615DC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004615E0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004615E4: beq         $v0, $t0, L_004615AC
    if (ctx->r2 == ctx->r8) {
        // 0x004615E8: nop
    
            goto L_004615AC;
    }
    // 0x004615E8: nop

L_004615EC:
    // 0x004615EC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_004615F0:
    // 0x004615F0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004615F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004615F8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004615FC: bne         $v0, $zero, L_004615A0
    if (ctx->r2 != 0) {
        // 0x00461600: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_004615A0;
    }
    // 0x00461600: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_00461604:
    // 0x00461604: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461608: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0046160C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00461610: jal         0x004299C4
    // 0x00461614: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    entry_004299C4(rdram, ctx);
        goto after_10;
    // 0x00461614: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_10:
    // 0x00461618: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046161C: bne         $v1, $zero, L_004612AC
    if (ctx->r3 != 0) {
        // 0x00461620: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_004612AC;
    }
    // 0x00461620: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00461624: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00461628: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0046162C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00461630: bne         $v0, $zero, L_00461504
    if (ctx->r2 != 0) {
        // 0x00461634: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00461504;
    }
    // 0x00461634: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00461638:
    // 0x00461638: beq         $s7, $zero, L_0046164C
    if (ctx->r23 == 0) {
        // 0x0046163C: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0046164C;
    }
    // 0x0046163C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x00461640: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00461644: j           L_00428654
    // 0x00461648: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    entry_00428654(rdram, ctx);
    return;
    // 0x00461648: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_0046164C:
    // 0x0046164C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00461650: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00461654: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00461658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0046165C:
    // 0x0046165C: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00461660: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00461664: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00461668: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0046166C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00461670: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00461674: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00461678: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0046167C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00461680: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00461684: jr          $ra
    // 0x00461688: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    return;
    // 0x00461688: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
;}
RECOMP_FUNC void func_0042DC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042DC18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042DC1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0042DC20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042DC24: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0042DC28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0042DC2C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0042DC30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0042DC34: jal         0x0027BC34
    // 0x0042DC38: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x0042DC38: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0042DC3C: bnel        $v0, $zero, L_0042DC44
    if (ctx->r2 != 0) {
        // 0x0042DC40: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042DC44;
    }
    goto skip_0;
    // 0x0042DC40: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_0042DC44:
    // 0x0042DC44: jal         0x0028D0E0
    // 0x0042DC48: nop

    func_0028D0E0(rdram, ctx);
        goto after_1;
    // 0x0042DC48: nop

    after_1:
    // 0x0042DC4C: bnel        $v0, $zero, L_0042DC54
    if (ctx->r2 != 0) {
        // 0x0042DC50: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042DC54;
    }
    goto skip_1;
    // 0x0042DC50: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_0042DC54:
    // 0x0042DC54: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042DC58: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0042DC5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042DC60: sw          $v0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r2;
    // 0x0042DC64: jal         0x0042FF58
    // 0x0042DC68: sw          $s1, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r17;
    func_0042FF58(rdram, ctx);
        goto after_2;
    // 0x0042DC68: sw          $s1, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r17;
    after_2:
    // 0x0042DC6C: addiu       $a0, $s0, 0xCD0
    ctx->r4 = ADD32(ctx->r16, 0XCD0);
    // 0x0042DC70: jal         0x00254C44
    // 0x0042DC74: sw          $v0, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->r2;
    func_00254C44(rdram, ctx);
        goto after_3;
    // 0x0042DC74: sw          $v0, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->r2;
    after_3:
    // 0x0042DC78: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x0042DC7C: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_0042DC80:
    // 0x0042DC80: sb          $zero, 0x52C($v0)
    MEM_B(0X52C, ctx->r2) = 0;
    // 0x0042DC84: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0042DC88: bgez        $a0, L_0042DC80
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0042DC8C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0042DC80;
    }
    // 0x0042DC8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0042DC90: sh          $zero, 0x528($s0)
    MEM_H(0X528, ctx->r16) = 0;
    // 0x0042DC94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x0042DC98: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_0042DC9C:
    // 0x0042DC9C: sb          $zero, 0x9FC($v0)
    MEM_B(0X9FC, ctx->r2) = 0;
    // 0x0042DCA0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0042DCA4: bgez        $a0, L_0042DC9C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0042DCA8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0042DC9C;
    }
    // 0x0042DCA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0042DCAC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x0042DCB0: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_0042DCB4:
    // 0x0042DCB4: sb          $zero, 0xA02($v0)
    MEM_B(0XA02, ctx->r2) = 0;
    // 0x0042DCB8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0042DCBC: bgez        $a0, L_0042DCB4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0042DCC0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0042DCB4;
    }
    // 0x0042DCC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0042DCC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042DCC8: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042DCCC: bne         $v0, $zero, L_0042DCD8
    if (ctx->r2 != 0) {
        // 0x0042DCD0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042DCD8;
    }
    // 0x0042DCD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042DCD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0042DCD8:
    // 0x0042DCD8: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
    // 0x0042DCDC: jal         0x00248A8C
    // 0x0042DCE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x0042DCE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042DCE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042DCE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042DCEC: sw          $zero, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = 0;
    // 0x0042DCF0: sw          $zero, 0xA2C($s0)
    MEM_W(0XA2C, ctx->r16) = 0;
    // 0x0042DCF4: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
    // 0x0042DCF8: sw          $v0, 0xC08($s0)
    MEM_W(0XC08, ctx->r16) = ctx->r2;
L_0042DCFC:
    // 0x0042DCFC: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD00: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0042DD04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042DD08: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x0042DD0C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042DD14: sh          $zero, 0x20($v0)
    MEM_H(0X20, ctx->r2) = 0;
    // 0x0042DD18: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042DD20: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x0042DD24: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042DD2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042DD30: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x0042DD34: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042DD38: bne         $v0, $zero, L_0042DCFC
    if (ctx->r2 != 0) {
        // 0x0042DD3C: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_0042DCFC;
    }
    // 0x0042DD3C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x0042DD40: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD44: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x0042DD48: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD4C: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x0042DD50: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD54: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x0042DD58: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD5C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x0042DD60: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD64: sb          $zero, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = 0;
    // 0x0042DD68: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD6C: sb          $zero, 0x3D($v0)
    MEM_B(0X3D, ctx->r2) = 0;
    // 0x0042DD70: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042DD78: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x0042DD7C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD80: sb          $zero, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = 0;
L_0042DD84:
    // 0x0042DD84: sw          $zero, 0x9A0($v1)
    MEM_W(0X9A0, ctx->r3) = 0;
    // 0x0042DD88: sw          $zero, 0x9B8($v1)
    MEM_W(0X9B8, ctx->r3) = 0;
    // 0x0042DD8C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042DD90: slti        $v0, $a0, 0x6
    ctx->r2 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x0042DD94: bne         $v0, $zero, L_0042DD84
    if (ctx->r2 != 0) {
        // 0x0042DD98: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0042DD84;
    }
    // 0x0042DD98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0042DD9C: lw          $v0, 0x9F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9F8);
    // 0x0042DDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DDA4: sw          $zero, 0x9D0($s0)
    MEM_W(0X9D0, ctx->r16) = 0;
    // 0x0042DDA8: sw          $zero, 0x9D4($s0)
    MEM_W(0X9D4, ctx->r16) = 0;
    // 0x0042DDAC: sw          $zero, 0x9D8($s0)
    MEM_W(0X9D8, ctx->r16) = 0;
    // 0x0042DDB0: sw          $zero, 0x9DC($s0)
    MEM_W(0X9DC, ctx->r16) = 0;
    // 0x0042DDB4: sw          $zero, 0x9E0($s0)
    MEM_W(0X9E0, ctx->r16) = 0;
    // 0x0042DDB8: sw          $zero, 0x9E4($s0)
    MEM_W(0X9E4, ctx->r16) = 0;
    // 0x0042DDBC: sw          $zero, 0x9E8($s0)
    MEM_W(0X9E8, ctx->r16) = 0;
    // 0x0042DDC0: sw          $zero, 0x9EC($s0)
    MEM_W(0X9EC, ctx->r16) = 0;
    // 0x0042DDC4: sw          $zero, 0x9F0($s0)
    MEM_W(0X9F0, ctx->r16) = 0;
    // 0x0042DDC8: sw          $zero, 0x9F4($s0)
    MEM_W(0X9F4, ctx->r16) = 0;
    // 0x0042DDCC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0042DDD0: jal         0x0042EA00
    // 0x0042DDD4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    func_0042EA00(rdram, ctx);
        goto after_5;
    // 0x0042DDD4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    after_5:
    // 0x0042DDD8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042DDDC: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0042DDE0: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0042DDE4: bnel        $v0, $zero, L_0042DDEC
    if (ctx->r2 != 0) {
        // 0x0042DDE8: sw          $zero, 0x12B4($s0)
        MEM_W(0X12B4, ctx->r16) = 0;
            goto L_0042DDEC;
    }
    goto skip_2;
    // 0x0042DDE8: sw          $zero, 0x12B4($s0)
    MEM_W(0X12B4, ctx->r16) = 0;
    skip_2:
L_0042DDEC:
    // 0x0042DDEC: beq         $s2, $zero, L_0042DE5C
    if (ctx->r18 == 0) {
        // 0x0042DDF0: nop
    
            goto L_0042DE5C;
    }
    // 0x0042DDF0: nop

    // 0x0042DDF4: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0042DDF8: beq         $v0, $zero, L_0042DE38
    if (ctx->r2 == 0) {
        // 0x0042DDFC: nop
    
            goto L_0042DE38;
    }
    // 0x0042DDFC: nop

    // 0x0042DE00: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DE04: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x0042DE08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042DE0C: sw          $zero, 0x520($s0)
    MEM_W(0X520, ctx->r16) = 0;
    // 0x0042DE10: sw          $v0, 0xBF8($s0)
    MEM_W(0XBF8, ctx->r16) = ctx->r2;
    // 0x0042DE14: lw          $v0, 0x1FC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1FC);
    // 0x0042DE18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE1C: addiu       $a1, $a1, -0x7720
    ctx->r5 = ADD32(ctx->r5, -0X7720);
    // 0x0042DE20: bne         $v0, $zero, L_0042DE40
    if (ctx->r2 != 0) {
        // 0x0042DE24: nop
    
            goto L_0042DE40;
    }
    // 0x0042DE24: nop

    // 0x0042DE28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE2C: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x0042DE30: j           L_0042DE40
    // 0x0042DE34: nop

        goto L_0042DE40;
    // 0x0042DE34: nop

L_0042DE38:
    // 0x0042DE38: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE3C: addiu       $a1, $a1, -0x6E94
    ctx->r5 = ADD32(ctx->r5, -0X6E94);
L_0042DE40:
    // 0x0042DE40: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0042DE44: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x0042DE48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0042DE4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042DE50: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0042DE54: jal         0x00416644
    // 0x0042DE58: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0042DE58: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_6:
L_0042DE5C:
    // 0x0042DE5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042DE60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0042DE64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0042DE68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0042DE6C: jr          $ra
    // 0x0042DE70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042DE70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00414938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414938: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x0041493C: sw          $s5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r21;
    // 0x00414940: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00414944: sw          $fp, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r30;
    // 0x00414948: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x0041494C: sw          $s7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r23;
    // 0x00414950: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x00414954: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00414958: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041495C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x00414960: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x00414964: sw          $s6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r22;
    // 0x00414968: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x0041496C: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x00414970: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x00414974: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x00414978: jal         0x00266C5C
    // 0x0041497C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0041497C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    after_0:
    // 0x00414980: lw          $v1, 0x20($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X20);
    // 0x00414984: beq         $v1, $zero, L_00414E78
    if (ctx->r3 == 0) {
        // 0x00414988: addu        $s6, $v1, $zero
        ctx->r22 = ADD32(ctx->r3, 0);
            goto L_00414E78;
    }
    // 0x00414988: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x0041498C: lw          $v0, 0x328($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X328);
    // 0x00414990: lw          $s4, 0x14($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X14);
    // 0x00414994: beq         $v0, $zero, L_00414E78
    if (ctx->r2 == 0) {
        // 0x00414998: addiu       $s1, $s6, 0xA0
        ctx->r17 = ADD32(ctx->r22, 0XA0);
            goto L_00414E78;
    }
    // 0x00414998: addiu       $s1, $s6, 0xA0
    ctx->r17 = ADD32(ctx->r22, 0XA0);
    // 0x0041499C: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x004149A0: ori         $v0, $v0, 0x7
    ctx->r2 = ctx->r2 | 0X7;
    // 0x004149A4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x004149A8: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x004149AC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x004149B0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004149B4: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x004149B8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004149BC: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x004149C0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x004149C4: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x004149C8: addiu       $v1, $v1, 0x368
    ctx->r3 = ADD32(ctx->r3, 0X368);
    // 0x004149CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004149D0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x004149D4: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x004149D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004149DC: lwc1        $f2, 0x2030($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x004149E0: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x004149E4: lwc1        $f1, 0x288($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X288);
    // 0x004149E8: lwc1        $f0, 0x18($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X18);
    // 0x004149EC: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x004149F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004149F4: lwc1        $f2, 0x28C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28C);
    // 0x004149F8: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x004149FC: lwc1        $f0, 0x20($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X20);
    // 0x00414A00: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414A04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414A08: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00414A0C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00414A10: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x00414A14: lwc1        $f0, 0x1C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x00414A18: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00414A1C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00414A20: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x00414A24: lwc1        $f0, 0x34($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X34);
    // 0x00414A28: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00414A2C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00414A30: swc1        $f0, 0x32C($s6)
    MEM_W(0X32C, ctx->r22) = ctx->f0.u32l;
    // 0x00414A34: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00414A38: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00414A3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00414A40: bne         $v0, $zero, L_00414AF8
    if (ctx->r2 != 0) {
        // 0x00414A44: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00414AF8;
    }
    // 0x00414A44: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00414A48: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00414A4C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00414A50: lw          $s2, 0x4($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X4);
    // 0x00414A54: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x00414A58: lw          $s0, 0x20($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X20);
    // 0x00414A5C: jal         0x00225EBC
    // 0x00414A60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x00414A60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00414A64: bnel        $v0, $zero, L_00414A74
    if (ctx->r2 != 0) {
        // 0x00414A68: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_00414A74;
    }
    goto skip_0;
    // 0x00414A68: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x00414A6C: j           L_00414AF8
    // 0x00414A70: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
        goto L_00414AF8;
    // 0x00414A70: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
L_00414A74:
    // 0x00414A74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00414A78: addiu       $a1, $v1, 0x90
    ctx->r5 = ADD32(ctx->r3, 0X90);
    // 0x00414A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414A80: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x00414A84: sw          $v0, 0x328($s0)
    MEM_W(0X328, ctx->r16) = ctx->r2;
L_00414A88:
    // 0x00414A88: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x00414A8C: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x00414A90: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x00414A94: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x00414A98: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x00414A9C: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x00414AA0: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x00414AA4: sw          $t4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r12;
    // 0x00414AA8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00414AAC: bne         $v1, $a1, L_00414A88
    if (ctx->r3 != ctx->r5) {
        // 0x00414AB0: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00414A88;
    }
    // 0x00414AB0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00414AB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414AB8: lwc1        $f0, 0xBEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBEC);
    // 0x00414ABC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x00414AC0: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x00414AC4: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x00414AC8: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x00414ACC: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x00414AD0: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x00414AD4: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x00414AD8: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
    // 0x00414ADC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00414AE0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00414AE4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00414AE8: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00414AEC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00414AF0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x00414AF4: swc1        $f1, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00414AF8:
    // 0x00414AF8: lw          $t1, 0xC($s4)
    ctx->r9 = MEM_W(ctx->r20, 0XC);
    // 0x00414AFC: lw          $t2, 0x10($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X10);
    // 0x00414B00: lw          $t3, 0x14($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X14);
    // 0x00414B04: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x00414B08: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x00414B0C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x00414B10: lwc1        $f1, 0x32C($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X32C);
    // 0x00414B14: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x00414B18: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414B1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414B20: lwc1        $f0, 0xBF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBF0);
    // 0x00414B24: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414B28: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00414B2C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00414B30: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00414B34: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x00414B38: lw          $a0, 0x40($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X40);
    // 0x00414B3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x00414B40: jal         0x0020F85C
    // 0x00414B44: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x00414B44: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    after_2:
    // 0x00414B48: beq         $s3, $zero, L_00414C00
    if (ctx->r19 == 0) {
        // 0x00414B4C: lui         $s0, 0x200
        ctx->r16 = S32(0X200 << 16);
            goto L_00414C00;
    }
    // 0x00414B4C: lui         $s0, 0x200
    ctx->r16 = S32(0X200 << 16);
    // 0x00414B50: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00414B54: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x00414B58: bne         $v0, $zero, L_00414C00
    if (ctx->r2 != 0) {
        // 0x00414B5C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00414C00;
    }
    // 0x00414B5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00414B60: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00414B64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00414B68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00414B6C: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x00414B70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414B74: lwc1        $f0, 0xBF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBF4);
    // 0x00414B78: lwc1        $f1, 0x28($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X28);
    // 0x00414B7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00414B80: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00414B84: lw          $a3, 0x6D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D00);
    // 0x00414B88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00414B8C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00414B90: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414B94: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414B98: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414B9C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00414BA0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x00414BA4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x00414BA8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x00414BAC: lw          $t1, 0x18($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X18);
    // 0x00414BB0: lw          $t2, 0x1C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X1C);
    // 0x00414BB4: lw          $t3, 0x20($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X20);
    // 0x00414BB8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00414BBC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00414BC0: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x00414BC4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x00414BC8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x00414BCC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x00414BD0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00414BD4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x00414BD8: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x00414BDC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00414BE0: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x00414BE4: jal         0x00219BC0
    // 0x00414BE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00219BC0(rdram, ctx);
        goto after_3;
    // 0x00414BE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
    // 0x00414BEC: jal         0x0021E5D4
    // 0x00414BF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021E5D4(rdram, ctx);
        goto after_4;
    // 0x00414BF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00414BF4: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x00414BF8: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x00414BFC: sw          $v0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r2;
L_00414C00:
    // 0x00414C00: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00414C04: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x00414C08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00414C0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00414C10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00414C14: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00414C18: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00414C1C: bgez        $v0, L_00414C30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00414C20: nop
    
            goto L_00414C30;
    }
    // 0x00414C20: nop

    // 0x00414C24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C28: ldc1        $f0, 0xBF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XBF8);
    // 0x00414C2C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00414C30:
    // 0x00414C30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C34: lwc1        $f0, 0xC00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC00);
    // 0x00414C38: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00414C3C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00414C40: jal         0x002982F0
    // 0x00414C44: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x00414C44: nop

    after_5:
    // 0x00414C48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C4C: lwc1        $f1, 0xC04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC04);
    // 0x00414C50: lwc1        $f2, 0x30($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X30);
    // 0x00414C54: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00414C58: lwc1        $f1, 0x34($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X34);
    // 0x00414C5C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00414C60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414C64: lwc1        $f3, 0xC08($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XC08);
    // 0x00414C68: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00414C6C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00414C70: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414C74: lh          $v1, 0x0($s7)
    ctx->r3 = MEM_H(ctx->r23, 0X0);
    // 0x00414C78: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x00414C7C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00414C80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00414C84: swc1        $f4, 0x8E0($at)
    MEM_W(0X8E0, ctx->r1) = ctx->f4.u32l;
    // 0x00414C88: bne         $v1, $v0, L_00414CA0
    if (ctx->r3 != ctx->r2) {
        // 0x00414C8C: nop
    
            goto L_00414CA0;
    }
    // 0x00414C8C: nop

    // 0x00414C90: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00414C94: addiu       $v0, $v0, 0x71F4
    ctx->r2 = ADD32(ctx->r2, 0X71F4);
    // 0x00414C98: j           L_00414CA8
    // 0x00414C9C: nop

        goto L_00414CA8;
    // 0x00414C9C: nop

L_00414CA0:
    // 0x00414CA0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00414CA4: addiu       $v0, $v0, 0x71D0
    ctx->r2 = ADD32(ctx->r2, 0X71D0);
L_00414CA8:
    // 0x00414CA8: jal         0x00206078
    // 0x00414CAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    func_00206078(rdram, ctx);
        goto after_6;
    // 0x00414CAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    after_6:
    // 0x00414CB0: bne         $v0, $zero, L_00414CC0
    if (ctx->r2 != 0) {
        // 0x00414CB4: nop
    
            goto L_00414CC0;
    }
    // 0x00414CB4: nop

    // 0x00414CB8: jal         0x00206068
    // 0x00414CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00206068(rdram, ctx);
        goto after_7;
    // 0x00414CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
L_00414CC0:
    // 0x00414CC0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x00414CC4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00414CC8: bne         $v1, $v0, L_00414CF8
    if (ctx->r3 != ctx->r2) {
        // 0x00414CCC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00414CF8;
    }
    // 0x00414CCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00414CD0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00414CD4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00414CD8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00414CDC: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x00414CE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414CE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00414CE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00414CEC: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
    // 0x00414CF0: jal         0x002241D8
    // 0x00414CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002241D8(rdram, ctx);
        goto after_8;
    // 0x00414CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_00414CF8:
    // 0x00414CF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414CFC: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x00414D00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x00414D04: beq         $v0, $a0, L_00414D88
    if (ctx->r2 == ctx->r4) {
        // 0x00414D08: lui         $a2, 0xE300
        ctx->r6 = S32(0XE300 << 16);
            goto L_00414D88;
    }
    // 0x00414D08: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00414D0C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00414D10: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x00414D14: ori         $a3, $a3, 0xC00
    ctx->r7 = ctx->r7 | 0XC00;
    // 0x00414D18: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x00414D1C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00414D20: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00414D24: ori         $t0, $t0, 0x1201
    ctx->r8 = ctx->r8 | 0X1201;
    // 0x00414D28: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00414D2C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00414D30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414D34: sw          $a0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r4;
    // 0x00414D38: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00414D3C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00414D40: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00414D44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00414D48: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00414D4C: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x00414D50: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00414D54: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00414D58: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00414D5C: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x00414D60: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00414D64: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00414D68: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00414D6C: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00414D70: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00414D74: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00414D78: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00414D7C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00414D80: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x00414D84: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00414D88:
    // 0x00414D88: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00414D8C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x00414D90: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x00414D94: sw          $t1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r9;
    // 0x00414D98: sw          $t2, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r10;
    // 0x00414D9C: sw          $t3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r11;
    // 0x00414DA0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DA4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DA8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DAC: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414DB0: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414DB4: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414DB8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DBC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DC0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DC4: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414DC8: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414DCC: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414DD0: jal         0x0021EBC0
    // 0x00414DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021EBC0(rdram, ctx);
        goto after_9;
    // 0x00414DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00414DD8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DDC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DE0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DE4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414DE8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414DEC: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414DF0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414DF4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414DF8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414DFC: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414E00: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414E04: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414E08: jal         0x0021A344
    // 0x00414E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021A344(rdram, ctx);
        goto after_10;
    // 0x00414E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00414E10: lwc1        $f1, 0x2C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X2C);
    // 0x00414E14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00414E18: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00414E1C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414E20: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00414E24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00414E28: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    // 0x00414E2C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414E30: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414E34: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414E38: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00414E3C: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00414E40: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x00414E44: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00414E48: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00414E4C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00414E50: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x00414E54: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x00414E58: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x00414E5C: jal         0x0020B5D4
    // 0x00414E60: nop

    func_0020B5D4(rdram, ctx);
        goto after_11;
    // 0x00414E60: nop

    after_11:
    // 0x00414E64: lw          $a1, 0x40($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X40);
    // 0x00414E68: jal         0x0021D39C
    // 0x00414E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021D39C(rdram, ctx);
        goto after_12;
    // 0x00414E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00414E70: jal         0x0020B624
    // 0x00414E74: nop

    func_0020B624(rdram, ctx);
        goto after_13;
    // 0x00414E74: nop

    after_13:
L_00414E78:
    // 0x00414E78: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x00414E7C: lw          $fp, 0xB0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB0);
    // 0x00414E80: lw          $s7, 0xAC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XAC);
    // 0x00414E84: lw          $s6, 0xA8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA8);
    // 0x00414E88: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x00414E8C: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x00414E90: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x00414E94: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x00414E98: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x00414E9C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x00414EA0: jr          $ra
    // 0x00414EA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00414EA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_0045F084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004262CC:
    // 0x0045F084: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0045F088: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0045F08C: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0045F090: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x0045F094: addiu       $v1, $a1, 0xFF
    ctx->r3 = ADD32(ctx->r5, 0XFF);
    // 0x0045F098: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x0045F09C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0045F0A0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0045F0A4: sll         $s0, $s7, 2
    ctx->r16 = S32(ctx->r23 << 2);
    // 0x0045F0A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F0AC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045F0B0: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F0B4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0045F0B8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0045F0BC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0045F0C0: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x0045F0C4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x0045F0C8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x0045F0CC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0045F0D0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0045F0D4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0045F0D8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0045F0DC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x0045F0E0: beq         $v0, $v1, L_0045F0F0
    if (ctx->r2 == ctx->r3) {
        // 0x0045F0E4: sw          $a3, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r7;
            goto L_0045F0F0;
    }
    // 0x0045F0E4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x0045F0E8: j           L_004262CC
    // 0x0045F0EC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_004262CC(rdram, ctx);
    return;
    // 0x0045F0EC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045F0F0:
    // 0x0045F0F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F0F4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x0045F0F8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045F0FC: addiu       $a3, $a3, 0x18C8
    ctx->r7 = ADD32(ctx->r7, 0X18C8);
    // 0x0045F100: jal         0x00204EDC
    // 0x0045F104: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0045F104: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_0:
    // 0x0045F108: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0045F10C: addu        $fp, $s0, $zero
    ctx->r30 = ADD32(ctx->r16, 0);
    // 0x0045F110: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0045F114: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0045F118: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x0045F11C: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x0045F120: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045F124: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x0045F128: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0045F12C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0045F130: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0045F134: addiu       $t0, $t0, 0xFF
    ctx->r8 = ADD32(ctx->r8, 0XFF);
    // 0x0045F138: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0045F13C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0045F140: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_0045F144:
    // 0x0045F144: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x0045F148: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x0045F14C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x0045F150: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x0045F154: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0045F158: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045F15C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0045F160: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0045F164: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045F168: addiu       $v0, $v0, 0x18E0
    ctx->r2 = ADD32(ctx->r2, 0X18E0);
    // 0x0045F16C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0045F170: jal         0x00425AE0
    // 0x0045F174: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    entry_00425AE0(rdram, ctx);
        goto after_1;
    // 0x0045F174: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x0045F178: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0045F17C: bne         $s6, $zero, L_0045F2AC
    if (ctx->r22 != 0) {
        // 0x0045F180: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_0045F2AC;
    }
    // 0x0045F180: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x0045F184: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0045F188: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0045F18C: and         $s3, $t0, $v0
    ctx->r19 = ctx->r8 & ctx->r2;
    // 0x0045F190: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F194: addu        $at, $at, $fp
    ctx->r1 = ADD32(ctx->r1, ctx->r30);
    // 0x0045F198: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F19C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0045F1A0: bne         $v0, $v1, L_0045F268
    if (ctx->r2 != ctx->r3) {
        // 0x0045F1A4: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0045F268;
    }
    // 0x0045F1A4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0045F1A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F1AC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0045F1B0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045F1B4: addiu       $a3, $a3, 0x18B0
    ctx->r7 = ADD32(ctx->r7, 0X18B0);
    // 0x0045F1B8: jal         0x00204EDC
    // 0x0045F1BC: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0045F1BC: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_2:
    // 0x0045F1C0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0045F1C4: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x0045F1C8: jal         0x00285878
    // 0x0045F1CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_3;
    // 0x0045F1CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x0045F1D0: jal         0x002847E0
    // 0x0045F1D4: nop

    func_002847E0(rdram, ctx);
        goto after_4;
    // 0x0045F1D4: nop

    after_4:
    // 0x0045F1D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F1DC: addu        $at, $at, $fp
    ctx->r1 = ADD32(ctx->r1, ctx->r30);
    // 0x0045F1E0: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F1E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045F1E8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045F1EC: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045F1F0: bne         $s0, $zero, L_0045F244
    if (ctx->r16 != 0) {
        // 0x0045F1F4: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_0045F244;
    }
    // 0x0045F1F4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0045F1F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0045F1FC: addiu       $a0, $a0, 0xC80
    ctx->r4 = ADD32(ctx->r4, 0XC80);
    // 0x0045F200: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045F204: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x0045F208: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0045F20C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0045F210: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0045F214: jal         0x00428C10
    // 0x0045F218: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    entry_00428C10(rdram, ctx);
        goto after_5;
    // 0x0045F218: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    after_5:
    // 0x0045F21C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0045F220: beq         $s0, $zero, L_0045F234
    if (ctx->r16 == 0) {
        // 0x0045F224: nop
    
            goto L_0045F234;
    }
    // 0x0045F224: nop

    // 0x0045F228: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0045F22C: bne         $s0, $zero, L_0045F244
    if (ctx->r16 != 0) {
        // 0x0045F230: nop
    
            goto L_0045F244;
    }
    // 0x0045F230: nop

L_0045F234:
    // 0x0045F234: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0045F238: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0045F23C: jal         0x0029E460
    // 0x0045F240: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0029E460(rdram, ctx);
        goto after_6;
    // 0x0045F240: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_0045F244:
    // 0x0045F244: jal         0x002858A4
    // 0x0045F248: nop

    func_002858A4(rdram, ctx);
        goto after_7;
    // 0x0045F248: nop

    after_7:
    // 0x0045F24C: jal         0x002053A8
    // 0x0045F250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_8;
    // 0x0045F250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x0045F254: beq         $s1, $zero, L_0045F264
    if (ctx->r17 == 0) {
        // 0x0045F258: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0045F264;
    }
    // 0x0045F258: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F25C: jal         0x002052D8
    // 0x0045F260: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x0045F260: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
L_0045F264:
    // 0x0045F264: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0045F268:
    // 0x0045F268: bne         $v0, $zero, L_0045F28C
    if (ctx->r2 != 0) {
        // 0x0045F26C: nop
    
            goto L_0045F28C;
    }
    // 0x0045F26C: nop

    // 0x0045F270: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0045F274: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x0045F278: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0045F27C: jal         0x00266C80
    // 0x0045F280: nop

    func_00266C80(rdram, ctx);
        goto after_10;
    // 0x0045F280: nop

    after_10:
    // 0x0045F284: beq         $v0, $zero, L_0045F2AC
    if (ctx->r2 == 0) {
        // 0x0045F288: nop
    
            goto L_0045F2AC;
    }
    // 0x0045F288: nop

L_0045F28C:
    // 0x0045F28C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0045F290: jal         0x00425F84
    // 0x0045F294: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_00425F84(rdram, ctx);
        goto after_11;
    // 0x0045F294: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_11:
    // 0x0045F298: bne         $v0, $zero, L_0045F2AC
    if (ctx->r2 != 0) {
        // 0x0045F29C: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_0045F2AC;
    }
    // 0x0045F29C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0045F2A0: slti        $v0, $s5, 0x4
    ctx->r2 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x0045F2A4: bne         $v0, $zero, L_0045F144
    if (ctx->r2 != 0) {
        // 0x0045F2A8: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_0045F144;
    }
    // 0x0045F2A8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_0045F2AC:
    // 0x0045F2AC: jal         0x002053A8
    // 0x0045F2B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_12;
    // 0x0045F2B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x0045F2B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0045F2B8: beq         $t0, $zero, L_0045F2C8
    if (ctx->r8 == 0) {
        // 0x0045F2BC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0045F2C8;
    }
    // 0x0045F2BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045F2C0: jal         0x002052D8
    // 0x0045F2C4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x0045F2C4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    after_13:
L_0045F2C8:
    // 0x0045F2C8: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x0045F2CC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0045F2D0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0045F2D4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0045F2D8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0045F2DC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0045F2E0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0045F2E4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0045F2E8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0045F2EC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0045F2F0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0045F2F4: jr          $ra
    // 0x0045F2F8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0045F2F8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0041C158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C15C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C168: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0041C16C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C170: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041C174: beql        $v0, $zero, L_0041C18C
    if (ctx->r2 == 0) {
        // 0x0041C178: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C18C;
    }
    goto skip_0;
    // 0x0041C178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041C17C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C180: bnel        $v0, $zero, L_0041C188
    if (ctx->r2 != 0) {
        // 0x0041C184: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C188;
    }
    goto skip_1;
    // 0x0041C184: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C188:
    // 0x0041C188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041C18C:
    // 0x0041C18C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041C190: lbu         $a1, 0x2E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E);
    // 0x0041C194: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C198: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C19C: jal         0x0041648C
    // 0x0041C1A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C1A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041C1A4: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x0041C1A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C1AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C1B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C1B4: jr          $ra
    // 0x0041C1B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C1B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045F650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F650: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F654: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0045F658: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F65C: bne         $v0, $zero, L_0045F6AC
    if (ctx->r2 != 0) {
        // 0x0045F660: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0045F6AC;
    }
    // 0x0045F660: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0045F664: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045F668: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x0045F66C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045F670: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
L_0045F674:
    // 0x0045F674: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045F678: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0045F67C: sll         $v1, $a2, 5
    ctx->r3 = S32(ctx->r6 << 5);
    // 0x0045F680: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0045F684: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045F688: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0045F68C: bne         $v0, $zero, L_0045F6A0
    if (ctx->r2 != 0) {
        // 0x0045F690: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0045F6A0;
    }
    // 0x0045F690: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0045F694: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0045F698: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0045F69C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0045F6A0:
    // 0x0045F6A0: slti        $v0, $a2, 0x10
    ctx->r2 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x0045F6A4: bne         $v0, $zero, L_0045F674
    if (ctx->r2 != 0) {
        // 0x0045F6A8: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0045F674;
    }
    // 0x0045F6A8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_0045F6AC:
    // 0x0045F6AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F6B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F6B4: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F6B8: jr          $ra
    // 0x0045F6BC: nop

    return;
    // 0x0045F6BC: nop

;}
RECOMP_FUNC void func_00412F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412F88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00412F8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412F90: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00412F94: addiu       $v0, $v0, 0x7078
    ctx->r2 = ADD32(ctx->r2, 0X7078);
    // 0x00412F98: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00412F9C: lw          $a0, 0x60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X60);
    // 0x00412FA0: lw          $a1, 0x24($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24);
    // 0x00412FA4: jal         0x0020185C
    // 0x00412FA8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00412FA8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00412FAC: beq         $v0, $zero, L_00412FE8
    if (ctx->r2 == 0) {
        // 0x00412FB0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412FE8;
    }
    // 0x00412FB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412FB4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00412FB8: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x00412FBC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00412FC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412FC4: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x00412FC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00412FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00412FD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00412FD4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00412FD8: jal         0x0020367C
    // 0x00412FDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x00412FDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x00412FE0: j           L_00412FEC
    // 0x00412FE4: nop

        goto L_00412FEC;
    // 0x00412FE4: nop

L_00412FE8:
    // 0x00412FE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00412FEC:
    // 0x00412FEC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412FF0: jr          $ra
    // 0x00412FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00412FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041B188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B188: jr          $ra
    // 0x0041B18C: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    return;
    // 0x0041B18C: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
;}
RECOMP_FUNC void func_00225D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225D0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00225D10: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00225D14: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00225D18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00225D1C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00225D20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225D24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00225D28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225D2C: lw          $s2, 0xE8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0XE8);
    // 0x00225D30: blez        $s2, L_00225D74
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00225D34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00225D74;
    }
    // 0x00225D34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00225D38: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00225D3C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00225D40:
    // 0x00225D40: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x00225D44: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x00225D48: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00225D4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00225D50: bnel        $v0, $s4, L_00225D68
    if (ctx->r2 != ctx->r20) {
        // 0x00225D54: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00225D68;
    }
    goto skip_0;
    // 0x00225D54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00225D58: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00225D5C: jal         0x00220260
    // 0x00225D60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x00225D60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00225D64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00225D68:
    // 0x00225D68: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00225D6C: bne         $v0, $zero, L_00225D40
    if (ctx->r2 != 0) {
        // 0x00225D70: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_00225D40;
    }
    // 0x00225D70: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
L_00225D74:
    // 0x00225D74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00225D78: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00225D7C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225D80: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225D84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225D88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225D8C: jr          $ra
    // 0x00225D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00225D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004172B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004172B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004172B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004172B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004172BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004172C0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x004172C4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x004172C8: beq         $v0, $zero, L_004172D8
    if (ctx->r2 == 0) {
        // 0x004172CC: nop
    
            goto L_004172D8;
    }
    // 0x004172CC: nop

    // 0x004172D0: jalr        $v0
    // 0x004172D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004172D4: nop

    after_0:
L_004172D8:
    // 0x004172D8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004172DC: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x004172E0: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x004172E4: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    // 0x004172E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004172EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004172F0: jr          $ra
    // 0x004172F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004172F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020F79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F79C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F7A0: lwc1        $f1, 0x55E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55E4);
    // 0x0020F7A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020F7A8: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F7AC: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F7B0: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F7B4: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F7B8: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7BC: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7C0: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7C4: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7C8: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7CC: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7D0: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7D4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7D8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7DC: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7E0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020F7E4: jr          $ra
    // 0x0020F7E8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020F7E8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00264518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026451C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00264520: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00264524: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x00264528: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026452C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00264530: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x00264534: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00264538: jal         0x0026E110
    // 0x0026453C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    func_0026E110(rdram, ctx);
        goto after_0;
    // 0x0026453C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x00264540: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00264544: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00264548: bne         $v0, $zero, L_00264560
    if (ctx->r2 != 0) {
        // 0x0026454C: lui         $v1, 0xF7FF
        ctx->r3 = S32(0XF7FF << 16);
            goto L_00264560;
    }
    // 0x0026454C: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x00264550: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00264554: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00264558: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026455C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00264560:
    // 0x00264560: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00264564: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00264568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026456C: jr          $ra
    // 0x00264570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00264570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
