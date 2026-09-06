#include "recomp.h"
#include "funcs.h"

extern void turok2_patch_cinema_cam_15(uint8_t* rdram, recomp_context* ctx);

RECOMP_FUNC void func_00226D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226D0C: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x00226D10: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00226D14: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00226D18: nop

    // 0x00226D1C: bc1f        L_00226D28
    if (!c1cs) {
        // 0x00226D20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00226D28;
    }
    // 0x00226D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226D24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00226D28:
    // 0x00226D28: jr          $ra
    // 0x00226D2C: nop

    return;
    // 0x00226D2C: nop

;}
RECOMP_FUNC void func_0027D160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027D160: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0027D164: lw          $v1, -0x6770($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6770);
    // 0x0027D168: addiu       $sp, $sp, -0x500
    ctx->r29 = ADD32(ctx->r29, -0X500);
    // 0x0027D16C: sw          $s4, 0x490($sp)
    MEM_W(0X490, ctx->r29) = ctx->r20;
    // 0x0027D170: sw          $ra, 0x49C($sp)
    MEM_W(0X49C, ctx->r29) = ctx->r31;
    // 0x0027D174: sw          $s6, 0x498($sp)
    MEM_W(0X498, ctx->r29) = ctx->r22;
    // 0x0027D178: sw          $s5, 0x494($sp)
    MEM_W(0X494, ctx->r29) = ctx->r21;
    // 0x0027D17C: sw          $s3, 0x48C($sp)
    MEM_W(0X48C, ctx->r29) = ctx->r19;
    // 0x0027D180: sw          $s2, 0x488($sp)
    MEM_W(0X488, ctx->r29) = ctx->r18;
    // 0x0027D184: sw          $s1, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r17;
    // 0x0027D188: sw          $s0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r16;
    // 0x0027D18C: sdc1        $f30, 0x4F8($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X4F8, ctx->r29);
    // 0x0027D190: sdc1        $f29, 0x4F0($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0X4F0, ctx->r29);
    // 0x0027D194: sdc1        $f28, 0x4E8($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X4E8, ctx->r29);
    // 0x0027D198: sdc1        $f27, 0x4E0($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X4E0, ctx->r29);
    // 0x0027D19C: sdc1        $f26, 0x4D8($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X4D8, ctx->r29);
    // 0x0027D1A0: sdc1        $f25, 0x4D0($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X4D0, ctx->r29);
    // 0x0027D1A4: sdc1        $f24, 0x4C8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X4C8, ctx->r29);
    // 0x0027D1A8: sdc1        $f23, 0x4C0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X4C0, ctx->r29);
    // 0x0027D1AC: sdc1        $f22, 0x4B8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X4B8, ctx->r29);
    // 0x0027D1B0: sdc1        $f21, 0x4B0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X4B0, ctx->r29);
    // 0x0027D1B4: sdc1        $f20, 0x4A8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X4A8, ctx->r29);
    // 0x0027D1B8: beq         $v1, $zero, L_0027D1D8
    if (ctx->r3 == 0) {
        // 0x0027D1BC: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_0027D1D8;
    }
    // 0x0027D1BC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
L_0027D1C0:
    // 0x0027D1C0: lw          $v0, 0x51C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X51C);
    // 0x0027D1C4: beq         $v0, $s4, L_0027D1DC
    if (ctx->r2 == ctx->r20) {
        // 0x0027D1C8: addu        $s6, $v1, $zero
        ctx->r22 = ADD32(ctx->r3, 0);
            goto L_0027D1DC;
    }
    // 0x0027D1C8: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x0027D1CC: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x0027D1D0: bne         $v1, $zero, L_0027D1C0
    if (ctx->r3 != 0) {
        // 0x0027D1D4: nop
    
            goto L_0027D1C0;
    }
    // 0x0027D1D4: nop

L_0027D1D8:
    // 0x0027D1D8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_0027D1DC:
    // 0x0027D1DC: lwc1        $f0, 0x18($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X18);
    // 0x0027D1E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D1E4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0027D1E8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027D1EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0027D1F0: jal         0x0027CAB0
    // 0x0027D1F4: swc1        $f0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f0.u32l;
    func_0027CAB0(rdram, ctx);
        goto after_0;
    // 0x0027D1F4: swc1        $f0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f0.u32l;
    after_0:
    // 0x0027D1F8: jal         0x00284188
    // 0x0027D1FC: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x0027D1FC: nop

    after_1:
    // 0x0027D200: bne         $v0, $zero, L_0027D230
    if (ctx->r2 != 0) {
        // 0x0027D204: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_0027D230;
    }
    // 0x0027D204: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0027D208: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x0027D20C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0027D210: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D214: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027D218: lw          $v0, 0x6CB4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CB4);
    // 0x0027D21C: beq         $v0, $zero, L_0027D230
    if (ctx->r2 == 0) {
        // 0x0027D220: nop
    
            goto L_0027D230;
    }
    // 0x0027D220: nop

    // 0x0027D224: jalr        $v0
    // 0x0027D228: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0027D228: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0027D22C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_0027D230:
    // 0x0027D230: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0027D234: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027D238: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0027D23C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D240: lwc1        $f0, -0x66B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66B8);
    // 0x0027D244: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x0027D248: addiu       $v0, $v0, 0x3E8
    ctx->r2 = ADD32(ctx->r2, 0X3E8);
    // 0x0027D24C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027D250: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0027D254: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0027D258: addu        $s5, $s4, $v0
    ctx->r21 = ADD32(ctx->r20, ctx->r2);
    // 0x0027D25C: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0027D260: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x0027D264: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0027D268: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x0027D26C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0027D270: jal         0x00297860
    // 0x0027D274: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    func_00297860(rdram, ctx);
        goto after_3;
    // 0x0027D274: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    after_3:
    // 0x0027D278: jal         0x00284254
    // 0x0027D27C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00284254(rdram, ctx);
        goto after_4;
    // 0x0027D27C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x0027D280: lwc1        $f24, 0x2C($s4)
    ctx->f24.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x0027D284: lwc1        $f25, 0x34($s4)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r20, 0X34);
    // 0x0027D288: lwc1        $f26, 0x38($s4)
    ctx->f26.u32l = MEM_W(ctx->r20, 0X38);
    // 0x0027D28C: lwc1        $f23, 0x3C($s4)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r20, 0X3C);
    // 0x0027D290: lwc1        $f27, 0x40($s4)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r20, 0X40);
    // 0x0027D294: lwc1        $f29, 0x28($s4)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r20, 0X28);
    // 0x0027D298: lwc1        $f28, 0x30($s4)
    ctx->f28.u32l = MEM_W(ctx->r20, 0X30);
    // 0x0027D29C: lwc1        $f30, 0x44($s4)
    ctx->f30.u32l = MEM_W(ctx->r20, 0X44);
    // 0x0027D2A0: lw          $t0, 0x48($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X48);
    // 0x0027D2A4: lw          $t1, 0x4C($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4C);
    // 0x0027D2A8: lw          $t2, 0x50($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X50);
    // 0x0027D2AC: lw          $t3, 0x54($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X54);
    // 0x0027D2B0: sw          $t0, 0x468($sp)
    MEM_W(0X468, ctx->r29) = ctx->r8;
    // 0x0027D2B4: sw          $t1, 0x46C($sp)
    MEM_W(0X46C, ctx->r29) = ctx->r9;
    // 0x0027D2B8: sw          $t2, 0x470($sp)
    MEM_W(0X470, ctx->r29) = ctx->r10;
    // 0x0027D2BC: sw          $t3, 0x474($sp)
    MEM_W(0X474, ctx->r29) = ctx->r11;
    // 0x0027D2C0: lwc1        $f31, 0x5C($s4)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r20, 0X5C);
    // 0x0027D2C4: lwc1        $f6, 0x60($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X60);
    // 0x0027D2C8: addiu       $s3, $sp, 0x468
    ctx->r19 = ADD32(ctx->r29, 0X468);
    // 0x0027D2CC: jal         0x00284188
    // 0x0027D2D0: swc1        $f6, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->f6.u32l;
    func_00284188(rdram, ctx);
        goto after_5;
    // 0x0027D2D0: swc1        $f6, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x0027D2D4: bne         $v0, $zero, L_0027D4FC
    if (ctx->r2 != 0) {
        // 0x0027D2D8: nop
    
            goto L_0027D4FC;
    }
    // 0x0027D2D8: nop

    // 0x0027D2DC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0027D2E0: jal         0x00281D1C
    // 0x0027D2E4: addiu       $a1, $sp, 0x438
    ctx->r5 = ADD32(ctx->r29, 0X438);
    func_00281D1C(rdram, ctx);
        goto after_6;
    // 0x0027D2E4: addiu       $a1, $sp, 0x438
    ctx->r5 = ADD32(ctx->r29, 0X438);
    after_6:
    // 0x0027D2E8: lwc1        $f0, 0x440($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X440);
    // 0x0027D2EC: add.s       $f25, $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f25.fl = ctx->f25.fl + ctx->f0.fl;
    // 0x0027D2F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D2F4: lwc1        $f21, -0x66B4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X66B4);
    // 0x0027D2F8: mul.s       $f20, $f25, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f25.fl, ctx->f21.fl);
    // 0x0027D2FC: lwc1        $f0, 0x438($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X438);
    // 0x0027D300: add.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x0027D304: lwc1        $f0, 0x43C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X43C);
    // 0x0027D308: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0027D30C: jal         0x002982F0
    // 0x0027D310: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0027D310: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_7:
    // 0x0027D314: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027D318: mul.s       $f20, $f24, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f24.fl, ctx->f21.fl);
    // 0x0027D31C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027D320: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0027D324: swc1        $f22, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f22.u32l;
    // 0x0027D328: swc1        $f22, 0x3CC($sp)
    MEM_W(0X3CC, ctx->r29) = ctx->f22.u32l;
    // 0x0027D32C: jal         0x002974C0
    // 0x0027D330: swc1        $f0, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x0027D330: swc1        $f0, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x0027D334: swc1        $f0, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->f0.u32l;
    // 0x0027D338: jal         0x002982F0
    // 0x0027D33C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_9;
    // 0x0027D33C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_9:
    // 0x0027D340: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027D344: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027D348: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0027D34C: swc1        $f0, 0x3A8($sp)
    MEM_W(0X3A8, ctx->r29) = ctx->f0.u32l;
    // 0x0027D350: swc1        $f22, 0x3AC($sp)
    MEM_W(0X3AC, ctx->r29) = ctx->f22.u32l;
    // 0x0027D354: jal         0x002974C0
    // 0x0027D358: swc1        $f22, 0x3B0($sp)
    MEM_W(0X3B0, ctx->r29) = ctx->f22.u32l;
    func_002974C0(rdram, ctx);
        goto after_10;
    // 0x0027D358: swc1        $f22, 0x3B0($sp)
    MEM_W(0X3B0, ctx->r29) = ctx->f22.u32l;
    after_10:
    // 0x0027D35C: add.s       $f20, $f29, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f29.fl + ctx->f28.fl;
    // 0x0027D360: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x0027D364: swc1        $f0, 0x3B4($sp)
    MEM_W(0X3B4, ctx->r29) = ctx->f0.u32l;
    // 0x0027D368: jal         0x002982F0
    // 0x0027D36C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_11;
    // 0x0027D36C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_11:
    // 0x0027D370: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027D374: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027D378: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0027D37C: swc1        $f22, 0x3B8($sp)
    MEM_W(0X3B8, ctx->r29) = ctx->f22.u32l;
    // 0x0027D380: swc1        $f0, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = ctx->f0.u32l;
    // 0x0027D384: jal         0x002974C0
    // 0x0027D388: swc1        $f22, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f22.u32l;
    func_002974C0(rdram, ctx);
        goto after_12;
    // 0x0027D388: swc1        $f22, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f22.u32l;
    after_12:
    // 0x0027D38C: addiu       $s2, $sp, 0x3D8
    ctx->r18 = ADD32(ctx->r29, 0X3D8);
    // 0x0027D390: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0027D394: addiu       $a1, $sp, 0x3A8
    ctx->r5 = ADD32(ctx->r29, 0X3A8);
    // 0x0027D398: addiu       $a2, $sp, 0x3B8
    ctx->r6 = ADD32(ctx->r29, 0X3B8);
    // 0x0027D39C: jal         0x00210F68
    // 0x0027D3A0: swc1        $f0, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_13;
    // 0x0027D3A0: swc1        $f0, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x0027D3A4: addiu       $s0, $s4, 0x13C
    ctx->r16 = ADD32(ctx->r20, 0X13C);
    // 0x0027D3A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D3AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0027D3B0: jal         0x00210F68
    // 0x0027D3B4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00210F68(rdram, ctx);
        goto after_14;
    // 0x0027D3B4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_14:
    // 0x0027D3B8: addiu       $a0, $s4, 0x12C
    ctx->r4 = ADD32(ctx->r20, 0X12C);
    // 0x0027D3BC: addiu       $s1, $sp, 0x3C8
    ctx->r17 = ADD32(ctx->r29, 0X3C8);
    // 0x0027D3C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027D3C4: jal         0x00210F68
    // 0x0027D3C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00210F68(rdram, ctx);
        goto after_15;
    // 0x0027D3C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_15:
    // 0x0027D3CC: addiu       $s0, $sp, 0x3E8
    ctx->r16 = ADD32(ctx->r29, 0X3E8);
    // 0x0027D3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D3D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027D3D8: jal         0x00210F68
    // 0x0027D3DC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00210F68(rdram, ctx);
        goto after_16;
    // 0x0027D3DC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_16:
    // 0x0027D3E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D3E4: jal         0x00211114
    // 0x0027D3E8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_00211114(rdram, ctx);
        goto after_17;
    // 0x0027D3E8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_17:
    // 0x0027D3EC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0027D3F0: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x0027D3F4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0027D3F8: jal         0x0020FC24
    // 0x0027D3FC: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    func_0020FC24(rdram, ctx);
        goto after_18;
    // 0x0027D3FC: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    after_18:
    // 0x0027D400: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0027D404: jal         0x00211114
    // 0x0027D408: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    func_00211114(rdram, ctx);
        goto after_19;
    // 0x0027D408: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    after_19:
    // 0x0027D40C: addiu       $s1, $sp, 0x448
    ctx->r17 = ADD32(ctx->r29, 0X448);
    // 0x0027D410: swc1        $f22, 0x448($sp)
    MEM_W(0X448, ctx->r29) = ctx->f22.u32l;
    // 0x0027D414: swc1        $f22, 0x44C($sp)
    MEM_W(0X44C, ctx->r29) = ctx->f22.u32l;
    // 0x0027D418: swc1        $f22, 0x450($sp)
    MEM_W(0X450, ctx->r29) = ctx->f22.u32l;
    // 0x0027D41C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0027D420: lw          $a1, 0x9C($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X9C);
    // 0x0027D424: lw          $a2, 0xA0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0XA0);
    // 0x0027D428: lw          $a3, 0xA4($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XA4);
    // 0x0027D42C: jal         0x0027BE90
    // 0x0027D430: addiu       $a0, $s4, 0x94
    ctx->r4 = ADD32(ctx->r20, 0X94);
    func_0027BE90(rdram, ctx);
        goto after_20;
    // 0x0027D430: addiu       $a0, $s4, 0x94
    ctx->r4 = ADD32(ctx->r20, 0X94);
    after_20:
    // 0x0027D434: jal         0x0027BD30
    // 0x0027D438: addiu       $a0, $s4, 0xAC
    ctx->r4 = ADD32(ctx->r20, 0XAC);
    func_0027BD30(rdram, ctx);
        goto after_21;
    // 0x0027D438: addiu       $a0, $s4, 0xAC
    ctx->r4 = ADD32(ctx->r20, 0XAC);
    after_21:
    // 0x0027D43C: jal         0x0027BD30
    // 0x0027D440: addiu       $a0, $s4, 0xC0
    ctx->r4 = ADD32(ctx->r20, 0XC0);
    func_0027BD30(rdram, ctx);
        goto after_22;
    // 0x0027D440: addiu       $a0, $s4, 0xC0
    ctx->r4 = ADD32(ctx->r20, 0XC0);
    after_22:
    // 0x0027D444: jal         0x0027BD30
    // 0x0027D448: addiu       $a0, $s4, 0xD4
    ctx->r4 = ADD32(ctx->r20, 0XD4);
    func_0027BD30(rdram, ctx);
        goto after_23;
    // 0x0027D448: addiu       $a0, $s4, 0xD4
    ctx->r4 = ADD32(ctx->r20, 0XD4);
    after_23:
    // 0x0027D44C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027D450: addiu       $a0, $a0, -0x6710
    ctx->r4 = ADD32(ctx->r4, -0X6710);
    // 0x0027D454: beq         $s4, $a0, L_0027D490
    if (ctx->r20 == ctx->r4) {
        // 0x0027D458: addiu       $s0, $sp, 0x228
        ctx->r16 = ADD32(ctx->r29, 0X228);
            goto L_0027D490;
    }
    // 0x0027D458: addiu       $s0, $sp, 0x228
    ctx->r16 = ADD32(ctx->r29, 0X228);
    // 0x0027D45C: lw          $s0, 0x1194($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1194);
    // 0x0027D460: beql        $s0, $zero, L_0027D490
    if (ctx->r16 == 0) {
        // 0x0027D464: addiu       $s0, $sp, 0x228
        ctx->r16 = ADD32(ctx->r29, 0X228);
            goto L_0027D490;
    }
    goto skip_0;
    // 0x0027D464: addiu       $s0, $sp, 0x228
    ctx->r16 = ADD32(ctx->r29, 0X228);
    skip_0:
    // 0x0027D468: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0027D46C:
    // 0x0027D46C: lw          $a1, 0x38($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X38);
    // 0x0027D470: lw          $a2, 0x3C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X3C);
    // 0x0027D474: lw          $a3, 0x40($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X40);
    // 0x0027D478: jal         0x0027BE90
    // 0x0027D47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027BE90(rdram, ctx);
        goto after_24;
    // 0x0027D47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x0027D480: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027D484: bnel        $s0, $zero, L_0027D46C
    if (ctx->r16 != 0) {
        // 0x0027D488: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_0027D46C;
    }
    goto skip_1;
    // 0x0027D488: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_1:
    // 0x0027D48C: addiu       $s0, $sp, 0x228
    ctx->r16 = ADD32(ctx->r29, 0X228);
L_0027D490:
    // 0x0027D490: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D494: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x0027D498: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027D49C: addiu       $s2, $sp, 0xE8
    ctx->r18 = ADD32(ctx->r29, 0XE8);
    // 0x0027D4A0: jal         0x0020C618
    // 0x0027D4A4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020C618(rdram, ctx);
        goto after_25;
    // 0x0027D4A4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_25:
    // 0x0027D4A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D4AC: addiu       $a1, $sp, 0x448
    ctx->r5 = ADD32(ctx->r29, 0X448);
    // 0x0027D4B0: jal         0x0020F85C
    // 0x0027D4B4: addiu       $a2, $sp, 0x458
    ctx->r6 = ADD32(ctx->r29, 0X458);
    func_0020F85C(rdram, ctx);
        goto after_26;
    // 0x0027D4B4: addiu       $a2, $sp, 0x458
    ctx->r6 = ADD32(ctx->r29, 0X458);
    after_26:
    // 0x0027D4B8: lwc1        $f0, 0x458($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X458);
    // 0x0027D4BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D4C0: add.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f0.fl;
    // 0x0027D4C4: lwc1        $f0, 0x45C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X45C);
    // 0x0027D4C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027D4CC: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0027D4D0: lwc1        $f0, 0x460($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X460);
    // 0x0027D4D4: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x0027D4D8: jal         0x0020C618
    // 0x0027D4DC: add.s       $f27, $f27, $f0
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f27.fl = ctx->f27.fl + ctx->f0.fl;
    func_0020C618(rdram, ctx);
        goto after_27;
    // 0x0027D4DC: add.s       $f27, $f27, $f0
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f27.fl = ctx->f27.fl + ctx->f0.fl;
    after_27:
    // 0x0027D4E0: addiu       $s1, $sp, 0x268
    ctx->r17 = ADD32(ctx->r29, 0X268);
    // 0x0027D4E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027D4E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027D4EC: jal         0x0020C618
    // 0x0027D4F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020C618(rdram, ctx);
        goto after_28;
    // 0x0027D4F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_28:
    // 0x0027D4F4: j           L_0027D5E4
    // 0x0027D4F8: addiu       $s0, $sp, 0x128
    ctx->r16 = ADD32(ctx->r29, 0X128);
        goto L_0027D5E4;
    // 0x0027D4F8: addiu       $s0, $sp, 0x128
    ctx->r16 = ADD32(ctx->r29, 0X128);
L_0027D4FC:
    // 0x0027D4FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D500: lwc1        $f21, -0x66B0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X66B0);
    // 0x0027D504: mul.s       $f20, $f25, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f25.fl, ctx->f21.fl);
    // 0x0027D508: jal         0x002982F0
    // 0x0027D50C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_29;
    // 0x0027D50C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_29:
    // 0x0027D510: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027D514: mul.s       $f20, $f24, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f24.fl, ctx->f21.fl);
    // 0x0027D518: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027D51C: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0027D520: swc1        $f22, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f22.u32l;
    // 0x0027D524: swc1        $f22, 0x3CC($sp)
    MEM_W(0X3CC, ctx->r29) = ctx->f22.u32l;
    // 0x0027D528: jal         0x002974C0
    // 0x0027D52C: swc1        $f0, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_30;
    // 0x0027D52C: swc1        $f0, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->f0.u32l;
    after_30:
    // 0x0027D530: swc1        $f0, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->f0.u32l;
    // 0x0027D534: jal         0x002982F0
    // 0x0027D538: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_31;
    // 0x0027D538: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_31:
    // 0x0027D53C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027D540: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027D544: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0027D548: swc1        $f0, 0x3A8($sp)
    MEM_W(0X3A8, ctx->r29) = ctx->f0.u32l;
    // 0x0027D54C: swc1        $f22, 0x3AC($sp)
    MEM_W(0X3AC, ctx->r29) = ctx->f22.u32l;
    // 0x0027D550: jal         0x002974C0
    // 0x0027D554: swc1        $f22, 0x3B0($sp)
    MEM_W(0X3B0, ctx->r29) = ctx->f22.u32l;
    func_002974C0(rdram, ctx);
        goto after_32;
    // 0x0027D554: swc1        $f22, 0x3B0($sp)
    MEM_W(0X3B0, ctx->r29) = ctx->f22.u32l;
    after_32:
    // 0x0027D558: add.s       $f20, $f29, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f29.fl + ctx->f28.fl;
    // 0x0027D55C: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x0027D560: swc1        $f0, 0x3B4($sp)
    MEM_W(0X3B4, ctx->r29) = ctx->f0.u32l;
    // 0x0027D564: jal         0x002982F0
    // 0x0027D568: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_33;
    // 0x0027D568: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_33:
    // 0x0027D56C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027D570: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0027D574: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0027D578: swc1        $f22, 0x3B8($sp)
    MEM_W(0X3B8, ctx->r29) = ctx->f22.u32l;
    // 0x0027D57C: swc1        $f0, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = ctx->f0.u32l;
    // 0x0027D580: jal         0x002974C0
    // 0x0027D584: swc1        $f22, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f22.u32l;
    func_002974C0(rdram, ctx);
        goto after_34;
    // 0x0027D584: swc1        $f22, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f22.u32l;
    after_34:
    // 0x0027D588: addiu       $s0, $sp, 0x3D8
    ctx->r16 = ADD32(ctx->r29, 0X3D8);
    // 0x0027D58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D590: addiu       $a1, $sp, 0x3A8
    ctx->r5 = ADD32(ctx->r29, 0X3A8);
    // 0x0027D594: addiu       $a2, $sp, 0x3B8
    ctx->r6 = ADD32(ctx->r29, 0X3B8);
    // 0x0027D598: jal         0x00210F68
    // 0x0027D59C: swc1        $f0, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_35;
    // 0x0027D59C: swc1        $f0, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f0.u32l;
    after_35:
    // 0x0027D5A0: addiu       $a0, $s4, 0x12C
    ctx->r4 = ADD32(ctx->r20, 0X12C);
    // 0x0027D5A4: addiu       $a1, $sp, 0x3C8
    ctx->r5 = ADD32(ctx->r29, 0X3C8);
    // 0x0027D5A8: lw          $t0, 0x3D8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3D8);
    // 0x0027D5AC: lw          $t1, 0x3DC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3DC);
    // 0x0027D5B0: lw          $t2, 0x3E0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3E0);
    // 0x0027D5B4: lw          $t3, 0x3E4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3E4);
    // 0x0027D5B8: sw          $t0, 0x13C($s4)
    MEM_W(0X13C, ctx->r20) = ctx->r8;
    // 0x0027D5BC: sw          $t1, 0x140($s4)
    MEM_W(0X140, ctx->r20) = ctx->r9;
    // 0x0027D5C0: sw          $t2, 0x144($s4)
    MEM_W(0X144, ctx->r20) = ctx->r10;
    // 0x0027D5C4: sw          $t3, 0x148($s4)
    MEM_W(0X148, ctx->r20) = ctx->r11;
    // 0x0027D5C8: jal         0x00210F68
    // 0x0027D5CC: addiu       $a2, $s4, 0x13C
    ctx->r6 = ADD32(ctx->r20, 0X13C);
    func_00210F68(rdram, ctx);
        goto after_36;
    // 0x0027D5CC: addiu       $a2, $s4, 0x13C
    ctx->r6 = ADD32(ctx->r20, 0X13C);
    after_36:
    // 0x0027D5D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D5D4: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x0027D5D8: jal         0x00211114
    // 0x0027D5DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00211114(rdram, ctx);
        goto after_37;
    // 0x0027D5DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_37:
    // 0x0027D5E0: addiu       $s0, $sp, 0x128
    ctx->r16 = ADD32(ctx->r29, 0X128);
