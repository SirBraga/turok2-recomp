#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0045AD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AD40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045AD44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045AD48: sw          $v0, 0x9B8($at)
    MEM_W(0X9B8, ctx->r1) = ctx->r2;
    // 0x0045AD4C: jr          $ra
    // 0x0045AD50: nop

    return;
    // 0x0045AD50: nop

;}
RECOMP_FUNC void func_0044BD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412D1C:
    // 0x0044BD04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044BD08: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0044BD0C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0044BD10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044BD14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044BD18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044BD1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BD20: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044BD24: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044BD28: jal         0x002017D4
    // 0x0044BD2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BD2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044BD30: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044BD34: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044BD38: beq         $v0, $zero, L_0044BD90
    if (ctx->r2 == 0) {
        // 0x0044BD3C: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0044BD90;
    }
    // 0x0044BD3C: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0044BD40: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BD44: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044BD48: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044BD4C: jal         0x002017D4
    // 0x0044BD50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044BD50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0044BD54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BD58: jal         0x002017D4
    // 0x0044BD5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044BD5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044BD60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BD64: jal         0x002017D4
    // 0x0044BD68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0044BD68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0044BD6C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044BD70: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x0044BD74: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0044BD78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0044BD7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044BD80: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0044BD84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044BD88: j           L_00412D1C
    // 0x0044BD8C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    entry_00412D1C(rdram, ctx);
    return;
    // 0x0044BD8C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_0044BD90:
    // 0x0044BD90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044BD94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044BD98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0044BD9C: jr          $ra
    // 0x0044BDA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044BDA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042462C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042462C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424630: addiu       $v0, $v0, 0x4110
    ctx->r2 = ADD32(ctx->r2, 0X4110);
    // 0x00424634: jr          $ra
    // 0x00424638: nop

    return;
    // 0x00424638: nop

;}
RECOMP_FUNC void func_0026D2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D2D0: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0026D2D4: beq         $v1, $zero, L_0026D2E4
    if (ctx->r3 == 0) {
        // 0x0026D2D8: nop
    
            goto L_0026D2E4;
    }
    // 0x0026D2D8: nop

    // 0x0026D2DC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0026D2E0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0026D2E4:
    // 0x0026D2E4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0026D2E8: beq         $v1, $zero, L_0026D2F8
    if (ctx->r3 == 0) {
        // 0x0026D2EC: nop
    
            goto L_0026D2F8;
    }
    // 0x0026D2EC: nop

    // 0x0026D2F0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D2F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_0026D2F8:
    // 0x0026D2F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0026D2FC: bne         $v0, $a1, L_0026D30C
    if (ctx->r2 != ctx->r5) {
        // 0x0026D300: nop
    
            goto L_0026D30C;
    }
    // 0x0026D300: nop

    // 0x0026D304: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D308: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0026D30C:
    // 0x0026D30C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D310: bne         $v0, $a1, L_0026D320
    if (ctx->r2 != ctx->r5) {
        // 0x0026D314: nop
    
            goto L_0026D320;
    }
    // 0x0026D314: nop

    // 0x0026D318: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0026D31C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0026D320:
    // 0x0026D320: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D324: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0026D328: jr          $ra
    // 0x0026D32C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x0026D32C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00281C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281C08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281C0C: lwc1        $f0, -0x63D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63D0);
    // 0x00281C10: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x00281C14: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00281C18: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x00281C1C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x00281C20: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00281C24: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00281C28: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00281C2C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00281C30: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00281C34: addiu       $v0, $a0, 0x2C
    ctx->r2 = ADD32(ctx->r4, 0X2C);
    // 0x00281C38: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x00281C3C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00281C40: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00281C44: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00281C48: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x00281C4C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00281C50: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00281C54: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x00281C58: jr          $ra
    // 0x00281C5C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    return;
    // 0x00281C5C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00283A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283A4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00283A50: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00283A54: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x00283A58: addiu       $s4, $s4, 0x7078
    ctx->r20 = ADD32(ctx->r20, 0X7078);
    // 0x00283A5C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00283A60: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x00283A64: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00283A68: lw          $v0, -0x5378($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5378);
    // 0x00283A6C: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x00283A70: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00283A74: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00283A78: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00283A7C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00283A80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00283A84: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00283A88: lw          $s1, 0xBC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XBC);
    // 0x00283A8C: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x00283A90: beq         $v0, $v1, L_00283AB0
    if (ctx->r2 == ctx->r3) {
        // 0x00283A94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00283AB0;
    }
    // 0x00283A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00283A98: sw          $v0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r2;
    // 0x00283A9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00283AA0: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    // 0x00283AA4: sw          $v0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r2;
    // 0x00283AA8: j           L_00283B9C
    // 0x00283AAC: sw          $v0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r2;
        goto L_00283B9C;
    // 0x00283AAC: sw          $v0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r2;
L_00283AB0:
    // 0x00283AB0: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x00283AB4: bne         $v0, $zero, L_00283B9C
    if (ctx->r2 != 0) {
        // 0x00283AB8: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_00283B9C;
    }
    // 0x00283AB8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00283ABC: beq         $s1, $s2, L_00283B9C
    if (ctx->r17 == ctx->r18) {
        // 0x00283AC0: nop
    
            goto L_00283B9C;
    }
    // 0x00283AC0: nop

    // 0x00283AC4: beq         $a1, $s2, L_00283B9C
    if (ctx->r5 == ctx->r18) {
        // 0x00283AC8: nop
    
            goto L_00283B9C;
    }
    // 0x00283AC8: nop

    // 0x00283ACC: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x00283AD0: beq         $v0, $zero, L_00283B9C
    if (ctx->r2 == 0) {
        // 0x00283AD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00283B9C;
    }
    // 0x00283AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00283AD8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283ADC: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283AE0: sw          $v0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r2;
    // 0x00283AE4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00283AE8: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x00283AEC: lw          $a3, 0xC4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XC4);
    // 0x00283AF0: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x00283AF4: lw          $t1, 0xCC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XCC);
    // 0x00283AF8: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x00283AFC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00283B00: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00283B04: lwc1        $f20, 0xD0($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XD0);
    // 0x00283B08: lw          $s3, 0xD4($v1)
    ctx->r19 = MEM_W(ctx->r3, 0XD4);
    // 0x00283B0C: beq         $v0, $a1, L_00283B1C
    if (ctx->r2 == ctx->r5) {
        // 0x00283B10: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00283B1C;
    }
    // 0x00283B10: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00283B14: jal         0x0042AC0C
    // 0x00283B18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0042AC0C(rdram, ctx);
        goto after_0;
    // 0x00283B18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_00283B1C:
    // 0x00283B1C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00283B20: lw          $s0, -0x6770($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6770);
    // 0x00283B24: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00283B28: sw          $zero, 0x24($at)
    MEM_W(0X24, ctx->r1) = 0;
    // 0x00283B2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00283B30: sw          $zero, 0x28($at)
    MEM_W(0X28, ctx->r1) = 0;
    // 0x00283B34: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00283B38: sw          $zero, 0x2C($at)
    MEM_W(0X2C, ctx->r1) = 0;
    // 0x00283B3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00283B40: sw          $s1, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r17;
    // 0x00283B44: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00283B48: sw          $s1, 0x4C($at)
    MEM_W(0X4C, ctx->r1) = ctx->r17;
    // 0x00283B4C: beq         $s0, $zero, L_00283B88
    if (ctx->r16 == 0) {
        // 0x00283B50: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00283B88;
    }
    // 0x00283B50: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00283B54: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00283B58: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x00283B5C: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00283B60: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00283B64: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x00283B68: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x00283B6C: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
    // 0x00283B70: jal         0x002242F8
    // 0x00283B74: swc1        $f20, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f20.u32l;
    func_002242F8(rdram, ctx);
        goto after_1;
    // 0x00283B74: swc1        $f20, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f20.u32l;
    after_1:
    // 0x00283B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00283B7C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00283B80: jal         0x0024CF58
    // 0x00283B84: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    func_0024CF58(rdram, ctx);
        goto after_2;
    // 0x00283B84: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    after_2:
L_00283B88:
    // 0x00283B88: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283B8C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00283B90: sw          $zero, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = 0;
    // 0x00283B94: sw          $s2, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r18;
    // 0x00283B98: sw          $s2, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->r18;
L_00283B9C:
    // 0x00283B9C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00283BA0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00283BA4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00283BA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00283BAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00283BB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00283BB4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00283BB8: jr          $ra
    // 0x00283BBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00283BBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00418A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418A8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00418A90: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00418A94: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00418A98: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00418A9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00418AA0: lb          $v0, 0x20($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X20);
    // 0x00418AA4: beq         $v0, $zero, L_00418AD8
    if (ctx->r2 == 0) {
        // 0x00418AA8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00418AD8;
    }
    // 0x00418AA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00418AAC: jal         0x004160F0
    // 0x00418AB0: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00418AB0: nop

    after_0:
    // 0x00418AB4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418AB8: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00418ABC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418AC0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418AC4: lb          $a2, 0x20($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X20);
    // 0x00418AC8: jal         0x0029E3E0
    // 0x00418ACC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00418ACC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00418AD0: j           L_00418AF8
    // 0x00418AD4: nop

        goto L_00418AF8;
    // 0x00418AD4: nop

