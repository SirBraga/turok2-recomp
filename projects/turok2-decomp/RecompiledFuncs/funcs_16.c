#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00446B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446B90: jr          $ra
    // 0x00446B94: nop

    return;
    // 0x00446B94: nop

;}
RECOMP_FUNC void func_00408CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408CF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408CF8: lwc1        $f12, 0x5A8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A8);
    // 0x00408CFC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00408D00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00408D04: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00408D08: jal         0x0021149C
    // 0x00408D0C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_0021149C(rdram, ctx);
        goto after_0;
    // 0x00408D0C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00408D10: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408D14: lwc1        $f1, 0x5AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AC);
    // 0x00408D18: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00408D1C: nop

    // 0x00408D20: bc1t        L_00408DB8
    if (c1cs) {
        // 0x00408D24: nop
    
            goto L_00408DB8;
    }
    // 0x00408D24: nop

    // 0x00408D28: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00408D2C: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00408D30: beq         $s0, $zero, L_00408DB8
    if (ctx->r16 == 0) {
        // 0x00408D34: lui         $s1, 0x10
        ctx->r17 = S32(0X10 << 16);
            goto L_00408DB8;
    }
    // 0x00408D34: lui         $s1, 0x10
    ctx->r17 = S32(0X10 << 16);
    // 0x00408D38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00408D3C:
    // 0x00408D3C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00408D40: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408D44: bne         $v0, $v1, L_00408DAC
    if (ctx->r2 != ctx->r3) {
        // 0x00408D48: nop
    
            goto L_00408DAC;
    }
    // 0x00408D48: nop

    // 0x00408D4C: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00408D50: beq         $v0, $zero, L_00408DAC
    if (ctx->r2 == 0) {
        // 0x00408D54: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00408DAC;
    }
    // 0x00408D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408D58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00408D5C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00408D60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00408D64: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00408D68: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00408D6C: jal         0x00246690
    // 0x00408D70: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_1;
    // 0x00408D70: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_1:
    // 0x00408D74: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00408D78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00408D7C: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x00408D80: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00408D84: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x00408D88: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00408D8C: jal         0x00245828
    // 0x00408D90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_2;
    // 0x00408D90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x00408D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408D98: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00408D9C: jal         0x0025B2D4
    // 0x00408DA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_3;
    // 0x00408DA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00408DA4: j           L_00408DB8
    // 0x00408DA8: nop

        goto L_00408DB8;
    // 0x00408DA8: nop

L_00408DAC:
    // 0x00408DAC: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x00408DB0: bne         $s0, $zero, L_00408D3C
    if (ctx->r16 != 0) {
        // 0x00408DB4: nop
    
            goto L_00408D3C;
    }
    // 0x00408DB4: nop

L_00408DB8:
    // 0x00408DB8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00408DBC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00408DC0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00408DC4: jr          $ra
    // 0x00408DC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00408DC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0041A3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x0041A3F8: nop

    after_0:
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
;}
RECOMP_FUNC void func_002A122C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A122C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A1230: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A1234: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x002A1238: addiu       $s2, $s2, 0x5C38
    ctx->r18 = ADD32(ctx->r18, 0X5C38);
    // 0x002A123C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002A1240: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1244: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1248: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
        turok2_patch_rax_decomp(rdram, ctx);

    // 0x002A124C: beq         $v0, $zero, L_002A12B4
    if (ctx->r2 == 0) {
        // 0x002A1250: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002A12B4;
    }
    // 0x002A1250: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002A1254: jal         0x002A0448
    // 0x002A1258: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002A0448(rdram, ctx);
        goto after_0;
    // 0x002A1258: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x002A125C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x002A1260: addiu       $s1, $s1, -0x744E
    ctx->r17 = ADD32(ctx->r17, -0X744E);
    // 0x002A1264: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x002A1268: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002A126C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x002A1270: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x002A1274: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x002A1278: beql        $v0, $zero, L_002A1280
    if (ctx->r2 == 0) {
        // 0x002A127C: sh          $zero, 0x0($s1)
        MEM_H(0X0, ctx->r17) = 0;
            goto L_002A1280;
    }
    goto skip_0;
    // 0x002A127C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    skip_0:
L_002A1280:
    // 0x002A1280: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002A1284: addiu       $s0, $s0, 0x5EF0
    ctx->r16 = ADD32(ctx->r16, 0X5EF0);
    // 0x002A1288: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x002A128C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002A1290: sll         $a0, $a0, 9
    ctx->r4 = S32(ctx->r4 << 9);
    // 0x002A1294: jal         0x002A0B6C
    // 0x002A1298: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_002A0B6C(rdram, ctx);
        goto after_1;
    // 0x002A1298: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_1:
    // 0x002A129C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x002A12A0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x002A12A4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x002A12A8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x002A12AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002A12B0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_002A12B4:
        turok2_patch_rax_decomp_done(rdram, ctx);

    // 0x002A12B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002A12B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A12BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A12C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A12C4: jr          $ra
    // 0x002A12C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A12C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044584C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040CA14:
    // 0x0044584C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00445850: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00445854: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00445858: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0044585C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00445860: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00445864: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00445868: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044586C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00445870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00445874: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00445878: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0044587C: beq         $v0, $zero, L_00445B00
    if (ctx->r2 == 0) {
        // 0x00445880: nop
    
            goto L_00445B00;
    }
    // 0x00445880: nop

    // 0x00445884: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x00445888: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044588C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00445890: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00445894: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00445898: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x0044589C: addiu       $s4, $s4, 0x200
    ctx->r20 = ADD32(ctx->r20, 0X200);
    // 0x004458A0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004458A4: nop

    // 0x004458A8: bc1f        L_00445B00
    if (!c1cs) {
        // 0x004458AC: swc1        $f1, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
            goto L_00445B00;
    }
    // 0x004458AC: swc1        $f1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x004458B0: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x004458B4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004458B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004458BC: lwc1        $f20, 0x8D0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X8D0);
    // 0x004458C0: swc1        $f0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f0.u32l;
    // 0x004458C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_004458C8:
    // 0x004458C8: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x004458CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x004458D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004458D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x004458D8: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x004458DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004458E0: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x004458E4: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x004458E8: andi        $v0, $s5, 0x800
    ctx->r2 = ctx->r21 & 0X800;
    // 0x004458EC: blez        $v1, L_00445978
    if (SIGNED(ctx->r3) <= 0) {
        // 0x004458F0: sltu        $s2, $s0, $v0
        ctx->r18 = ctx->r16 < ctx->r2 ? 1 : 0;
            goto L_00445978;
    }
    // 0x004458F0: sltu        $s2, $s0, $v0
    ctx->r18 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x004458F4: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_004458F8:
    // 0x004458F8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x004458FC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00445900: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00445904: bne         $v1, $zero, L_00445910
    if (ctx->r3 != 0) {
        // 0x00445908: nop
    
            goto L_00445910;
    }
    // 0x00445908: nop

    // 0x0044590C: break       7
    do_break(4479244);
L_00445910:
    // 0x00445910: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00445914: bne         $v1, $at, L_00445928
    if (ctx->r3 != ctx->r1) {
        // 0x00445918: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00445928;
    }
    // 0x00445918: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0044591C: bne         $v0, $at, L_00445928
    if (ctx->r2 != ctx->r1) {
        // 0x00445920: nop
    
            goto L_00445928;
    }
    // 0x00445920: nop

    // 0x00445924: break       6
    do_break(4479268);
L_00445928:
    // 0x00445928: mfhi        $v1
    ctx->r3 = hi;
    // 0x0044592C: srav        $v0, $s5, $v1
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r3 & 31));
    // 0x00445930: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00445934: beq         $v0, $zero, L_00445964
    if (ctx->r2 == 0) {
        // 0x00445938: nop
    
            goto L_00445964;
    }
    // 0x00445938: nop

    // 0x0044593C: lw          $v0, 0x50C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X50C);
    // 0x00445940: beql        $v0, $zero, L_00445948
    if (ctx->r2 == 0) {
        // 0x00445944: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00445948;
    }
    goto skip_0;
    // 0x00445944: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_00445948:
    // 0x00445948: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x0044594C: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x00445950: blez        $v0, L_00445964
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00445954: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_00445964;
    }
    // 0x00445954: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00445958: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0044595C: jal         0x00243414
    // 0x00445960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00445960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00445964:
    // 0x00445964: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x00445968: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044596C: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00445970: bne         $v0, $zero, L_004458F8
    if (ctx->r2 != 0) {
        // 0x00445974: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_004458F8;
    }
    // 0x00445974: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00445978:
    // 0x00445978: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x0044597C: blez        $v1, L_00445A30
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00445980: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00445A30;
    }
    // 0x00445980: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445984: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_00445988:
    // 0x00445988: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0044598C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00445990: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00445994: bne         $v1, $zero, L_004459A0
    if (ctx->r3 != 0) {
        // 0x00445998: nop
    
            goto L_004459A0;
    }
    // 0x00445998: nop

    // 0x0044599C: break       7
    do_break(4479388);
L_004459A0:
    // 0x004459A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x004459A4: bne         $v1, $at, L_004459B8
    if (ctx->r3 != ctx->r1) {
        // 0x004459A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_004459B8;
    }
    // 0x004459A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x004459AC: bne         $v0, $at, L_004459B8
    if (ctx->r2 != ctx->r1) {
        // 0x004459B0: nop
    
            goto L_004459B8;
    }
    // 0x004459B0: nop

    // 0x004459B4: break       6
    do_break(4479412);
L_004459B8:
    // 0x004459B8: mfhi        $v1
    ctx->r3 = hi;
    // 0x004459BC: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x004459C0: srav        $v0, $s5, $v0
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r2 & 31));
    // 0x004459C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004459C8: beq         $v0, $zero, L_00445A1C
    if (ctx->r2 == 0) {
        // 0x004459CC: nop
    
            goto L_00445A1C;
    }
    // 0x004459CC: nop

    // 0x004459D0: lw          $v0, 0x510($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X510);
    // 0x004459D4: beql        $v0, $zero, L_004459DC
    if (ctx->r2 == 0) {
        // 0x004459D8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_004459DC;
    }
    goto skip_1;
    // 0x004459D8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_004459DC:
    // 0x004459DC: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x004459E0: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x004459E4: beq         $v0, $zero, L_00445A1C
    if (ctx->r2 == 0) {
        // 0x004459E8: nop
    
            goto L_00445A1C;
    }
    // 0x004459E8: nop

    // 0x004459EC: lwc1        $f0, 0x25C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X25C);
    // 0x004459F0: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004459F4: nop

    // 0x004459F8: bc1f        L_00445A0C
    if (!c1cs) {
        // 0x004459FC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00445A0C;
    }
    // 0x004459FC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00445A00: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00445A04: j           L_0040CA14
    // 0x00445A08: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    entry_0040CA14(rdram, ctx);
    return;
    // 0x00445A08: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_00445A0C:
    // 0x00445A0C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00445A10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00445A14: jal         0x00243414
    // 0x00445A18: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00445A18: nop

    after_1:
L_00445A1C:
    // 0x00445A1C: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x00445A20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00445A24: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00445A28: bne         $v0, $zero, L_00445988
    if (ctx->r2 != 0) {
        // 0x00445A2C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00445988;
    }
    // 0x00445A2C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00445A30:
    // 0x00445A30: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x00445A34: blez        $v1, L_00445AC4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00445A38: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00445AC4;
    }
    // 0x00445A38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00445A3C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_00445A40:
    // 0x00445A40: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00445A44: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00445A48: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00445A4C: bne         $v1, $zero, L_00445A58
    if (ctx->r3 != 0) {
        // 0x00445A50: nop
    
            goto L_00445A58;
    }
    // 0x00445A50: nop

    // 0x00445A54: break       7
    do_break(4479572);
L_00445A58:
    // 0x00445A58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00445A5C: bne         $v1, $at, L_00445A70
    if (ctx->r3 != ctx->r1) {
        // 0x00445A60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00445A70;
    }
    // 0x00445A60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00445A64: bne         $v0, $at, L_00445A70
    if (ctx->r2 != ctx->r1) {
        // 0x00445A68: nop
    
            goto L_00445A70;
    }
    // 0x00445A68: nop

    // 0x00445A6C: break       6
    do_break(4479596);
L_00445A70:
    // 0x00445A70: mfhi        $v1
    ctx->r3 = hi;
    // 0x00445A74: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00445A78: srav        $v0, $s5, $v0
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r2 & 31));
    // 0x00445A7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00445A80: beq         $v0, $zero, L_00445AB0
    if (ctx->r2 == 0) {
        // 0x00445A84: nop
    
            goto L_00445AB0;
    }
    // 0x00445A84: nop

    // 0x00445A88: lw          $v0, 0x514($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X514);
    // 0x00445A8C: beql        $v0, $zero, L_00445A94
    if (ctx->r2 == 0) {
        // 0x00445A90: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00445A94;
    }
    goto skip_2;
    // 0x00445A90: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_2:
L_00445A94:
    // 0x00445A94: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x00445A98: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x00445A9C: beq         $v0, $zero, L_00445AB0
    if (ctx->r2 == 0) {
        // 0x00445AA0: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_00445AB0;
    }
    // 0x00445AA0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00445AA4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00445AA8: jal         0x00243414
    // 0x00445AAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00445AAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
L_00445AB0:
    // 0x00445AB0: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x00445AB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00445AB8: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00445ABC: bne         $v0, $zero, L_00445A40
    if (ctx->r2 != 0) {
        // 0x00445AC0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00445A40;
    }
    // 0x00445AC0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00445AC4:
    // 0x00445AC4: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x00445AC8: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x00445ACC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00445AD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445AD4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00445AD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00445ADC: bne         $v1, $v0, L_00445AF8
    if (ctx->r3 != ctx->r2) {
        // 0x00445AE0: nop
    
            goto L_00445AF8;
    }
    // 0x00445AE0: nop

    // 0x00445AE4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00445AE8: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x00445AEC: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x00445AF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445AF4: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