L_0027D5E4:
    // 0x0027D5E4: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x0027D5E8: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027D5EC: mfc1        $a3, $f27
    ctx->r7 = (int32_t)ctx->f_odd[(27 - 1) * 2];
    // 0x0027D5F0: jal         0x0020FC24
    // 0x0027D5F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020FC24(rdram, ctx);
        goto after_38;
    // 0x0027D5F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_38:
    // 0x0027D5F8: addiu       $a0, $s4, 0x14C
    ctx->r4 = ADD32(ctx->r20, 0X14C);
    // 0x0027D5FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027D600: jal         0x0020C618
    // 0x0027D604: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020C618(rdram, ctx);
        goto after_39;
    // 0x0027D604: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_39:
    // 0x0027D608: addiu       $s1, $s4, 0x14C
    ctx->r17 = ADD32(ctx->r20, 0X14C);
    // 0x0027D60C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        turok2_patch_pull_camera_eye(rdram, ctx);

    // 0x0027D610: jal         0x002101A0
    // 0x0027D614: addiu       $a1, $s4, 0x114
    ctx->r5 = ADD32(ctx->r20, 0X114);
    func_002101A0(rdram, ctx);
        goto after_40;
    // 0x0027D614: addiu       $a1, $s4, 0x114
    ctx->r5 = ADD32(ctx->r20, 0X114);
    after_40:
    // 0x0027D618: addiu       $a0, $s4, 0x18C
    ctx->r4 = ADD32(ctx->r20, 0X18C);
    // 0x0027D61C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027D620: swc1        $f24, 0x120($s4)
    MEM_W(0X120, ctx->r20) = ctx->f24.u32l;
    // 0x0027D624: swc1        $f29, 0x124($s4)
    MEM_W(0X124, ctx->r20) = ctx->f_odd[(29 - 1) * 2];
    // 0x0027D628: jal         0x0020C208
    // 0x0027D62C: swc1        $f25, 0x128($s4)
    MEM_W(0X128, ctx->r20) = ctx->f_odd[(25 - 1) * 2];
    func_0020C208(rdram, ctx);
        goto after_41;
    // 0x0027D62C: swc1        $f25, 0x128($s4)
    MEM_W(0X128, ctx->r20) = ctx->f_odd[(25 - 1) * 2];
    after_41:
    // 0x0027D630: addiu       $s0, $sp, 0x168
    ctx->r16 = ADD32(ctx->r29, 0X168);
    // 0x0027D634: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x0027D638: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0027D63C: jal         0x002105A4
    // 0x0027D640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_42;
    // 0x0027D640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_42:
    // 0x0027D644: addiu       $s2, $sp, 0x228
    ctx->r18 = ADD32(ctx->r29, 0X228);
    // 0x0027D648: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0027D64C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027D650: jal         0x0020C618
    // 0x0027D654: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020C618(rdram, ctx);
        goto after_43;
    // 0x0027D654: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_43:
    // 0x0027D658: addiu       $s0, $sp, 0x1A8
    ctx->r16 = ADD32(ctx->r29, 0X1A8);
    // 0x0027D65C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D660: jal         0x0020C208
    // 0x0027D664: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020C208(rdram, ctx);
        goto after_44;
    // 0x0027D664: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_44:
    // 0x0027D668: addiu       $s1, $sp, 0x1E8
    ctx->r17 = ADD32(ctx->r29, 0X1E8);
    // 0x0027D66C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027D670: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027D674: jal         0x0020C618
    // 0x0027D678: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_0020C618(rdram, ctx);
        goto after_45;
    // 0x0027D678: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_45:
    // 0x0027D67C: addiu       $a0, $s4, 0x20C
    ctx->r4 = ADD32(ctx->r20, 0X20C);
    // 0x0027D680: jal         0x0020FF80
    // 0x0027D684: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020FF80(rdram, ctx);
        goto after_46;
    // 0x0027D684: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_46:
    // 0x0027D688: beq         $s6, $zero, L_0027D8A0
    if (ctx->r22 == 0) {
        // 0x0027D68C: nop
    
            goto L_0027D8A0;
    }
    // 0x0027D68C: nop

    // 0x0027D690: lw          $v0, 0xA1C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XA1C);
    // 0x0027D694: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0027D698: beq         $v0, $zero, L_0027D8A0
    if (ctx->r2 == 0) {
        // 0x0027D69C: nop
    
            goto L_0027D8A0;
    }
    // 0x0027D69C: nop

    // 0x0027D6A0: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x0027D6A4: bne         $v0, $zero, L_0027D8A0
    if (ctx->r2 != 0) {
        // 0x0027D6A8: nop
    
            goto L_0027D8A0;
    }
    // 0x0027D6A8: nop

    // 0x0027D6AC: jal         0x00284188
    // 0x0027D6B0: nop

    func_00284188(rdram, ctx);
        goto after_47;
    // 0x0027D6B0: nop

    after_47:
    // 0x0027D6B4: bne         $v0, $zero, L_0027D8A0
    if (ctx->r2 != 0) {
        // 0x0027D6B8: nop
    
            goto L_0027D8A0;
    }
    // 0x0027D6B8: nop

    // 0x0027D6BC: lwc1        $f12, 0x84($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X84);
    // 0x0027D6C0: jal         0x002982F0
    // 0x0027D6C4: nop

    func_002982F0(rdram, ctx);
        goto after_48;
    // 0x0027D6C4: nop

    after_48:
    // 0x0027D6C8: lwc1        $f1, 0x7C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X7C);
    // 0x0027D6CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D6D0: lwc1        $f22, -0x66AC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X66AC);
    // 0x0027D6D4: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x0027D6D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D6DC: lwc1        $f20, -0x66A8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X66A8);
    // 0x0027D6E0: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027D6E4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D6E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D6EC: lwc1        $f21, -0x66A4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X66A4);
    // 0x0027D6F0: add.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f21.fl;
    // 0x0027D6F4: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0027D6F8: nop

    // 0x0027D6FC: bc1t        L_0027D724
    if (c1cs) {
        // 0x0027D700: mov.s       $f1, $f20
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
            goto L_0027D724;
    }
    // 0x0027D700: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
    // 0x0027D704: lwc1        $f12, 0x84($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X84);
    // 0x0027D708: jal         0x002982F0
    // 0x0027D70C: nop

    func_002982F0(rdram, ctx);
        goto after_49;
    // 0x0027D70C: nop

    after_49:
    // 0x0027D710: lwc1        $f1, 0x7C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X7C);
    // 0x0027D714: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x0027D718: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027D71C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D720: add.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f21.fl;
L_0027D724:
    // 0x0027D724: lwc1        $f12, 0x88($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X88);
    // 0x0027D728: jal         0x002982F0
    // 0x0027D72C: swc1        $f1, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    func_002982F0(rdram, ctx);
        goto after_50;
    // 0x0027D72C: swc1        $f1, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    after_50:
    // 0x0027D730: lwc1        $f1, 0x80($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X80);
    // 0x0027D734: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D738: lwc1        $f22, -0x66A0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X66A0);
    // 0x0027D73C: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x0027D740: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D744: lwc1        $f20, -0x669C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X669C);
    // 0x0027D748: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027D74C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D750: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D754: lwc1        $f21, -0x6698($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6698);
    // 0x0027D758: add.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f21.fl;
    // 0x0027D75C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0027D760: nop

    // 0x0027D764: bc1t        L_0027D78C
    if (c1cs) {
        // 0x0027D768: mov.s       $f4, $f20
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.fl = ctx->f20.fl;
            goto L_0027D78C;
    }
    // 0x0027D768: mov.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.fl = ctx->f20.fl;
    // 0x0027D76C: lwc1        $f12, 0x88($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X88);
    // 0x0027D770: jal         0x002982F0
    // 0x0027D774: nop

    func_002982F0(rdram, ctx);
        goto after_51;
    // 0x0027D774: nop

    after_51:
    // 0x0027D778: lwc1        $f1, 0x80($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X80);
    // 0x0027D77C: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x0027D780: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027D784: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D788: add.s       $f4, $f1, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f4.fl = ctx->f1.fl + ctx->f21.fl;
L_0027D78C:
    // 0x0027D78C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D790: lwc1        $f3, 0x6D28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0027D794: lwc1        $f1, 0x8C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8C);
    // 0x0027D798: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0027D79C: lwc1        $f0, 0x90($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X90);
    // 0x0027D7A0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0027D7A4: lwc1        $f2, 0x84($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X84);
    // 0x0027D7A8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0027D7AC: lwc1        $f0, 0x88($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X88);
    // 0x0027D7B0: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0027D7B4: swc1        $f4, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->f4.u32l;
    // 0x0027D7B8: swc1        $f2, 0x84($s4)
    MEM_W(0X84, ctx->r20) = ctx->f2.u32l;
    // 0x0027D7BC: swc1        $f0, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->f0.u32l;
    // 0x0027D7C0: lwc1        $f1, 0xA80($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0XA80);
    // 0x0027D7C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D7C8: lwc1        $f0, -0x6694($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6694);
    // 0x0027D7CC: mul.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D7D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027D7D4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0027D7D8: nop

    // 0x0027D7DC: bc1tl       L_0027D7FC
    if (c1cs) {
        // 0x0027D7E0: mov.s       $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
            goto L_0027D7FC;
    }
    goto skip_2;
    // 0x0027D7E0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    skip_2:
    // 0x0027D7E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D7E8: lwc1        $f0, -0x6690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6690);
    // 0x0027D7EC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x0027D7F0: nop

    // 0x0027D7F4: bc1tl       L_0027D7FC
    if (c1cs) {
        // 0x0027D7F8: mov.s       $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
            goto L_0027D7FC;
    }
    goto skip_3;
    // 0x0027D7F8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    skip_3:
L_0027D7FC:
    // 0x0027D7FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D800: lwc1        $f20, -0x668C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X668C);
    // 0x0027D804: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x0027D808: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x0027D80C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0027D810: jal         0x002117DC
    // 0x0027D814: addiu       $a0, $s4, 0x7C
    ctx->r4 = ADD32(ctx->r20, 0X7C);
    func_002117DC(rdram, ctx);
        goto after_52;
    // 0x0027D814: addiu       $a0, $s4, 0x7C
    ctx->r4 = ADD32(ctx->r20, 0X7C);
    after_52:
    // 0x0027D818: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x0027D81C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x0027D820: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0027D824: jal         0x002117DC
    // 0x0027D828: addiu       $a0, $s4, 0x80
    ctx->r4 = ADD32(ctx->r20, 0X80);
    func_002117DC(rdram, ctx);
        goto after_53;
    // 0x0027D828: addiu       $a0, $s4, 0x80
    ctx->r4 = ADD32(ctx->r20, 0X80);
    after_53:
    // 0x0027D82C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D830: lwc1        $f1, -0x6688($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6688);
    // 0x0027D834: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0027D838: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D83C: lwc1        $f20, -0x6684($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6684);
    // 0x0027D840: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x0027D844: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D848: lwc1        $f0, -0x6680($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6680);
    // 0x0027D84C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027D850: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D854: lwc1        $f21, -0x667C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X667C);
    // 0x0027D858: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0027D85C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027D860: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0027D864: jal         0x002117DC
    // 0x0027D868: addiu       $a0, $s4, 0x8C
    ctx->r4 = ADD32(ctx->r20, 0X8C);
    func_002117DC(rdram, ctx);
        goto after_54;
    // 0x0027D868: addiu       $a0, $s4, 0x8C
    ctx->r4 = ADD32(ctx->r20, 0X8C);
    after_54:
    // 0x0027D86C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D870: lwc1        $f0, -0x6678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6678);
    // 0x0027D874: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0027D878: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D87C: lwc1        $f1, -0x6674($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6674);
    // 0x0027D880: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x0027D884: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027D888: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027D88C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0027D890: jal         0x002117DC
    // 0x0027D894: addiu       $a0, $s4, 0x90
    ctx->r4 = ADD32(ctx->r20, 0X90);
    func_002117DC(rdram, ctx);
        goto after_55;
    // 0x0027D894: addiu       $a0, $s4, 0x90
    ctx->r4 = ADD32(ctx->r20, 0X90);
    after_55:
    // 0x0027D898: j           L_0027D8B0
    // 0x0027D89C: nop

        goto L_0027D8B0;
    // 0x0027D89C: nop

L_0027D8A0:
    // 0x0027D8A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D8A4: lwc1        $f0, -0x6670($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6670);
    // 0x0027D8A8: swc1        $f0, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->f0.u32l;
    // 0x0027D8AC: swc1        $f0, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->f0.u32l;
L_0027D8B0:
    // 0x0027D8B0: jal         0x00284188
    // 0x0027D8B4: nop

    func_00284188(rdram, ctx);
        goto after_56;
    // 0x0027D8B4: nop

    after_56:
    // 0x0027D8B8: beq         $v0, $zero, L_0027D8D0
    if (ctx->r2 == 0) {
        // 0x0027D8BC: nop
    
            goto L_0027D8D0;
    }
    // 0x0027D8BC: nop

    // 0x0027D8C0: jal         0x00284390
    // 0x0027D8C4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00284390(rdram, ctx);
        goto after_57;
    // 0x0027D8C4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_57:
    // 0x0027D8C8: j           L_0027D8E4
    // 0x0027D8CC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
        goto L_0027D8E4;
    // 0x0027D8CC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_0027D8D0:
    // 0x0027D8D0: lwc1        $f1, 0x518($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X518);
    // 0x0027D8D4: lwc1        $f6, 0x478($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X478);
    // 0x0027D8D8: sub.s       $f0, $f6, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f1.fl;
    // 0x0027D8DC: mul.s       $f0, $f31, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f31.fl, ctx->f0.fl);
    // 0x0027D8E0: add.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl + ctx->f0.fl;
L_0027D8E4:
    // 0x0027D8E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D8E8: lwc1        $f0, -0x666C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X666C);
    // 0x0027D8EC: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0027D8F0: lwc1        $f1, 0x288($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X288);
    // 0x0027D8F4: lwc1        $f0, 0x28C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X28C);
    // 0x0027D8F8: div.s       $f23, $f1, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D8FC: jal         0x002982F0
    // 0x0027D900: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_002982F0(rdram, ctx);
        goto after_58;
    // 0x0027D900: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_58:
    // 0x0027D904: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x0027D908: jal         0x002974C0
    // 0x0027D90C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_59;
    // 0x0027D90C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_59:
    // 0x0027D910: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D914: lwc1        $f20, -0x6668($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6668);
    // 0x0027D918: div.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0027D91C: mul.s       $f20, $f21, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x0027D920: lwc1        $f0, 0x78($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X78);
    // 0x0027D924: div.s       $f21, $f20, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f23.fl);
    // 0x0027D928: div.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0027D92C: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x0027D930: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D934: lwc1        $f1, -0x6664($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6664);
    // 0x0027D938: lwc1        $f0, 0x74($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X74);
    // 0x0027D93C: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0027D940: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027D944: jal         0x00298470
    // 0x0027D948: div.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f12.fl);
    func_00298470(rdram, ctx);
        goto after_60;
    // 0x0027D948: div.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f12.fl);
    after_60:
    // 0x0027D94C: jal         0x0021153C
    // 0x0027D950: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_0021153C(rdram, ctx);
        goto after_61;
    // 0x0027D950: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_61:
    // 0x0027D954: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D958: lwc1        $f1, -0x6660($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6660);
    // 0x0027D95C: mul.s       $f22, $f0, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027D960: lwc1        $f0, 0x510($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X510);
    // 0x0027D964: mul.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0027D968: div.s       $f23, $f20, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
    // 0x0027D96C: swc1        $f23, 0x70($s4)
    MEM_W(0X70, ctx->r20) = ctx->f_odd[(23 - 1) * 2];
    // 0x0027D970: mul.s       $f21, $f0, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0027D974: jal         0x00284188
    // 0x0027D978: swc1        $f22, 0x6C($s4)
    MEM_W(0X6C, ctx->r20) = ctx->f22.u32l;
    func_00284188(rdram, ctx);
        goto after_62;
    // 0x0027D978: swc1        $f22, 0x6C($s4)
    MEM_W(0X6C, ctx->r20) = ctx->f22.u32l;
    after_62:
        turok2_patch_gameplay_camera(rdram, ctx);

    // 0x0027D97C: beq         $v0, $zero, L_0027D9A8
    if (ctx->r2 == 0) {
        // 0x0027D980: addiu       $s0, $sp, 0x2A8
        ctx->r16 = ADD32(ctx->r29, 0X2A8);
            goto L_0027D9A8;
    }
    // 0x0027D980: addiu       $s0, $sp, 0x2A8
    ctx->r16 = ADD32(ctx->r29, 0X2A8);
    // 0x0027D984: jal         0x002843D4
    // 0x0027D988: nop

    func_002843D4(rdram, ctx);
        goto after_63;
    // 0x0027D988: nop

    after_63:
    // 0x0027D98C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027D990: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027D994: blez        $v0, L_0027D9A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0027D998: addiu       $s0, $sp, 0x2A8
        ctx->r16 = ADD32(ctx->r29, 0X2A8);
            goto L_0027D9A8;
    }
    // 0x0027D998: addiu       $s0, $sp, 0x2A8
    ctx->r16 = ADD32(ctx->r29, 0X2A8);
    // 0x0027D99C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027D9A0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027D9A4: swc1        $f0, 0x510($s4)
    MEM_W(0X510, ctx->r20) = ctx->f0.u32l;
L_0027D9A8:
    // 0x0027D9A8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0027D9AC: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027D9B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D9B4: lwc1        $f0, -0x665C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X665C);
    // 0x0027D9B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D9BC: lwc1        $f1, -0x6658($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6658);
    // 0x0027D9C0: mul.s       $f0, $f31, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f31.fl, ctx->f0.fl);
    // 0x0027D9C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D9C8: lwc1        $f20, -0x6654($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6654);
    // 0x0027D9CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027D9D0: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027D9D4: lwc1        $f1, 0x510($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X510);
    // 0x0027D9D8: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x0027D9DC: addiu       $a1, $s4, 0x68
    ctx->r5 = ADD32(ctx->r20, 0X68);
    // 0x0027D9E0: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027D9E4: jal         0x0029815C
    // 0x0027D9E8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0029815C(rdram, ctx);
        goto after_64;
    // 0x0027D9E8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_64:
    // 0x0027D9EC: addiu       $s2, $sp, 0x2E8
    ctx->r18 = ADD32(ctx->r29, 0X2E8);
    // 0x0027D9F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0027D9F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0027D9F8: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x0027D9FC: jal         0x0020FC74
    // 0x0027DA00: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_0020FC74(rdram, ctx);
        goto after_65;
    // 0x0027DA00: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_65:
    // 0x0027DA04: addiu       $s1, $sp, 0x228
    ctx->r17 = ADD32(ctx->r29, 0X228);
    // 0x0027DA08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027DA0C: addiu       $s3, $sp, 0x1E8
    ctx->r19 = ADD32(ctx->r29, 0X1E8);
    // 0x0027DA10: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0027DA14: jal         0x0020C890
    // 0x0027DA18: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020C890(rdram, ctx);
        goto after_66;
    // 0x0027DA18: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_66:
    // 0x0027DA1C: addiu       $s0, $s4, 0x1CC
    ctx->r16 = ADD32(ctx->r20, 0X1CC);
    // 0x0027DA20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027DA24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0027DA28: jal         0x0020C890
    // 0x0027DA2C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020C890(rdram, ctx);
        goto after_67;
    // 0x0027DA2C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_67:
    // 0x0027DA30: jal         0x0020F7EC
    // 0x0027DA34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F7EC(rdram, ctx);
        goto after_68;
    // 0x0027DA34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_68:
    // 0x0027DA38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0027DA3C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0027DA40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027DA44: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0027DA48: addiu       $a1, $a1, 0x368
    ctx->r5 = ADD32(ctx->r5, 0X368);
    // 0x0027DA4C: jal         0x0020CC94
    // 0x0027DA50: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    func_0020CC94(rdram, ctx);
        goto after_69;
    // 0x0027DA50: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    after_69:
    // 0x0027DA54: addiu       $s0, $sp, 0x328
    ctx->r16 = ADD32(ctx->r29, 0X328);
    // 0x0027DA58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027DA5C: jal         0x0020FF80
    // 0x0027DA60: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020FF80(rdram, ctx);
        goto after_70;
    // 0x0027DA60: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_70:
    // 0x0027DA64: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0027DA68: addiu       $s1, $s1, -0x5378
    ctx->r17 = ADD32(ctx->r17, -0X5378);
    // 0x0027DA6C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0027DA70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0027DA74: bne         $v1, $v0, L_0027DAB4
    if (ctx->r3 != ctx->r2) {
        // 0x0027DA78: nop
    
            goto L_0027DAB4;
    }
    // 0x0027DA78: nop

    // 0x0027DA7C: lwc1        $f1, 0x18($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X18);
    // 0x0027DA80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DA84: lwc1        $f0, -0x6650($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6650);
    // 0x0027DA88: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027DA8C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0027DA90: jal         0x00210790
    // 0x0027DA94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210790(rdram, ctx);
        goto after_71;
    // 0x0027DA94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_71:
    // 0x0027DA98: lwc1        $f1, 0x18($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X18);
    // 0x0027DA9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DAA0: lwc1        $f0, -0x664C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X664C);
    // 0x0027DAA4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027DAA8: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0027DAAC: jal         0x00210968
    // 0x0027DAB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210968(rdram, ctx);
        goto after_72;
    // 0x0027DAB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_72:
L_0027DAB4:
    // 0x0027DAB4: jal         0x0020F7EC
    // 0x0027DAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F7EC(rdram, ctx);
        goto after_73;
    // 0x0027DAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_73:
    // 0x0027DABC: lwc1        $f0, 0x328($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X328);
    // 0x0027DAC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DAC4: lwc1        $f2, -0x6648($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6648);
    // 0x0027DAC8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027DACC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DAD0: lwc1        $f1, -0x6644($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6644);
    // 0x0027DAD4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027DAD8: nop

    // 0x0027DADC: bc1fl       L_0027DAE4
    if (!c1cs) {
        // 0x0027DAE0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027DAE4;
    }
    goto skip_4;
    // 0x0027DAE0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0027DAE4:
    // 0x0027DAE4: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027DAE8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027DAEC: sb          $v0, 0x8($s5)
    MEM_B(0X8, ctx->r21) = ctx->r2;
    // 0x0027DAF0: lwc1        $f0, 0x338($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X338);
    // 0x0027DAF4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027DAF8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027DAFC: nop

    // 0x0027DB00: bc1fl       L_0027DB08
    if (!c1cs) {
        // 0x0027DB04: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027DB08;
    }
    goto skip_5;
    // 0x0027DB04: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_0027DB08:
    // 0x0027DB08: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027DB0C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027DB10: sb          $v0, 0x9($s5)
    MEM_B(0X9, ctx->r21) = ctx->r2;
    // 0x0027DB14: lwc1        $f0, 0x348($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X348);
    // 0x0027DB18: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027DB1C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027DB20: nop

    // 0x0027DB24: bc1fl       L_0027DB2C
    if (!c1cs) {
        // 0x0027DB28: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027DB2C;
    }
    goto skip_6;
    // 0x0027DB28: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_6:
L_0027DB2C:
    // 0x0027DB2C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027DB30: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027DB34: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x0027DB38: lwc1        $f0, 0x32C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X32C);
    // 0x0027DB3C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027DB40: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027DB44: nop

    // 0x0027DB48: bc1fl       L_0027DB50
    if (!c1cs) {
        // 0x0027DB4C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027DB50;
    }
    goto skip_7;
    // 0x0027DB4C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_7:
L_0027DB50:
    // 0x0027DB50: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027DB54: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027DB58: sb          $v0, 0x18($s5)
    MEM_B(0X18, ctx->r21) = ctx->r2;
    // 0x0027DB5C: lwc1        $f0, 0x33C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X33C);
    // 0x0027DB60: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027DB64: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027DB68: nop

    // 0x0027DB6C: bc1fl       L_0027DB74
    if (!c1cs) {
        // 0x0027DB70: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027DB74;
    }
    goto skip_8;
    // 0x0027DB70: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_8:
L_0027DB74:
    // 0x0027DB74: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027DB78: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027DB7C: sb          $v0, 0x19($s5)
    MEM_B(0X19, ctx->r21) = ctx->r2;
    // 0x0027DB80: lwc1        $f0, 0x34C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x0027DB84: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027DB88: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027DB8C: nop

    // 0x0027DB90: bc1fl       L_0027DB98
    if (!c1cs) {
        // 0x0027DB94: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0027DB98;
    }
    goto skip_9;
    // 0x0027DB94: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_9:
L_0027DB98:
    // 0x0027DB98: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027DB9C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x0027DBA0: sb          $v0, 0x1A($s5)
    MEM_B(0X1A, ctx->r21) = ctx->r2;
    // 0x0027DBA4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0027DBA8: sb          $zero, 0x0($s5)
    MEM_B(0X0, ctx->r21) = 0;
    // 0x0027DBAC: sb          $zero, 0x1($s5)
    MEM_B(0X1, ctx->r21) = 0;
    // 0x0027DBB0: sb          $zero, 0x2($s5)
    MEM_B(0X2, ctx->r21) = 0;
    // 0x0027DBB4: sb          $zero, 0x3($s5)
    MEM_B(0X3, ctx->r21) = 0;
    // 0x0027DBB8: sb          $zero, 0x4($s5)
    MEM_B(0X4, ctx->r21) = 0;
    // 0x0027DBBC: sb          $zero, 0x5($s5)
    MEM_B(0X5, ctx->r21) = 0;
    // 0x0027DBC0: sb          $zero, 0x6($s5)
    MEM_B(0X6, ctx->r21) = 0;
    // 0x0027DBC4: sb          $zero, 0x7($s5)
    MEM_B(0X7, ctx->r21) = 0;
    // 0x0027DBC8: sb          $zero, 0x10($s5)
    MEM_B(0X10, ctx->r21) = 0;
    // 0x0027DBCC: sb          $v0, 0x11($s5)
    MEM_B(0X11, ctx->r21) = ctx->r2;
    // 0x0027DBD0: sb          $zero, 0x12($s5)
    MEM_B(0X12, ctx->r21) = 0;
    // 0x0027DBD4: sb          $zero, 0x13($s5)
    MEM_B(0X13, ctx->r21) = 0;
    // 0x0027DBD8: sb          $zero, 0x14($s5)
    MEM_B(0X14, ctx->r21) = 0;
    // 0x0027DBDC: sb          $v0, 0x15($s5)
    MEM_B(0X15, ctx->r21) = ctx->r2;
    // 0x0027DBE0: sb          $zero, 0x16($s5)
    MEM_B(0X16, ctx->r21) = 0;
    // 0x0027DBE4: sb          $zero, 0x17($s5)
    MEM_B(0X17, ctx->r21) = 0;
    // 0x0027DBE8: lbu         $v0, -0x197($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X197);
    // 0x0027DBEC: bnel        $v0, $zero, L_0027DC74
    if (ctx->r2 != 0) {
        // 0x0027DBF0: sw          $zero, 0x3F8($sp)
        MEM_W(0X3F8, ctx->r29) = 0;
            goto L_0027DC74;
    }
    goto skip_10;
    // 0x0027DBF0: sw          $zero, 0x3F8($sp)
    MEM_W(0X3F8, ctx->r29) = 0;
    skip_10:
    // 0x0027DBF4: mul.s       $f20, $f22, $f23
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f23.fl);
    // 0x0027DBF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DBFC: lwc1        $f0, -0x6640($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6640);
    // 0x0027DC00: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027DC04: jal         0x002974C0
    // 0x0027DC08: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_74;
    // 0x0027DC08: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_74:
    // 0x0027DC0C: lwc1        $f1, 0x510($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X510);
    // 0x0027DC10: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0027DC14: sw          $zero, 0x3F8($sp)
    MEM_W(0X3F8, ctx->r29) = 0;
    // 0x0027DC18: sw          $zero, 0x3FC($sp)
    MEM_W(0X3FC, ctx->r29) = 0;
    // 0x0027DC1C: sw          $zero, 0x400($sp)
    MEM_W(0X400, ctx->r29) = 0;
    // 0x0027DC20: jal         0x002982F0
    // 0x0027DC24: div.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    func_002982F0(rdram, ctx);
        goto after_75;
    // 0x0027DC24: div.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    after_75:
    // 0x0027DC28: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027DC2C: div.s       $f1, $f0, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = DIV_S(ctx->f0.fl, ctx->f23.fl);
    // 0x0027DC30: swc1        $f0, 0x404($sp)
    MEM_W(0X404, ctx->r29) = ctx->f0.u32l;
    // 0x0027DC34: swc1        $f1, 0x408($sp)
    MEM_W(0X408, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DC38: lwc1        $f2, 0x510($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X510);
    // 0x0027DC3C: neg.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = -ctx->f0.fl;
    // 0x0027DC40: swc1        $f1, 0x414($sp)
    MEM_W(0X414, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DC44: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0027DC48: swc1        $f3, 0x410($sp)
    MEM_W(0X410, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027DC4C: swc1        $f0, 0x41C($sp)
    MEM_W(0X41C, ctx->r29) = ctx->f0.u32l;
    // 0x0027DC50: swc1        $f1, 0x420($sp)
    MEM_W(0X420, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DC54: swc1        $f3, 0x428($sp)
    MEM_W(0X428, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027DC58: swc1        $f1, 0x42C($sp)
    MEM_W(0X42C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DC5C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x0027DC60: swc1        $f2, 0x40C($sp)
    MEM_W(0X40C, ctx->r29) = ctx->f2.u32l;
    // 0x0027DC64: swc1        $f2, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->f2.u32l;
    // 0x0027DC68: swc1        $f2, 0x424($sp)
    MEM_W(0X424, ctx->r29) = ctx->f2.u32l;
    // 0x0027DC6C: j           L_0027DCF0
    // 0x0027DC70: swc1        $f2, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->f2.u32l;
        goto L_0027DCF0;
    // 0x0027DC70: swc1        $f2, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->f2.u32l;
L_0027DC74:
    // 0x0027DC74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DC78: lwc1        $f0, -0x663C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X663C);
    // 0x0027DC7C: mul.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x0027DC80: nop

    // 0x0027DC84: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0027DC88: nop

    // 0x0027DC8C: mul.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0027DC90: sw          $zero, 0x3FC($sp)
    MEM_W(0X3FC, ctx->r29) = 0;
    // 0x0027DC94: sw          $zero, 0x400($sp)
    MEM_W(0X400, ctx->r29) = 0;
    // 0x0027DC98: mul.s       $f5, $f0, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0027DC9C: swc1        $f2, 0x404($sp)
    MEM_W(0X404, ctx->r29) = ctx->f2.u32l;
    // 0x0027DCA0: swc1        $f0, 0x408($sp)
    MEM_W(0X408, ctx->r29) = ctx->f0.u32l;
    // 0x0027DCA4: lwc1        $f1, 0x510($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X510);
    // 0x0027DCA8: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0027DCAC: mul.s       $f4, $f1, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0027DCB0: neg.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = -ctx->f2.fl;
    // 0x0027DCB4: swc1        $f3, 0x410($sp)
    MEM_W(0X410, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027DCB8: swc1        $f0, 0x414($sp)
    MEM_W(0X414, ctx->r29) = ctx->f0.u32l;
    // 0x0027DCBC: swc1        $f2, 0x41C($sp)
    MEM_W(0X41C, ctx->r29) = ctx->f2.u32l;
    // 0x0027DCC0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0027DCC4: swc1        $f0, 0x420($sp)
    MEM_W(0X420, ctx->r29) = ctx->f0.u32l;
    // 0x0027DCC8: swc1        $f3, 0x428($sp)
    MEM_W(0X428, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027DCCC: swc1        $f0, 0x42C($sp)
    MEM_W(0X42C, ctx->r29) = ctx->f0.u32l;
    // 0x0027DCD0: add.s       $f12, $f12, $f5
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f5.fl;
    // 0x0027DCD4: swc1        $f1, 0x40C($sp)
    MEM_W(0X40C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DCD8: swc1        $f1, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DCDC: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x0027DCE0: swc1        $f1, 0x424($sp)
    MEM_W(0X424, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DCE4: jal         0x00298470
    // 0x0027DCE8: swc1        $f1, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00298470(rdram, ctx);
        goto after_76;
    // 0x0027DCE8: swc1        $f1, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_76:
    // 0x0027DCEC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_0027DCF0:
    // 0x0027DCF0: addiu       $a0, $s4, 0x14C
    ctx->r4 = ADD32(ctx->r20, 0X14C);
    // 0x0027DCF4: addiu       $a1, $sp, 0x3F8
    ctx->r5 = ADD32(ctx->r29, 0X3F8);
    // 0x0027DCF8: addiu       $s0, $s4, 0x24C
    ctx->r16 = ADD32(ctx->r20, 0X24C);
    // 0x0027DCFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0027DD00: jal         0x0020F908
    // 0x0027DD04: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_0020F908(rdram, ctx);
        goto after_77;
    // 0x0027DD04: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_77:
        turok2_patch_widen_camera_culling(rdram, ctx);

    // 0x0027DD08: addiu       $a0, $s4, 0x2D8
    ctx->r4 = ADD32(ctx->r20, 0X2D8);
    // 0x0027DD0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027DD10: addiu       $a2, $s4, 0x258
    ctx->r6 = ADD32(ctx->r20, 0X258);
    // 0x0027DD14: addiu       $a3, $s4, 0x264
    ctx->r7 = ADD32(ctx->r20, 0X264);
    // 0x0027DD18: addiu       $v0, $s4, 0x270
    ctx->r2 = ADD32(ctx->r20, 0X270);
    // 0x0027DD1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027DD20: addiu       $v0, $s4, 0x27C
    ctx->r2 = ADD32(ctx->r20, 0X27C);
    // 0x0027DD24: jal         0x0026F080
    // 0x0027DD28: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0026F080(rdram, ctx);
        goto after_78;
    // 0x0027DD28: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_78:
    // 0x0027DD2C: addiu       $a0, $s4, 0x338
    ctx->r4 = ADD32(ctx->r20, 0X338);
    // 0x0027DD30: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0027DD34: jal         0x0026B9E0
    // 0x0027DD38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026B9E0(rdram, ctx);
        goto after_79;
    // 0x0027DD38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_79:
        turok2_patch_expand_view_bounds(rdram, ctx);

    // 0x0027DD3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DD40: lwc1        $f5, -0x6638($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6638);
    // 0x0027DD44: mul.s       $f5, $f20, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = MUL_S(ctx->f20.fl, ctx->f5.fl);
    // 0x0027DD48: lwc1        $f0, 0x24C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X24C);
    // 0x0027DD4C: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0027DD50: lwc1        $f3, 0x24C($s4)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r20, 0X24C);
    // 0x0027DD54: add.s       $f3, $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f20.fl;
    // 0x0027DD58: lwc1        $f2, 0x254($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X254);
    // 0x0027DD5C: addiu       $a0, $s4, 0x13C
    ctx->r4 = ADD32(ctx->r20, 0X13C);
    // 0x0027DD60: sub.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x0027DD64: swc1        $f0, 0x350($s4)
    MEM_W(0X350, ctx->r20) = ctx->f0.u32l;
    // 0x0027DD68: lwc1        $f0, 0x254($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X254);
    // 0x0027DD6C: addiu       $a1, $s4, 0xE3C
    ctx->r5 = ADD32(ctx->r20, 0XE3C);
    // 0x0027DD70: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027DD74: lwc1        $f4, 0x250($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X250);
    // 0x0027DD78: lwc1        $f1, 0x250($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X250);
    // 0x0027DD7C: sub.s       $f4, $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f5.fl;
    // 0x0027DD80: swc1        $f3, 0x35C($s4)
    MEM_W(0X35C, ctx->r20) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027DD84: swc1        $f2, 0x358($s4)
    MEM_W(0X358, ctx->r20) = ctx->f2.u32l;
    // 0x0027DD88: add.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f5.fl;
    // 0x0027DD8C: swc1        $f0, 0x364($s4)
    MEM_W(0X364, ctx->r20) = ctx->f0.u32l;
    // 0x0027DD90: swc1        $f4, 0x354($s4)
    MEM_W(0X354, ctx->r20) = ctx->f4.u32l;
    // 0x0027DD94: jal         0x00211114
    // 0x0027DD98: swc1        $f1, 0x360($s4)
    MEM_W(0X360, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    func_00211114(rdram, ctx);
        goto after_80;
    // 0x0027DD98: swc1        $f1, 0x360($s4)
    MEM_W(0X360, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    after_80:
    // 0x0027DD9C: lw          $a1, 0x124($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X124);
    // 0x0027DDA0: jal         0x002105A4
    // 0x0027DDA4: addiu       $a0, $s4, 0xE7C
    ctx->r4 = ADD32(ctx->r20, 0XE7C);
    func_002105A4(rdram, ctx);
        goto after_81;
    // 0x0027DDA4: addiu       $a0, $s4, 0xE7C
    ctx->r4 = ADD32(ctx->r20, 0XE7C);
    after_81:
    // 0x0027DDA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027DDAC: lw          $v0, -0x6718($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6718);
    // 0x0027DDB0: beq         $v0, $zero, L_0027DEA4
    if (ctx->r2 == 0) {
        // 0x0027DDB4: addiu       $a1, $s4, 0x428
        ctx->r5 = ADD32(ctx->r20, 0X428);
            goto L_0027DEA4;
    }
    // 0x0027DDB4: addiu       $a1, $s4, 0x428
    ctx->r5 = ADD32(ctx->r20, 0X428);
    // 0x0027DDB8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0027DDBC: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0027DDC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027DDC4: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0027DDC8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x0027DDCC: bne         $v0, $zero, L_0027DDD8
    if (ctx->r2 != 0) {
        // 0x0027DDD0: nop
    
            goto L_0027DDD8;
    }
    // 0x0027DDD0: nop

    // 0x0027DDD4: break       7
    do_break(2612692);
L_0027DDD8:
    // 0x0027DDD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027DDDC: bne         $v0, $at, L_0027DDF0
    if (ctx->r2 != ctx->r1) {
        // 0x0027DDE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027DDF0;
    }
    // 0x0027DDE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027DDE4: bne         $v1, $at, L_0027DDF0
    if (ctx->r3 != ctx->r1) {
        // 0x0027DDE8: nop
    
            goto L_0027DDF0;
    }
    // 0x0027DDE8: nop

    // 0x0027DDEC: break       6
    do_break(2612716);
L_0027DDF0:
    // 0x0027DDF0: mflo        $v1
    ctx->r3 = lo;
    // 0x0027DDF4: addiu       $s1, $sp, 0x2A8
    ctx->r17 = ADD32(ctx->r29, 0X2A8);
    // 0x0027DDF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027DDFC: lui         $a2, 0x423E
    ctx->r6 = S32(0X423E << 16);
    // 0x0027DE00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DE04: lwc1        $f0, -0x6634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6634);
    // 0x0027DE08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DE0C: lwc1        $f1, -0x6630($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6630);
    // 0x0027DE10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DE14: lwc1        $f20, -0x662C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X662C);
    // 0x0027DE18: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x0027DE1C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0027DE20: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x0027DE24: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0027DE28: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027DE2C: jal         0x0029815C
    // 0x0027DE30: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    func_0029815C(rdram, ctx);
        goto after_82;
    // 0x0027DE30: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    after_82:
    // 0x0027DE34: addiu       $s0, $sp, 0x1E8
    ctx->r16 = ADD32(ctx->r29, 0X1E8);
    // 0x0027DE38: jal         0x0020F79C
    // 0x0027DE3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F79C(rdram, ctx);
        goto after_83;
    // 0x0027DE3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_83:
    // 0x0027DE40: addiu       $s2, $sp, 0x228
    ctx->r18 = ADD32(ctx->r29, 0X228);
    // 0x0027DE44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0027DE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027DE4C: jal         0x0020C890
    // 0x0027DE50: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020C890(rdram, ctx);
        goto after_84;
    // 0x0027DE50: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_84:
    // 0x0027DE54: addiu       $s1, $sp, 0x2E8
    ctx->r17 = ADD32(ctx->r29, 0X2E8);
    // 0x0027DE58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027DE5C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0027DE60: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x0027DE64: jal         0x0020FC74
    // 0x0027DE68: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_0020FC74(rdram, ctx);
        goto after_85;
    // 0x0027DE68: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_85:
    // 0x0027DE6C: addiu       $s0, $sp, 0x368
    ctx->r16 = ADD32(ctx->r29, 0X368);
    // 0x0027DE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027DE74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0027DE78: jal         0x0020C890
    // 0x0027DE7C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020C890(rdram, ctx);
        goto after_86;
    // 0x0027DE7C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_86:
    // 0x0027DE80: jal         0x0020F7EC
    // 0x0027DE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F7EC(rdram, ctx);
        goto after_87;
    // 0x0027DE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_87:
    // 0x0027DE88: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0027DE8C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0027DE90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027DE94: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0027DE98: addiu       $a1, $a1, 0x430
    ctx->r5 = ADD32(ctx->r5, 0X430);
    // 0x0027DE9C: jal         0x0020CC94
    // 0x0027DEA0: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    func_0020CC94(rdram, ctx);
        goto after_88;
    // 0x0027DEA0: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    after_88:
L_0027DEA4:
    // 0x0027DEA4: addiu       $a0, $s4, 0x558
    ctx->r4 = ADD32(ctx->r20, 0X558);
    // 0x0027DEA8: jal         0x00282E4C
    // 0x0027DEAC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00282E4C(rdram, ctx);
        goto after_89;
    // 0x0027DEAC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_89:
    // 0x0027DEB0: jal         0x004169C8
    // 0x0027DEB4: addiu       $a0, $s4, 0x53C
    ctx->r4 = ADD32(ctx->r20, 0X53C);
    func_004169C8(rdram, ctx);
        goto after_90;
    // 0x0027DEB4: addiu       $a0, $s4, 0x53C
    ctx->r4 = ADD32(ctx->r20, 0X53C);
    after_90:
    // 0x0027DEB8: jal         0x00284188
    // 0x0027DEBC: nop

    func_00284188(rdram, ctx);
        goto after_91;
    // 0x0027DEBC: nop

    after_91:
    // 0x0027DEC0: beq         $v0, $zero, L_0027DEDC
    if (ctx->r2 == 0) {
        // 0x0027DEC4: nop
    
            goto L_0027DEDC;
    }
    // 0x0027DEC4: nop

    // 0x0027DEC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027DECC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0027DED0: jal         0x00220A1C
    // 0x0027DED4: addiu       $a1, $s4, 0x38
    ctx->r5 = ADD32(ctx->r20, 0X38);
    func_00220A1C(rdram, ctx);
        goto after_92;
    // 0x0027DED4: addiu       $a1, $s4, 0x38
    ctx->r5 = ADD32(ctx->r20, 0X38);
    after_92:
        turok2_patch_cinema_region(rdram, ctx);

    // 0x0027DED8: sw          $v0, 0x58($s4)
    MEM_W(0X58, ctx->r20) = ctx->r2;
L_0027DEDC:
    // 0x0027DEDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027DEE0: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0027DEE4: lw          $s0, 0x58($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X58);
    // 0x0027DEE8: lwc1        $f21, 0x38($s4)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r20, 0X38);
    // 0x0027DEEC: lwc1        $f23, 0x3C($s4)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r20, 0X3C);
    // 0x0027DEF0: lwc1        $f20, 0x40($s4)
    ctx->f20.u32l = MEM_W(ctx->r20, 0X40);
    // 0x0027DEF4: lwc1        $f22, 0x44($s4)
    ctx->f22.u32l = MEM_W(ctx->r20, 0X44);
    // 0x0027DEF8: beq         $s0, $zero, L_0027DF6C
    if (ctx->r16 == 0) {
    // 0x0027DEFC: sw          $v0, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r2;
        turok2_patch_cinema_cam_15(rdram, ctx);
            goto L_0027DF6C;
    }
    // 0x0027DEFC: sw          $v0, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r2;
        turok2_patch_cinema_cam_15(rdram, ctx);
    // 0x0027DF00: jal         0x00284188
    // 0x0027DF04: nop

    func_00284188(rdram, ctx);
        goto after_93;
    // 0x0027DF04: nop

    after_93:
    // 0x0027DF08: bne         $v0, $zero, L_0027DF6C
    if (ctx->r2 != 0) {
        // 0x0027DF0C: nop
    
            goto L_0027DF6C;
    }
    // 0x0027DF0C: nop

    // 0x0027DF10: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027DF14: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0027DF18: jal         0x0026BE60
    // 0x0027DF1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BE60(rdram, ctx);
        goto after_94;
    // 0x0027DF1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_94:
    // 0x0027DF20: add.s       $f1, $f23, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f23.fl + ctx->f22.fl;
    // 0x0027DF24: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0027DF28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DF2C: lwc1        $f0, -0x6628($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6628);
    // 0x0027DF30: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027DF34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DF38: lwc1        $f0, -0x6624($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6624);
    // 0x0027DF3C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0027DF40: nop

    // 0x0027DF44: bc1f        L_0027DF6C
    if (!c1cs) {
        // 0x0027DF48: nop
    
            goto L_0027DF6C;
    }
    // 0x0027DF48: nop

    // 0x0027DF4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027DF50: lwc1        $f0, -0x6620($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6620);
    // 0x0027DF54: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027DF58: nop

    // 0x0027DF5C: bc1f        L_0027DF6C
    if (!c1cs) {
        // 0x0027DF60: nop
    
            goto L_0027DF6C;
    }
    // 0x0027DF60: nop

    // 0x0027DF64: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0027DF68: sw          $v0, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r2;
L_0027DF6C:
    // 0x0027DF6C: jal         0x00284188
    // 0x0027DF70: nop

    func_00284188(rdram, ctx);
        goto after_95;
    // 0x0027DF70: nop

    after_95:
    // 0x0027DF74: beq         $v0, $zero, L_0027DF88
    if (ctx->r2 == 0) {
        // 0x0027DF78: nop
    
            goto L_0027DF88;
    }
    // 0x0027DF78: nop

    // 0x0027DF7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027DF80: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0027DF84: sw          $v0, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r2;
L_0027DF88:
    // 0x0027DF88: lwc1        $f1, 0x5C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X5C);
    // 0x0027DF8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027DF90: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027DF94: nop

    // 0x0027DF98: bc1f        L_0027DFAC
    if (!c1cs) {
        // 0x0027DF9C: nop
    
            goto L_0027DFAC;
    }
    // 0x0027DF9C: nop

    // 0x0027DFA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027DFA4: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0027DFA8: sw          $v0, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r2;
L_0027DFAC:
    // 0x0027DFAC: lw          $ra, 0x49C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X49C);
    // 0x0027DFB0: lw          $s6, 0x498($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X498);
    // 0x0027DFB4: lw          $s5, 0x494($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X494);
    // 0x0027DFB8: lw          $s4, 0x490($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X490);
    // 0x0027DFBC: lw          $s3, 0x48C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48C);
    // 0x0027DFC0: lw          $s2, 0x488($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X488);
    // 0x0027DFC4: lw          $s1, 0x484($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X484);
    // 0x0027DFC8: lw          $s0, 0x480($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X480);
    // 0x0027DFCC: ldc1        $f30, 0x4F8($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X4F8);
    // 0x0027DFD0: ldc1        $f29, 0x4F0($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0X4F0);
    // 0x0027DFD4: ldc1        $f28, 0x4E8($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X4E8);
    // 0x0027DFD8: ldc1        $f27, 0x4E0($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X4E0);
    // 0x0027DFDC: ldc1        $f26, 0x4D8($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X4D8);
    // 0x0027DFE0: ldc1        $f25, 0x4D0($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X4D0);
    // 0x0027DFE4: ldc1        $f24, 0x4C8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X4C8);
    // 0x0027DFE8: ldc1        $f23, 0x4C0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X4C0);
    // 0x0027DFEC: ldc1        $f22, 0x4B8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X4B8);
    // 0x0027DFF0: ldc1        $f21, 0x4B0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X4B0);
    // 0x0027DFF4: ldc1        $f20, 0x4A8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X4A8);
    // 0x0027DFF8: jr          $ra
    // 0x0027DFFC: addiu       $sp, $sp, 0x500
    ctx->r29 = ADD32(ctx->r29, 0X500);
    return;
    // 0x0027DFFC: addiu       $sp, $sp, 0x500
    ctx->r29 = ADD32(ctx->r29, 0X500);
;}
RECOMP_FUNC void func_00224D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224D54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00224D58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00224D5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00224D60: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00224D64: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00224D68: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00224D6C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00224D70: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00224D74: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x00224D78: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00224D7C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x00224D80: jal         0x00266D24
    // 0x00224D84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_00266D24(rdram, ctx);
        goto after_0;
    // 0x00224D84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x00224D88: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00224D8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00224D90: beq         $a2, $v0, L_00224DDC
    if (ctx->r6 == ctx->r2) {
        // 0x00224D94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00224DDC;
    }
    // 0x00224D94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00224D98: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x00224D9C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x00224DA0: jal         0x0020185C
    // 0x00224DA4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x00224DA4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00224DA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00224DAC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00224DB0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00224DB4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00224DB8: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x00224DBC: addiu       $v0, $v0, 0xAE0
    ctx->r2 = ADD32(ctx->r2, 0XAE0);
    // 0x00224DC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00224DC4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00224DC8: addiu       $v0, $v0, 0x5F38
    ctx->r2 = ADD32(ctx->r2, 0X5F38);
    // 0x00224DCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00224DD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00224DD4: jal         0x0020367C
    // 0x00224DD8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x00224DD8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_2:
L_00224DDC:
    // 0x00224DDC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00224DE0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00224DE4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00224DE8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00224DEC: jr          $ra
    // 0x00224DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00224DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00444E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00444E54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00444E58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444E5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00444E60: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444E64: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00444E68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00444E6C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00444E70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00444E74: jal         0x002535E4
    // 0x00444E78: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00444E78: nop

    after_0:
    // 0x00444E7C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444E80: blez        $v0, L_00444E94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00444E84: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444E94;
    }
    // 0x00444E84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444E8C: jal         0x00243414
    // 0x00444E90: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00444E90: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    after_1:
L_00444E94:
    // 0x00444E94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00444E98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00444E9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00444EA0: jr          $ra
    // 0x00444EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00444EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040DB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DB98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DB9C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DBA0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DBA4: beq         $v0, $zero, L_0040DBB4
    if (ctx->r2 == 0) {
        // 0x0040DBA8: nop
    
            goto L_0040DBB4;
    }
    // 0x0040DBA8: nop

    // 0x0040DBAC: jal         0x00243414
    // 0x0040DBB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DBB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040DBB4:
    // 0x0040DBB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DBB8: jr          $ra
    // 0x0040DBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029E43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029E440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029E444: jal         0x0029E460
    // 0x0029E448: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x0029E448: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0029E44C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0029E450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029E454: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029E458: jr          $ra
    // 0x0029E45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029E45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002018BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002018BC: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x002018C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002018C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002018C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x002018CC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002018D0: jr          $ra
    // 0x002018D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    return;
    // 0x002018D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_00418B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418B64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418B68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00418B6C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00418B70: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00418B74: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00418B78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00418B7C: lb          $v0, 0x21($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X21);
    // 0x00418B80: beq         $v0, $zero, L_00418BB4
    if (ctx->r2 == 0) {
        // 0x00418B84: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00418BB4;
    }
    // 0x00418B84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00418B88: jal         0x004160F0
    // 0x00418B8C: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00418B8C: nop

    after_0:
    // 0x00418B90: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418B94: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00418B98: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418B9C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418BA0: lb          $a2, 0x21($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X21);
    // 0x00418BA4: jal         0x0029E3E0
    // 0x00418BA8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418BA8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00418BAC: j           L_00418BD4
    // 0x00418BB0: nop

        goto L_00418BD4;
    // 0x00418BB0: nop

L_00418BB4:
    // 0x00418BB4: jal         0x004160F0
    // 0x00418BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00418BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00418BBC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418BC0: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00418BC4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418BC8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418BCC: jal         0x0029E3E0
    // 0x00418BD0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00418BD0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_00418BD4:
    // 0x00418BD4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00418BD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418BDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418BE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418BE4: jr          $ra
    // 0x00418BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045FFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FFCC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FFD0: beq         $v0, $zero, L_00460000
    if (ctx->r2 == 0) {
        // 0x0045FFD4: nop
    
            goto L_00460000;
    }
    // 0x0045FFD4: nop

L_0045FFD8:
    // 0x0045FFD8: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FFDC: addiu       $v0, $a1, -0x61
    ctx->r2 = ADD32(ctx->r5, -0X61);
    // 0x0045FFE0: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x0045FFE4: beq         $v0, $zero, L_0045FFF0
    if (ctx->r2 == 0) {
        // 0x0045FFE8: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_0045FFF0;
    }
    // 0x0045FFE8: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x0045FFEC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_0045FFF0:
    // 0x0045FFF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045FFF4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FFF8: bne         $v0, $zero, L_0045FFD8
    if (ctx->r2 != 0) {
        // 0x0045FFFC: nop
    
            goto L_0045FFD8;
    }
    // 0x0045FFFC: nop

L_00460000:
    // 0x00460000: jr          $ra
    // 0x00460004: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00460004: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00256EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256EBC: lbu         $v0, 0x10($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10);
    // 0x00256EC0: jr          $ra
    // 0x00256EC4: nop

    return;
    // 0x00256EC4: nop

;}
RECOMP_FUNC void func_00275E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275E1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00275E20: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00275E24: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00275E28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00275E2C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00275E30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00275E34: lw          $s0, 0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X14);
    // 0x00275E38: beq         $s0, $zero, L_00275E7C
    if (ctx->r16 == 0) {
        // 0x00275E3C: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00275E7C;
    }
    // 0x00275E3C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_00275E40:
    // 0x00275E40: lh          $a0, 0xE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE);
    // 0x00275E44: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00275E48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275E4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00275E50: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00275E54: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x00275E58: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x00275E5C: jal         0x00275544
    // 0x00275E60: nop

    func_00275544(rdram, ctx);
        goto after_0;
    // 0x00275E60: nop

    after_0:
    // 0x00275E64: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00275E68: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00275E6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275E70: sw          $v0, 0x2A8C($at)
    MEM_W(0X2A8C, ctx->r1) = ctx->r2;
    // 0x00275E74: bne         $s0, $zero, L_00275E40
    if (ctx->r16 != 0) {
        // 0x00275E78: nop
    
            goto L_00275E40;
    }
    // 0x00275E78: nop

L_00275E7C:
    // 0x00275E7C: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x00275E80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00275E84: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00275E88: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00275E8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00275E90: jr          $ra
    // 0x00275E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00275E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00206B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206B30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00206B34: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00206B38: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x00206B3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00206B40: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00206B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206B48: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00206B4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00206B50: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00206B54: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00206B58: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00206B5C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00206B60: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x00206B64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206B68: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00206B6C: lw          $s7, 0x58($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X58);
    // 0x00206B70: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00206B74: jal         0x0020565C
    // 0x00206B78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0020565C(rdram, ctx);
        goto after_0;
    // 0x00206B78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00206B7C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x00206B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00206B84: jal         0x002017D4
    // 0x00206B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00206B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00206B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00206B90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00206B94: jal         0x002017D4
    // 0x00206B98: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00206B98: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00206B9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00206BA0: jal         0x002017D4
    // 0x00206BA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00206BA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00206BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00206BAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00206BB0: jal         0x002017D4
    // 0x00206BB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00206BB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00206BB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00206BBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00206BC0: beq         $v0, $zero, L_00206C00
    if (ctx->r2 == 0) {
        // 0x00206BC4: addu        $t4, $zero, $zero
        ctx->r12 = ADD32(0, 0);
            goto L_00206C00;
    }
    // 0x00206BC4: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x00206BC8: jal         0x002017D4
    // 0x00206BCC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00206BCC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_5:
    // 0x00206BD0: addu        $t5, $v0, $zero
    ctx->r13 = ADD32(ctx->r2, 0);
    // 0x00206BD4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00206BD8: lw          $v1, -0x4A90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4A90);
    // 0x00206BDC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00206BE0: bne         $v1, $v0, L_00206BF8
    if (ctx->r3 != ctx->r2) {
        // 0x00206BE4: addu        $t4, $zero, $zero
        ctx->r12 = ADD32(0, 0);
            goto L_00206BF8;
    }
    // 0x00206BE4: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x00206BE8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206BEC: lw          $v0, -0x71FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71FC);
    // 0x00206BF0: beq         $v0, $s4, L_00206C0C
    if (ctx->r2 == ctx->r20) {
        // 0x00206BF4: nop
    
            goto L_00206C0C;
    }
    // 0x00206BF4: nop

L_00206BF8:
    // 0x00206BF8: j           L_00206C04
    // 0x00206BFC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_00206C04;
    // 0x00206BFC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_00206C00:
    // 0x00206C00: addu        $t5, $t4, $zero
    ctx->r13 = ADD32(ctx->r12, 0);
L_00206C04:
    // 0x00206C04: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00206C08: lw          $v1, -0x4A90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4A90);
L_00206C0C:
    // 0x00206C0C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00206C10: bne         $v1, $v0, L_00206C48
    if (ctx->r3 != ctx->r2) {
        // 0x00206C14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00206C48;
    }
    // 0x00206C14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206C18: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206C1C: lw          $v0, -0x7200($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7200);
    // 0x00206C20: bnel        $v0, $s3, L_00206C4C
    if (ctx->r2 != ctx->r19) {
        // 0x00206C24: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00206C4C;
    }
    goto skip_0;
    // 0x00206C24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00206C28: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206C2C: lw          $v0, -0x71F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71F8);
    // 0x00206C30: bnel        $v0, $s5, L_00206C4C
    if (ctx->r2 != ctx->r21) {
        // 0x00206C34: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00206C4C;
    }
    goto skip_1;
    // 0x00206C34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x00206C38: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00206C3C: lw          $v0, -0x71F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71F4);
    // 0x00206C40: beq         $v0, $s6, L_00206C4C
    if (ctx->r2 == ctx->r22) {
        // 0x00206C44: nop
    
            goto L_00206C4C;
    }
    // 0x00206C44: nop

L_00206C48:
    // 0x00206C48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00206C4C:
    // 0x00206C4C: bne         $a0, $zero, L_00206C5C
    if (ctx->r4 != 0) {
        // 0x00206C50: nop
    
            goto L_00206C5C;
    }
    // 0x00206C50: nop

    // 0x00206C54: beq         $t4, $zero, L_0020783C
    if (ctx->r12 == 0) {
        // 0x00206C58: nop
    
            goto L_0020783C;
    }
    // 0x00206C58: nop

L_00206C5C:
    // 0x00206C5C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00206C60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00206C64: sw          $s3, -0x7200($at)
    MEM_W(-0X7200, ctx->r1) = ctx->r19;
    // 0x00206C68: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00206C6C: sw          $s4, -0x71FC($at)
    MEM_W(-0X71FC, ctx->r1) = ctx->r20;
    // 0x00206C70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00206C74: sw          $s5, -0x71F8($at)
    MEM_W(-0X71F8, ctx->r1) = ctx->r21;
    // 0x00206C78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00206C7C: sw          $s6, -0x71F4($at)
    MEM_W(-0X71F4, ctx->r1) = ctx->r22;
    // 0x00206C80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00206C84: sw          $v0, -0x4A90($at)
    MEM_W(-0X4A90, ctx->r1) = ctx->r2;
    // 0x00206C88: andi        $v0, $s5, 0x2
    ctx->r2 = ctx->r21 & 0X2;
    // 0x00206C8C: bne         $v0, $zero, L_00206C98
    if (ctx->r2 != 0) {
        // 0x00206C90: addu        $t3, $zero, $zero
        ctx->r11 = ADD32(0, 0);
            goto L_00206C98;
    }
    // 0x00206C90: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x00206C94: lbu         $t3, 0x2($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X2);
L_00206C98:
    // 0x00206C98: andi        $v0, $s6, 0x2
    ctx->r2 = ctx->r22 & 0X2;
    // 0x00206C9C: bne         $v0, $zero, L_00206CA8
    if (ctx->r2 != 0) {
        // 0x00206CA0: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00206CA8;
    }
    // 0x00206CA0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00206CA4: lbu         $t0, 0x3($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X3);
L_00206CA8:
    // 0x00206CA8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x00206CAC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00206CB0: beq         $v0, $zero, L_00207864
    if (ctx->r2 == 0) {
        // 0x00206CB4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00207864;
    }
    // 0x00206CB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00206CB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00206CBC: addu        $at, $at, $v0
    gpr jr_addend_00206CC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00206CC0: lw          $v0, 0x51F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X51F8);
    // 0x00206CC4: jr          $v0
    // 0x00206CC8: nop

    switch (jr_addend_00206CC4 >> 2) {
        case 0: goto L_00206CCC; break;
        case 1: goto L_00206F30; break;
        case 2: goto L_00207474; break;
        case 3: goto L_00207180; break;
        case 4: goto L_002076C8; break;
        case 5: goto L_002077E0; break;
        default: switch_error(__func__, 0x00206CC4, 0x800A51F8);
    }
    // 0x00206CC8: nop

L_00206CCC:
    // 0x00206CCC: beq         $a0, $zero, L_00206F1C
    if (ctx->r4 == 0) {
        // 0x00206CD0: lui         $v0, 0xFD50
        ctx->r2 = S32(0XFD50 << 16);
            goto L_00206F1C;
    }
    // 0x00206CD0: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x00206CD4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00206CD8: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00206CDC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00206CE0: lui         $a0, 0x700
    ctx->r4 = S32(0X700 << 16);
    // 0x00206CE4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00206CE8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00206CEC: addiu       $a3, $a1, 0x8
    ctx->r7 = ADD32(ctx->r5, 0X8);
    // 0x00206CF0: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00206CF4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00206CF8: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x00206CFC: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x00206D00: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x00206D04: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x00206D08: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00206D0C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00206D10: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x00206D14: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x00206D18: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00206D1C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206D20: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x00206D24: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x00206D28: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206D2C: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x00206D30: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00206D34: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206D38: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x00206D3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00206D40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206D44: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00206D48: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x00206D4C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00206D50: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00206D54: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00206D58: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x00206D5C: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x00206D60: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00206D64: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00206D68: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00206D6C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x00206D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00206D74: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00206D78: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x00206D7C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00206D80: bgez        $v0, L_00206D8C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00206D84: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00206D8C;
    }
    // 0x00206D84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00206D88: addiu       $v1, $v0, 0x7
    ctx->r3 = ADD32(ctx->r2, 0X7);
L_00206D8C:
    // 0x00206D8C: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x00206D90: blez        $v1, L_00206D9C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00206D94: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_00206D9C;
    }
    // 0x00206D94: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x00206D98: addiu       $a1, $v1, 0x7FF
    ctx->r5 = ADD32(ctx->r3, 0X7FF);
L_00206D9C:
    // 0x00206D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00206DA0: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00206DA4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x00206DA8: sllv        $a0, $a0, $v1
    ctx->r4 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x00206DAC: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00206DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00206DB4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00206DB8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00206DBC: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x00206DC0: beql        $v0, $zero, L_00206DC8
    if (ctx->r2 == 0) {
        // 0x00206DC4: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_00206DC8;
    }
    goto skip_2;
    // 0x00206DC4: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_2:
L_00206DC8:
    // 0x00206DC8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00206DCC: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00206DD0: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00206DD4: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x00206DD8: bgez        $a0, L_00206DE4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00206DDC: or          $a3, $v0, $v1
        ctx->r7 = ctx->r2 | ctx->r3;
            goto L_00206DE4;
    }
    // 0x00206DDC: or          $a3, $v0, $v1
    ctx->r7 = ctx->r2 | ctx->r3;
    // 0x00206DE0: addiu       $a2, $a0, 0x7
    ctx->r6 = ADD32(ctx->r4, 0X7);
L_00206DE4:
    // 0x00206DE4: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00206DE8: blezl       $v0, L_00206E20
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00206DEC: andi        $v0, $a1, 0xFFF
        ctx->r2 = ctx->r5 & 0XFFF;
            goto L_00206E20;
    }
    goto skip_3;
    // 0x00206DEC: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    skip_3:
    // 0x00206DF0: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x00206DF4: bne         $v0, $zero, L_00206E00
    if (ctx->r2 != 0) {
        // 0x00206DF8: nop
    
            goto L_00206E00;
    }
    // 0x00206DF8: nop

    // 0x00206DFC: break       7
    do_break(2125308);
L_00206E00:
    // 0x00206E00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00206E04: bne         $v0, $at, L_00206E18
    if (ctx->r2 != ctx->r1) {
        // 0x00206E08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00206E18;
    }
    // 0x00206E08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00206E0C: bne         $a1, $at, L_00206E18
    if (ctx->r5 != ctx->r1) {
        // 0x00206E10: nop
    
            goto L_00206E18;
    }
    // 0x00206E10: nop

    // 0x00206E14: break       6
    do_break(2125332);
L_00206E18:
    // 0x00206E18: mflo        $v0
    ctx->r2 = lo;
    // 0x00206E1C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_00206E20:
    // 0x00206E20: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x00206E24: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x00206E28: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00206E2C: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00206E30: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00206E34: ori         $t2, $t2, 0x1001
    ctx->r10 = ctx->r10 | 0X1001;
    // 0x00206E38: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x00206E3C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00206E40: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x00206E44: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00206E48: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00206E4C: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x00206E50: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00206E54: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00206E58: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00206E5C: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x00206E60: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x00206E64: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x00206E68: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x00206E6C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206E70: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x00206E74: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206E78: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x00206E7C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00206E80: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206E84: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x00206E88: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00206E8C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206E90: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00206E94: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x00206E98: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00206E9C: addiu       $t0, $a1, 0x10
    ctx->r8 = ADD32(ctx->r5, 0X10);
    // 0x00206EA0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00206EA4: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x00206EA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00206EAC: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00206EB0: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x00206EB4: lui         $v1, 0xF548
    ctx->r3 = S32(0XF548 << 16);
    // 0x00206EB8: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00206EBC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00206EC0: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00206EC4: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00206EC8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00206ECC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00206ED0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00206ED4: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00206ED8: lbu         $a3, 0x3($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X3);
    // 0x00206EDC: addiu       $v1, $a1, 0x18
    ctx->r3 = ADD32(ctx->r5, 0X18);
    // 0x00206EE0: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00206EE4: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00206EE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00206EEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00206EF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00206EF4: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00206EF8: sllv        $a0, $a0, $a3
    ctx->r4 = S32(ctx->r4 << (ctx->r7 & 31));
    // 0x00206EFC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00206F00: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00206F04: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x00206F08: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00206F0C: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x00206F10: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x00206F14: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x00206F18: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_00206F1C:
    // 0x00206F1C: beq         $t4, $zero, L_00207860
    if (ctx->r12 == 0) {
        // 0x00206F20: lui         $a3, 0xF500
        ctx->r7 = S32(0XF500 << 16);
            goto L_00207860;
    }
    // 0x00206F20: lui         $a3, 0xF500
    ctx->r7 = S32(0XF500 << 16);
    // 0x00206F24: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x00206F28: j           L_002073E4
    // 0x00206F2C: lui         $t0, 0x73F
    ctx->r8 = S32(0X73F << 16);
        goto L_002073E4;
    // 0x00206F2C: lui         $t0, 0x73F
    ctx->r8 = S32(0X73F << 16);
L_00206F30:
    // 0x00206F30: beq         $a0, $zero, L_002073D4
    if (ctx->r4 == 0) {
        // 0x00206F34: lui         $v0, 0xFD50
        ctx->r2 = S32(0XFD50 << 16);
            goto L_002073D4;
    }
    // 0x00206F34: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x00206F38: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00206F3C: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00206F40: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00206F44: lui         $a0, 0x700
    ctx->r4 = S32(0X700 << 16);
    // 0x00206F48: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00206F4C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00206F50: addiu       $a3, $a1, 0x8
    ctx->r7 = ADD32(ctx->r5, 0X8);
    // 0x00206F54: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00206F58: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00206F5C: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x00206F60: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x00206F64: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x00206F68: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x00206F6C: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00206F70: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00206F74: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x00206F78: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x00206F7C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00206F80: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206F84: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x00206F88: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x00206F8C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206F90: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x00206F94: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00206F98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206F9C: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x00206FA0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00206FA4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00206FA8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00206FAC: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x00206FB0: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00206FB4: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00206FB8: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00206FBC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x00206FC0: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x00206FC4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00206FC8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00206FCC: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00206FD0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x00206FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00206FD8: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00206FDC: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x00206FE0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00206FE4: bgez        $v0, L_00206FF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00206FE8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00206FF0;
    }
    // 0x00206FE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00206FEC: addiu       $v1, $v0, 0xF
    ctx->r3 = ADD32(ctx->r2, 0XF);
L_00206FF0:
    // 0x00206FF0: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x00206FF4: blez        $v1, L_00207000
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00206FF8: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_00207000;
    }
    // 0x00206FF8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x00206FFC: addiu       $a1, $v1, 0x7FF
    ctx->r5 = ADD32(ctx->r3, 0X7FF);
L_00207000:
    // 0x00207000: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00207004: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00207008: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x0020700C: sllv        $a0, $a0, $v1
    ctx->r4 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x00207010: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00207014: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x00207018: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x0020701C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00207020: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x00207024: beql        $v0, $zero, L_0020702C
    if (ctx->r2 == 0) {
        // 0x00207028: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_0020702C;
    }
    goto skip_4;
    // 0x00207028: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_4:
L_0020702C:
    // 0x0020702C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00207030: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00207034: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00207038: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x0020703C: bgez        $a0, L_00207048
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00207040: or          $a3, $v0, $v1
        ctx->r7 = ctx->r2 | ctx->r3;
            goto L_00207048;
    }
    // 0x00207040: or          $a3, $v0, $v1
    ctx->r7 = ctx->r2 | ctx->r3;
    // 0x00207044: addiu       $a2, $a0, 0xF
    ctx->r6 = ADD32(ctx->r4, 0XF);
