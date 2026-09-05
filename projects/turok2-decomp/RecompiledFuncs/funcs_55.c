#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0041B8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B8EC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B8F0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B8F4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B8F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B8FC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B900: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B904: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B908: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0041B90C: beq         $v0, $zero, L_0041B924
    if (ctx->r2 == 0) {
        // 0x0041B910: nop
    
            goto L_0041B924;
    }
    // 0x0041B910: nop

    // 0x0041B914: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B918: addiu       $v0, $v0, 0x5A84
    ctx->r2 = ADD32(ctx->r2, 0X5A84);
    // 0x0041B91C: j           L_0041B930
    // 0x0041B920: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B930;
    // 0x0041B920: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B924:
    // 0x0041B924: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B928: addiu       $v0, $v0, 0x5AA0
    ctx->r2 = ADD32(ctx->r2, 0X5AA0);
    // 0x0041B92C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B930:
    // 0x0041B930: jr          $ra
    // 0x0041B934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040D0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D0F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040D0F4: lwc1        $f12, 0x8E0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8E0);
    // 0x0040D0F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040D0FC: lwc1        $f14, 0x8E4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8E4);
    // 0x0040D100: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x0040D104: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0040D108: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x0040D10C: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x0040D110: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0040D114: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0040D118: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0040D11C: sdc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X98, ctx->r29);
    // 0x0040D120: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
    // 0x0040D124: jal         0x002119FC
    // 0x0040D128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0040D128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0040D12C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040D130: lwc1        $f12, 0x8E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8E8);
    // 0x0040D134: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040D138: lwc1        $f14, 0x8EC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8EC);
    // 0x0040D13C: jal         0x002119FC
    // 0x0040D140: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0040D140: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x0040D144: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x0040D148: addiu       $s3, $s0, 0x504
    ctx->r19 = ADD32(ctx->r16, 0X504);
    // 0x0040D14C: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x0040D150: lw          $v1, 0x508($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X508);
    // 0x0040D154: lw          $s4, 0x4F0($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X4F0);
    // 0x0040D158: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x0040D15C: beq         $s1, $zero, L_0040D170
    if (ctx->r17 == 0) {
        // 0x0040D160: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_0040D170;
    }
    // 0x0040D160: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0040D164: lw          $v0, 0x500($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X500);
    // 0x0040D168: beq         $v0, $zero, L_0040D2AC
    if (ctx->r2 == 0) {
        // 0x0040D16C: nop
    
            goto L_0040D2AC;
    }
    // 0x0040D16C: nop

L_0040D170:
    // 0x0040D170: beq         $s3, $zero, L_0040D190
    if (ctx->r19 == 0) {
        // 0x0040D174: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0040D190;
    }
    // 0x0040D174: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040D178: beq         $v1, $v0, L_0040D190
    if (ctx->r3 == ctx->r2) {
        // 0x0040D17C: nop
    
            goto L_0040D190;
    }
    // 0x0040D17C: nop

    // 0x0040D180: lw          $v0, 0x504($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X504);
    // 0x0040D184: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040D188: beq         $v0, $zero, L_0040D2A0
    if (ctx->r2 == 0) {
        // 0x0040D18C: nop
    
            goto L_0040D2A0;
    }
    // 0x0040D18C: nop

L_0040D190:
    // 0x0040D190: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040D194: lwc1        $f0, 0x8F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8F0);
    // 0x0040D198: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0040D19C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x0040D1A0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0040D1A4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0040D1A8: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0040D1AC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0040D1B0: jal         0x002982F0
    // 0x0040D1B4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0040D1B4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x0040D1B8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0040D1BC: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0040D1C0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040D1C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0040D1C8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x0040D1CC: jal         0x002974C0
    // 0x0040D1D0: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0040D1D0: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_3:
    // 0x0040D1D4: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0040D1D8: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0040D1DC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040D1E0: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x0040D1E4: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040D1E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040D1EC: addiu       $v0, $sp, 0x70
    ctx->r2 = ADD32(ctx->r29, 0X70);
    // 0x0040D1F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0040D1F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0040D1F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0040D1FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0040D200: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x0040D204: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x0040D208: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x0040D20C: jal         0x002688C8
    // 0x0040D210: nop

    func_002688C8(rdram, ctx);
        goto after_4;
    // 0x0040D210: nop

    after_4:
    // 0x0040D214: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040D218: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x0040D21C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0040D220: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x0040D224: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x0040D228: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x0040D22C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040D230: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0040D234: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0040D238: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0040D23C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0040D240: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0040D244: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0040D248: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x0040D24C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0040D250: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0040D254: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0040D258: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0040D25C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0040D260: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0040D264: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0040D268: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x0040D26C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0040D270: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0040D274: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0040D278: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0040D27C: jal         0x00228108
    // 0x0040D280: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    func_00228108(rdram, ctx);
        goto after_5;
    // 0x0040D280: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    after_5:
    // 0x0040D284: beq         $v0, $zero, L_0040D2A0
    if (ctx->r2 == 0) {
        // 0x0040D288: nop
    
            goto L_0040D2A0;
    }
    // 0x0040D288: nop

    // 0x0040D28C: beq         $s1, $zero, L_0040D2A0
    if (ctx->r17 == 0) {
        // 0x0040D290: nop
    
            goto L_0040D2A0;
    }
    // 0x0040D290: nop

    // 0x0040D294: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0040D298: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040D29C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0040D2A0:
    // 0x0040D2A0: lw          $v0, 0x500($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X500);
    // 0x0040D2A4: bne         $v0, $zero, L_0040D380
    if (ctx->r2 != 0) {
        // 0x0040D2A8: nop
    
            goto L_0040D380;
    }
    // 0x0040D2A8: nop

L_0040D2AC:
    // 0x0040D2AC: lw          $v0, 0x504($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X504);
    // 0x0040D2B0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x0040D2B4: beq         $v0, $zero, L_0040D380
    if (ctx->r2 == 0) {
        // 0x0040D2B8: nop
    
            goto L_0040D380;
    }
    // 0x0040D2B8: nop

    // 0x0040D2BC: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x0040D2C0: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040D2C4: sw          $v1, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r3;
    // 0x0040D2C8: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0040D2CC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040D2D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D2D4: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0040D2D8: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x0040D2DC: blez        $v0, L_0040D304
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D2E0: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_0040D304;
    }
    // 0x0040D2E0: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x0040D2E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D2E8:
    // 0x0040D2E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040D2EC: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D2F0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040D2F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D2F8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D2FC: bne         $v0, $zero, L_0040D2E8
    if (ctx->r2 != 0) {
        // 0x0040D300: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D2E8;
    }
    // 0x0040D300: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D304:
    // 0x0040D304: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040D308: blez        $v0, L_0040D330
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D30C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D330;
    }
    // 0x0040D30C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D314:
    // 0x0040D314: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0040D318: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D31C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040D320: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D324: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D328: bne         $v0, $zero, L_0040D314
    if (ctx->r2 != 0) {
        // 0x0040D32C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D314;
    }
    // 0x0040D32C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D330:
    // 0x0040D330: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040D334: blez        $v0, L_0040D35C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D338: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D35C;
    }
    // 0x0040D338: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D33C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D340:
    // 0x0040D340: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0040D344: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D348: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040D34C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D350: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D354: bne         $v0, $zero, L_0040D340
    if (ctx->r2 != 0) {
        // 0x0040D358: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D340;
    }
    // 0x0040D358: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D35C:
    // 0x0040D35C: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040D360: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x0040D364: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040D368: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040D36C: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040D370: beq         $v0, $zero, L_0040D380
    if (ctx->r2 == 0) {
        // 0x0040D374: nop
    
            goto L_0040D380;
    }
    // 0x0040D374: nop

    // 0x0040D378: jalr        $v0
    // 0x0040D37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0040D37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_0040D380:
    // 0x0040D380: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x0040D384: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x0040D388: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0040D38C: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0040D390: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0040D394: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0040D398: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x0040D39C: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x0040D3A0: jr          $ra
    // 0x0040D3A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x0040D3A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00210B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210B38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00210B3C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00210B40: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00210B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00210B48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00210B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00210B50: jal         0x002982F0
    // 0x00210B54: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00210B54: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00210B58: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00210B5C: jal         0x002974C0
    // 0x00210B60: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00210B60: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x00210B64: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00210B68: mul.s       $f15, $f16, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f15.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210B6C: lwc1        $f11, 0x4($s0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00210B70: neg.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = -ctx->f20.fl;
    // 0x00210B74: mul.s       $f11, $f11, $f2
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f2.fl);
    // 0x00210B78: nop

    // 0x00210B7C: mul.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210B80: lwc1        $f9, 0x4($s0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00210B84: mul.s       $f9, $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f0.fl);
    // 0x00210B88: lwc1        $f7, 0x14($s0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x00210B8C: mul.s       $f7, $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f2.fl);
    // 0x00210B90: lwc1        $f5, 0x14($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x00210B94: mul.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00210B98: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00210B9C: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x00210BA0: lwc1        $f3, 0x24($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x00210BA4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00210BA8: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x00210BAC: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00210BB0: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00210BB4: mul.s       $f13, $f16, $f0
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f13.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210BB8: nop

    // 0x00210BBC: mul.s       $f12, $f16, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210BC0: lwc1        $f2, 0x34($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X34);
    // 0x00210BC4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00210BC8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00210BCC: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210BD0: nop

    // 0x00210BD4: mul.s       $f8, $f16, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210BD8: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x00210BDC: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x00210BE0: nop

    // 0x00210BE4: mul.s       $f20, $f16, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x00210BE8: add.s       $f15, $f15, $f11
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f11.fl;
    // 0x00210BEC: add.s       $f14, $f14, $f9
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f9.fl;
    // 0x00210BF0: add.s       $f13, $f13, $f7
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = ctx->f13.fl + ctx->f7.fl;
    // 0x00210BF4: add.s       $f12, $f12, $f5
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f5.fl;
    // 0x00210BF8: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x00210BFC: add.s       $f8, $f8, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f3.fl;
    // 0x00210C00: swc1        $f15, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(15 - 1) * 2];
    // 0x00210C04: swc1        $f14, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f14.u32l;
    // 0x00210C08: add.s       $f6, $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f1.fl;
    // 0x00210C0C: swc1        $f13, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(13 - 1) * 2];
    // 0x00210C10: swc1        $f12, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f12.u32l;
    // 0x00210C14: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x00210C18: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x00210C1C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x00210C20: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x00210C24: swc1        $f20, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f20.u32l;
    // 0x00210C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210C30: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00210C34: jr          $ra
    // 0x00210C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00210C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021375C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021375C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00213760: lw          $v0, -0x551C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X551C);
    // 0x00213764: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00213768: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0021376C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00213770: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00213774: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00213778: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021377C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00213780: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00213784: sdc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X50, ctx->r29);
    // 0x00213788: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x0021378C: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x00213790: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00213794: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00213798: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021379C: bgez        $v0, L_002137B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002137A0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002137B0;
    }
    // 0x002137A0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002137A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002137A8: ldc1        $f0, 0x5798($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5798);
    // 0x002137AC: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_002137B0:
    // 0x002137B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002137B4: lwc1        $f2, 0x57A0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X57A0);
    // 0x002137B8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x002137BC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002137C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002137C4: lwc1        $f1, 0x57A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X57A4);
    // 0x002137C8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002137CC: nop

    // 0x002137D0: bc1t        L_002137FC
    if (c1cs) {
        // 0x002137D4: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002137FC;
    }
    // 0x002137D4: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    // 0x002137D8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002137DC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002137E0: bgezl       $v0, L_002137F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002137E4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002137F8;
    }
    goto skip_0;
    // 0x002137E4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x002137E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002137EC: ldc1        $f0, 0x57A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X57A8);
    // 0x002137F0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002137F4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002137F8:
    // 0x002137F8: mul.s       $f22, $f0, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
L_002137FC:
    // 0x002137FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00213800: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00213804: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x00213808: beq         $v0, $zero, L_00213874
    if (ctx->r2 == 0) {
        // 0x0021380C: nop
    
            goto L_00213874;
    }
    // 0x0021380C: nop

    // 0x00213810: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213814: blez        $v0, L_00213A44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00213818: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00213A44;
    }
    // 0x00213818: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021381C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00213820:
    // 0x00213820: jal         0x002017D4
    // 0x00213824: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00213824: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00213828: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021382C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00213830: blez        $a0, L_00213858
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00213834: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00213858;
    }
    // 0x00213834: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00213838: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0021383C:
    // 0x0021383C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x00213840: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x00213844: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x00213848: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0021384C: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00213850: bne         $v0, $zero, L_0021383C
    if (ctx->r2 != 0) {
        // 0x00213854: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0021383C;
    }
    // 0x00213854: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_00213858:
    // 0x00213858: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0021385C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213860: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213864: bnel        $v0, $zero, L_00213820
    if (ctx->r2 != 0) {
        // 0x00213868: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00213820;
    }
    goto skip_1;
    // 0x00213868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_1:
    // 0x0021386C: j           L_00213A44
    // 0x00213870: nop

        goto L_00213A44;
    // 0x00213870: nop

L_00213874:
    // 0x00213874: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213878: blez        $v0, L_00213A44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0021387C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00213A44;
    }
    // 0x0021387C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00213880: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00213884: lwc1        $f20, 0x57B0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X57B0);
    // 0x00213888: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021388C: lwc1        $f21, 0x57B4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X57B4);
    // 0x00213890: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00213894: lwc1        $f23, 0x57B8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X57B8);
    // 0x00213898: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0021389C:
    // 0x0021389C: jal         0x002017D4
    // 0x002138A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002138A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002138A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002138A8: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x002138AC: blez        $a3, L_00213A30
    if (SIGNED(ctx->r7) <= 0) {
        // 0x002138B0: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00213A30;
    }
    // 0x002138B0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002138B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002138B8: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x002138BC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x002138C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002138C4: addu        $a2, $v0, $s3
    ctx->r6 = ADD32(ctx->r2, ctx->r19);
L_002138C8:
    // 0x002138C8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x002138CC: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x002138D0: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x002138D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x002138D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x002138DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x002138E0: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x002138E4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x002138E8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002138EC: nop

    // 0x002138F0: bc1t        L_002138FC
    if (c1cs) {
        // 0x002138F4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002138FC;
    }
    // 0x002138F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002138F8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_002138FC:
    // 0x002138FC: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00213900: nop

    // 0x00213904: bc1fl       L_0021390C
    if (!c1cs) {
        // 0x00213908: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_0021390C;
    }
    goto skip_2;
    // 0x00213908: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    skip_2:
L_0021390C:
    // 0x0021390C: mul.s       $f2, $f22, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x00213910: sub.s       $f3, $f23, $f22
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f3.fl = ctx->f23.fl - ctx->f22.fl;
    // 0x00213914: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00213918: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0021391C: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00213920: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00213924: nop

    // 0x00213928: bc1t        L_00213934
    if (c1cs) {
        // 0x0021392C: swc1        $f4, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
            goto L_00213934;
    }
    // 0x0021392C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x00213930: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_00213934:
    // 0x00213934: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00213938: nop

    // 0x0021393C: bc1fl       L_00213944
    if (!c1cs) {
        // 0x00213940: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_00213944;
    }
    goto skip_3;
    // 0x00213940: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    skip_3:
L_00213944:
    // 0x00213944: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00213948: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0021394C: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00213950: c.le.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl <= ctx->f20.fl;
    // 0x00213954: nop

    // 0x00213958: bc1t        L_00213964
    if (c1cs) {
        // 0x0021395C: swc1        $f0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
            goto L_00213964;
    }
    // 0x0021395C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00213960: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
L_00213964:
    // 0x00213964: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00213968: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x0021396C: nop

    // 0x00213970: bc1fl       L_00213978
    if (!c1cs) {
        // 0x00213974: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_00213978;
    }
    goto skip_4;
    // 0x00213974: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    skip_4:
L_00213978:
    // 0x00213978: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021397C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00213980: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00213984: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x00213988: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0021398C: bnel        $v0, $zero, L_00213A24
    if (ctx->r2 != 0) {
        // 0x00213990: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00213A24;
    }
    goto skip_5;
    // 0x00213990: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_5:
    // 0x00213994: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00213998: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0021399C: slti        $v1, $v0, 0x100
    ctx->r3 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x002139A0: beql        $v1, $zero, L_002139BC
    if (ctx->r3 == 0) {
        // 0x002139A4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_002139BC;
    }
    goto skip_6;
    // 0x002139A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_6:
    // 0x002139A8: bltzl       $v0, L_002139BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x002139AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002139BC;
    }
    goto skip_7;
    // 0x002139AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_7:
    // 0x002139B0: bnel        $v1, $zero, L_002139C0
    if (ctx->r3 != 0) {
        // 0x002139B4: sb          $v0, 0xC($a0)
        MEM_B(0XC, ctx->r4) = ctx->r2;
            goto L_002139C0;
    }
    goto skip_8;
    // 0x002139B4: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    skip_8:
    // 0x002139B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_002139BC:
    // 0x002139BC: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_002139C0:
    // 0x002139C0: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x002139C4: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002139C8: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x002139CC: slti        $v1, $v0, 0x100
    ctx->r3 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x002139D0: beql        $v1, $zero, L_002139EC
    if (ctx->r3 == 0) {
        // 0x002139D4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_002139EC;
    }
    goto skip_9;
    // 0x002139D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_9:
    // 0x002139D8: bltzl       $v0, L_002139EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x002139DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002139EC;
    }
    goto skip_10;
    // 0x002139DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_10:
    // 0x002139E0: bnel        $v1, $zero, L_002139F0
    if (ctx->r3 != 0) {
        // 0x002139E4: sb          $v0, 0xD($a0)
        MEM_B(0XD, ctx->r4) = ctx->r2;
            goto L_002139F0;
    }
    goto skip_11;
    // 0x002139E4: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    skip_11:
    // 0x002139E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_002139EC:
    // 0x002139EC: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_002139F0:
    // 0x002139F0: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002139F4: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002139F8: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x002139FC: slti        $v1, $v0, 0x100
    ctx->r3 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x00213A00: beql        $v1, $zero, L_00213A1C
    if (ctx->r3 == 0) {
        // 0x00213A04: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00213A1C;
    }
    goto skip_12;
    // 0x00213A04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_12:
    // 0x00213A08: bltzl       $v0, L_00213A1C
    if (SIGNED(ctx->r2) < 0) {
        // 0x00213A0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00213A1C;
    }
    goto skip_13;
    // 0x00213A0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_13:
    // 0x00213A10: bnel        $v1, $zero, L_00213A20
    if (ctx->r3 != 0) {
        // 0x00213A14: sb          $v0, 0xE($a0)
        MEM_B(0XE, ctx->r4) = ctx->r2;
            goto L_00213A20;
    }
    goto skip_14;
    // 0x00213A14: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    skip_14:
    // 0x00213A18: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_00213A1C:
    // 0x00213A1C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
L_00213A20:
    // 0x00213A20: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00213A24:
    // 0x00213A24: slt         $v0, $a1, $a3
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00213A28: bne         $v0, $zero, L_002138C8
    if (ctx->r2 != 0) {
        // 0x00213A2C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_002138C8;
    }
    // 0x00213A2C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
L_00213A30:
    // 0x00213A30: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213A34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213A38: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213A3C: bnel        $v0, $zero, L_0021389C
    if (ctx->r2 != 0) {
        // 0x00213A40: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0021389C;
    }
    goto skip_15;
    // 0x00213A40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_15:
L_00213A44:
    // 0x00213A44: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00213A48: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00213A4C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00213A50: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00213A54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00213A58: ldc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X50);
    // 0x00213A5C: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x00213A60: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00213A64: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00213A68: jr          $ra
    // 0x00213A6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00213A6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00294534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0025B578:
    // 0x00294534: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00294538: j           L_0025B578
    // 0x0029453C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    entry_0025B578(rdram, ctx);
    return;
    // 0x0029453C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
;}
RECOMP_FUNC void func_00214844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214844: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00214848: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0021484C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00214850: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00214854: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00214858: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0021485C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x00214860: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00214864: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00214868: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0021486C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00214870: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00214874: lhu         $v0, 0x88($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X88);
    // 0x00214878: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0021487C: bne         $v0, $zero, L_00214B28
    if (ctx->r2 != 0) {
        // 0x00214880: nop
    
            goto L_00214B28;
    }
    // 0x00214880: nop

    // 0x00214884: lw          $v1, 0x14($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X14);
    // 0x00214888: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021488C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00214890: lb          $t1, 0xE($v1)
    ctx->r9 = MEM_B(ctx->r3, 0XE);
    // 0x00214894: beq         $v0, $zero, L_00214908
    if (ctx->r2 == 0) {
        // 0x00214898: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_00214908;
    }
    // 0x00214898: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0021489C: jal         0x00245724
    // 0x002148A0: nop

    func_00245724(rdram, ctx);
        goto after_0;
    // 0x002148A0: nop

    after_0:
    // 0x002148A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002148A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002148AC: beq         $v1, $v0, L_002148CC
    if (ctx->r3 == ctx->r2) {
        // 0x002148B0: nop
    
            goto L_002148CC;
    }
    // 0x002148B0: nop

    // 0x002148B4: blez        $v1, L_002148DC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x002148B8: slti        $v0, $v1, 0xA
        ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_002148DC;
    }
    // 0x002148B8: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x002148BC: beq         $v0, $zero, L_002148DC
    if (ctx->r2 == 0) {
        // 0x002148C0: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_002148DC;
    }
    // 0x002148C0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x002148C4: bne         $v0, $zero, L_002148DC
    if (ctx->r2 != 0) {
        // 0x002148C8: nop
    
            goto L_002148DC;
    }
    // 0x002148C8: nop

L_002148CC:
    // 0x002148CC: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x002148D0: lb          $v0, 0x12($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X12);
    // 0x002148D4: j           L_00214910
    // 0x002148D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_00214910;
    // 0x002148D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_002148DC:
    // 0x002148DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002148E0: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x002148E4: lw          $v0, 0x34($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X34);
    // 0x002148E8: beq         $v0, $zero, L_002148FC
    if (ctx->r2 == 0) {
        // 0x002148EC: nop
    
            goto L_002148FC;
    }
    // 0x002148EC: nop

    // 0x002148F0: lb          $v1, -0x1B0($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X1B0);
    // 0x002148F4: j           L_00214910
    // 0x002148F8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
        goto L_00214910;
    // 0x002148F8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_002148FC:
    // 0x002148FC: lb          $v1, -0x1B5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X1B5);
    // 0x00214900: j           L_00214910
    // 0x00214904: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
        goto L_00214910;
    // 0x00214904: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_00214908:
    // 0x00214908: lb          $v1, 0x12($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X12);
    // 0x0021490C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_00214910:
    // 0x00214910: jal         0x00214DBC
    // 0x00214914: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00214DBC(rdram, ctx);
        goto after_1;
    // 0x00214914: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_1:
    // 0x00214918: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x0021491C: beq         $fp, $zero, L_00214B28
    if (ctx->r30 == 0) {
        // 0x00214920: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00214B28;
    }
    // 0x00214920: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214924: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    // 0x00214928: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x0021492C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00214930: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x00214934: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00214938: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021493C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00214940: addiu       $v0, $v0, 0x4F14
    ctx->r2 = ADD32(ctx->r2, 0X4F14);
    // 0x00214944: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00214948: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021494C: addiu       $v0, $v0, 0x57F8
    ctx->r2 = ADD32(ctx->r2, 0X57F8);
    // 0x00214950: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x00214954: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00214958: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0021495C: lw          $a3, 0x24($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X24);
    // 0x00214960: jal         0x00203CA0
    // 0x00214964: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    func_00203CA0(rdram, ctx);
        goto after_2;
    // 0x00214964: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    after_2:
    // 0x00214968: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x0021496C: beq         $s7, $zero, L_00214B10
    if (ctx->r23 == 0) {
        // 0x00214970: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00214B10;
    }
    // 0x00214970: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214974: jal         0x0020565C
    // 0x00214978: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_0020565C(rdram, ctx);
        goto after_3;
    // 0x00214978: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_3:
    // 0x0021497C: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x00214980: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x00214984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00214988: bne         $v1, $v0, L_00214ADC
    if (ctx->r3 != ctx->r2) {
        // 0x0021498C: addu        $a0, $fp, $zero
        ctx->r4 = ADD32(ctx->r30, 0);
            goto L_00214ADC;
    }
    // 0x0021498C: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00214990: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x00214994: addu        $s6, $t0, $v0
    ctx->r22 = ADD32(ctx->r8, ctx->r2);
    // 0x00214998: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0021499C: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x002149A0: lbu         $a0, 0x8A($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X8A);
    // 0x002149A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002149A8: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x002149AC: beq         $a0, $v0, L_00214AB8
    if (ctx->r4 == ctx->r2) {
        // 0x002149B0: addu        $s5, $t0, $v1
        ctx->r21 = ADD32(ctx->r8, ctx->r3);
            goto L_00214AB8;
    }
    // 0x002149B0: addu        $s5, $t0, $v1
    ctx->r21 = ADD32(ctx->r8, ctx->r3);
    // 0x002149B4: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x002149B8: lw          $s2, 0x6D18($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X6D18);
    // 0x002149BC: andi        $v0, $s2, 0x1
    ctx->r2 = ctx->r18 & 0X1;
        turok2_patch_wave_every_update(rdram, ctx);

    // 0x002149C0: bne         $v0, $zero, L_00214AB8
    if (ctx->r2 != 0) {
        // 0x002149C4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00214AB8;
    }
    // 0x002149C4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002149C8: lw          $s3, 0x0($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X0);
    // 0x002149CC: blez        $s3, L_00214AB8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x002149D0: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00214AB8;
    }
    // 0x002149D0: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_002149D4:
    // 0x002149D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x002149D8: jal         0x002017D4
    // 0x002149DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x002149DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002149E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002149E4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002149E8: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x002149EC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002149F0: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x002149F4: beql        $a3, $t0, L_00214AAC
    if (ctx->r7 == ctx->r8) {
        // 0x002149F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00214AAC;
    }
    goto skip_0;
    // 0x002149F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x002149FC: addiu       $a1, $v1, 0x16
    ctx->r5 = ADD32(ctx->r3, 0X16);
L_00214A00:
    // 0x00214A00: lhu         $v1, -0x8($a1)
    ctx->r3 = MEM_HU(ctx->r5, -0X8);
    // 0x00214A04: andi        $v0, $v1, 0x70
    ctx->r2 = ctx->r3 & 0X70;
    // 0x00214A08: beq         $v0, $zero, L_00214A98
    if (ctx->r2 == 0) {
        // 0x00214A0C: srl         $v0, $v0, 2
        ctx->r2 = S32(U32(ctx->r2) >> 2);
            goto L_00214A98;
    }
    // 0x00214A0C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x00214A10: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
        turok2_patch_scale_wave_index(rdram, ctx);

    // 0x00214A14: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x00214A18: andi        $v1, $v1, 0xC
    ctx->r3 = ctx->r3 & 0XC;
    // 0x00214A1C: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x00214A20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00214A24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00214A28: lb          $a0, -0x350C($at)
    ctx->r4 = MEM_B(ctx->r1, -0X350C);
    // 0x00214A2C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x00214A30: addu        $a2, $s5, $v0
    ctx->r6 = ADD32(ctx->r21, ctx->r2);
    // 0x00214A34: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x00214A38: srav        $a0, $a0, $v1
    ctx->r4 = S32(SIGNED(ctx->r4) >> (ctx->r3 & 31));
    // 0x00214A3C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x00214A40: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00214A44: beql        $v0, $zero, L_00214A4C
    if (ctx->r2 == 0) {
        // 0x00214A48: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00214A4C;
    }
    goto skip_1;
    // 0x00214A48: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_1:
L_00214A4C:
    // 0x00214A4C: bltzl       $v1, L_00214A54
    if (SIGNED(ctx->r3) < 0) {
        // 0x00214A50: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00214A54;
    }
    goto skip_2;
    // 0x00214A50: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_2:
L_00214A54:
    // 0x00214A54: sb          $v1, -0x2($a1)
    MEM_B(-0X2, ctx->r5) = ctx->r3;
    // 0x00214A58: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x00214A5C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x00214A60: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00214A64: beql        $v0, $zero, L_00214A6C
    if (ctx->r2 == 0) {
        // 0x00214A68: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00214A6C;
    }
    goto skip_3;
    // 0x00214A68: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_3:
L_00214A6C:
    // 0x00214A6C: bltzl       $v1, L_00214A74
    if (SIGNED(ctx->r3) < 0) {
        // 0x00214A70: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00214A74;
    }
    goto skip_4;
    // 0x00214A70: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_4:
L_00214A74:
    // 0x00214A74: sb          $v1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r3;
    // 0x00214A78: lbu         $v0, 0x2($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X2);
    // 0x00214A7C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x00214A80: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00214A84: beql        $v0, $zero, L_00214A8C
    if (ctx->r2 == 0) {
        // 0x00214A88: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00214A8C;
    }
    goto skip_5;
    // 0x00214A88: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_5:
L_00214A8C:
    // 0x00214A8C: bltzl       $v1, L_00214A94
    if (SIGNED(ctx->r3) < 0) {
        // 0x00214A90: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00214A94;
    }
    goto skip_6;
    // 0x00214A90: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_6:
L_00214A94:
    // 0x00214A94: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_00214A98:
    // 0x00214A98: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00214A9C: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x00214AA0: bne         $a3, $t0, L_00214A00
    if (ctx->r7 != ctx->r8) {
        // 0x00214AA4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00214A00;
    }
    // 0x00214AA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00214AA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00214AAC:
    // 0x00214AAC: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00214AB0: bne         $v0, $zero, L_002149D4
    if (ctx->r2 != 0) {
        // 0x00214AB4: nop
    
            goto L_002149D4;
    }
    // 0x00214AB4: nop

L_00214AB8:
    // 0x00214AB8: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00214ABC: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
    // 0x00214AC0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x00214AC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00214AC8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00214ACC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00214AD0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00214AD4: j           L_00214AFC
    // 0x00214AD8: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
        goto L_00214AFC;
    // 0x00214AD8: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
L_00214ADC:
    // 0x00214ADC: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
    // 0x00214AE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00214AE4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x00214AE8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00214AEC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00214AF0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00214AF4: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x00214AF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00214AFC:
    // 0x00214AFC: jal         0x0020B6A0
    // 0x00214B00: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_0020B6A0(rdram, ctx);
        goto after_5;
    // 0x00214B00: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_5:
    // 0x00214B04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214B08: jal         0x002051F4
    // 0x00214B0C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_002051F4(rdram, ctx);
        goto after_6;
    // 0x00214B0C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_6:
L_00214B10:
    // 0x00214B10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214B14: jal         0x002051F4
    // 0x00214B18: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x00214B18: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_7:
    // 0x00214B1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214B20: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x00214B24: sb          $v0, 0x8A($s4)
    MEM_B(0X8A, ctx->r20) = ctx->r2;
L_00214B28:
    // 0x00214B28: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00214B2C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00214B30: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00214B34: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00214B38: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00214B3C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00214B40: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00214B44: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00214B48: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00214B4C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00214B50: jr          $ra
    // 0x00214B54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00214B54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00454460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454460: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454464: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454468: xori        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 ^ 0X40;
    // 0x0045446C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454470: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x00454474: jr          $ra
    // 0x00454478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040688C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040688C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00406890: sw          $s4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r20;
    // 0x00406894: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00406898: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x0040689C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x004068A0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004068A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004068A8: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x004068AC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004068B0: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x004068B4: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x004068B8: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x004068BC: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x004068C0: sdc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE8, ctx->r29);
    // 0x004068C4: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x004068C8: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x004068CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004068D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004068D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004068D8: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x004068DC: jal         0x00246108
    // 0x004068E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004068E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004068E4: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x004068E8: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x004068EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004068F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x004068F4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004068F8: beq         $v1, $zero, L_0040692C
    if (ctx->r3 == 0) {
        // 0x004068FC: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0040692C;
    }
    // 0x004068FC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00406900: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00406904: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00406908: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040690C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00406910: jal         0x00245BAC
    // 0x00406914: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00406914: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00406918: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0040691C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406920: swc1        $f0, -0x9D8($at)
    MEM_W(-0X9D8, ctx->r1) = ctx->f0.u32l;
    // 0x00406924: j           L_00406948
    // 0x00406928: nop

        goto L_00406948;
    // 0x00406928: nop