L_00445AF8:
    // 0x00445AF8: bne         $s2, $zero, L_004458C8
    if (ctx->r18 != 0) {
        // 0x00445AFC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004458C8;
    }
    // 0x00445AFC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00445B00:
    // 0x00445B00: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00445B04: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00445B08: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00445B0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00445B10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00445B14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00445B18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00445B1C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00445B20: jr          $ra
    // 0x00445B24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00445B24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041B48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B48C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B490: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B494: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0041B498: beq         $v0, $zero, L_0041B4AC
    if (ctx->r2 == 0) {
        // 0x0041B49C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B4AC;
    }
    // 0x0041B49C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B4A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B4A4: j           L_0041B4BC
    // 0x0041B4A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B4BC;
    // 0x0041B4A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B4AC:
    // 0x0041B4AC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B4B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B4B4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B4B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B4BC:
    // 0x0041B4BC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B4C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B4C4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B4C8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0041B4CC: beq         $v0, $zero, L_0041B4E4
    if (ctx->r2 == 0) {
        // 0x0041B4D0: nop
    
            goto L_0041B4E4;
    }
    // 0x0041B4D0: nop

    // 0x0041B4D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B4D8: addiu       $v0, $v0, 0x58C4
    ctx->r2 = ADD32(ctx->r2, 0X58C4);
    // 0x0041B4DC: j           L_0041B4F0
    // 0x0041B4E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B4F0;
    // 0x0041B4E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B4E4:
    // 0x0041B4E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B4E8: addiu       $v0, $v0, 0x58E0
    ctx->r2 = ADD32(ctx->r2, 0X58E0);
    // 0x0041B4EC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B4F0:
    // 0x0041B4F0: jr          $ra
    // 0x0041B4F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B4F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040F9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F9F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0040F9F8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x0040F9FC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0040FA00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0040FA04: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0040FA08: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x0040FA0C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x0040FA10: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0040FA14: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0040FA18: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0040FA1C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0040FA20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0040FA24: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0040FA28: jal         0x00200B00
    // 0x0040FA2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0040FA2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x0040FA30: beq         $v0, $zero, L_0040FD3C
    if (ctx->r2 == 0) {
        // 0x0040FA34: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0040FD3C;
    }
    // 0x0040FA34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040FA38: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0040FA3C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0040FA40: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0040FA44: jal         0x002017D4
    // 0x0040FA48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0040FA48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040FA4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FA50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0040FA54: jal         0x002017D4
    // 0x0040FA58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0040FA58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x0040FA5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FA60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0040FA64: jal         0x002017D4
    // 0x0040FA68: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0040FA68: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0040FA6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FA70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0040FA74: jal         0x002017D4
    // 0x0040FA78: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0040FA78: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0040FA7C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0040FA80: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0040FA84: addiu       $a0, $zero, -0x8
    ctx->r4 = ADD32(0, -0X8);
    // 0x0040FA88: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x0040FA8C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0040FA90: sll         $v1, $t0, 2
    ctx->r3 = S32(ctx->r8 << 2);
    // 0x0040FA94: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    // 0x0040FA98: and         $s1, $v1, $a0
    ctx->r17 = ctx->r3 & ctx->r4;
    // 0x0040FA9C: blez        $t0, L_0040FB0C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0040FAA0: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_0040FB0C;
    }
    // 0x0040FAA0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_0040FAA4:
    // 0x0040FAA4: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x0040FAA8: jal         0x002017D4
    // 0x0040FAAC: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0040FAAC: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_5:
    // 0x0040FAB0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0040FAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FAB8: jal         0x002017D4
    // 0x0040FABC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0040FABC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x0040FAC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FAC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0040FAC8: jal         0x002017D4
    // 0x0040FACC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0040FACC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x0040FAD0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x0040FAD4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0040FAD8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0040FADC: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0040FAE0: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x0040FAE4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0040FAE8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0040FAEC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0040FAF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040FAF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040FAF8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0040FAFC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x0040FB00: slt         $v1, $fp, $v1
    ctx->r3 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040FB04: bne         $v1, $zero, L_0040FAA4
    if (ctx->r3 != 0) {
        // 0x0040FB08: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_0040FAA4;
    }
    // 0x0040FB08: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_0040FB0C:
    // 0x0040FB0C: jal         0x002018D8
    // 0x0040FB10: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_002018D8(rdram, ctx);
        goto after_8;
    // 0x0040FB10: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_8:
    // 0x0040FB14: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0040FB18: jal         0x002018D8
    // 0x0040FB1C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_002018D8(rdram, ctx);
        goto after_9;
    // 0x0040FB1C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_9:
    // 0x0040FB20: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040FB24: jal         0x002018D8
    // 0x0040FB28: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_002018D8(rdram, ctx);
        goto after_10;
    // 0x0040FB28: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_10:
    // 0x0040FB2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040FB30: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0040FB34: addu        $a2, $s1, $s2
    ctx->r6 = ADD32(ctx->r17, ctx->r18);
    // 0x0040FB38: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x0040FB3C: addu        $a2, $a2, $s4
    ctx->r6 = ADD32(ctx->r6, ctx->r20);
    // 0x0040FB40: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x0040FB44: jal         0x00205D7C
    // 0x0040FB48: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    func_00205D7C(rdram, ctx);
        goto after_11;
    // 0x0040FB48: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    after_11:
    // 0x0040FB4C: beq         $v0, $zero, L_0040FD3C
    if (ctx->r2 == 0) {
        // 0x0040FB50: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_0040FD3C;
    }
    // 0x0040FB50: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040FB54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0040FB58: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0040FB5C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0040FB60: jal         0x00218548
    // 0x0040FB64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00218548(rdram, ctx);
        goto after_12;
    // 0x0040FB64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0040FB68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FB6C: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0040FB70: jal         0x00218590
    // 0x0040FB74: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00218590(rdram, ctx);
        goto after_13;
    // 0x0040FB74: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_13:
    // 0x0040FB78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FB7C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040FB80: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0040FB84: jal         0x00218590
    // 0x0040FB88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00218590(rdram, ctx);
        goto after_14;
    // 0x0040FB88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_14:
    // 0x0040FB8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FB90: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0040FB94: jal         0x00218590
    // 0x0040FB98: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00218590(rdram, ctx);
        goto after_15;
    // 0x0040FB98: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_15:
    // 0x0040FB9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040FBA0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0040FBA4: jal         0x00218590
    // 0x0040FBA8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00218590(rdram, ctx);
        goto after_16;
    // 0x0040FBA8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_16:
    // 0x0040FBAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0040FBB0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x0040FBB4: jal         0x00218548
    // 0x0040FBB8: nop

    func_00218548(rdram, ctx);
        goto after_17;
    // 0x0040FBB8: nop

    after_17:
    // 0x0040FBBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x0040FBC0: blez        $t0, L_0040FD2C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0040FBC4: nop
    
            goto L_0040FD2C;
    }
    // 0x0040FBC4: nop

L_0040FBC8:
    // 0x0040FBC8: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x0040FBCC: jal         0x002017D4
    // 0x0040FBD0: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002017D4(rdram, ctx);
        goto after_18;
    // 0x0040FBD0: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_18:
    // 0x0040FBD4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0040FBD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FBDC: jal         0x002017D4
    // 0x0040FBE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x0040FBE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_19:
    // 0x0040FBE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FBE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0040FBEC: jal         0x002017D4
    // 0x0040FBF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_20;
    // 0x0040FBF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_20:
    // 0x0040FBF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040FBF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0040FBFC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0040FC00: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0040FC04: sll         $v1, $a2, 3
    ctx->r3 = S32(ctx->r6 << 3);
    // 0x0040FC08: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0040FC0C: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
    // 0x0040FC10: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x0040FC14: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x0040FC18: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0040FC1C: jal         0x00218590
    // 0x0040FC20: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    func_00218590(rdram, ctx);
        goto after_21;
    // 0x0040FC20: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    after_21:
    // 0x0040FC24: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0040FC28: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040FC2C: jal         0x00218548
    // 0x0040FC30: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_00218548(rdram, ctx);
        goto after_22;
    // 0x0040FC30: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_22:
    // 0x0040FC34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FC38: jal         0x002017D4
    // 0x0040FC3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_23;
    // 0x0040FC3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_23:
    // 0x0040FC40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FC44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0040FC48: jal         0x002017D4
    // 0x0040FC4C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_24;
    // 0x0040FC4C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_24:
    // 0x0040FC50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FC54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0040FC58: jal         0x002017D4
    // 0x0040FC5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_25;
    // 0x0040FC5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_25:
    // 0x0040FC60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FC64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0040FC68: jal         0x002017D4
    // 0x0040FC6C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_26;
    // 0x0040FC6C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_26:
    // 0x0040FC70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FC74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0040FC78: jal         0x002017D4
    // 0x0040FC7C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_27;
    // 0x0040FC7C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_27:
    // 0x0040FC80: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040FC84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040FC88: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0040FC8C: lw          $s1, 0x4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X4);
    // 0x0040FC90: lw          $s2, 0x4($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X4);
    // 0x0040FC94: sll         $a2, $s1, 3
    ctx->r6 = S32(ctx->r17 << 3);
    // 0x0040FC98: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x0040FC9C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0040FCA0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x0040FCA4: sll         $s0, $s2, 3
    ctx->r16 = S32(ctx->r18 << 3);
    // 0x0040FCA8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x0040FCAC: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0040FCB0: jal         0x00218590
    // 0x0040FCB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    func_00218590(rdram, ctx);
        goto after_28;
    // 0x0040FCB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_28:
    // 0x0040FCB8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040FCBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040FCC0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040FCC4: jal         0x00218590
    // 0x0040FCC8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00218590(rdram, ctx);
        goto after_29;
    // 0x0040FCC8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_29:
    // 0x0040FCCC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040FCD0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040FCD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0040FCD8: jal         0x00218590
    // 0x0040FCDC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    func_00218590(rdram, ctx);
        goto after_30;
    // 0x0040FCDC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    after_30:
    // 0x0040FCE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040FCE4: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x0040FCE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040FCEC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0040FCF0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0040FCF4: jal         0x0040F5B8
    // 0x0040FCF8: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    func_0040F5B8(rdram, ctx);
        goto after_31;
    // 0x0040FCF8: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    after_31:
    // 0x0040FCFC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040FD00: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0040FD04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0040FD08: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x0040FD0C: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x0040FD10: jal         0x0040F5B8
    // 0x0040FD14: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F5B8(rdram, ctx);
        goto after_32;
    // 0x0040FD14: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_32:
    // 0x0040FD18: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x0040FD1C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x0040FD20: slt         $v0, $fp, $t0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0040FD24: bne         $v0, $zero, L_0040FBC8
    if (ctx->r2 != 0) {
        // 0x0040FD28: nop
    
            goto L_0040FBC8;
    }
    // 0x0040FD28: nop

L_0040FD2C:
    // 0x0040FD2C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x0040FD30: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x0040FD34: jal         0x002057B0
    // 0x0040FD38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_33;
    // 0x0040FD38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_33:
L_0040FD3C:
    // 0x0040FD3C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0040FD40: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0040FD44: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x0040FD48: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0040FD4C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0040FD50: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0040FD54: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0040FD58: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0040FD5C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0040FD60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0040FD64: jr          $ra
    // 0x0040FD68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0040FD68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00297AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297AD8: addiu       $v0, $v0, 0x18C0
    ctx->r2 = ADD32(ctx->r2, 0X18C0);
    // 0x00297ADC: bne         $v1, $v0, L_00297AEC
    if (ctx->r3 != ctx->r2) {
        // 0x00297AE0: addiu       $sp, $sp, -0x40
        ctx->r29 = ADD32(ctx->r29, -0X40);
            goto L_00297AEC;
    }
    // 0x00297AE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00297AE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00297AE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
L_00297AEC:
    // 0x00297AEC: lwc1        $f0, -0x5840($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5840);
    // 0x00297AF0: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x00297AF4: addu        $t0, $sp, $zero
    ctx->r8 = ADD32(ctx->r29, 0);
L_00297AF8:
    // 0x00297AF8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00297AFC: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x00297B00: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
L_00297B04:
    // 0x00297B04: bnel        $a2, $v1, L_00297B10
    if (ctx->r6 != ctx->r3) {
        // 0x00297B08: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_00297B10;
    }
    goto skip_0;
    // 0x00297B08: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x00297B0C: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
L_00297B10:
    // 0x00297B10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00297B14: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00297B18: bne         $v0, $zero, L_00297B04
    if (ctx->r2 != 0) {
        // 0x00297B1C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00297B04;
    }
    // 0x00297B1C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00297B20: addiu       $t1, $t1, 0x14
    ctx->r9 = ADD32(ctx->r9, 0X14);
    // 0x00297B24: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00297B28: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00297B2C: bne         $v0, $zero, L_00297AF8
    if (ctx->r2 != 0) {
        // 0x00297B30: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_00297AF8;
    }
    // 0x00297B30: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x00297B34: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00297B38: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x00297B3C: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x00297B40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297B44: lwc1        $f2, -0x583C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X583C);
    // 0x00297B48: lui         $t4, 0xFFFF
    ctx->r12 = S32(0XFFFF << 16);
    // 0x00297B4C: addu        $t2, $sp, $zero
    ctx->r10 = ADD32(ctx->r29, 0);
L_00297B50:
    // 0x00297B50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00297B54: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