L_00207048:
    // 0x00207048: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x0020704C: blezl       $v0, L_00207084
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00207050: andi        $v0, $a1, 0xFFF
        ctx->r2 = ctx->r5 & 0XFFF;
            goto L_00207084;
    }
    goto skip_5;
    // 0x00207050: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    skip_5:
    // 0x00207054: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x00207058: bne         $v0, $zero, L_00207064
    if (ctx->r2 != 0) {
        // 0x0020705C: nop
    
            goto L_00207064;
    }
    // 0x0020705C: nop

    // 0x00207060: break       7
    do_break(2125920);
L_00207064:
    // 0x00207064: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00207068: bne         $v0, $at, L_0020707C
    if (ctx->r2 != ctx->r1) {
        // 0x0020706C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0020707C;
    }
    // 0x0020706C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00207070: bne         $a1, $at, L_0020707C
    if (ctx->r5 != ctx->r1) {
        // 0x00207074: nop
    
            goto L_0020707C;
    }
    // 0x00207074: nop

    // 0x00207078: break       6
    do_break(2125944);
L_0020707C:
    // 0x0020707C: mflo        $v0
    ctx->r2 = lo;
    // 0x00207080: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_00207084:
    // 0x00207084: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x00207088: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x0020708C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00207090: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00207094: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00207098: ori         $t2, $t2, 0x1001
    ctx->r10 = ctx->r10 | 0X1001;
    // 0x0020709C: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x002070A0: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x002070A4: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x002070A8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x002070AC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x002070B0: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x002070B4: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x002070B8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002070BC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002070C0: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x002070C4: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x002070C8: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x002070CC: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x002070D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002070D4: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x002070D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002070DC: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x002070E0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002070E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002070E8: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x002070EC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002070F0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002070F4: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x002070F8: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x002070FC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00207100: addiu       $t0, $a1, 0x10
    ctx->r8 = ADD32(ctx->r5, 0X10);
    // 0x00207104: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00207108: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x0020710C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00207110: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00207114: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x00207118: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x0020711C: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00207120: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x00207124: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00207128: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0020712C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00207130: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00207134: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00207138: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020713C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00207140: lbu         $a3, 0x3($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X3);
    // 0x00207144: addiu       $v1, $a1, 0x18
    ctx->r3 = ADD32(ctx->r5, 0X18);
    // 0x00207148: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0020714C: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00207150: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00207154: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00207158: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0020715C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00207160: sllv        $a0, $a0, $a3
    ctx->r4 = S32(ctx->r4 << (ctx->r7 & 31));
    // 0x00207164: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00207168: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0020716C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x00207170: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00207174: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x00207178: j           L_002073CC
    // 0x0020717C: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
        goto L_002073CC;
    // 0x0020717C: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
L_00207180:
    // 0x00207180: beq         $a0, $zero, L_002073D4
    if (ctx->r4 == 0) {
        // 0x00207184: lui         $v0, 0xFD50
        ctx->r2 = S32(0XFD50 << 16);
            goto L_002073D4;
    }
    // 0x00207184: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x00207188: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0020718C: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00207190: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00207194: lui         $a0, 0x700
    ctx->r4 = S32(0X700 << 16);
    // 0x00207198: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0020719C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x002071A0: addiu       $a3, $a1, 0x8
    ctx->r7 = ADD32(ctx->r5, 0X8);
    // 0x002071A4: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x002071A8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002071AC: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x002071B0: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x002071B4: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x002071B8: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x002071BC: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x002071C0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002071C4: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x002071C8: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x002071CC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002071D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002071D4: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x002071D8: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x002071DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002071E0: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x002071E4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002071E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002071EC: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x002071F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002071F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002071F8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x002071FC: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x00207200: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00207204: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00207208: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x0020720C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x00207210: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x00207214: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00207218: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020721C: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00207220: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x00207224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00207228: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x0020722C: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x00207230: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00207234: bgez        $v0, L_00207240
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00207238: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00207240;
    }
    // 0x00207238: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020723C: addiu       $v1, $v0, 0xF
    ctx->r3 = ADD32(ctx->r2, 0XF);
L_00207240:
    // 0x00207240: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x00207244: blez        $v1, L_00207250
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00207248: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_00207250;
    }
    // 0x00207248: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x0020724C: addiu       $a1, $v1, 0x7FF
    ctx->r5 = ADD32(ctx->r3, 0X7FF);
L_00207250:
    // 0x00207250: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00207254: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00207258: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x0020725C: sllv        $a0, $a0, $v1
    ctx->r4 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x00207260: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00207264: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x00207268: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x0020726C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00207270: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x00207274: beql        $v0, $zero, L_0020727C
    if (ctx->r2 == 0) {
        // 0x00207278: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_0020727C;
    }
    goto skip_6;
    // 0x00207278: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_6:
L_0020727C:
    // 0x0020727C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00207280: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00207284: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00207288: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x0020728C: bgez        $a0, L_00207298
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00207290: or          $a3, $v0, $v1
        ctx->r7 = ctx->r2 | ctx->r3;
            goto L_00207298;
    }
    // 0x00207290: or          $a3, $v0, $v1
    ctx->r7 = ctx->r2 | ctx->r3;
    // 0x00207294: addiu       $a2, $a0, 0xF
    ctx->r6 = ADD32(ctx->r4, 0XF);
L_00207298:
    // 0x00207298: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x0020729C: blezl       $v0, L_002072D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002072A0: andi        $v0, $a1, 0xFFF
        ctx->r2 = ctx->r5 & 0XFFF;
            goto L_002072D4;
    }
    goto skip_7;
    // 0x002072A0: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    skip_7:
    // 0x002072A4: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x002072A8: bne         $v0, $zero, L_002072B4
    if (ctx->r2 != 0) {
        // 0x002072AC: nop
    
            goto L_002072B4;
    }
    // 0x002072AC: nop

    // 0x002072B0: break       7
    do_break(2126512);
L_002072B4:
    // 0x002072B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002072B8: bne         $v0, $at, L_002072CC
    if (ctx->r2 != ctx->r1) {
        // 0x002072BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002072CC;
    }
    // 0x002072BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002072C0: bne         $a1, $at, L_002072CC
    if (ctx->r5 != ctx->r1) {
        // 0x002072C4: nop
    
            goto L_002072CC;
    }
    // 0x002072C4: nop

    // 0x002072C8: break       6
    do_break(2126536);
L_002072CC:
    // 0x002072CC: mflo        $v0
    ctx->r2 = lo;
    // 0x002072D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_002072D4:
    // 0x002072D4: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x002072D8: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x002072DC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002072E0: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x002072E4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x002072E8: ori         $t2, $t2, 0x1001
    ctx->r10 = ctx->r10 | 0X1001;
    // 0x002072EC: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x002072F0: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x002072F4: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x002072F8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x002072FC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00207300: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x00207304: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00207308: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0020730C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00207310: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x00207314: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x00207318: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x0020731C: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x00207320: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00207324: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x00207328: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020732C: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x00207330: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00207334: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00207338: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x0020733C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00207340: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00207344: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00207348: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x0020734C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00207350: addiu       $t0, $a1, 0x10
    ctx->r8 = ADD32(ctx->r5, 0X10);
    // 0x00207354: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00207358: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x0020735C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00207360: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00207364: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x00207368: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x0020736C: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x00207370: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x00207374: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00207378: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0020737C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00207380: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00207384: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00207388: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020738C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x00207390: lbu         $a3, 0x3($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X3);
    // 0x00207394: addiu       $v1, $a1, 0x18
    ctx->r3 = ADD32(ctx->r5, 0X18);
    // 0x00207398: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0020739C: sllv        $v0, $a0, $v0
    ctx->r2 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x002073A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002073A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002073A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002073AC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x002073B0: sllv        $a0, $a0, $a3
    ctx->r4 = S32(ctx->r4 << (ctx->r7 & 31));
    // 0x002073B4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002073B8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x002073BC: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x002073C0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002073C4: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x002073C8: ori         $v0, $zero, 0xC000
    ctx->r2 = 0 | 0XC000;
L_002073CC:
    // 0x002073CC: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x002073D0: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_002073D4:
    // 0x002073D4: beq         $t4, $zero, L_00207860
    if (ctx->r12 == 0) {
        // 0x002073D8: lui         $a3, 0xF500
        ctx->r7 = S32(0XF500 << 16);
            goto L_00207860;
    }
    // 0x002073D8: lui         $a3, 0xF500
    ctx->r7 = S32(0XF500 << 16);
    // 0x002073DC: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x002073E0: lui         $t0, 0x703
    ctx->r8 = S32(0X703 << 16);
L_002073E4:
    // 0x002073E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002073E8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002073EC: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x002073F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002073F4: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x002073F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002073FC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207400: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00207404: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00207408: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x0020740C: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00207410: lui         $v1, 0xE800
    ctx->r3 = S32(0XE800 << 16);
    // 0x00207414: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x00207418: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0020741C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00207420: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x00207424: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00207428: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0020742C: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x00207430: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00207434: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    // 0x00207438: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x0020743C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00207440: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x00207444: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00207448: addiu       $a2, $v0, 0x20
    ctx->r6 = ADD32(ctx->r2, 0X20);
    // 0x0020744C: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x00207450: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00207454: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x00207458: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x0020745C: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x00207460: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00207464: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00207468: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x0020746C: j           L_00207860
    // 0x00207470: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
        goto L_00207860;
    // 0x00207470: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_00207474:
    // 0x00207474: beq         $a0, $zero, L_00207860
    if (ctx->r4 == 0) {
        // 0x00207478: lui         $v0, 0xFD18
        ctx->r2 = S32(0XFD18 << 16);
            goto L_00207860;
    }
    // 0x00207478: lui         $v0, 0xFD18
    ctx->r2 = S32(0XFD18 << 16);
    // 0x0020747C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00207480: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x00207484: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00207488: lui         $a0, 0x700
    ctx->r4 = S32(0X700 << 16);
    // 0x0020748C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00207490: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00207494: addiu       $a3, $a1, 0x8
    ctx->r7 = ADD32(ctx->r5, 0X8);
    // 0x00207498: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x0020749C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002074A0: lui         $v0, 0xF518
    ctx->r2 = S32(0XF518 << 16);
    // 0x002074A4: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x002074A8: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x002074AC: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x002074B0: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x002074B4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002074B8: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x002074BC: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x002074C0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002074C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002074C8: andi        $a0, $s7, 0xF
    ctx->r4 = ctx->r23 & 0XF;
    // 0x002074CC: sll         $v0, $a0, 10
    ctx->r2 = S32(ctx->r4 << 10);
    // 0x002074D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002074D4: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x002074D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002074DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002074E0: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x002074E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002074E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002074EC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x002074F0: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x002074F4: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x002074F8: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x002074FC: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00207500: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x00207504: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x00207508: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x0020750C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00207510: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00207514: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x00207518: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0020751C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00207520: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x00207524: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00207528: bgez        $v0, L_00207534
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0020752C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00207534;
    }
    // 0x0020752C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00207530: addiu       $v1, $v0, 0x7
    ctx->r3 = ADD32(ctx->r2, 0X7);
L_00207534:
    // 0x00207534: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x00207538: blez        $v1, L_00207544
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0020753C: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_00207544;
    }
    // 0x0020753C: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x00207540: addiu       $a1, $v1, 0x7FF
    ctx->r5 = ADD32(ctx->r3, 0X7FF);
L_00207544:
    // 0x00207544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00207548: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x0020754C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x00207550: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x00207554: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00207558: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x0020755C: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x00207560: beql        $v0, $zero, L_00207568
    if (ctx->r2 == 0) {
        // 0x00207564: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_00207568;
    }
    goto skip_8;
    // 0x00207564: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_8:
L_00207568:
    // 0x00207568: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0020756C: sllv        $a0, $v0, $a0
    ctx->r4 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x00207570: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00207574: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00207578: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0020757C: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x00207580: bgez        $a0, L_0020758C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00207584: or          $a3, $v0, $v1
        ctx->r7 = ctx->r2 | ctx->r3;
            goto L_0020758C;
    }
    // 0x00207584: or          $a3, $v0, $v1
    ctx->r7 = ctx->r2 | ctx->r3;
    // 0x00207588: addiu       $a2, $a0, 0x7
    ctx->r6 = ADD32(ctx->r4, 0X7);
L_0020758C:
    // 0x0020758C: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00207590: blezl       $v0, L_002075C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00207594: andi        $v0, $a1, 0xFFF
        ctx->r2 = ctx->r5 & 0XFFF;
            goto L_002075C8;
    }
    goto skip_9;
    // 0x00207594: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    skip_9:
    // 0x00207598: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x0020759C: bne         $v0, $zero, L_002075A8
    if (ctx->r2 != 0) {
        // 0x002075A0: nop
    
            goto L_002075A8;
    }
    // 0x002075A0: nop

    // 0x002075A4: break       7
    do_break(2127268);
L_002075A8:
    // 0x002075A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002075AC: bne         $v0, $at, L_002075C0
    if (ctx->r2 != ctx->r1) {
        // 0x002075B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002075C0;
    }
    // 0x002075B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002075B4: bne         $a1, $at, L_002075C0
    if (ctx->r5 != ctx->r1) {
        // 0x002075B8: nop
    
            goto L_002075C0;
    }
    // 0x002075B8: nop

    // 0x002075BC: break       6
    do_break(2127292);
L_002075C0:
    // 0x002075C0: mflo        $v0
    ctx->r2 = lo;
    // 0x002075C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_002075C8:
    // 0x002075C8: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x002075CC: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x002075D0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002075D4: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x002075D8: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x002075DC: ori         $t2, $t2, 0x1001
    ctx->r10 = ctx->r10 | 0X1001;
    // 0x002075E0: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x002075E4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x002075E8: andi        $a1, $s7, 0xF
    ctx->r5 = ctx->r23 & 0XF;
    // 0x002075EC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x002075F0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x002075F4: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x002075F8: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x002075FC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00207600: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00207604: andi        $v1, $s6, 0x3
    ctx->r3 = ctx->r22 & 0X3;
    // 0x00207608: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x0020760C: andi        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 & 0XF;
    // 0x00207610: sll         $v0, $v0, 14
    ctx->r2 = S32(ctx->r2 << 14);
    // 0x00207614: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00207618: sll         $v0, $a1, 10
    ctx->r2 = S32(ctx->r5 << 10);
    // 0x0020761C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00207620: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x00207624: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00207628: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020762C: andi        $v0, $t3, 0xF
    ctx->r2 = ctx->r11 & 0XF;
    // 0x00207630: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00207634: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00207638: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x0020763C: addiu       $t0, $a0, 0x10
    ctx->r8 = ADD32(ctx->r4, 0X10);
    // 0x00207640: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x00207644: lbu         $a3, 0x2($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X2);
    // 0x00207648: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x0020764C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00207650: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00207654: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00207658: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0020765C: lui         $v1, 0xF518
    ctx->r3 = S32(0XF518 << 16);
    // 0x00207660: sllv        $v0, $v0, $a3
    ctx->r2 = S32(ctx->r2 << (ctx->r7 & 31));
    // 0x00207664: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00207668: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0020766C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00207670: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00207674: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00207678: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020767C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x00207680: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x00207684: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x00207688: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020768C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00207690: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00207694: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00207698: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0020769C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x002076A0: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x002076A4: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x002076A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002076AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002076B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002076B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002076B8: sw          $v1, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r3;
    // 0x002076BC: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
    // 0x002076C0: j           L_00207860
    // 0x002076C4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
        goto L_00207860;
    // 0x002076C4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
L_002076C8:
    // 0x002076C8: beq         $a0, $zero, L_00207860
    if (ctx->r4 == 0) {
        // 0x002076CC: lui         $v0, 0xE700
        ctx->r2 = S32(0XE700 << 16);
            goto L_00207860;
    }
    // 0x002076CC: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x002076D0: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x002076D4: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x002076D8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x002076DC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x002076E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x002076E4: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x002076E8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x002076EC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002076F0: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x002076F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002076F8: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x002076FC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00207700: sw          $s0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r16;
    // 0x00207704: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x00207708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0020770C: beql        $v1, $v0, L_00207760
    if (ctx->r3 == ctx->r2) {
        // 0x00207710: lui         $v1, 0xE300
        ctx->r3 = S32(0XE300 << 16);
            goto L_00207760;
    }
    goto skip_10;
    // 0x00207710: lui         $v1, 0xE300
    ctx->r3 = S32(0XE300 << 16);
    skip_10:
    // 0x00207714: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00207718: beq         $v0, $zero, L_00207730
    if (ctx->r2 == 0) {
        // 0x0020771C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00207730;
    }
    // 0x0020771C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00207720: beq         $v1, $zero, L_00207788
    if (ctx->r3 == 0) {
        // 0x00207724: lui         $v0, 0xE300
        ctx->r2 = S32(0XE300 << 16);
            goto L_00207788;
    }
    // 0x00207724: lui         $v0, 0xE300
    ctx->r2 = S32(0XE300 << 16);
    // 0x00207728: j           L_00207740
    // 0x0020772C: nop

        goto L_00207740;
    // 0x0020772C: nop

L_00207730:
    // 0x00207730: beq         $v1, $v0, L_00207740
    if (ctx->r3 == ctx->r2) {
        // 0x00207734: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00207740;
    }
    // 0x00207734: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00207738: beq         $v1, $v0, L_00207750
    if (ctx->r3 == ctx->r2) {
        // 0x0020773C: nop
    
            goto L_00207750;
    }
    // 0x0020773C: nop

L_00207740:
    // 0x00207740: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00207744: addiu       $a1, $a1, -0x4D70
    ctx->r5 = ADD32(ctx->r5, -0X4D70);
    // 0x00207748: j           L_002077B8
    // 0x0020774C: nop

        goto L_002077B8;
    // 0x0020774C: nop

L_00207750:
    // 0x00207750: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00207754: addiu       $a1, $a1, -0x4CD8
    ctx->r5 = ADD32(ctx->r5, -0X4CD8);
    // 0x00207758: j           L_002077B8
    // 0x0020775C: nop

        goto L_002077B8;
    // 0x0020775C: nop

L_00207760:
    // 0x00207760: ori         $v1, $v1, 0xD01
    ctx->r3 = ctx->r3 | 0XD01;
    // 0x00207764: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00207768: addiu       $a1, $a1, -0x4E70
    ctx->r5 = ADD32(ctx->r5, -0X4E70);
    // 0x0020776C: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x00207770: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00207774: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00207778: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x0020777C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00207780: j           L_002077A8
    // 0x00207784: andi        $v0, $s5, 0x1
    ctx->r2 = ctx->r21 & 0X1;
        goto L_002077A8;
    // 0x00207784: andi        $v0, $s5, 0x1
    ctx->r2 = ctx->r21 & 0X1;
L_00207788:
    // 0x00207788: ori         $v0, $v0, 0xD01
    ctx->r2 = ctx->r2 | 0XD01;
    // 0x0020778C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00207790: addiu       $a1, $a1, -0x4E70
    ctx->r5 = ADD32(ctx->r5, -0X4E70);
    // 0x00207794: addiu       $v1, $a0, 0x10
    ctx->r3 = ADD32(ctx->r4, 0X10);
    // 0x00207798: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x0020779C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x002077A0: andi        $v0, $s5, 0x1
    ctx->r2 = ctx->r21 & 0X1;
    // 0x002077A4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_002077A8:
    // 0x002077A8: beq         $v0, $zero, L_002077B8
    if (ctx->r2 == 0) {
        // 0x002077AC: nop
    
            goto L_002077B8;
    }
    // 0x002077AC: nop

    // 0x002077B0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002077B4: addiu       $a1, $a1, -0x4DF0
    ctx->r5 = ADD32(ctx->r5, -0X4DF0);
L_002077B8:
    // 0x002077B8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002077BC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x002077C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002077C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002077C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002077CC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002077D0: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x002077D4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002077D8: j           L_00207860
    // 0x002077DC: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
        goto L_00207860;
    // 0x002077DC: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_002077E0:
    // 0x002077E0: beq         $a0, $zero, L_00207860
    if (ctx->r4 == 0) {
        // 0x002077E4: lui         $v1, 0xE700
        ctx->r3 = S32(0XE700 << 16);
            goto L_00207860;
    }
    // 0x002077E4: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x002077E8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002077EC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002077F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002077F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002077F8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002077FC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00207800: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00207804: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00207808: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x0020780C: lui         $v1, 0xFD90
    ctx->r3 = S32(0XFD90 << 16);
    // 0x00207810: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00207814: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00207818: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x0020781C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x00207820: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00207824: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x00207828: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0020782C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00207830: addiu       $v0, $v0, -0x4C40
    ctx->r2 = ADD32(ctx->r2, -0X4C40);
    // 0x00207834: j           L_00207860
    // 0x00207838: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
        goto L_00207860;
    // 0x00207838: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0020783C:
    // 0x0020783C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207840: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207844: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00207848: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020784C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207850: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00207854: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00207858: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020785C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_00207860:
    // 0x00207860: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
L_00207864:
    // 0x00207864: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00207868: beq         $v1, $v0, L_00207880
    if (ctx->r3 == ctx->r2) {
        // 0x0020786C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00207880;
    }
    // 0x0020786C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00207870: beq         $v1, $v0, L_00207888
    if (ctx->r3 == ctx->r2) {
        // 0x00207874: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00207888;
    }
    // 0x00207874: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00207878: j           L_00207890
    // 0x0020787C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00207890;
    // 0x0020787C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00207880:
    // 0x00207880: j           L_0020788C
    // 0x00207884: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_0020788C;
    // 0x00207884: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_00207888:
    // 0x00207888: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_0020788C:
    // 0x0020788C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00207890:
    // 0x00207890: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207894: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207898: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0020789C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002078A0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002078A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002078A8: sll         $v1, $a2, 11
    ctx->r3 = S32(ctx->r6 << 11);
    // 0x002078AC: andi        $v0, $a0, 0x700
    ctx->r2 = ctx->r4 & 0X700;
    // 0x002078B0: lui         $a0, 0xD700
    ctx->r4 = S32(0XD700 << 16);
    // 0x002078B4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002078B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002078BC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x002078C0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002078C4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x002078C8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x002078CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002078D0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x002078D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002078D8: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x002078DC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002078E0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x002078E4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002078E8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002078EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002078F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002078F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002078F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002078FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00207900: jr          $ra
    // 0x00207904: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00207904: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x00207908: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0020790C: jr          $ra
    // 0x00207910: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    return;
    // 0x00207910: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x00207914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00207918: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0020791C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00207920: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00207924: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00207928: jal         0x00224F48
    // 0x0020792C: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    func_00224F48(rdram, ctx);
        goto after_6;
    // 0x0020792C: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    after_6:
    // 0x00207930: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00207934: jr          $ra
    // 0x00207938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00207938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042C4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C4F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042C4F8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C4FC: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C500: sw          $v0, -0x7054($at)
    MEM_W(-0X7054, ctx->r1) = ctx->r2;
    // 0x0042C504: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C508: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C50C: sw          $zero, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = 0;
    // 0x0042C510: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C514: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C518: sw          $zero, -0x704C($at)
    MEM_W(-0X704C, ctx->r1) = 0;
    // 0x0042C51C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C520: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C524: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
    // 0x0042C528: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C52C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C530: sw          $zero, -0x7030($at)
    MEM_W(-0X7030, ctx->r1) = 0;
    // 0x0042C534: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C538: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C53C: sw          $zero, -0x702C($at)
    MEM_W(-0X702C, ctx->r1) = 0;
    // 0x0042C540: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C544: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C548: sw          $zero, -0x7028($at)
    MEM_W(-0X7028, ctx->r1) = 0;
    // 0x0042C54C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C550: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0042C554: sw          $zero, -0x7024($at)
    MEM_W(-0X7024, ctx->r1) = 0;
    // 0x0042C558: jr          $ra
    // 0x0042C55C: nop

    return;
    // 0x0042C55C: nop