L_00418AD8:
    // 0x00418AD8: jal         0x004160F0
    // 0x00418ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00418ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00418AE0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418AE4: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00418AE8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00418AEC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418AF0: jal         0x0029E3E0
    // 0x00418AF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00418AF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_00418AF8:
    // 0x00418AF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00418AFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418B00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418B04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418B08: jr          $ra
    // 0x00418B0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418B0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00444AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444AB8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444ABC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00444AC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444AC4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444AC8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444ACC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444AD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00444AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444AD8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00444ADC: jal         0x00246108
    // 0x00444AE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444AE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444AE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444AE8: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444AEC: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444AF0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444AF4: jal         0x00245BAC
    // 0x00444AF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444AF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444AFC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444B00: beq         $v0, $zero, L_00444B14
    if (ctx->r2 == 0) {
        // 0x00444B04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444B14;
    }
    // 0x00444B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444B08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444B0C: jal         0x00243414
    // 0x00444B10: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444B10: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_00444B14:
    // 0x00444B14: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444B18: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444B1C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444B20: jr          $ra
    // 0x00444B24: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444B24: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002389EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002389EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002389F0: lh          $v0, 0x4E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4E);
    // 0x002389F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002389F8: lwc1        $f1, 0x65D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65D0);
    // 0x002389FC: lh          $v1, 0x4A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X4A);
    // 0x00238A00: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x00238A04: lh          $a3, 0x4C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X4C);
    // 0x00238A08: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00238A0C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00238A10: lh          $v0, 0x48($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X48);
    // 0x00238A14: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00238A18: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00238A1C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00238A20: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00238A24: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x00238A28: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00238A2C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00238A30: mtc1        $a3, $f2
    ctx->f2.u32l = ctx->r7;
    // 0x00238A34: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00238A38: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x00238A3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00238A40: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00238A44: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00238A48: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00238A4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00238A50: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x00238A54: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x00238A58: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x00238A5C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00238A60: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00238A64: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00238A68: jal         0x0028135C
    // 0x00238A6C: nop

    func_0028135C(rdram, ctx);
        goto after_0;
    // 0x00238A6C: nop

    after_0:
    // 0x00238A70: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00238A74: jr          $ra
    // 0x00238A78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00238A78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025C338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025C338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025C33C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025C340: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025C344: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0025C348: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0025C34C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025C350: beql        $v0, $zero, L_0025C424
    if (ctx->r2 == 0) {
        // 0x0025C354: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025C424;
    }
    goto skip_0;
    // 0x0025C354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0025C358: lwc1        $f0, 0x134($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X134);
    // 0x0025C35C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C360: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C364: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0025C368: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025C36C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025C370: nop

    // 0x0025C374: bc1f        L_0025C39C
    if (!c1cs) {
        // 0x0025C378: swc1        $f0, 0x134($a1)
        MEM_W(0X134, ctx->r5) = ctx->f0.u32l;
            goto L_0025C39C;
    }
    // 0x0025C378: swc1        $f0, 0x134($a1)
    MEM_W(0X134, ctx->r5) = ctx->f0.u32l;
    // 0x0025C37C: lwc1        $f0, 0x138($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X138);
    // 0x0025C380: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0025C384: swc1        $f1, 0x134($a1)
    MEM_W(0X134, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025C388: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025C38C: nop

    // 0x0025C390: bc1f        L_0025C39C
    if (!c1cs) {
        // 0x0025C394: swc1        $f0, 0x138($a1)
        MEM_W(0X138, ctx->r5) = ctx->f0.u32l;
            goto L_0025C39C;
    }
    // 0x0025C394: swc1        $f0, 0x138($a1)
    MEM_W(0X138, ctx->r5) = ctx->f0.u32l;
    // 0x0025C398: swc1        $f1, 0x138($a1)
    MEM_W(0X138, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_0025C39C:
    // 0x0025C39C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0025C3A0: beq         $v0, $zero, L_0025C424
    if (ctx->r2 == 0) {
        // 0x0025C3A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025C424;
    }
    // 0x0025C3A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025C3A8: lwc1        $f0, 0x134($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X134);
    // 0x0025C3AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025C3B0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025C3B4: nop

    // 0x0025C3B8: bc1f        L_0025C424
    if (!c1cs) {
        // 0x0025C3BC: nop
    
            goto L_0025C424;
    }
    // 0x0025C3BC: nop

    // 0x0025C3C0: lwc1        $f0, 0x138($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X138);
    // 0x0025C3C4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025C3C8: nop

    // 0x0025C3CC: bc1f        L_0025C420
    if (!c1cs) {
        // 0x0025C3D0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0025C420;
    }
    // 0x0025C3D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025C3D4: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x0025C3D8: beq         $v1, $v0, L_0025C410
    if (ctx->r3 == ctx->r2) {
        // 0x0025C3DC: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_0025C410;
    }
    // 0x0025C3DC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0025C3E0: beq         $v1, $v0, L_0025C410
    if (ctx->r3 == ctx->r2) {
        // 0x0025C3E4: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_0025C410;
    }
    // 0x0025C3E4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0025C3E8: beq         $v1, $v0, L_0025C410
    if (ctx->r3 == ctx->r2) {
        // 0x0025C3EC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0025C410;
    }
    // 0x0025C3EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0025C3F0: beq         $v1, $v0, L_0025C410
    if (ctx->r3 == ctx->r2) {
        // 0x0025C3F4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0025C410;
    }
    // 0x0025C3F4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0025C3F8: beq         $v1, $v0, L_0025C410
    if (ctx->r3 == ctx->r2) {
        // 0x0025C3FC: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_0025C410;
    }
    // 0x0025C3FC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0025C400: beq         $v1, $v0, L_0025C410
    if (ctx->r3 == ctx->r2) {
        // 0x0025C404: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0025C410;
    }
    // 0x0025C404: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0025C408: bne         $v1, $v0, L_0025C424
    if (ctx->r3 != ctx->r2) {
        // 0x0025C40C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025C424;
    }
    // 0x0025C40C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025C410:
    // 0x0025C410: jal         0x00243414
    // 0x0025C414: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025C414: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_0:
    // 0x0025C418: j           L_0025C424
    // 0x0025C41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0025C424;
    // 0x0025C41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025C420:
    // 0x0025C420: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025C424:
    // 0x0025C424: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025C428: jr          $ra
    // 0x0025C42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025C42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A2D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A2DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A2E0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A2E4: lhu         $a3, 0x9A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X9A);
    // 0x0025A2E8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A2EC: addiu       $a2, $a2, -0x298
    ctx->r6 = ADD32(ctx->r6, -0X298);
    // 0x0025A2F0: jal         0x00245A98
    // 0x0025A2F4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A2F4: nop

    after_0:
    // 0x0025A2F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A2FC: jr          $ra
    // 0x0025A300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00403494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403498: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0040349C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004034A0: lw          $v0, 0x214($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X214);
    // 0x004034A4: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x004034A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004034AC: beq         $v1, $v0, L_004034D4
    if (ctx->r3 == ctx->r2) {
        // 0x004034B0: nop
    
            goto L_004034D4;
    }
    // 0x004034B0: nop

    // 0x004034B4: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x004034B8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004034BC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x004034C0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004034C4: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x004034C8: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x004034CC: jal         0x00236314
    // 0x004034D0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x004034D0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
L_004034D4:
    // 0x004034D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004034D8: jr          $ra
    // 0x004034DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004034DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00246310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246310: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00246314: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00246318: lwc1        $f1, 0x44($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x0024631C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00246320: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00246324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00246328: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x0024632C: sdc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X30, ctx->r29);
    // 0x00246330: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x00246334: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x00246338: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0024633C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x00246340: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x00246344: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00246348: sub.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024634C: mul.s       $f2, $f22, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x00246350: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x00246354: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00246358: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024635C: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x00246360: jal         0x00298470
    // 0x00246364: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00246364: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_0:
    // 0x00246368: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024636C: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x00246370: c.eq.s      $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f23.fl == ctx->f1.fl;
    // 0x00246374: nop

    // 0x00246378: bc1t        L_0024641C
    if (c1cs) {
        // 0x0024637C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0024641C;
    }
    // 0x0024637C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00246380: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00246384: jal         0x002982F0
    // 0x00246388: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00246388: nop

    after_1:
    // 0x0024638C: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00246390: jal         0x002974C0
    // 0x00246394: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00246394: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x00246398: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x0024639C: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x002463A0: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    // 0x002463A4: mul.s       $f0, $f21, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f24.fl);
    // 0x002463A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002463AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002463B0: lwc1        $f2, 0x6974($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6974);
    // 0x002463B4: div.s       $f12, $f1, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f23.fl);
    // 0x002463B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002463BC: nop

    // 0x002463C0: bc1tl       L_002463F0
    if (c1cs) {
        // 0x002463C4: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002463F0;
    }
    goto skip_0;
    // 0x002463C4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_0:
    // 0x002463C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002463CC: lwc1        $f0, 0x6978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6978);
    // 0x002463D0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002463D4: nop

    // 0x002463D8: bc1tl       L_002463F0
    if (c1cs) {
        // 0x002463DC: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_002463F0;
    }
    goto skip_1;
    // 0x002463DC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_1:
    // 0x002463E0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002463E4: nop

    // 0x002463E8: bc1tl       L_002463F0
    if (c1cs) {
        // 0x002463EC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_002463F0;
    }
    goto skip_2;
    // 0x002463EC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_2:
L_002463F0:
    // 0x002463F0: jal         0x0021153C
    // 0x002463F4: nop

    func_0021153C(rdram, ctx);
        goto after_3;
    // 0x002463F4: nop

    after_3:
    // 0x002463F8: mul.s       $f1, $f22, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x002463FC: nop

    // 0x00246400: mul.s       $f2, $f21, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x00246404: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00246408: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024640C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00246410: nop

    // 0x00246414: bc1fl       L_0024641C
    if (!c1cs) {
        // 0x00246418: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0024641C;
    }
    goto skip_3;
    // 0x00246418: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_3:
L_0024641C:
    // 0x0024641C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00246420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00246424: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x00246428: ldc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X30);
    // 0x0024642C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x00246430: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00246434: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00246438: jr          $ra
    // 0x0024643C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0024643C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00217CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217CC8: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x00217CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217CD0: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217CD4: addiu       $a3, $v0, -0x1
    ctx->r7 = ADD32(ctx->r2, -0X1);
    // 0x00217CD8: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x00217CDC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00217CE0: and         $a2, $a2, $a3
    ctx->r6 = ctx->r6 & ctx->r7;
    // 0x00217CE4: andi        $v0, $t0, 0x1F
    ctx->r2 = ctx->r8 & 0X1F;
    // 0x00217CE8: bne         $v0, $zero, L_00217D00
    if (ctx->r2 != 0) {
        // 0x00217CEC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00217D00;
    }
    // 0x00217CEC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00217CF0: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x00217CF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00217CF8: j           L_00217D18
    // 0x00217CFC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
        goto L_00217D18;
    // 0x00217CFC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_00217D00:
    // 0x00217D00: sllv        $v1, $a3, $a0
    ctx->r3 = S32(ctx->r7 << (ctx->r4 & 31));
    // 0x00217D04: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00217D08: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00217D0C: srlv        $a3, $a3, $v0
    ctx->r7 = S32(U32(ctx->r7) >> (ctx->r2 & 31));
    // 0x00217D10: sllv        $t1, $a2, $a0
    ctx->r9 = S32(ctx->r6 << (ctx->r4 & 31));
    // 0x00217D14: srlv        $a2, $a2, $v0
    ctx->r6 = S32(U32(ctx->r6) >> (ctx->r2 & 31));
L_00217D18:
    // 0x00217D18: lui         $v0, 0xFFF
    ctx->r2 = S32(0XFFF << 16);
    // 0x00217D1C: ori         $v0, $v0, 0xFFE0
    ctx->r2 = ctx->r2 | 0XFFE0;
    // 0x00217D20: lui         $a0, 0xF000
    ctx->r4 = S32(0XF000 << 16);
    // 0x00217D24: and         $a0, $t0, $a0
    ctx->r4 = ctx->r8 & ctx->r4;
    // 0x00217D28: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x00217D2C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00217D30: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00217D34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00217D38: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00217D3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00217D40: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x00217D44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00217D48: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00217D4C: nor         $v1, $zero, $a3
    ctx->r3 = ~(0 | ctx->r7);
    // 0x00217D50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00217D54: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00217D58: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00217D5C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x00217D60: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00217D64: jr          $ra
    // 0x00217D68: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    return;
    // 0x00217D68: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
;}
RECOMP_FUNC void func_00244E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00244E84: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x00244E88: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00244E8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00244E90: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00244E94: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x00244E98: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x00244E9C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00244EA0: sdc1        $f26, 0x88($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X88, ctx->r29);
    // 0x00244EA4: sdc1        $f25, 0x80($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X80, ctx->r29);
    // 0x00244EA8: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x00244EAC: sdc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X70, ctx->r29);
    // 0x00244EB0: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x00244EB4: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x00244EB8: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x00244EBC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x00244EC0: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x00244EC4: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x00244EC8: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x00244ECC: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x00244ED0: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x00244ED4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x00244ED8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00244EDC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00244EE0: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00244EE4: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00244EE8: sub.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00244EEC: mul.s       $f2, $f22, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x00244EF0: lwc1        $f1, 0x34($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x00244EF4: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00244EF8: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00244EFC: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x00244F00: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00244F04: lwc1        $f25, 0xA4($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x00244F08: jal         0x00298470
    // 0x00244F0C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00244F0C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_0:
    // 0x00244F10: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00244F14: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x00244F18: c.eq.s      $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f23.fl == ctx->f1.fl;
    // 0x00244F1C: nop

    // 0x00244F20: bc1f        L_00244F30
    if (!c1cs) {
        // 0x00244F24: nop
    
            goto L_00244F30;
    }
    // 0x00244F24: nop

    // 0x00244F28: j           L_00244FD0
    // 0x00244F2C: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
        goto L_00244FD0;
    // 0x00244F2C: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
L_00244F30:
    // 0x00244F30: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00244F34: jal         0x002982F0
    // 0x00244F38: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00244F38: nop

    after_1:
    // 0x00244F3C: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00244F40: jal         0x002974C0
    // 0x00244F44: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00244F44: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x00244F48: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x00244F4C: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x00244F50: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    // 0x00244F54: mul.s       $f0, $f21, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f24.fl);
    // 0x00244F58: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00244F5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00244F60: lwc1        $f2, 0x6928($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6928);
    // 0x00244F64: div.s       $f12, $f1, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f23.fl);
    // 0x00244F68: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x00244F6C: nop

    // 0x00244F70: bc1tl       L_00244FA0
    if (c1cs) {
        // 0x00244F74: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_00244FA0;
    }
    goto skip_0;
    // 0x00244F74: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_0:
    // 0x00244F78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00244F7C: lwc1        $f0, 0x692C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X692C);
    // 0x00244F80: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x00244F84: nop

    // 0x00244F88: bc1tl       L_00244FA0
    if (c1cs) {
        // 0x00244F8C: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_00244FA0;
    }
    goto skip_1;
    // 0x00244F8C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_1:
    // 0x00244F90: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x00244F94: nop

    // 0x00244F98: bc1tl       L_00244FA0
    if (c1cs) {
        // 0x00244F9C: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_00244FA0;
    }
    goto skip_2;
    // 0x00244F9C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_2:
L_00244FA0:
    // 0x00244FA0: jal         0x0021153C
    // 0x00244FA4: nop

    func_0021153C(rdram, ctx);
        goto after_3;
    // 0x00244FA4: nop

    after_3:
    // 0x00244FA8: mul.s       $f1, $f22, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x00244FAC: nop

    // 0x00244FB0: mul.s       $f2, $f21, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x00244FB4: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00244FB8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00244FBC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00244FC0: nop

    // 0x00244FC4: bc1fl       L_00244FCC
    if (!c1cs) {
        // 0x00244FC8: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_00244FCC;
    }
    goto skip_3;
    // 0x00244FC8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_3:
L_00244FCC:
    // 0x00244FCC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_00244FD0:
    // 0x00244FD0: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00244FD4: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00244FD8: beq         $v0, $zero, L_00245170
    if (ctx->r2 == 0) {
        // 0x00244FDC: addiu       $v0, $sp, 0x38
        ctx->r2 = ADD32(ctx->r29, 0X38);
            goto L_00245170;
    }
    // 0x00244FDC: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x00244FE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00244FE4: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x00244FE8: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x00244FEC: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x00244FF0: jal         0x0026961C
    // 0x00244FF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026961C(rdram, ctx);
        goto after_4;
    // 0x00244FF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00244FF8: beq         $v0, $zero, L_00245174
    if (ctx->r2 == 0) {
        // 0x00244FFC: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_00245174;
    }
    // 0x00244FFC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x00245000: beq         $s0, $zero, L_00245040
    if (ctx->r16 == 0) {
        // 0x00245004: nop
    
            goto L_00245040;
    }
    // 0x00245004: nop

    // 0x00245008: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0024500C: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x00245010: beq         $v0, $s0, L_00245174
    if (ctx->r2 == ctx->r16) {
        // 0x00245014: nop
    
            goto L_00245174;
    }
    // 0x00245014: nop

    // 0x00245018: j           L_00245040
    // 0x0024501C: nop

        goto L_00245040;
    // 0x0024501C: nop

L_00245020:
    // 0x00245020: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x00245024: add.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f23.fl;
    // 0x00245028: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x0024502C: jal         0x00210EF0
    // 0x00245030: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_5;
    // 0x00245030: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x00245034: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x00245038: j           L_00245174
    // 0x0024503C: nop

        goto L_00245174;
    // 0x0024503C: nop

L_00245040:
    // 0x00245040: lui         $v0, 0xCA45
    ctx->r2 = S32(0XCA45 << 16);
    // 0x00245044: ori         $v0, $v0, 0x87E7
    ctx->r2 = ctx->r2 | 0X87E7;
    // 0x00245048: multu       $s1, $v0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024504C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245050: lwc1        $f26, 0x6930($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X6930);
    // 0x00245054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245058: lwc1        $f24, 0x6934($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6934);
    // 0x0024505C: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00245060: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00245064: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x00245068: mfhi        $t0
    ctx->r8 = hi;
    // 0x0024506C: srl         $v1, $t0, 9
    ctx->r3 = S32(U32(ctx->r8) >> 9);
    // 0x00245070: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00245074: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00245078: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0024507C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00245080: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00245084: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x00245088: and         $s3, $v0, $s2
    ctx->r19 = ctx->r2 & ctx->r18;
    // 0x0024508C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00245090:
    // 0x00245090: mtc1        $s2, $f0
    ctx->f0.u32l = ctx->r18;
    // 0x00245094: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00245098: mul.s       $f21, $f0, $f26
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
L_0024509C:
    // 0x0024509C: beq         $s0, $s3, L_002450B4
    if (ctx->r16 == ctx->r19) {
        // 0x002450A0: swc1        $f22, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
            goto L_002450B4;
    }
    // 0x002450A0: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x002450A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002450A8: lwc1        $f23, 0x6938($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6938);
    // 0x002450AC: j           L_002450C0
    // 0x002450B0: add.s       $f0, $f22, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f21.fl;
        goto L_002450C0;
    // 0x002450B0: add.s       $f0, $f22, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f21.fl;
L_002450B4:
    // 0x002450B4: sub.s       $f0, $f22, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f21.fl;
    // 0x002450B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002450BC: lwc1        $f23, 0x693C($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X693C);
L_002450C0:
    // 0x002450C0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x002450C4: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x002450C8: add.s       $f12, $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x002450CC: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x002450D0: jal         0x002982F0
    // 0x002450D4: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x002450D4: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_6:
    // 0x002450D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002450DC: jal         0x002672C8
    // 0x002450E0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_7;
    // 0x002450E0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_7:
    // 0x002450E4: mul.s       $f0, $f25, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f25.fl, ctx->f0.fl);
    // 0x002450E8: nop

    // 0x002450EC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002450F0: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x002450F4: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x002450F8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x002450FC: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245100: add.s       $f12, $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x00245104: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x00245108: jal         0x002974C0
    // 0x0024510C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x0024510C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_8:
    // 0x00245110: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00245114: jal         0x002672C8
    // 0x00245118: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_9;
    // 0x00245118: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_9:
    // 0x0024511C: mul.s       $f0, $f25, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f25.fl, ctx->f0.fl);
    // 0x00245120: nop

    // 0x00245124: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00245128: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0024512C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00245130: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00245134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00245138: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0024513C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00245140: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00245144: jal         0x0026961C
    // 0x00245148: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026961C(rdram, ctx);
        goto after_10;
    // 0x00245148: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0024514C: beq         $v0, $zero, L_00245020
    if (ctx->r2 == 0) {
        // 0x00245150: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00245020;
    }
    // 0x00245150: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00245154: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x00245158: bne         $v0, $zero, L_0024509C
    if (ctx->r2 != 0) {
        // 0x0024515C: nop
    
            goto L_0024509C;
    }
    // 0x0024515C: nop

    // 0x00245160: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00245164: slti        $v0, $s2, 0x6
    ctx->r2 = SIGNED(ctx->r18) < 0X6 ? 1 : 0;
    // 0x00245168: bne         $v0, $zero, L_00245090
    if (ctx->r2 != 0) {
        // 0x0024516C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00245090;
    }
    // 0x0024516C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00245170:
    // 0x00245170: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_00245174:
    // 0x00245174: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00245178: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0024517C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00245180: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00245184: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00245188: ldc1        $f26, 0x88($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X88);
    // 0x0024518C: ldc1        $f25, 0x80($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X80);
    // 0x00245190: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x00245194: ldc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X70);
    // 0x00245198: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x0024519C: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x002451A0: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x002451A4: jr          $ra
    // 0x002451A8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x002451A8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_002971BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002971BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002971C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002971C4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002971C8: lui         $v1, 0xB00
    ctx->r3 = S32(0XB00 << 16);
    // 0x002971CC: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x002971D0: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x002971D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002971D8: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x002971DC: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x002971E0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x002971E4: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x002971E8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x002971EC: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x002971F0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x002971F4: or          $a1, $a1, $a2
    ctx->r5 = ctx->r5 | ctx->r6;
    // 0x002971F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002971FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00297200: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00297204: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x00297208: jal         0x0029BF80
    // 0x0029720C: sw          $v1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r3;
    func_0029BF80(rdram, ctx);
        goto after_0;
    // 0x0029720C: sw          $v1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r3;
    after_0:
    // 0x00297210: lui         $a0, 0xE00
    ctx->r4 = S32(0XE00 << 16);
    // 0x00297214: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00297218: lbu         $v1, 0x2F($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X2F);
    // 0x0029721C: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x00297220: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00297224: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00297228: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029722C: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00297230: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x00297234: jal         0x0029BF80
    // 0x00297238: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0029BF80(rdram, ctx);
        goto after_1;
    // 0x00297238: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_1:
    // 0x0029723C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00297240: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00297244: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
    // 0x00297248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0029724C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00297250: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00297254: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00297258: jr          $ra
    // 0x0029725C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029725C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045C5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004235E8:
    // 0x0045C5B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0042366C:
    // 0x0045C5B4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C5B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045C5BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045C5C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045C5C4: beq         $v0, $zero, L_0045C5DC
    if (ctx->r2 == 0) {
        // 0x0045C5C8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_0045C5DC;
    }
    // 0x0045C5C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045C5CC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045C5D0: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045C5D4: j           L_004235E8
    // 0x0045C5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_004235E8(rdram, ctx);
    return;
    // 0x0045C5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0045C5DC:
    // 0x0045C5DC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C5E0: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045C5E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C5E8: jal         0x0041DCB0
    // 0x0045C5EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DCB0(rdram, ctx);
        goto after_0;
    // 0x0045C5EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0045C5F0: beq         $v0, $zero, L_0045C64C
    if (ctx->r2 == 0) {
        // 0x0045C5F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045C64C;
    }
    // 0x0045C5F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C5F8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0045C5FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C600: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0045C604: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C608: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x0045C60C: beq         $v1, $v0, L_0045C624
    if (ctx->r3 == ctx->r2) {
        // 0x0045C610: nop
    
            goto L_0045C624;
    }
    // 0x0045C610: nop

    // 0x0045C614: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045C618: addiu       $v0, $v0, -0x4210
    ctx->r2 = ADD32(ctx->r2, -0X4210);
    // 0x0045C61C: bnel        $v1, $v0, L_0045C630
    if (ctx->r3 != ctx->r2) {
        // 0x0045C620: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0045C630;
    }
    goto skip_0;
    // 0x0045C620: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_0045C624:
    // 0x0045C624: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C628: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045C62C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0045C630:
    // 0x0045C630: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x0045C634: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C638: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0045C63C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045C640: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045C644: j           L_0042366C
    // 0x0045C648: nop

    entry_0042366C(rdram, ctx);
    return;
    // 0x0045C648: nop

L_0045C64C:
    // 0x0045C64C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0045C650: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045C654: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045C658: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045C65C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0045C660: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0045C664: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045C668: addiu       $a1, $a1, -0x3F40
    ctx->r5 = ADD32(ctx->r5, -0X3F40);
    // 0x0045C66C: jal         0x00416644
    // 0x0045C670: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0045C670: nop

    after_1:
    // 0x0045C674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045C67C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045C680: jr          $ra
    // 0x0045C684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045C684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00264574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264578: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026457C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00264580: addiu       $t0, $v0, 0x14
    ctx->r8 = ADD32(ctx->r2, 0X14);
    // 0x00264584: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
    // 0x00264588: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0026458C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x00264590: beq         $v0, $zero, L_002645A8
    if (ctx->r2 == 0) {
        // 0x00264594: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_002645A8;
    }
    // 0x00264594: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00264598: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0026459C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x002645A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002645A4: sltu        $a2, $v0, $a2
    ctx->r6 = ctx->r2 < ctx->r6 ? 1 : 0;
L_002645A8:
    // 0x002645A8: andi        $v0, $a3, 0x4000
    ctx->r2 = ctx->r7 & 0X4000;
    // 0x002645AC: beq         $v0, $zero, L_002645C4
    if (ctx->r2 == 0) {
        // 0x002645B0: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_002645C4;
    }
    // 0x002645B0: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x002645B4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002645B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002645BC: beql        $v0, $zero, L_002645C4
    if (ctx->r2 == 0) {
        // 0x002645C0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002645C4;
    }
    goto skip_0;
    // 0x002645C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_0:
L_002645C4:
    // 0x002645C4: beq         $a2, $zero, L_002645E8
    if (ctx->r6 == 0) {
        // 0x002645C8: nop
    
            goto L_002645E8;
    }
    // 0x002645C8: nop

    // 0x002645CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002645D0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002645D4: lwc1        $f2, 0x38($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X38);
    // 0x002645D8: lwc1        $f1, 0x64($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X64);
    // 0x002645DC: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002645E0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002645E4: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_002645E8:
    // 0x002645E8: lwc1        $f1, 0x64($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X64);
    // 0x002645EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002645F0: lwc1        $f0, 0x7C34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C34);
    // 0x002645F4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002645F8: nop

    // 0x002645FC: bc1f        L_0026460C
    if (!c1cs) {
        // 0x00264600: nop
    
            goto L_0026460C;
    }
    // 0x00264600: nop

    // 0x00264604: jal         0x00243414
    // 0x00264608: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00264608: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0026460C:
    // 0x0026460C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264610: jr          $ra
    // 0x00264614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041E500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E500: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0041E504: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x0041E508: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0041E50C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041E510: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0041E514: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x0041E518: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x0041E51C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x0041E520: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0041E524: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0041E528: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E52C: sw          $zero, 0x984($at)
    MEM_W(0X984, ctx->r1) = 0;
    // 0x0041E530: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E534: sw          $s0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r16;
    // 0x0041E538: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E53C: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x0041E540: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E544: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x0041E548: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E54C: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x0041E550: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E554: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x0041E558: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E55C: sw          $s0, 0x990($at)
    MEM_W(0X990, ctx->r1) = ctx->r16;
    // 0x0041E560: jal         0x00285998
    // 0x0041E564: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    func_00285998(rdram, ctx);
        goto after_0;
    // 0x0041E564: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0041E568: bne         $v0, $zero, L_0041E5BC
    if (ctx->r2 != 0) {
        // 0x0041E56C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0041E5BC;
    }
    // 0x0041E56C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041E570: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E574: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E578: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E57C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E580: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E584: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E588: addiu       $a1, $a1, -0x4304
    ctx->r5 = ADD32(ctx->r5, -0X4304);
    // 0x0041E58C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E590: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // 0x0041E594: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E598: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x0041E59C: jal         0x00416644
    // 0x0041E5A0: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0041E5A0: nop

    after_1:
    // 0x0041E5A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E5A8: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x0041E5AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E5B0: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041E5B4: j           L_0041EA5C
    // 0x0041E5B8: nop

        goto L_0041EA5C;
    // 0x0041E5B8: nop

L_0041E5BC:
    // 0x0041E5BC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041E5C0: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0041E5C4: bne         $v1, $v0, L_0041E628
    if (ctx->r3 != ctx->r2) {
        // 0x0041E5C8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E628;
    }
    // 0x0041E5C8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E5CC: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0041E5D0: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_0041E5D4:
    // 0x0041E5D4: jal         0x00426480
    // 0x0041E5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_2;
    // 0x0041E5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041E5DC: jal         0x0042655C
    // 0x0041E5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_3;
    // 0x0041E5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041E5E4: bne         $v0, $s2, L_0041E60C
    if (ctx->r2 != ctx->r18) {
        // 0x0041E5E8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0041E60C;
    }
    // 0x0041E5E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0041E5EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E5F0: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041E5F4: beql        $v0, $zero, L_0041E5FC
    if (ctx->r2 == 0) {
        // 0x0041E5F8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E5FC;
    }
    goto skip_0;
    // 0x0041E5F8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0041E5FC:
    // 0x0041E5FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041E600: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0041E604: bne         $v0, $zero, L_0041E5D4
    if (ctx->r2 != 0) {
        // 0x0041E608: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0041E5D4;
    }
    // 0x0041E608: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0041E60C:
    // 0x0041E60C: beql        $s1, $v0, L_0041E614
    if (ctx->r17 == ctx->r2) {
        // 0x0041E610: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0041E614;
    }
    goto skip_1;
    // 0x0041E610: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_1:
L_0041E614:
    // 0x0041E614: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E618: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x0041E61C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041E620: beq         $s0, $v0, L_0041E7FC
    if (ctx->r16 == ctx->r2) {
        // 0x0041E624: nop
    
            goto L_0041E7FC;
    }
    // 0x0041E624: nop

L_0041E628:
    // 0x0041E628: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E62C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E630: jal         0x00426BD8
    // 0x0041E634: nop

    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041E634: nop

    after_4:
    // 0x0041E638: bne         $v0, $zero, L_0041E9F0
    if (ctx->r2 != 0) {
        // 0x0041E63C: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E63C: nop

    // 0x0041E640: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E644: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041E648: jal         0x002886AC
    // 0x0041E64C: nop

    func_002886AC(rdram, ctx);
        goto after_5;
    // 0x0041E64C: nop

    after_5:
    // 0x0041E650: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x0041E654: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x0041E658: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0041E65C: beq         $v0, $zero, L_0041E684
    if (ctx->r2 == 0) {
        // 0x0041E660: nop
    
            goto L_0041E684;
    }
    // 0x0041E660: nop

    // 0x0041E664: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041E668: lw          $v0, 0x202C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X202C);
    // 0x0041E66C: bne         $v0, $zero, L_0041E684
    if (ctx->r2 != 0) {
        // 0x0041E670: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E684;
    }
    // 0x0041E670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E674: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E678: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041E67C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E680: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_0041E684:
    // 0x0041E684: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041E688: lw          $v0, -0x4EEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EEC);
    // 0x0041E68C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041E690: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E694: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x0041E698: bne         $v0, $zero, L_0041E6B0
    if (ctx->r2 != 0) {
        // 0x0041E69C: nop
    
            goto L_0041E6B0;
    }
    // 0x0041E69C: nop

    // 0x0041E6A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041E6A4: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x0041E6A8: beq         $v0, $zero, L_0041E700
    if (ctx->r2 == 0) {
        // 0x0041E6AC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041E700;
    }
    // 0x0041E6AC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_0041E6B0:
    // 0x0041E6B0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E6B4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E6B8: jal         0x00426480
    // 0x0041E6BC: nop

    func_00426480(rdram, ctx);
        goto after_6;
    // 0x0041E6BC: nop

    after_6:
    // 0x0041E6C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E6C4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E6C8: jal         0x0042655C
    // 0x0041E6CC: nop

    func_0042655C(rdram, ctx);
        goto after_7;
    // 0x0041E6CC: nop

    after_7:
    // 0x0041E6D0: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0041E6D4: bne         $v0, $v1, L_0041EA30
    if (ctx->r2 != ctx->r3) {
        // 0x0041E6D8: nop
    
            goto L_0041EA30;
    }
    // 0x0041E6D8: nop

    // 0x0041E6DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E6E0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E6E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E6E8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E6EC: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E6F0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E6F4: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x0041E6F8: j           L_0041E81C
    // 0x0041E6FC: nop

        goto L_0041E81C;
    // 0x0041E6FC: nop

L_0041E700:
    // 0x0041E700: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x0041E704: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x0041E708: addiu       $s6, $zero, -0x2
    ctx->r22 = ADD32(0, -0X2);
    // 0x0041E70C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041E710: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0041E714: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x0041E718: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0041E71C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
L_0041E720:
    // 0x0041E720: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041E724: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0041E728: beq         $a1, $s5, L_0041E748
    if (ctx->r5 == ctx->r21) {
        // 0x0041E72C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0041E748;
    }
    // 0x0041E72C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041E730: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x0041E734: jal         0x0041E374
    // 0x0041E738: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0041E374(rdram, ctx);
        goto after_8;
    // 0x0041E738: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_8:
    // 0x0041E73C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0041E740: bne         $s3, $zero, L_0041E85C
    if (ctx->r19 != 0) {
        // 0x0041E744: nop
    
            goto L_0041E85C;
    }
    // 0x0041E744: nop

L_0041E748:
    // 0x0041E748: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041E74C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0041E750: beq         $v0, $s5, L_0041E768
    if (ctx->r2 == ctx->r21) {
        // 0x0041E754: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E768;
    }
    // 0x0041E754: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E758: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x0041E75C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041E760: beql        $v0, $zero, L_0041E768
    if (ctx->r2 == 0) {
        // 0x0041E764: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E768;
    }
    goto skip_2;
    // 0x0041E764: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_0041E768:
    // 0x0041E768: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0041E76C:
    // 0x0041E76C: jal         0x00426480
    // 0x0041E770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_9;
    // 0x0041E770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0041E774: jal         0x0042655C
    // 0x0041E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_10;
    // 0x0041E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0041E77C: bne         $v0, $s6, L_0041E7A4
    if (ctx->r2 != ctx->r22) {
        // 0x0041E780: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0041E7A4;
    }
    // 0x0041E780: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0041E784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E788: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041E78C: beql        $v0, $zero, L_0041E794
    if (ctx->r2 == 0) {
        // 0x0041E790: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E794;
    }
    goto skip_3;
    // 0x0041E790: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_0041E794:
    // 0x0041E794: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041E798: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0041E79C: bne         $v0, $zero, L_0041E76C
    if (ctx->r2 != 0) {
        // 0x0041E7A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0041E76C;
    }
    // 0x0041E7A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0041E7A4:
    // 0x0041E7A4: beql        $s1, $v0, L_0041E7AC
    if (ctx->r17 == ctx->r2) {
        // 0x0041E7A8: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0041E7AC;
    }
    goto skip_4;
    // 0x0041E7A8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_4:
L_0041E7AC:
    // 0x0041E7AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E7B0: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x0041E7B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0041E7B8: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x0041E7BC: bne         $v0, $zero, L_0041E720
    if (ctx->r2 != 0) {
        // 0x0041E7C0: nop
    
            goto L_0041E720;
    }
    // 0x0041E7C0: nop

    // 0x0041E7C4: bne         $s3, $zero, L_0041E85C
    if (ctx->r19 != 0) {
        // 0x0041E7C8: nop
    
            goto L_0041E85C;
    }
    // 0x0041E7C8: nop

    // 0x0041E7CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0041E7D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E7D4: sw          $a0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r4;
    // 0x0041E7D8: jal         0x00426480
    // 0x0041E7DC: nop

    func_00426480(rdram, ctx);
        goto after_11;
    // 0x0041E7DC: nop

    after_11:
    // 0x0041E7E0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E7E4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E7E8: jal         0x0042655C
    // 0x0041E7EC: nop

    func_0042655C(rdram, ctx);
        goto after_12;
    // 0x0041E7EC: nop

    after_12:
    // 0x0041E7F0: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0041E7F4: bne         $v0, $v1, L_0041E85C
    if (ctx->r2 != ctx->r3) {
        // 0x0041E7F8: nop
    
            goto L_0041E85C;
    }
    // 0x0041E7F8: nop

L_0041E7FC:
    // 0x0041E7FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E800: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E804: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E808: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x0041E80C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E810: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E814: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E818: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0041E81C:
    // 0x0041E81C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E820: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // 0x0041E824: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E828: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x0041E82C: jal         0x00416644
    // 0x0041E830: nop

    func_00416644(rdram, ctx);
        goto after_13;
    // 0x0041E830: nop

    after_13:
    // 0x0041E834: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E838: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041E83C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E840: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x0041E844: j           L_0041EA5C
    // 0x0041E848: nop

        goto L_0041EA5C;
    // 0x0041E848: nop

L_0041E84C:
    // 0x0041E84C: j           L_0041E8B0
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_0041E8B0;
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041E854:
    // 0x0041E854: j           L_0041E904
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E904;
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E85C:
    // 0x0041E85C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E860: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E864: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E86C:
    // 0x0041E86C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E870: jal         0x00426978
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_00426978(rdram, ctx);
        goto after_14;
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_14:
    // 0x0041E878: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0041E87C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E880: jal         0x00426C88
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_15;
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x0041E888: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E88C: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041E890: jal         0x00426D54
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_16;
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_16:
    // 0x0041E898: beq         $v0, $zero, L_0041E84C
    if (ctx->r2 == 0) {
        // 0x0041E89C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E84C;
    }
    // 0x0041E89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8A0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8A4: bnel        $v0, $zero, L_0041E86C
    if (ctx->r2 != 0) {
        // 0x0041E8A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E86C;
    }
    goto skip_5;
    // 0x0041E8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_5:
    // 0x0041E8AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0041E8B0:
    // 0x0041E8B0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E8B4: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E8B8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E8C0:
    // 0x0041E8C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E8C4: jal         0x00426978
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_00426978(rdram, ctx);
        goto after_17;
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_17:
    // 0x0041E8CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x0041E8D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E8D4: jal         0x00426C88
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_18;
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x0041E8DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E8E0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E8E4: jal         0x00426D54
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_19;
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_19:
    // 0x0041E8EC: beq         $v0, $zero, L_0041E854
    if (ctx->r2 == 0) {
        // 0x0041E8F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E854;
    }
    // 0x0041E8F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8F4: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8F8: bnel        $v0, $zero, L_0041E8C0
    if (ctx->r2 != 0) {
        // 0x0041E8FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E8C0;
    }
    goto skip_6;
    // 0x0041E8FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_6:
    // 0x0041E900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E904:
    // 0x0041E904: bne         $s2, $zero, L_0041EA30
    if (ctx->r18 != 0) {
        // 0x0041E908: nop
    
            goto L_0041EA30;
    }
    // 0x0041E908: nop

    // 0x0041E90C: bne         $v0, $zero, L_0041EA30
    if (ctx->r2 != 0) {
        // 0x0041E910: nop
    
            goto L_0041EA30;
    }
    // 0x0041E910: nop

    // 0x0041E914: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E918: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E91C: jal         0x004267A0
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_004267A0(rdram, ctx);
        goto after_20;
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_20:
    // 0x0041E924: bne         $v0, $zero, L_0041E9F0
    if (ctx->r2 != 0) {
        // 0x0041E928: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E928: nop

    // 0x0041E92C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E930: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E934: jal         0x0042670C
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_0042670C(rdram, ctx);
        goto after_21;
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_21:
    // 0x0041E93C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E940: bne         $s0, $zero, L_0041E9F0
    if (ctx->r16 != 0) {
        // 0x0041E944: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E944: nop

    // 0x0041E948: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E94C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E950: jal         0x00426E6C
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_22;
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_22:
    // 0x0041E958: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041E95C: jal         0x00426E6C
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00426E6C(rdram, ctx);
        goto after_23;
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_23:
    // 0x0041E964: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E968: beq         $v1, $zero, L_0041E9A8
    if (ctx->r3 == 0) {
        // 0x0041E96C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E9A8;
    }
    // 0x0041E96C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E970: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0041E974: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E978: bne         $v1, $zero, L_0041E9A8
    if (ctx->r3 != 0) {
        // 0x0041E97C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_0041E9A8;
    }
    // 0x0041E97C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041E980: beq         $v0, $zero, L_0041E9A0
    if (ctx->r2 == 0) {
        // 0x0041E984: nop
    
            goto L_0041E9A0;
    }
    // 0x0041E984: nop

    // 0x0041E988: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E98C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E990: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E994: addiu       $a1, $a1, -0x3E18
    ctx->r5 = ADD32(ctx->r5, -0X3E18);
    // 0x0041E998: j           L_0041E9B8
    // 0x0041E99C: nop

        goto L_0041E9B8;
    // 0x0041E99C: nop

L_0041E9A0:
    // 0x0041E9A0: beq         $v1, $zero, L_0041E9E8
    if (ctx->r3 == 0) {
        // 0x0041E9A4: nop
    
            goto L_0041E9E8;
    }
    // 0x0041E9A4: nop

L_0041E9A8:
    // 0x0041E9A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9B4: addiu       $a1, $a1, -0x3E3C
    ctx->r5 = ADD32(ctx->r5, -0X3E3C);
L_0041E9B8:
    // 0x0041E9B8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E9BC: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041E9C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E9C4: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E9C8: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E9D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E9D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E9DC: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041E9E0: jal         0x00416644
    // 0x0041E9E4: nop

    func_00416644(rdram, ctx);
        goto after_24;
    // 0x0041E9E4: nop

    after_24:
L_0041E9E8:
    // 0x0041E9E8: beq         $s0, $zero, L_0041EA30
    if (ctx->r16 == 0) {
        // 0x0041E9EC: nop
    
            goto L_0041EA30;
    }
    // 0x0041E9EC: nop

L_0041E9F0:
    // 0x0041E9F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9F4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9F8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9FC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EA00: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EA04: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041EA08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EA0C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041EA10: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041EA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EA1C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041EA20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA24: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041EA28: jal         0x00416644
    // 0x0041EA2C: nop

    func_00416644(rdram, ctx);
        goto after_25;
    // 0x0041EA2C: nop

    after_25:
L_0041EA30:
    // 0x0041EA30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041EA34: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0041EA38: bne         $v0, $zero, L_0041EA4C
    if (ctx->r2 != 0) {
        // 0x0041EA3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041EA4C;
    }
    // 0x0041EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA40: jal         0x0041DA28
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0041DA28(rdram, ctx);
        goto after_26;
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_26:
    // 0x0041EA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041EA4C:
    // 0x0041EA4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA50: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041EA54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EA58: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_0041EA5C:
    // 0x0041EA5C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041EA60: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0041EA64: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0041EA68: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0041EA6C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0041EA70: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0041EA74: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0041EA78: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0041EA7C: jr          $ra
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00423CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423CBC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423CC0: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423CC4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423CC8: beq         $v0, $zero, L_00423CE4
    if (ctx->r2 == 0) {
        // 0x00423CCC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423CE4;
    }
    // 0x00423CCC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423CD0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423CD4: addu        $at, $at, $v0
    gpr jr_addend_00423CDC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423CD8: lw          $v0, 0x16D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X16D0);
    // 0x00423CDC: jr          $v0
    // 0x00423CE0: nop

    switch (jr_addend_00423CDC >> 2) {
        case 0: goto L_00423CE4; break;
        default: switch_error(__func__, 0x00423CDC, 0x800C16D0);
    }
    // 0x00423CE0: nop

L_00423CE4:
    // 0x00423CE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423CE8: addiu       $v0, $v0, 0x5180
    ctx->r2 = ADD32(ctx->r2, 0X5180);
    // 0x00423CEC: j           L_00423D30
    // 0x00423CF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00423D30(rdram, ctx);
    return;
    // 0x00423CF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00423CF4 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00423CF4(rdram, ctx);
;}
RECOMP_FUNC void func_0029C878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029C878: addu        $t9, $a0, $zero
    ctx->r25 = ADD32(ctx->r4, 0);
    // 0x0029C87C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x0029C880: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x0029C884: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x0029C888: nop

    // 0x0029C88C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x0029C890: bne         $at, $zero, L_0029C8B4
    if (ctx->r1 != 0) {
        // 0x0029C894: nop
    
            goto L_0029C8B4;
    }
    // 0x0029C894: nop

L_0029C898:
    // 0x0029C898: addu        $t9, $t8, $zero
    ctx->r25 = ADD32(ctx->r24, 0);
    // 0x0029C89C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x0029C8A0: nop

    // 0x0029C8A4: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x0029C8A8: nop

    // 0x0029C8AC: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x0029C8B0: beq         $at, $zero, L_0029C898
    if (ctx->r1 == 0) {
        // 0x0029C8B4: lw          $t8, 0x0($t9)
        ctx->r24 = MEM_W(ctx->r25, 0X0);
            goto L_0029C898;
    }
L_0029C8B4:
    // 0x0029C8B4: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x0029C8B8: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
    // 0x0029C8BC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x0029C8C0: jr          $ra
    // 0x0029C8C4: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    return;
    // 0x0029C8C4: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_00275EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275EFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00275F00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00275F04: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00275F08: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00275F0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00275F10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275F18: lw          $s1, 0x14($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X14);
    // 0x00275F1C: beq         $s1, $zero, L_00275F60
    if (ctx->r17 == 0) {
        // 0x00275F20: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_00275F60;
    }
    // 0x00275F20: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_00275F24:
    // 0x00275F24: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x00275F28: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x00275F2C: jal         0x00275864
    // 0x00275F30: nop

    func_00275864(rdram, ctx);
        goto after_0;
    // 0x00275F30: nop

    after_0:
    // 0x00275F34: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x00275F38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00275F3C: sw          $s3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r19;
    // 0x00275F40: jal         0x00200738
    // 0x00275F44: sw          $s3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r19;
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00275F44: sw          $s3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r19;
    after_1:
    // 0x00275F48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00275F4C: jal         0x00200574
    // 0x00275F50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00275F50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00275F54: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00275F58: bne         $s1, $zero, L_00275F24
    if (ctx->r17 != 0) {
        // 0x00275F5C: nop
    
            goto L_00275F24;
    }
    // 0x00275F5C: nop

L_00275F60:
    // 0x00275F60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00275F64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00275F68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00275F6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00275F70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275F74: jr          $ra
    // 0x00275F78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00275F78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004521C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00289110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289114: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00289118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0028911C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289120: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00289124: sw          $v0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r2;
    // 0x00289128: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028912C: sw          $zero, -0x4EE8($at)
    MEM_W(-0X4EE8, ctx->r1) = 0;
    // 0x00289130: jal         0x002888BC
    // 0x00289134: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_002888BC(rdram, ctx);
        goto after_0;
    // 0x00289134: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00289138: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028913C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00289140: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00289144: jal         0x0042AC0C
    // 0x00289148: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AC0C(rdram, ctx);
        goto after_1;
    // 0x00289148: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x0028914C: jal         0x004211AC
    // 0x00289150: nop

    func_004211AC(rdram, ctx);
        goto after_2;
    // 0x00289150: nop

    after_2:
    // 0x00289154: jal         0x0042123C
    // 0x00289158: nop

    func_0042123C(rdram, ctx);
        goto after_3;
    // 0x00289158: nop

    after_3:
    // 0x0028915C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289160: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289164: sw          $v0, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = ctx->r2;
    // 0x00289168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028916C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289170: sw          $v0, 0x6D64($at)
    MEM_W(0X6D64, ctx->r1) = ctx->r2;
    // 0x00289174: jr          $ra
    // 0x00289178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275C6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00275C70: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00275C74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00275C78: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00275C7C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00275C80: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00275C84: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00275C88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00275C8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00275C90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00275C94: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00275C98: beq         $s0, $zero, L_00275D10
    if (ctx->r16 == 0) {
        // 0x00275C9C: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_00275D10;
    }
    // 0x00275C9C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00275CA0: jal         0x00200738
    // 0x00275CA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00275CA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00275CA8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x00275CAC: jal         0x00200574
    // 0x00275CB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x00275CB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00275CB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00275CB8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00275CBC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00275CC0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00275CC4: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x00275CC8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00275CCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00275CD0: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00275CD4: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x00275CD8: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    // 0x00275CDC: jal         0x00275544
    // 0x00275CE0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x00275CE0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_2:
    // 0x00275CE4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00275CE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275CEC: sw          $v0, 0x2A80($at)
    MEM_W(0X2A80, ctx->r1) = ctx->r2;
    // 0x00275CF0: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x00275CF4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00275CF8: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00275CFC: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00275D00: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00275D04: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x00275D08: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x00275D0C: sw          $s4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r20;
L_00275D10:
    // 0x00275D10: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00275D14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00275D18: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00275D1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00275D20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00275D24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00275D28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00275D2C: jr          $ra
    // 0x00275D30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00275D30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026C55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C55C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C560: beq         $a0, $zero, L_0026C584
    if (ctx->r4 == 0) {
        // 0x0026C564: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0026C584;
    }
    // 0x0026C564: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C568: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0026C56C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0026C570: beq         $v0, $zero, L_0026C584
    if (ctx->r2 == 0) {
        // 0x0026C574: nop
    
            goto L_0026C584;
    }
    // 0x0026C574: nop

    // 0x0026C578: lhu         $a1, 0x0($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X0);
    // 0x0026C57C: jal         0x0026C8B0
    // 0x0026C580: nop

    func_0026C8B0(rdram, ctx);
        goto after_0;
    // 0x0026C580: nop

    after_0:
L_0026C584:
    // 0x0026C584: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C588: jr          $ra
    // 0x0026C58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00430500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00275234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275234: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275238: lwc1        $f0, -0x7E18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E18);
    // 0x0027523C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x00275240: jr          $ra
    // 0x00275244: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00275244: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00406AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00406AAC: addu        $t2, $a1, $zero
    ctx->r10 = ADD32(ctx->r5, 0);
    // 0x00406AB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00406AB4: lb          $v0, 0xC7($t2)
    ctx->r2 = MEM_B(ctx->r10, 0XC7);
    // 0x00406AB8: beq         $v0, $zero, L_00406C40
    if (ctx->r2 == 0) {
        // 0x00406ABC: addu        $t1, $a0, $zero
        ctx->r9 = ADD32(ctx->r4, 0);
            goto L_00406C40;
    }
    // 0x00406ABC: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x00406AC0: lwc1        $f0, 0x8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
    // 0x00406AC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406AC8: lwc1        $f1, -0x5CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5CC);
    // 0x00406ACC: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00406AD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00406AD4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00406AD8: nop

    // 0x00406ADC: bc1f        L_00406B08
    if (!c1cs) {
        // 0x00406AE0: nop
    
            goto L_00406B08;
    }
    // 0x00406AE0: nop

    // 0x00406AE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406AE8: lwc1        $f1, 0x4E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4E8);
    // 0x00406AEC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00406AF0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00406AF4: nop

    // 0x00406AF8: bc1f        L_00406C40
    if (!c1cs) {
        // 0x00406AFC: nop
    
            goto L_00406C40;
    }
    // 0x00406AFC: nop

    // 0x00406B00: j           L_00406B20
    // 0x00406B04: nop

        goto L_00406B20;
    // 0x00406B04: nop

L_00406B08:
    // 0x00406B08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406B0C: lwc1        $f0, 0x4EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4EC);
    // 0x00406B10: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00406B14: nop

    // 0x00406B18: bc1f        L_00406C40
    if (!c1cs) {
        // 0x00406B1C: nop
    
            goto L_00406C40;
    }
    // 0x00406B1C: nop

L_00406B20:
    // 0x00406B20: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00406B24: addiu       $a3, $a3, -0x62E
    ctx->r7 = ADD32(ctx->r7, -0X62E);
    // 0x00406B28: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x00406B2C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00406B30: addiu       $a0, $a0, 0x1C40
    ctx->r4 = ADD32(ctx->r4, 0X1C40);
    // 0x00406B34: addiu       $a1, $zero, -0x301
    ctx->r5 = ADD32(0, -0X301);
    // 0x00406B38: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00406B3C: addiu       $a2, $a2, 0x1F50
    ctx->r6 = ADD32(ctx->r6, 0X1F50);
    // 0x00406B40: sw          $zero, 0x18($t1)
    MEM_W(0X18, ctx->r9) = 0;
    // 0x00406B44: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x00406B48: sw          $zero, 0x20($t1)
    MEM_W(0X20, ctx->r9) = 0;
    // 0x00406B4C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x00406B50: sw          $t0, 0x32($a3)
    MEM_W(0X32, ctx->r7) = ctx->r8;
    // 0x00406B54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00406B58: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00406B5C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00406B60: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x00406B64: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00406B68: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00406B6C: lw          $a2, 0x6($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X6);
    // 0x00406B70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406B74: bne         $a2, $v0, L_00406C10
    if (ctx->r6 != ctx->r2) {
        // 0x00406B78: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00406C10;
    }
    // 0x00406B78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00406B7C: lwc1        $f0, 0x6A($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X6A);
    // 0x00406B80: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x00406B84: lwc1        $f0, 0x6E($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X6E);
    // 0x00406B88: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x00406B8C: lwc1        $f0, 0x72($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X72);
    // 0x00406B90: sw          $zero, 0x50($t1)
    MEM_W(0X50, ctx->r9) = 0;
    // 0x00406B94: swc1        $f0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f0.u32l;
    // 0x00406B98: lw          $a0, -0x3CA($a3)
    ctx->r4 = MEM_W(ctx->r7, -0X3CA);
    // 0x00406B9C: addiu       $v1, $a3, -0x3CA
    ctx->r3 = ADD32(ctx->r7, -0X3CA);
    // 0x00406BA0: bne         $a0, $a1, L_00406BC0
    if (ctx->r4 != ctx->r5) {
        // 0x00406BA4: sw          $a1, 0xA($a3)
        MEM_W(0XA, ctx->r7) = ctx->r5;
            goto L_00406BC0;
    }
    // 0x00406BA4: sw          $a1, 0xA($a3)
    MEM_W(0XA, ctx->r7) = ctx->r5;
    // 0x00406BA8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406BAC: addiu       $v0, $v0, 0x13B4
    ctx->r2 = ADD32(ctx->r2, 0X13B4);
    // 0x00406BB0: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x00406BB4: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x00406BB8: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x00406BBC: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_00406BC0:
    // 0x00406BC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406BC4: bne         $a0, $v0, L_00406BE4
    if (ctx->r4 != ctx->r2) {
        // 0x00406BC8: nop
    
            goto L_00406BE4;
    }
    // 0x00406BC8: nop

    // 0x00406BCC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406BD0: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
    // 0x00406BD4: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x00406BD8: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x00406BDC: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x00406BE0: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_00406BE4:
    // 0x00406BE4: bne         $a0, $a2, L_00406C04
    if (ctx->r4 != ctx->r6) {
        // 0x00406BE8: addu        $a0, $t1, $zero
        ctx->r4 = ADD32(ctx->r9, 0);
            goto L_00406C04;
    }
    // 0x00406BE8: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x00406BEC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406BF0: addiu       $v0, $v0, 0x14CC
    ctx->r2 = ADD32(ctx->r2, 0X14CC);
    // 0x00406BF4: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x00406BF8: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x00406BFC: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x00406C00: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_00406C04:
    // 0x00406C04: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x00406C08: j           L_00406C38
    // 0x00406C0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_00406C38;
    // 0x00406C0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_00406C10:
    // 0x00406C10: lbu         $v0, -0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, -0X1);
    // 0x00406C14: bne         $v0, $zero, L_00406C30
    if (ctx->r2 != 0) {
        // 0x00406C18: addu        $a0, $t1, $zero
        ctx->r4 = ADD32(ctx->r9, 0);
            goto L_00406C30;
    }
    // 0x00406C18: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x00406C1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406C20: sw          $v0, 0xA($a3)
    MEM_W(0XA, ctx->r7) = ctx->r2;
    // 0x00406C24: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x00406C28: j           L_00406C38
    // 0x00406C2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_00406C38;
    // 0x00406C2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00406C30:
    // 0x00406C30: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x00406C34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_00406C38:
    // 0x00406C38: jal         0x00243414
    // 0x00406C3C: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00406C3C: nop

    after_0:
L_00406C40:
    // 0x00406C40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00406C44: jr          $ra
    // 0x00406C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00406C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028D100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D100: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0028D104: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028D108: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0028D10C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028D110: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0028D114: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0028D118: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0028D11C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0028D120: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028D124: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028D128: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028D12C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028D130: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0028D134: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x0028D138: addiu       $s6, $s6, -0xD70
    ctx->r22 = ADD32(ctx->r22, -0XD70);
    // 0x0028D13C: blez        $v0, L_0028D210
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028D140: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0028D210;
    }
    // 0x0028D140: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0028D144: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0028D148: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    // 0x0028D14C: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x0028D150: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x0028D154: addu        $s5, $s4, $zero
    ctx->r21 = ADD32(ctx->r20, 0);
L_0028D158:
    // 0x0028D158: addiu       $v1, $s2, 0x10
    ctx->r3 = ADD32(ctx->r18, 0X10);
    // 0x0028D15C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028D160: addiu       $a0, $s2, 0x4F0
    ctx->r4 = ADD32(ctx->r18, 0X4F0);
    // 0x0028D164: addu        $s0, $v0, $s5
    ctx->r16 = ADD32(ctx->r2, ctx->r21);
    // 0x0028D168: addiu       $v0, $s0, 0x520
    ctx->r2 = ADD32(ctx->r16, 0X520);
L_0028D16C:
    // 0x0028D16C: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0028D170: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x0028D174: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x0028D178: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x0028D17C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0028D180: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x0028D184: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x0028D188: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x0028D18C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0028D190: bne         $v1, $a0, L_0028D16C
    if (ctx->r3 != ctx->r4) {
        // 0x0028D194: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_0028D16C;
    }
    // 0x0028D194: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0028D198: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0028D19C: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x0028D1A0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0028D1A4: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x0028D1A8: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0028D1AC: bnel        $v0, $s7, L_0028D1EC
    if (ctx->r2 != ctx->r23) {
        // 0x0028D1B0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0028D1EC;
    }
    goto skip_0;
    // 0x0028D1B0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x0028D1B4: lw          $a2, 0x13B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X13B0);
    // 0x0028D1B8: lw          $a3, 0x13B4($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X13B4);
    // 0x0028D1BC: lw          $t0, 0x13B8($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X13B8);
    // 0x0028D1C0: sw          $a2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r6;
    // 0x0028D1C4: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x0028D1C8: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x0028D1CC: lwc1        $f0, 0x13E0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X13E0);
    // 0x0028D1D0: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x0028D1D4: lw          $a1, 0x13F0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X13F0);
    // 0x0028D1D8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028D1DC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0028D1E0: jal         0x002242F8
    // 0x0028D1E4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_002242F8(rdram, ctx);
        goto after_0;
    // 0x0028D1E4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_0:
    // 0x0028D1E8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_0028D1EC:
    // 0x0028D1EC: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x0028D1F0: addiu       $s2, $s2, 0x4E8
    ctx->r18 = ADD32(ctx->r18, 0X4E8);
    // 0x0028D1F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028D1F8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0028D1FC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0028D200: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0028D204: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0028D208: bne         $v0, $zero, L_0028D158
    if (ctx->r2 != 0) {
        // 0x0028D20C: addiu       $s5, $s5, 0x1328
        ctx->r21 = ADD32(ctx->r21, 0X1328);
            goto L_0028D158;
    }
    // 0x0028D20C: addiu       $s5, $s5, 0x1328
    ctx->r21 = ADD32(ctx->r21, 0X1328);
L_0028D210:
    // 0x0028D210: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0028D214: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0028D218: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0028D21C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0028D220: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028D224: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028D228: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028D22C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028D230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028D234: jr          $ra
    // 0x0028D238: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0028D238: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00424A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00424A64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00424A68: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00424A6C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00424A70: sltiu       $v0, $a0, 0x6
    ctx->r2 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x00424A74: beq         $v0, $zero, L_00424B78
    if (ctx->r2 == 0) {
        // 0x00424A78: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00424B78;
    }
    // 0x00424A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00424A7C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00424A80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424A84: addu        $at, $at, $v0
    gpr jr_addend_00424A8C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00424A88: lw          $v0, 0x1750($at)
    ctx->r2 = ADD32(ctx->r1, 0X1750);
    // 0x00424A8C: jr          $v0
    // 0x00424A90: nop

    switch (jr_addend_00424A8C >> 2) {
        case 0: goto L_00424A94; break;
        case 1: goto L_00424ABC; break;
        case 2: goto L_00424AE4; break;
        case 3: goto L_00424B0C; break;
        case 4: goto L_00424B1C; break;
        case 5: goto L_00424B44; break;
        default: switch_error(__func__, 0x00424A8C, 0x800C1750);
    }
    // 0x00424A90: nop

L_00424A94:
    // 0x00424A94: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424A98: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424A9C: jal         0x00224C08
    // 0x00424AA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_00224C08(rdram, ctx);
        goto after_0;
    // 0x00424AA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00424AA4: bne         $v0, $zero, L_00424B80
    if (ctx->r2 != 0) {
        // 0x00424AA8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00424B80;
    }
    // 0x00424AA8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00424AAC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424AB0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424AB4: j           L_00424B68
    // 0x00424AB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_00424B68;
    // 0x00424AB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_00424ABC:
    // 0x00424ABC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424AC0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424AC4: jal         0x00224C08
    // 0x00424AC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_00224C08(rdram, ctx);
        goto after_1;
    // 0x00424AC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x00424ACC: bne         $v0, $zero, L_00424B80
    if (ctx->r2 != 0) {
        // 0x00424AD0: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00424B80;
    }
    // 0x00424AD0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00424AD4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424AD8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424ADC: j           L_00424B68
    // 0x00424AE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_00424B68;
    // 0x00424AE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_00424AE4:
    // 0x00424AE4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424AE8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424AEC: jal         0x00224C08
    // 0x00424AF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00224C08(rdram, ctx);
        goto after_2;
    // 0x00424AF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x00424AF4: bne         $v0, $zero, L_00424B80
    if (ctx->r2 != 0) {
        // 0x00424AF8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00424B80;
    }
    // 0x00424AF8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00424AFC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424B00: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424B04: j           L_00424B68
    // 0x00424B08: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_00424B68;
    // 0x00424B08: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_00424B0C:
    // 0x00424B0C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424B10: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424B14: j           L_00424B68
    // 0x00424B18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_00424B68;
    // 0x00424B18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_00424B1C:
    // 0x00424B1C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424B20: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424B24: jal         0x00224C08
    // 0x00424B28: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_00224C08(rdram, ctx);
        goto after_3;
    // 0x00424B28: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x00424B2C: bne         $v0, $zero, L_00424B80
    if (ctx->r2 != 0) {
        // 0x00424B30: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00424B80;
    }
    // 0x00424B30: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00424B34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424B38: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424B3C: j           L_00424B68
    // 0x00424B40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_00424B68;
    // 0x00424B40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_00424B44:
    // 0x00424B44: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424B48: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424B4C: jal         0x00224C08
    // 0x00424B50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00224C08(rdram, ctx);
        goto after_4;
    // 0x00424B50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x00424B54: bne         $v0, $zero, L_00424B80
    if (ctx->r2 != 0) {
        // 0x00424B58: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00424B80;
    }
    // 0x00424B58: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00424B5C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424B60: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424B64: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_00424B68:
    // 0x00424B68: jal         0x00224C08
    // 0x00424B6C: nop

    func_00224C08(rdram, ctx);
        goto after_5;
    // 0x00424B6C: nop

    after_5:
    // 0x00424B70: bne         $v0, $zero, L_00424B80
    if (ctx->r2 != 0) {
        // 0x00424B74: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00424B80;
    }
    // 0x00424B74: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00424B78:
    // 0x00424B78: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00424B7C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00424B80:
    // 0x00424B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00424B84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424B88: jr          $ra
    // 0x00424B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045D54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D54C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045D550: addiu       $v0, $v0, 0x4110
    ctx->r2 = ADD32(ctx->r2, 0X4110);
    // 0x0045D554: jr          $ra
    // 0x0045D558: nop

    return;
    // 0x0045D558: nop

;}
RECOMP_FUNC void func_0026D210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D210: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0026D214: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0026D218: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0026D21C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x0026D220: jr          $ra
    // 0x0026D224: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0026D224: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00452D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00419E1C:
    // 0x00452D64: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_00419E2C:
    // 0x00452D68: lbu         $v0, -0x5514($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5514);
    // 0x00452D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452D70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00452D74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00452D78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00452D7C: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00452D80: bgez        $a2, L_00452D8C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00452D84: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00452D8C;
    }
    // 0x00452D84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00452D88: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00452D8C:
    // 0x00452D8C: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00452D90: bne         $s0, $zero, L_00452DA8
    if (ctx->r16 != 0) {
        // 0x00452D94: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00452DA8;
    }
    // 0x00452D94: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00452D98: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452D9C: addiu       $v0, $v0, 0x6510
    ctx->r2 = ADD32(ctx->r2, 0X6510);
    // 0x00452DA0: j           L_00419E2C
    // 0x00452DA4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00419E2C(rdram, ctx);
    return;
    // 0x00452DA4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00452DA8:
    // 0x00452DA8: bne         $s0, $v0, L_00452DC0
    if (ctx->r16 != ctx->r2) {
        // 0x00452DAC: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00452DC0;
    }
    // 0x00452DAC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00452DB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452DB4: addiu       $v0, $v0, 0x64F8
    ctx->r2 = ADD32(ctx->r2, 0X64F8);
    // 0x00452DB8: j           L_00419E2C
    // 0x00452DBC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00419E2C(rdram, ctx);
    return;
    // 0x00452DBC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00452DC0:
    // 0x00452DC0: bne         $s0, $v0, L_00452DD8
    if (ctx->r16 != ctx->r2) {
        // 0x00452DC4: nop
    
            goto L_00452DD8;
    }
    // 0x00452DC4: nop

    // 0x00452DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452DCC: addiu       $v0, $v0, 0x64E0
    ctx->r2 = ADD32(ctx->r2, 0X64E0);
    // 0x00452DD0: j           L_00419E2C
    // 0x00452DD4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00419E2C(rdram, ctx);
    return;
    // 0x00452DD4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00452DD8:
    // 0x00452DD8: blez        $s0, L_00452E00
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00452DDC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00452E00;
    }
    // 0x00452DDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00452DE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452DE4: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00452DE8: jal         0x004160F0
    // 0x00452DEC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00452DEC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00452DF0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00452DF4: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00452DF8: j           L_00419E1C
    // 0x00452DFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00419E1C(rdram, ctx);
    return;
    // 0x00452DFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00452E00:
    // 0x00452E00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452E04: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00452E08: jal         0x004160F0
    // 0x00452E0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00452E0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00452E10: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00452E14: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00452E18: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00452E1C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00452E20: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00452E24: jal         0x0029E3E0
    // 0x00452E28: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00452E28: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x00452E2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00452E30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00452E34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00452E38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452E3C: jr          $ra
    // 0x00452E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002847D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002847D8: lwc1        $f0, 0x6C44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C44);
    // 0x002847DC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_0025A044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A048: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A04C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A050: lhu         $a3, 0x96($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X96);
    // 0x0025A054: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A058: addiu       $a2, $a2, -0x670
    ctx->r6 = ADD32(ctx->r6, -0X670);
    // 0x0025A05C: jal         0x00245A98
    // 0x0025A060: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A060: nop

    after_0:
    // 0x0025A064: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A068: jr          $ra
    // 0x0025A06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455B28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455B2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455B30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455B34: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00455B38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455B3C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455B40: jal         0x0025340C
    // 0x00455B44: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455B44: nop

    after_0:
    // 0x00455B48: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00455B4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00455B50: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00455B54: lhu         $s1, -0x54A6($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A6);
    // 0x00455B58: jal         0x004160F0
    // 0x00455B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00455B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00455B60: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455B64: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x00455B68: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00455B6C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00455B70: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00455B74: jal         0x0029E3E0
    // 0x00455B78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00455B78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00455B7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455B80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00455B84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455B88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455B8C: jr          $ra
    // 0x00455B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00289FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289FE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289FE8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00289FEC: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00289FF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289FF4: jal         0x0026EDA8
    // 0x00289FF8: nop

    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x00289FF8: nop

    after_0:
    // 0x00289FFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028A000: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0028A004: jal         0x0025359C
    // 0x0028A008: nop

    func_0025359C(rdram, ctx);
        goto after_1;
    // 0x0028A008: nop

    after_1:
    // 0x0028A00C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028A010: jr          $ra
    // 0x0028A014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028A014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002017D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002017D4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x002017D8: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x002017DC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x002017E0: jr          $ra
    // 0x002017E4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    return;
    // 0x002017E4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