L_00297B58:
    // 0x00297B58: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x00297B5C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00297B60: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00297B64: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00297B68: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00297B6C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00297B70: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00297B74: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297B78: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00297B7C: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297B80: and         $v0, $a0, $t4
    ctx->r2 = ctx->r4 & ctx->r12;
    // 0x00297B84: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x00297B88: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00297B8C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00297B90: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x00297B94: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00297B98: and         $a0, $a0, $t4
    ctx->r4 = ctx->r4 & ctx->r12;
    // 0x00297B9C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x00297BA0: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x00297BA4: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00297BA8: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x00297BAC: bne         $v0, $zero, L_00297B58
    if (ctx->r2 != 0) {
        // 0x00297BB0: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_00297B58;
    }
    // 0x00297BB0: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x00297BB4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x00297BB8: slti        $v0, $t3, 0x4
    ctx->r2 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x00297BBC: bne         $v0, $zero, L_00297B50
    if (ctx->r2 != 0) {
        // 0x00297BC0: addiu       $t2, $t2, 0x10
        ctx->r10 = ADD32(ctx->r10, 0X10);
            goto L_00297B50;
    }
    // 0x00297BC0: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x00297BC4: jr          $ra
    // 0x00297BC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00297BC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00266E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266E8C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00266E90: bgez        $a1, L_00266E9C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00266E94: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_00266E9C;
    }
    // 0x00266E94: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00266E98: addiu       $v0, $a1, 0x7
    ctx->r2 = ADD32(ctx->r5, 0X7);
L_00266E9C:
    // 0x00266E9C: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00266EA0: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x00266EA4: subu        $a0, $a1, $a0
    ctx->r4 = SUB32(ctx->r5, ctx->r4);
    // 0x00266EA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00266EAC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00266EB0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00266EB4: sllv        $v1, $v1, $a0
    ctx->r3 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x00266EB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266EBC: jr          $ra
    // 0x00266EC0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x00266EC0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_00418E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418E5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418E64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418E68: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418E6C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418E70: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418E74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418E7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418E80: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418E84: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
    // 0x00418E88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418E8C: jal         0x0041648C
    // 0x00418E90: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418E90: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418E94: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x00418E98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418E9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418EA4: jr          $ra
    // 0x00418EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00227B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227B7C: lw          $a2, 0x1A0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1A0);
    // 0x00227B80: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x00227B84: beq         $v0, $zero, L_00227C08
    if (ctx->r2 == 0) {
        // 0x00227B88: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00227C08;
    }
    // 0x00227B88: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00227B8C: lw          $v1, 0x1A4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1A4);
    // 0x00227B90: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x00227B94: beq         $v1, $zero, L_00227BA8
    if (ctx->r3 == 0) {
        // 0x00227B98: sw          $v0, 0x1A0($a1)
        MEM_W(0X1A0, ctx->r5) = ctx->r2;
            goto L_00227BA8;
    }
    // 0x00227B98: sw          $v0, 0x1A0($a1)
    MEM_W(0X1A0, ctx->r5) = ctx->r2;
    // 0x00227B9C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00227BA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00227BA4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_00227BA8:
    // 0x00227BA8: lw          $v1, 0x1A8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1A8);
    // 0x00227BAC: beq         $v1, $zero, L_00227BBC
    if (ctx->r3 == 0) {
        // 0x00227BB0: nop
    
            goto L_00227BBC;
    }
    // 0x00227BB0: nop

    // 0x00227BB4: lw          $v0, 0x1AC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1AC);
    // 0x00227BB8: sw          $v0, 0x1AC($v1)
    MEM_W(0X1AC, ctx->r3) = ctx->r2;
L_00227BBC:
    // 0x00227BBC: lw          $v1, 0x1AC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1AC);
    // 0x00227BC0: beq         $v1, $zero, L_00227BD0
    if (ctx->r3 == 0) {
        // 0x00227BC4: nop
    
            goto L_00227BD0;
    }
    // 0x00227BC4: nop

    // 0x00227BC8: lw          $v0, 0x1A8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1A8);
    // 0x00227BCC: sw          $v0, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = ctx->r2;
L_00227BD0:
    // 0x00227BD0: lw          $v0, 0x3604($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3604);
    // 0x00227BD4: bne         $v0, $a1, L_00227BE4
    if (ctx->r2 != ctx->r5) {
        // 0x00227BD8: nop
    
            goto L_00227BE4;
    }
    // 0x00227BD8: nop

    // 0x00227BDC: lw          $v0, 0x1AC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1AC);
    // 0x00227BE0: sw          $v0, 0x3604($a0)
    MEM_W(0X3604, ctx->r4) = ctx->r2;
L_00227BE4:
    // 0x00227BE4: lw          $v0, 0x3608($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3608);
    // 0x00227BE8: bne         $v0, $a1, L_00227BF8
    if (ctx->r2 != ctx->r5) {
        // 0x00227BEC: nop
    
            goto L_00227BF8;
    }
    // 0x00227BEC: nop

    // 0x00227BF0: lw          $v0, 0x1A8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1A8);
    // 0x00227BF4: sw          $v0, 0x3608($a0)
    MEM_W(0X3608, ctx->r4) = ctx->r2;
L_00227BF8:
    // 0x00227BF8: lw          $v0, 0x3600($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3600);
    // 0x00227BFC: sw          $zero, 0x1A8($a1)
    MEM_W(0X1A8, ctx->r5) = 0;
    // 0x00227C00: sw          $v0, 0x1AC($a1)
    MEM_W(0X1AC, ctx->r5) = ctx->r2;
    // 0x00227C04: sw          $a1, 0x3600($a0)
    MEM_W(0X3600, ctx->r4) = ctx->r5;
L_00227C08:
    // 0x00227C08: jr          $ra
    // 0x00227C0C: nop

    return;
    // 0x00227C0C: nop

;}
RECOMP_FUNC void func_00417D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417D68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00417D6C: sw          $zero, 0x8FC($at)
    MEM_W(0X8FC, ctx->r1) = 0;
    // 0x00417D70: jr          $ra
    // 0x00417D74: nop

    return;
    // 0x00417D74: nop

;}
RECOMP_FUNC void func_0044F3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F3C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0044F3C4: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0044F3C8: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x0044F3CC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x0044F3D0: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x0044F3D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0044F3D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0044F3DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F3E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044F3E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0044F3E8: beq         $s0, $zero, L_0044F430
    if (ctx->r16 == 0) {
        // 0x0044F3EC: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_0044F430;
    }
    // 0x0044F3EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044F3F0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0044F3F4: beq         $a0, $zero, L_0044F430
    if (ctx->r4 == 0) {
        // 0x0044F3F8: addiu       $s1, $zero, 0xA
        ctx->r17 = ADD32(0, 0XA);
            goto L_0044F430;
    }
    // 0x0044F3F8: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x0044F3FC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
L_0044F400:
    // 0x0044F400: beq         $a0, $s1, L_0044F430
    if (ctx->r4 == ctx->r17) {
        // 0x0044F404: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0044F430;
    }
    // 0x0044F404: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044F408: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x0044F40C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0044F410: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0044F414: jal         0x004162FC
    // 0x0044F418: nop

    func_004162FC(rdram, ctx);
        goto after_0;
    // 0x0044F418: nop

    after_0:
    // 0x0044F41C: beq         $s0, $zero, L_0044F430
    if (ctx->r16 == 0) {
        // 0x0044F420: add.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_0044F430;
    }
    // 0x0044F420: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x0044F424: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0044F428: bnel        $a0, $zero, L_0044F400
    if (ctx->r4 != 0) {
        // 0x0044F42C: andi        $a0, $a0, 0xFF
        ctx->r4 = ctx->r4 & 0XFF;
            goto L_0044F400;
    }
    goto skip_0;
    // 0x0044F42C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    skip_0:
L_0044F430:
    // 0x0044F430: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0044F434: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0044F438: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044F43C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044F440: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x0044F444: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x0044F448: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0044F44C: jr          $ra
    // 0x0044F450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044F450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00297038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029703C: beql        $a1, $v0, L_00297044
    if (ctx->r5 == ctx->r2) {
        // 0x00297040: sw          $a2, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r6;
            goto L_00297044;
    }
    goto skip_0;
    // 0x00297040: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    skip_0:
L_00297044:
    // 0x00297044: jr          $ra
    // 0x00297048: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00297048: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042CD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CD04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0042CD08: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x0042CD0C: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x0042CD10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042CD14: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042CD18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042CD1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042CD20: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0042CD24: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0042CD28: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0042CD2C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042CD30: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042CD34: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042CD38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042CD3C: jal         0x00200B00
    // 0x0042CD40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0042CD40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0042CD44: beq         $v0, $zero, L_0042CDE0
    if (ctx->r2 == 0) {
        // 0x0042CD48: nop
    
            goto L_0042CDE0;
    }
    // 0x0042CD48: nop

    // 0x0042CD4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0042CD50: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x0042CD54: lw          $s6, 0x0($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X0);
    // 0x0042CD58: blez        $s6, L_0042CDDC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0042CD5C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0042CDDC;
    }
    // 0x0042CD5C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042CD60: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x0042CD64: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_0042CD68:
    // 0x0042CD68: jal         0x002017D4
    // 0x0042CD6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042CD6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0042CD70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042CD74: jal         0x002017D4
    // 0x0042CD78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042CD78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0042CD7C: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x0042CD80: blez        $s4, L_0042CDCC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0042CD84: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042CDCC;
    }
    // 0x0042CD84: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042CD88: addiu       $s0, $v0, 0x18
    ctx->r16 = ADD32(ctx->r2, 0X18);
L_0042CD8C:
    // 0x0042CD8C: lw          $s1, -0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, -0X4);
    // 0x0042CD90: beql        $s1, $s7, L_0042CDB4
    if (ctx->r17 == ctx->r23) {
        // 0x0042CD94: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_0042CDB4;
    }
    goto skip_0;
    // 0x0042CD94: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    skip_0:
    // 0x0042CD98: lw          $a0, 0x58($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X58);
    // 0x0042CD9C: jal         0x002017D4
    // 0x0042CDA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042CDA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x0042CDA4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0042CDA8: sll         $v1, $s1, 5
    ctx->r3 = S32(ctx->r17 << 5);
    // 0x0042CDAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042CDB0: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
L_0042CDB4:
    // 0x0042CDB4: jal         0x00210EF0
    // 0x0042CDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210EF0(rdram, ctx);
        goto after_4;
    // 0x0042CDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042CDBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042CDC0: slt         $v0, $s2, $s4
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042CDC4: bne         $v0, $zero, L_0042CD8C
    if (ctx->r2 != 0) {
        // 0x0042CDC8: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_0042CD8C;
    }
    // 0x0042CDC8: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_0042CDCC:
    // 0x0042CDCC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042CDD0: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042CDD4: bnel        $v0, $zero, L_0042CD68
    if (ctx->r2 != 0) {
        // 0x0042CDD8: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0042CD68;
    }
    goto skip_1;
    // 0x0042CDD8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_1:
L_0042CDDC:
    // 0x0042CDDC: sw          $s5, 0x68($fp)
    MEM_W(0X68, ctx->r30) = ctx->r21;
L_0042CDE0:
    // 0x0042CDE0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042CDE4: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x0042CDE8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042CDEC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042CDF0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042CDF4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042CDF8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042CDFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042CE00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042CE04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042CE08: jr          $ra
    // 0x0042CE0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042CE0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004465C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004465C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004465C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004465CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004465D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004465D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004465D8: addiu       $v0, $zero, 0x1CE9
    ctx->r2 = ADD32(0, 0X1CE9);
    // 0x004465DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x004465E0: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x004465E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004465E8: addiu       $v0, $v0, 0x1910
    ctx->r2 = ADD32(ctx->r2, 0X1910);
    // 0x004465EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004465F0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x004465F4: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004465F8: addiu       $v0, $v0, -0x2570
    ctx->r2 = ADD32(ctx->r2, -0X2570);
    // 0x004465FC: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
    // 0x00446600: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446604: addiu       $v0, $v0, -0x2648
    ctx->r2 = ADD32(ctx->r2, -0X2648);
    // 0x00446608: sw          $v0, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r2;
    // 0x0044660C: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446610: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x00446614: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00446618: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x0044661C: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
    // 0x00446620: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00446624: addiu       $v0, $v0, 0x2260
    ctx->r2 = ADD32(ctx->r2, 0X2260);
    // 0x00446628: sw          $v0, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r2;
    // 0x0044662C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00446630: lw          $v0, 0x6F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F8);
    // 0x00446634: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00446638: sw          $s1, 0x200($at)
    MEM_W(0X200, ctx->r1) = ctx->r17;
    // 0x0044663C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00446640: jal         0x0040EC14
    // 0x00446644: nop

    func_0040EC14(rdram, ctx);
        goto after_0;
    // 0x00446644: nop

    after_0:
    // 0x00446648: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0044664C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00446650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00446654: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00446658: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0044665C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00446660: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00446664: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x00446668: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0044666C: jal         0x00243414
    // 0x00446670: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00446670: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    after_1:
    // 0x00446674: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00446678: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0044667C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00446680: addiu       $a2, $a2, 0x8F4
    ctx->r6 = ADD32(ctx->r6, 0X8F4);
    // 0x00446684: jal         0x0027AD24
    // 0x00446688: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027AD24(rdram, ctx);
        goto after_2;
    // 0x00446688: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0044668C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00446690: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00446694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00446698: jr          $ra
    // 0x0044669C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044669C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041A38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A390: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A394: jal         0x004156FC
    // 0x0041A398: nop

    func_004156FC(rdram, ctx);
        goto after_0;
    // 0x0041A398: nop

    after_0:
    // 0x0041A39C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A3A0: jr          $ra
    // 0x0041A3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0022F1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022F1C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0022F1CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0022F1D0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0022F1D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0022F1D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0022F1DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022F1E0: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x0022F1E4: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x0022F1E8: beq         $v0, $zero, L_0022F338
    if (ctx->r2 == 0) {
        // 0x0022F1EC: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_0022F338;
    }
    // 0x0022F1EC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0022F1F0: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x0022F1F4: bne         $v0, $zero, L_0022F338
    if (ctx->r2 != 0) {
        // 0x0022F1F8: addiu       $v0, $zero, 0x68
        ctx->r2 = ADD32(0, 0X68);
            goto L_0022F338;
    }
    // 0x0022F1F8: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0022F1FC: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022F200: bne         $v1, $v0, L_0022F22C
    if (ctx->r3 != ctx->r2) {
        // 0x0022F204: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_0022F22C;
    }
    // 0x0022F204: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x0022F208: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x0022F20C: lw          $s0, 0x1A8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1A8);
    // 0x0022F210: jal         0x0025398C
    // 0x0022F214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025398C(rdram, ctx);
        goto after_0;
    // 0x0022F214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0022F218: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x0022F21C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0022F220: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0022F224: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0022F228: sh          $v1, 0x934($v0)
    MEM_H(0X934, ctx->r2) = ctx->r3;