L_0040692C:
    // 0x0040692C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00406930: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00406934: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00406938: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x0040693C: lw          $a3, -0x9D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X9D8);
    // 0x00406940: jal         0x00245BAC
    // 0x00406944: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x00406944: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
L_00406948:
    // 0x00406948: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0040694C: beq         $s1, $zero, L_00406A1C
    if (ctx->r17 == 0) {
        // 0x00406950: nop
    
            goto L_00406A1C;
    }
    // 0x00406950: nop

    // 0x00406954: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00406958: addiu       $s2, $s2, -0x618
    ctx->r18 = ADD32(ctx->r18, -0X618);
    // 0x0040695C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00406960: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00406964: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x00406968: nop

    // 0x0040696C: bc1f        L_00406A1C
    if (!c1cs) {
        // 0x00406970: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_00406A1C;
    }
    // 0x00406970: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x00406974: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x00406978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040697C: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00406980: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x00406984: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00406988: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x0040698C: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00406990: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x00406994: jal         0x0020EF2C
    // 0x00406998: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00406998: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x0040699C: jal         0x0020EAA0
    // 0x004069A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_4;
    // 0x004069A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004069A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004069A8: jal         0x002685F0
    // 0x004069AC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002685F0(rdram, ctx);
        goto after_5;
    // 0x004069AC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_5:
    // 0x004069B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004069B4: lwc1        $f20, 0x4DC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4DC);
    // 0x004069B8: beq         $v0, $zero, L_004069C8
    if (ctx->r2 == 0) {
        // 0x004069BC: nop
    
            goto L_004069C8;
    }
    // 0x004069BC: nop

    // 0x004069C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004069C4: lwc1        $f20, 0x4E0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4E0);
L_004069C8:
    // 0x004069C8: jal         0x002982F0
    // 0x004069CC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x004069CC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
    // 0x004069D0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x004069D4: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x004069D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004069DC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x004069E0: jal         0x002974C0
    // 0x004069E4: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x004069E4: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_7:
    // 0x004069E8: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x004069EC: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x004069F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004069F4: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x004069F8: lwc1        $f1, -0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X4);
    // 0x004069FC: c.lt.s      $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f22.fl < ctx->f1.fl;
    // 0x00406A00: nop

    // 0x00406A04: bc1f        L_00406A1C
    if (!c1cs) {
        // 0x00406A08: nop
    
            goto L_00406A1C;
    }
    // 0x00406A08: nop

    // 0x00406A0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00406A10: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00406A14: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00406A18: swc1        $f0, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f0.u32l;
L_00406A1C:
    // 0x00406A1C: lb          $v0, 0xC7($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC7);
    // 0x00406A20: beq         $v0, $zero, L_00406A7C
    if (ctx->r2 == 0) {
        // 0x00406A24: nop
    
            goto L_00406A7C;
    }
    // 0x00406A24: nop

    // 0x00406A28: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406A2C: addiu       $v1, $v1, -0x61C
    ctx->r3 = ADD32(ctx->r3, -0X61C);
    // 0x00406A30: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00406A34: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00406A38: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00406A3C: nop

    // 0x00406A40: bc1f        L_00406A7C
    if (!c1cs) {
        // 0x00406A44: nop
    
            goto L_00406A7C;
    }
    // 0x00406A44: nop

    // 0x00406A48: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00406A4C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00406A50: nop

    // 0x00406A54: bc1f        L_00406A7C
    if (!c1cs) {
        // 0x00406A58: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00406A7C;
    }
    // 0x00406A58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00406A5C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00406A60: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00406A64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406A68: lwc1        $f0, 0x4E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4E4);
    // 0x00406A6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406A70: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x00406A74: jal         0x00243414
    // 0x00406A78: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x00406A78: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    after_8:
L_00406A7C:
    // 0x00406A7C: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406A80: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406A84: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x00406A88: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406A8C: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406A90: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406A94: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00406A98: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00406A9C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406AA0: jr          $ra
    // 0x00406AA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x00406AA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_0023C188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0023C18C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023C190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C194: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0023C198: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0023C19C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0023C1A0: jal         0x0022425C
    // 0x0023C1A4: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0023C1A4: nop

    after_0:
    // 0x0023C1A8: beq         $v0, $zero, L_0023C1C0
    if (ctx->r2 == 0) {
        // 0x0023C1AC: nop
    
            goto L_0023C1C0;
    }
    // 0x0023C1AC: nop

    // 0x0023C1B0: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x0023C1B4: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0023C1B8: bne         $v0, $zero, L_0023C1C8
    if (ctx->r2 != 0) {
        // 0x0023C1BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023C1C8;
    }
    // 0x0023C1BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C1C0:
    // 0x0023C1C0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0023C1C4: lb          $v0, 0x6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6);
L_0023C1C8:
    // 0x0023C1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0023C1CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023C1D0: jr          $ra
    // 0x0023C1D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0023C1D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029FCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029FCF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0029FCF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029FCFC: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x0029FD00: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0029FD04: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0029FD08: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0029FD0C: lhu         $s5, 0x4A($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0X4A);
    // 0x0029FD10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029FD14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029FD18: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029FD1C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0029FD20: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0029FD24: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0029FD28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029FD2C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0029FD30: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0029FD34: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029FD38: blez        $s1, L_0029FDA4
    if (SIGNED(ctx->r17) <= 0) {
        // 0x0029FD3C: addu        $s4, $s2, $zero
        ctx->r20 = ADD32(ctx->r18, 0);
            goto L_0029FDA4;
    }
    // 0x0029FD3C: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x0029FD40: lw          $v0, 0x30($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X30);
    // 0x0029FD44: lw          $a0, 0x44($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X44);
    // 0x0029FD48: lw          $a2, 0x34($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X34);
    // 0x0029FD4C: jalr        $v0
    // 0x0029FD50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0029FD50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0029FD54: andi        $a3, $v0, 0x7
    ctx->r7 = ctx->r2 & 0X7;
    // 0x0029FD58: addu        $s1, $s1, $a3
    ctx->r17 = ADD32(ctx->r17, ctx->r7);
    // 0x0029FD5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029FD60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FD64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0029FD68: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FD6C: andi        $v1, $s2, 0xFFFF
    ctx->r3 = ctx->r18 & 0XFFFF;
    // 0x0029FD70: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x0029FD74: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0029FD78: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0029FD7C: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x0029FD80: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x0029FD84: subu        $v1, $s1, $v1
    ctx->r3 = SUB32(ctx->r17, ctx->r3);
    // 0x0029FD88: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x0029FD8C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x0029FD90: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0029FD94: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x0029FD98: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0029FD9C: j           L_0029FDA8
    // 0x0029FDA0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_0029FDA8;
    // 0x0029FDA0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0029FDA4:
    // 0x0029FDA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_0029FDA8:
    // 0x0029FDA8: andi        $v0, $s6, 0x2
    ctx->r2 = ctx->r22 & 0X2;
    // 0x0029FDAC: beq         $v0, $zero, L_0029FDD4
    if (ctx->r2 == 0) {
        // 0x0029FDB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0029FDD4;
    }
    // 0x0029FDB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029FDB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FDB8: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
    // 0x0029FDBC: lui         $v0, 0xF00
    ctx->r2 = S32(0XF00 << 16);
    // 0x0029FDC0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029FDC4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x0029FDC8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029FDCC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029FDD0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0029FDD4:
    // 0x0029FDD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029FDD8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029FDDC: lui         $a1, 0x1FFF
    ctx->r5 = S32(0X1FFF << 16);
    // 0x0029FDE0: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x0029FDE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029FDE8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x0029FDEC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029FDF0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0029FDF4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029FDF8: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x0029FDFC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029FE00: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x0029FE04: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029FE08: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029FE0C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0029FE10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029FE14: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x0029FE18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0029FE1C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0029FE20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029FE24: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029FE28: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x0029FE2C: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x0029FE30: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x0029FE34: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0029FE38: sw          $zero, 0x40($s3)
    MEM_W(0X40, ctx->r19) = 0;
    // 0x0029FE3C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0029FE40: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0029FE44: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0029FE48: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0029FE4C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029FE50: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029FE54: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029FE58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029FE5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029FE60: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0029FE64: jr          $ra
    // 0x0029FE68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0029FE68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029BC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BC24: beq         $a0, $v0, L_0029BD5C
    if (ctx->r4 == ctx->r2) {
        // 0x0029BC28: slti        $v0, $a0, 0x5F4
        ctx->r2 = SIGNED(ctx->r4) < 0X5F4 ? 1 : 0;
            goto L_0029BD5C;
    }
    // 0x0029BC28: slti        $v0, $a0, 0x5F4
    ctx->r2 = SIGNED(ctx->r4) < 0X5F4 ? 1 : 0;
    // 0x0029BC2C: beq         $v0, $zero, L_0029BC88
    if (ctx->r2 == 0) {
        // 0x0029BC30: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_0029BC88;
    }
    // 0x0029BC30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029BC34: beq         $v0, $zero, L_0029BC5C
    if (ctx->r2 == 0) {
        // 0x0029BC38: nop
    
            goto L_0029BC5C;
    }
    // 0x0029BC38: nop

L_0029BC3C:
    // 0x0029BC3C: bnel        $v0, $a1, L_0029BC50
    if (ctx->r2 != ctx->r5) {
        // 0x0029BC40: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029BC50;
    }
    goto skip_0;
    // 0x0029BC40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    skip_0:
    // 0x0029BC44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029BC48: jr          $ra
    // 0x0029BC4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x0029BC4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0029BC50:
    // 0x0029BC50: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029BC54: bne         $v0, $zero, L_0029BC3C
    if (ctx->r2 != 0) {
        // 0x0029BC58: nop
    
            goto L_0029BC3C;
    }
    // 0x0029BC58: nop

L_0029BC5C:
    // 0x0029BC5C: jr          $ra
    // 0x0029BC60: nop

    return;
    // 0x0029BC60: nop

    // 0x0029BC64: addiu       $v0, $zero, 0x5F0
    ctx->r2 = ADD32(0, 0X5F0);
    // 0x0029BC68: beq         $a0, $v0, L_0029BD3C
    if (ctx->r4 == ctx->r2) {
        // 0x0029BC6C: slt         $v0, $a0, $v0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_0029BD3C;
    }
    // 0x0029BC6C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029BC70: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029BC74: lw          $v1, -0x76D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X76D0);
    // 0x0029BC78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029BC7C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0029BC80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029BC84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_0029BC88:
    // 0x0029BC88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029BC8C: beq         $v0, $v1, L_0029BDA4
    if (ctx->r2 == ctx->r3) {
        // 0x0029BC90: nop
    
            goto L_0029BDA4;
    }
    // 0x0029BC90: nop

    // 0x0029BC94: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0029BC98: addiu       $s1, $s1, 0x2A30
    ctx->r17 = ADD32(ctx->r17, 0X2A30);
L_0029BC9C:
    // 0x0029BC9C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029BCA0: lw          $v0, -0x76D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76D0);
    // 0x0029BCA4: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0029BCA8: bne         $s0, $v0, L_0029BCC8
    if (ctx->r16 != ctx->r2) {
        // 0x0029BCAC: nop
    
            goto L_0029BCC8;
    }
    // 0x0029BCAC: nop

    // 0x0029BCB0: jal         0x0029E210
    // 0x0029BCB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029E210(rdram, ctx);
        goto after_0;
    // 0x0029BCB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0029BCB8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BCBC: sw          $zero, 0x2A30($at)
    MEM_W(0X2A30, ctx->r1) = 0;
    // 0x0029BCC0: j           L_0029BDA4
    // 0x0029BCC4: nop

        goto L_0029BDA4;
    // 0x0029BCC4: nop

L_0029BCC8:
    // 0x0029BCC8: jal         0x0029DFC0
    // 0x0029BCCC: nop

    func_0029DFC0(rdram, ctx);
        goto after_1;
    // 0x0029BCCC: nop

    after_1:
    // 0x0029BCD0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0029BCD4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029BCD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0029BCDC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0029BCE0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0029BCE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0029BCE8: sltu        $v0, $a2, $v1
    ctx->r2 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x0029BCEC: bne         $v0, $zero, L_0029BD0C
    if (ctx->r2 != 0) {
        // 0x0029BCF0: nop
    
            goto L_0029BD0C;
    }
    // 0x0029BCF0: nop

    // 0x0029BCF4: bne         $v1, $a2, L_0029BD3C
    if (ctx->r3 != ctx->r6) {
        // 0x0029BCF8: nop
    
            goto L_0029BD3C;
    }
    // 0x0029BCF8: nop

    // 0x0029BCFC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0029BD00: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x0029BD04: beq         $v0, $zero, L_0029BD3C
    if (ctx->r2 == 0) {
        // 0x0029BD08: nop
    
            goto L_0029BD3C;
    }
    // 0x0029BD08: nop

L_0029BD0C:
    // 0x0029BD0C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0029BD10: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x0029BD14: sltu        $v0, $a1, $a3
    ctx->r2 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x0029BD18: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x0029BD1C: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x0029BD20: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0029BD24: sw          $a0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r4;
    // 0x0029BD28: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x0029BD2C: jal         0x0029BE0C
    // 0x0029BD30: nop

    func_0029BE0C(rdram, ctx);
        goto after_2;
    // 0x0029BD30: nop

    after_2:
    // 0x0029BD34: j           L_0029BDA4
    // 0x0029BD38: nop

        goto L_0029BDA4;
    // 0x0029BD38: nop

L_0029BD3C:
    // 0x0029BD3C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0029BD40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0029BD44: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029BD48: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0029BD4C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0029BD50: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0029BD54: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0029BD58: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0029BD5C:
    // 0x0029BD5C: beq         $a0, $zero, L_0029BD70
    if (ctx->r4 == 0) {
        // 0x0029BD60: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_0029BD70;
    }
    // 0x0029BD60: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0029BD64: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0029BD68: jal         0x0029B820
    // 0x0029BD6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0029BD6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_0029BD70:
    // 0x0029BD70: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029BD74: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0029BD78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029BD7C: beq         $v0, $zero, L_0029BC9C
    if (ctx->r2 == 0) {
        // 0x0029BD80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0029BC9C;
    }
    // 0x0029BD80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029BD84: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029BD88: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0029BD8C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x0029BD90: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x0029BD94: jal         0x0029BE6C
    // 0x0029BD98: nop

    func_0029BE6C(rdram, ctx);
        goto after_4;
    // 0x0029BD98: nop

    after_4:
    // 0x0029BD9C: j           L_0029BC9C
    // 0x0029BDA0: nop

        goto L_0029BC9C;
    // 0x0029BDA0: nop

L_0029BDA4:
    // 0x0029BDA4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029BDA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029BDAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029BDB0: jr          $ra
    // 0x0029BDB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029BDB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0021810C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021810C: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x00218110: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00218114: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00218118: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0021811C: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x00218120: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x00218124: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x00218128: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0021812C: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x00218130: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x00218134: jr          $ra
    // 0x00218138: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x00218138: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0040328C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040328C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403290: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00403294: addiu       $a1, $a1, -0xC60
    ctx->r5 = ADD32(ctx->r5, -0XC60);
    // 0x00403298: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040329C: lw          $v0, 0x214($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X214);
    // 0x004032A0: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x004032A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004032A8: beq         $v1, $v0, L_004032D8
    if (ctx->r3 == ctx->r2) {
        // 0x004032AC: nop
    
            goto L_004032D8;
    }
    // 0x004032AC: nop

    // 0x004032B0: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x004032B4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004032B8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x004032BC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004032C0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x004032C4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x004032C8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x004032CC: addiu       $a1, $a1, 0xC6C
    ctx->r5 = ADD32(ctx->r5, 0XC6C);
    // 0x004032D0: jal         0x00236314
    // 0x004032D4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x004032D4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