;}
RECOMP_FUNC void func_00275100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275100: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00275104: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275108: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027510C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00275110: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275114: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00275118: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0027511C: lw          $a0, 0x2B60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B60);
    // 0x00275120: lw          $a1, 0x2B64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B64);
    // 0x00275124: jal         0x00266D24
    // 0x00275128: nop

    func_00266D24(rdram, ctx);
        goto after_0;
    // 0x00275128: nop

    after_0:
    // 0x0027512C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00275130: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00275134: beq         $s0, $v0, L_0027519C
    if (ctx->r16 == ctx->r2) {
        // 0x00275138: sll         $s0, $s0, 1
        ctx->r16 = S32(ctx->r16 << 1);
            goto L_0027519C;
    }
    // 0x00275138: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x0027513C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00275140: lw          $a0, 0x2B50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B50);
    // 0x00275144: jal         0x002017D4
    // 0x00275148: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00275148: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    after_1:
    // 0x0027514C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00275150: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00275154: lw          $a0, 0x2B50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B50);
    // 0x00275158: jal         0x002017D4
    // 0x0027515C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0027515C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00275160: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00275164: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x00275168: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x0027516C: jal         0x0026D210
    // 0x00275170: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x00275170: nop

    after_3:
    // 0x00275174: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00275178: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027517C: nop

    // 0x00275180: bc1f        L_00275194
    if (!c1cs) {
        // 0x00275184: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_00275194;
    }
    // 0x00275184: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x00275188: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027518C: lwc1        $f0, -0x7E28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E28);
    // 0x00275190: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