L_0022F22C:
    // 0x0022F22C: lw          $s0, 0x108($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X108);
    // 0x0022F230: beq         $s0, $zero, L_0022F280
    if (ctx->r16 == 0) {
        // 0x0022F234: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022F280;
    }
    // 0x0022F234: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022F238: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0022F23C: bne         $a0, $v0, L_0022F280
    if (ctx->r4 != ctx->r2) {
        // 0x0022F240: nop
    
            goto L_0022F280;
    }
    // 0x0022F240: nop

    // 0x0022F244: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022F248: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0022F24C: beq         $v0, $zero, L_0022F280
    if (ctx->r2 == 0) {
        // 0x0022F250: nop
    
            goto L_0022F280;
    }
    // 0x0022F250: nop

    // 0x0022F254: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022F258: beq         $v1, $a0, L_0022F268
    if (ctx->r3 == ctx->r4) {
        // 0x0022F25C: addiu       $v0, $zero, 0x111
        ctx->r2 = ADD32(0, 0X111);
            goto L_0022F268;
    }
    // 0x0022F25C: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x0022F260: bne         $v1, $v0, L_0022F280
    if (ctx->r3 != ctx->r2) {
        // 0x0022F264: nop
    
            goto L_0022F280;
    }
    // 0x0022F264: nop

L_0022F268:
    // 0x0022F268: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022F26C: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022F270: jal         0x0022F1C8
    // 0x0022F274: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_1;
    // 0x0022F274: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0022F278: jal         0x00232B40
    // 0x0022F27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_2;
    // 0x0022F27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_0022F280:
    // 0x0022F280: jal         0x00232B40
    // 0x0022F284: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00232B40(rdram, ctx);
        goto after_3;
    // 0x0022F284: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0022F288: lbu         $v0, 0x1B5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1B5);
    // 0x0022F28C: beq         $v0, $zero, L_0022F2AC
    if (ctx->r2 == 0) {
        // 0x0022F290: nop
    
            goto L_0022F2AC;
    }
    // 0x0022F290: nop

    // 0x0022F294: jal         0x002327F4
    // 0x0022F298: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002327F4(rdram, ctx);
        goto after_4;
    // 0x0022F298: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0022F29C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022F2A0: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x0022F2A4: jal         0x00234E48
    // 0x0022F2A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00234E48(rdram, ctx);
        goto after_5;
    // 0x0022F2A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_0022F2AC:
    // 0x0022F2AC: lw          $a1, 0x118($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X118);
    // 0x0022F2B0: beq         $a1, $zero, L_0022F2CC
    if (ctx->r5 == 0) {
        // 0x0022F2B4: nop
    
            goto L_0022F2CC;
    }
    // 0x0022F2B4: nop

    // 0x0022F2B8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022F2BC: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0022F2C0: jal         0x00228B4C
    // 0x0022F2C4: nop

    func_00228B4C(rdram, ctx);
        goto after_6;
    // 0x0022F2C4: nop

    after_6:
    // 0x0022F2C8: sw          $zero, 0x118($s1)
    MEM_W(0X118, ctx->r17) = 0;
L_0022F2CC:
    // 0x0022F2CC: lw          $v1, 0x110($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X110);
    // 0x0022F2D0: beql        $v1, $zero, L_0022F2E8
    if (ctx->r3 == 0) {
        // 0x0022F2D4: lui         $v1, 0xFDFF
        ctx->r3 = S32(0XFDFF << 16);
            goto L_0022F2E8;
    }
    goto skip_0;
    // 0x0022F2D4: lui         $v1, 0xFDFF
    ctx->r3 = S32(0XFDFF << 16);
    skip_0:
    // 0x0022F2D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0022F2DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0022F2E0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0022F2E4: lui         $v1, 0xFDFF
    ctx->r3 = S32(0XFDFF << 16);
L_0022F2E8:
    // 0x0022F2E8: ori         $v1, $v1, 0xFEFF
    ctx->r3 = ctx->r3 | 0XFEFF;
    // 0x0022F2EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022F2F0: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022F2F4: lw          $a0, 0x1C0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C0);
    // 0x0022F2F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022F2FC: jal         0x00200738
    // 0x0022F300: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    func_00200738(rdram, ctx);
        goto after_7;
    // 0x0022F300: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    after_7:
    // 0x0022F304: ori         $a0, $zero, 0xEC00
    ctx->r4 = 0 | 0XEC00;
    // 0x0022F308: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x0022F30C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022F310: jal         0x00200518
    // 0x0022F314: sw          $zero, 0x1C0($s1)
    MEM_W(0X1C0, ctx->r17) = 0;
    func_00200518(rdram, ctx);
        goto after_8;
    // 0x0022F314: sw          $zero, 0x1C0($s1)
    MEM_W(0X1C0, ctx->r17) = 0;
    after_8:
    // 0x0022F318: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022F31C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0022F320: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022F324: beq         $v0, $zero, L_0022F338
    if (ctx->r2 == 0) {
        // 0x0022F328: ori         $a0, $zero, 0xEC14
        ctx->r4 = 0 | 0XEC14;
            goto L_0022F338;
    }
    // 0x0022F328: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x0022F32C: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x0022F330: jal         0x00200738
    // 0x0022F334: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_9;
    // 0x0022F334: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
L_0022F338:
    // 0x0022F338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0022F33C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0022F340: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022F344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0022F348: jr          $ra
    // 0x0022F34C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0022F34C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025EF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EF1C: jr          $ra
    // 0x0025EF20: nop

    return;
    // 0x0025EF20: nop

;}
RECOMP_FUNC void func_0044700C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044700C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00447010: sw          $zero, 0x28($a1)
    MEM_W(0X28, ctx->r5) = 0;
    // 0x00447014: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x00447018: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0044701C: lw          $a2, 0x9C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X9C);
    // 0x00447020: lw          $a3, 0xA0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XA0);
    // 0x00447024: lw          $t0, 0xA4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XA4);
    // 0x00447028: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x0044702C: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x00447030: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x00447034: lw          $v0, 0xA8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XA8);
    // 0x00447038: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x0044703C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00447040: addiu       $a1, $a1, 0x200
    ctx->r5 = ADD32(ctx->r5, 0X200);
    // 0x00447044: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00447048: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x0044704C: beq         $v1, $v0, L_00447090
    if (ctx->r3 == ctx->r2) {
            // 0x00447050: slti        $v0, $v1, 0x456
    ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
    func_00447090(rdram, ctx);
    return;
    }
    // 0x00447050: slti        $v0, $v1, 0x456
    ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
    // 0x00447054: beq         $v0, $zero, L_0044706C
    if (ctx->r2 == 0) {
            // 0x00447058: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    func_0044706C(rdram, ctx);
    return;
    }
    // 0x00447058: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x0044705C: beq         $v1, $v0, L_00447080
    if (ctx->r3 == ctx->r2) {
            // 0x00447060: nop

    func_00447080(rdram, ctx);
    return;
    }
    // 0x00447060: nop

    // 0x00447064: jr          $ra
    // 0x00447068: nop

    return;
    // 0x00447068: nop

;}
RECOMP_FUNC void func_002156D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002156D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002156D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002156DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002156E0: jal         0x00267944
    // 0x002156E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00267944(rdram, ctx);
        goto after_0;
    // 0x002156E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002156E8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002156EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002156F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002156F4: jr          $ra
    // 0x002156F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002156F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029346C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029346C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // turok2: reconnected split function: a stray ELF symbol at 0x00293470 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00293470(rdram, ctx);
;}
RECOMP_FUNC void func_00449BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00410CD8:
    // 0x00449BB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449BB8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00449BC0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00449BC4: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x00449BC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00449BCC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449BD0: jal         0x002017D4
    // 0x00449BD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00449BD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x00449BD8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00449BDC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00449BE0: blez        $a0, L_00449BF8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00449BE4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00449BF8;
    }
    // 0x00449BE4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00449BE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00449BEC:
    // 0x00449BEC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00449BF0: bnel        $v0, $zero, L_00449BEC
    if (ctx->r2 != 0) {
        // 0x00449BF4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00449BEC;
    }
    goto skip_0;
    // 0x00449BF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_00449BF8:
    // 0x00449BF8: bne         $a0, $zero, L_00449C10
    if (ctx->r4 != 0) {
        // 0x00449BFC: nop
    
            goto L_00449C10;
    }
    // 0x00449BFC: nop

    // 0x00449C00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449C04: lwc1        $f0, 0x994($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X994);
    // 0x00449C08: j           L_00410CD8
    // 0x00449C0C: nop

    entry_00410CD8(rdram, ctx);
    return;
    // 0x00449C0C: nop

L_00449C10:
    // 0x00449C10: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00449C14: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00449C18: nop

    // 0x00449C1C: bc1f        L_00449C30
    if (!c1cs) {
        // 0x00449C20: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00449C30;
    }
    // 0x00449C20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00449C24: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00449C28: j           L_00410CD8
    // 0x00449C2C: nop

    entry_00410CD8(rdram, ctx);
    return;
    // 0x00449C2C: nop

L_00449C30:
    // 0x00449C30: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00449C34: lwc1        $f0, -0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X4);
    // 0x00449C38: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00449C3C: nop

    // 0x00449C40: bc1f        L_00449C54
    if (!c1cs) {
        // 0x00449C44: nop
    
            goto L_00449C54;
    }
    // 0x00449C44: nop

    // 0x00449C48: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x00449C4C: j           L_00410CD8
    // 0x00449C50: nop

    entry_00410CD8(rdram, ctx);
    return;
    // 0x00449C50: nop

L_00449C54:
    // 0x00449C54: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00449C58: nop

    // 0x00449C5C: bc1f        L_00449C7C
    if (!c1cs) {
        // 0x00449C60: nop
    
            goto L_00449C7C;
    }
    // 0x00449C60: nop

    // 0x00449C64: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_00449C68:
    // 0x00449C68: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00449C6C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00449C70: nop

    // 0x00449C74: bc1tl       L_00449C68
    if (c1cs) {
        // 0x00449C78: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_00449C68;
    }
    goto skip_1;
    // 0x00449C78: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    skip_1:
L_00449C7C:
    // 0x00449C7C: lwc1        $f1, -0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, -0X4);
    // 0x00449C80: sub.s       $f2, $f20, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00449C84: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00449C88: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00449C8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449C90: lwc1        $f1, 0x998($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X998);
    // 0x00449C94: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00449C98: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00449C9C: add.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x00449CA0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00449CA4: nop

    // 0x00449CA8: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00449CAC: nop

    // 0x00449CB0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00449CB4: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00449CB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449CBC: lwc1        $f0, 0x99C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X99C);
    // 0x00449CC0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00449CC4: lwc1        $f1, -0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, -0X8);
    // 0x00449CC8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00449CCC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00449CD0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00449CD4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00449CD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00449CDC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00449CE0: jr          $ra
    // 0x00449CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00449CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00267D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267D8C: jr          $ra
    // 0x00267D90: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267D90: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00201BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00201BE0: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    // 0x00201BE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00201BE8: sw          $a2, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r6;
    // 0x00201BEC: jal         0x0029B820
    // 0x00201BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00201BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00201BF4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x00201BF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00201BFC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00201C00: jr          $ra
    // 0x00201C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00201C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266200: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00266204: lh          $a1, 0x20($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X20);
    // 0x00266208: beq         $a1, $zero, L_0026621C
    if (ctx->r5 == 0) {
        // 0x0026620C: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_0026621C;
    }
    // 0x0026620C: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00266210: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00266214: j           L_00266224
    // 0x00266218: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
        goto L_00266224;
    // 0x00266218: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
L_0026621C:
    // 0x0026621C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00266220: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00266224:
    // 0x00266224: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00266228: jr          $ra
    // 0x0026622C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x0026622C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_002747EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002747EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002747F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002747F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002747F8: lw          $v1, 0xB0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB0);
    // 0x002747FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00274800: addiu       $s0, $v1, 0x84
    ctx->r16 = ADD32(ctx->r3, 0X84);
    // 0x00274804: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00274808: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0027480C: lh          $a1, 0xDC($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XDC);
    // 0x00274810: jal         0x00293E60
    // 0x00274814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00274814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00274818: jal         0x00293580
    // 0x0027481C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x0027481C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00274820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00274824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274828: jr          $ra
    // 0x0027482C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027482C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025492C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025492C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00254930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00254934: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00254938: addiu       $s0, $s0, -0x5350
    ctx->r16 = ADD32(ctx->r16, -0X5350);
    // 0x0025493C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00254940: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00254944: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00254948: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0025494C: bne         $v0, $zero, L_00254A44
    if (ctx->r2 != 0) {
        // 0x00254950: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00254A44;
    }
    // 0x00254950: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00254954: lbu         $v0, -0x1BF($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X1BF);
    // 0x00254958: beq         $v0, $zero, L_00254A44
    if (ctx->r2 == 0) {
        // 0x0025495C: nop
    
            goto L_00254A44;
    }
    // 0x0025495C: nop

    // 0x00254960: jal         0x00416AF8
    // 0x00254964: addiu       $a0, $s0, -0xE84
    ctx->r4 = ADD32(ctx->r16, -0XE84);
    func_00416AF8(rdram, ctx);
        goto after_0;
    // 0x00254964: addiu       $a0, $s0, -0xE84
    ctx->r4 = ADD32(ctx->r16, -0XE84);
    after_0:
    // 0x00254968: bne         $v0, $zero, L_002549E4
    if (ctx->r2 != 0) {
        // 0x0025496C: nop
    
            goto L_002549E4;
    }
    // 0x0025496C: nop

    // 0x00254970: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x00254974: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00254978: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0025497C: nop

    // 0x00254980: bc1f        L_002549E4
    if (!c1cs) {
        // 0x00254984: nop
    
            goto L_002549E4;
    }
    // 0x00254984: nop

    // 0x00254988: lw          $v0, -0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC);
    // 0x0025498C: bne         $v0, $zero, L_002549E4
    if (ctx->r2 != 0) {
        // 0x00254990: nop
    
            goto L_002549E4;
    }
    // 0x00254990: nop

    // 0x00254994: jal         0x00254BE4
    // 0x00254998: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00254BE4(rdram, ctx);
        goto after_1;
    // 0x00254998: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025499C: beq         $v0, $zero, L_002549B8
    if (ctx->r2 == 0) {
        // 0x002549A0: nop
    
            goto L_002549B8;
    }
    // 0x002549A0: nop

    // 0x002549A4: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x002549A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002549AC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002549B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002549B4: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