;}
RECOMP_FUNC void func_00268150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268150: jr          $ra
    // 0x00268154: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268154: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00232E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00232E20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00232E24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00232E28: bne         $s0, $zero, L_00232E38
    if (ctx->r16 != 0) {
        // 0x00232E2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00232E38;
    }
    // 0x00232E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00232E30: j           L_00232E70
    // 0x00232E34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00232E70;
    // 0x00232E34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232E38:
    // 0x00232E38: jal         0x002113A4
    // 0x00232E3C: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x00232E3C: nop

    after_0:
    // 0x00232E40: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x00232E44: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00232E48: bne         $v1, $zero, L_00232E54
    if (ctx->r3 != 0) {
        // 0x00232E4C: nop
    
            goto L_00232E54;
    }
    // 0x00232E4C: nop

    // 0x00232E50: break       7
    do_break(2305616);
L_00232E54:
    // 0x00232E54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00232E58: bne         $v1, $at, L_00232E6C
    if (ctx->r3 != ctx->r1) {
        // 0x00232E5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00232E6C;
    }
    // 0x00232E5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00232E60: bne         $v0, $at, L_00232E6C
    if (ctx->r2 != ctx->r1) {
        // 0x00232E64: nop
    
            goto L_00232E6C;
    }
    // 0x00232E64: nop

    // 0x00232E68: break       6
    do_break(2305640);
L_00232E6C:
    // 0x00232E6C: mfhi        $v0
    ctx->r2 = hi;
L_00232E70:
    // 0x00232E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00232E74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00232E78: jr          $ra
    // 0x00232E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00232E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004221AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004221AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004221B0: sw          $zero, 0x960($at)
    MEM_W(0X960, ctx->r1) = 0;
    // 0x004221B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004221B8: sw          $zero, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = 0;
    // 0x004221BC: jr          $ra
    // 0x004221C0: nop

    return;
    // 0x004221C0: nop

;}
RECOMP_FUNC void func_00423040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423040: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423044: lw          $v0, 0x980($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X980);
    // 0x00423048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042304C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423050: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00423054: bne         $v0, $zero, L_00423118
    if (ctx->r2 != 0) {
        // 0x00423058: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00423118;
    }
    // 0x00423058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042305C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423060: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x00423064: bne         $v0, $zero, L_00423120
    if (ctx->r2 != 0) {
        // 0x00423068: nop
    
            goto L_00423120;
    }
    // 0x00423068: nop

    // 0x0042306C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423070: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00423074: beq         $v0, $zero, L_0042308C
    if (ctx->r2 == 0) {
        // 0x00423078: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0042308C;
    }
    // 0x00423078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042307C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00423080: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x00423084: j           L_00423098
    // 0x00423088: nop

        goto L_00423098;
    // 0x00423088: nop

L_0042308C:
    // 0x0042308C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423090: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x00423094: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00423098:
    // 0x00423098: beq         $v1, $v0, L_00423118
    if (ctx->r3 == ctx->r2) {
        // 0x0042309C: nop
    
            goto L_00423118;
    }
    // 0x0042309C: nop

    // 0x004230A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004230A4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004230A8: beq         $v0, $zero, L_004230C0
    if (ctx->r2 == 0) {
        // 0x004230AC: nop
    
            goto L_004230C0;
    }
    // 0x004230AC: nop

    // 0x004230B0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004230B4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004230B8: j           L_004230C8
    // 0x004230BC: nop

        goto L_004230C8;
    // 0x004230BC: nop

L_004230C0:
    // 0x004230C0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004230C4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_004230C8:
    // 0x004230C8: jal         0x0028591C
    // 0x004230CC: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x004230CC: nop

    after_0:
    // 0x004230D0: beq         $v0, $zero, L_00423118
    if (ctx->r2 == 0) {
        // 0x004230D4: nop
    
            goto L_00423118;
    }
    // 0x004230D4: nop

    // 0x004230D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004230DC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004230E0: beq         $v0, $zero, L_004230F8
    if (ctx->r2 == 0) {
        // 0x004230E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004230F8;
    }
    // 0x004230E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004230E8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004230EC: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x004230F0: j           L_00423100
    // 0x004230F4: nop

        goto L_00423100;
    // 0x004230F4: nop

L_004230F8:
    // 0x004230F8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004230FC: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00423100:
    // 0x00423100: jal         0x0041DD90
    // 0x00423104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00423104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00423108: beq         $v0, $zero, L_00423118
    if (ctx->r2 == 0) {
        // 0x0042310C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423118;
    }
    // 0x0042310C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423110: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423114: sw          $v0, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r2;
L_00423118:
    // 0x00423118: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042311C: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
L_00423120:
    // 0x00423120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00423124: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423128: jr          $ra
    // 0x0042312C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042312C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275BC4: lw          $a3, 0x40($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X40);
    // 0x00275BC8: lw          $t0, 0x44($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X44);
    // 0x00275BCC: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x00275BD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00275BD4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00275BD8: jr          $ra
    // 0x00275BDC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x00275BDC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0029A580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029A584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029A588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029A58C: jal         0x0029DFF0
    // 0x0029A590: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029A590: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0029A594: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x0029A598: beq         $s0, $zero, L_0029A5B4
    if (ctx->r16 == 0) {
        // 0x0029A59C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029A5B4;
    }
    // 0x0029A59C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029A5A0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0029A5A4: lw          $v1, 0x7AC4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7AC4);
    // 0x0029A5A8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0029A5AC: j           L_0029A5C4
    // 0x0029A5B0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_0029A5C4;
    // 0x0029A5B0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_0029A5B4:
    // 0x0029A5B4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0029A5B8: lw          $v1, 0x7AC4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7AC4);
    // 0x0029A5BC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0029A5C0: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_0029A5C4:
    // 0x0029A5C4: jal         0x0029E010
    // 0x0029A5C8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0029A5C8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_1:
    // 0x0029A5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029A5D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029A5D4: jr          $ra
    // 0x0029A5D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029A5D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00422714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422714: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00422718: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042271C: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x00422720: jr          $ra
    // 0x00422724: nop

    return;
    // 0x00422724: nop

;}
RECOMP_FUNC void func_00271B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271B08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271B0C: jal         0x00276DFC
    // 0x00271B10: addiu       $a0, $a0, 0x2BC0
    ctx->r4 = ADD32(ctx->r4, 0X2BC0);
    func_00276DFC(rdram, ctx);
        goto after_0;
    // 0x00271B10: addiu       $a0, $a0, 0x2BC0
    ctx->r4 = ADD32(ctx->r4, 0X2BC0);
    after_0:
    // 0x00271B14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271B18: jr          $ra
    // 0x00271B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00426818: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042681C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00426820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00426824: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x00426828: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042682C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00426830: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x00426834: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426838: beq         $v1, $v0, L_00426848
    if (ctx->r3 == ctx->r2) {
        // 0x0042683C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_00426848;
    }
    // 0x0042683C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00426840: j           L_004268BC
    // 0x00426844: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_004268BC;
    // 0x00426844: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00426848:
    // 0x00426848: jal         0x00285878
    // 0x0042684C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0042684C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x00426850: jal         0x002847E0
    // 0x00426854: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00426854: nop

    after_1:
    // 0x00426858: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042685C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00426860: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x00426864: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00426868: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0042686C: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x00426870: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x00426874: bne         $s0, $v0, L_004268B0
    if (ctx->r16 != ctx->r2) {
        // 0x00426878: sll         $a0, $s1, 1
        ctx->r4 = S32(ctx->r17 << 1);
            goto L_004268B0;
    }
    // 0x00426878: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x0042687C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00426880: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00426884: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00426888: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0042688C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00426890: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x00426894: jal         0x00429130
    // 0x00426898: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00429130(rdram, ctx);
        goto after_2;
    // 0x00426898: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x0042689C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004268A0: bnel        $s0, $zero, L_004268A8
    if (ctx->r16 != 0) {
        // 0x004268A4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_004268A8;
    }
    goto skip_0;
    // 0x004268A4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_0:
L_004268A8:
    // 0x004268A8: jal         0x004258E8
    // 0x004268AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x004268AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_004268B0:
    // 0x004268B0: jal         0x002858A4
    // 0x004268B4: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x004268B4: nop

    after_4:
    // 0x004268B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004268BC:
    // 0x004268BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004268C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004268C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004268C8: jr          $ra
    // 0x004268CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004268CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00419884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419888: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x0041988C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419890: addiu       $a2, $a2, -0x632C
    ctx->r6 = ADD32(ctx->r6, -0X632C);
    // 0x00419894: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419898: jal         0x00416894
    // 0x0041989C: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x0041989C: nop

    after_0:
    // 0x004198A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004198A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004198A8: jr          $ra
    // 0x004198AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004198AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00419024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419028: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041902C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00419030: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00419034: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00419038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041903C: lb          $v0, 0x2B($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2B);
    // 0x00419040: beq         $v0, $zero, L_00419074
    if (ctx->r2 == 0) {
        // 0x00419044: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00419074;
    }
    // 0x00419044: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00419048: jal         0x004160F0
    // 0x0041904C: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041904C: nop

    after_0:
    // 0x00419050: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419054: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00419058: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041905C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00419060: lb          $a2, 0x2B($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X2B);
    // 0x00419064: jal         0x0029E3E0
    // 0x00419068: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00419068: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0041906C: j           L_00419094
    // 0x00419070: nop

        goto L_00419094;
    // 0x00419070: nop

L_00419074:
    // 0x00419074: jal         0x004160F0
    // 0x00419078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00419078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041907C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419080: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00419084: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00419088: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041908C: jal         0x0029E3E0
    // 0x00419090: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00419090: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_00419094:
    // 0x00419094: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419098: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041909C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004190A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004190A4: jr          $ra
    // 0x004190A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004190A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020AF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020AF08: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0020AF0C: lw          $v1, 0x7070($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7070);
    // 0x0020AF10: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020AF14: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x0020AF18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0020AF1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020AF20: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x0020AF24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020AF28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0020AF2C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0020AF30: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0020AF34: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020AF38: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0020AF3C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0020AF40: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0020AF44: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020AF48: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020AF4C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020AF50: lw          $v1, 0x114($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X114);
    // 0x0020AF54: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x0020AF58: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020AF5C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0020AF60: lw          $v1, 0x2214($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2214);
    // 0x0020AF64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x0020AF68: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0020AF6C: sltiu       $v1, $v1, 0xBB8
    ctx->r3 = ctx->r3 < 0XBB8 ? 1 : 0;
    // 0x0020AF70: bne         $v1, $zero, L_0020B22C
    if (ctx->r3 != 0) {
        // 0x0020AF74: addu        $s7, $a0, $zero
        ctx->r23 = ADD32(ctx->r4, 0);
            goto L_0020B22C;
    }
    // 0x0020AF74: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0020AF78: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x0020AF7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020AF80: jal         0x002017D4
    // 0x0020AF84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020AF84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0020AF88: bltz        $s2, L_0020B22C
    if (SIGNED(ctx->r18) < 0) {
        // 0x0020AF8C: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_0020B22C;
    }
    // 0x0020AF8C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0020AF90: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0020AF94: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020AF98: beq         $v0, $zero, L_0020B22C
    if (ctx->r2 == 0) {
        // 0x0020AF9C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020B22C;
    }
    // 0x0020AF9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020AFA0: jal         0x0020565C
    // 0x0020AFA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020565C(rdram, ctx);
        goto after_1;
    // 0x0020AFA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0020AFA8: beq         $s5, $zero, L_0020AFC4
    if (ctx->r21 == 0) {
        // 0x0020AFAC: lui         $a1, 0xDB06
        ctx->r5 = S32(0XDB06 << 16);
            goto L_0020AFC4;
    }
    // 0x0020AFAC: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x0020AFB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020AFB4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020AFB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020AFBC: j           L_0020AFD8
    // 0x0020AFC0: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
        goto L_0020AFD8;
    // 0x0020AFC0: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
L_0020AFC4:
    // 0x0020AFC4: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x0020AFC8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020AFCC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020AFD0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020AFD4: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
L_0020AFD8:
    // 0x0020AFD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020AFDC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0020AFE0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020AFE4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0020AFE8: beq         $s0, $zero, L_0020B04C
    if (ctx->r16 == 0) {
        // 0x0020AFEC: sw          $s6, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r22;
            goto L_0020B04C;
    }
    // 0x0020AFEC: sw          $s6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r22;
    // 0x0020AFF0: lui         $a2, 0xDC08
    ctx->r6 = S32(0XDC08 << 16);
    // 0x0020AFF4: ori         $a2, $a2, 0x60A
    ctx->r6 = ctx->r6 | 0X60A;
    // 0x0020AFF8: lui         $a3, 0xDC08
    ctx->r7 = S32(0XDC08 << 16);
    // 0x0020AFFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020B000: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020B004: ori         $a3, $a3, 0x90A
    ctx->r7 = ctx->r7 | 0X90A;
    // 0x0020B008: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0020B00C: lui         $v0, 0xDB02
    ctx->r2 = S32(0XDB02 << 16);
    // 0x0020B010: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0020B014: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020B018: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0020B01C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020B020: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x0020B024: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0020B028: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x0020B02C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x0020B030: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0020B034: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0020B038: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0020B03C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0020B040: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020B044: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x0020B048: sw          $s0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r16;
L_0020B04C:
    // 0x0020B04C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x0020B050: bne         $a3, $zero, L_0020B06C
    if (ctx->r7 != 0) {
        // 0x0020B054: lui         $a2, 0xDB06
        ctx->r6 = S32(0XDB06 << 16);
            goto L_0020B06C;
    }
    // 0x0020B054: lui         $a2, 0xDB06
    ctx->r6 = S32(0XDB06 << 16);
    // 0x0020B058: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0020B05C: jal         0x002017D4
    // 0x0020B060: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0020B060: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0020B064: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0020B068: lui         $a2, 0xDB06
    ctx->r6 = S32(0XDB06 << 16);
L_0020B06C:
    // 0x0020B06C: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    // 0x0020B070: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0020B074: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0020B078: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x0020B07C: addiu       $s2, $s2, -0x71DC
    ctx->r18 = ADD32(ctx->r18, -0X71DC);
    // 0x0020B080: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0020B084: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0020B088: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020B08C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0020B090: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x0020B094: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0020B098: jal         0x002017D4
    // 0x0020B09C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020B09C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    after_3:
    // 0x0020B0A0: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x0020B0A4: ori         $t0, $t0, 0x1001
    ctx->r8 = ctx->r8 | 0X1001;
    // 0x0020B0A8: lui         $t2, 0xD7FF
    ctx->r10 = S32(0XD7FF << 16);
    // 0x0020B0AC: ori         $t2, $t2, 0x2
    ctx->r10 = ctx->r10 | 0X2;
    // 0x0020B0B0: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x0020B0B4: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x0020B0B8: lui         $t4, 0xFCFF
    ctx->r12 = S32(0XFCFF << 16);
    // 0x0020B0BC: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x0020B0C0: lui         $t3, 0xFFFD
    ctx->r11 = S32(0XFFFD << 16);
    // 0x0020B0C4: ori         $t3, $t3, 0xF6FB
    ctx->r11 = ctx->r11 | 0XF6FB;
    // 0x0020B0C8: lui         $t6, 0xE200
    ctx->r14 = S32(0XE200 << 16);
    // 0x0020B0CC: ori         $t6, $t6, 0x1C
    ctx->r14 = ctx->r14 | 0X1C;
    // 0x0020B0D0: lui         $t5, 0x10
    ctx->r13 = S32(0X10 << 16);
    // 0x0020B0D4: ori         $t5, $t5, 0x4E50
    ctx->r13 = ctx->r13 | 0X4E50;
    // 0x0020B0D8: lui         $t7, 0xD9D8
    ctx->r15 = S32(0XD9D8 << 16);
    // 0x0020B0DC: ori         $t7, $t7, 0xFBFB
    ctx->r15 = ctx->r15 | 0XFBFB;
    // 0x0020B0E0: lui         $a3, 0x20
    ctx->r7 = S32(0X20 << 16);
    // 0x0020B0E4: ori         $a3, $a3, 0x4
    ctx->r7 = ctx->r7 | 0X4;
    // 0x0020B0E8: lui         $s0, 0xD9FF
    ctx->r16 = S32(0XD9FF << 16);
    // 0x0020B0EC: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x0020B0F0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0020B0F4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0020B0F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B0FC: sw          $v1, -0x4780($at)
    MEM_W(-0X4780, ctx->r1) = ctx->r3;
    // 0x0020B100: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B104: sw          $v1, -0x477C($at)
    MEM_W(-0X477C, ctx->r1) = ctx->r3;
    // 0x0020B108: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0020B10C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0020B110: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0020B114: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0020B118: lw          $a1, -0x475C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X475C);
    // 0x0020B11C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0020B120: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0020B124: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x0020B128: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x0020B12C: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x0020B130: or          $a1, $a1, $a3
    ctx->r5 = ctx->r5 | ctx->r7;
    // 0x0020B134: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0020B138: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0020B13C: addiu       $v1, $a0, 0x10
    ctx->r3 = ADD32(ctx->r4, 0X10);
    // 0x0020B140: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0020B144: addiu       $a2, $a0, 0x18
    ctx->r6 = ADD32(ctx->r4, 0X18);
    // 0x0020B148: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x0020B14C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x0020B150: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0020B154: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0020B158: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x0020B15C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0020B160: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0020B164: sw          $a2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r6;
    // 0x0020B168: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x0020B16C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x0020B170: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0020B174: addiu       $v1, $a0, 0x20
    ctx->r3 = ADD32(ctx->r4, 0X20);
    // 0x0020B178: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0020B17C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0020B180: lw          $v0, -0x4754($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4754);
    // 0x0020B184: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    // 0x0020B188: sw          $t4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r12;
    // 0x0020B18C: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x0020B190: addiu       $a2, $a0, 0x28
    ctx->r6 = ADD32(ctx->r4, 0X28);
    // 0x0020B194: sw          $a2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r6;
    // 0x0020B198: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x0020B19C: or          $v0, $v0, $t5
    ctx->r2 = ctx->r2 | ctx->r13;
    // 0x0020B1A0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0020B1A4: addiu       $v1, $a0, 0x30
    ctx->r3 = ADD32(ctx->r4, 0X30);
    // 0x0020B1A8: addiu       $v0, $a0, 0x38
    ctx->r2 = ADD32(ctx->r4, 0X38);
    // 0x0020B1AC: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0020B1B0: sw          $t7, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r15;
    // 0x0020B1B4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0020B1B8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x0020B1BC: sw          $s0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r16;
    // 0x0020B1C0: blez        $s3, L_0020B218
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0020B1C4: sw          $a1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r5;
            goto L_0020B218;
    }
    // 0x0020B1C4: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x0020B1C8: lui         $s5, 0xDE00
    ctx->r21 = S32(0XDE00 << 16);
L_0020B1CC:
    // 0x0020B1CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0020B1D0: jal         0x002017D4
    // 0x0020B1D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0020B1D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0020B1D8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020B1DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B1E0: jal         0x002017D4
    // 0x0020B1E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0020B1E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0020B1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020B1EC: jal         0x002017D4
    // 0x0020B1F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0020B1F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x0020B1F4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0020B1F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020B1FC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0020B200: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020B204: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0020B208: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0020B20C: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0020B210: bne         $v0, $zero, L_0020B1CC
    if (ctx->r2 != 0) {
        // 0x0020B214: sw          $s5, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r21;
            goto L_0020B1CC;
    }
    // 0x0020B214: sw          $s5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r21;
L_0020B218:
    // 0x0020B218: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0020B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B220: sw          $v0, -0x477C($at)
    MEM_W(-0X477C, ctx->r1) = ctx->r2;
    // 0x0020B224: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B228: sw          $v0, -0x4780($at)
    MEM_W(-0X4780, ctx->r1) = ctx->r2;
L_0020B22C:
    // 0x0020B22C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0020B230: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0020B234: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0020B238: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020B23C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020B240: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020B244: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020B248: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020B24C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020B250: jr          $ra
    // 0x0020B254: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0020B254: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00200E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00200E1C:
    // 0x00200E1C: lhu         $t0, 0x0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X0);
    // 0x00200E20: addi        $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00200E24: and         $t0, $t0, $t6
    ctx->r8 = ctx->r8 & ctx->r14;
    // 0x00200E28: lhu         $at, 0x0($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X0);
    // 0x00200E2C: addi        $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00200E30: sub         $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x00200E34: bne         $t0, $zero, L_00200E1C
    if (ctx->r8 != 0) {
        // 0x00200E38: nop
    
            goto L_00200E1C;
    }
    // 0x00200E38: nop

    // 0x00200E3C: lbu         $t1, 0x3C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3C);
    // 0x00200E40: nop

    // 0x00200E44: sub         $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x00200E48: bgez        $t7, L_00200E60
    if (SIGNED(ctx->r15) >= 0) {
        // 0x00200E4C: nop
    
            goto L_00200E60;
    }
    // 0x00200E4C: nop

    // 0x00200E50: addu        $t9, $ra, $zero
    ctx->r25 = ADD32(ctx->r31, 0);
    // 0x00200E54: jal         0x00200EE8
    // 0x00200E58: nop

    func_00200EE8(rdram, ctx);
        goto after_0;
    // 0x00200E58: nop

    after_0:
    // 0x00200E5C: addu        $ra, $t9, $zero
    ctx->r31 = ADD32(ctx->r25, 0);
L_00200E60:
    // 0x00200E60: srlv        $t6, $t6, $t1
    ctx->r14 = S32(U32(ctx->r14) >> (ctx->r9 & 31));
    // 0x00200E64: lbu         $t0, 0x3D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3D);
    // 0x00200E68: nop

    // 0x00200E6C: addi        $at, $t0, -0x2
    ctx->r1 = ADD32(ctx->r8, -0X2);
    // 0x00200E70: bltz        $at, L_00200EB8
    if (SIGNED(ctx->r1) < 0) {
        // 0x00200E74: nop
    
            goto L_00200EB8;
    }
    // 0x00200E74: nop

    // 0x00200E78: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00200E7C: addu        $t1, $t0, $zero
    ctx->r9 = ADD32(ctx->r8, 0);
    // 0x00200E80: addu        $t2, $t0, $zero
    ctx->r10 = ADD32(ctx->r8, 0);
    // 0x00200E84: lhu         $t0, 0x3E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X3E);
    // 0x00200E88: sub         $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x00200E8C: and         $t0, $t0, $t6
    ctx->r8 = ctx->r8 & ctx->r14;
    // 0x00200E90: bgez        $t7, L_00200EA8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x00200E94: nop
    
            goto L_00200EA8;
    }
    // 0x00200E94: nop

    // 0x00200E98: addu        $t9, $ra, $zero
    ctx->r25 = ADD32(ctx->r31, 0);
    // 0x00200E9C: jal         0x00200EE8
    // 0x00200EA0: nop

    func_00200EE8(rdram, ctx);
        goto after_1;
    // 0x00200EA0: nop

    after_1:
    // 0x00200EA4: addu        $ra, $t9, $zero
    ctx->r31 = ADD32(ctx->r25, 0);
L_00200EA8:
    // 0x00200EA8: srlv        $t6, $t6, $t1
    ctx->r14 = S32(U32(ctx->r14) >> (ctx->r9 & 31));
    // 0x00200EAC: addi        $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x00200EB0: sllv        $at, $at, $t2
    ctx->r1 = S32(ctx->r1 << (ctx->r10 & 31));
    // 0x00200EB4: or          $t0, $at, $t0
    ctx->r8 = ctx->r1 | ctx->r8;
L_00200EB8:
    // 0x00200EB8: jr          $ra
    // 0x00200EBC: nop

    return;
    // 0x00200EBC: nop

;}
RECOMP_FUNC void func_0025AC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AC88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AC8C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0025AC90: addiu       $v1, $v1, 0x5C66
    ctx->r3 = ADD32(ctx->r3, 0X5C66);
    // 0x0025AC94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AC98: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0025AC9C: beq         $v0, $zero, L_0025ACBC
    if (ctx->r2 == 0) {
        // 0x0025ACA0: nop
    
            goto L_0025ACBC;
    }
    // 0x0025ACA0: nop

    // 0x0025ACA4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025ACA8: addiu       $a2, $a2, 0x630
    ctx->r6 = ADD32(ctx->r6, 0X630);
    // 0x0025ACAC: jal         0x00245A98
    // 0x0025ACB0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025ACB0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0025ACB4: j           L_0025AD24
    // 0x0025ACB8: nop

        goto L_0025AD24;
    // 0x0025ACB8: nop