L_00275194:
    // 0x00275194: j           L_002751A0
    // 0x00275198: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_002751A0;
    // 0x00275198: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0027519C:
    // 0x0027519C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002751A0:
    // 0x002751A0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x002751A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002751A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002751AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002751B0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x002751B4: jr          $ra
    // 0x002751B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002751B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041B250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B250: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B254: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B258: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x0041B25C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B260: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B264: jr          $ra
    // 0x0041B268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042C840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C840: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0042C844: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042C848: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042C84C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0042C850: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0042C854: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0042C858: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042C85C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042C860: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042C864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042C868: jal         0x002842C8
    // 0x0042C86C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002842C8(rdram, ctx);
        goto after_0;
    // 0x0042C86C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042C870: lw          $s2, 0x1168($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X1168);
    // 0x0042C874: blez        $s2, L_0042C8D4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0042C878: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042C8D4;
    }
    // 0x0042C878: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042C87C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0042C880: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x0042C884: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x0042C888: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x0042C88C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042C890:
    // 0x0042C890: lw          $v0, 0x1178($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1178);
    // 0x0042C894: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x0042C898: lbu         $v1, 0x11($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X11);
    // 0x0042C89C: beq         $v1, $s7, L_0042C8BC
    if (ctx->r3 == ctx->r23) {
        // 0x0042C8A0: nop
    
            goto L_0042C8BC;
    }
    // 0x0042C8A0: nop

    // 0x0042C8A4: beq         $v1, $s6, L_0042C8BC
    if (ctx->r3 == ctx->r22) {
        // 0x0042C8A8: nop
    
            goto L_0042C8BC;
    }
    // 0x0042C8A8: nop

    // 0x0042C8AC: beq         $v1, $s5, L_0042C8BC
    if (ctx->r3 == ctx->r21) {
        // 0x0042C8B0: nop
    
            goto L_0042C8BC;
    }
    // 0x0042C8B0: nop

    // 0x0042C8B4: bnel        $v1, $s4, L_0042C8C8
    if (ctx->r3 != ctx->r20) {
        // 0x0042C8B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0042C8C8;
    }
    goto skip_0;
    // 0x0042C8B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_0042C8BC:
    // 0x0042C8BC: jal         0x00220BF0
    // 0x0042C8C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00220BF0(rdram, ctx);
        goto after_1;
    // 0x0042C8C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0042C8C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042C8C8:
    // 0x0042C8C8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042C8CC: bne         $v0, $zero, L_0042C890
    if (ctx->r2 != 0) {
        // 0x0042C8D0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042C890;
    }
    // 0x0042C8D0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0042C8D4:
    // 0x0042C8D4: lw          $s2, 0x116C($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X116C);
    // 0x0042C8D8: blez        $s2, L_0042C938
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0042C8DC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042C938;
    }
    // 0x0042C8DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042C8E0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0042C8E4: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x0042C8E8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x0042C8EC: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x0042C8F0: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042C8F4:
    // 0x0042C8F4: lw          $v0, 0x117C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X117C);
    // 0x0042C8F8: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x0042C8FC: lbu         $v1, 0x11($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X11);
    // 0x0042C900: beq         $v1, $s7, L_0042C920
    if (ctx->r3 == ctx->r23) {
        // 0x0042C904: nop
    
            goto L_0042C920;
    }
    // 0x0042C904: nop

    // 0x0042C908: beq         $v1, $s6, L_0042C920
    if (ctx->r3 == ctx->r22) {
        // 0x0042C90C: nop
    
            goto L_0042C920;
    }
    // 0x0042C90C: nop

    // 0x0042C910: beq         $v1, $s5, L_0042C920
    if (ctx->r3 == ctx->r21) {
        // 0x0042C914: nop
    
            goto L_0042C920;
    }
    // 0x0042C914: nop

    // 0x0042C918: bnel        $v1, $s4, L_0042C92C
    if (ctx->r3 != ctx->r20) {
        // 0x0042C91C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0042C92C;
    }
    goto skip_1;
    // 0x0042C91C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