L_002549B8:
    // 0x002549B8: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x002549BC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002549C0: nop

    // 0x002549C4: bc1f        L_002549E4
    if (!c1cs) {
        // 0x002549C8: nop
    
            goto L_002549E4;
    }
    // 0x002549C8: nop

    // 0x002549CC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x002549D0: bne         $v0, $zero, L_002549E4
    if (ctx->r2 != 0) {
        // 0x002549D4: nop
    
            goto L_002549E4;
    }
    // 0x002549D4: nop

    // 0x002549D8: swc1        $f20, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f20.u32l;
    // 0x002549DC: jal         0x002534E0
    // 0x002549E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002534E0(rdram, ctx);
        goto after_2;
    // 0x002549E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_002549E4:
    // 0x002549E4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002549E8: addiu       $s0, $s0, -0x61D4
    ctx->r16 = ADD32(ctx->r16, -0X61D4);
    // 0x002549EC: jal         0x00416AF8
    // 0x002549F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00416AF8(rdram, ctx);
        goto after_3;
    // 0x002549F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002549F4: bne         $v0, $zero, L_00254A44
    if (ctx->r2 != 0) {
        // 0x002549F8: nop
    
            goto L_00254A44;
    }
    // 0x002549F8: nop

    // 0x002549FC: jal         0x0025295C
    // 0x00254A00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0025295C(rdram, ctx);
        goto after_4;
    // 0x00254A00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00254A04: beq         $v0, $zero, L_00254A44
    if (ctx->r2 == 0) {
        // 0x00254A08: addiu       $v1, $s0, 0xE84
        ctx->r3 = ADD32(ctx->r16, 0XE84);
            goto L_00254A44;
    }
    // 0x00254A08: addiu       $v1, $s0, 0xE84
    ctx->r3 = ADD32(ctx->r16, 0XE84);
    // 0x00254A0C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00254A10: bne         $v0, $zero, L_00254A44
    if (ctx->r2 != 0) {
        // 0x00254A14: nop
    
            goto L_00254A44;
    }
    // 0x00254A14: nop

    // 0x00254A18: lw          $v0, 0xE78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE78);
    // 0x00254A1C: bne         $v0, $zero, L_00254A44
    if (ctx->r2 != 0) {
        // 0x00254A20: nop
    
            goto L_00254A44;
    }
    // 0x00254A20: nop

    // 0x00254A24: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00254A28: blez        $v0, L_00254A44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00254A2C: nop
    
            goto L_00254A44;
    }
    // 0x00254A2C: nop

    // 0x00254A30: lw          $v0, 0x34($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X34);
    // 0x00254A34: bne         $v0, $zero, L_00254A44
    if (ctx->r2 != 0) {
        // 0x00254A38: nop
    
            goto L_00254A44;
    }
    // 0x00254A38: nop

    // 0x00254A3C: jal         0x002534E0
    // 0x00254A40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002534E0(rdram, ctx);
        goto after_5;
    // 0x00254A40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_00254A44:
    // 0x00254A44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00254A48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00254A4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00254A50: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00254A54: jr          $ra
    // 0x00254A58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00254A58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0027B094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B094: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0027B098: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0027B09C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0027B0A0: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x0027B0A4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0027B0A8: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x0027B0AC: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x0027B0B0: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
    // 0x0027B0B4: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x0027B0B8: jr          $ra
    // 0x0027B0BC: sw          $t0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r8;
    return;
    // 0x0027B0BC: sw          $t0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r8;
;}
RECOMP_FUNC void func_0026EFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EFA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026EFA4: jr          $ra
    // 0x0026EFA8: nop

    return;
    // 0x0026EFA8: nop

;}
RECOMP_FUNC void func_004419B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004419B8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004419BC: lw          $v0, -0x4A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A8);
    // 0x004419C0: jr          $ra
    // 0x004419C4: nop

    return;
    // 0x004419C4: nop

;}
RECOMP_FUNC void func_00275248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027524C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00275250: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275254: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x00275258: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027525C: jal         0x00290EF0
    // 0x00275260: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    func_00290EF0(rdram, ctx);
        goto after_0;
    // 0x00275260: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    after_0:
    // 0x00275264: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275268: jr          $ra
    // 0x0027526C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027526C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040D8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040D8B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040D8B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040D8BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040D8C0: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x0040D8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040D8C8: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x0040D8CC: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D8D0: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x0040D8D4: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x0040D8D8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D8DC: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x0040D8E0: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x0040D8E4: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0040D8E8: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x0040D8EC: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0040D8F0: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D8F4: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D8F8: bne         $v1, $v0, L_0040D910
    if (ctx->r3 != ctx->r2) {
        // 0x0040D8FC: nop
    
            goto L_0040D910;
    }
    // 0x0040D8FC: nop

    // 0x0040D900: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D904: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x0040D908: j           L_0040D91C
    // 0x0040D90C: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
        goto L_0040D91C;
    // 0x0040D90C: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040D910:
    // 0x0040D910: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D914: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x0040D918: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040D91C:
    // 0x0040D91C: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D920: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D924: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040D928: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040D92C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040D930: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D934: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D938: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040D93C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D940: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D944: bne         $v1, $v0, L_0040D958
    if (ctx->r3 != ctx->r2) {
        // 0x0040D948: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040D958;
    }
    // 0x0040D948: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040D94C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040D950: j           L_0040D964
    // 0x0040D954: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040D964;
    // 0x0040D954: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040D958:
    // 0x0040D958: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040D95C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040D960: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040D964:
    // 0x0040D964: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D968: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D96C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D970: beq         $v0, $zero, L_0040D98C
    if (ctx->r2 == 0) {
        // 0x0040D974: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D98C;
    }
    // 0x0040D974: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D978: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D97C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D980: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D984: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D988: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D98C:
    // 0x0040D98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D990: jal         0x00243414
    // 0x0040D994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D998: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D99C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D9A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D9A4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D9A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D9B0: jr          $ra
    // 0x0040D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255EA8: jr          $ra
    // 0x00255EAC: nop

    return;
    // 0x00255EAC: nop

;}
RECOMP_FUNC void func_00272D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00272D58:
    // 0x00272D60: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x00272D64: beq         $v0, $zero, L_00272D78
    if (ctx->r2 == 0) {
        // 0x00272D68: nop
    
            goto L_00272D78;
    }
    // 0x00272D68: nop

    // 0x00272D6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272D70: lwc1        $f0, -0x7EBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7EBC);
    // 0x00272D74: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
L_00272D78:
    // 0x00272D78: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x00272D7C: lw          $v0, 0x2B98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B98);
    // 0x00272D80: lwc1        $f1, 0x44($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X44);
    // 0x00272D84: lwc1        $f0, 0x114($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X114);
    // 0x00272D88: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00272D8C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00272D90: lwc1        $f3, 0x48($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X48);
    // 0x00272D94: lwc1        $f0, 0x118($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X118);
    // 0x00272D98: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00272D9C: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00272DA0: lwc1        $f2, 0x11C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X11C);
    // 0x00272DA4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x00272DA8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00272DAC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00272DB0: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00272DB4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00272DB8: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x00272DBC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272DC0: nop

    // 0x00272DC4: bc1f        L_00272DE4
    if (!c1cs) {
        // 0x00272DC8: swc1        $f1, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00272DE4;
    }
    // 0x00272DC8: swc1        $f1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00272DCC: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x00272DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272DD4: lwc1        $f1, 0x2848($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2848);
    // 0x00272DD8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00272DDC: j           L_00272E80
    // 0x00272DE0: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
        goto L_00272E80;
    // 0x00272DE0: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
L_00272DE4:
    // 0x00272DE4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272DE8: nop

    // 0x00272DEC: bc1f        L_00272E0C
    if (!c1cs) {
        // 0x00272DF0: nop
    
            goto L_00272E0C;
    }
    // 0x00272DF0: nop

    // 0x00272DF4: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x00272DF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272DFC: lwc1        $f1, 0x2848($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2848);
    // 0x00272E00: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00272E04: j           L_00272E80
    // 0x00272E08: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
        goto L_00272E80;
    // 0x00272E08: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