L_0025ACBC:
    // 0x0025ACBC: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x0025ACC0: beq         $v0, $zero, L_0025ACE0
    if (ctx->r2 == 0) {
        // 0x0025ACC4: nop
    
            goto L_0025ACE0;
    }
    // 0x0025ACC4: nop

    // 0x0025ACC8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025ACCC: addiu       $a2, $a2, 0x630
    ctx->r6 = ADD32(ctx->r6, 0X630);
    // 0x0025ACD0: jal         0x00245A98
    // 0x0025ACD4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_00245A98(rdram, ctx);
        goto after_1;
    // 0x0025ACD4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0025ACD8: j           L_0025AD24
    // 0x0025ACDC: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
        goto L_0025AD24;
    // 0x0025ACDC: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
L_0025ACE0:
    // 0x0025ACE0: lhu         $v0, 0xC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC);
    // 0x0025ACE4: bne         $v0, $zero, L_0025AD0C
    if (ctx->r2 != 0) {
        // 0x0025ACE8: nop
    
            goto L_0025AD0C;
    }
    // 0x0025ACE8: nop

    // 0x0025ACEC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025ACF0: lhu         $a3, 0x76($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X76);
    // 0x0025ACF4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025ACF8: addiu       $a2, $a2, -0x910
    ctx->r6 = ADD32(ctx->r6, -0X910);
    // 0x0025ACFC: jal         0x00245A98
    // 0x0025AD00: nop

    func_00245A98(rdram, ctx);
        goto after_2;
    // 0x0025AD00: nop

    after_2:
    // 0x0025AD04: j           L_0025AD24
    // 0x0025AD08: nop

        goto L_0025AD24;
    // 0x0025AD08: nop

L_0025AD0C:
    // 0x0025AD0C: lhu         $a3, 0xC($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0XC);
    // 0x0025AD10: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AD14: addiu       $a2, $a2, 0x630
    ctx->r6 = ADD32(ctx->r6, 0X630);
    // 0x0025AD18: jal         0x00245A98
    // 0x0025AD1C: nop

    func_00245A98(rdram, ctx);
        goto after_3;
    // 0x0025AD1C: nop

    after_3:
    // 0x0025AD20: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
L_0025AD24:
    // 0x0025AD24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AD28: jr          $ra
    // 0x0025AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455CD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455CD4: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00455CD8: beq         $v0, $zero, L_00455CF8
    if (ctx->r2 == 0) {
            // 0x00455CDC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    func_00455CF8(rdram, ctx);
    return;
    }
    // 0x00455CDC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00455CE0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00455CE4: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x00455CE8: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00455CEC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00455CF0: jr          $ra
    // 0x00455CF4: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
    return;
    // 0x00455CF4: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_00235510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00235514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00235518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023551C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00235520: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00235524: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00235528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023552C: beq         $v1, $v0, L_0023557C
    if (ctx->r3 == ctx->r2) {
        // 0x00235530: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023557C;
    }
    // 0x00235530: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00235534: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00235538: beql        $v0, $zero, L_00235550
    if (ctx->r2 == 0) {
        // 0x0023553C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00235550;
    }
    goto skip_0;
    // 0x0023553C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_0:
    // 0x00235540: beq         $v1, $zero, L_00235568
    if (ctx->r3 == 0) {
        // 0x00235544: nop
    
            goto L_00235568;
    }
    // 0x00235544: nop

    // 0x00235548: j           L_002356AC
    // 0x0023554C: nop

        goto L_002356AC;
    // 0x0023554C: nop

L_00235550:
    // 0x00235550: beq         $v1, $v0, L_002355A8
    if (ctx->r3 == ctx->r2) {
        // 0x00235554: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_002355A8;
    }
    // 0x00235554: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00235558: beq         $v1, $v0, L_00235608
    if (ctx->r3 == ctx->r2) {
        // 0x0023555C: nop
    
            goto L_00235608;
    }
    // 0x0023555C: nop

    // 0x00235560: j           L_002356AC
    // 0x00235564: nop

        goto L_002356AC;
    // 0x00235564: nop

L_00235568:
    // 0x00235568: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0023556C: bnel        $v0, $zero, L_002356AC
    if (ctx->r2 != 0) {
        // 0x00235570: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002356AC;
    }
    goto skip_1;
    // 0x00235570: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
    // 0x00235574: j           L_002356AC
    // 0x00235578: nop

        goto L_002356AC;
    // 0x00235578: nop

L_0023557C:
    // 0x0023557C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00235580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235584: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00235588: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023558C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00235590: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00235594: nop

    // 0x00235598: bc1f        L_002356AC
    if (!c1cs) {
        // 0x0023559C: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_002356AC;
    }
    // 0x0023559C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x002355A0: j           L_002356AC
    // 0x002355A4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_002356AC;
    // 0x002355A4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_002355A8:
    // 0x002355A8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002355AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002355B0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002355B4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002355B8: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x002355BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002355C0: nop

    // 0x002355C4: bc1f        L_002355D4
    if (!c1cs) {
        // 0x002355C8: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_002355D4;
    }
    // 0x002355C8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x002355CC: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002355D0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_002355D4:
    // 0x002355D4: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002355D8: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002355DC: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002355E0: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x002355E4: mul.s       $f0, $f14, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x002355E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002355EC: lwc1        $f1, 0x64B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64B8);
    // 0x002355F0: sub.s       $f12, $f1, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f1.fl - ctx->f14.fl;
    // 0x002355F4: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x002355F8: mul.s       $f1, $f12, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x002355FC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00235600: j           L_002356AC
    // 0x00235604: swc1        $f1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_002356AC;
    // 0x00235604: swc1        $f1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00235608:
    // 0x00235608: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023560C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235610: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00235614: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00235618: lwc1        $f1, 0x30($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X30);
    // 0x0023561C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00235620: nop

    // 0x00235624: bc1f        L_00235634
    if (!c1cs) {
        // 0x00235628: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_00235634;
    }
    // 0x00235628: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0023562C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00235630: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_00235634:
    // 0x00235634: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00235638: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0023563C: lwc1        $f7, 0x54($s0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r16, 0X54);
    // 0x00235640: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00235644: mul.s       $f7, $f14, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = MUL_S(ctx->f14.fl, ctx->f7.fl);
    // 0x00235648: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x0023564C: mul.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x00235650: lwc1        $f2, 0x5C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x00235654: mul.s       $f2, $f14, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x00235658: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x0023565C: mul.s       $f0, $f14, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x00235660: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235664: lwc1        $f1, 0x64BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X64BC);
    // 0x00235668: sub.s       $f12, $f1, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f1.fl - ctx->f14.fl;
    // 0x0023566C: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00235670: mul.s       $f6, $f12, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x00235674: lwc1        $f5, 0x48($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X48);
    // 0x00235678: mul.s       $f5, $f12, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = MUL_S(ctx->f12.fl, ctx->f5.fl);
    // 0x0023567C: lwc1        $f3, 0x4C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4C);
    // 0x00235680: mul.s       $f3, $f12, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f12.fl, ctx->f3.fl);
    // 0x00235684: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x00235688: mul.s       $f1, $f12, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x0023568C: add.s       $f6, $f6, $f7
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f7.fl;
    // 0x00235690: add.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f4.fl;
    // 0x00235694: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00235698: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023569C: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x002356A0: swc1        $f5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x002356A4: swc1        $f3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002356A8: swc1        $f1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_002356AC:
    // 0x002356AC: beq         $s1, $zero, L_00235884
    if (ctx->r17 == 0) {
        // 0x002356B0: nop
    
            goto L_00235884;
    }
    // 0x002356B0: nop

L_002356B4:
    // 0x002356B4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x002356B8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002356BC: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002356C0: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x002356C4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x002356C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002356CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x002356D0: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x002356D4: beq         $v0, $zero, L_0023587C
    if (ctx->r2 == 0) {
        // 0x002356D8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023587C;
    }
    // 0x002356D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002356DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002356E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002356E4: addu        $at, $at, $v0
    gpr jr_addend_002356EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002356E8: lw          $v0, 0x64C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X64C0);
    // 0x002356EC: jr          $v0
    // 0x002356F0: nop

    switch (jr_addend_002356EC >> 2) {
        case 0: goto L_002356F4; break;
        case 1: goto L_00235700; break;
        case 2: goto L_00235718; break;
        case 3: goto L_00235748; break;
        case 4: goto L_00235764; break;
        case 5: goto L_00235798; break;
        case 6: goto L_002357E4; break;
        case 7: goto L_00235860; break;
        case 8: goto L_00235870; break;
        default: switch_error(__func__, 0x002356EC, 0x800A64C0);
    }
    // 0x002356F0: nop

L_002356F4:
    // 0x002356F4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x002356F8: j           L_0023587C
    // 0x002356FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_0023587C;
    // 0x002356FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_00235700:
    // 0x00235700: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00235704: lwc1        $f5, 0x0($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00235708: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0023570C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235710: j           L_0023587C
    // 0x00235714: swc1        $f5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
        goto L_0023587C;
    // 0x00235714: swc1        $f5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
L_00235718:
    // 0x00235718: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0023571C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00235720: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00235724: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235728: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0023572C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00235730: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00235738: jal         0x002119FC
    // 0x0023573C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0023573C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    after_0:
    // 0x00235740: j           L_0023587C
    // 0x00235744: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_0023587C;
    // 0x00235744: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00235748:
    // 0x00235748: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0023574C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00235750: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00235754: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00235758: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0023575C: j           L_0023587C
    // 0x00235760: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
        goto L_0023587C;
    // 0x00235760: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
L_00235764:
    // 0x00235764: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00235768: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0023576C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00235770: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00235774: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235778: lwc1        $f5, 0x0($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023577C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00235780: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235784: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x00235788: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0023578C: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x00235790: j           L_0023587C
    // 0x00235794: swc1        $f5, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
        goto L_0023587C;
    // 0x00235794: swc1        $f5, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
L_00235798:
    // 0x00235798: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0023579C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002357A0: lwc1        $f7, 0x0($v0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x002357A4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002357A8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x002357AC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002357B0: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x002357B4: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x002357B8: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x002357BC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x002357C0: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x002357C4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002357C8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x002357CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x002357D0: swc1        $f7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x002357D4: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x002357D8: swc1        $f14, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f14.u32l;
    // 0x002357DC: j           L_0023587C
    // 0x002357E0: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
        goto L_0023587C;
    // 0x002357E0: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_002357E4:
    // 0x002357E4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x002357E8: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    // 0x002357EC: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x002357F0: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x002357F4: lwc1        $f3, 0x24($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x002357F8: lwc1        $f7, 0x0($v1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x002357FC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00235800: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00235804: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00235808: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x0023580C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235810: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00235814: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00235818: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0023581C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00235820: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x00235824: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00235828: lwc1        $f5, 0xC($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x0023582C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00235830: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00235834: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x00235838: swc1        $f1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023583C: swc1        $f2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f2.u32l;
    // 0x00235840: swc1        $f3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x00235844: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00235848: swc1        $f7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x0023584C: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x00235850: swc1        $f14, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f14.u32l;
    // 0x00235854: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x00235858: j           L_0023587C
    // 0x0023585C: swc1        $f5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
        goto L_0023587C;
    // 0x0023585C: swc1        $f5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
L_00235860:
    // 0x00235860: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00235864: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00235868: j           L_00235878
    // 0x0023586C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
        goto L_00235878;
    // 0x0023586C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_00235870:
    // 0x00235870: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00235874: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_00235878:
    // 0x00235878: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_0023587C:
    // 0x0023587C: bne         $s1, $zero, L_002356B4
    if (ctx->r17 != 0) {
        // 0x00235880: nop
    
            goto L_002356B4;
    }
    // 0x00235880: nop

L_00235884:
    // 0x00235884: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00235888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023588C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00235890: jr          $ra
    // 0x00235894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00235894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028CD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CD68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028CD6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028CD70: andi        $s0, $a0, 0xF
    ctx->r16 = ctx->r4 & 0XF;
    // 0x0028CD74: sra         $a0, $a0, 4
    ctx->r4 = S32(SIGNED(ctx->r4) >> 4);
    // 0x0028CD78: andi        $a0, $a0, 0xF
    ctx->r4 = ctx->r4 & 0XF;
    // 0x0028CD7C: slti        $v0, $a0, 0xA
    ctx->r2 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x0028CD80: bne         $v0, $zero, L_0028CD90
    if (ctx->r2 != 0) {
        // 0x0028CD84: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0028CD90;
    }
    // 0x0028CD84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028CD88: j           L_0028CD94
    // 0x0028CD8C: addiu       $a0, $a0, 0x57
    ctx->r4 = ADD32(ctx->r4, 0X57);
        goto L_0028CD94;
    // 0x0028CD8C: addiu       $a0, $a0, 0x57
    ctx->r4 = ADD32(ctx->r4, 0X57);
L_0028CD90:
    // 0x0028CD90: ori         $a0, $a0, 0x30
    ctx->r4 = ctx->r4 | 0X30;
L_0028CD94:
    // 0x0028CD94: jal         0x0028B430
    // 0x0028CD98: nop

    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028CD98: nop

    after_0:
    // 0x0028CD9C: slti        $v0, $s0, 0xA
    ctx->r2 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x0028CDA0: bne         $v0, $zero, L_0028CDAC
    if (ctx->r2 != 0) {
        // 0x0028CDA4: ori         $a0, $s0, 0x30
        ctx->r4 = ctx->r16 | 0X30;
            goto L_0028CDAC;
    }
    // 0x0028CDA4: ori         $a0, $s0, 0x30
    ctx->r4 = ctx->r16 | 0X30;
    // 0x0028CDA8: addiu       $a0, $s0, 0x57
    ctx->r4 = ADD32(ctx->r16, 0X57);
L_0028CDAC:
    // 0x0028CDAC: jal         0x0028B430
    // 0x0028CDB0: nop

    func_0028B430(rdram, ctx);
        goto after_1;
    // 0x0028CDB0: nop

    after_1:
    // 0x0028CDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028CDB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028CDBC: jr          $ra
    // 0x0028CDC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028CDC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044FB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416B44:
    // 0x0044FB30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044FB34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044FB38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044FB3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0044FB40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044FB44: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0044FB48: beq         $s0, $zero, L_0044FB98
    if (ctx->r16 == 0) {
        // 0x0044FB4C: nop
    
            goto L_0044FB98;
    }
    // 0x0044FB4C: nop

    // 0x0044FB50: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0044FB54: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x0044FB58: beq         $v0, $zero, L_0044FB68
    if (ctx->r2 == 0) {
        // 0x0044FB5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044FB68;
    }
    // 0x0044FB5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044FB60: jalr        $v0
    // 0x0044FB64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0044FB64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
L_0044FB68:
    // 0x0044FB68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044FB6C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0044FB70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0044FB74: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x0044FB78: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x0044FB7C: jal         0x00200738
    // 0x0044FB80: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0044FB80: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    after_1:
    // 0x0044FB84: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0044FB88: jal         0x002052D8
    // 0x0044FB8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0044FB8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x0044FB90: j           L_00416B44
    // 0x0044FB94: nop

    func_00416B44(rdram, ctx);
    return;
    // 0x0044FB94: nop

L_0044FB98:
    // 0x0044FB98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0044FB9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044FBA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044FBA4: jr          $ra
    // 0x0044FBA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044FBA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00232684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00232688: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023268C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00232690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00232694: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00232698: beq         $a1, $zero, L_002326FC
    if (ctx->r5 == 0) {
        // 0x0023269C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002326FC;
    }
    // 0x0023269C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002326A0: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x002326A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002326A8: beql        $v0, $zero, L_002326FC
    if (ctx->r2 == 0) {
        // 0x002326AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002326FC;
    }
    goto skip_0;
    // 0x002326AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x002326B0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002326B4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002326B8: jal         0x0022425C
    // 0x002326BC: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x002326BC: nop

    after_0:
    // 0x002326C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002326C4: beq         $a0, $zero, L_002326FC
    if (ctx->r4 == 0) {
        // 0x002326C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002326FC;
    }
    // 0x002326C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002326CC: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x002326D0: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x002326D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002326D8: beq         $v0, $zero, L_002326FC
    if (ctx->r2 == 0) {
        // 0x002326DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002326FC;
    }
    // 0x002326DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002326E0: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002326E4: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x002326E8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002326EC: nop

    // 0x002326F0: bc1t        L_002326FC
    if (c1cs) {
        // 0x002326F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002326FC;
    }
    // 0x002326F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002326F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002326FC:
    // 0x002326FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00232700: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00232704: jr          $ra
    // 0x00232708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00232708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00271D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271D58: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00271D5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271D60: lw          $a0, 0x2B4C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2B4C);
    // 0x00271D64: jal         0x002017D4
    // 0x00271D68: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00271D68: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x00271D6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00271D70: jal         0x002017D4
    // 0x00271D74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00271D74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00271D78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271D7C: jr          $ra
    // 0x00271D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455788: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045578C: lwc1        $f1, 0x930($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X930);
    // 0x00455790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00455794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00455798: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0045579C: nop

    // 0x004557A0: bc1f        L_004557D0
    if (!c1cs) {
        // 0x004557A4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_004557D0;
    }
    // 0x004557A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004557A8: jal         0x0042444C
    // 0x004557AC: nop

    entry_0042444C(rdram, ctx);
        goto after_0;
    // 0x004557AC: nop

    after_0:
    // 0x004557B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004557B4: lwc1        $f0, 0x132C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X132C);
    // 0x004557B8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004557BC: lbu         $v0, 0x203B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X203B);
    // 0x004557C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004557C4: swc1        $f0, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->f0.u32l;
    // 0x004557C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004557CC: sb          $v0, -0x53A8($at)
    MEM_B(-0X53A8, ctx->r1) = ctx->r2;
L_004557D0:
    // 0x004557D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004557D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004557D8: jr          $ra
    // 0x004557DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004557DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026961C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026961C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00269620: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00269624: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00269628: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0026962C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00269630: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00269634: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00269638: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x0026963C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x00269640: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x00269644: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00269648: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x0026964C: bne         $v0, $v1, L_0026966C
    if (ctx->r2 != ctx->r3) {
        // 0x00269650: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0026966C;
    }
    // 0x00269650: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00269654: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00269658: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026965C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269660: addiu       $a0, $a0, 0x1BE0
    ctx->r4 = ADD32(ctx->r4, 0X1BE0);
    // 0x00269664: bne         $v0, $zero, L_002696C8
    if (ctx->r2 != 0) {
        // 0x00269668: nop
    
            goto L_002696C8;
    }
    // 0x00269668: nop

L_0026966C:
    // 0x0026966C: jal         0x00267EE8
    // 0x00269670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00267EE8(rdram, ctx);
        goto after_0;
    // 0x00269670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00269674: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00269678: jal         0x00267F64
    // 0x0026967C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00267F64(rdram, ctx);
        goto after_1;
    // 0x0026967C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00269680: bne         $v0, $zero, L_002696A8
    if (ctx->r2 != 0) {
        // 0x00269684: nop
    
            goto L_002696A8;
    }
    // 0x00269684: nop

    // 0x00269688: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026968C: addiu       $a0, $a0, 0x1BE0
    ctx->r4 = ADD32(ctx->r4, 0X1BE0);
    // 0x00269690: beq         $s0, $zero, L_002696C8
    if (ctx->r16 == 0) {
        // 0x00269694: nop
    
            goto L_002696C8;
    }
    // 0x00269694: nop

    // 0x00269698: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026969C: addiu       $a0, $a0, 0x1B60
    ctx->r4 = ADD32(ctx->r4, 0X1B60);
    // 0x002696A0: j           L_002696C8
    // 0x002696A4: nop

        goto L_002696C8;
    // 0x002696A4: nop

L_002696A8:
    // 0x002696A8: jal         0x00267FA8
    // 0x002696AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00267FA8(rdram, ctx);
        goto after_2;
    // 0x002696AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002696B0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002696B4: addiu       $a0, $a0, 0x1B00
    ctx->r4 = ADD32(ctx->r4, 0X1B00);
    // 0x002696B8: bne         $v0, $zero, L_002696C8
    if (ctx->r2 != 0) {
        // 0x002696BC: nop
    
            goto L_002696C8;
    }
    // 0x002696BC: nop

    // 0x002696C0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002696C4: addiu       $a0, $a0, 0x1B80
    ctx->r4 = ADD32(ctx->r4, 0X1B80);
L_002696C8:
    // 0x002696C8: bnel        $s2, $zero, L_002696D0
    if (ctx->r18 != 0) {
        // 0x002696CC: sw          $a0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r4;
            goto L_002696D0;
    }
    goto skip_0;
    // 0x002696CC: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    skip_0:
L_002696D0:
    // 0x002696D0: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x002696D4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x002696D8: addiu       $a1, $s1, 0x30
    ctx->r5 = ADD32(ctx->r17, 0X30);
L_002696DC:
    // 0x002696DC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002696E0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x002696E4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x002696E8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x002696EC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x002696F0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002696F4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x002696F8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x002696FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00269700: bne         $v0, $a1, L_002696DC
    if (ctx->r2 != ctx->r5) {
        // 0x00269704: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002696DC;
    }
    // 0x00269704: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00269708: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0026970C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00269710: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x00269714: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x00269718: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x0026971C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x00269720: jal         0x00239F00
    // 0x00269724: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00239F00(rdram, ctx);
        goto after_3;
    // 0x00269724: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00269728: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026972C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00269730: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
L_00269734:
    // 0x00269734: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00269738: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0026973C: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00269740: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x00269744: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00269748: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x0026974C: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00269750: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x00269754: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00269758: bne         $v1, $a1, L_00269734
    if (ctx->r3 != ctx->r5) {
        // 0x0026975C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00269734;
    }
    // 0x0026975C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00269760: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00269764: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00269768: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0026976C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00269770: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00269774: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00269778: jr          $ra
    // 0x0026977C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0026977C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_004074D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004074D0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004074D4: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004074D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004074DC: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004074E0: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004074E4: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x004074E8: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x004074EC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x004074F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004074F4: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x004074F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004074FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00407500: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00407504: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00407508: jal         0x00246108
    // 0x0040750C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040750C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00407510: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00407514: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00407518: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0040751C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407520: lwc1        $f0, 0x518($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X518);
    // 0x00407524: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00407528: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0040752C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00407530: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00407534: addiu       $a0, $a0, -0x624
    ctx->r4 = ADD32(ctx->r4, -0X624);
    // 0x00407538: swc1        $f0, 0x1FC($s1)
    MEM_W(0X1FC, ctx->r17) = ctx->f0.u32l;
    // 0x0040753C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407540: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x00407544: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00407548: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0040754C: beql        $v1, $v0, L_00407554
    if (ctx->r3 == ctx->r2) {
        // 0x00407550: sw          $v1, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r3;
            goto L_00407554;
    }
    goto skip_0;
    // 0x00407550: sw          $v1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r3;
    skip_0:
L_00407554:
    // 0x00407554: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00407558: bne         $v1, $v0, L_004075C0
    if (ctx->r3 != ctx->r2) {
        // 0x0040755C: nop
    
            goto L_004075C0;
    }
    // 0x0040755C: nop

    // 0x00407560: lw          $v0, -0x3D4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X3D4);
    // 0x00407564: beq         $v0, $s2, L_004075A8
    if (ctx->r2 == ctx->r18) {
        // 0x00407568: nop
    
            goto L_004075A8;
    }
    // 0x00407568: nop

    // 0x0040756C: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x00407570: beq         $v0, $v1, L_004075A8
    if (ctx->r2 == ctx->r3) {
        // 0x00407574: nop
    
            goto L_004075A8;
    }
    // 0x00407574: nop

    // 0x00407578: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040757C: lw          $v0, 0x18F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18F0);
    // 0x00407580: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00407584: sw          $zero, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = 0;
    // 0x00407588: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040758C: sw          $zero, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = 0;
    // 0x00407590: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00407594: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00407598: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0040759C: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
    // 0x004075A0: sw          $t1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r9;
    // 0x004075A4: sw          $t2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r10;