L_0042C920:
    // 0x0042C920: jal         0x00220BF0
    // 0x0042C924: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00220BF0(rdram, ctx);
        goto after_2;
    // 0x0042C924: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0042C928: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042C92C:
    // 0x0042C92C: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042C930: bne         $v0, $zero, L_0042C8F4
    if (ctx->r2 != 0) {
        // 0x0042C934: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042C8F4;
    }
    // 0x0042C934: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0042C938:
    // 0x0042C938: jal         0x002842B4
    // 0x0042C93C: nop

    func_002842B4(rdram, ctx);
        goto after_3;
    // 0x0042C93C: nop

    after_3:
    // 0x0042C940: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042C944: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042C948: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042C94C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042C950: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042C954: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042C958: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042C95C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042C960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C964: jr          $ra
    // 0x0042C968: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042C968: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00415CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00415CE8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x00415CEC: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x00415CF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00415CF4: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x00415CF8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00415CFC: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x00415D00: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x00415D04: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x00415D08: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x00415D0C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00415D10: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    // 0x00415D14: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00415D18: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x00415D1C: addiu       $v1, $zero, -0x400
    ctx->r3 = ADD32(0, -0X400);
    // 0x00415D20: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x00415D24: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x00415D28: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00415D2C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x00415D30: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x00415D34: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x00415D38: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x00415D3C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x00415D40: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x00415D44: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x00415D48: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x00415D4C: blez        $v0, L_00415DDC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00415D50: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00415DDC;
    }
    // 0x00415D50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00415D54: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00415D58:
    // 0x00415D58: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00415D5C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00415D60: jal         0x0041363C
    // 0x00415D64: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x00415D64: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_0:
    // 0x00415D68: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00415D6C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415D70: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00415D74: bnel        $v0, $zero, L_00415D7C
    if (ctx->r2 != 0) {
        // 0x00415D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00415D7C;
    }
    goto skip_0;
    // 0x00415D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00415D7C:
    // 0x00415D7C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x00415D80: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x00415D84: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00415D88: beq         $v0, $zero, L_00415D94
    if (ctx->r2 == 0) {
        // 0x00415D8C: sw          $v1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r3;
            goto L_00415D94;
    }
    // 0x00415D8C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x00415D90: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_00415D94:
    // 0x00415D94: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x00415D98: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x00415D9C: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00415DA0: beq         $v0, $zero, L_00415DAC
    if (ctx->r2 == 0) {
        // 0x00415DA4: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_00415DAC;
    }
    // 0x00415DA4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x00415DA8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_00415DAC:
    // 0x00415DAC: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x00415DB0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00415DB4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00415DB8: beq         $v0, $zero, L_00415DC4
    if (ctx->r2 == 0) {
        // 0x00415DBC: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_00415DC4;
    }
    // 0x00415DBC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00415DC0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00415DC4:
    // 0x00415DC4: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x00415DC8: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x00415DCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00415DD0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415DD4: bne         $v0, $zero, L_00415D58
    if (ctx->r2 != 0) {
        // 0x00415DD8: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415D58;
    }
    // 0x00415DD8: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_00415DDC:
    // 0x00415DDC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00415DE0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x00415DE4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x00415DE8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00415DEC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00415DF0: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x00415DF4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x00415DF8: bltz        $v0, L_00415F98
    if (SIGNED(ctx->r2) < 0) {
        // 0x00415DFC: sw          $a1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r5;
            goto L_00415F98;
    }
    // 0x00415DFC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x00415E00: bltz        $a1, L_00415F98
    if (SIGNED(ctx->r5) < 0) {
        // 0x00415E04: nop
    
            goto L_00415F98;
    }
    // 0x00415E04: nop

    // 0x00415E08: lwc1        $f0, 0x288($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X288);
    // 0x00415E0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415E10: lwc1        $f1, 0xC3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC3C);
    // 0x00415E14: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x00415E18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00415E1C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00415E20: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00415E24: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00415E28: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00415E2C: lwc1        $f1, 0x290($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X290);
    // 0x00415E30: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00415E34: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00415E38: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00415E3C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00415E40: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00415E44: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x00415E48: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00415E4C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415E50: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00415E54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00415E58: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00415E5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415E60: lwc1        $f2, 0xC40($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XC40);
    // 0x00415E64: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00415E68: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00415E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415E70: slti        $v0, $v0, 0xDF
    ctx->r2 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
    // 0x00415E74: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00415E78: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00415E7C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x00415E80: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00415E84: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x00415E88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415E8C: lwc1        $f0, 0xC44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC44);
    // 0x00415E90: bne         $v0, $zero, L_00415EA0
    if (ctx->r2 != 0) {
        // 0x00415E94: nop
    
            goto L_00415EA0;
    }
    // 0x00415E94: nop

    // 0x00415E98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415E9C: lwc1        $f0, 0xC48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC48);