L_004032D8:
    // 0x004032D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004032DC: jr          $ra
    // 0x004032E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004032E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045C130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00423184:
    // 0x0045C130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045C134: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C138: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045C13C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045C140: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C144: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x0045C148: jal         0x00253640
    // 0x0045C14C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00253640(rdram, ctx);
        goto after_0;
    // 0x0045C14C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0045C150: beq         $v0, $zero, L_0045C16C
    if (ctx->r2 == 0) {
        // 0x0045C154: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_0045C16C;
    }
    // 0x0045C154: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0045C158: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0045C15C: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x0045C160: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0045C164: j           L_00423184
    // 0x0045C168: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
    entry_00423184(rdram, ctx);
    return;
    // 0x0045C168: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
L_0045C16C:
    // 0x0045C16C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0045C170: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0045C174: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0045C178: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0045C17C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0045C180: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x0045C184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045C188: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C18C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045C190: jr          $ra
    // 0x0045C194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045C194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00294650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00294654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294658: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0029465C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00294660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294664: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00294668: beq         $v0, $zero, L_002946B8
    if (ctx->r2 == 0) {
        // 0x0029466C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002946B8;
    }
    // 0x0029466C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294670: jal         0x00294B58
    // 0x00294674: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294674: nop

    after_0:
    // 0x00294678: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0029467C: beq         $a2, $zero, L_002946B8
    if (ctx->r6 == 0) {
        // 0x00294680: nop
    
            goto L_002946B8;
    }
    // 0x00294680: nop

    // 0x00294684: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00294688: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x0029468C: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x00294690: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00294694: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x00294698: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0029469C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002946A0: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x002946A4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002946A8: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x002946AC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002946B0: jalr        $v0
    // 0x002946B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x002946B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_002946B8:
    // 0x002946B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002946BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002946C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002946C4: jr          $ra
    // 0x002946C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002946C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020F0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F0C8: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020F0CC: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F0D0: sub.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F0D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020F0D8: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x0020F0DC: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x0020F0E0: nop

    // 0x0020F0E4: bc1fl       L_0020F108
    if (!c1cs) {
            // 0x0020F0E8: sub.s       $f2, $f4, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f1.fl;
    func_0020F108(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x0020F0E8: sub.s       $f2, $f4, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f1.fl;
    skip_0:
    // 0x0020F0EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0020F0F0: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0020F0F4: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x0020F0F8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020F0FC: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0020F100: jr          $ra
    // 0x0020F104: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    return;
    // 0x0020F104: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_00259EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259EE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259EEC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259EF0: lhu         $a3, 0x92($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X92);
    // 0x00259EF4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259EF8: addiu       $a2, $a2, -0x7F0
    ctx->r6 = ADD32(ctx->r6, -0X7F0);
    // 0x00259EFC: jal         0x00245A98
    // 0x00259F00: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259F00: nop

    after_0:
    // 0x00259F04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259F08: jr          $ra
    // 0x00259F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00275454: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275458: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027545C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00275460: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275464: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00275468: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0027546C: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x00275470: jal         0x0028F518
    // 0x00275474: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0028F518(rdram, ctx);
        goto after_0;
    // 0x00275474: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x00275478: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0027547C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x00275480: jal         0x00290E90
    // 0x00275484: nop

    func_00290E90(rdram, ctx);
        goto after_1;
    // 0x00275484: nop

    after_1:
    // 0x00275488: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0027548C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00275490: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00275494: jal         0x00290E10
    // 0x00275498: nop

    func_00290E10(rdram, ctx);
        goto after_2;
    // 0x00275498: nop

    after_2:
L_0027549C:
    // 0x0027549C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x002754A0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x002754A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002754A8: jal         0x00290E40
    // 0x002754AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00290E40(rdram, ctx);
        goto after_3;
    // 0x002754AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x002754B0: slti        $v0, $s0, 0x14
    ctx->r2 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x002754B4: bne         $v0, $zero, L_0027549C
    if (ctx->r2 != 0) {
        // 0x002754B8: nop
    
            goto L_0027549C;
    }
    // 0x002754B8: nop

    // 0x002754BC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002754C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002754C4: lwc1        $f1, -0x7DFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7DFC);
    // 0x002754C8: lwc1        $f0, 0x2BA4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BA4);
    // 0x002754CC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002754D0: lwc1        $f20, 0x24($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X24);
    // 0x002754D4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x002754D8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002754DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002754E0: lwc1        $f0, -0x7DF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7DF8);
    // 0x002754E4: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002754E8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x002754EC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002754F0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x002754F4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x002754F8: jal         0x00290EC0
    // 0x002754FC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_4;
    // 0x002754FC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_4:
    // 0x00275500: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
    // 0x00275504: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00275508: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027550C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275510: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00275514: jr          $ra
    // 0x00275518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00275518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00281278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281278: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028127C: lwc1        $f0, -0x6400($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6400);
    // 0x00281280: sw          $zero, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = 0;
    // 0x00281284: sw          $zero, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = 0;
    // 0x00281288: sw          $zero, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = 0;
    // 0x0028128C: sw          $zero, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = 0;
    // 0x00281290: sw          $zero, 0x100($a0)
    MEM_W(0X100, ctx->r4) = 0;
    // 0x00281294: sw          $zero, 0x10C($a0)
    MEM_W(0X10C, ctx->r4) = 0;
    // 0x00281298: swc1        $f0, 0x104($a0)
    MEM_W(0X104, ctx->r4) = ctx->f0.u32l;
    // 0x0028129C: jr          $ra
    // 0x002812A0: swc1        $f0, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x002812A0: swc1        $f0, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0040DC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DC38: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040DC3C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040DC40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040DC44: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040DC48: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040DC4C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040DC50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040DC54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040DC58: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040DC5C: jal         0x00246108
    // 0x0040DC60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040DC60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040DC64: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x0040DC68: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0040DC6C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040DC70: nop

    // 0x0040DC74: bc1f        L_0040DC88
    if (!c1cs) {
        // 0x0040DC78: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040DC88;
    }
    // 0x0040DC78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040DC7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040DC80: jal         0x00243414
    // 0x0040DC84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040DC84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
L_0040DC88:
    // 0x0040DC88: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040DC8C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040DC90: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040DC94: jr          $ra
    // 0x0040DC98: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040DC98: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_004194CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004194CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004194D0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004194D4: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004194D8: addiu       $a2, $a2, -0x7554
    ctx->r6 = ADD32(ctx->r6, -0X7554);
    // 0x004194DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004194E0: jal         0x00416894
    // 0x004194E4: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004194E4: nop

    after_0:
    // 0x004194E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004194EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004194F0: jr          $ra
    // 0x004194F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004194F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00221A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00221A24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00221A28: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00221A2C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00221A30: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00221A34: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00221A38: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00221A3C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00221A40: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00221A44: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00221A48: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00221A4C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00221A50: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00221A54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00221A58: lw          $a3, 0x14A8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X14A8);
    // 0x00221A5C: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x00221A60: lw          $fp, -0x5520($fp)
    ctx->r30 = MEM_W(ctx->r30, -0X5520);
    // 0x00221A64: addiu       $v0, $s3, 0x14AC
    ctx->r2 = ADD32(ctx->r19, 0X14AC);
    // 0x00221A68: blez        $a3, L_00221CF8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x00221A6C: sw          $a3, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r7;
            goto L_00221CF8;
    }
    // 0x00221A6C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x00221A70: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00221A74: addiu       $s2, $s2, 0x5A1C
    ctx->r18 = ADD32(ctx->r18, 0X5A1C);
    // 0x00221A78: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
L_00221A7C:
    // 0x00221A7C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00221A80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00221A84: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x00221A88: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00221A8C: jal         0x002017D4
    // 0x00221A90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00221A90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x00221A94: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x00221A98: blez        $s4, L_00221B8C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00221A9C: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00221B8C;
    }
    // 0x00221A9C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00221AA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00221AA4:
    // 0x00221AA4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00221AA8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00221AAC: and         $v0, $v0, $fp
    ctx->r2 = ctx->r2 & ctx->r30;
    // 0x00221AB0: beql        $v0, $zero, L_00221B80
    if (ctx->r2 == 0) {
        // 0x00221AB4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_0;
    // 0x00221AB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x00221AB8: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00221ABC: lwc1        $f0, 0x68($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X68);
    // 0x00221AC0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221AC4: nop

    // 0x00221AC8: bc1fl       L_00221B80
    if (!c1cs) {
        // 0x00221ACC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_1;
    // 0x00221ACC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00221AD0: lwc1        $f1, -0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0XC);
    // 0x00221AD4: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x00221AD8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221ADC: nop

    // 0x00221AE0: bc1fl       L_00221B80
    if (!c1cs) {
        // 0x00221AE4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_2;
    // 0x00221AE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x00221AE8: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00221AEC: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x00221AF0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221AF4: nop

    // 0x00221AF8: bc1fl       L_00221B80
    if (!c1cs) {
        // 0x00221AFC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_3;
    // 0x00221AFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x00221B00: lwc1        $f1, -0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X4);
    // 0x00221B04: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x00221B08: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221B0C: nop

    // 0x00221B10: bc1fl       L_00221B80
    if (!c1cs) {
        // 0x00221B14: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_4;
    // 0x00221B14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x00221B18: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00221B1C: lwc1        $f0, 0x6C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x00221B20: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221B24: nop

    // 0x00221B28: bc1fl       L_00221B80
    if (!c1cs) {
        // 0x00221B2C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_5;
    // 0x00221B2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x00221B30: lwc1        $f1, -0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X8);
    // 0x00221B34: lwc1        $f0, 0x78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
    // 0x00221B38: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221B3C: nop

    // 0x00221B40: bc1fl       L_00221B80
    if (!c1cs) {
        // 0x00221B44: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221B80;
    }
    goto skip_6;
    // 0x00221B44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x00221B48: jal         0x00214E88
    // 0x00221B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00214E88(rdram, ctx);
        goto after_1;
    // 0x00221B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00221B50: jal         0x00267090
    // 0x00221B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267090(rdram, ctx);
        goto after_2;
    // 0x00221B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00221B58: beq         $v0, $zero, L_00221B7C
    if (ctx->r2 == 0) {
        // 0x00221B5C: addiu       $a3, $zero, 0x200
        ctx->r7 = ADD32(0, 0X200);
            goto L_00221B7C;
    }
    // 0x00221B5C: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x00221B60: lw          $v1, 0x8EC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8EC);
    // 0x00221B64: beq         $v1, $a3, L_00221B7C
    if (ctx->r3 == ctx->r7) {
        // 0x00221B68: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00221B7C;
    }
    // 0x00221B68: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00221B6C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00221B70: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x00221B74: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00221B78: sw          $v0, 0x8EC($s3)
    MEM_W(0X8EC, ctx->r19) = ctx->r2;
L_00221B7C:
    // 0x00221B7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00221B80:
    // 0x00221B80: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00221B84: bne         $v0, $zero, L_00221AA4
    if (ctx->r2 != 0) {
        // 0x00221B88: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_00221AA4;
    }
    // 0x00221B88: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
L_00221B8C:
    // 0x00221B8C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00221B90: jal         0x002017D4
    // 0x00221B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00221B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x00221B98: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00221B9C: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x00221BA0: blez        $s4, L_00221CE4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00221BA4: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00221CE4;
    }
    // 0x00221BA4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00221BA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00221BAC:
    // 0x00221BAC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00221BB0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00221BB4: and         $v0, $v0, $fp
    ctx->r2 = ctx->r2 & ctx->r30;
    // 0x00221BB8: beql        $v0, $zero, L_00221CD8
    if (ctx->r2 == 0) {
        // 0x00221BBC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_7;
    // 0x00221BBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x00221BC0: lhu         $v0, 0x16C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16C);
    // 0x00221BC4: andi        $v0, $v0, 0x41
    ctx->r2 = ctx->r2 & 0X41;
    // 0x00221BC8: bnel        $v0, $zero, L_00221CD8
    if (ctx->r2 != 0) {
        // 0x00221BCC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_8;
    // 0x00221BCC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x00221BD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00221BD4: lw          $v0, -0x3524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3524);
    // 0x00221BD8: beq         $v0, $zero, L_00221C1C
    if (ctx->r2 == 0) {
        // 0x00221BDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00221C1C;
    }
    // 0x00221BDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00221BE0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00221BE4: jal         0x002671B4
    // 0x00221BE8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_4;
    // 0x00221BE8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x00221BEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00221BF0: lwc1        $f1, 0x5F7C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5F7C);
    // 0x00221BF4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00221BF8: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00221BFC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00221C00: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00221C04: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00221C08: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00221C0C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00221C10: addiu       $a2, $s0, 0x178
    ctx->r6 = ADD32(ctx->r16, 0X178);
    // 0x00221C14: jal         0x002254C0
    // 0x00221C18: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_002254C0(rdram, ctx);
        goto after_5;
    // 0x00221C18: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_5:
L_00221C1C:
    // 0x00221C1C: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00221C20: lwc1        $f0, 0x14C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x00221C24: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221C28: nop

    // 0x00221C2C: bc1fl       L_00221CD8
    if (!c1cs) {
        // 0x00221C30: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_9;
    // 0x00221C30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x00221C34: lwc1        $f1, -0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0XC);
    // 0x00221C38: lwc1        $f0, 0x158($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X158);
    // 0x00221C3C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221C40: nop

    // 0x00221C44: bc1fl       L_00221CD8
    if (!c1cs) {
        // 0x00221C48: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_10;
    // 0x00221C48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x00221C4C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00221C50: lwc1        $f0, 0x154($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X154);
    // 0x00221C54: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221C58: nop

    // 0x00221C5C: bc1fl       L_00221CD8
    if (!c1cs) {
        // 0x00221C60: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_11;
    // 0x00221C60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x00221C64: lwc1        $f1, -0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X4);
    // 0x00221C68: lwc1        $f0, 0x160($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X160);
    // 0x00221C6C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221C70: nop

    // 0x00221C74: bc1fl       L_00221CD8
    if (!c1cs) {
        // 0x00221C78: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_12;
    // 0x00221C78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x00221C7C: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00221C80: lwc1        $f0, 0x150($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X150);
    // 0x00221C84: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221C88: nop

    // 0x00221C8C: bc1fl       L_00221CD8
    if (!c1cs) {
        // 0x00221C90: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_13;
    // 0x00221C90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x00221C94: lwc1        $f1, -0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X8);
    // 0x00221C98: lwc1        $f0, 0x15C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x00221C9C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221CA0: nop

    // 0x00221CA4: bc1fl       L_00221CD8
    if (!c1cs) {
        // 0x00221CA8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00221CD8;
    }
    goto skip_14;
    // 0x00221CA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_14:
    // 0x00221CAC: jal         0x002156FC
    // 0x00221CB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002156FC(rdram, ctx);
        goto after_6;
    // 0x00221CB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00221CB4: lw          $v1, 0x8EC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8EC);
    // 0x00221CB8: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x00221CBC: beq         $v1, $a3, L_00221CD4
    if (ctx->r3 == ctx->r7) {
        // 0x00221CC0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00221CD4;
    }
    // 0x00221CC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00221CC4: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00221CC8: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x00221CCC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00221CD0: sw          $v0, 0x8EC($s3)
    MEM_W(0X8EC, ctx->r19) = ctx->r2;
L_00221CD4:
    // 0x00221CD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00221CD8:
    // 0x00221CD8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00221CDC: bne         $v0, $zero, L_00221BAC
    if (ctx->r2 != 0) {
        // 0x00221CE0: addiu       $s0, $s0, 0x198
        ctx->r16 = ADD32(ctx->r16, 0X198);
            goto L_00221BAC;
    }
    // 0x00221CE0: addiu       $s0, $s0, 0x198
    ctx->r16 = ADD32(ctx->r16, 0X198);
L_00221CE4:
    // 0x00221CE4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00221CE8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00221CEC: slt         $v0, $s6, $a3
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00221CF0: bne         $v0, $zero, L_00221A7C
    if (ctx->r2 != 0) {
        // 0x00221CF4: addiu       $s7, $s7, 0x8
        ctx->r23 = ADD32(ctx->r23, 0X8);
            goto L_00221A7C;
    }
    // 0x00221CF4: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
L_00221CF8:
    // 0x00221CF8: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00221CFC: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x00221D00: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x00221D04: jal         0x002279A4
    // 0x00221D08: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002279A4(rdram, ctx);
        goto after_7;
    // 0x00221D08: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00221D0C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00221D10: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x00221D14: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00221D18: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00221D1C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00221D20: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00221D24: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00221D28: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00221D2C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00221D30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00221D34: jr          $ra
    // 0x00221D38: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00221D38: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00426F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426F7C:
    // 0x00426F9C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00426FA0: bne         $v0, $zero, L_00426F7C
    if (ctx->r2 != 0) {
            // 0x00426FA4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    func_00426F7C(rdram, ctx);
    return;
    }
    // 0x00426FA4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426FA8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x00426FAC: jr          $ra
    // 0x00426FB0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00426FB0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00460D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427E70:
    // 0x00460D7C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00460D80: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x00460D84: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x00460D88: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00460D8C: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x00460D90: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00460D94: sw          $ra, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r31;
    // 0x00460D98: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x00460D9C: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x00460DA0: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x00460DA4: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x00460DA8: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x00460DAC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00460DB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00460DB4: bne         $v0, $zero, L_00460DC4
    if (ctx->r2 != 0) {
        // 0x00460DB8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00460DC4;
    }
    // 0x00460DB8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00460DBC: j           L_00427E70
    // 0x00460DC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    entry_00427E70(rdram, ctx);
    return;
    // 0x00460DC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00460DC4:
    // 0x00460DC4: jal         0x00429D1C
    // 0x00460DC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429D1C(rdram, ctx);
        goto after_0;
    // 0x00460DC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00460DCC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00460DD0: beq         $v0, $v1, L_00460E70
    if (ctx->r2 == ctx->r3) {
        // 0x00460DD4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00460E70;
    }
    // 0x00460DD4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00460DD8: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00460DDC: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x00460DE0: beq         $v0, $zero, L_00460E64
    if (ctx->r2 == 0) {
        // 0x00460DE4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00460E64;
    }
    // 0x00460DE4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00460DE8: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
    // 0x00460DEC: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00460DF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00460DF4:
    // 0x00460DF4: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x00460DF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00460DFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00460E00: jal         0x004299C4
    // 0x00460E04: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    entry_004299C4(rdram, ctx);
        goto after_1;
    // 0x00460E04: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00460E08: bne         $v0, $zero, L_00460E70
    if (ctx->r2 != 0) {
        // 0x00460E0C: nop
    
            goto L_00460E70;
    }
    // 0x00460E0C: nop

    // 0x00460E10: bne         $s0, $zero, L_00460E1C
    if (ctx->r16 != 0) {
        // 0x00460E14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00460E1C;
    }
    // 0x00460E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460E18: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
L_00460E1C:
    // 0x00460E1C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00460E20: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x00460E24: beq         $v0, $zero, L_00460E4C
    if (ctx->r2 == 0) {
        // 0x00460E28: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_00460E4C;
    }
    // 0x00460E28: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00460E2C: addu        $v1, $v0, $s5
    ctx->r3 = ADD32(ctx->r2, ctx->r21);
L_00460E30:
    // 0x00460E30: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00460E34: beql        $v0, $s4, L_00460E3C
    if (ctx->r2 == ctx->r20) {
        // 0x00460E38: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00460E3C;
    }
    goto skip_0;
    // 0x00460E38: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
L_00460E3C:
    // 0x00460E3C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00460E40: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x00460E44: bne         $v0, $zero, L_00460E30
    if (ctx->r2 != 0) {
        // 0x00460E48: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00460E30;
    }
    // 0x00460E48: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00460E4C:
    // 0x00460E4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00460E50: lbu         $v1, 0x64($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X64);
    // 0x00460E54: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00460E58: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00460E5C: bnel        $v0, $zero, L_00460DF4
    if (ctx->r2 != 0) {
        // 0x00460E60: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00460DF4;
    }
    goto skip_1;
    // 0x00460E60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_1:
L_00460E64:
    // 0x00460E64: sll         $v0, $s2, 8
    ctx->r2 = S32(ctx->r18 << 8);
    // 0x00460E68: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00460E6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00460E70:
    // 0x00460E70: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
    // 0x00460E74: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x00460E78: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x00460E7C: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x00460E80: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x00460E84: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x00460E88: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x00460E8C: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x00460E90: jr          $ra
    // 0x00460E94: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x00460E94: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_0044FC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FC74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044FC78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0044FC7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044FC80: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044FC84: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0044FC88: lw          $v0, 0x1CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1CC);
    // 0x0044FC8C: beq         $v0, $zero, L_0044FD90
    if (ctx->r2 == 0) {
        // 0x0044FC90: nop
    
            goto L_0044FD90;
    }
    // 0x0044FC90: nop

    // 0x0044FC94: lw          $a1, 0x1C8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C8);
    // 0x0044FC98: slti        $v0, $a1, 0x18
    ctx->r2 = SIGNED(ctx->r5) < 0X18 ? 1 : 0;
    // 0x0044FC9C: bne         $v0, $zero, L_0044FCAC
    if (ctx->r2 != 0) {
        // 0x0044FCA0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0044FCAC;
    }
    // 0x0044FCA0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0044FCA4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x0044FCA8: subu        $s1, $v0, $a1
    ctx->r17 = SUB32(ctx->r2, ctx->r5);
L_0044FCAC:
    // 0x0044FCAC: jal         0x00277F6C
    // 0x0044FCB0: nop

    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x0044FCB0: nop

    after_0:
    // 0x0044FCB4: jal         0x00207FEC
    // 0x0044FCB8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x0044FCB8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_1:
    // 0x0044FCBC: lui         $a3, 0xFF00
    ctx->r7 = S32(0XFF00 << 16);
    // 0x0044FCC0: ori         $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 | 0XFF;
    // 0x0044FCC4: lui         $t0, 0xE000
    ctx->r8 = S32(0XE000 << 16);
    // 0x0044FCC8: ori         $t0, $t0, 0xFF
    ctx->r8 = ctx->r8 | 0XFF;
    // 0x0044FCCC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0044FCD0: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0044FCD4: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x0044FCD8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0044FCDC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0044FCE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044FCE4: lwc1        $f1, 0xDF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XDF4);
    // 0x0044FCE8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0044FCEC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0044FCF0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0044FCF4: lwc1        $f2, 0x288($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X288);
    // 0x0044FCF8: lwc1        $f3, 0x28C($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X28C);
    // 0x0044FCFC: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x0044FD00: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0044FD04: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0044FD08: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x0044FD0C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044FD10: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0044FD14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044FD18: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0044FD1C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044FD20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044FD24: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044FD28: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x0044FD2C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0044FD30: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0044FD34: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0044FD38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044FD3C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0044FD40: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044FD44: div.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0044FD48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044FD4C: lwc1        $f0, 0xDF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDF8);
    // 0x0044FD50: lwc1        $f1, 0x294($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X294);
    // 0x0044FD54: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0044FD58: lwc1        $f0, 0x290($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X290);
    // 0x0044FD5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044FD60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044FD64: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044FD68: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0044FD6C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0044FD70: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0044FD74: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0044FD78: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0044FD7C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0044FD80: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x0044FD84: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x0044FD88: jal         0x0027B320
    // 0x0044FD8C: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    func_0027B320(rdram, ctx);
        goto after_2;
    // 0x0044FD8C: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    after_2:
L_0044FD90:
    // 0x0044FD90: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044FD94: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0044FD98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0044FD9C: jr          $ra
    // 0x0044FDA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044FDA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002954F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002954F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002954FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00295500: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00295504: lui         $a1, 0x29
    ctx->r5 = S32(0X29 << 16);
    // 0x00295508: addiu       $a1, $a1, 0x72E0
    ctx->r5 = ADD32(ctx->r5, 0X72E0);
    // 0x0029550C: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x00295510: addiu       $a2, $a2, 0x73E0
    ctx->r6 = ADD32(ctx->r6, 0X73E0);
    // 0x00295514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00295518: jal         0x00296340
    // 0x0029551C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x0029551C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x00295520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00295524: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00295528: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x0029552C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00295530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00295534: jr          $ra
    // 0x00295538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00295538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002758B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002758B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002758B8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002758BC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002758C0: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x002758C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002758C8: jal         0x002715B0
    // 0x002758CC: nop

    func_002715B0(rdram, ctx);
        goto after_0;
    // 0x002758CC: nop

    after_0:
    // 0x002758D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002758D4: jr          $ra
    // 0x002758D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002758D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020578C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020578C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00205790: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205794: addiu       $a0, $a0, -0x7BB0
    ctx->r4 = ADD32(ctx->r4, -0X7BB0);
    // 0x00205798: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020579C: jal         0x0029B820
    // 0x002057A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002057A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x002057A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002057A8: jr          $ra
    // 0x002057AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002057AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045ACB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421D14:
    // 0x0045ACB0: bne         $a1, $v0, L_0045ACC8
    if (ctx->r5 != ctx->r2) {
        // 0x0045ACB4: nop
    
            goto L_0045ACC8;
    }
    // 0x0045ACB4: nop

    // 0x0045ACB8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045ACBC: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0045ACC0: j           L_00421D14
    // 0x0045ACC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045ACC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ACC8:
    // 0x0045ACC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045ACCC: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0045ACD0: beq         $v0, $zero, L_0045ACE8
    if (ctx->r2 == 0) {
        // 0x0045ACD4: nop
    
            goto L_0045ACE8;
    }
    // 0x0045ACD4: nop

    // 0x0045ACD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ACDC: addiu       $v0, $v0, 0x487C
    ctx->r2 = ADD32(ctx->r2, 0X487C);
    // 0x0045ACE0: j           L_00421D14
    // 0x0045ACE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045ACE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ACE8:
    // 0x0045ACE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ACEC: addiu       $v0, $v0, 0x4894
    ctx->r2 = ADD32(ctx->r2, 0X4894);
    // 0x0045ACF0: j           L_00421D14
    // 0x0045ACF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045ACF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045ACF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045ACFC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045AD00: beq         $v0, $zero, L_0045AD14
    if (ctx->r2 == 0) {
        // 0x0045AD04: nop
    
            goto L_0045AD14;
    }
    // 0x0045AD04: nop

    // 0x0045AD08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AD0C: addiu       $v0, $v0, 0x48E4
    ctx->r2 = ADD32(ctx->r2, 0X48E4);
    // 0x0045AD10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045AD14:
    // 0x0045AD14: jr          $ra
    // 0x0045AD18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045AD18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0024699C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024699C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x002469A0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x002469A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002469A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x002469AC: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x002469B0: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x002469B4: beq         $a3, $zero, L_002469E0
    if (ctx->r7 == 0) {
        // 0x002469B8: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_002469E0;
    }
    // 0x002469B8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002469BC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002469C0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x002469C4: jal         0x0020EF2C
    // 0x002469C8: addiu       $a2, $a3, 0x4
    ctx->r6 = ADD32(ctx->r7, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x002469C8: addiu       $a2, $a3, 0x4
    ctx->r6 = ADD32(ctx->r7, 0X4);
    after_0:
    // 0x002469CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002469D0: jal         0x0020F040
    // 0x002469D4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x002469D4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x002469D8: j           L_002469EC
    // 0x002469DC: nop

        goto L_002469EC;
    // 0x002469DC: nop

L_002469E0:
    // 0x002469E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x002469E4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002469E8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_002469EC:
    // 0x002469EC: jal         0x002672C8
    // 0x002469F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_2;
    // 0x002469F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002469F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002469F8: jal         0x002672C8
    // 0x002469FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_3;
    // 0x002469FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x00246A00: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00246A04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246A08: lwc1        $f0, 0x6990($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6990);
    // 0x00246A0C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00246A10: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00246A14: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00246A18: jal         0x0020EF60
    // 0x00246A1C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_4;
    // 0x00246A1C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_4:
    // 0x00246A20: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x00246A24: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00246A28: jal         0x0020EEF8
    // 0x00246A2C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EEF8(rdram, ctx);
        goto after_5;
    // 0x00246A2C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x00246A30: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x00246A34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00246A38: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x00246A3C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00246A40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00246A44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00246A48: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x00246A4C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x00246A50: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x00246A54: jal         0x002688C8
    // 0x00246A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002688C8(rdram, ctx);
        goto after_6;
    // 0x00246A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00246A5C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00246A60: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00246A64: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00246A68: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00246A6C: jr          $ra
    // 0x00246A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00246A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_004606A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004278A8:
    // 0x004606A0: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x004606A4: sw          $s2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r18;
    // 0x004606A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004606AC: sw          $s1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r17;
    // 0x004606B0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x004606B4: sw          $s3, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r19;
    // 0x004606B8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x004606BC: sw          $s0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r16;
    // 0x004606C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004606C4: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x004606C8: sw          $ra, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r31;
    // 0x004606CC: sw          $s5, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r21;
    // 0x004606D0: sw          $s4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r20;
    // 0x004606D4: beq         $v0, $zero, L_00460760
    if (ctx->r2 == 0) {
        // 0x004606D8: sh          $zero, 0x144($sp)
        MEM_H(0X144, ctx->r29) = 0;
            goto L_00460760;
    }
    // 0x004606D8: sh          $zero, 0x144($sp)
    MEM_H(0X144, ctx->r29) = 0;
    // 0x004606DC: beq         $s1, $zero, L_004608A8
    if (ctx->r17 == 0) {
        // 0x004606E0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004608A8;
    }
    // 0x004606E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004606E4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x004606E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004606EC: beq         $v0, $zero, L_004608A8
    if (ctx->r2 == 0) {
        // 0x004606F0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004608A8;
    }
    // 0x004606F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004606F4: jal         0x00429D1C
    // 0x004606F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429D1C(rdram, ctx);
        goto after_0;
    // 0x004606F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x004606FC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00460700: beq         $v0, $v1, L_004608A8
    if (ctx->r2 == ctx->r3) {
        // 0x00460704: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004608A8;
    }
    // 0x00460704: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00460708: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x0046070C: beq         $v0, $zero, L_00460728
    if (ctx->r2 == 0) {
        // 0x00460710: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00460728;
    }
    // 0x00460710: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00460714: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00460718: jal         0x00429DE4
    // 0x0046071C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_1;
    // 0x0046071C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00460720: bne         $v0, $zero, L_004608A8
    if (ctx->r2 != 0) {
        // 0x00460724: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004608A8;
    }
    // 0x00460724: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00460728:
    // 0x00460728: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x0046072C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00460730: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00460734: lw          $v0, 0x178($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X178);
    // 0x00460738: addiu       $s0, $sp, 0x140
    ctx->r16 = ADD32(ctx->r29, 0X140);
    // 0x0046073C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x00460740: jal         0x00429200
    // 0x00460744: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_00429200(rdram, ctx);
        goto after_2;
    // 0x00460744: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00460748: bne         $v0, $zero, L_004608A8
    if (ctx->r2 != 0) {
        // 0x0046074C: nop
    
            goto L_004608A8;
    }
    // 0x0046074C: nop

    // 0x00460750: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x00460754: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00460758: bne         $v1, $v0, L_00460768
    if (ctx->r3 != ctx->r2) {
        // 0x0046075C: addiu       $a3, $sp, 0x120
        ctx->r7 = ADD32(ctx->r29, 0X120);
            goto L_00460768;
    }
    // 0x0046075C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
L_00460760:
    // 0x00460760: j           L_004278A8
    // 0x00460764: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    entry_004278A8(rdram, ctx);
    return;
    // 0x00460764: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00460768:
    // 0x00460768: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0046076C: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00460770: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00460774: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00460778: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x0046077C: jal         0x00299680
    // 0x00460780: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x00460780: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x00460784: bne         $v0, $zero, L_004608A8
    if (ctx->r2 != 0) {
        // 0x00460788: nop
    
            goto L_004608A8;
    }
    // 0x00460788: nop

    // 0x0046078C: lbu         $s1, 0x127($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X127);
    // 0x00460790: lbu         $s3, 0x126($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X126);
    // 0x00460794: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x00460798: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x0046079C: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x004607A0: beq         $v0, $zero, L_0046083C
    if (ctx->r2 == 0) {
        // 0x004607A4: addiu       $s4, $sp, 0x146
        ctx->r20 = ADD32(ctx->r29, 0X146);
            goto L_0046083C;
    }
    // 0x004607A4: addiu       $s4, $sp, 0x146
    ctx->r20 = ADD32(ctx->r29, 0X146);
    // 0x004607A8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x004607AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004607B0:
    // 0x004607B0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004607B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004607B8: jal         0x004299C4
    // 0x004607BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    entry_004299C4(rdram, ctx);
        goto after_4;
    // 0x004607BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004607C0: bne         $v0, $zero, L_004608A8
    if (ctx->r2 != 0) {
        // 0x004607C4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004608A8;
    }
    // 0x004607C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004607C8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004607CC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004607D0: addiu       $a3, $sp, 0x144
    ctx->r7 = ADD32(ctx->r29, 0X144);
    // 0x004607D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004607D8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x004607DC: jal         0x004278CC
    // 0x004607E0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    entry_004278CC(rdram, ctx);
        goto after_5;
    // 0x004607E0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_5:
    // 0x004607E4: bne         $v0, $zero, L_004608A8
    if (ctx->r2 != 0) {
        // 0x004607E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004608A8;
    }
    // 0x004607E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004607EC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004607F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004607F4: jal         0x004299C4
    // 0x004607F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    entry_004299C4(rdram, ctx);
        goto after_6;
    // 0x004607F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_6:
    // 0x004607FC: bne         $v0, $zero, L_004608A8
    if (ctx->r2 != 0) {
        // 0x00460800: nop
    
            goto L_004608A8;
    }
    // 0x00460800: nop

    // 0x00460804: lhu         $v0, 0x146($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X146);
    // 0x00460808: beq         $v0, $s5, L_0046082C
    if (ctx->r2 == ctx->r21) {
        // 0x0046080C: nop
    
            goto L_0046082C;
    }
    // 0x0046080C: nop

    // 0x00460810: lbu         $s3, 0x146($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X146);
    // 0x00460814: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x00460818: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x0046081C: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x00460820: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x00460824: bne         $v0, $zero, L_004607B0
    if (ctx->r2 != 0) {
        // 0x00460828: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004607B0;
    }
    // 0x00460828: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0046082C:
    // 0x0046082C: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x00460830: sltu        $v0, $s3, $v0
    ctx->r2 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x00460834: bne         $v0, $zero, L_00460844
    if (ctx->r2 != 0) {
        // 0x00460838: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_00460844;
    }
    // 0x00460838: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_0046083C:
    // 0x0046083C: j           L_004278A8
    // 0x00460840: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    entry_004278A8(rdram, ctx);
    return;
    // 0x00460840: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00460844:
    // 0x00460844: addiu       $v0, $sp, 0x12F
    ctx->r2 = ADD32(ctx->r29, 0X12F);
    // 0x00460848: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x0046084C: sh          $zero, 0x124($sp)
    MEM_H(0X124, ctx->r29) = 0;
    // 0x00460850: sh          $zero, 0x126($sp)
    MEM_H(0X126, ctx->r29) = 0;
    // 0x00460854: sh          $zero, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = 0;
L_00460858:
    // 0x00460858: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x0046085C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00460860: bgez        $v1, L_00460858
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00460864: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00460858;
    }
    // 0x00460864: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00460868: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0046086C: addiu       $v0, $sp, 0x123
    ctx->r2 = ADD32(ctx->r29, 0X123);
L_00460870:
    // 0x00460870: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x00460874: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00460878: bgez        $v1, L_00460870
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0046087C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00460870;
    }
    // 0x0046087C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00460880: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x00460884: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00460888: lhu         $v0, 0x142($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X142);
    // 0x0046088C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x00460890: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00460894: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00460898: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0046089C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x004608A0: jal         0x00299A40
    // 0x004608A4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_7;
    // 0x004608A4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_7:
L_004608A8:
    // 0x004608A8: lw          $ra, 0x160($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X160);
    // 0x004608AC: lw          $s5, 0x15C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X15C);
    // 0x004608B0: lw          $s4, 0x158($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X158);
    // 0x004608B4: lw          $s3, 0x154($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X154);
    // 0x004608B8: lw          $s2, 0x150($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X150);
    // 0x004608BC: lw          $s1, 0x14C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14C);
    // 0x004608C0: lw          $s0, 0x148($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X148);
    // 0x004608C4: jr          $ra
    // 0x004608C8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x004608C8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_0042C700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042C708: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042C70C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C710: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C714: sw          $v0, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = ctx->r2;
    // 0x0042C718: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042C71C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C720: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C724: sw          $a2, -0x7054($at)
    MEM_W(-0X7054, ctx->r1) = ctx->r6;
    // 0x0042C728: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C72C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C730: sw          $a1, -0x702C($at)
    MEM_W(-0X702C, ctx->r1) = ctx->r5;
    // 0x0042C734: bne         $a2, $v0, L_0042C74C
    if (ctx->r6 != ctx->r2) {
        // 0x0042C738: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_0042C74C;
    }
    // 0x0042C738: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    // 0x0042C73C: beq         $a1, $v0, L_0042C74C
    if (ctx->r5 == ctx->r2) {
        // 0x0042C740: nop
    
            goto L_0042C74C;
    }
    // 0x0042C740: nop

    // 0x0042C744: jal         0x00275624
    // 0x0042C748: addiu       $a0, $zero, 0xBE0
    ctx->r4 = ADD32(0, 0XBE0);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0042C748: addiu       $a0, $zero, 0xBE0
    ctx->r4 = ADD32(0, 0XBE0);
    after_0:
L_0042C74C:
    // 0x0042C74C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042C750: jr          $ra
    // 0x0042C754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042C754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00254B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254B04: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00254B08: sltiu       $v0, $a1, 0x4
    ctx->r2 = ctx->r5 < 0X4 ? 1 : 0;
    // 0x00254B0C: beq         $v0, $zero, L_00254B64
    if (ctx->r2 == 0) {
        // 0x00254B10: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_00254B64;
    }
    // 0x00254B10: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00254B14: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00254B18: beq         $v1, $zero, L_00254B64
    if (ctx->r3 == 0) {
        // 0x00254B1C: nop
    
            goto L_00254B64;
    }
    // 0x00254B1C: nop

L_00254B20:
    // 0x00254B20: lw          $v0, 0x51C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X51C);
    // 0x00254B24: beq         $v0, $zero, L_00254B58
    if (ctx->r2 == 0) {
        // 0x00254B28: nop
    
            goto L_00254B58;
    }
    // 0x00254B28: nop

    // 0x00254B2C: lw          $v0, 0x54C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54C);
    // 0x00254B30: bne         $v0, $zero, L_00254B58
    if (ctx->r2 != 0) {
        // 0x00254B34: nop
    
            goto L_00254B58;
    }
    // 0x00254B34: nop

    // 0x00254B38: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x00254B3C: lbu         $v0, 0x3F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3F);
    // 0x00254B40: bne         $v0, $zero, L_00254B58
    if (ctx->r2 != 0) {
        // 0x00254B44: nop
    
            goto L_00254B58;
    }
    // 0x00254B44: nop

    // 0x00254B48: bne         $a2, $a1, L_00254B58
    if (ctx->r6 != ctx->r5) {
        // 0x00254B4C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00254B58;
    }
    // 0x00254B4C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00254B50: jr          $ra
    // 0x00254B54: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00254B54: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00254B58:
    // 0x00254B58: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x00254B5C: bne         $v1, $zero, L_00254B20
    if (ctx->r3 != 0) {
        // 0x00254B60: nop
    
            goto L_00254B20;
    }
    // 0x00254B60: nop

L_00254B64:
    // 0x00254B64: jr          $ra
    // 0x00254B68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00254B68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00267ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267ED8: jr          $ra
    // 0x00267EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00267EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00217EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217EFC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00217F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217F04: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00217F08: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x00217F0C: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217F10: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00217F14: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00217F18: lwc1        $f1, 0xC($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XC);
    // 0x00217F1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217F20: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217F24: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00217F28: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00217F2C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217F30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217F34: lwc1        $f1, 0x59D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59D8);
    // 0x00217F38: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00217F3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00217F40: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00217F44: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00217F48: nop

    // 0x00217F4C: bc1f        L_00217F64
    if (!c1cs) {
        // 0x00217F50: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_00217F64;
    }
    // 0x00217F50: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x00217F54: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00217F58: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x00217F5C: j           L_00217F8C
    // 0x00217F60: nop

        goto L_00217F8C;
    // 0x00217F60: nop

L_00217F64:
    // 0x00217F64: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00217F68: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00217F6C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217F70: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217F74: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00217F78: nop

    // 0x00217F7C: bc1f        L_00217F88
    if (!c1cs) {
        // 0x00217F80: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00217F88;
    }
    // 0x00217F80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00217F84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00217F88:
    // 0x00217F88: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
L_00217F8C:
    // 0x00217F8C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x00217F90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00217F94: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x00217F98: addiu       $a2, $v1, -0x1
    ctx->r6 = ADD32(ctx->r3, -0X1);
    // 0x00217F9C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00217FA0: andi        $v0, $t0, 0x1F
    ctx->r2 = ctx->r8 & 0X1F;
    // 0x00217FA4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00217FA8: bne         $v0, $zero, L_00217FC0
    if (ctx->r2 != 0) {
        // 0x00217FAC: and         $a0, $a0, $a2
        ctx->r4 = ctx->r4 & ctx->r6;
            goto L_00217FC0;
    }
    // 0x00217FAC: and         $a0, $a0, $a2
    ctx->r4 = ctx->r4 & ctx->r6;
    // 0x00217FB0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00217FB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00217FB8: j           L_00217FD8
    // 0x00217FBC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
        goto L_00217FD8;
    // 0x00217FBC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_00217FC0:
    // 0x00217FC0: sllv        $v1, $a2, $a1
    ctx->r3 = S32(ctx->r6 << (ctx->r5 & 31));
    // 0x00217FC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00217FC8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x00217FCC: srlv        $a2, $a2, $v0
    ctx->r6 = S32(U32(ctx->r6) >> (ctx->r2 & 31));
    // 0x00217FD0: sllv        $a1, $a0, $a1
    ctx->r5 = S32(ctx->r4 << (ctx->r5 & 31));
    // 0x00217FD4: srlv        $a3, $a0, $v0
    ctx->r7 = S32(U32(ctx->r4) >> (ctx->r2 & 31));
L_00217FD8:
    // 0x00217FD8: lui         $v0, 0xFFF
    ctx->r2 = S32(0XFFF << 16);
    // 0x00217FDC: ori         $v0, $v0, 0xFFE0
    ctx->r2 = ctx->r2 | 0XFFE0;
    // 0x00217FE0: lui         $a0, 0xF000
    ctx->r4 = S32(0XF000 << 16);
    // 0x00217FE4: and         $a0, $t0, $a0
    ctx->r4 = ctx->r8 & ctx->r4;
    // 0x00217FE8: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x00217FEC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00217FF0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00217FF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00217FF8: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00217FFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00218000: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00218004: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00218008: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0021800C: nor         $v1, $zero, $a2
    ctx->r3 = ~(0 | ctx->r6);
    // 0x00218010: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00218014: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00218018: jr          $ra
    // 0x0021801C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    return;
    // 0x0021801C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00263DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263DD8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00263DDC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00263DE0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00263DE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00263DE8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00263DEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00263DF0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00263DF4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00263DF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00263DFC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x00263E00: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x00263E04: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00263E08: lwc1        $f22, 0x64($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00263E0C: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00263E10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00263E14: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x00263E18: nop

    // 0x00263E1C: bc1t        L_00263E3C
    if (c1cs) {
        // 0x00263E20: addiu       $s0, $v0, 0x14
        ctx->r16 = ADD32(ctx->r2, 0X14);
            goto L_00263E3C;
    }
    // 0x00263E20: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    // 0x00263E24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263E28: lwc1        $f0, 0x7C00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C00);
    // 0x00263E2C: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x00263E30: nop

    // 0x00263E34: bc1f        L_00263E40
    if (!c1cs) {
        // 0x00263E38: nop
    
            goto L_00263E40;
    }
    // 0x00263E38: nop

L_00263E3C:
    // 0x00263E3C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_00263E40:
    // 0x00263E40: lbu         $v0, 0x29($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X29);
    // 0x00263E44: bne         $v0, $zero, L_00263E58
    if (ctx->r2 != 0) {
        // 0x00263E48: nop
    
            goto L_00263E58;
    }
    // 0x00263E48: nop

    // 0x00263E4C: jal         0x00266F50
    // 0x00263E50: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_00266F50(rdram, ctx);
        goto after_0;
    // 0x00263E50: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x00263E54: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_00263E58:
    // 0x00263E58: lw          $t0, 0x9C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X9C);
    // 0x00263E5C: lw          $t1, 0xA0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XA0);
    // 0x00263E60: lw          $t2, 0xA4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XA4);
    // 0x00263E64: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00263E68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00263E6C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00263E70: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00263E74: lwc1        $f1, 0x2C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X2C);
    // 0x00263E78: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263E7C: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x00263E80: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00263E84: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x00263E88: beq         $v0, $zero, L_00263ED0
    if (ctx->r2 == 0) {
        // 0x00263E8C: addiu       $s3, $s1, 0x9C
        ctx->r19 = ADD32(ctx->r17, 0X9C);
            goto L_00263ED0;
    }
    // 0x00263E8C: addiu       $s3, $s1, 0x9C
    ctx->r19 = ADD32(ctx->r17, 0X9C);
    // 0x00263E90: lwc1        $f12, 0x34($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X34);
    // 0x00263E94: jal         0x002982F0
    // 0x00263E98: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00263E98: nop

    after_1:
    // 0x00263E9C: lwc1        $f1, 0x30($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X30);
    // 0x00263EA0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263EA4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00263EA8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263EAC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00263EB0: lwc1        $f12, 0x34($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X34);
    // 0x00263EB4: jal         0x002974C0
    // 0x00263EB8: nop

    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00263EB8: nop

    after_2:
    // 0x00263EBC: lwc1        $f1, 0x30($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X30);
    // 0x00263EC0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263EC4: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00263EC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263ECC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
L_00263ED0:
    // 0x00263ED0: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x00263ED4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00263ED8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x00263EDC: jal         0x0020EF8C
    // 0x00263EE0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_0020EF8C(rdram, ctx);
        goto after_3;
    // 0x00263EE0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_3:
    // 0x00263EE4: lbu         $v1, 0x28($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X28);
    // 0x00263EE8: beq         $v1, $zero, L_00263F00
    if (ctx->r3 == 0) {
        // 0x00263EEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263F00;
    }
    // 0x00263EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00263EF0: beq         $v1, $v0, L_00263F14
    if (ctx->r3 == ctx->r2) {
        // 0x00263EF4: nop
    
            goto L_00263F14;
    }
    // 0x00263EF4: nop

    // 0x00263EF8: j           L_00263FB8
    // 0x00263EFC: nop

        goto L_00263FB8;
    // 0x00263EFC: nop

L_00263F00:
    // 0x00263F00: lwc1        $f12, 0x124($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X124);
    // 0x00263F04: jal         0x002982F0
    // 0x00263F08: nop

    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00263F08: nop

    after_4:
    // 0x00263F0C: j           L_00263FA4
    // 0x00263F10: nop

        goto L_00263FA4;
    // 0x00263F10: nop

L_00263F14:
    // 0x00263F14: lwc1        $f20, 0x124($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X124);
    // 0x00263F18: jal         0x002982F0
    // 0x00263F1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x00263F1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x00263F20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263F24: lwc1        $f12, 0x7C04($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7C04);
    // 0x00263F28: mul.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x00263F2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263F30: lwc1        $f21, 0x7C08($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7C08);
    // 0x00263F34: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00263F38: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263F40: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263F44: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263F48: jal         0x002982F0
    // 0x00263F4C: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x00263F4C: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    after_6:
    // 0x00263F50: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00263F54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263F58: lwc1        $f12, 0x7C0C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7C0C);
    // 0x00263F5C: mul.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x00263F60: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263F64: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263F68: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263F6C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263F70: jal         0x002982F0
    // 0x00263F74: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x00263F74: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    after_7:
    // 0x00263F78: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00263F7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263F80: lwc1        $f12, 0x7C10($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7C10);
    // 0x00263F84: mul.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x00263F88: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263F8C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263F90: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263F94: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263F98: jal         0x002982F0
    // 0x00263F9C: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_8;
    // 0x00263F9C: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    after_8:
    // 0x00263FA0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
L_00263FA4:
    // 0x00263FA4: lwc1        $f1, 0x44($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X44);
    // 0x00263FA8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00263FAC: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263FB0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00263FB4: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
L_00263FB8:
    // 0x00263FB8: lwc1        $f3, 0x54($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X54);
    // 0x00263FBC: lwc1        $f0, 0x110($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00263FC0: lwc1        $f2, 0x58($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00263FC4: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00263FC8: lwc1        $f0, 0x114($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X114);
    // 0x00263FCC: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x00263FD0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00263FD4: lwc1        $f0, 0x118($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X118);
    // 0x00263FD8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00263FDC: swc1        $f3, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x00263FE0: swc1        $f2, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f2.u32l;
    // 0x00263FE4: swc1        $f1, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00263FE8: lbu         $v1, 0x2A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2A);
    // 0x00263FEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00263FF0: beq         $v1, $v0, L_0026403C
    if (ctx->r3 == ctx->r2) {
        // 0x00263FF4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0026403C;
    }
    // 0x00263FF4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00263FF8: beq         $v0, $zero, L_00264010
    if (ctx->r2 == 0) {
        // 0x00263FFC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00264010;
    }
    // 0x00263FFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00264000: beq         $v1, $zero, L_00264020
    if (ctx->r3 == 0) {
        // 0x00264004: nop
    
            goto L_00264020;
    }
    // 0x00264004: nop

    // 0x00264008: j           L_00264068
    // 0x0026400C: nop

        goto L_00264068;
    // 0x0026400C: nop

L_00264010:
    // 0x00264010: beq         $v1, $v0, L_0026404C
    if (ctx->r3 == ctx->r2) {
        // 0x00264014: nop
    
            goto L_0026404C;
    }
    // 0x00264014: nop

    // 0x00264018: j           L_00264068
    // 0x0026401C: nop

        goto L_00264068;
    // 0x0026401C: nop

L_00264020:
    // 0x00264020: lwc1        $f1, 0x98($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X98);
    // 0x00264024: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x00264028: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026402C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00264030: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00264034: j           L_00264064
    // 0x00264038: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00264064;
    // 0x00264038: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_0026403C:
    // 0x0026403C: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x00264040: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00264044: bne         $v0, $zero, L_00264068
    if (ctx->r2 != 0) {
        // 0x00264048: nop
    
            goto L_00264068;
    }
    // 0x00264048: nop

L_0026404C:
    // 0x0026404C: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x00264050: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264054: lwc1        $f1, 0x7C14($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C14);
    // 0x00264058: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026405C: lwc1        $f1, 0x50($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X50);
    // 0x00264060: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_00264064:
    // 0x00264064: swc1        $f1, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_00264068:
    // 0x00264068: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x0026406C: bne         $v0, $zero, L_002640A8
    if (ctx->r2 != 0) {
        // 0x00264070: nop
    
            goto L_002640A8;
    }
    // 0x00264070: nop

    // 0x00264074: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x00264078: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0026407C: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x00264080: jal         0x0026BE60
    // 0x00264084: nop

    func_0026BE60(rdram, ctx);
        goto after_9;
    // 0x00264084: nop

    after_9:
    // 0x00264088: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x0026408C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00264090: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00264094: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00264098: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0026409C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002640A0: jal         0x0026C888
    // 0x002640A4: nop

    func_0026C888(rdram, ctx);
        goto after_10;
    // 0x002640A4: nop

    after_10:
L_002640A8:
    // 0x002640A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002640AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x002640B0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x002640B4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002640B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002640BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002640C0: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x002640C4: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x002640C8: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x002640CC: jr          $ra
    // 0x002640D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002640D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00276180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276180: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00276184: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00276188: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0027618C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00276190: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00276194: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00276198: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0027619C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002761A0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002761A4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002761A8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002761AC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002761B0: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x002761B4: jal         0x002714B0
    // 0x002761B8: nop

    func_002714B0(rdram, ctx);
        goto after_0;
    // 0x002761B8: nop

    after_0:
    // 0x002761BC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x002761C0: lw          $s1, 0x8($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X8);
    // 0x002761C4: addiu       $t0, $v0, 0xDC
    ctx->r8 = ADD32(ctx->r2, 0XDC);
    // 0x002761C8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002761CC: addiu       $t0, $v0, 0x84
    ctx->r8 = ADD32(ctx->r2, 0X84);
    // 0x002761D0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x002761D4: lw          $v0, 0x7C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C);
    // 0x002761D8: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x002761DC: addiu       $v1, $s5, 0x4
    ctx->r3 = ADD32(ctx->r21, 0X4);
    // 0x002761E0: beq         $s1, $v1, L_00276370
    if (ctx->r17 == ctx->r3) {
        // 0x002761E4: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_00276370;
    }
    // 0x002761E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x002761E8: addiu       $s7, $s5, 0xD8
    ctx->r23 = ADD32(ctx->r21, 0XD8);
    // 0x002761EC: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_002761F0:
    // 0x002761F0: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x002761F4: lw          $s6, 0x4($s1)
    ctx->r22 = MEM_W(ctx->r17, 0X4);
    // 0x002761F8: beq         $v0, $zero, L_00276230
    if (ctx->r2 == 0) {
        // 0x002761FC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00276230;
    }
    // 0x002761FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00276200: bne         $v0, $zero, L_00276360
    if (ctx->r2 != 0) {
        // 0x00276204: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_00276360;
    }
    // 0x00276204: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00276208: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0027620C: lw          $v0, 0x104($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X104);
    // 0x00276210: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00276214: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x00276218: lw          $v0, 0x108($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X108);
    // 0x0027621C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x00276220: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00276224: sw          $v0, 0x108($v1)
    MEM_W(0X108, ctx->r3) = ctx->r2;
    // 0x00276228: j           L_00276360
    // 0x0027622C: sw          $zero, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = 0;
        goto L_00276360;
    // 0x0027622C: sw          $zero, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = 0;
L_00276230:
    // 0x00276230: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x00276234: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x00276238: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x0027623C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00276240: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x00276244: bne         $v0, $zero, L_00276258
    if (ctx->r2 != 0) {
        // 0x00276248: addiu       $a0, $a0, 0x1DB8
        ctx->r4 = ADD32(ctx->r4, 0X1DB8);
            goto L_00276258;
    }
    // 0x00276248: addiu       $a0, $a0, 0x1DB8
    ctx->r4 = ADD32(ctx->r4, 0X1DB8);
    // 0x0027624C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00276250: j           L_0027633C
    // 0x00276254: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
        goto L_0027633C;
    // 0x00276254: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
L_00276258:
    // 0x00276258: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x0027625C: lh          $a2, 0x42($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X42);
    // 0x00276260: lh          $a3, 0x40($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X40);
    // 0x00276264: jal         0x00273370
    // 0x00276268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00273370(rdram, ctx);
        goto after_1;
    // 0x00276268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x0027626C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00276270: sra         $s2, $v0, 16
    ctx->r18 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00276274: beq         $s2, $fp, L_00276370
    if (ctx->r18 == ctx->r30) {
        // 0x00276278: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00276370;
    }
    // 0x00276278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0027627C: beq         $s2, $v0, L_00276370
    if (ctx->r18 == ctx->r2) {
        // 0x00276280: sll         $s0, $s2, 1
        ctx->r16 = S32(ctx->r18 << 1);
            goto L_00276370;
    }
    // 0x00276280: sll         $s0, $s2, 1
    ctx->r16 = S32(ctx->r18 << 1);
    // 0x00276284: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00276288: addu        $s3, $s0, $t0
    ctx->r19 = ADD32(ctx->r16, ctx->r8);
    // 0x0027628C: lh          $s4, 0x0($s3)
    ctx->r20 = MEM_H(ctx->r19, 0X0);
    // 0x00276290: bne         $s4, $fp, L_00276370
    if (ctx->r20 != ctx->r30) {
        // 0x00276294: nop
    
            goto L_00276370;
    }
    // 0x00276294: nop

    // 0x00276298: lh          $v0, 0x42($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X42);
    // 0x0027629C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x002762A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x002762A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002762A8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x002762AC: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x002762B0: jal         0x00293470
    // 0x002762B4: nop

    func_00293470(rdram, ctx);
        goto after_2;
    // 0x002762B4: nop

    after_2:
    // 0x002762B8: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x002762BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002762C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002762C4: beq         $v0, $s4, L_00276370
    if (ctx->r2 == ctx->r20) {
        // 0x002762C8: addiu       $a1, $s1, 0x8
        ctx->r5 = ADD32(ctx->r17, 0X8);
            goto L_00276370;
    }
    // 0x002762C8: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    // 0x002762CC: addiu       $a2, $zero, 0xCC
    ctx->r6 = ADD32(0, 0XCC);
    // 0x002762D0: addu        $v0, $s0, $s2
    ctx->r2 = ADD32(ctx->r16, ctx->r18);
    // 0x002762D4: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x002762D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002762DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002762E0: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x002762E4: addiu       $v0, $v0, 0x1DBC
    ctx->r2 = ADD32(ctx->r2, 0X1DBC);
    // 0x002762E8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x002762EC: jal         0x0029E460
    // 0x002762F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E460(rdram, ctx);
        goto after_3;
    // 0x002762F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002762F4: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x002762F8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x002762FC: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x00276300: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00276304: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00276308: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0027630C: lw          $v0, 0x104($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X104);
    // 0x00276310: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00276314: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x00276318: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0027631C: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x00276320: jal         0x002706A0
    // 0x00276324: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    func_002706A0(rdram, ctx);
        goto after_4;
    // 0x00276324: addiu       $a3, $s0, 0x44
    ctx->r7 = ADD32(ctx->r16, 0X44);
    after_4:
    // 0x00276328: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0027632C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00276330: sw          $s4, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r20;
    // 0x00276334: sh          $s4, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r20;
    // 0x00276338: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_0027633C:
    // 0x0027633C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00276340: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00276344: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00276348: lw          $v0, 0xD8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XD8);
    // 0x0027634C: sw          $s7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r23;
    // 0x00276350: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00276354: lw          $v0, 0xD8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XD8);
    // 0x00276358: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x0027635C: sw          $s1, 0xD8($s5)
    MEM_W(0XD8, ctx->r21) = ctx->r17;
L_00276360:
    // 0x00276360: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    // 0x00276364: addiu       $v0, $s5, 0x4
    ctx->r2 = ADD32(ctx->r21, 0X4);
    // 0x00276368: bne         $s1, $v0, L_002761F0
    if (ctx->r17 != ctx->r2) {
        // 0x0027636C: nop
    
            goto L_002761F0;
    }
    // 0x0027636C: nop

L_00276370:
    // 0x00276370: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x00276374: jal         0x00271514
    // 0x00276378: nop

    func_00271514(rdram, ctx);
        goto after_5;
    // 0x00276378: nop

    after_5:
    // 0x0027637C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00276380: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x00276384: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00276388: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0027638C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00276390: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00276394: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00276398: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0027639C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002763A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002763A4: jr          $ra
    // 0x002763A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002763A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004533F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004533F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004533F8: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x004533FC: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00453400: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00453404: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00453408: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0045340C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00453410: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00453414: nop

    // 0x00453418: bc1f        L_00453424
    if (!c1cs) {
        // 0x0045341C: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_00453424;
    }
    // 0x0045341C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x00453420: swc1        $f1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
L_00453424:
    // 0x00453424: jr          $ra
    // 0x00453428: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453428: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0045AF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AF80: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045AF84: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0045AF88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0045AF8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045AF90: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0045AF94: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0045AF98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0045AF9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0045AFA0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0045AFA4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0045AFA8: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x0045AFAC: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0045AFB0: lwc1        $f1, 0x14($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X14);
    // 0x0045AFB4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0045AFB8: mfc1        $s3, $f2
    ctx->r19 = (int32_t)ctx->f2.u32l;
    // 0x0045AFBC: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0045AFC0: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x0045AFC4: jal         0x004160F0
    // 0x0045AFC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045AFC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0045AFCC: addiu       $v0, $v0, -0x9
    ctx->r2 = ADD32(ctx->r2, -0X9);
    // 0x0045AFD0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045AFD4: addiu       $a1, $a1, 0x1418
    ctx->r5 = ADD32(ctx->r5, 0X1418);
    // 0x0045AFD8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0045AFDC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045AFE0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0045AFE4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0045AFE8: jal         0x0029E3E0
    // 0x0045AFEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045AFEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0045AFF0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0045AFF4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0045AFF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0045AFFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0045B000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045B004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045B008: jr          $ra
    // 0x0045B00C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0045B00C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002362E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002362E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002362E8: lwc1        $f0, 0x651C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X651C);
    // 0x002362EC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002362F0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x002362F4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x002362F8: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x002362FC: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x00236300: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x00236304: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x00236308: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x0023630C: jr          $ra
    // 0x00236310: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00236310: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0029DE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DE00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029DE04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029DE08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029DE0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029DE10: jal         0x0029DFF0
    // 0x0029DE14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029DE14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0029DE18: bne         $s0, $zero, L_0029DE30
    if (ctx->r16 != 0) {
        // 0x0029DE1C: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0029DE30;
    }
    // 0x0029DE1C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029DE20: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0029DE24: lw          $s0, -0x76E0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X76E0);
    // 0x0029DE28: j           L_0029DE4C
    // 0x0029DE2C: nop

        goto L_0029DE4C;
    // 0x0029DE2C: nop

L_0029DE30:
    // 0x0029DE30: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x0029DE34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029DE38: beq         $v1, $v0, L_0029DE4C
    if (ctx->r3 == ctx->r2) {
        // 0x0029DE3C: nop
    
            goto L_0029DE4C;
    }
    // 0x0029DE3C: nop

    // 0x0029DE40: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0029DE44: jal         0x0029BC30
    // 0x0029DE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029BC30(rdram, ctx);
        goto after_1;
    // 0x0029DE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0029DE4C:
    // 0x0029DE4C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029DE50: addiu       $v1, $v1, -0x76E4
    ctx->r3 = ADD32(ctx->r3, -0X76E4);
    // 0x0029DE54: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029DE58: bne         $v0, $s0, L_0029DE78
    if (ctx->r2 != ctx->r16) {
        // 0x0029DE5C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029DE78;
    }
    // 0x0029DE5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029DE60: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029DE64: j           L_0029DEA4
    // 0x0029DE68: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0029DEA4;
    // 0x0029DE68: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029DE6C:
    // 0x0029DE6C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029DE70: j           L_0029DEA4
    // 0x0029DE74: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
        goto L_0029DEA4;
    // 0x0029DE74: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_0029DE78:
    // 0x0029DE78: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0029DE7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029DE80: beq         $v1, $v0, L_0029DEA4
    if (ctx->r3 == ctx->r2) {
        // 0x0029DE84: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0029DEA4;
    }
    // 0x0029DE84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0029DE88:
    // 0x0029DE88: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0029DE8C: beq         $v0, $s0, L_0029DE6C
    if (ctx->r2 == ctx->r16) {
        // 0x0029DE90: nop
    
            goto L_0029DE6C;
    }
    // 0x0029DE90: nop

    // 0x0029DE94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029DE98: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0029DE9C: bne         $v0, $v1, L_0029DE88
    if (ctx->r2 != ctx->r3) {
        // 0x0029DEA0: nop
    
            goto L_0029DE88;
    }
    // 0x0029DEA0: nop

L_0029DEA4:
    // 0x0029DEA4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029DEA8: lw          $v0, -0x76E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76E0);
    // 0x0029DEAC: bne         $s0, $v0, L_0029DEBC
    if (ctx->r16 != ctx->r2) {
        // 0x0029DEB0: nop
    
            goto L_0029DEBC;
    }
    // 0x0029DEB0: nop

    // 0x0029DEB4: jal         0x0029C8E0
    // 0x0029DEB8: nop

    func_0029C8E0(rdram, ctx);
        goto after_2;
    // 0x0029DEB8: nop

    after_2:
L_0029DEBC:
    // 0x0029DEBC: jal         0x0029E010
    // 0x0029DEC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0029DEC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0029DEC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029DEC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029DECC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DED0: jr          $ra
    // 0x0029DED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029DED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0024D1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024D1F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0024D1FC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024D200: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0024D204: lhu         $v0, 0xA08($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA08);
    // 0x0024D208: lw          $v1, 0x12A0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X12A0);
    // 0x0024D20C: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x0024D210: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0024D214: beq         $v0, $zero, L_0024D228
    if (ctx->r2 == 0) {
        // 0x0024D218: sw          $v1, 0x129C($a1)
        MEM_W(0X129C, ctx->r5) = ctx->r3;
            goto L_0024D228;
    }
    // 0x0024D218: sw          $v1, 0x129C($a1)
    MEM_W(0X129C, ctx->r5) = ctx->r3;
    // 0x0024D21C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024D220: j           L_0024D244
    // 0x0024D224: sw          $v0, 0x12A0($a1)
    MEM_W(0X12A0, ctx->r5) = ctx->r2;
        goto L_0024D244;
    // 0x0024D224: sw          $v0, 0x12A0($a1)
    MEM_W(0X12A0, ctx->r5) = ctx->r2;
L_0024D228:
    // 0x0024D228: lw          $v0, 0xA1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XA1C);
    // 0x0024D22C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024D230: beq         $v0, $zero, L_0024D240
    if (ctx->r2 == 0) {
        // 0x0024D234: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024D240;
    }
    // 0x0024D234: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024D238: j           L_0024D244
    // 0x0024D23C: sw          $v0, 0x12A0($a1)
    MEM_W(0X12A0, ctx->r5) = ctx->r2;
        goto L_0024D244;
    // 0x0024D23C: sw          $v0, 0x12A0($a1)
    MEM_W(0X12A0, ctx->r5) = ctx->r2;
L_0024D240:
    // 0x0024D240: sw          $zero, 0x12A0($a1)
    MEM_W(0X12A0, ctx->r5) = 0;
L_0024D244:
    // 0x0024D244: lw          $v1, 0x129C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X129C);
    // 0x0024D248: lw          $v0, 0x12A0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X12A0);
    // 0x0024D24C: beq         $v1, $v0, L_0024D338
    if (ctx->r3 == ctx->r2) {
        // 0x0024D250: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024D338;
    }
    // 0x0024D250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024D254: lhu         $a2, 0x996($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X996);
    // 0x0024D258: beq         $v1, $v0, L_0024D2A8
    if (ctx->r3 == ctx->r2) {
        // 0x0024D25C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0024D2A8;
    }
    // 0x0024D25C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0024D260: beql        $v0, $zero, L_0024D278
    if (ctx->r2 == 0) {
        // 0x0024D264: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024D278;
    }
    goto skip_0;
    // 0x0024D264: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0024D268: beq         $v1, $zero, L_0024D288
    if (ctx->r3 == 0) {
        // 0x0024D26C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0024D288;
    }
    // 0x0024D26C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0024D270: j           L_0024D2EC
    // 0x0024D274: nop

        goto L_0024D2EC;
    // 0x0024D274: nop

L_0024D278:
    // 0x0024D278: beq         $v1, $v0, L_0024D2D4
    if (ctx->r3 == ctx->r2) {
        // 0x0024D27C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0024D2D4;
    }
    // 0x0024D27C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0024D280: j           L_0024D2EC
    // 0x0024D284: nop

        goto L_0024D2EC;
    // 0x0024D284: nop

L_0024D288:
    // 0x0024D288: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x0024D28C: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0024D290: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D294: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024D298: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024D29C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0024D2A0: j           L_0024D2C4
    // 0x0024D2A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
        goto L_0024D2C4;
    // 0x0024D2A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_0024D2A8:
    // 0x0024D2A8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x0024D2AC: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0024D2B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D2B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024D2B8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024D2BC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0024D2C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_0024D2C4:
    // 0x0024D2C4: beq         $v0, $zero, L_0024D2E8
    if (ctx->r2 == 0) {
        // 0x0024D2C8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0024D2E8;
    }
    // 0x0024D2C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0024D2CC: j           L_0024D2EC
    // 0x0024D2D0: nop

        goto L_0024D2EC;
    // 0x0024D2D0: nop

L_0024D2D4:
    // 0x0024D2D4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x0024D2D8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0024D2DC: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
    // 0x0024D2E0: beq         $v0, $v1, L_0024D2EC
    if (ctx->r2 == ctx->r3) {
        // 0x0024D2E4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0024D2EC;
    }
    // 0x0024D2E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_0024D2E8:
    // 0x0024D2E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0024D2EC:
    // 0x0024D2EC: beq         $a0, $zero, L_0024D308
    if (ctx->r4 == 0) {
        // 0x0024D2F0: nop
    
            goto L_0024D308;
    }
    // 0x0024D2F0: nop

    // 0x0024D2F4: lw          $v0, 0x129C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X129C);
    // 0x0024D2F8: lhu         $v1, 0x996($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X996);
    // 0x0024D2FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024D300: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0024D304: sh          $v1, 0x998($v0)
    MEM_H(0X998, ctx->r2) = ctx->r3;
L_0024D308:
    // 0x0024D308: lw          $v0, 0x12A0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X12A0);
    // 0x0024D30C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024D310: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0024D314: lhu         $v0, 0x998($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X998);
    // 0x0024D318: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
    // 0x0024D31C: sh          $v0, 0xB14($a1)
    MEM_H(0XB14, ctx->r5) = ctx->r2;
    // 0x0024D320: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0024D324: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0024D328: bne         $v0, $v1, L_0024D338
    if (ctx->r2 != ctx->r3) {
        // 0x0024D32C: addiu       $a0, $a1, 0x288
        ctx->r4 = ADD32(ctx->r5, 0X288);
            goto L_0024D338;
    }
    // 0x0024D32C: addiu       $a0, $a1, 0x288
    ctx->r4 = ADD32(ctx->r5, 0X288);
    // 0x0024D330: jal         0x00258668
    // 0x0024D334: addiu       $a1, $a1, 0x3C8
    ctx->r5 = ADD32(ctx->r5, 0X3C8);
    func_00258668(rdram, ctx);
        goto after_0;
    // 0x0024D334: addiu       $a1, $a1, 0x3C8
    ctx->r5 = ADD32(ctx->r5, 0X3C8);
    after_0:
L_0024D338:
    // 0x0024D338: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0024D33C: jr          $ra
    // 0x0024D340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0024D340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BF74: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0044BF78: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x0044BF7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044BF80: jr          $ra
    // 0x0044BF84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x0044BF84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_00288800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288800: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00288804: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00288808: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028880C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00288810: beq         $v0, $zero, L_00288830
    if (ctx->r2 == 0) {
        // 0x00288814: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_00288830;
    }
    // 0x00288814: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_00288818:
    // 0x00288818: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0028881C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00288820: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00288824: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00288828: bne         $v0, $zero, L_00288818
    if (ctx->r2 != 0) {
        // 0x0028882C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00288818;
    }
    // 0x0028882C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00288830:
    // 0x00288830: jr          $ra
    // 0x00288834: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00288834: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00296334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296334: lhu         $v0, 0x7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7C);
    // 0x00296338: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0029633C: bne         $v0, $zero, L_00296380
    if (ctx->r2 != 0) {
        // 0x00296340: sw          $zero, 0x0($a0)
        MEM_W(0X0, ctx->r4) = 0;
            goto L_00296380;
    }
    // 0x00296340: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x00296344: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x00296348: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x0029634C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x00296350: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x00296354: jr          $ra
    // 0x00296358: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    return;
    // 0x00296358: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    // 0x0029635C: bne         $v0, $zero, L_00296380
    if (ctx->r2 != 0) {
        // 0x00296360: addiu       $sp, $sp, -0x40
        ctx->r29 = ADD32(ctx->r29, -0X40);
            goto L_00296380;
    }
    // 0x00296360: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00296364: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00296368: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0029636C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00296370: ori         $v1, $v1, 0x440
    ctx->r3 = ctx->r3 | 0X440;
    // 0x00296374: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00296378: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x0029637C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
L_00296380:
    // 0x00296380: ori         $a1, $a1, 0x580
    ctx->r5 = ctx->r5 | 0X580;
    // 0x00296384: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00296388: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0029638C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00296390: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00296394: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00296398: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0029639C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x002963A0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002963A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002963A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002963AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002963B0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x002963B4: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x002963B8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002963BC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x002963C0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002963C4: sll         $v1, $s7, 1
    ctx->r3 = S32(ctx->r23 << 1);
    // 0x002963C8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x002963CC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002963D0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x002963D4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x002963D8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x002963DC: blez        $v0, L_0029646C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002963E0: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_0029646C;
    }
    // 0x002963E0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x002963E4: lui         $fp, 0x800
    ctx->r30 = S32(0X800 << 16);
    // 0x002963E8: andi        $s6, $v1, 0xFFFF
    ctx->r22 = ctx->r3 & 0XFFFF;
    // 0x002963EC: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x002963F0: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x002963F4: lui         $s5, 0x6C0
    ctx->r21 = S32(0X6C0 << 16);
    // 0x002963F8: ori         $s5, $s5, 0x440
    ctx->r21 = ctx->r21 | 0X440;
    // 0x002963FC: addu        $s4, $fp, $zero
    ctx->r20 = ADD32(ctx->r30, 0);
    // 0x00296400: ori         $s4, $s4, 0x580
    ctx->r20 = ctx->r20 | 0X580;
    // 0x00296404: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00296408:
    // 0x00296408: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0029640C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x00296410: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00296414: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00296418: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0029641C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x00296420: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00296424: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00296428: jalr        $v0
    // 0x0029642C: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0029642C: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_0:
    // 0x00296430: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00296434: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00296438: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0029643C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00296440: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x00296444: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x00296448: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0029644C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x00296450: sw          $s5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r21;
    // 0x00296454: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x00296458: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x0029645C: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00296460: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00296464: bne         $v0, $zero, L_00296408
    if (ctx->r2 != 0) {
        // 0x00296468: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00296408;
    }
    // 0x00296468: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_0029646C:
    // 0x0029646C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00296470: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00296474: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00296478: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0029647C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00296480: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00296484: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00296488: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029648C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00296490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00296494: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00296498: jr          $ra
    // 0x0029649C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0029649C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002578AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002578AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002578B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002578B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002578B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002578BC: jal         0x00285410
    // 0x002578C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_0;
    // 0x002578C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x002578C4: jal         0x002053A8
    // 0x002578C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_1;
    // 0x002578C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x002578CC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x002578D0: beq         $a1, $zero, L_002578EC
    if (ctx->r5 == 0) {
        // 0x002578D4: nop
    
            goto L_002578EC;
    }
    // 0x002578D4: nop

    // 0x002578D8: jal         0x002052D8
    // 0x002578DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x002578DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x002578E0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x002578E4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x002578E8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_002578EC:
    // 0x002578EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002578F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002578F4: jr          $ra
    // 0x002578F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002578F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004481D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004481D8: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x004481DC: blez        $a1, L_00448230
    if (SIGNED(ctx->r5) <= 0) {
        // 0x004481E0: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00448230;
    }
    // 0x004481E0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_004481E4:
    // 0x004481E4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x004481E8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x004481EC: lw          $v1, 0x148($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X148);
    // 0x004481F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004481F4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004481F8: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x004481FC: beq         $v0, $zero, L_00448224
    if (ctx->r2 == 0) {
        // 0x00448200: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00448224;
    }
    // 0x00448200: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00448204: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00448208: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0044820C: beq         $v0, $zero, L_00448224
    if (ctx->r2 == 0) {
        // 0x00448210: nop
    
            goto L_00448224;
    }
    // 0x00448210: nop

    // 0x00448214: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00448218: lw          $v1, 0x148($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X148);
    // 0x0044821C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00448220: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_00448224:
    // 0x00448224: slt         $v0, $t0, $a1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00448228: bne         $v0, $zero, L_004481E4
    if (ctx->r2 != 0) {
        // 0x0044822C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_004481E4;
    }
    // 0x0044822C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_00448230:
    // 0x00448230: jr          $ra
    // 0x00448234: nop

    return;
    // 0x00448234: nop

;}
RECOMP_FUNC void func_00284408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284408: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028440C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284410: lw          $v0, 0xE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XE0);
    // 0x00284414: jr          $ra
    // 0x00284418: nop

    return;
    // 0x00284418: nop

;}
RECOMP_FUNC void func_0028908C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028908C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00289090: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00289094: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00289098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028909C: lui         $s0, 0x2
    ctx->r16 = S32(0X2 << 16);
    // 0x002890A0: ori         $s0, $s0, 0x3DF0
    ctx->r16 = ctx->r16 | 0X3DF0;
    // 0x002890A4: addu        $s0, $s1, $s0
    ctx->r16 = ADD32(ctx->r17, ctx->r16);
    // 0x002890A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002890AC: jal         0x004001D0
    // 0x002890B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004001D0(rdram, ctx);
        goto after_0;
    // 0x002890B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002890B4: jal         0x00220530
    // 0x002890B8: addiu       $a0, $s1, 0x3C8
    ctx->r4 = ADD32(ctx->r17, 0X3C8);
    func_00220530(rdram, ctx);
        goto after_1;
    // 0x002890B8: addiu       $a0, $s1, 0x3C8
    ctx->r4 = ADD32(ctx->r17, 0X3C8);
    after_1:
    // 0x002890BC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x002890C0: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x002890C4: jal         0x00281354
    // 0x002890C8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_00281354(rdram, ctx);
        goto after_2;
    // 0x002890C8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_2:
    // 0x002890CC: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x002890D0: ori         $a0, $a0, 0x9440
    ctx->r4 = ctx->r4 | 0X9440;
    // 0x002890D4: jal         0x0027ADA8
    // 0x002890D8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_0027ADA8(rdram, ctx);
        goto after_3;
    // 0x002890D8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_3:
    // 0x002890DC: jal         0x00401C1C
    // 0x002890E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00401C1C(rdram, ctx);
        goto after_4;
    // 0x002890E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002890E4: bne         $v0, $zero, L_002890F4
    if (ctx->r2 != 0) {
        // 0x002890E8: nop
    
            goto L_002890F4;
    }
    // 0x002890E8: nop

    // 0x002890EC: jal         0x00288B1C
    // 0x002890F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00288B1C(rdram, ctx);
        goto after_5;
    // 0x002890F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_002890F4:
    // 0x002890F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002890F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002890FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289100: jr          $ra
    // 0x00289104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00289104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00256CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00256CE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00256CE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00256CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00256CF0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00256CF4: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x00256CF8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00256CFC: beq         $s0, $zero, L_00256D28
    if (ctx->r16 == 0) {
        // 0x00256D00: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00256D28;
    }
    // 0x00256D00: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00256D04:
    // 0x00256D04: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x00256D08: beq         $v0, $zero, L_00256D1C
    if (ctx->r2 == 0) {
        // 0x00256D0C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00256D1C;
    }
    // 0x00256D0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00256D10: jal         0x0020F6BC
    // 0x00256D14: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_0020F6BC(rdram, ctx);
        goto after_0;
    // 0x00256D14: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x00256D18: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00256D1C:
    // 0x00256D1C: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00256D20: bne         $s0, $zero, L_00256D04
    if (ctx->r16 != 0) {
        // 0x00256D24: nop
    
            goto L_00256D04;
    }
    // 0x00256D24: nop

L_00256D28:
    // 0x00256D28: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x00256D2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00256D30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00256D34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00256D38: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00256D3C: jr          $ra
    // 0x00256D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00256D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