L_004075A8:
    // 0x004075A8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004075AC: addiu       $v0, $v0, -0x628
    ctx->r2 = ADD32(ctx->r2, -0X628);
    // 0x004075B0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x004075B4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x004075B8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x004075BC: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
L_004075C0:
    // 0x004075C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004075C4: addiu       $a0, $a0, -0x624
    ctx->r4 = ADD32(ctx->r4, -0X624);
    // 0x004075C8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x004075CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004075D0: bne         $v1, $v0, L_004075E0
    if (ctx->r3 != ctx->r2) {
        // 0x004075D4: nop
    
            goto L_004075E0;
    }
    // 0x004075D4: nop

    // 0x004075D8: sw          $v1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r3;
    // 0x004075DC: sw          $v1, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r3;
L_004075E0:
    // 0x004075E0: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x004075E4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x004075E8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004075EC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x004075F0: jr          $ra
    // 0x004075F4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x004075F4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002666F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002666F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002666F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002666FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00266700: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00266704: addiu       $v0, $v0, 0x2510
    ctx->r2 = ADD32(ctx->r2, 0X2510);
    // 0x00266708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026670C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x00266710: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00266714: addiu       $v0, $v0, 0x6814
    ctx->r2 = ADD32(ctx->r2, 0X6814);
    // 0x00266718: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
    // 0x0026671C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00266720: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00266724: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00266728: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0026672C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00266730: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00266734: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x00266738: sw          $v1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r3;
    // 0x0026673C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00266740: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00266744: bne         $v0, $zero, L_00266754
    if (ctx->r2 != 0) {
        // 0x00266748: lui         $v0, 0x1000
        ctx->r2 = S32(0X1000 << 16);
            goto L_00266754;
    }
    // 0x00266748: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x0026674C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00266750: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00266754:
    // 0x00266754: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x00266758: addiu       $v0, $zero, 0x453
    ctx->r2 = ADD32(0, 0X453);
    // 0x0026675C: bne         $v1, $v0, L_00266784
    if (ctx->r3 != ctx->r2) {
        // 0x00266760: nop
    
            goto L_00266784;
    }
    // 0x00266760: nop

    // 0x00266764: jal         0x00284408
    // 0x00266768: nop

    func_00284408(rdram, ctx);
        goto after_0;
    // 0x00266768: nop

    after_0:
    // 0x0026676C: addiu       $v1, $zero, 0x6F
    ctx->r3 = ADD32(0, 0X6F);
    // 0x00266770: bne         $v0, $v1, L_00266784
    if (ctx->r2 != ctx->r3) {
        // 0x00266774: nop
    
            goto L_00266784;
    }
    // 0x00266774: nop

    // 0x00266778: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0026677C: addiu       $v0, $v0, 0x6AB4
    ctx->r2 = ADD32(ctx->r2, 0X6AB4);
    // 0x00266780: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
L_00266784:
    // 0x00266784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00266788: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026678C: jr          $ra
    // 0x00266790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00253E6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00253E78: lw          $v0, 0x1288($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1288);
    // 0x00253E7C: beq         $v0, $zero, L_00253E90
    if (ctx->r2 == 0) {
        // 0x00253E80: nop
    
            goto L_00253E90;
    }
    // 0x00253E80: nop

    // 0x00253E84: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00253E88: jal         0x0027588C
    // 0x00253E8C: nop

    func_0027588C(rdram, ctx);
        goto after_0;
    // 0x00253E8C: nop

    after_0:
L_00253E90:
    // 0x00253E90: jal         0x00275F7C
    // 0x00253E94: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x00253E94: nop

    after_1:
    // 0x00253E98: lw          $a1, 0x1288($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1288);
    // 0x00253E9C: jal         0x00275D34
    // 0x00253EA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_2;
    // 0x00253EA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00253EA4: sw          $zero, 0x1288($s0)
    MEM_W(0X1288, ctx->r16) = 0;
    // 0x00253EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00253EAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253EB0: jr          $ra
    // 0x00253EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00253EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002930EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002930EC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002930F0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002930F4: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002930F8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002930FC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00293100: jr          $ra
    // 0x00293104: nop

    return;
    // 0x00293104: nop

;}
RECOMP_FUNC void func_00419B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419B74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419B78: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419B7C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419B80: addiu       $a2, $a2, -0x6038
    ctx->r6 = ADD32(ctx->r6, -0X6038);
    // 0x00419B84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419B88: jal         0x00416894
    // 0x00419B8C: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419B8C: nop

    after_0:
    // 0x00419B90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419B98: jr          $ra
    // 0x00419B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00289554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289558: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028955C: jal         0x00288DD0
    // 0x00289560: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_00288DD0(rdram, ctx);
        goto after_0;
    // 0x00289560: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_0:
    // 0x00289564: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289568: jr          $ra
    // 0x0028956C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028956C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020B4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020B4B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0020B4B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020B4BC: jal         0x00209AF4
    // 0x0020B4C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00209AF4(rdram, ctx);
        goto after_0;
    // 0x0020B4C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0020B4C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020B4C8: jr          $ra
    // 0x0020B4CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020B4CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00200CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200CB0: addi        $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00200CB4: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00200CB8: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x00200CBC: sll         $a1, $v1, 31
    ctx->r5 = S32(ctx->r3 << 31);
    // 0x00200CC0: srl         $a3, $a1, 16
    ctx->r7 = S32(U32(ctx->r5) >> 16);
    // 0x00200CC4: nor         $a2, $zero, $v1
    ctx->r6 = ~(0 | ctx->r3);
    // 0x00200CC8: add         $s5, $s1, $s3
    ctx->r21 = ADD32(ctx->r17, ctx->r19);
    // 0x00200CCC: add         $s6, $s0, $s2
    ctx->r22 = ADD32(ctx->r16, ctx->r18);
    // 0x00200CD0: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x00200CD4: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x00200CD8: addi        $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x00200CDC: addu        $s2, $sp, $zero
    ctx->r18 = ADD32(ctx->r29, 0);
    // 0x00200CE0: lbu         $t6, 0x1($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X1);
    // 0x00200CE4: lbu         $at, 0x0($s3)
    ctx->r1 = MEM_BU(ctx->r19, 0X0);
    // 0x00200CE8: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x00200CEC: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x00200CF0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
    // 0x00200CF4: addi        $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x00200CF8: addu        $t8, $ra, $zero
    ctx->r24 = ADD32(ctx->r31, 0);
    // 0x00200CFC: jal         0x00200EC0
    // 0x00200D00: addi        $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    func_00200EC0(rdram, ctx);
        goto after_0;
    // 0x00200D00: addi        $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    after_0:
    // 0x00200D04: addu        $ra, $t8, $zero
    ctx->r31 = ADD32(ctx->r24, 0);
L_00200D08:
    // 0x00200D08: addi        $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00200D0C: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x00200D10: jal         0x00200F20
    // 0x00200D14: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    func_00200F20(rdram, ctx);
        goto after_1;
    // 0x00200D14: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00200D18: jal         0x00200F20
    // 0x00200D1C: addi        $s0, $s2, 0x80
    ctx->r16 = ADD32(ctx->r18, 0X80);
    func_00200F20(rdram, ctx);
        goto after_2;
    // 0x00200D1C: addi        $s0, $s2, 0x80
    ctx->r16 = ADD32(ctx->r18, 0X80);
    after_2:
    // 0x00200D20: jal         0x00200F20
    // 0x00200D24: addi        $s0, $s2, 0x100
    ctx->r16 = ADD32(ctx->r18, 0X100);
    func_00200F20(rdram, ctx);
        goto after_3;
    // 0x00200D24: addi        $s0, $s2, 0x100
    ctx->r16 = ADD32(ctx->r18, 0X100);
    after_3:
    // 0x00200D28: addi        $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x00200D2C: jal         0x00200EC0
    // 0x00200D30: addi        $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    func_00200EC0(rdram, ctx);
        goto after_4;
    // 0x00200D30: addi        $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    after_4:
    // 0x00200D34: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x00200D38: addi        $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x00200D3C: addu        $t4, $t0, $zero
    ctx->r12 = ADD32(ctx->r8, 0);
    // 0x00200D40: addi        $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00200D44: srl         $at, $at, 16
    ctx->r1 = S32(U32(ctx->r1) >> 16);
    // 0x00200D48: addi        $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x00200D4C: j           L_00200DA4
    // 0x00200D50: and         $t4, $at, $t4
    ctx->r12 = ctx->r1 & ctx->r12;
        goto L_00200DA4;
    // 0x00200D50: and         $t4, $at, $t4
    ctx->r12 = ctx->r1 & ctx->r12;
L_00200D54:
    // 0x00200D54: addi        $s0, $s2, 0x80
    ctx->r16 = ADD32(ctx->r18, 0X80);
    // 0x00200D58: addu        $t8, $ra, $zero
    ctx->r24 = ADD32(ctx->r31, 0);
    // 0x00200D5C: jal         0x00200E1C
    // 0x00200D60: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    func_00200E1C(rdram, ctx);
        goto after_5;
    // 0x00200D60: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    after_5:
    // 0x00200D64: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x00200D68: add         $s1, $s4, $t0
    ctx->r17 = ADD32(ctx->r20, ctx->r8);
    // 0x00200D6C: addi        $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x00200D70: jal         0x00200E1C
    // 0x00200D74: addi        $s0, $s2, 0x100
    ctx->r16 = ADD32(ctx->r18, 0X100);
    func_00200E1C(rdram, ctx);
        goto after_6;
    // 0x00200D74: addi        $s0, $s2, 0x100
    ctx->r16 = ADD32(ctx->r18, 0X100);
    after_6:
    // 0x00200D78: addu        $ra, $t8, $zero
    ctx->r31 = ADD32(ctx->r24, 0);
    // 0x00200D7C: addi        $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00200D80: lbu         $at, 0x0($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X0);
    // 0x00200D84: addi        $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00200D88: sb          $at, -0x1($s4)
    MEM_B(-0X1, ctx->r20) = ctx->r1;
L_00200D8C:
    // 0x00200D8C: addi        $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00200D90: lbu         $at, 0x0($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X0);
    // 0x00200D94: addi        $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00200D98: sb          $at, -0x1($s4)
    MEM_B(-0X1, ctx->r20) = ctx->r1;
    // 0x00200D9C: bne         $t0, $zero, L_00200D8C
    if (ctx->r8 != 0) {
        // 0x00200DA0: addi        $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_00200D8C;
    }
    // 0x00200DA0: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_00200DA4:
    // 0x00200DA4: addu        $t8, $ra, $zero
    ctx->r24 = ADD32(ctx->r31, 0);
    // 0x00200DA8: jal         0x00200E1C
    // 0x00200DAC: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    func_00200E1C(rdram, ctx);
        goto after_7;
    // 0x00200DAC: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00200DB0: addu        $ra, $t8, $zero
    ctx->r31 = ADD32(ctx->r24, 0);
    // 0x00200DB4: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00200DB8: bltz        $t0, L_00200E00
    if (SIGNED(ctx->r8) < 0) {
        // 0x00200DBC: nop
    
            goto L_00200E00;
    }
    // 0x00200DBC: nop

L_00200DC0:
    // 0x00200DC0: lbu         $at, 0x0($s3)
    ctx->r1 = MEM_BU(ctx->r19, 0X0);
    // 0x00200DC4: addi        $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00200DC8: sb          $at, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r1;
    // 0x00200DCC: addi        $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00200DD0: bne         $t0, $zero, L_00200DC0
    if (ctx->r8 != 0) {
        // 0x00200DD4: addi        $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_00200DC0;
    }
    // 0x00200DD4: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00200DD8: lbu         $at, 0x1($s3)
    ctx->r1 = MEM_BU(ctx->r19, 0X1);
    // 0x00200DDC: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
    // 0x00200DE0: sll         $at, $at, 8
    ctx->r1 = S32(ctx->r1 << 8);
    // 0x00200DE4: or          $t0, $at, $t0
    ctx->r8 = ctx->r1 | ctx->r8;
    // 0x00200DE8: sllv        $t0, $t0, $t7
    ctx->r8 = S32(ctx->r8 << (ctx->r15 & 31));
    // 0x00200DEC: addi        $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x00200DF0: sllv        $t1, $t1, $t7
    ctx->r9 = S32(ctx->r9 << (ctx->r15 & 31));
    // 0x00200DF4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x00200DF8: and         $t6, $t6, $t1
    ctx->r14 = ctx->r14 & ctx->r9;
    // 0x00200DFC: or          $t6, $t0, $t6
    ctx->r14 = ctx->r8 | ctx->r14;
L_00200E00:
    // 0x00200E00: bne         $t4, $zero, L_00200D54
    if (ctx->r12 != 0) {
        // 0x00200E04: addi        $t4, $t4, -0x1
        ctx->r12 = ADD32(ctx->r12, -0X1);
            goto L_00200D54;
    }
    // 0x00200E04: addi        $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x00200E08: sub         $at, $s3, $s6
    ctx->r1 = SUB32(ctx->r19, ctx->r22);
    // 0x00200E0C: bltz        $at, L_00200D08
    if (SIGNED(ctx->r1) < 0) {
        // 0x00200E10: nop
    
            goto L_00200D08;
    }
    // 0x00200E10: nop

    // 0x00200E14: jr          $ra
    // 0x00200E18: addi        $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x00200E18: addi        $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void func_00418C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418C40: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418C44: lb          $v1, -0x5506($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X5506);
    // 0x00418C48: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x00418C4C: beq         $v0, $zero, L_00418D44
    if (ctx->r2 == 0) {
        // 0x00418C50: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00418D44;
    }
    // 0x00418C50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00418C54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418C58: addu        $at, $at, $v0
    gpr jr_addend_00418C60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00418C5C: lw          $v0, 0xF48($at)
    ctx->r2 = ADD32(ctx->r1, 0XF48);
    // 0x00418C60: jr          $v0
    // 0x00418C64: nop

    switch (jr_addend_00418C60 >> 2) {
        case 0: goto L_00418C68; break;
        case 1: goto L_00418C78; break;
        case 2: goto L_00418C88; break;
        case 3: goto L_00418C98; break;
        case 4: goto L_00418CA8; break;
        case 5: goto L_00418CB8; break;
        case 6: goto L_00418CC8; break;
        case 7: goto L_00418CD8; break;
        case 8: goto L_00418CE8; break;
        case 9: goto L_00418CF8; break;
        case 10: goto L_00418D08; break;
        case 11: goto L_00418D18; break;
        case 12: goto L_00418D28; break;
        case 13: goto L_00418D38; break;
        default: switch_error(__func__, 0x00418C60, 0x800C0F48);
    }
    // 0x00418C64: nop

L_00418C68:
    // 0x00418C68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418C6C: addiu       $v0, $v0, 0x5F3C
    ctx->r2 = ADD32(ctx->r2, 0X5F3C);
    // 0x00418C70: j           L_00418D44
    // 0x00418C74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418C74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418C78:
    // 0x00418C78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418C7C: addiu       $v0, $v0, 0x5F54
    ctx->r2 = ADD32(ctx->r2, 0X5F54);
    // 0x00418C80: j           L_00418D44
    // 0x00418C84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418C84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418C88:
    // 0x00418C88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418C8C: addiu       $v0, $v0, 0x5F6C
    ctx->r2 = ADD32(ctx->r2, 0X5F6C);
    // 0x00418C90: j           L_00418D44
    // 0x00418C94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418C94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418C98:
    // 0x00418C98: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418C9C: addiu       $v0, $v0, 0x5F84
    ctx->r2 = ADD32(ctx->r2, 0X5F84);
    // 0x00418CA0: j           L_00418D44
    // 0x00418CA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418D44;
    // 0x00418CA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418CA8:
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
L_00418CB8:
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
L_00418CC8:
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
L_00418CD8:
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
L_00418CE8:
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
L_00418CF8:
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
L_00418D08:
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
L_00418D18:
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
L_00418D28:
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
L_00418D38:
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
RECOMP_FUNC void func_00444418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444418: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0044441C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00444420: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444424: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444428: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0044442C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444430: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00444434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444438: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0044443C: jal         0x00246108
    // 0x00444440: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444440: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444444: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444448: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0044444C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444450: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444454: jal         0x00245BAC
    // 0x00444458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044445C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444460: beq         $v0, $zero, L_00444474
    if (ctx->r2 == 0) {
        // 0x00444464: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444474;
    }
    // 0x00444464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444468: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0044446C: jal         0x00243414
    // 0x00444470: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444470: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_00444474:
    // 0x00444474: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444478: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0044447C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444480: jr          $ra
    // 0x00444484: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444484: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002A0448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A0448: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002A044C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002A0450: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002A0454: addiu       $v1, $v1, -0x7452
    ctx->r3 = ADD32(ctx->r3, -0X7452);
    // 0x002A0458: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002A045C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A0460: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x002A0464: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x002A0468: addiu       $s0, $s0, -0x73AC
    ctx->r16 = ADD32(ctx->r16, -0X73AC);
    // 0x002A046C: bne         $v0, $zero, L_002A0508
    if (ctx->r2 != 0) {
        // 0x002A0470: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002A0508;
    }
    // 0x002A0470: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A0474: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x002A0478: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x002A047C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x002A0480: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A0484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A0488: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x002A048C: jal         0x0029FE70
    // 0x002A0490: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_0029FE70(rdram, ctx);
        goto after_0;
    // 0x002A0490: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_0:
    // 0x002A0494: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0498: blez        $v0, L_002A05BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002A049C: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_002A05BC;
    }
    // 0x002A049C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A04A0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x002A04A4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x002A04A8: addiu       $a1, $a1, 0x5010
    ctx->r5 = ADD32(ctx->r5, 0X5010);
    // 0x002A04AC: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x002A04B0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_002A04B4:
    // 0x002A04B4: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x002A04B8: addiu       $v1, $a3, 0x1
    ctx->r3 = ADD32(ctx->r7, 0X1);
    // 0x002A04BC: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x002A04C0: sra         $a0, $a0, 15
    ctx->r4 = S32(SIGNED(ctx->r4) >> 15);
    // 0x002A04C4: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x002A04C8: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x002A04CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A04D0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A04D4: lhu         $v0, 0x18($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X18);
    // 0x002A04D8: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x002A04DC: bne         $v1, $zero, L_002A04B4
    if (ctx->r3 != 0) {
        // 0x002A04E0: sh          $v0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r2;
            goto L_002A04B4;
    }
    // 0x002A04E0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x002A04E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002A04E8: beql        $v0, $zero, L_002A0594
    if (ctx->r2 == 0) {
        // 0x002A04EC: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_002A0594;
    }
    goto skip_0;
    // 0x002A04EC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x002A04F0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_002A04F4:
    // 0x002A04F4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002A04F8: bnel        $v0, $zero, L_002A04F4
    if (ctx->r2 != 0) {
        // 0x002A04FC: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_002A04F4;
    }
    goto skip_1;
    // 0x002A04FC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_1:
    // 0x002A0500: j           L_002A0594
    // 0x002A0504: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_002A0594;
    // 0x002A0504: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_002A0508:
    // 0x002A0508: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002A050C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A0510: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    // 0x002A0514: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x002A0518: jal         0x002A0044
    // 0x002A051C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_002A0044(rdram, ctx);
        goto after_1;
    // 0x002A051C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x002A0520: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0524: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0528: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x002A052C: bne         $v1, $v0, L_002A05C0
    if (ctx->r3 != ctx->r2) {
        // 0x002A0530: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002A05C0;
    }
    // 0x002A0530: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002A0534: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A0538: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x002A053C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x002A0540: addiu       $t0, $t0, 0x5010
    ctx->r8 = ADD32(ctx->r8, 0X5010);
    // 0x002A0544: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002A0548: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A054C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0550: addu        $s0, $v0, $s0
    ctx->r16 = ADD32(ctx->r2, ctx->r16);
L_002A0554:
    // 0x002A0554: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x002A0558: sra         $a0, $a0, 15
    ctx->r4 = S32(SIGNED(ctx->r4) >> 15);
    // 0x002A055C: addu        $a1, $a0, $t0
    ctx->r5 = ADD32(ctx->r4, ctx->r8);
    // 0x002A0560: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x002A0564: addiu       $v1, $a3, 0x1
    ctx->r3 = ADD32(ctx->r7, 0X1);
    // 0x002A0568: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x002A056C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A0570: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A0574: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x002A0578: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x002A057C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x002A0580: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A0584: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x002A0588: bne         $v1, $zero, L_002A0554
    if (ctx->r3 != 0) {
        // 0x002A058C: sh          $v0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r2;
            goto L_002A0554;
    }
    // 0x002A058C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x002A0590: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_002A0594:
    // 0x002A0594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A0598: addiu       $a1, $s1, 0xB8
    ctx->r5 = ADD32(ctx->r17, 0XB8);
    // 0x002A059C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x002A05A0: jal         0x002A0044
    // 0x002A05A4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_002A0044(rdram, ctx);
        goto after_2;
    // 0x002A05A4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x002A05A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A05AC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A05B0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x002A05B4: beq         $v1, $v0, L_002A05C0
    if (ctx->r3 == ctx->r2) {
        // 0x002A05B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002A05C0;
    }
    // 0x002A05B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002A05BC:
    // 0x002A05BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002A05C0:
    // 0x002A05C0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002A05C4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002A05C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002A05CC: jr          $ra
    // 0x002A05D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002A05D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025359C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025359C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002535A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002535A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002535A8: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x002535AC: beq         $s0, $zero, L_002535D4
    if (ctx->r16 == 0) {
        // 0x002535B0: nop
    
            goto L_002535D4;
    }
    // 0x002535B0: nop

L_002535B4:
    // 0x002535B4: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x002535B8: jal         0x0026EDA8
    // 0x002535BC: addiu       $a0, $a0, 0x140
    ctx->r4 = ADD32(ctx->r4, 0X140);
    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x002535BC: addiu       $a0, $a0, 0x140
    ctx->r4 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x002535C0: lw          $v0, 0xA50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA50);
    // 0x002535C4: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
    // 0x002535C8: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x002535CC: bne         $s0, $zero, L_002535B4
    if (ctx->r16 != 0) {
        // 0x002535D0: nop
    
            goto L_002535B4;
    }
    // 0x002535D0: nop

L_002535D4:
    // 0x002535D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002535D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002535DC: jr          $ra
    // 0x002535E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002535E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00280EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280EAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280EB0: lwc1        $f0, -0x6418($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6418);
    // 0x00280EB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280EB8: lwc1        $f1, -0x6414($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6414);
    // 0x00280EBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280EC0: lwc1        $f2, -0x6410($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6410);
    // 0x00280EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280EC8: lwc1        $f3, -0x640C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X640C);
    // 0x00280ECC: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x00280ED0: sw          $zero, 0x88($a0)
    MEM_W(0X88, ctx->r4) = 0;
    // 0x00280ED4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x00280ED8: swc1        $f1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00280EDC: swc1        $f2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f2.u32l;
    // 0x00280EE0: jr          $ra
    // 0x00280EE4: swc1        $f3, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    return;
    // 0x00280EE4: swc1        $f3, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
;}
RECOMP_FUNC void func_0041C2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C2E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C2F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C2F4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C2F8: addiu       $s0, $s0, -0x550D
    ctx->r16 = ADD32(ctx->r16, -0X550D);
    // 0x0041C2FC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C300: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0041C304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C308: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C30C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041C310: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0041C314: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C318: jal         0x0041648C
    // 0x0041C31C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C31C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041C320: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0041C324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C328: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C32C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C330: jr          $ra
    // 0x0041C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AA60: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045AA64: addiu       $v0, $v0, -0x53F4
    ctx->r2 = ADD32(ctx->r2, -0X53F4);
    // 0x0045AA68: jr          $ra
    // 0x0045AA6C: nop

    return;
    // 0x0045AA6C: nop

;}