L_00415EA0:
    // 0x00415EA0: beq         $s4, $zero, L_00415ED4
    if (ctx->r20 == 0) {
        // 0x00415EA4: sub.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_00415ED4;
    }
    // 0x00415EA4: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00415EA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415EAC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00415EB0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00415EB4: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x00415EB8: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x00415EBC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415EC0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00415EC4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00415EC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415ECC: j           L_00415EE8
    // 0x00415ED0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
        goto L_00415EE8;
    // 0x00415ED0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_00415ED4:
    // 0x00415ED4: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x00415ED8: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x00415EDC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00415EE0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00415EE4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_00415EE8:
    // 0x00415EE8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415EEC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00415EF0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00415EF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415EF8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00415EFC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x00415F00: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415F04: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00415F08: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x00415F0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00415F10: jal         0x0027AF4C
    // 0x00415F14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_0027AF4C(rdram, ctx);
        goto after_1;
    // 0x00415F14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_1:
    // 0x00415F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00415F1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00415F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415F24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00415F28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415F2C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00415F30: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x00415F34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415F38: lwc1        $f0, 0xC4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC4C);
    // 0x00415F3C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00415F40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415F44: lwc1        $f1, 0xC50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC50);
    // 0x00415F48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00415F4C: nop

    // 0x00415F50: bc1tl       L_00415F68
    if (c1cs) {
        // 0x00415F54: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00415F68;
    }
    goto skip_1;
    // 0x00415F54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x00415F58: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415F5C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00415F60: j           L_00415F7C
    // 0x00415F64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
        goto L_00415F7C;
    // 0x00415F64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00415F68:
    // 0x00415F68: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00415F6C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00415F70: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00415F74: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00415F78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_00415F7C:
    // 0x00415F7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415F80: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415F84: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x00415F88: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x00415F8C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x00415F90: jal         0x002778A8
    // 0x00415F94: nop

    func_002778A8(rdram, ctx);
        goto after_2;
    // 0x00415F94: nop

    after_2:
L_00415F98:
    // 0x00415F98: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x00415F9C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x00415FA0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x00415FA4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x00415FA8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x00415FAC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x00415FB0: jr          $ra
    // 0x00415FB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x00415FB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00266380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00266384: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00266388: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026638C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00266390: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00266394: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00266398: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026639C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002663A0: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x002663A4: addiu       $s3, $v0, 0x14
    ctx->r19 = ADD32(ctx->r2, 0X14);
    // 0x002663A8: addiu       $v0, $zero, 0x64E
    ctx->r2 = ADD32(0, 0X64E);
    // 0x002663AC: bne         $v1, $v0, L_00266410
    if (ctx->r3 != ctx->r2) {
        // 0x002663B0: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00266410;
    }
    // 0x002663B0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002663B4: lb          $v1, 0x36($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X36);
    // 0x002663B8: lb          $v0, 0x34($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X34);
    // 0x002663BC: beq         $v1, $v0, L_00266410
    if (ctx->r3 == ctx->r2) {
        // 0x002663C0: nop
    
            goto L_00266410;
    }
    // 0x002663C0: nop

    // 0x002663C4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x002663C8: addiu       $s2, $s2, -0x6790
    ctx->r18 = ADD32(ctx->r18, -0X6790);
    // 0x002663CC: jal         0x002532B4
    // 0x002663D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002532B4(rdram, ctx);
        goto after_0;
    // 0x002663D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x002663D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002663D8: beq         $a0, $zero, L_00266410
    if (ctx->r4 == 0) {
        // 0x002663DC: nop
    
            goto L_00266410;
    }
    // 0x002663DC: nop

    // 0x002663E0: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x002663E4: bne         $v0, $zero, L_00266410
    if (ctx->r2 != 0) {
        // 0x002663E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00266410;
    }
    // 0x002663E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002663EC: lw          $a1, 0x518($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X518);
    // 0x002663F0: lbu         $v1, 0x3E($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3E);
    // 0x002663F4: bne         $v1, $v0, L_00266410
    if (ctx->r3 != ctx->r2) {
        // 0x002663F8: nop
    
            goto L_00266410;
    }
    // 0x002663F8: nop

    // 0x002663FC: sb          $zero, 0x3E($a1)
    MEM_B(0X3E, ctx->r5) = 0;
    // 0x00266400: lw          $v0, 0x518($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X518);
    // 0x00266404: sb          $v1, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r3;
    // 0x00266408: sw          $v1, 0x1480($s2)
    MEM_W(0X1480, ctx->r18) = ctx->r3;
    // 0x0026640C: sw          $v1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->r3;