L_00272E0C:
    // 0x00272E0C: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x00272E10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272E14: lwc1        $f2, -0x7EB8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7EB8);
    // 0x00272E18: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00272E1C: nop

    // 0x00272E20: bc1f        L_00272E4C
    if (!c1cs) {
        // 0x00272E24: nop
    
            goto L_00272E4C;
    }
    // 0x00272E24: nop

    // 0x00272E28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272E2C: lwc1        $f0, 0x2848($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2848);
    // 0x00272E30: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00272E34: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00272E38: nop

    // 0x00272E3C: bc1tl       L_00272D58
    if (c1cs) {
            // 0x00272E40: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    entry_00272D58(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00272E40: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_0:
    // 0x00272E44: j           L_00272D58
    // 0x00272E48: nop

    entry_00272D58(rdram, ctx);
    return;
    // 0x00272E48: nop

L_00272E4C:
    // 0x00272E4C: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00272E50: nop

    // 0x00272E54: bc1f        L_00272EBC
    if (!c1cs) {
        // 0x00272E58: nop
    
            goto L_00272EBC;
    }
    // 0x00272E58: nop

    // 0x00272E5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272E60: lwc1        $f0, 0x2848($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2848);
    // 0x00272E64: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00272E68: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00272E6C: nop

    // 0x00272E70: bc1tl       L_00272D58
    if (c1cs) {
            // 0x00272E74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    entry_00272D58(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x00272E74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_1:
    // 0x00272E78: j           L_00272D58
    // 0x00272E7C: nop

    entry_00272D58(rdram, ctx);
    return;
    // 0x00272E7C: nop

L_00272E80:
    // 0x00272E80: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x00272E84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272E88: lwc1        $f1, -0x7EB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EB4);
    // 0x00272E8C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272E90: nop

    // 0x00272E94: bc1tl       L_00272EB4
    if (c1cs) {
        // 0x00272E98: swc1        $f1, 0x34($a0)
        MEM_W(0X34, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00272EB4;
    }
    goto skip_2;
    // 0x00272E98: swc1        $f1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_2:
    // 0x00272E9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272EA0: lwc1        $f1, -0x7EB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EB0);
    // 0x00272EA4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272EA8: nop

    // 0x00272EAC: bc1tl       L_00272EB4
    if (c1cs) {
        // 0x00272EB0: swc1        $f1, 0x34($a0)
        MEM_W(0X34, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00272EB4;
    }
    goto skip_3;
    // 0x00272EB0: swc1        $f1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_3:
L_00272EB4:
    // 0x00272EB4: lwc1        $f0, 0x58($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X58);
    // 0x00272EB8: swc1        $f0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f0.u32l;
L_00272EBC:
    // 0x00272EBC: jr          $ra
    // 0x00272EC0: nop

    return;
    // 0x00272EC0: nop

;}
RECOMP_FUNC void func_00298DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298DEC: lh          $v0, 0x70($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X70);
    // turok2: reconnected split function: a stray ELF symbol at 0x00298DF0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00298DF0(rdram, ctx);
;}
RECOMP_FUNC void func_00271128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271128: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0027112C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00271130: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00271134: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00271138: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0027113C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00271140: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00271144: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00271148: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027114C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00271150: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00271154: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x00271158: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x0027115C: lw          $v0, 0x2B54($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2B54);
    // 0x00271160: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x00271164: slt         $v0, $s5, $v0
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00271168: bne         $v0, $zero, L_00271178
    if (ctx->r2 != 0) {
        // 0x0027116C: sll         $s0, $s5, 16
        ctx->r16 = S32(ctx->r21 << 16);
            goto L_00271178;
    }
    // 0x0027116C: sll         $s0, $s5, 16
    ctx->r16 = S32(ctx->r21 << 16);
    // 0x00271170: j           L_002712C0
    // 0x00271174: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_002712C0;
    // 0x00271174: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00271178:
    // 0x00271178: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x0027117C: lw          $a0, 0x2B4C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2B4C);
    // 0x00271180: jal         0x002017D4
    // 0x00271184: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00271184: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00271188: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0027118C: jal         0x002017D4
    // 0x00271190: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00271190: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00271194: lw          $a0, 0x2B4C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2B4C);
    // 0x00271198: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0027119C: sw          $v0, 0x2B88($s2)
    MEM_W(0X2B88, ctx->r18) = ctx->r2;
    // 0x002711A0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x002711A4: sh          $v0, 0x2B8C($s2)
    MEM_H(0X2B8C, ctx->r18) = ctx->r2;
    // 0x002711A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002711AC: jal         0x002017D4
    // 0x002711B0: sw          $v0, 0x2B90($s2)
    MEM_W(0X2B90, ctx->r18) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002711B0: sw          $v0, 0x2B90($s2)
    MEM_W(0X2B90, ctx->r18) = ctx->r2;
    after_2:
    // 0x002711B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002711B8: jal         0x002017D4
    // 0x002711BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002711BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x002711C0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002711C4: lw          $s4, 0x4($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X4);
    // 0x002711C8: beq         $s4, $zero, L_00271270
    if (ctx->r20 == 0) {
        // 0x002711CC: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00271270;
    }
    // 0x002711CC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x002711D0: jal         0x0029DFF0
    // 0x002711D4: addiu       $s0, $s2, 0x110
    ctx->r16 = ADD32(ctx->r18, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x002711D4: addiu       $s0, $s2, 0x110
    ctx->r16 = ADD32(ctx->r18, 0X110);
    after_4:
    // 0x002711D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002711DC: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x002711E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002711E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002711E8: beq         $v1, $v0, L_00271210
    if (ctx->r3 == ctx->r2) {
        // 0x002711EC: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271210;
    }
    // 0x002711EC: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x002711F0: jal         0x0029E010
    // 0x002711F4: nop

    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x002711F4: nop

    after_5:
    // 0x002711F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002711FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271200: jal         0x0029B6F0
    // 0x00271204: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x00271204: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x00271208: j           L_00271218
    // 0x0027120C: nop

        goto L_00271218;
    // 0x0027120C: nop

L_00271210:
    // 0x00271210: jal         0x0029E010
    // 0x00271214: nop

    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00271214: nop

    after_7:
L_00271218:
    // 0x00271218: lw          $v0, 0x10C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10C);
    // 0x0027121C: addiu       $s0, $s2, 0x110
    ctx->r16 = ADD32(ctx->r18, 0X110);
    // 0x00271220: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00271224: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00271228: jal         0x0029DFF0
    // 0x0027122C: sw          $s1, 0x10C($s2)
    MEM_W(0X10C, ctx->r18) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_8;
    // 0x0027122C: sw          $s1, 0x10C($s2)
    MEM_W(0X10C, ctx->r18) = ctx->r17;
    after_8:
    // 0x00271230: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00271234: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00271238: beq         $v1, $zero, L_00271260
    if (ctx->r3 == 0) {
        // 0x0027123C: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271260;
    }
    // 0x0027123C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271240: jal         0x0029E010
    // 0x00271244: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x00271244: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x00271248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027124C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271250: jal         0x0029B820
    // 0x00271254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x00271254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x00271258: j           L_00271274
    // 0x0027125C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_00271274;
    // 0x0027125C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00271260:
    // 0x00271260: jal         0x0029E010
    // 0x00271264: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_11;
    // 0x00271264: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_11:
    // 0x00271268: j           L_00271274
    // 0x0027126C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_00271274;
    // 0x0027126C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00271270:
    // 0x00271270: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00271274:
    // 0x00271274: beq         $s4, $zero, L_002712C0
    if (ctx->r20 == 0) {
        // 0x00271278: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_002712C0;
    }
    // 0x00271278: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0027127C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00271280:
    // 0x00271280: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x00271284: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00271288: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x0027128C: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00271290: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00271294: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00271298: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x0027129C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002712A0: mflo        $t0
    ctx->r8 = lo;
    // 0x002712A4: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x002712A8: jal         0x00270A60
    // 0x002712AC: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    func_00270A60(rdram, ctx);
        goto after_12;
    // 0x002712AC: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    after_12:
    // 0x002712B0: sltu        $v0, $s0, $s4
    ctx->r2 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x002712B4: bne         $v0, $zero, L_00271280
    if (ctx->r2 != 0) {
        // 0x002712B8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00271280;
    }
    // 0x002712B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002712BC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002712C0:
    // 0x002712C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002712C4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x002712C8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x002712CC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x002712D0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x002712D4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002712D8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002712DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002712E0: jr          $ra
    // 0x002712E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002712E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004188A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004188A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004188A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004188AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004188B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004188B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004188B8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004188BC: lw          $a1, 0x1EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1EA8);
    // 0x004188C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004188C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004188C8: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
    // 0x004188CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004188D0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x004188D4: jal         0x0041648C
    // 0x004188D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004188D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x004188DC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x004188E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004188E4: sw          $v0, 0x1EA8($at)
    MEM_W(0X1EA8, ctx->r1) = ctx->r2;
    // 0x004188E8: jal         0x00285670
    // 0x004188EC: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x004188EC: nop

    after_1:
    // 0x004188F0: bne         $v0, $zero, L_0041890C
    if (ctx->r2 != 0) {
        // 0x004188F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0041890C;
    }
    // 0x004188F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004188F8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x004188FC: jal         0x002855E8
    // 0x00418900: nop

    func_002855E8(rdram, ctx);
        goto after_2;
    // 0x00418900: nop

    after_2:
    // 0x00418904: beq         $v0, $zero, L_00418928
    if (ctx->r2 == 0) {
        // 0x00418908: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00418928;
    }
    // 0x00418908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0041890C:
    // 0x0041890C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418910: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418914: lw          $a1, 0x1EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1EA8);
    // 0x00418918: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041891C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00418920: jal         0x0041648C
    // 0x00418924: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_3;
    // 0x00418924: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_00418928:
    // 0x00418928: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041892C: lw          $v0, 0x1EA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EA8);
    // 0x00418930: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418934: lwc1        $f0, 0xF34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF34);
    // 0x00418938: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0041893C: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00418940: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00418944: lwc1        $f1, -0x76FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X76FC);
    // 0x00418948: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0041894C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418950: lwc1        $f0, 0xF38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF38);
    // 0x00418954: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00418958: nop

    // 0x0041895C: bc1tl       L_0041898C
    if (c1cs) {
        // 0x00418960: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0041898C;
    }
    goto skip_0;
    // 0x00418960: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
    // 0x00418964: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418968: lwc1        $f2, 0xF3C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XF3C);
    // 0x0041896C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00418970: nop

    // 0x00418974: bc1tl       L_0041898C
    if (c1cs) {
        // 0x00418978: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0041898C;
    }
    goto skip_1;
    // 0x00418978: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_1:
    // 0x0041897C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00418980: nop

    // 0x00418984: bc1tl       L_0041898C
    if (c1cs) {
        // 0x00418988: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0041898C;
    }
    goto skip_2;
    // 0x00418988: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_2:
L_0041898C:
    // 0x0041898C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00418990: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00418994: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418998: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041899C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004189A0: swc1        $f1, -0x550C($at)
    MEM_W(-0X550C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x004189A4: jr          $ra
    // 0x004189A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004189A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00427C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427C1C: lw          $v1, -0x210C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X210C);
;}
RECOMP_FUNC void func_00275624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275624: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00275628: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x0027562C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00275630: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00275634: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00275638: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0027563C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00275640: bne         $v0, $zero, L_002756BC
    if (ctx->r2 != 0) {
        // 0x00275644: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_002756BC;
    }
    // 0x00275644: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00275648: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0027564C: addiu       $s0, $s0, 0x2A00
    ctx->r16 = ADD32(ctx->r16, 0X2A00);
    // 0x00275650: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00275654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00275658: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0027565C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x00275660: jal         0x002718C4
    // 0x00275664: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_002718C4(rdram, ctx);
        goto after_0;
    // 0x00275664: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00275668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027566C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00275670: jal         0x002718BC
    // 0x00275674: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002718BC(rdram, ctx);
        goto after_1;
    // 0x00275674: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00275678: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027567C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00275680: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00275684: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00275688: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0027568C: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x00275690: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00275694: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00275698: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x0027569C: jal         0x00270C80
    // 0x002756A0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00270C80(rdram, ctx);
        goto after_2;
    // 0x002756A0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x002756A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002756A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002756AC: jal         0x002718BC
    // 0x002756B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002718BC(rdram, ctx);
        goto after_3;
    // 0x002756B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x002756B4: j           L_002756C0
    // 0x002756B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_002756C0;
    // 0x002756B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_002756BC:
    // 0x002756BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002756C0:
    // 0x002756C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002756C4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002756C8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002756CC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002756D0: jr          $ra
    // 0x002756D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002756D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00273370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273370: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00273374: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00273378: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0027337C: addu        $t6, $a3, $zero
    ctx->r14 = ADD32(ctx->r7, 0);
    // 0x00273380: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x00273384: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x00273388: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x0027338C: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    // 0x00273390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00273394: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x00273398: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    // 0x0027339C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002733A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002733A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002733A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002733AC: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x002733B0: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x002733B4: addiu       $t3, $t1, 0x7C
    ctx->r11 = ADD32(ctx->r9, 0X7C);
    // 0x002733B8: addu        $a1, $t3, $zero
    ctx->r5 = ADD32(ctx->r11, 0);
L_002733BC:
    // 0x002733BC: lh          $v0, 0x60($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X60);
    // 0x002733C0: beq         $v0, $t5, L_00273458
    if (ctx->r2 == ctx->r13) {
        // 0x002733C4: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_00273458;
    }
    // 0x002733C4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x002733C8: lh          $v1, 0x38($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X38);
    // 0x002733CC: slt         $v0, $v1, $t2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x002733D0: beq         $v0, $zero, L_002733F0
    if (ctx->r2 == 0) {
        // 0x002733D4: slt         $v0, $a3, $v1
        ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_002733F0;
    }
    // 0x002733D4: slt         $v0, $a3, $v1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002733D8: bnel        $v0, $zero, L_002733F4
    if (ctx->r2 != 0) {
        // 0x002733DC: addiu       $a2, $a2, 0xCC
        ctx->r6 = ADD32(ctx->r6, 0XCC);
            goto L_002733F4;
    }
    goto skip_0;
    // 0x002733DC: addiu       $a2, $a2, 0xCC
    ctx->r6 = ADD32(ctx->r6, 0XCC);
    skip_0:
    // 0x002733E0: beql        $v1, $t4, L_002733F4
    if (ctx->r3 == ctx->r12) {
        // 0x002733E4: addiu       $a2, $a2, 0xCC
        ctx->r6 = ADD32(ctx->r6, 0XCC);
            goto L_002733F4;
    }
    goto skip_1;
    // 0x002733E4: addiu       $a2, $a2, 0xCC
    ctx->r6 = ADD32(ctx->r6, 0XCC);
    skip_1:
    // 0x002733E8: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x002733EC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
L_002733F0:
    // 0x002733F0: addiu       $a2, $a2, 0xCC
    ctx->r6 = ADD32(ctx->r6, 0XCC);
L_002733F4:
    // 0x002733F4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002733F8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x002733FC: bne         $v0, $zero, L_002733BC
    if (ctx->r2 != 0) {
        // 0x00273400: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_002733BC;
    }
    // 0x00273400: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x00273404: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00273408: beq         $t0, $s2, L_00273448
    if (ctx->r8 == ctx->r18) {
        // 0x0027340C: sll         $v0, $t0, 1
        ctx->r2 = S32(ctx->r8 << 1);
            goto L_00273448;
    }
    // 0x0027340C: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x00273410: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x00273414: lh          $v0, 0x60($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X60);
    // 0x00273418: bne         $v0, $s2, L_00273460
    if (ctx->r2 != ctx->r18) {
        // 0x0027341C: sll         $v1, $t0, 16
        ctx->r3 = S32(ctx->r8 << 16);
            goto L_00273460;
    }
    // 0x0027341C: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x00273420: lw          $v1, 0x140($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X140);
    // 0x00273424: addiu       $v0, $t1, 0x13C
    ctx->r2 = ADD32(ctx->r9, 0X13C);
    // 0x00273428: beq         $v1, $v0, L_00273450
    if (ctx->r3 == ctx->r2) {
        // 0x0027342C: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_00273450;
    }
    // 0x0027342C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x00273430: lh          $v1, 0x40($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X40);
    // 0x00273434: sll         $v0, $t6, 16
    ctx->r2 = S32(ctx->r14 << 16);
    // 0x00273438: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027343C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00273440: beq         $v0, $zero, L_00273450
    if (ctx->r2 == 0) {
        // 0x00273444: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_00273450;
    }
    // 0x00273444: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_00273448:
    // 0x00273448: j           L_002734E8
    // 0x0027344C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_002734E8;
    // 0x0027344C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00273450:
    // 0x00273450: j           L_002734E8
    // 0x00273454: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
        goto L_002734E8;
    // 0x00273454: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_00273458:
    // 0x00273458: j           L_002734E8
    // 0x0027345C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
        goto L_002734E8;
    // 0x0027345C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_00273460:
    // 0x00273460: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x00273464: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00273468: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0027346C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00273470: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00273474: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00273478: addu        $s0, $v0, $s3
    ctx->r16 = ADD32(ctx->r2, ctx->r19);
    // 0x0027347C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00273480: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00273484: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x00273488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027348C: sw          $v0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r2;
    // 0x00273490: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x00273494: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00273498: beq         $v1, $v0, L_002734D4
    if (ctx->r3 == ctx->r2) {
        // 0x0027349C: addiu       $s1, $a0, 0x84
        ctx->r17 = ADD32(ctx->r4, 0X84);
            goto L_002734D4;
    }
    // 0x0027349C: addiu       $s1, $a0, 0x84
    ctx->r17 = ADD32(ctx->r4, 0X84);
    // 0x002734A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002734A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002734A8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002734AC: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x002734B0: jal         0x00293E60
    // 0x002734B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x002734B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002734B8: jal         0x00293580
    // 0x002734BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x002734BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002734C0: beql        $v0, $zero, L_002734D4
    if (ctx->r2 == 0) {
        // 0x002734C4: sw          $s2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r18;
            goto L_002734D4;
    }
    goto skip_2;
    // 0x002734C4: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    skip_2:
    // 0x002734C8: jal         0x00293EC0
    // 0x002734CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x002734CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002734D0: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
L_002734D4:
    // 0x002734D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002734D8: lw          $a0, 0xCD0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XCD0);
    // 0x002734DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002734E0: beql        $a0, $v1, L_002734E8
    if (ctx->r4 == ctx->r3) {
        // 0x002734E4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_002734E8;
    }
    goto skip_3;
    // 0x002734E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    skip_3:
L_002734E8:
    // 0x002734E8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002734EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002734F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002734F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002734F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002734FC: jr          $ra
    // 0x00273500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00273500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025D030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025D030: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x0025D034: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x0025D038: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x0025D03C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0025D040: sw          $ra, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r31;
    // 0x0025D044: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x0025D048: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x0025D04C: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0025D050: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0025D054: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0025D058: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0025D05C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025D060: lw          $v1, 0x44($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X44);
    // 0x0025D064: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    // 0x0025D068: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0025D06C: beq         $v1, $v0, L_0025D2C4
    if (ctx->r3 == ctx->r2) {
        // 0x0025D070: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0025D2C4;
    }
    // 0x0025D070: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0025D074: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0025D078: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x0025D07C: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x0025D080: addu        $s5, $s1, $zero
    ctx->r21 = ADD32(ctx->r17, 0);
    // 0x0025D084: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0025D088: lb          $v1, 0x133($s7)
    ctx->r3 = MEM_B(ctx->r23, 0X133);
    // 0x0025D08C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025D090: beq         $v0, $zero, L_0025D130
    if (ctx->r2 == 0) {
        // 0x0025D094: addu        $s6, $s1, $zero
        ctx->r22 = ADD32(ctx->r17, 0);
            goto L_0025D130;
    }
    // 0x0025D094: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
    // 0x0025D098: bne         $v1, $zero, L_0025D0CC
    if (ctx->r3 != 0) {
        // 0x0025D09C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025D0CC;
    }
    // 0x0025D09C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025D0A0: lhu         $v0, 0x6A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6A);
    // 0x0025D0A4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x0025D0A8: andi        $s1, $v0, 0x1F
    ctx->r17 = ctx->r2 & 0X1F;
    // 0x0025D0AC: andi        $s3, $v1, 0x1F
    ctx->r19 = ctx->r3 & 0X1F;
    // 0x0025D0B0: lhu         $v0, 0x6C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6C);
    // 0x0025D0B4: lhu         $v1, 0x72($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X72);
    // 0x0025D0B8: andi        $s2, $v0, 0x1F
    ctx->r18 = ctx->r2 & 0X1F;
    // 0x0025D0BC: lhu         $v0, 0x70($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X70);
    // 0x0025D0C0: andi        $s6, $v1, 0x1F
    ctx->r22 = ctx->r3 & 0X1F;
    // 0x0025D0C4: j           L_0025D130
    // 0x0025D0C8: andi        $s5, $v0, 0x1F
    ctx->r21 = ctx->r2 & 0X1F;
        goto L_0025D130;
    // 0x0025D0C8: andi        $s5, $v0, 0x1F
    ctx->r21 = ctx->r2 & 0X1F;
L_0025D0CC:
    // 0x0025D0CC: bne         $v1, $v0, L_0025D100
    if (ctx->r3 != ctx->r2) {
        // 0x0025D0D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025D100;
    }
    // 0x0025D0D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025D0D4: lhu         $v0, 0x6A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6A);
    // 0x0025D0D8: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x0025D0DC: andi        $s1, $v0, 0x3E0
    ctx->r17 = ctx->r2 & 0X3E0;
    // 0x0025D0E0: andi        $s3, $v1, 0x3E0
    ctx->r19 = ctx->r3 & 0X3E0;
    // 0x0025D0E4: lhu         $v0, 0x6C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6C);
    // 0x0025D0E8: lhu         $v1, 0x72($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X72);
    // 0x0025D0EC: andi        $s2, $v0, 0x3E0
    ctx->r18 = ctx->r2 & 0X3E0;
    // 0x0025D0F0: lhu         $v0, 0x70($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X70);
    // 0x0025D0F4: andi        $s6, $v1, 0x3E0
    ctx->r22 = ctx->r3 & 0X3E0;
    // 0x0025D0F8: j           L_0025D130
    // 0x0025D0FC: andi        $s5, $v0, 0x3E0
    ctx->r21 = ctx->r2 & 0X3E0;
        goto L_0025D130;
    // 0x0025D0FC: andi        $s5, $v0, 0x3E0
    ctx->r21 = ctx->r2 & 0X3E0;
L_0025D100:
    // 0x0025D100: bne         $v1, $v0, L_0025D130
    if (ctx->r3 != ctx->r2) {
        // 0x0025D104: nop
    
            goto L_0025D130;
    }
    // 0x0025D104: nop

    // 0x0025D108: lhu         $v0, 0x6A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6A);
    // 0x0025D10C: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x0025D110: andi        $s1, $v0, 0x7C00
    ctx->r17 = ctx->r2 & 0X7C00;
    // 0x0025D114: andi        $s3, $v1, 0x7C00
    ctx->r19 = ctx->r3 & 0X7C00;
    // 0x0025D118: lhu         $v0, 0x6C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6C);
    // 0x0025D11C: lhu         $v1, 0x72($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X72);
    // 0x0025D120: andi        $s2, $v0, 0x7C00
    ctx->r18 = ctx->r2 & 0X7C00;
    // 0x0025D124: lhu         $v0, 0x70($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X70);
    // 0x0025D128: andi        $s6, $v1, 0x7C00
    ctx->r22 = ctx->r3 & 0X7C00;
    // 0x0025D12C: andi        $s5, $v0, 0x7C00
    ctx->r21 = ctx->r2 & 0X7C00;
L_0025D130:
    // 0x0025D130: jal         0x0026D5DC
    // 0x0025D134: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D5DC(rdram, ctx);
        goto after_0;
    // 0x0025D134: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0025D138: lw          $v1, 0x44($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X44);
    // 0x0025D13C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0025D140: beq         $v1, $v0, L_0025D230
    if (ctx->r3 == ctx->r2) {
        // 0x0025D144: nop
    
            goto L_0025D230;
    }
    // 0x0025D144: nop

    // 0x0025D148: beq         $s1, $zero, L_0025D180
    if (ctx->r17 == 0) {
        // 0x0025D14C: nop
    
            goto L_0025D180;
    }
    // 0x0025D14C: nop

    // 0x0025D150: lw          $v0, 0x48($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X48);
    // 0x0025D154: beq         $v0, $zero, L_0025D180
    if (ctx->r2 == 0) {
        // 0x0025D158: nop
    
            goto L_0025D180;
    }
    // 0x0025D158: nop

    // 0x0025D15C: lwc1        $f1, 0x68($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X68);
    // 0x0025D160: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x0025D164: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D168: nop

    // 0x0025D16C: bc1f        L_0025D180
    if (!c1cs) {
        // 0x0025D170: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0025D180;
    }
    // 0x0025D170: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025D174: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x0025D178: jal         0x0026D5E4
    // 0x0025D17C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_1;
    // 0x0025D17C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
L_0025D180:
    // 0x0025D180: beq         $s2, $zero, L_0025D1D8
    if (ctx->r18 == 0) {
        // 0x0025D184: nop
    
            goto L_0025D1D8;
    }
    // 0x0025D184: nop

    // 0x0025D188: lw          $v0, 0x48($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X48);
    // 0x0025D18C: beq         $v0, $zero, L_0025D1D8
    if (ctx->r2 == 0) {
        // 0x0025D190: nop
    
            goto L_0025D1D8;
    }
    // 0x0025D190: nop

    // 0x0025D194: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x0025D198: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D19C: lwc1        $f3, 0x7628($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7628);
    // 0x0025D1A0: sub.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0025D1A4: lwc1        $f1, 0x68($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X68);
    // 0x0025D1A8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025D1AC: nop

    // 0x0025D1B0: bc1f        L_0025D1D8
    if (!c1cs) {
        // 0x0025D1B4: nop
    
            goto L_0025D1D8;
    }
    // 0x0025D1B4: nop

    // 0x0025D1B8: add.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0025D1BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D1C0: nop

    // 0x0025D1C4: bc1f        L_0025D1D8
    if (!c1cs) {
        // 0x0025D1C8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0025D1D8;
    }
    // 0x0025D1C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025D1CC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x0025D1D0: jal         0x0026D5E4
    // 0x0025D1D4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_2;
    // 0x0025D1D4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
L_0025D1D8:
    // 0x0025D1D8: beq         $s3, $zero, L_0025D230
    if (ctx->r19 == 0) {
        // 0x0025D1DC: nop
    
            goto L_0025D230;
    }
    // 0x0025D1DC: nop

    // 0x0025D1E0: lw          $v0, 0x48($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X48);
    // 0x0025D1E4: beq         $v0, $zero, L_0025D230
    if (ctx->r2 == 0) {
        // 0x0025D1E8: nop
    
            goto L_0025D230;
    }
    // 0x0025D1E8: nop

    // 0x0025D1EC: lwc1        $f2, 0x40($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X40);
    // 0x0025D1F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D1F4: lwc1        $f3, 0x762C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X762C);
    // 0x0025D1F8: sub.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0025D1FC: lwc1        $f1, 0x68($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X68);
    // 0x0025D200: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025D204: nop

    // 0x0025D208: bc1f        L_0025D230
    if (!c1cs) {
        // 0x0025D20C: nop
    
            goto L_0025D230;
    }
    // 0x0025D20C: nop

    // 0x0025D210: add.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0025D214: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D218: nop

    // 0x0025D21C: bc1f        L_0025D230
    if (!c1cs) {
        // 0x0025D220: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0025D230;
    }
    // 0x0025D220: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025D224: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0025D228: jal         0x0026D5E4
    // 0x0025D22C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_3;
    // 0x0025D22C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_3:
L_0025D230:
    // 0x0025D230: beq         $s5, $zero, L_0025D274
    if (ctx->r21 == 0) {
        // 0x0025D234: nop
    
            goto L_0025D274;
    }
    // 0x0025D234: nop

    // 0x0025D238: lwc1        $f1, 0x120($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X120);
    // 0x0025D23C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025D240: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D244: nop

    // 0x0025D248: bc1f        L_0025D274
    if (!c1cs) {
        // 0x0025D24C: nop
    
            goto L_0025D274;
    }
    // 0x0025D24C: nop

    // 0x0025D250: lwc1        $f1, 0x24($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X24);
    // 0x0025D254: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x0025D258: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D25C: nop

    // 0x0025D260: bc1f        L_0025D274
    if (!c1cs) {
        // 0x0025D264: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0025D274;
    }
    // 0x0025D264: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025D268: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x0025D26C: jal         0x0026D5E4
    // 0x0025D270: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_4;
    // 0x0025D270: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_4:
L_0025D274:
    // 0x0025D274: beq         $s6, $zero, L_0025D2B8
    if (ctx->r22 == 0) {
        // 0x0025D278: nop
    
            goto L_0025D2B8;
    }
    // 0x0025D278: nop

    // 0x0025D27C: lwc1        $f1, 0x120($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X120);
    // 0x0025D280: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025D284: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D288: nop

    // 0x0025D28C: bc1f        L_0025D2B8
    if (!c1cs) {
        // 0x0025D290: nop
    
            goto L_0025D2B8;
    }
    // 0x0025D290: nop

    // 0x0025D294: lwc1        $f1, 0x24($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X24);
    // 0x0025D298: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
    // 0x0025D29C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025D2A0: nop

    // 0x0025D2A4: bc1f        L_0025D2B8
    if (!c1cs) {
        // 0x0025D2A8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0025D2B8;
    }
    // 0x0025D2A8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025D2AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x0025D2B0: jal         0x0026D5E4
    // 0x0025D2B4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_5;
    // 0x0025D2B4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_5:
L_0025D2B8:
    // 0x0025D2B8: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x0025D2BC: bne         $v0, $zero, L_0025D2CC
    if (ctx->r2 != 0) {
        // 0x0025D2C0: nop
    
            goto L_0025D2CC;
    }
    // 0x0025D2C0: nop

L_0025D2C4:
    // 0x0025D2C4: j           L_0025D2DC
    // 0x0025D2C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0025D2DC;
    // 0x0025D2C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025D2CC:
    // 0x0025D2CC: jal         0x0026D628
    // 0x0025D2D0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D628(rdram, ctx);
        goto after_6;
    // 0x0025D2D0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x0025D2D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025D2D8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_0025D2DC:
    // 0x0025D2DC: lw          $ra, 0x98($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X98);
    // 0x0025D2E0: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x0025D2E4: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x0025D2E8: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x0025D2EC: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x0025D2F0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0025D2F4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0025D2F8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0025D2FC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0025D300: jr          $ra
    // 0x0025D304: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x0025D304: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_0026EE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EE30: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0026EE34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0026EE38: jr          $ra
    // 0x0026EE3C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x0026EE3C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00267F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267F10: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00267F14: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00267F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267F1C: beq         $v1, $v0, L_00267F34
    if (ctx->r3 == ctx->r2) {
            // 0x00267F20: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    func_00267F34(rdram, ctx);
    return;
    }
    // 0x00267F20: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00267F24: bne         $v1, $v0, L_00267F5C
    if (ctx->r3 != ctx->r2) {
            // 0x00267F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00267F5C(rdram, ctx);
    return;
    }
    // 0x00267F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267F2C: jr          $ra
    // 0x00267F30: nop

    return;
    // 0x00267F30: nop

;}
RECOMP_FUNC void func_004541B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004541B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004541BC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004541C0: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x004541C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004541C8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x004541CC: jr          $ra
    // 0x004541D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004541D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00413038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413038: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0041303C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413040: lwc1        $f0, 0xAE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAE4);
    // 0x00413044: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00413048: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0041304C: nop

    // 0x00413050: mul.s       $f0, $f14, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f1.fl);
    // 0x00413054: jr          $ra
    // 0x00413058: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
    return;
    // 0x00413058: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_004418B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004418B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004418B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004418B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004418BC: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004418C0: addiu       $v0, $v0, -0x7A60
    ctx->r2 = ADD32(ctx->r2, -0X7A60);
    // 0x004418C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004418C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004418CC: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x004418D0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004418D4: addiu       $v0, $v0, -0x7010
    ctx->r2 = ADD32(ctx->r2, -0X7010);
    // 0x004418D8: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x004418DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004418E0: sw          $s1, -0x4B0($at)
    MEM_W(-0X4B0, ctx->r1) = ctx->r17;
    // 0x004418E4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x004418E8: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x004418EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004418F0: sw          $v0, -0x4AC($at)
    MEM_W(-0X4AC, ctx->r1) = ctx->r2;
    // 0x004418F4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x004418F8: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x004418FC: addiu       $a1, $zero, 0x5334
    ctx->r5 = ADD32(0, 0X5334);
    // 0x00441900: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00441904: sw          $zero, -0x4A8($at)
    MEM_W(-0X4A8, ctx->r1) = 0;
    // 0x00441908: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0044190C: sw          $zero, -0x4A0($at)
    MEM_W(-0X4A0, ctx->r1) = 0;
    // 0x00441910: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00441914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00441918: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044191C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00441920: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00441924: addiu       $v0, $v0, -0x7620
    ctx->r2 = ADD32(ctx->r2, -0X7620);
    // 0x00441928: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0044192C: swc1        $f0, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = ctx->f0.u32l;
    // 0x00441930: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    // 0x00441934: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00441938: lw          $s0, -0x4B0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4B0);
    // 0x0044193C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00441940: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00441944: sw          $zero, -0x49C($at)
    MEM_W(-0X49C, ctx->r1) = 0;
    // 0x00441948: jal         0x00219F74
    // 0x0044194C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x0044194C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00441950: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00441954: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00441958: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044195C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00441960: addiu       $a2, $a2, 0x560
    ctx->r6 = ADD32(ctx->r6, 0X560);
    // 0x00441964: addiu       $a3, $s0, 0x140
    ctx->r7 = ADD32(ctx->r16, 0X140);
    // 0x00441968: sb          $v0, 0xC6($a3)
    MEM_B(0XC6, ctx->r7) = ctx->r2;
    // 0x0044196C: addiu       $v0, $zero, 0x5334
    ctx->r2 = ADD32(0, 0X5334);
    // 0x00441970: sh          $v0, 0xC4($a3)
    MEM_H(0XC4, ctx->r7) = ctx->r2;
    // 0x00441974: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00441978: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0044197C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00441980: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00441984: jal         0x0027AD24
    // 0x00441988: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    func_0027AD24(rdram, ctx);
        goto after_1;
    // 0x00441988: sb          $zero, 0xC7($a3)
    MEM_B(0XC7, ctx->r7) = 0;
    after_1:
    // 0x0044198C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00441990: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00441994: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00441998: addiu       $a2, $a2, 0x568
    ctx->r6 = ADD32(ctx->r6, 0X568);
    // 0x0044199C: jal         0x0027AD54
    // 0x004419A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027AD54(rdram, ctx);
        goto after_2;
    // 0x004419A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004419A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004419A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004419AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004419B0: jr          $ra
    // 0x004419B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004419B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00461ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00461ABC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00461AC0: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00461AC4: addiu       $a3, $a3, 0xE20
    ctx->r7 = ADD32(ctx->r7, 0XE20);
    // 0x00461AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00461ACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00461AD0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x00461AD4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x00461AD8: addiu       $t0, $t0, 0x13DC
    ctx->r8 = ADD32(ctx->r8, 0X13DC);
    // 0x00461ADC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00461AE0: sb          $a0, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = ctx->r4;
    // 0x00461AE4: sw          $v0, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r2;
    // 0x00461AE8: sb          $v1, 0x0($sp)
    MEM_B(0X0, ctx->r29) = ctx->r3;
    // 0x00461AEC: sb          $v0, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r2;
    // 0x00461AF0: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x00461AF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00461AF8: sb          $v0, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r2;
    // 0x00461AFC: sb          $a0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r4;
    // 0x00461B00: sb          $v1, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r3;
    // 0x00461B04: sb          $v1, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r3;
    // 0x00461B08: sb          $v1, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r3;
    // 0x00461B0C: beq         $a1, $zero, L_00461B48
    if (ctx->r5 == 0) {
        // 0x00461B10: sb          $v1, 0x7($sp)
        MEM_B(0X7, ctx->r29) = ctx->r3;
            goto L_00461B48;
    }
    // 0x00461B10: sb          $v1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r3;
L_00461B14:
    // 0x00461B14: lwl         $t1, 0x0($sp)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r29, 0X0);
    // 0x00461B18: lwr         $t1, 0x3($sp)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r29, 0X3);
    // 0x00461B1C: lwl         $t2, 0x4($sp)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r29, 0X4);
    // 0x00461B20: lwr         $t2, 0x7($sp)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r29, 0X7);
    // 0x00461B24: swl         $t1, 0x0($a3)
    do_swl(rdram, 0X0, ctx->r7, ctx->r9);
    // 0x00461B28: swr         $t1, 0x3($a3)
    do_swr(rdram, 0X3, ctx->r7, ctx->r9);
    // 0x00461B2C: swl         $t2, 0x4($a3)
    do_swl(rdram, 0X4, ctx->r7, ctx->r10);
    // 0x00461B30: swr         $t2, 0x7($a3)
    do_swr(rdram, 0X7, ctx->r7, ctx->r10);
    // 0x00461B34: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x00461B38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00461B3C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00461B40: bne         $v0, $zero, L_00461B14
    if (ctx->r2 != 0) {
        // 0x00461B44: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_00461B14;
    }
    // 0x00461B44: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
L_00461B48:
    // 0x00461B48: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00461B4C: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x00461B50: jr          $ra
    // 0x00461B54: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00461B54: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00254D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254D5C: addiu       $sp, $sp, -0x4A0
    ctx->r29 = ADD32(ctx->r29, -0X4A0);
    // 0x00254D60: sw          $s6, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->r22;
    // 0x00254D64: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00254D68: sw          $ra, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r31;
    // 0x00254D6C: sw          $fp, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r30;
    // 0x00254D70: sw          $s7, 0x47C($sp)
    MEM_W(0X47C, ctx->r29) = ctx->r23;
    // 0x00254D74: sw          $s5, 0x474($sp)
    MEM_W(0X474, ctx->r29) = ctx->r21;
    // 0x00254D78: sw          $s4, 0x470($sp)
    MEM_W(0X470, ctx->r29) = ctx->r20;
    // 0x00254D7C: sw          $s3, 0x46C($sp)
    MEM_W(0X46C, ctx->r29) = ctx->r19;
    // 0x00254D80: sw          $s2, 0x468($sp)
    MEM_W(0X468, ctx->r29) = ctx->r18;
    // 0x00254D84: sw          $s1, 0x464($sp)
    MEM_W(0X464, ctx->r29) = ctx->r17;
    // 0x00254D88: sw          $s0, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r16;
    // 0x00254D8C: sdc1        $f22, 0x498($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X498, ctx->r29);
    // 0x00254D90: sdc1        $f21, 0x490($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X490, ctx->r29);
    // 0x00254D94: sdc1        $f20, 0x488($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X488, ctx->r29);
    // 0x00254D98: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00254D9C: beq         $v0, $zero, L_00254EE8
    if (ctx->r2 == 0) {
        // 0x00254DA0: addu        $fp, $a2, $zero
        ctx->r30 = ADD32(ctx->r6, 0);
            goto L_00254EE8;
    }
    // 0x00254DA0: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x00254DA4: addiu       $s4, $sp, 0x60
    ctx->r20 = ADD32(ctx->r29, 0X60);
    // 0x00254DA8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00254DAC: sw          $zero, 0x450($sp)
    MEM_W(0X450, ctx->r29) = 0;
    // 0x00254DB0: lwc1        $f0, 0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X8);
    // 0x00254DB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254DB8: lwc1        $f1, 0x712C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X712C);
    // 0x00254DBC: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
    // 0x00254DC0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00254DC4: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x00254DC8: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
    // 0x00254DCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254DD0: lwc1        $f22, 0x7130($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7130);
    // 0x00254DD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254DD8: lwc1        $f21, 0x7134($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7134);
    // 0x00254DDC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00254DE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254DE4: lwc1        $f0, 0x7138($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7138);
    // 0x00254DE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254DEC: lwc1        $f20, 0x713C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X713C);
    // 0x00254DF0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00254DF4: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x00254DF8: sw          $zero, 0x458($sp)
    MEM_W(0X458, ctx->r29) = 0;
    // 0x00254DFC: swc1        $f0, 0x454($sp)
    MEM_W(0X454, ctx->r29) = ctx->f0.u32l;
L_00254E00:
    // 0x00254E00: addu        $s0, $s6, $s3
    ctx->r16 = ADD32(ctx->r22, ctx->r19);
    // 0x00254E04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00254E08: beql        $v0, $s7, L_00254EC8
    if (ctx->r2 == ctx->r23) {
        // 0x00254E0C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00254EC8;
    }
    goto skip_0;
    // 0x00254E0C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00254E10: lw          $v0, 0x37C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X37C);
    // 0x00254E14: bne         $s2, $v0, L_00254E30
    if (ctx->r18 != ctx->r2) {
        // 0x00254E18: nop
    
            goto L_00254E30;
    }
    // 0x00254E18: nop

    // 0x00254E1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254E20: lwc1        $f0, -0x1D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1D28);
    // 0x00254E24: mul.s       $f14, $f0, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00254E28: j           L_00254E38
    // 0x00254E2C: nop

        goto L_00254E38;
    // 0x00254E2C: nop

L_00254E30:
    // 0x00254E30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254E34: lwc1        $f14, -0x1D28($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1D28);
L_00254E38:
    // 0x00254E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254E3C: lwc1        $f0, -0x1D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1D28);
    // 0x00254E40: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00254E44: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x00254E48: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00254E4C: jal         0x00211774
    // 0x00254E50: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00254E50: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    after_0:
    // 0x00254E54: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00254E58: jal         0x0020F79C
    // 0x00254E5C: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    func_0020F79C(rdram, ctx);
        goto after_1;
    // 0x00254E5C: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00254E60: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x00254E64: jal         0x00210B38
    // 0x00254E68: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210B38(rdram, ctx);
        goto after_2;
    // 0x00254E68: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00254E6C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00254E70: addiu       $a1, $sp, 0x450
    ctx->r5 = ADD32(ctx->r29, 0X450);
    // 0x00254E74: jal         0x0020F85C
    // 0x00254E78: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020F85C(rdram, ctx);
        goto after_3;
    // 0x00254E78: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x00254E7C: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    // 0x00254E80: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00254E84: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00254E88: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x00254E8C: sw          $v1, -0x14($s1)
    MEM_W(-0X14, ctx->r17) = ctx->r3;
    // 0x00254E90: sw          $t0, -0x10($s1)
    MEM_W(-0X10, ctx->r17) = ctx->r8;
    // 0x00254E94: sw          $t1, -0xC($s1)
    MEM_W(-0XC, ctx->r17) = ctx->r9;
    // 0x00254E98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00254E9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00254EA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254EA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00254EA8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00254EAC: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x00254EB0: addiu       $s4, $s4, 0x1C
    ctx->r20 = ADD32(ctx->r20, 0X1C);
    // 0x00254EB4: swc1        $f20, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f20.u32l;
    // 0x00254EB8: swc1        $f20, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f20.u32l;
    // 0x00254EBC: sw          $v0, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = ctx->r2;
    // 0x00254EC0: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x00254EC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00254EC8:
    // 0x00254EC8: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x00254ECC: bne         $v0, $zero, L_00254E00
    if (ctx->r2 != 0) {
        // 0x00254ED0: addiu       $s3, $s3, 0x18
        ctx->r19 = ADD32(ctx->r19, 0X18);
            goto L_00254E00;
    }
    // 0x00254ED0: addiu       $s3, $s3, 0x18
    ctx->r19 = ADD32(ctx->r19, 0X18);
    // 0x00254ED4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00254ED8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00254EDC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00254EE0: jal         0x0024AF68
    // 0x00254EE4: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    func_0024AF68(rdram, ctx);
        goto after_4;
    // 0x00254EE4: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    after_4:
L_00254EE8:
    // 0x00254EE8: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00254EEC: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00254EF0: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00254EF4: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x00254EF8: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00254EFC: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00254F00: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00254F04: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x00254F08: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00254F0C: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00254F10: ldc1        $f22, 0x498($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X498);
    // 0x00254F14: ldc1        $f21, 0x490($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X490);
    // 0x00254F18: ldc1        $f20, 0x488($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X488);
    // 0x00254F1C: jr          $ra
    // 0x00254F20: addiu       $sp, $sp, 0x4A0
    ctx->r29 = ADD32(ctx->r29, 0X4A0);
    return;
    // 0x00254F20: addiu       $sp, $sp, 0x4A0
    ctx->r29 = ADD32(ctx->r29, 0X4A0);
;}
RECOMP_FUNC void func_00265560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265560: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00265564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00265568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026556C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00265570: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00265574: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265578: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026557C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00265580: jal         0x00220408
    // 0x00265584: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00265584: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00265588: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0026558C: bne         $v0, $zero, L_002655A0
    if (ctx->r2 != 0) {
        // 0x00265590: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002655A0;
    }
    // 0x00265590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265594: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00265598: j           L_002655A8
    // 0x0026559C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_002655A8;
    // 0x0026559C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_002655A0:
    // 0x002655A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002655A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_002655A8:
    // 0x002655A8: jal         0x00243414
    // 0x002655AC: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002655AC: nop

    after_1:
    // 0x002655B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002655B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002655B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002655BC: jr          $ra
    // 0x002655C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002655C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