L_00266410:
    // 0x00266410: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00266414: beq         $v0, $zero, L_00266474
    if (ctx->r2 == 0) {
        // 0x00266418: nop
    
            goto L_00266474;
    }
    // 0x00266418: nop

    // 0x0026641C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00266420: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00266424: beq         $v0, $zero, L_00266440
    if (ctx->r2 == 0) {
        // 0x00266428: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00266440;
    }
    // 0x00266428: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x0026642C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00266430: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266434: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00266438: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026643C: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_00266440:
    // 0x00266440: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x00266444: beq         $v0, $zero, L_00266458
    if (ctx->r2 == 0) {
        // 0x00266448: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00266458;
    }
    // 0x00266448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026644C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00266450: jal         0x00243414
    // 0x00266454: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00266454: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_00266458:
    // 0x00266458: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0026645C: addiu       $v0, $zero, 0x64C
    ctx->r2 = ADD32(0, 0X64C);
    // 0x00266460: bne         $v1, $v0, L_00266474
    if (ctx->r3 != ctx->r2) {
        // 0x00266464: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00266474;
    }
    // 0x00266464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00266468: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026646C: jal         0x00243414
    // 0x00266470: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00266470: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_00266474:
    // 0x00266474: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00266478: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0026647C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00266480: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00266484: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00266488: jr          $ra
    // 0x0026648C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026648C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0044B998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412AB4:
    // 0x0044B998: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
L_00412AE0:
    // 0x0044B99C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044B9A0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0044B9A4: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x0044B9A8: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0044B9AC: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0044B9B0: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x0044B9B4: bne         $v0, $zero, L_0044B9C8
    if (ctx->r2 != 0) {
        // 0x0044B9B8: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0044B9C8;
    }
    // 0x0044B9B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044B9BC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x0044B9C0: j           L_00412AE0
    // 0x0044B9C4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    entry_00412AE0(rdram, ctx);
    return;
    // 0x0044B9C4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_0044B9C8:
    // 0x0044B9C8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0044B9CC: jal         0x002017D4
    // 0x0044B9D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044B9D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044B9D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044B9D8: jal         0x002017D4
    // 0x0044B9DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044B9DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0044B9E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044B9E4: jal         0x002017D4
    // 0x0044B9E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044B9E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0044B9EC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0044B9F0: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x0044B9F4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0044B9F8: jal         0x004101B8
    // 0x0044B9FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_3;
    // 0x0044B9FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x0044BA00: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044BA04: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044BA08: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0044BA0C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0044BA10: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0044BA14: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0044BA18: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0044BA1C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0044BA20: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x0044BA24: bne         $v0, $zero, L_0044BA60
    if (ctx->r2 != 0) {
        // 0x0044BA28: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_0044BA60;
    }
    // 0x0044BA28: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0044BA2C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044BA30: lwc1        $f0, 0xAD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD8);
    // 0x0044BA34: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0044BA38: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x0044BA3C: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x0044BA40: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0044BA44: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x0044BA48: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0044BA4C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0044BA50: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0044BA54: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0044BA58: j           L_00412AB4
    // 0x0044BA5C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    entry_00412AB4(rdram, ctx);
    return;
    // 0x0044BA5C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_0044BA60:
    // 0x0044BA60: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0044BA64: jal         0x002017D4
    // 0x0044BA68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0044BA68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0044BA6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BA70: jal         0x002017D4
    // 0x0044BA74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0044BA74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0044BA78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BA7C: jal         0x002017D4
    // 0x0044BA80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0044BA80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x0044BA84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044BA88: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x0044BA8C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0044BA90: jal         0x004101B8
    // 0x0044BA94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_7;
    // 0x0044BA94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x0044BA98: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0044BA9C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0044BAA0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0044BAA4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0044BAA8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0044BAAC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0044BAB0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0044BAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044BAB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0044BABC: jal         0x0020EF2C
    // 0x0044BAC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x0044BAC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x0044BAC4: jal         0x0020F5C0
    // 0x0044BAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F5C0(rdram, ctx);
        goto after_9;
    // 0x0044BAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0044BACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044BAD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0044BAD4: jal         0x0020EAA0
    // 0x0044BAD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_0020EAA0(rdram, ctx);
        goto after_10;
    // 0x0044BAD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x0044BADC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x0044BAE0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x0044BAE4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0044BAE8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x0044BAEC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0044BAF0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x0044BAF4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0044BAF8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0044BAFC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0044BB00: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x0044BB04: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0044BB08: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0044BB0C: jr          $ra
    // 0x0044BB10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0044BB10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0041BFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BFD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041BFD4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041BFD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041BFDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041BFE0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0041BFE4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041BFE8: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041BFEC: beql        $v0, $zero, L_0041C004
    if (ctx->r2 == 0) {
        // 0x0041BFF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C004;
    }
    goto skip_0;
    // 0x0041BFF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041BFF4: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041BFF8: bnel        $v0, $zero, L_0041C000
    if (ctx->r2 != 0) {
        // 0x0041BFFC: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C000;
    }
    goto skip_1;
    // 0x0041BFFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C000:
    // 0x0041C000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041C004:
    // 0x0041C004: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041C008: lbu         $a1, 0x2C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2C);
    // 0x0041C00C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C014: jal         0x0041648C
    // 0x0041C018: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C018: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041C01C: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x0041C020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C028: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C02C: jr          $ra
    // 0x0041C030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002593A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002593A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002593A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002593AC: lw          $v1, 0x90($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X90);
    // 0x002593B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002593B4: bne         $v1, $v0, L_002593CC
    if (ctx->r3 != ctx->r2) {
        // 0x002593B8: nop
    
            goto L_002593CC;
    }
    // 0x002593B8: nop

    // 0x002593BC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002593C0: lw          $a1, 0x24C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24C);
    // 0x002593C4: jal         0x00210894
    // 0x002593C8: nop

    func_00210894(rdram, ctx);
        goto after_0;
    // 0x002593C8: nop

    after_0:
L_002593CC:
    // 0x002593CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002593D0: jr          $ra
    // 0x002593D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002593D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B734: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0045B738: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B73C: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B740: jr          $ra
    // 0x0045B744: nop

    return;
    // 0x0045B744: nop

;}
RECOMP_FUNC void func_0040E00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E00C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0040E010: sw          $zero, 0x28($a1)
    MEM_W(0X28, ctx->r5) = 0;
    // 0x0040E014: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x0040E018: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0040E01C: lw          $a2, 0x9C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X9C);
    // 0x0040E020: lw          $a3, 0xA0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XA0);
    // 0x0040E024: lw          $t0, 0xA4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XA4);
    // 0x0040E028: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x0040E02C: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x0040E030: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x0040E034: lw          $v0, 0xA8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XA8);
    // 0x0040E038: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x0040E03C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0040E040: addiu       $a1, $a1, 0x200
    ctx->r5 = ADD32(ctx->r5, 0X200);
    // 0x0040E044: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x0040E048: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x0040E04C: beq         $v1, $v0, L_0040E090
    if (ctx->r3 == ctx->r2) {
            // 0x0040E050: slti        $v0, $v1, 0x456
    ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
    func_0040E090(rdram, ctx);
    return;
    }
    // 0x0040E050: slti        $v0, $v1, 0x456
    ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
    // 0x0040E054: beq         $v0, $zero, L_0040E06C
    if (ctx->r2 == 0) {
            // 0x0040E058: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    func_0040E06C(rdram, ctx);
    return;
    }
    // 0x0040E058: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x0040E05C: beq         $v1, $v0, L_0040E080
    if (ctx->r3 == ctx->r2) {
            // 0x0040E060: nop

    func_0040E080(rdram, ctx);
    return;
    }
    // 0x0040E060: nop

    // 0x0040E064: jr          $ra
    // 0x0040E068: nop

    return;
    // 0x0040E068: nop

;}
RECOMP_FUNC void func_0041363C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041363C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x00413640: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x00413644: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00413648: sw          $ra, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r31;
    // 0x0041364C: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x00413650: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x00413654: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x00413658: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x0041365C: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x00413660: lw          $a0, 0x44($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X44);
    // 0x00413664: jal         0x00416B28
    // 0x00413668: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    func_00416B28(rdram, ctx);
        goto after_0;
    // 0x00413668: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0041366C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413670: lwc1        $f0, 0xB98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB98);
    // 0x00413674: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00413678: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    // 0x0041367C: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x00413680: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00413684: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00413688: beq         $v0, $zero, L_00413E08
    if (ctx->r2 == 0) {
        // 0x0041368C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00413E08;
    }
    // 0x0041368C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00413690: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413694: addu        $at, $at, $v0
    gpr jr_addend_0041369C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00413698: lw          $v0, 0xBA0($at)
    ctx->r2 = ADD32(ctx->r1, 0XBA0);
    // 0x0041369C: jr          $v0
    // 0x004136A0: nop

    switch (jr_addend_0041369C >> 2) {
        case 0: goto L_004136A4; break;
        case 1: goto L_00413A78; break;
        case 2: goto L_00413B88; break;
        case 3: goto L_00413DAC; break;
        case 4: goto L_00413958; break;
        case 5: goto L_004136A4; break;
        default: switch_error(__func__, 0x0041369C, 0x800C0BA0);
    }
    // 0x004136A0: nop

L_004136A4:
    // 0x004136A4: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x004136A8: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x004136AC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x004136B0: beq         $v1, $v0, L_00413758
    if (ctx->r3 == ctx->r2) {
        // 0x004136B4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413758;
    }
    // 0x004136B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004136B8: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x004136BC: beq         $v0, $zero, L_00413700
    if (ctx->r2 == 0) {
        // 0x004136C0: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_00413700;
    }
    // 0x004136C0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x004136C4: beq         $v1, $v0, L_00413740
    if (ctx->r3 == ctx->r2) {
        // 0x004136C8: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_00413740;
    }
    // 0x004136C8: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x004136CC: beq         $v0, $zero, L_004136E4
    if (ctx->r2 == 0) {
        // 0x004136D0: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_004136E4;
    }
    // 0x004136D0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x004136D4: beq         $v1, $v0, L_0041377C
    if (ctx->r3 == ctx->r2) {
        // 0x004136D8: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_0041377C;
    }
    // 0x004136D8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x004136DC: j           L_00413784
    // 0x004136E0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413784;
    // 0x004136E0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_004136E4:
    // 0x004136E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004136E8: beq         $v1, $v0, L_00413748
    if (ctx->r3 == ctx->r2) {
        // 0x004136EC: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_00413748;
    }
    // 0x004136EC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004136F0: beq         $v1, $v0, L_00413750
    if (ctx->r3 == ctx->r2) {
        // 0x004136F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413750;
    }
    // 0x004136F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004136F8: j           L_00413780
    // 0x004136FC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413780;
    // 0x004136FC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413700:
    // 0x00413700: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x00413704: beq         $v1, $v0, L_00413768
    if (ctx->r3 == ctx->r2) {
        // 0x00413708: sltiu       $v0, $v1, 0x801
        ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
            goto L_00413768;
    }
    // 0x00413708: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x0041370C: beq         $v0, $zero, L_00413724
    if (ctx->r2 == 0) {
        // 0x00413710: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_00413724;
    }
    // 0x00413710: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x00413714: beq         $v1, $v0, L_00413760
    if (ctx->r3 == ctx->r2) {
        // 0x00413718: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413760;
    }
    // 0x00413718: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041371C: j           L_00413780
    // 0x00413720: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413780;
    // 0x00413720: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413724:
    // 0x00413724: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x00413728: beq         $v1, $v0, L_00413770
    if (ctx->r3 == ctx->r2) {
        // 0x0041372C: addiu       $v0, $zero, 0x2000
        ctx->r2 = ADD32(0, 0X2000);
            goto L_00413770;
    }
    // 0x0041372C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00413730: beq         $v1, $v0, L_00413778
    if (ctx->r3 == ctx->r2) {
        // 0x00413734: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413778;
    }
    // 0x00413734: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00413738: j           L_00413780
    // 0x0041373C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413780;
    // 0x0041373C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413740:
    // 0x00413740: j           L_0041377C
    // 0x00413744: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_0041377C;
    // 0x00413744: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00413748:
    // 0x00413748: j           L_0041377C
    // 0x0041374C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_0041377C;
    // 0x0041374C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_00413750:
    // 0x00413750: j           L_0041377C
    // 0x00413754: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_0041377C;
    // 0x00413754: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413758:
    // 0x00413758: j           L_0041377C
    // 0x0041375C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_0041377C;
    // 0x0041375C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413760:
    // 0x00413760: j           L_0041377C
    // 0x00413764: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_0041377C;
    // 0x00413764: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413768:
    // 0x00413768: j           L_0041377C
    // 0x0041376C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_0041377C;
    // 0x0041376C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_00413770:
    // 0x00413770: j           L_0041377C
    // 0x00413774: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
        goto L_0041377C;
    // 0x00413774: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_00413778:
    // 0x00413778: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0041377C:
    // 0x0041377C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413780:
    // 0x00413780: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413784:
    // 0x00413784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413788: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041378C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413790: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413794: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00413798: bne         $v0, $zero, L_004137E8
    if (ctx->r2 != 0) {
        // 0x0041379C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004137E8;
    }
    // 0x0041379C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004137A0: lwc1        $f20, 0x4($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X4);
    // 0x004137A4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004137A8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137AC: bne         $v1, $v0, L_004137C4
    if (ctx->r3 != ctx->r2) {
        // 0x004137B0: nop
    
            goto L_004137C4;
    }
    // 0x004137B0: nop

    // 0x004137B4: jal         0x00413230
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_1;
    // 0x004137B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x004137BC: j           L_004137C8
    // 0x004137C0: nop

        goto L_004137C8;
    // 0x004137C0: nop

L_004137C4:
    // 0x004137C4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_004137C8:
    // 0x004137C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x004137CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004137D0: jal         0x004163C0
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_2;
    // 0x004137D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x004137D8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004137DC: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x004137E0: j           L_0041384C
    // 0x004137E4: nop

        goto L_0041384C;
    // 0x004137E4: nop

L_004137E8:
    // 0x004137E8: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004137EC: bne         $v1, $v0, L_00413804
    if (ctx->r3 != ctx->r2) {
        // 0x004137F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00413804;
    }
    // 0x004137F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004137F4: jal         0x00413230
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00413230(rdram, ctx);
        goto after_3;
    // 0x004137F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x004137FC: j           L_00413808
    // 0x00413800: nop

        goto L_00413808;
    // 0x00413800: nop

L_00413804:
    // 0x00413804: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
L_00413808:
    // 0x00413808: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041380C: nop
    
            goto L_0041383C;
    }
    // 0x0041380C: nop

    // 0x00413810: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413814: beq         $v1, $zero, L_0041383C
    if (ctx->r3 == 0) {
        // 0x00413818: nop
    
            goto L_0041383C;
    }
    // 0x00413818: nop

    // 0x0041381C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_00413820:
    // 0x00413820: beq         $v1, $a0, L_0041383C
    if (ctx->r3 == ctx->r4) {
        // 0x00413824: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0041383C;
    }
    // 0x00413824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00413828: beq         $v0, $zero, L_0041383C
    if (ctx->r2 == 0) {
        // 0x0041382C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041383C;
    }
    // 0x0041382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00413830: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00413834: bne         $v1, $zero, L_00413820
    if (ctx->r3 != 0) {
        // 0x00413838: nop
    
            goto L_00413820;
    }
    // 0x00413838: nop

L_0041383C:
    // 0x0041383C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413840: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413844: mflo        $t0
    ctx->r8 = lo;
    // 0x00413848: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
L_0041384C:
    // 0x0041384C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413858: beq         $v0, $zero, L_00413888
    if (ctx->r2 == 0) {
        // 0x0041385C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00413888;
    }
    // 0x0041385C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00413860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413864: lwc1        $f1, 0xBB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBB8);
    // 0x00413868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041386C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413874: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413878: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041387C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413880: j           L_0041391C
    // 0x00413884: nop

        goto L_0041391C;
    // 0x00413884: nop

L_00413888:
    // 0x00413888: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0041388C: bne         $v1, $v0, L_004138E4
    if (ctx->r3 != ctx->r2) {
        // 0x00413890: nop
    
            goto L_004138E4;
    }
    // 0x00413890: nop

    // 0x00413894: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413898: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0041389C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x004138A0: bne         $v0, $zero, L_004138E4
    if (ctx->r2 != 0) {
        // 0x004138A4: nop
    
            goto L_004138E4;
    }
    // 0x004138A4: nop

    // 0x004138A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138AC: lwc1        $f1, 0xBBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBBC);
    // 0x004138B0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004138B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004138B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004138BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004138C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004138C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004138CC: lwc1        $f1, 0xBC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC0);
    // 0x004138D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004138D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004138D8: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x004138DC: j           L_0041391C
    // 0x004138E0: nop

        goto L_0041391C;
    // 0x004138E0: nop

L_004138E4:
    // 0x004138E4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004138E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004138EC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004138F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004138F4: mflo        $v1
    ctx->r3 = lo;
    // 0x004138F8: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x004138FC: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413900: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413904: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413908: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x0041390C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413910: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413914: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413918: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_0041391C:
    // 0x0041391C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00413920: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413924: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00413928: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041392C: mflo        $v1
    ctx->r3 = lo;
    // 0x00413930: lui         $v0, 0xE6C2
    ctx->r2 = S32(0XE6C2 << 16);
    // 0x00413934: ori         $v0, $v0, 0xB449
    ctx->r2 = ctx->r2 | 0XB449;
    // 0x00413938: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041393C: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413940: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413944: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00413948: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0041394C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413950: j           L_00413E14
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
        goto L_00413E14;
    // 0x00413954: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413958:
    // 0x00413958: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0041395C: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x00413960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00413964: beq         $v1, $v0, L_00413A0C
    if (ctx->r3 == ctx->r2) {
        // 0x00413968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A0C;
    }
    // 0x00413968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041396C: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x00413970: beq         $v0, $zero, L_004139BC
    if (ctx->r2 == 0) {
        // 0x00413974: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004139BC;
    }
    // 0x00413974: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00413978: beql        $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x0041397C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00413A20;
    }
    goto skip_0;
    // 0x0041397C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00413980: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x00413984: beq         $v0, $zero, L_0041399C
    if (ctx->r2 == 0) {
        // 0x00413988: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041399C;
    }
    // 0x00413988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041398C: beq         $v1, $v0, L_00413A24
    if (ctx->r3 == ctx->r2) {
        // 0x00413990: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00413A24;
    }
    // 0x00413990: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00413994: j           L_00413A28
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00413A28;
    // 0x00413998: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0041399C:
    // 0x0041399C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004139A0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139A4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00413A20;
    }
    // 0x004139A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x004139A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004139AC: beq         $v1, $v0, L_00413A04
    if (ctx->r3 == ctx->r2) {
        // 0x004139B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A04;
    }
    // 0x004139B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139B4: j           L_00413A24
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139BC:
    // 0x004139BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004139C0: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139C4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_00413A20;
    }
    // 0x004139C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x004139C8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004139CC: beq         $v0, $zero, L_004139E4
    if (ctx->r2 == 0) {
        // 0x004139D0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004139E4;
    }
    // 0x004139D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004139D4: beq         $v1, $v0, L_00413A14
    if (ctx->r3 == ctx->r2) {
        // 0x004139D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A14;
    }
    // 0x004139D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139DC: j           L_00413A24
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x004139E0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004139E4:
    // 0x004139E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004139E8: beq         $v1, $v0, L_00413A20
    if (ctx->r3 == ctx->r2) {
        // 0x004139EC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_00413A20;
    }
    // 0x004139EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x004139F0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004139F4: beq         $v1, $v0, L_00413A1C
    if (ctx->r3 == ctx->r2) {
        // 0x004139F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00413A1C;
    }
    // 0x004139F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004139FC: j           L_00413A24
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00413A24;
    // 0x00413A00: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A04:
    // 0x00413A04: j           L_00413A20
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00413A20;
    // 0x00413A08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00413A0C:
    // 0x00413A0C: j           L_00413A20
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00413A20;
    // 0x00413A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00413A14:
    // 0x00413A14: j           L_00413A20
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_00413A20;
    // 0x00413A18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00413A1C:
    // 0x00413A1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_00413A20:
    // 0x00413A20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00413A24:
    // 0x00413A24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00413A28:
    // 0x00413A28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00413A2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413A30: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00413A34: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00413A38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00413A3C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413A40: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00413A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413A48: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413A4C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A50: mflo        $v1
    ctx->r3 = lo;
    // 0x00413A54: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413A58: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413A5C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413A60: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413A64: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413A68: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413A6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413A70: j           L_00413E10
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00413E10;
    // 0x00413A74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_00413A78:
    // 0x00413A78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413A7C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413A80: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00413A84: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00413A88: bne         $v1, $v0, L_00413AA0
    if (ctx->r3 != ctx->r2) {
        // 0x00413A8C: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_00413AA0;
    }
    // 0x00413A8C: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413A90: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413A98: bne         $v0, $zero, L_00413ACC
    if (ctx->r2 != 0) {
        // 0x00413A9C: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ACC;
    }
    // 0x00413A9C: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413AA0:
    // 0x00413AA0: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413AA4: beq         $v0, $zero, L_00413ADC
    if (ctx->r2 == 0) {
        // 0x00413AA8: nop
    
            goto L_00413ADC;
    }
    // 0x00413AA8: nop

    // 0x00413AAC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AB0: bgez        $v0, L_00413ADC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413AB4: nop
    
            goto L_00413ADC;
    }
    // 0x00413AB4: nop

    // 0x00413AB8: jal         0x00266B80
    // 0x00413ABC: nop

    func_00266B80(rdram, ctx);
        goto after_4;
    // 0x00413ABC: nop

    after_4:
    // 0x00413AC0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413AC4: bne         $v0, $v1, L_00413ADC
    if (ctx->r2 != ctx->r3) {
        // 0x00413AC8: addiu       $v0, $zero, 0x11C
        ctx->r2 = ADD32(0, 0X11C);
            goto L_00413ADC;
    }
    // 0x00413AC8: addiu       $v0, $zero, 0x11C
    ctx->r2 = ADD32(0, 0X11C);
L_00413ACC:
    // 0x00413ACC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x00413AD0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x00413AD4: j           L_00413AF0
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
        goto L_00413AF0;
    // 0x00413AD8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413ADC:
    // 0x00413ADC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00413AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00413AE4: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x00413AE8: jal         0x0027AEA8
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    func_0027AEA8(rdram, ctx);
        goto after_5;
    // 0x00413AEC: addiu       $a3, $s2, 0x8
    ctx->r7 = ADD32(ctx->r18, 0X8);
    after_5:
L_00413AF0:
    // 0x00413AF0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00413AF4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00413AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413AFC: beq         $v0, $zero, L_00413B4C
    if (ctx->r2 == 0) {
        // 0x00413B00: nop
    
            goto L_00413B4C;
    }
    // 0x00413B00: nop

    // 0x00413B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00413B08: lwc1        $f3, 0x4($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413B0C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00413B10: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00413B14: nop

    // 0x00413B18: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B1C: nop
    
            goto L_00413B4C;
    }
    // 0x00413B1C: nop

    // 0x00413B20: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00413B24: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00413B28: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00413B2C: nop

    // 0x00413B30: bc1t        L_00413B4C
    if (c1cs) {
        // 0x00413B34: nop
    
            goto L_00413B4C;
    }
    // 0x00413B34: nop

    // 0x00413B38: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x00413B3C: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413B40: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00413B44: j           L_00413B7C
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
        goto L_00413B7C;
    // 0x00413B48: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
L_00413B4C:
    // 0x00413B4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B50: lwc1        $f1, 0xBC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC4);
    // 0x00413B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B58: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00413B5C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B60: mul.s       $f3, $f0, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B68: lwc1        $f1, 0xBC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBC8);
    // 0x00413B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413B70: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00413B74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413B78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00413B7C:
    // 0x00413B7C: swc1        $f3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00413B80: j           L_00413E14
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
        goto L_00413E14;
    // 0x00413B84: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
L_00413B88:
    // 0x00413B88: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x00413B8C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413B90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413B94:
    // 0x00413B94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413B98: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413B9C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BA0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BA4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BAC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BB0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BB8: bne         $v0, $a0, L_00413B94
    if (ctx->r2 != ctx->r4) {
        // 0x00413BBC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413B94;
    }
    // 0x00413BBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413BC0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BC8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413BCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413BD0: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413BD4:
    // 0x00413BD4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413BD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413BDC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413BE0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413BE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413BE8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413BEC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413BF0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413BF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413BF8: bne         $v0, $a0, L_00413BD4
    if (ctx->r2 != ctx->r4) {
        // 0x00413BFC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413BD4;
    }
    // 0x00413BFC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x00413C08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C0C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C10: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C14: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C18: jal         0x0041363C
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_6;
    // 0x00413C1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_6:
    // 0x00413C20: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x00413C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413C28: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413C2C:
    // 0x00413C2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C50: bne         $v0, $a0, L_00413C2C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C2C;
    }
    // 0x00413C54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C60: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413C64: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413C68: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413C6C:
    // 0x00413C6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413C70: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413C74: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413C78: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413C7C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413C80: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413C84: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413C88: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413C90: bne         $v0, $a0, L_00413C6C
    if (ctx->r2 != ctx->r4) {
        // 0x00413C94: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413C6C;
    }
    // 0x00413C94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413C98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413C9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x00413CA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CA4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CA8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413CB8: jal         0x0041363C
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_7;
    // 0x00413CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_7:
    // 0x00413CC0: addiu       $v1, $sp, 0x88
    ctx->r3 = ADD32(ctx->r29, 0X88);
    // 0x00413CC4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00413CC8: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_00413CCC:
    // 0x00413CCC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CD0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413CD4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413CD8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413CDC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413CE0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413CE4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413CE8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413CEC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413CF0: bne         $v0, $a0, L_00413CCC
    if (ctx->r2 != ctx->r4) {
        // 0x00413CF4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413CCC;
    }
    // 0x00413CF4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413CF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413CFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D00: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00413D04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00413D08: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
L_00413D0C:
    // 0x00413D0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D10: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D14: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00413D18: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00413D1C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D20: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D24: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00413D28: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00413D2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00413D30: bne         $v0, $a0, L_00413D0C
    if (ctx->r2 != ctx->r4) {
        // 0x00413D34: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00413D0C;
    }
    // 0x00413D34: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00413D38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00413D3C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00413D40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00413D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00413D48: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00413D4C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00413D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00413D58: jal         0x0041363C
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_8;
    // 0x00413D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_8:
    // 0x00413D60: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x00413D64: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00413D68: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00413D6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413D70: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00413D74: bnel        $v0, $zero, L_00413D7C
    if (ctx->r2 != 0) {
        // 0x00413D78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00413D7C;
    }
    goto skip_1;
    // 0x00413D78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_00413D7C:
    // 0x00413D7C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00413D80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00413D84: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00413D88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x00413D8C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00413D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413D94: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00413D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00413D9C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00413DA0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00413DA4: j           L_00413E14
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
        goto L_00413E14;
    // 0x00413DA8: sw          $a0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r4;
L_00413DAC:
    // 0x00413DAC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00413DB0: lwc1        $f1, 0x288($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00413DB4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x00413DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DC4: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00413DC8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DCC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DD0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DD4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x00413DD8: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00413DDC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00413DE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413DE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413DEC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00413DF0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413DF4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413DF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413DFC: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x00413E00: j           L_00413E14
    // 0x00413E04: nop

        goto L_00413E14;
    // 0x00413E04: nop

L_00413E08:
    // 0x00413E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00413E0C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_00413E10:
    // 0x00413E10: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
L_00413E14:
    // 0x00413E14: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x00413E18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00413E1C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00413E20: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E24: mflo        $v0
    ctx->r2 = lo;
    // 0x00413E28: lui         $v1, 0xE6C2
    ctx->r3 = S32(0XE6C2 << 16);
    // 0x00413E2C: ori         $v1, $v1, 0xB449
    ctx->r3 = ctx->r3 | 0XB449;
    // 0x00413E30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413E34: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413E38: mfhi        $v1
    ctx->r3 = hi;
    // 0x00413E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00413E40: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00413E44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00413E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00413E4C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00413E50: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E54: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x00413E58: bne         $v0, $zero, L_00413E8C
    if (ctx->r2 != 0) {
        // 0x00413E5C: andi        $v0, $a0, 0x4000
        ctx->r2 = ctx->r4 & 0X4000;
            goto L_00413E8C;
    }
    // 0x00413E5C: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00413E60: beq         $v0, $zero, L_00413E84
    if (ctx->r2 == 0) {
        // 0x00413E64: nop
    
            goto L_00413E84;
    }
    // 0x00413E64: nop

    // 0x00413E68: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00413E6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413E70: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413E74: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413E78: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    // 0x00413E7C: j           L_00413E8C
    // 0x00413E80: nop

        goto L_00413E8C;
    // 0x00413E80: nop

L_00413E84:
    // 0x00413E84: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413E88: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
L_00413E8C:
    // 0x00413E8C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00413E90: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00413E94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413E98: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413E9C: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00413EA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413EA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413EA8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413EAC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00413EB0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413EB4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x00413EB8: lh          $v1, 0xE($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XE);
    // 0x00413EBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x00413EC4: lui         $v0, 0x939A
    ctx->r2 = S32(0X939A << 16);
    // 0x00413EC8: ori         $v0, $v0, 0x85C5
    ctx->r2 = ctx->r2 | 0X85C5;
    // 0x00413ECC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00413ED0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x00413ED4: mfhi        $t4
    ctx->r12 = hi;
    // 0x00413ED8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x00413EDC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00413EE0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00413EE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00413EE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413EEC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413EF0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00413EF4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413EF8: bne         $v0, $zero, L_00413F30
    if (ctx->r2 != 0) {
        // 0x00413EFC: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_00413F30;
    }
    // 0x00413EFC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00413F00: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00413F04: beq         $v0, $zero, L_00413F28
    if (ctx->r2 == 0) {
        // 0x00413F08: nop
    
            goto L_00413F28;
    }
    // 0x00413F08: nop

    // 0x00413F0C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x00413F10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F14: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F18: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F1C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
    // 0x00413F20: j           L_00413F30
    // 0x00413F24: nop

        goto L_00413F30;
    // 0x00413F24: nop

L_00413F28:
    // 0x00413F28: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00413F2C: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_00413F30:
    // 0x00413F30: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00413F34: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00413F38: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00413F3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413F40: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x00413F44: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00413F48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00413F4C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00413F50: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x00413F54: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x00413F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00413F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00413F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00413F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00413F68: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00413F6C: jr          $ra
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00413F70: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
