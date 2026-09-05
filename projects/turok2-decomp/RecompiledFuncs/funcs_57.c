#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029D364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D364: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x0029D368: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x0029D36C: ldc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC0);
    // 0x0029D370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029D374: lui         $a3, 0xA460
    ctx->r7 = S32(0XA460 << 16);
    // 0x0029D378: ori         $a3, $a3, 0x24
    ctx->r7 = ctx->r7 | 0X24;
    // 0x0029D37C: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x0029D380: ori         $t0, $t0, 0x28
    ctx->r8 = ctx->r8 | 0X28;
    // 0x0029D384: lui         $a1, 0xA460
    ctx->r5 = S32(0XA460 << 16);
    // 0x0029D388: ori         $a1, $a1, 0x2C
    ctx->r5 = ctx->r5 | 0X2C;
    // 0x0029D38C: lui         $a2, 0xA460
    ctx->r6 = S32(0XA460 << 16);
    // 0x0029D390: ori         $a2, $a2, 0x30
    ctx->r6 = ctx->r6 | 0X30;
    // 0x0029D394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029D398: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029D39C: addiu       $s0, $s0, 0x3A60
    ctx->r16 = ADD32(ctx->r16, 0X3A60);
    // 0x0029D3A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x0029D3A4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0029D3A8: lui         $v0, 0xA500
    ctx->r2 = S32(0XA500 << 16);
    // 0x0029D3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029D3B0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0029D3B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0029D3B8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x0029D3BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0029D3C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x0029D3C4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x0029D3C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029D3CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x0029D3D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0029D3D4: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x0029D3D8: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x0029D3DC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0029D3E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0029D3E4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0029D3E8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0029D3EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029D3F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029D3F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0029D3F8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x0029D3FC: jal         0x00266C5C
    // 0x0029D400: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0029D400: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    after_0:
    // 0x0029D404: jal         0x0029DFF0
    // 0x0029D408: nop

    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x0029D408: nop

    after_1:
    // 0x0029D40C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029D410: addiu       $v1, $v1, -0x7684
    ctx->r3 = ADD32(ctx->r3, -0X7684);
    // 0x0029D414: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0029D418: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029D41C: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x0029D420: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029D424: sw          $s0, 0x3AD4($at)
    MEM_W(0X3AD4, ctx->r1) = ctx->r16;
    // 0x0029D428: jal         0x0029E010
    // 0x0029D42C: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x0029D42C: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    after_2:
    // 0x0029D430: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0029D434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029D438: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029D43C: jr          $ra
    // 0x0029D440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029D440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275868: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0027586C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275870: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275874: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275878: jal         0x002708C0
    // 0x0027587C: nop

    func_002708C0(rdram, ctx);
        goto after_0;
    // 0x0027587C: nop

    after_0:
    // 0x00275880: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275884: jr          $ra
    // 0x00275888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00423884: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423888: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0042388C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00423890: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00423894: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423898: sw          $v1, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = ctx->r3;
    // 0x0042389C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004238A0: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x004238A4: beq         $v0, $zero, L_004238BC
    if (ctx->r2 == 0) {
        // 0x004238A8: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_004238BC;
    }
    // 0x004238A8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x004238AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004238B0: sw          $v1, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r3;
    // 0x004238B4: j           L_00423920
    // 0x004238B8: nop

        goto L_00423920;
    // 0x004238B8: nop

L_004238BC:
    // 0x004238BC: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x004238C0: beq         $v0, $zero, L_004238D4
    if (ctx->r2 == 0) {
        // 0x004238C4: nop
    
            goto L_004238D4;
    }
    // 0x004238C4: nop

    // 0x004238C8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x004238CC: j           L_004238DC
    // 0x004238D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_004238DC;
    // 0x004238D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_004238D4:
    // 0x004238D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004238D8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_004238DC:
    // 0x004238DC: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x004238E0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004238E4: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x004238E8: beq         $v1, $v0, L_00423900
    if (ctx->r3 == ctx->r2) {
        // 0x004238EC: nop
    
            goto L_00423900;
    }
    // 0x004238EC: nop

    // 0x004238F0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004238F4: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004238F8: bnel        $v1, $v0, L_0042390C
    if (ctx->r3 != ctx->r2) {
        // 0x004238FC: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0042390C;
    }
    goto skip_0;
    // 0x004238FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423900:
    // 0x00423900: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423904: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00423908: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0042390C:
    // 0x0042390C: lw          $a1, 0x24($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X24);
    // 0x00423910: lw          $a2, 0x1C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1C);
    // 0x00423914: lw          $a3, 0x20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X20);
    // 0x00423918: jal         0x00416644
    // 0x0042391C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042391C: nop

    after_0:
L_00423920:
    // 0x00423920: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00423924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423928: jr          $ra
    // 0x0042392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00268120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268120: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00268124: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00268128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026812C: beq         $v1, $v0, L_0026813C
    if (ctx->r3 == ctx->r2) {
            // 0x00268130: nop

    func_0026813C(rdram, ctx);
    return;
    }
    // 0x00268130: nop

    // 0x00268134: jr          $ra
    // 0x00268138: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268138: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00232E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232E80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00232E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00232E88: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x00232E8C: nop

    // 0x00232E90: bc1t        L_00232EA0
    if (c1cs) {
        // 0x00232E94: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00232EA0;
    }
    // 0x00232E94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00232E98: jal         0x0021149C
    // 0x00232E9C: nop

    func_0021149C(rdram, ctx);
        goto after_0;
    // 0x00232E9C: nop

    after_0:
L_00232EA0:
    // 0x00232EA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00232EA4: jr          $ra
    // 0x00232EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00232EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00405958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405958: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x0040595C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x00405960: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00405964: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x00405968: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0040596C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00405970: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00405974: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00405978: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0040597C: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x00405980: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00405984: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x00405988: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040598C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405990: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x00405994: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00405998: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0040599C: jal         0x00246108
    // 0x004059A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004059A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004059A4: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x004059A8: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x004059AC: addiu       $a1, $zero, 0x4B00
    ctx->r5 = ADD32(0, 0X4B00);
    // 0x004059B0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x004059B4: addiu       $s1, $s1, -0x9F8
    ctx->r17 = ADD32(ctx->r17, -0X9F8);
    // 0x004059B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004059BC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x004059C0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x004059C4: bne         $v1, $zero, L_004059D0
    if (ctx->r3 != 0) {
        // 0x004059C8: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_004059D0;
    }
    // 0x004059C8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004059CC: addiu       $a1, $zero, 0x2580
    ctx->r5 = ADD32(0, 0X2580);
L_004059D0:
    // 0x004059D0: lw          $v0, 0x3E4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3E4);
    // 0x004059D4: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x004059D8: bne         $v0, $zero, L_00405A1C
    if (ctx->r2 != 0) {
        // 0x004059DC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405A1C;
    }
    // 0x004059DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004059E0: jal         0x00246918
    // 0x004059E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00246918(rdram, ctx);
        goto after_1;
    // 0x004059E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x004059E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004059EC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004059F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x004059F4: lw          $v1, 0x3C0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C0);
    // 0x004059F8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x004059FC: sllv        $v1, $s4, $v1
    ctx->r3 = S32(ctx->r20 << (ctx->r3 & 31));
    // 0x00405A00: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00405A04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00405A08: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x00405A0C: jal         0x00243414
    // 0x00405A10: sb          $zero, 0x3C9($s1)
    MEM_B(0X3C9, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00405A10: sb          $zero, 0x3C9($s1)
    MEM_B(0X3C9, ctx->r17) = 0;
    after_2:
    // 0x00405A14: j           L_00405AA8
    // 0x00405A18: nop

        goto L_00405AA8;
    // 0x00405A18: nop

L_00405A1C:
    // 0x00405A1C: lwc1        $f1, 0x3E8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X3E8);
    // 0x00405A20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00405A24: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00405A28: nop

    // 0x00405A2C: bc1f        L_00405A98
    if (!c1cs) {
        // 0x00405A30: nop
    
            goto L_00405A98;
    }
    // 0x00405A30: nop

    // 0x00405A34: jal         0x00246918
    // 0x00405A38: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00246918(rdram, ctx);
        goto after_3;
    // 0x00405A38: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00405A3C: lw          $v0, 0x3C0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C0);
    // 0x00405A40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405A44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405A48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00405A4C: lw          $v1, -0x658($at)
    ctx->r3 = MEM_W(ctx->r1, -0X658);
    // 0x00405A50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00405A54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405A58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00405A5C: sw          $v1, -0x678($at)
    MEM_W(-0X678, ctx->r1) = ctx->r3;
    // 0x00405A60: lw          $v1, 0x3C0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C0);
    // 0x00405A64: lw          $v0, 0x3C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C4);
    // 0x00405A68: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00405A6C: sb          $zero, 0x3C9($s1)
    MEM_B(0X3C9, ctx->r17) = 0;
    // 0x00405A70: sllv        $v1, $s4, $v1
    ctx->r3 = S32(ctx->r20 << (ctx->r3 & 31));
    // 0x00405A74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00405A78: sw          $v0, 0x3C4($s1)
    MEM_W(0X3C4, ctx->r17) = ctx->r2;
    // 0x00405A7C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00405A80: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00405A84: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00405A88: jal         0x00243414
    // 0x00405A8C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00405A8C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    after_4:
    // 0x00405A90: j           L_00405AA8
    // 0x00405A94: nop

        goto L_00405AA8;
    // 0x00405A94: nop

L_00405A98:
    // 0x00405A98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00405A9C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00405AA0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00405AA4: swc1        $f0, 0x3E8($s1)
    MEM_W(0X3E8, ctx->r17) = ctx->f0.u32l;
L_00405AA8:
    // 0x00405AA8: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x00405AAC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00405AB0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00405AB4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405AB8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405ABC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00405AC0: jr          $ra
    // 0x00405AC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405AC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00289758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028975C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289760: jal         0x0028908C
    // 0x00289764: nop

    func_0028908C(rdram, ctx);
        goto after_0;
    // 0x00289764: nop

    after_0:
    // 0x00289768: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028976C: jr          $ra
    // 0x00289770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027682C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027682C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x00276830: jr          $ra
    // 0x00276834: nop

    return;
    // 0x00276834: nop

;}
RECOMP_FUNC void func_002591F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002591F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002591F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002591FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00259200: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00259204: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00259208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025920C: lb          $v0, 0x34($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X34);
    // 0x00259210: lw          $s1, 0x1A8($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X1A8);
    // 0x00259214: beq         $v0, $v1, L_00259234
    if (ctx->r2 == ctx->r3) {
        // 0x00259218: nop
    
            goto L_00259234;
    }
    // 0x00259218: nop

    // 0x0025921C: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00259220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259224: lwc1        $f14, 0x72D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X72D4);
    // 0x00259228: jal         0x0021170C
    // 0x0025922C: nop

    func_0021170C(rdram, ctx);
        goto after_0;
    // 0x0025922C: nop

    after_0:
    // 0x00259230: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
L_00259234:
    // 0x00259234: lwc1        $f0, 0x110($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00259238: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025923C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00259240: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00259244: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00259248: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
    // 0x0025924C: lwc1        $f2, 0x110($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00259250: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00259254: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00259258: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0025925C: swc1        $f1, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00259260: lw          $v0, 0xA50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA50);
    // 0x00259264: bc1f        L_00259290
    if (!c1cs) {
        // 0x00259268: nop
    
            goto L_00259290;
    }
    // 0x00259268: nop

    // 0x0025926C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259270: lwc1        $f0, 0x72D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72D8);
    // 0x00259274: neg.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = -ctx->f2.fl;
    // 0x00259278: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025927C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259280: lwc1        $f0, 0x72DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72DC);
    // 0x00259284: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00259288: j           L_002592A8
    // 0x0025928C: nop

        goto L_002592A8;
    // 0x0025928C: nop

L_00259290:
    // 0x00259290: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259294: lwc1        $f0, 0x72E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72E0);
    // 0x00259298: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0025929C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002592A0: lwc1        $f1, 0x72E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X72E4);
    // 0x002592A4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_002592A8:
    // 0x002592A8: nop

    // 0x002592AC: bc1t        L_002592F8
    if (c1cs) {
        // 0x002592B0: nop
    
            goto L_002592F8;
    }
    // 0x002592B0: nop

    // 0x002592B4: lwc1        $f2, 0x110($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X110);
    // 0x002592B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002592BC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002592C0: nop

    // 0x002592C4: bc1f        L_002592E4
    if (!c1cs) {
        // 0x002592C8: nop
    
            goto L_002592E4;
    }
    // 0x002592C8: nop

    // 0x002592CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002592D0: lwc1        $f1, 0x72E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X72E8);
    // 0x002592D4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002592D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002592DC: j           L_00259304
    // 0x002592E0: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
        goto L_00259304;
    // 0x002592E0: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
L_002592E4:
    // 0x002592E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002592E8: lwc1        $f0, 0x72EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72EC);
    // 0x002592EC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002592F0: j           L_00259304
    // 0x002592F4: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
        goto L_00259304;
    // 0x002592F4: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
L_002592F8:
    // 0x002592F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002592FC: lwc1        $f0, 0x72F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72F0);
    // 0x00259300: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
L_00259304:
    // 0x00259304: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00259308: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025930C: beq         $v1, $v0, L_00259338
    if (ctx->r3 == ctx->r2) {
        // 0x00259310: nop
    
            goto L_00259338;
    }
    // 0x00259310: nop

    // 0x00259314: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00259318: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0025931C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00259320: beq         $v0, $zero, L_00259338
    if (ctx->r2 == 0) {
        // 0x00259324: nop
    
            goto L_00259338;
    }
    // 0x00259324: nop

    // 0x00259328: jal         0x0027588C
    // 0x0025932C: addiu       $a0, $zero, 0x1A7
    ctx->r4 = ADD32(0, 0X1A7);
    func_0027588C(rdram, ctx);
        goto after_1;
    // 0x0025932C: addiu       $a0, $zero, 0x1A7
    ctx->r4 = ADD32(0, 0X1A7);
    after_1:
    // 0x00259330: jal         0x0027588C
    // 0x00259334: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    func_0027588C(rdram, ctx);
        goto after_2;
    // 0x00259334: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    after_2:
L_00259338:
    // 0x00259338: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025933C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259340: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259344: jr          $ra
    // 0x00259348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00259348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00296280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296280: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296284: ldc1        $f0, -0x59A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X59A8);
    // 0x00296288: abs.d       $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f1.d = fabs(ctx->f12.d);
    // 0x0029628C: c.le.d      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.d <= ctx->f1.d;
    // 0x00296290: nop

    // 0x00296294: bc1f        L_002962C0
    if (!c1cs) {
        // 0x00296298: nop
    
            goto L_002962C0;
    }
    // 0x00296298: nop

    // 0x0029629C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002962A0: ldc1        $f2, -0x59A0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X59A0);
L_002962A4:
    // 0x002962A4: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x002962A8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002962AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002962B0: c.le.d      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.d <= ctx->f1.d;
    // 0x002962B4: nop

    // 0x002962B8: bc1t        L_002962A4
    if (c1cs) {
        // 0x002962BC: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_002962A4;
    }
    // 0x002962BC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_002962C0:
    // 0x002962C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002962C4: ldc1        $f0, -0x5998($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5998);
    // 0x002962C8: c.lt.d      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.d < ctx->f0.d;
    // 0x002962CC: nop

    // 0x002962D0: bc1f        L_002962F4
    if (!c1cs) {
        // 0x002962D4: nop
    
            goto L_002962F4;
    }
    // 0x002962D4: nop

L_002962D8:
    // 0x002962D8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002962DC: add.d       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = ctx->f1.d + ctx->f1.d;
    // 0x002962E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002962E4: c.lt.d      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.d < ctx->f0.d;
    // 0x002962E8: nop

    // 0x002962EC: bc1t        L_002962D8
    if (c1cs) {
        // 0x002962F0: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_002962D8;
    }
    // 0x002962F0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_002962F4:
    // 0x002962F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002962F8: ldc1        $f0, -0x5990($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5990);
    // 0x002962FC: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x00296300: nop

    // 0x00296304: bc1fl       L_0029630C
    if (!c1cs) {
        // 0x00296308: neg.d       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = -ctx->f1.d;
            goto L_0029630C;
    }
    goto skip_0;
    // 0x00296308: neg.d       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = -ctx->f1.d;
    skip_0:
L_0029630C:
    // 0x0029630C: jr          $ra
    // 0x00296310: mov.d       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.d = ctx->f1.d;
    return;
    // 0x00296310: mov.d       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.d = ctx->f1.d;
;}
RECOMP_FUNC void func_0021EF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021EF40: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0021EF44: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0021EF48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021EF4C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0021EF50: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x0021EF54: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x0021EF58: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x0021EF5C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021EF60: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021EF64: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021EF68: beq         $v0, $zero, L_0021EFA4
    if (ctx->r2 == 0) {
        // 0x0021EF6C: addiu       $a1, $sp, 0x4C
        ctx->r5 = ADD32(ctx->r29, 0X4C);
            goto L_0021EFA4;
    }
    // 0x0021EF6C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x0021EF70: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0021EF74: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x0021EF78: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0021EF7C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0021EF80: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x0021EF84: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021EF88: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x0021EF8C: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x0021EF90: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x0021EF94: jal         0x0020F85C
    // 0x0021EF98: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x0021EF98: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    after_0:
    // 0x0021EF9C: j           L_0021EFCC
    // 0x0021EFA0: nop

        goto L_0021EFCC;
    // 0x0021EFA0: nop

L_0021EFA4:
    // 0x0021EFA4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0021EFA8: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x0021EFAC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x0021EFB0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x0021EFB4: jal         0x0021F00C
    // 0x0021EFB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0021F00C(rdram, ctx);
        goto after_1;
    // 0x0021EFB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021EFBC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0021EFC0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x0021EFC4: jal         0x0020EEF8
    // 0x0021EFC8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x0021EFC8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
L_0021EFCC:
    // 0x0021EFCC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0021EFD0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021EFD4: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x0021EFD8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021EFDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021EFE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021EFE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021EFE8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x0021EFEC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0021EFF0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x0021EFF4: jal         0x002688C8
    // 0x0021EFF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002688C8(rdram, ctx);
        goto after_3;
    // 0x0021EFF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0021EFFC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0021F000: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0021F004: jr          $ra
    // 0x0021F008: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0021F008: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00269780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269780: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00269784: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00269788: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026978C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00269790: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00269794: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00269798: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0026979C: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x002697A0: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x002697A4: sdc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X70, ctx->r29);
L_002697A8:
    // 0x002697A8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002697AC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x002697B0: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x002697B4: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x002697B8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x002697BC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002697C0: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x002697C4: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x002697C8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x002697CC: bne         $v0, $a0, L_002697A8
    if (ctx->r2 != ctx->r4) {
        // 0x002697D0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002697A8;
    }
    // 0x002697D0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002697D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002697D8: lwc1        $f20, 0x7F24($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7F24);
    // 0x002697DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002697E0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002697E4: jal         0x002671B4
    // 0x002697E8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x002697E8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    after_0:
    // 0x002697EC: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x002697F0: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002697F4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002697F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002697FC: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00269800: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x00269804: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x00269808: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x0026980C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00269810: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x00269814: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00269818: jal         0x002671B4
    // 0x0026981C: nop

    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x0026981C: nop

    after_1:
    // 0x00269820: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00269824: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x00269828: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026982C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00269830: addiu       $v0, $v0, 0x1AE0
    ctx->r2 = ADD32(ctx->r2, 0X1AE0);
    // 0x00269834: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00269838: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026983C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00269840: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x00269844: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00269848: jal         0x00239F00
    // 0x0026984C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_2;
    // 0x0026984C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00269850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00269854: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00269858: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
L_0026985C:
    // 0x0026985C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00269860: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00269864: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00269868: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x0026986C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00269870: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00269874: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00269878: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x0026987C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00269880: bne         $v1, $a1, L_0026985C
    if (ctx->r3 != ctx->r5) {
        // 0x00269884: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0026985C;
    }
    // 0x00269884: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00269888: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0026988C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00269890: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00269894: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00269898: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x0026989C: ldc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X70);
    // 0x002698A0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x002698A4: jr          $ra
    // 0x002698A8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x002698A8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00449CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00410EA4:
    // 0x00449CE8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449CEC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449CF0: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00449CF4: sw          $ra, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r31;
    // 0x00449CF8: sw          $s4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r20;
    // 0x00449CFC: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x00449D00: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x00449D04: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x00449D08: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x00449D0C: sdc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE8, ctx->r29);
    // 0x00449D10: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00449D14: beq         $v0, $zero, L_0044A0A8
    if (ctx->r2 == 0) {
        // 0x00449D18: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_0044A0A8;
    }
    // 0x00449D18: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00449D1C: jal         0x00284188
    // 0x00449D20: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00449D20: nop

    after_0:
    // 0x00449D24: beq         $v0, $zero, L_0044A0A8
    if (ctx->r2 == 0) {
        // 0x00449D28: nop
    
            goto L_0044A0A8;
    }
    // 0x00449D28: nop

    // 0x00449D2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449D30: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449D34: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00449D38: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x00449D3C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00449D40: nop

    // 0x00449D44: bc1t        L_0044A0A8
    if (c1cs) {
        // 0x00449D48: nop
    
            goto L_0044A0A8;
    }
    // 0x00449D48: nop

    // 0x00449D4C: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x00449D50: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00449D54: nop

    // 0x00449D58: bc1t        L_0044A0A8
    if (c1cs) {
        // 0x00449D5C: nop
    
            goto L_0044A0A8;
    }
    // 0x00449D5C: nop

    // 0x00449D60: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00449D64: jal         0x0041057C
    // 0x00449D68: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0041057C(rdram, ctx);
        goto after_1;
    // 0x00449D68: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x00449D6C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449D70: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449D74: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x00449D78: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x00449D7C: jal         0x00410724
    // 0x00449D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00410724(rdram, ctx);
        goto after_2;
    // 0x00449D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00449D84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449D88: lwc1        $f20, 0x9A0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X9A0);
    // 0x00449D8C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00449D90: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00449D94: jal         0x0020EF60
    // 0x00449D98: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x00449D98: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x00449D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449DA0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00449DA4: jal         0x0020EF60
    // 0x00449DA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_4;
    // 0x00449DA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00449DAC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00449DB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00449DB4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00449DB8: jal         0x0020EF2C
    // 0x00449DBC: sw          $zero, 0x28($s4)
    MEM_W(0X28, ctx->r20) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00449DBC: sw          $zero, 0x28($s4)
    MEM_W(0X28, ctx->r20) = 0;
    after_5:
    // 0x00449DC0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00449DC4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00449DC8: lw          $a0, 0x74($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X74);
    // 0x00449DCC: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x00449DD0: beq         $v0, $zero, L_00449DE4
    if (ctx->r2 == 0) {
        // 0x00449DD4: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_00449DE4;
    }
    // 0x00449DD4: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x00449DD8: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00449DDC: bne         $v0, $zero, L_00449DEC
    if (ctx->r2 != 0) {
        // 0x00449DE0: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_00449DEC;
    }
    // 0x00449DE0: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
L_00449DE4:
    // 0x00449DE4: beq         $v0, $zero, L_0044A068
    if (ctx->r2 == 0) {
        // 0x00449DE8: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_0044A068;
    }
    // 0x00449DE8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
L_00449DEC:
    // 0x00449DEC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00449DF0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x00449DF4: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00449DF8: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00449DFC: lw          $s3, -0x6770($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X6770);
    // 0x00449E00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00449E04: beq         $v0, $zero, L_00449E48
    if (ctx->r2 == 0) {
        // 0x00449E08: nop
    
            goto L_00449E48;
    }
    // 0x00449E08: nop

    // 0x00449E0C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00449E10: beq         $v0, $zero, L_00449E48
    if (ctx->r2 == 0) {
        // 0x00449E14: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00449E48;
    }
    // 0x00449E14: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00449E18: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00449E1C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x00449E20: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00449E24: sw          $t0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r8;
    // 0x00449E28: sw          $t1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r9;
    // 0x00449E2C: sw          $t2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r10;
    // 0x00449E30: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00449E34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449E38: lwc1        $f1, 0x9A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9A4);
    // 0x00449E3C: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x00449E40: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00449E44: swc1        $f0, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->f0.u32l;
L_00449E48:
    // 0x00449E48: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00449E4C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00449E50: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x00449E54: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00449E58: beq         $v0, $zero, L_00449EA4
    if (ctx->r2 == 0) {
        // 0x00449E5C: addiu       $s0, $sp, 0x80
        ctx->r16 = ADD32(ctx->r29, 0X80);
            goto L_00449EA4;
    }
    // 0x00449E5C: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00449E60: beql        $s3, $zero, L_00449E94
    if (ctx->r19 == 0) {
        // 0x00449E64: sw          $zero, 0xF0($v1)
        MEM_W(0XF0, ctx->r3) = 0;
            goto L_00449E94;
    }
    goto skip_0;
    // 0x00449E64: sw          $zero, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = 0;
    skip_0:
    // 0x00449E68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449E6C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449E70: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x00449E74: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x00449E78: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x00449E7C: sw          $t0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r8;
    // 0x00449E80: sw          $t1, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r9;
    // 0x00449E84: sw          $t2, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r10;
    // 0x00449E88: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00449E8C: j           L_00410EA4
    // 0x00449E90: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
    entry_00410EA4(rdram, ctx);
    return;
    // 0x00449E90: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
L_00449E94:
    // 0x00449E94: sw          $zero, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = 0;
    // 0x00449E98: sw          $zero, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = 0;
    // 0x00449E9C: sw          $zero, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = 0;
    // 0x00449EA0: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
L_00449EA4:
    // 0x00449EA4: jal         0x0020F79C
    // 0x00449EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F79C(rdram, ctx);
        goto after_6;
    // 0x00449EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00449EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449EB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00449EB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449EB8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449EBC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00449EC0: lw          $a2, 0xFC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XFC);
    // 0x00449EC4: jal         0x0020FE00
    // 0x00449EC8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0020FE00(rdram, ctx);
        goto after_7;
    // 0x00449EC8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_7:
    // 0x00449ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449ED0: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x00449ED4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00449ED8: addiu       $s1, $sp, 0xC0
    ctx->r17 = ADD32(ctx->r29, 0XC0);
    // 0x00449EDC: jal         0x0020F85C
    // 0x00449EE0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020F85C(rdram, ctx);
        goto after_8;
    // 0x00449EE0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00449EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449EE8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00449EEC: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x00449EF0: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x00449EF4: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x00449EF8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00449EFC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00449F00: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00449F04: jal         0x0020F85C
    // 0x00449F08: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020F85C(rdram, ctx);
        goto after_9;
    // 0x00449F08: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00449F0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00449F10: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00449F14: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x00449F18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00449F1C: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x00449F20: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x00449F24: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x00449F28: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00449F2C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00449F30: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00449F34: jal         0x0020EEF8
    // 0x00449F38: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    func_0020EEF8(rdram, ctx);
        goto after_10;
    // 0x00449F38: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    after_10:
    // 0x00449F3C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x00449F40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449F44: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00449F48: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x00449F4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00449F50: jal         0x0020EEF8
    // 0x00449F54: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    func_0020EEF8(rdram, ctx);
        goto after_11;
    // 0x00449F54: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    after_11:
    // 0x00449F58: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00449F5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00449F60: jal         0x0020EF2C
    // 0x00449F64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_12;
    // 0x00449F64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00449F68: beq         $s3, $zero, L_0044A064
    if (ctx->r19 == 0) {
        // 0x00449F6C: addiu       $v1, $sp, 0x48
        ctx->r3 = ADD32(ctx->r29, 0X48);
            goto L_0044A064;
    }
    // 0x00449F6C: addiu       $v1, $sp, 0x48
    ctx->r3 = ADD32(ctx->r29, 0X48);
    // 0x00449F70: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00449F74: addiu       $a0, $s3, 0x30
    ctx->r4 = ADD32(ctx->r19, 0X30);
L_00449F78:
    // 0x00449F78: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00449F7C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00449F80: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00449F84: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00449F88: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00449F8C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00449F90: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00449F94: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00449F98: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00449F9C: bne         $v0, $a0, L_00449F78
    if (ctx->r2 != ctx->r4) {
        // 0x00449FA0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00449F78;
    }
    // 0x00449FA0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00449FA4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00449FA8: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00449FAC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00449FB0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00449FB4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x00449FB8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00449FBC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x00449FC0: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x00449FC4: sw          $t1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r9;
    // 0x00449FC8: sw          $t2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r10;
    // 0x00449FCC: jal         0x002216DC
    // 0x00449FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002216DC(rdram, ctx);
        goto after_13;
    // 0x00449FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00449FD4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00449FD8: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x00449FDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00449FE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x00449FE4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00449FE8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00449FEC: jal         0x00239F00
    // 0x00449FF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00239F00(rdram, ctx);
        goto after_14;
    // 0x00449FF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_14:
    // 0x00449FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00449FF8: jal         0x00226724
    // 0x00449FFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00226724(rdram, ctx);
        goto after_15;
    // 0x00449FFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_15:
    // 0x0044A000: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0044A004: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x0044A008: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_0044A00C:
    // 0x0044A00C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0044A010: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0044A014: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0044A018: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0044A01C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x0044A020: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x0044A024: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x0044A028: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x0044A02C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044A030: bne         $v0, $v1, L_0044A00C
    if (ctx->r2 != ctx->r3) {
        // 0x0044A034: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0044A00C;
    }
    // 0x0044A034: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0044A038: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0044A03C: beq         $s0, $zero, L_0044A064
    if (ctx->r16 == 0) {
        // 0x0044A040: sw          $t0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r8;
            goto L_0044A064;
    }
    // 0x0044A040: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x0044A044: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0044A048: addiu       $t3, $t3, 0x1CE8
    ctx->r11 = ADD32(ctx->r11, 0X1CE8);
    // 0x0044A04C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0044A050: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0044A054: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0044A058: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0044A05C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0044A060: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_0044A064:
    // 0x0044A064: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
L_0044A068:
    // 0x0044A068: jal         0x0020EAA0
    // 0x0044A06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_16;
    // 0x0044A06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x0044A070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044A074: jal         0x0020F5C0
    // 0x0044A078: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0020F5C0(rdram, ctx);
        goto after_17;
    // 0x0044A078: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_17:
    // 0x0044A07C: lwc1        $f1, 0x28($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X28);
    // 0x0044A080: add.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x0044A084: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0044A088: swc1        $f0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->f0.u32l;
    // 0x0044A08C: swc1        $f1, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044A090: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x0044A094: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x0044A098: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x0044A09C: sw          $t0, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r8;
    // 0x0044A0A0: sw          $t1, 0x3C($s4)
    MEM_W(0X3C, ctx->r20) = ctx->r9;
    // 0x0044A0A4: sw          $t2, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r10;
L_0044A0A8:
    // 0x0044A0A8: lw          $ra, 0xE4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE4);
    // 0x0044A0AC: lw          $s4, 0xE0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE0);
    // 0x0044A0B0: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x0044A0B4: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x0044A0B8: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x0044A0BC: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x0044A0C0: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x0044A0C4: jr          $ra
    // 0x0044A0C8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x0044A0C8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_00285960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285960: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00285964: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285968: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0028596C: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00285970: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00285974: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00285978: jr          $ra
    // 0x0028597C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x0028597C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_0026D628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D628: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026D62C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026D630: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026D634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026D638: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0026D63C: bne         $v0, $zero, L_0026D64C
    if (ctx->r2 != 0) {
        // 0x0026D640: addiu       $a1, $a0, 0x2
        ctx->r5 = ADD32(ctx->r4, 0X2);
            goto L_0026D64C;
    }
    // 0x0026D640: addiu       $a1, $a0, 0x2
    ctx->r5 = ADD32(ctx->r4, 0X2);
    // 0x0026D644: j           L_0026D6FC
    // 0x0026D648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0026D6FC;
    // 0x0026D648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0026D64C:
    // 0x0026D64C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0026D650: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026D654: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0026D658: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0026D65C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x0026D660: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x0026D664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026D668: beq         $v1, $v0, L_0026D688
    if (ctx->r3 == ctx->r2) {
        // 0x0026D66C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0026D688;
    }
    // 0x0026D66C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026D670: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_0026D674:
    // 0x0026D674: lh          $v1, 0x2($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2);
    // 0x0026D678: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0026D67C: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x0026D680: bne         $v0, $a0, L_0026D674
    if (ctx->r2 != ctx->r4) {
        // 0x0026D684: addu        $s0, $s0, $v1
        ctx->r16 = ADD32(ctx->r16, ctx->r3);
            goto L_0026D674;
    }
    // 0x0026D684: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_0026D688:
    // 0x0026D688: jal         0x002113A4
    // 0x0026D68C: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0026D68C: nop

    after_0:
    // 0x0026D690: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026D694: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x0026D698: bne         $s0, $zero, L_0026D6A4
    if (ctx->r16 != 0) {
        // 0x0026D69C: nop
    
            goto L_0026D6A4;
    }
    // 0x0026D69C: nop

    // 0x0026D6A0: break       7
    do_break(2545312);
L_0026D6A4:
    // 0x0026D6A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0026D6A8: bne         $s0, $at, L_0026D6BC
    if (ctx->r16 != ctx->r1) {
        // 0x0026D6AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0026D6BC;
    }
    // 0x0026D6AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0026D6B0: bne         $v0, $at, L_0026D6BC
    if (ctx->r2 != ctx->r1) {
        // 0x0026D6B4: nop
    
            goto L_0026D6BC;
    }
    // 0x0026D6B4: nop

    // 0x0026D6B8: break       6
    do_break(2545336);
L_0026D6BC:
    // 0x0026D6BC: mfhi        $a0
    ctx->r4 = hi;
    // 0x0026D6C0: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x0026D6C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026D6C8: beq         $v1, $v0, L_0026D6F8
    if (ctx->r3 == ctx->r2) {
        // 0x0026D6CC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026D6F8;
    }
    // 0x0026D6CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0026D6D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0026D6D4:
    // 0x0026D6D4: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x0026D6D8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x0026D6DC: slt         $v0, $s0, $a0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0026D6E0: beq         $v0, $zero, L_0026D6F8
    if (ctx->r2 == 0) {
        // 0x0026D6E4: nop
    
            goto L_0026D6F8;
    }
    // 0x0026D6E4: nop

    // 0x0026D6E8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0026D6EC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x0026D6F0: bne         $v0, $v1, L_0026D6D4
    if (ctx->r2 != ctx->r3) {
        // 0x0026D6F4: nop
    
            goto L_0026D6D4;
    }
    // 0x0026D6F4: nop

L_0026D6F8:
    // 0x0026D6F8: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
L_0026D6FC:
    // 0x0026D6FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026D700: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026D704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026D708: jr          $ra
    // 0x0026D70C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026D70C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00221D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00221D3C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00221D40: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00221D44: addiu       $a1, $a1, -0x5520
    ctx->r5 = ADD32(ctx->r5, -0X5520);
    // 0x00221D48: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00221D4C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00221D50: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00221D54: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00221D58: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00221D5C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00221D60: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00221D64: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00221D68: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00221D6C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00221D70: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x00221D74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00221D78: lw          $v0, -0x3220($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3220);
    // 0x00221D7C: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x00221D80: lw          $t1, 0x5A40($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5A40);
    // 0x00221D84: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00221D88: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00221D8C: bne         $v0, $zero, L_00222284
    if (ctx->r2 != 0) {
        // 0x00221D90: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_00222284;
    }
    // 0x00221D90: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00221D94: lw          $a1, -0x1210($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1210);
    // 0x00221D98: beq         $a1, $zero, L_002222B0
    if (ctx->r5 == 0) {
        // 0x00221D9C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_002222B0;
    }
    // 0x00221D9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x00221DA0: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x00221DA4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00221DA8: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x00221DAC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00221DB0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00221DB4: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x00221DB8: ori         $a1, $a1, 0xA01
    ctx->r5 = ctx->r5 | 0XA01;
    // 0x00221DBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00221DC0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00221DC4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00221DC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00221DCC: sw          $v0, -0x3220($at)
    MEM_W(-0X3220, ctx->r1) = ctx->r2;
    // 0x00221DD0: lui         $v0, 0xDE01
    ctx->r2 = S32(0XDE01 << 16);
    // 0x00221DD4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00221DD8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00221DDC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00221DE0: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x00221DE4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00221DE8: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00221DEC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00221DF0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x00221DF4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00221DF8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00221DFC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00221E00: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x00221E04: jal         0x0020B5D4
    // 0x00221E08: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    func_0020B5D4(rdram, ctx);
        goto after_0;
    // 0x00221E08: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    after_0:
    // 0x00221E0C: lui         $a0, 0xDB04
    ctx->r4 = S32(0XDB04 << 16);
    // 0x00221E10: ori         $a0, $a0, 0x4
    ctx->r4 = ctx->r4 | 0X4;
    // 0x00221E14: lui         $a1, 0xDB04
    ctx->r5 = S32(0XDB04 << 16);
    // 0x00221E18: ori         $a1, $a1, 0xC
    ctx->r5 = ctx->r5 | 0XC;
    // 0x00221E1C: lui         $a2, 0xDB04
    ctx->r6 = S32(0XDB04 << 16);
    // 0x00221E20: ori         $a2, $a2, 0x14
    ctx->r6 = ctx->r6 | 0X14;
    // 0x00221E24: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x00221E28: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00221E2C: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00221E30: sw          $zero, 0x1064($s7)
    MEM_W(0X1064, ctx->r23) = 0;
    // 0x00221E34: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00221E38: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00221E3C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00221E40: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x00221E44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x00221E48: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x00221E4C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00221E50: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00221E54: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00221E58: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x00221E5C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x00221E60: ori         $a0, $zero, 0xFFFE
    ctx->r4 = 0 | 0XFFFE;
    // 0x00221E64: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00221E68: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x00221E6C: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x00221E70: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00221E74: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00221E78: sw          $a3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r7;
    // 0x00221E7C: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x00221E80: lw          $t0, 0x14A8($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X14A8);
    // 0x00221E84: addiu       $v0, $s7, 0x14AC
    ctx->r2 = ADD32(ctx->r23, 0X14AC);
    // 0x00221E88: blez        $t0, L_0022222C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00221E8C: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_0022222C;
    }
    // 0x00221E8C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00221E90: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
L_00221E94:
    // 0x00221E94: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x00221E98: beq         $s0, $zero, L_00221F18
    if (ctx->r16 == 0) {
        // 0x00221E9C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00221F18;
    }
    // 0x00221E9C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00221EA0: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x00221EA4: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
L_00221EA8:
    // 0x00221EA8: lwc1        $f0, 0x338($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X338);
    // 0x00221EAC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00221EB0: nop

    // 0x00221EB4: bc1f        L_00221F0C
    if (!c1cs) {
        // 0x00221EB8: nop
    
            goto L_00221F0C;
    }
    // 0x00221EB8: nop

    // 0x00221EBC: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00221EC0: lwc1        $f0, 0x344($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X344);
    // 0x00221EC4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221EC8: nop

    // 0x00221ECC: bc1f        L_00221F0C
    if (!c1cs) {
        // 0x00221ED0: nop
    
            goto L_00221F0C;
    }
    // 0x00221ED0: nop

    // 0x00221ED4: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00221ED8: lwc1        $f0, 0x340($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X340);
    // 0x00221EDC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221EE0: nop

    // 0x00221EE4: bc1f        L_00221F0C
    if (!c1cs) {
        // 0x00221EE8: nop
    
            goto L_00221F0C;
    }
    // 0x00221EE8: nop

    // 0x00221EEC: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00221EF0: lwc1        $f0, 0x34C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34C);
    // 0x00221EF4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221EF8: nop

    // 0x00221EFC: bc1f        L_00221F0C
    if (!c1cs) {
        // 0x00221F00: nop
    
            goto L_00221F0C;
    }
    // 0x00221F00: nop

    // 0x00221F04: j           L_00221F18
    // 0x00221F08: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_00221F18;
    // 0x00221F08: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_00221F0C:
    // 0x00221F0C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00221F10: bne         $s0, $zero, L_00221EA8
    if (ctx->r16 != 0) {
        // 0x00221F14: nop
    
            goto L_00221EA8;
    }
    // 0x00221F14: nop

L_00221F18:
    // 0x00221F18: beql        $s2, $zero, L_00222214
    if (ctx->r18 == 0) {
        // 0x00221F1C: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_00222214;
    }
    goto skip_0;
    // 0x00221F1C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    skip_0:
    // 0x00221F20: lw          $a1, 0x0($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X0);
    // 0x00221F24: jal         0x0020565C
    // 0x00221F28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020565C(rdram, ctx);
        goto after_1;
    // 0x00221F28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x00221F2C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00221F30: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00221F34: lw          $fp, 0x0($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X0);
    // 0x00221F38: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00221F3C: jal         0x002017D4
    // 0x00221F40: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00221F40: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_2:
    // 0x00221F44: lw          $s6, 0x4($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X4);
    // 0x00221F48: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00221F4C: blez        $s6, L_002220A0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00221F50: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_002220A0;
    }
    // 0x00221F50: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00221F54: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
L_00221F58:
    // 0x00221F58: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00221F5C: addu        $s1, $t1, $s4
    ctx->r17 = ADD32(ctx->r9, ctx->r20);
    // 0x00221F60: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00221F64: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00221F68: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00221F6C: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x00221F70: beql        $v0, $zero, L_00222094
    if (ctx->r2 == 0) {
        // 0x00221F74: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222094;
    }
    goto skip_1;
    // 0x00221F74: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x00221F78: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00221F7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00221F80: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
    // 0x00221F84: beql        $v0, $zero, L_00222094
    if (ctx->r2 == 0) {
        // 0x00221F88: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222094;
    }
    goto skip_2;
    // 0x00221F88: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
    // 0x00221F8C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x00221F90: beq         $s0, $zero, L_00222044
    if (ctx->r16 == 0) {
        // 0x00221F94: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00222044;
    }
    // 0x00221F94: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_00221F98:
    // 0x00221F98: lwc1        $f1, 0x344($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X344);
    // 0x00221F9C: lwc1        $f0, 0x68($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X68);
    // 0x00221FA0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221FA4: nop

    // 0x00221FA8: bc1f        L_00222038
    if (!c1cs) {
        // 0x00221FAC: nop
    
            goto L_00222038;
    }
    // 0x00221FAC: nop

    // 0x00221FB0: lwc1        $f1, 0x338($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X338);
    // 0x00221FB4: lwc1        $f0, 0x74($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X74);
    // 0x00221FB8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221FBC: nop

    // 0x00221FC0: bc1f        L_00222038
    if (!c1cs) {
        // 0x00221FC4: nop
    
            goto L_00222038;
    }
    // 0x00221FC4: nop

    // 0x00221FC8: lwc1        $f1, 0x34C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34C);
    // 0x00221FCC: lwc1        $f0, 0x70($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X70);
    // 0x00221FD0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00221FD4: nop

    // 0x00221FD8: bc1f        L_00222038
    if (!c1cs) {
        // 0x00221FDC: nop
    
            goto L_00222038;
    }
    // 0x00221FDC: nop

    // 0x00221FE0: lwc1        $f1, 0x340($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X340);
    // 0x00221FE4: lwc1        $f0, 0x7C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x00221FE8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00221FEC: nop

    // 0x00221FF0: bc1f        L_00222038
    if (!c1cs) {
        // 0x00221FF4: nop
    
            goto L_00222038;
    }
    // 0x00221FF4: nop

    // 0x00221FF8: lwc1        $f1, 0x348($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X348);
    // 0x00221FFC: lwc1        $f0, 0x6C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x00222000: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222004: nop

    // 0x00222008: bc1f        L_00222038
    if (!c1cs) {
        // 0x0022200C: nop
    
            goto L_00222038;
    }
    // 0x0022200C: nop

    // 0x00222010: lwc1        $f1, 0x33C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X33C);
    // 0x00222014: lwc1        $f0, 0x78($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X78);
    // 0x00222018: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022201C: nop

    // 0x00222020: bc1f        L_00222038
    if (!c1cs) {
        // 0x00222024: addiu       $a0, $s0, 0x2D8
        ctx->r4 = ADD32(ctx->r16, 0X2D8);
            goto L_00222038;
    }
    // 0x00222024: addiu       $a0, $s0, 0x2D8
    ctx->r4 = ADD32(ctx->r16, 0X2D8);
    // 0x00222028: jal         0x0026F60C
    // 0x0022202C: addiu       $a1, $s1, 0x68
    ctx->r5 = ADD32(ctx->r17, 0X68);
    func_0026F60C(rdram, ctx);
        goto after_3;
    // 0x0022202C: addiu       $a1, $s1, 0x68
    ctx->r5 = ADD32(ctx->r17, 0X68);
    after_3:
    // 0x00222030: bnel        $v0, $zero, L_00222044
    if (ctx->r2 != 0) {
        // 0x00222034: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00222044;
    }
    goto skip_3;
    // 0x00222034: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_3:
L_00222038:
    // 0x00222038: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0022203C: bne         $s0, $zero, L_00221F98
    if (ctx->r16 != 0) {
        // 0x00222040: nop
    
            goto L_00221F98;
    }
    // 0x00222040: nop

L_00222044:
    // 0x00222044: beql        $s2, $zero, L_00222094
    if (ctx->r18 == 0) {
        // 0x00222048: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222094;
    }
    goto skip_4;
    // 0x00222048: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_4:
    // 0x0022204C: lhu         $v0, 0x88($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X88);
    // 0x00222050: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x00222054: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00222058: beq         $v0, $zero, L_00222084
    if (ctx->r2 == 0) {
        // 0x0022205C: sw          $v1, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r3;
            goto L_00222084;
    }
    // 0x0022205C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x00222060: lw          $v1, 0x1064($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X1064);
    // 0x00222064: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x00222068: beq         $v1, $t0, L_00222090
    if (ctx->r3 == ctx->r8) {
        // 0x0022206C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00222090;
    }
    // 0x0022206C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00222070: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x00222074: sw          $s1, 0x1068($v0)
    MEM_W(0X1068, ctx->r2) = ctx->r17;
    // 0x00222078: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x0022207C: j           L_00222090
    // 0x00222080: sw          $v0, 0x1064($s7)
    MEM_W(0X1064, ctx->r23) = ctx->r2;
        goto L_00222090;
    // 0x00222080: sw          $v0, 0x1064($s7)
    MEM_W(0X1064, ctx->r23) = ctx->r2;
L_00222084:
    // 0x00222084: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x00222088: jal         0x00214844
    // 0x0022208C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00214844(rdram, ctx);
        goto after_4;
    // 0x0022208C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_00222090:
    // 0x00222090: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00222094:
    // 0x00222094: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00222098: bne         $v0, $zero, L_00221F58
    if (ctx->r2 != 0) {
        // 0x0022209C: addiu       $s4, $s4, 0x90
        ctx->r20 = ADD32(ctx->r20, 0X90);
            goto L_00221F58;
    }
    // 0x0022209C: addiu       $s4, $s4, 0x90
    ctx->r20 = ADD32(ctx->r20, 0X90);
L_002220A0:
    // 0x002220A0: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x002220A4: jal         0x002017D4
    // 0x002220A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002220A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x002220AC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x002220B0: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x002220B4: blez        $s4, L_00222210
    if (SIGNED(ctx->r20) <= 0) {
        // 0x002220B8: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00222210;
    }
    // 0x002220B8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x002220BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_002220C0:
    // 0x002220C0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002220C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x002220C8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002220CC: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x002220D0: beql        $v0, $zero, L_00222204
    if (ctx->r2 == 0) {
        // 0x002220D4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222204;
    }
    goto skip_5;
    // 0x002220D4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_5:
    // 0x002220D8: lhu         $v1, 0x16C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16C);
    // 0x002220DC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x002220E0: bnel        $v0, $zero, L_00222204
    if (ctx->r2 != 0) {
        // 0x002220E4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222204;
    }
    goto skip_6;
    // 0x002220E4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_6:
    // 0x002220E8: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x002220EC: beql        $v0, $zero, L_00222204
    if (ctx->r2 == 0) {
        // 0x002220F0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222204;
    }
    goto skip_7;
    // 0x002220F0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_7:
    // 0x002220F4: lw          $v0, 0x190($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X190);
    // 0x002220F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x002220FC: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x00222100: beql        $v0, $zero, L_00222204
    if (ctx->r2 == 0) {
        // 0x00222104: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222204;
    }
    goto skip_8;
    // 0x00222104: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_8:
    // 0x00222108: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x0022210C: beq         $s0, $zero, L_002221C0
    if (ctx->r16 == 0) {
        // 0x00222110: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_002221C0;
    }
    // 0x00222110: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_00222114:
    // 0x00222114: lwc1        $f1, 0x344($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X344);
    // 0x00222118: lwc1        $f0, 0x14C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x0022211C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222120: nop

    // 0x00222124: bc1f        L_002221B4
    if (!c1cs) {
        // 0x00222128: nop
    
            goto L_002221B4;
    }
    // 0x00222128: nop

    // 0x0022212C: lwc1        $f1, 0x338($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X338);
    // 0x00222130: lwc1        $f0, 0x158($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X158);
    // 0x00222134: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222138: nop

    // 0x0022213C: bc1f        L_002221B4
    if (!c1cs) {
        // 0x00222140: nop
    
            goto L_002221B4;
    }
    // 0x00222140: nop

    // 0x00222144: lwc1        $f1, 0x34C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34C);
    // 0x00222148: lwc1        $f0, 0x154($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X154);
    // 0x0022214C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222150: nop

    // 0x00222154: bc1f        L_002221B4
    if (!c1cs) {
        // 0x00222158: nop
    
            goto L_002221B4;
    }
    // 0x00222158: nop

    // 0x0022215C: lwc1        $f1, 0x340($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X340);
    // 0x00222160: lwc1        $f0, 0x160($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X160);
    // 0x00222164: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222168: nop

    // 0x0022216C: bc1f        L_002221B4
    if (!c1cs) {
        // 0x00222170: nop
    
            goto L_002221B4;
    }
    // 0x00222170: nop

    // 0x00222174: lwc1        $f1, 0x348($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X348);
    // 0x00222178: lwc1        $f0, 0x150($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X150);
    // 0x0022217C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222180: nop

    // 0x00222184: bc1f        L_002221B4
    if (!c1cs) {
        // 0x00222188: nop
    
            goto L_002221B4;
    }
    // 0x00222188: nop

    // 0x0022218C: lwc1        $f1, 0x33C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X33C);
    // 0x00222190: lwc1        $f0, 0x15C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X15C);
    // 0x00222194: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222198: nop

    // 0x0022219C: bc1f        L_002221B4
    if (!c1cs) {
        // 0x002221A0: addiu       $a0, $s0, 0x2D8
        ctx->r4 = ADD32(ctx->r16, 0X2D8);
            goto L_002221B4;
    }
    // 0x002221A0: addiu       $a0, $s0, 0x2D8
    ctx->r4 = ADD32(ctx->r16, 0X2D8);
    // 0x002221A4: jal         0x0026F60C
    // 0x002221A8: addiu       $a1, $s1, 0x14C
    ctx->r5 = ADD32(ctx->r17, 0X14C);
    func_0026F60C(rdram, ctx);
        goto after_6;
    // 0x002221A8: addiu       $a1, $s1, 0x14C
    ctx->r5 = ADD32(ctx->r17, 0X14C);
    after_6:
    // 0x002221AC: bnel        $v0, $zero, L_002221C0
    if (ctx->r2 != 0) {
        // 0x002221B0: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_002221C0;
    }
    goto skip_9;
    // 0x002221B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_9:
L_002221B4:
    // 0x002221B4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x002221B8: bne         $s0, $zero, L_00222114
    if (ctx->r16 != 0) {
        // 0x002221BC: nop
    
            goto L_00222114;
    }
    // 0x002221BC: nop

L_002221C0:
    // 0x002221C0: beql        $s2, $zero, L_00222204
    if (ctx->r18 == 0) {
        // 0x002221C4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00222204;
    }
    goto skip_10;
    // 0x002221C4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_10:
    // 0x002221C8: lhu         $v0, 0x16C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16C);
    // 0x002221CC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x002221D0: beq         $v0, $zero, L_002221F8
    if (ctx->r2 == 0) {
        // 0x002221D4: addiu       $t1, $zero, 0x40
        ctx->r9 = ADD32(0, 0X40);
            goto L_002221F8;
    }
    // 0x002221D4: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x002221D8: lw          $v1, 0x1064($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X1064);
    // 0x002221DC: beq         $v1, $t1, L_00222200
    if (ctx->r3 == ctx->r9) {
        // 0x002221E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00222200;
    }
    // 0x002221E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002221E4: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x002221E8: sw          $s1, 0x1068($v0)
    MEM_W(0X1068, ctx->r2) = ctx->r17;
    // 0x002221EC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x002221F0: j           L_00222200
    // 0x002221F4: sw          $v0, 0x1064($s7)
    MEM_W(0X1064, ctx->r23) = ctx->r2;
        goto L_00222200;
    // 0x002221F4: sw          $v0, 0x1064($s7)
    MEM_W(0X1064, ctx->r23) = ctx->r2;
L_002221F8:
    // 0x002221F8: jal         0x002152AC
    // 0x002221FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002152AC(rdram, ctx);
        goto after_7;
    // 0x002221FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_00222200:
    // 0x00222200: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00222204:
    // 0x00222204: slt         $v0, $s3, $s4
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00222208: bne         $v0, $zero, L_002220C0
    if (ctx->r2 != 0) {
        // 0x0022220C: addiu       $s1, $s1, 0x198
        ctx->r17 = ADD32(ctx->r17, 0X198);
            goto L_002220C0;
    }
    // 0x0022220C: addiu       $s1, $s1, 0x198
    ctx->r17 = ADD32(ctx->r17, 0X198);
L_00222210:
    // 0x00222210: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
L_00222214:
    // 0x00222214: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00222218: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0022221C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00222220: slt         $v0, $t0, $t1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00222224: bne         $v0, $zero, L_00221E94
    if (ctx->r2 != 0) {
        // 0x00222228: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_00221E94;
    }
    // 0x00222228: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_0022222C:
    // 0x0022222C: jal         0x0020B624
    // 0x00222230: nop

    func_0020B624(rdram, ctx);
        goto after_8;
    // 0x00222230: nop

    after_8:
    // 0x00222234: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00222238: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0022223C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00222240: addiu       $a2, $a2, -0x3220
    ctx->r6 = ADD32(ctx->r6, -0X3220);
    // 0x00222244: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00222248: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0022224C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00222250: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00222254: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00222258: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022225C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00222260: lui         $v0, 0xDF00
    ctx->r2 = S32(0XDF00 << 16);
    // 0x00222264: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00222268: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0022226C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00222270: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00222274: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x00222278: lui         $v0, 0xDE01
    ctx->r2 = S32(0XDE01 << 16);
    // 0x0022227C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00222280: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
L_00222284:
    // 0x00222284: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00222288: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0022228C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00222290: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00222294: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00222298: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0022229C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002222A0: lw          $v1, -0x3220($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3220);
    // 0x002222A4: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x002222A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002222AC: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_002222B0:
    // 0x002222B0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x002222B4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x002222B8: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x002222BC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x002222C0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x002222C4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x002222C8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x002222CC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002222D0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002222D4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002222D8: jr          $ra
    // 0x002222DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002222DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004265B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004265B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004265B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x004265B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004265BC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x004265C0: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x004265C4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x004265C8: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x004265CC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x004265D0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x004265D4: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
    // 0x004265D8: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x004265DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x004265E0: and         $s4, $v1, $v0
    ctx->r20 = ctx->r3 & ctx->r2;
    // 0x004265E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004265E8: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x004265EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004265F0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004265F4: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x004265F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004265FC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00426600: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00426604: beq         $v1, $v0, L_00426614
    if (ctx->r3 == ctx->r2) {
        // 0x00426608: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_00426614;
    }
    // 0x00426608: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0042660C: j           L_004266E0
    // 0x00426610: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_004266E0;
    // 0x00426610: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00426614:
    // 0x00426614: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00426618: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0042661C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00426620: addiu       $a3, $a3, 0x18B0
    ctx->r7 = ADD32(ctx->r7, 0X18B0);
    // 0x00426624: jal         0x00204EDC
    // 0x00426628: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00426628: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_0:
    // 0x0042662C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00426630: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x00426634: jal         0x00285878
    // 0x00426638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_1;
    // 0x00426638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x0042663C: jal         0x002847E0
    // 0x00426640: nop

    func_002847E0(rdram, ctx);
        goto after_2;
    // 0x00426640: nop

    after_2:
    // 0x00426644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426648: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0042664C: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x00426650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00426654: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00426658: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0042665C: bne         $s0, $zero, L_004266BC
    if (ctx->r16 != 0) {
        // 0x00426660: sll         $a0, $s2, 1
        ctx->r4 = S32(ctx->r18 << 1);
            goto L_004266BC;
    }
    // 0x00426660: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x00426664: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x00426668: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0042666C: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x00426670: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00426674: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00426678: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x0042667C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00426680: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00426684: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00426688: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0042668C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00426690: jal         0x00428CF0
    // 0x00426694: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_00428CF0(rdram, ctx);
        goto after_3;
    // 0x00426694: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_3:
    // 0x00426698: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042669C: beq         $s0, $zero, L_004266B0
    if (ctx->r16 == 0) {
        // 0x004266A0: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_004266B0;
    }
    // 0x004266A0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x004266A4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x004266A8: bne         $s0, $zero, L_004266BC
    if (ctx->r16 != 0) {
        // 0x004266AC: nop
    
            goto L_004266BC;
    }
    // 0x004266AC: nop

L_004266B0:
    // 0x004266B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004266B4: jal         0x0029E460
    // 0x004266B8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0029E460(rdram, ctx);
        goto after_4;
    // 0x004266B8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
L_004266BC:
    // 0x004266BC: jal         0x002858A4
    // 0x004266C0: nop

    func_002858A4(rdram, ctx);
        goto after_5;
    // 0x004266C0: nop

    after_5:
    // 0x004266C4: jal         0x002053A8
    // 0x004266C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x004266C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x004266CC: beq         $s1, $zero, L_004266DC
    if (ctx->r17 == 0) {
        // 0x004266D0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004266DC;
    }
    // 0x004266D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004266D4: jal         0x002052D8
    // 0x004266D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x004266D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_004266DC:
    // 0x004266DC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004266E0:
    // 0x004266E0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x004266E4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x004266E8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x004266EC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x004266F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x004266F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004266F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004266FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00426700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00426704: jr          $ra
    // 0x00426708: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00426708: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00426E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426E64: jr          $ra
    // 0x00426E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00426E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0025F9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F9D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F9D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F9DC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F9E0: beq         $v0, $zero, L_0025F9F0
    if (ctx->r2 == 0) {
        // 0x0025F9E4: nop
    
            goto L_0025F9F0;
    }
    // 0x0025F9E4: nop

    // 0x0025F9E8: jal         0x00243414
    // 0x0025F9EC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F9EC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
L_0025F9F0:
    // 0x0025F9F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F9F4: jr          $ra
    // 0x0025F9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00421E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421E24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421E28: sw          $v0, 0x9B8($at)
    MEM_W(0X9B8, ctx->r1) = ctx->r2;
    // 0x00421E2C: jr          $ra
    // 0x00421E30: nop

    return;
    // 0x00421E30: nop

;}
RECOMP_FUNC void func_00292DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292DD8: jr          $ra
    // 0x00292DDC: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    return;
    // 0x00292DDC: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0021F974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F974: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x0021F978: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0021F97C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021F980: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x0021F984: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021F988: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021F98C: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021F990: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x0021F994: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0021F998: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021F99C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021F9A0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021F9A4: swc1        $f1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021F9A8: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x0021F9AC: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0021F9B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021F9B4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021F9B8: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021F9BC: jr          $ra
    // 0x0021F9C0: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0021F9C0: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_00296CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296CD0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00296CD4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00296CD8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00296CDC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00296CE0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00296CE4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x00296CE8: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00296CEC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00296CF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00296CF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00296CF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00296CFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00296D00: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x00296D04: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00296D08: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x00296D0C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00296D10: beq         $v0, $zero, L_00296E6C
    if (ctx->r2 == 0) {
        // 0x00296D14: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_00296E6C;
    }
    // 0x00296D14: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00296D18: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00296D1C: lw          $s0, 0x4($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X4);
    // 0x00296D20: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00296D24: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00296D28: jal         0x00297260
    // 0x00296D2C: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    func_00297260(rdram, ctx);
        goto after_0;
    // 0x00296D2C: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    after_0:
    // 0x00296D30: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x00296D34: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296D38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296D3C: lwc1        $f21, -0x58F4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X58F4);
    // 0x00296D40: div.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00296D44: mul.s       $f0, $f1, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x00296D48: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00296D4C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00296D50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296D54: lwc1        $f0, -0x58F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X58F0);
    // 0x00296D58: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00296D5C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296D60: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00296D64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296D68: lwc1        $f20, -0x58EC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X58EC);
    // 0x00296D6C: sub.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00296D70: mtc1        $s4, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r20;
    // 0x00296D74: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296D78: mul.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00296D7C: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x00296D80: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x00296D84: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00296D88: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00296D8C: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x00296D90: mtc1        $s1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r17;
    // 0x00296D94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296D98: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00296D9C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00296DA0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x00296DA4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x00296DA8: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x00296DAC: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x00296DB0: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x00296DB4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00296DB8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00296DBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00296DC0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00296DC4: andi        $a3, $a1, 0x7
    ctx->r7 = ctx->r5 & 0X7;
    // 0x00296DC8: sra         $a3, $a3, 1
    ctx->r7 = S32(SIGNED(ctx->r7) >> 1);
    // 0x00296DCC: sll         $s0, $a3, 1
    ctx->r16 = S32(ctx->r7 << 1);
    // 0x00296DD0: subu        $a1, $a1, $s0
    ctx->r5 = SUB32(ctx->r5, ctx->r16);
    // 0x00296DD4: jal         0x0029704C
    // 0x00296DD8: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0029704C(rdram, ctx);
        goto after_1;
    // 0x00296DD8: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_1:
    // 0x00296DDC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00296DE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00296DE4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00296DE8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x00296DEC: ori         $v0, $v0, 0x280
    ctx->r2 = ctx->r2 | 0X280;
    // 0x00296DF0: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x00296DF4: sll         $v1, $s6, 16
    ctx->r3 = S32(ctx->r22 << 16);
    // 0x00296DF8: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x00296DFC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00296E00: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00296E04: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x00296E08: sw          $s0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r16;
    // 0x00296E0C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00296E10: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x00296E14: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00296E18: lbu         $a0, 0x27($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X27);
    // 0x00296E1C: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x00296E20: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00296E24: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00296E28: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00296E2C: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x00296E30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00296E34: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x00296E38: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00296E3C: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x00296E40: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x00296E44: jal         0x0029BF80
    // 0x00296E48: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    func_0029BF80(rdram, ctx);
        goto after_2;
    // 0x00296E48: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    after_2:
    // 0x00296E4C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00296E50: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x00296E54: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x00296E58: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x00296E5C: subu        $s1, $s1, $s4
    ctx->r17 = SUB32(ctx->r17, ctx->r20);
    // 0x00296E60: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00296E64: j           L_00296E94
    // 0x00296E68: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
        goto L_00296E94;
    // 0x00296E68: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_00296E6C:
    // 0x00296E6C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00296E70: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x00296E74: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x00296E78: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00296E7C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x00296E80: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00296E84: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x00296E88: jal         0x0029704C
    // 0x00296E8C: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_0029704C(rdram, ctx);
        goto after_3;
    // 0x00296E8C: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_3:
    // 0x00296E90: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_00296E94:
    // 0x00296E94: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00296E98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00296E9C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00296EA0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00296EA4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00296EA8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00296EAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00296EB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00296EB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00296EB8: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00296EBC: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00296EC0: jr          $ra
    // 0x00296EC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00296EC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0023CDC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CDC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023CDCC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023CDD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023CDD4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023CDD8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023CDDC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023CDE0: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x0023CDE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023CDE8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023CDEC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023CDF0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023CDF4: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x0023CDF8: lw          $a3, 0x58($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X58);
    // 0x0023CDFC: lw          $t0, 0x5C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X5C);
    // 0x0023CE00: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023CE04: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0023CE08: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0023CE0C: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x0023CE10: lw          $a3, 0x4C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4C);
    // 0x0023CE14: lw          $t0, 0x50($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X50);
    // 0x0023CE18: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0023CE1C: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x0023CE20: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x0023CE24: lw          $v1, 0x3C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3C);
    // 0x0023CE28: lw          $a3, 0x40($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X40);
    // 0x0023CE2C: lw          $t0, 0x44($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X44);
    // 0x0023CE30: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0023CE34: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x0023CE38: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x0023CE3C: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x0023CE40: lw          $a3, 0x34($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X34);
    // 0x0023CE44: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x0023CE48: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0023CE4C: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x0023CE50: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x0023CE54: jal         0x0020EF2C
    // 0x0023CE58: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023CE58: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x0023CE5C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023CE60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023CE64: jal         0x0020EF2C
    // 0x0023CE68: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023CE68: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023CE6C: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023CE70: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023CE74: jal         0x0020EFDC
    // 0x0023CE78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023CE78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023CE7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023CE80: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023CE84: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023CE88: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023CE8C: jr          $ra
    // 0x0023CE90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023CE90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00451154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00451158: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045115C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00451160: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00451164: jal         0x00285A68
    // 0x00451168: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00451168: nop

    after_0:
    // 0x0045116C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00451170: jr          $ra
    // 0x00451174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00451174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002894C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002894C8: jr          $ra
    // 0x002894CC: nop

    return;
    // 0x002894CC: nop

;}
RECOMP_FUNC void func_002536D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002536D0: jr          $ra
    // 0x002536D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002536D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0023C478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C478: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0023C47C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0023C480: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C484: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0023C488: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023C48C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0023C490: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0023C494: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0023C498: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0023C49C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C4A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023C4A4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x0023C4A8: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0023C4AC: jal         0x0020EF2C
    // 0x0023C4B0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023C4B0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0023C4B4: lwc1        $f3, 0x30($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X30);
    // 0x0023C4B8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023C4BC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023C4C0: lwc1        $f2, 0x34($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X34);
    // 0x0023C4C4: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0023C4C8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C4CC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023C4D0: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x0023C4D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C4D8: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023C4DC: add.s       $f20, $f3, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023C4E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023C4E4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0023C4E8: nop

    // 0x0023C4EC: bc1f        L_0023C504
    if (!c1cs) {
        // 0x0023C4F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023C504;
    }
    // 0x0023C4F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023C4F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023C4F8: lwc1        $f0, 0x66A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66A8);
    // 0x0023C4FC: j           L_0023C54C
    // 0x0023C500: nop

        goto L_0023C54C;
    // 0x0023C500: nop

L_0023C504:
    // 0x0023C504: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023C508: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023C50C: jal         0x0020EF2C
    // 0x0023C510: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023C510: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0023C514: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0023C518: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0023C51C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C520: lwc1        $f3, 0x34($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0023C524: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0023C528: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023C52C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0023C530: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x0023C534: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0023C538: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0023C53C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023C544: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023C548: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
L_0023C54C:
    // 0x0023C54C: bne         $v0, $zero, L_0023C55C
    if (ctx->r2 != 0) {
        // 0x0023C550: swc1        $f0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
            goto L_0023C55C;
    }
    // 0x0023C550: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x0023C554: j           L_0023C574
    // 0x0023C558: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0023C574;
    // 0x0023C558: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C55C:
    // 0x0023C55C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023C560: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x0023C564: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0023C568: jal         0x0020EF8C
    // 0x0023C56C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_0020EF8C(rdram, ctx);
        goto after_2;
    // 0x0023C56C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0023C570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023C574:
    // 0x0023C574: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0023C578: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0023C57C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0023C580: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0023C584: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0023C588: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0023C58C: jr          $ra
    // 0x0023C590: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0023C590: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0041B6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B6AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B6B0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B6B4: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0041B6B8: beq         $v0, $zero, L_0041B6CC
    if (ctx->r2 == 0) {
        // 0x0041B6BC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B6CC;
    }
    // 0x0041B6BC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B6C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B6C4: j           L_0041B6DC
    // 0x0041B6C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B6DC;
    // 0x0041B6C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B6CC:
    // 0x0041B6CC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B6D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B6D4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B6D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B6DC:
    // 0x0041B6DC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B6E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B6E4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B6E8: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0041B6EC: beq         $v0, $zero, L_0041B704
    if (ctx->r2 == 0) {
        // 0x0041B6F0: nop
    
            goto L_0041B704;
    }
    // 0x0041B6F0: nop

    // 0x0041B6F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B6F8: addiu       $v0, $v0, 0x59A4
    ctx->r2 = ADD32(ctx->r2, 0X59A4);
    // 0x0041B6FC: j           L_0041B710
    // 0x0041B700: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B710;
    // 0x0041B700: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B704:
    // 0x0041B704: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B708: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x0041B70C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B710:
    // 0x0041B710: jr          $ra
    // 0x0041B714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00237AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00237AFC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00237B00: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x00237B04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00237B08: sw          $s2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r18;
    // 0x00237B0C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00237B10: sw          $s6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r22;
    // 0x00237B14: lw          $s6, 0x118($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X118);
    // 0x00237B18: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x00237B1C: sw          $fp, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r30;
    // 0x00237B20: sw          $s7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r23;
    // 0x00237B24: sw          $s5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r21;
    // 0x00237B28: sw          $s4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r20;
    // 0x00237B2C: sw          $s3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r19;
    // 0x00237B30: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x00237B34: sdc1        $f23, 0xE8($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XE8, ctx->r29);
    // 0x00237B38: sdc1        $f22, 0xE0($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE0, ctx->r29);
    // 0x00237B3C: sdc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD8, ctx->r29);
    // 0x00237B40: sdc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD0, ctx->r29);
    // 0x00237B44: jal         0x0023726C
    // 0x00237B48: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    func_0023726C(rdram, ctx);
        goto after_0;
    // 0x00237B48: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    after_0:
    // 0x00237B4C: beq         $v0, $zero, L_00237EA4
    if (ctx->r2 == 0) {
        // 0x00237B50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00237EA4;
    }
    // 0x00237B50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00237B54: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x00237B58: bne         $v1, $v0, L_00237C0C
    if (ctx->r3 != ctx->r2) {
        // 0x00237B5C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00237C0C;
    }
    // 0x00237B5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00237B60: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00237B64: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237B68: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237B6C: beq         $v0, $zero, L_00237C0C
    if (ctx->r2 == 0) {
        // 0x00237B70: nop
    
            goto L_00237C0C;
    }
    // 0x00237B70: nop

    // 0x00237B74: lw          $s0, 0x1A8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A8);
    // 0x00237B78: addiu       $v0, $s0, 0x288
    ctx->r2 = ADD32(ctx->r16, 0X288);
    // 0x00237B7C: bne         $s2, $v0, L_00237C0C
    if (ctx->r18 != ctx->r2) {
        // 0x00237B80: nop
    
            goto L_00237C0C;
    }
    // 0x00237B80: nop

    // 0x00237B84: lhu         $v1, 0x996($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X996);
    // 0x00237B88: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x00237B8C: bne         $v0, $zero, L_00237BA8
    if (ctx->r2 != 0) {
        // 0x00237B90: addiu       $a0, $sp, 0xFC
        ctx->r4 = ADD32(ctx->r29, 0XFC);
            goto L_00237BA8;
    }
    // 0x00237B90: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x00237B94: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x00237B98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00237B9C: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x00237BA0: bne         $v0, $v1, L_00237C0C
    if (ctx->r2 != ctx->r3) {
        // 0x00237BA4: nop
    
            goto L_00237C0C;
    }
    // 0x00237BA4: nop

L_00237BA8:
    // 0x00237BA8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x00237BAC: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    // 0x00237BB0: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x00237BB4: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x00237BB8: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x00237BBC: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x00237BC0: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x00237BC4: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x00237BC8: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00237BCC: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00237BD0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00237BD4: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x00237BD8: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x00237BDC: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x00237BE0: jal         0x0020EF8C
    // 0x00237BE4: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_0020EF8C(rdram, ctx);
        goto after_1;
    // 0x00237BE4: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x00237BE8: jal         0x002671B4
    // 0x00237BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x00237BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00237BF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237BF4: lwc1        $f1, 0x6590($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6590);
    // 0x00237BF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00237BFC: lwc1        $f1, 0x100($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X100);
    // 0x00237C00: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00237C04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00237C08: swc1        $f1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00237C0C:
    // 0x00237C0C: lhu         $v0, 0x108($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X108);
    // 0x00237C10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237C14: lwc1        $f1, 0x6594($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6594);
    // 0x00237C18: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x00237C1C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00237C20: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00237C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00237C28: mul.s       $f23, $f0, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00237C2C: bne         $v1, $v0, L_00237C44
    if (ctx->r3 != ctx->r2) {
        // 0x00237C30: addu        $fp, $a2, $zero
        ctx->r30 = ADD32(ctx->r6, 0);
            goto L_00237C44;
    }
    // 0x00237C30: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x00237C34: jal         0x0021F268
    // 0x00237C38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021F268(rdram, ctx);
        goto after_3;
    // 0x00237C38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00237C3C: j           L_00237C50
    // 0x00237C40: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_00237C50;
    // 0x00237C40: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_00237C44:
    // 0x00237C44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237C48: lwc1        $f0, 0x6598($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6598);
    // 0x00237C4C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_00237C50:
    // 0x00237C50: addiu       $s5, $sp, 0xA0
    ctx->r21 = ADD32(ctx->r29, 0XA0);
    // 0x00237C54: lw          $s4, 0x110($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X110);
    // 0x00237C58: lhu         $v0, 0x10A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10A);
    // 0x00237C5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237C60: lwc1        $f21, 0x659C($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X659C);
    // 0x00237C64: mtc1        $v0, $f22
    ctx->f22.u32l = ctx->r2;
    // 0x00237C68: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x00237C6C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00237C70: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00237C74: mul.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x00237C78: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x00237C7C: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x00237C80: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x00237C84: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x00237C88: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x00237C8C: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x00237C90: beq         $v0, $zero, L_00237CA4
    if (ctx->r2 == 0) {
        // 0x00237C94: addu        $s7, $s3, $zero
        ctx->r23 = ADD32(ctx->r19, 0);
            goto L_00237CA4;
    }
    // 0x00237C94: addu        $s7, $s3, $zero
    ctx->r23 = ADD32(ctx->r19, 0);
    // 0x00237C98: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00237C9C: and         $v0, $s6, $v0
    ctx->r2 = ctx->r22 & ctx->r2;
    // 0x00237CA0: sltu        $s3, $v0, $s3
    ctx->r19 = ctx->r2 < ctx->r19 ? 1 : 0;
L_00237CA4:
    // 0x00237CA4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x00237CA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00237CAC: bne         $v1, $v0, L_00237CE4
    if (ctx->r3 != ctx->r2) {
        // 0x00237CB0: nop
    
            goto L_00237CE4;
    }
    // 0x00237CB0: nop

    // 0x00237CB4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00237CB8: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x00237CBC: bne         $v0, $s1, L_00237CE4
    if (ctx->r2 != ctx->r17) {
        // 0x00237CC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00237CE4;
    }
    // 0x00237CC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00237CC4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00237CC8: lw          $v1, 0x1CF4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CF4);
    // 0x00237CCC: beq         $v1, $v0, L_00237CE4
    if (ctx->r3 == ctx->r2) {
        // 0x00237CD0: nop
    
            goto L_00237CE4;
    }
    // 0x00237CD0: nop

    // 0x00237CD4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00237CD8: addiu       $v1, $v1, 0x1CF8
    ctx->r3 = ADD32(ctx->r3, 0X1CF8);
    // 0x00237CDC: j           L_00237D10
    // 0x00237CE0: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
        goto L_00237D10;
    // 0x00237CE0: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_00237CE4:
    // 0x00237CE4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00237CE8: addiu       $s0, $s0, 0x1970
    ctx->r16 = ADD32(ctx->r16, 0X1970);
    // 0x00237CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00237CF0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x00237CF4: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x00237CF8: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x00237CFC: jal         0x0021E374
    // 0x00237D00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021E374(rdram, ctx);
        goto after_4;
    // 0x00237D00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00237D04: beq         $v0, $zero, L_00237D10
    if (ctx->r2 == 0) {
        // 0x00237D08: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00237D10;
    }
    // 0x00237D08: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00237D0C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00237D10:
    // 0x00237D10: beq         $s3, $zero, L_00237D28
    if (ctx->r19 == 0) {
        // 0x00237D14: sw          $v1, 0x0($s5)
        MEM_W(0X0, ctx->r21) = ctx->r3;
            goto L_00237D28;
    }
    // 0x00237D14: sw          $v1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r3;
    // 0x00237D18: beq         $v1, $zero, L_00237D28
    if (ctx->r3 == 0) {
        // 0x00237D1C: nop
    
            goto L_00237D28;
    }
    // 0x00237D1C: nop

    // 0x00237D20: lwc1        $f0, 0x68($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X68);
    // 0x00237D24: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
L_00237D28:
    // 0x00237D28: beq         $s4, $zero, L_00237DE8
    if (ctx->r20 == 0) {
        // 0x00237D2C: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_00237DE8;
    }
    // 0x00237D2C: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x00237D30: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00237D34: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x00237D38: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00237D3C: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x00237D40: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x00237D44: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x00237D48: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00237D4C: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00237D50: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00237D54: jal         0x002671B4
    // 0x00237D58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x00237D58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00237D5C: add.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00237D60: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x00237D64: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00237D68: nop

    // 0x00237D6C: bc1f        L_00237D7C
    if (!c1cs) {
        // 0x00237D70: nop
    
            goto L_00237D7C;
    }
    // 0x00237D70: nop

    // 0x00237D74: j           L_00237D90
    // 0x00237D78: swc1        $f1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_00237D90;
    // 0x00237D78: swc1        $f1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00237D7C:
    // 0x00237D7C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00237D80: nop

    // 0x00237D84: bc1fl       L_00237D90
    if (!c1cs) {
        // 0x00237D88: swc1        $f0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
            goto L_00237D90;
    }
    goto skip_0;
    // 0x00237D88: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    skip_0:
    // 0x00237D8C: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
L_00237D90:
    // 0x00237D90: jal         0x002672C8
    // 0x00237D94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002672C8(rdram, ctx);
        goto after_6;
    // 0x00237D94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00237D98: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x00237D9C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x00237DA0: jal         0x0020F6BC
    // 0x00237DA4: add.s       $f20, $f23, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f23.fl + ctx->f0.fl;
    func_0020F6BC(rdram, ctx);
        goto after_7;
    // 0x00237DA4: add.s       $f20, $f23, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f23.fl + ctx->f0.fl;
    after_7:
    // 0x00237DA8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00237DAC: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00237DB0: nop

    // 0x00237DB4: bc1f        L_00237DC8
    if (!c1cs) {
        // 0x00237DB8: nop
    
            goto L_00237DC8;
    }
    // 0x00237DB8: nop

    // 0x00237DBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00237DC0: j           L_00237DE8
    // 0x00237DC4: nop

        goto L_00237DE8;
    // 0x00237DC4: nop

L_00237DC8:
    // 0x00237DC8: beq         $s7, $zero, L_00237DE8
    if (ctx->r23 == 0) {
        // 0x00237DCC: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_00237DE8;
    }
    // 0x00237DCC: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x00237DD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237DD4: lwc1        $f0, 0x65A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65A0);
    // 0x00237DD8: div.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f20.fl);
    // 0x00237DDC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00237DE0: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00237DE4: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
L_00237DE8:
    // 0x00237DE8: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00237DEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00237DF0: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x00237DF4: nop

    // 0x00237DF8: bc1t        L_00237EA4
    if (c1cs) {
        // 0x00237DFC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00237EA4;
    }
    // 0x00237DFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00237E00: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00237E04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00237E08: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x00237E0C: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    // 0x00237E10: lw          $a3, 0x10C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10C);
    // 0x00237E14: jal         0x002374AC
    // 0x00237E18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002374AC(rdram, ctx);
        goto after_8;
    // 0x00237E18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_8:
    // 0x00237E1C: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x00237E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00237E24: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x00237E28: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00237E2C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x00237E30: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x00237E34: trunc.w.s   $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x00237E38: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x00237E3C: jal         0x00245828
    // 0x00237E40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00245828(rdram, ctx);
        goto after_9;
    // 0x00237E40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_9:
    // 0x00237E44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00237E48: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    // 0x00237E4C: jal         0x002465C8
    // 0x00237E50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002465C8(rdram, ctx);
        goto after_10;
    // 0x00237E50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00237E54: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00237E58: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x00237E5C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x00237E60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00237E64: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00237E68: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00237E6C: lw          $v0, 0x114($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X114);
    // 0x00237E70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00237E74: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00237E78: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x00237E7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00237E80: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x00237E84: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00237E88: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x00237E8C: lw          $t1, 0x104($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X104);
    // 0x00237E90: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00237E94: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237E98: lw          $a3, 0xFC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XFC);
    // 0x00237E9C: jal         0x002376F8
    // 0x00237EA0: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    func_002376F8(rdram, ctx);
        goto after_11;
    // 0x00237EA0: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    after_11:
L_00237EA4:
    // 0x00237EA4: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x00237EA8: lw          $fp, 0xC8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC8);
    // 0x00237EAC: lw          $s7, 0xC4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XC4);
    // 0x00237EB0: lw          $s6, 0xC0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC0);
    // 0x00237EB4: lw          $s5, 0xBC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XBC);
    // 0x00237EB8: lw          $s4, 0xB8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB8);
    // 0x00237EBC: lw          $s3, 0xB4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XB4);
    // 0x00237EC0: lw          $s2, 0xB0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB0);
    // 0x00237EC4: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x00237EC8: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x00237ECC: ldc1        $f23, 0xE8($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE8);
    // 0x00237ED0: ldc1        $f22, 0xE0($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE0);
    // 0x00237ED4: ldc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD8);
    // 0x00237ED8: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x00237EDC: jr          $ra
    // 0x00237EE0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x00237EE0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_00289774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289778: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028977C: lw          $v0, 0x6D60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D60);
    // 0x00289780: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289784: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00289788: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028978C: sw          $v0, 0x6D60($at)
    MEM_W(0X6D60, ctx->r1) = ctx->r2;
    // 0x00289790: jal         0x00288DD0
    // 0x00289794: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    func_00288DD0(rdram, ctx);
        goto after_0;
    // 0x00289794: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    after_0:
    // 0x00289798: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028979C: jr          $ra
    // 0x002897A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002897A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002554D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002554D0: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x002554D4: lw          $a1, 0x1CE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1CE0);
    // 0x002554D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002554DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002554E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002554E4: beq         $a1, $zero, L_00255554
    if (ctx->r5 == 0) {
        // 0x002554E8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00255554;
    }
    // 0x002554E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002554EC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x002554F0: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x002554F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002554F8: bne         $a2, $v0, L_00255554
    if (ctx->r6 != ctx->r2) {
        // 0x002554FC: nop
    
            goto L_00255554;
    }
    // 0x002554FC: nop

    // 0x00255500: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00255504: addiu       $s1, $s1, -0x550F
    ctx->r17 = ADD32(ctx->r17, -0X550F);
    // 0x00255508: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0025550C: beq         $v0, $zero, L_00255554
    if (ctx->r2 == 0) {
        // 0x00255510: addiu       $v0, $zero, 0x64E
        ctx->r2 = ADD32(0, 0X64E);
            goto L_00255554;
    }
    // 0x00255510: addiu       $v0, $zero, 0x64E
    ctx->r2 = ADD32(0, 0X64E);
    // 0x00255514: lhu         $v1, 0xB8($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XB8);
    // 0x00255518: bne         $v1, $v0, L_00255554
    if (ctx->r3 != ctx->r2) {
        // 0x0025551C: nop
    
            goto L_00255554;
    }
    // 0x0025551C: nop

    // 0x00255520: lb          $v1, 0x176($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X176);
    // 0x00255524: lb          $v0, 0x174($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X174);
    // 0x00255528: beq         $v1, $v0, L_00255554
    if (ctx->r3 == ctx->r2) {
        // 0x0025552C: nop
    
            goto L_00255554;
    }
    // 0x0025552C: nop

    // 0x00255530: lw          $v0, 0x518($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X518);
    // 0x00255534: lbu         $s0, 0x3E($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3E);
    // 0x00255538: bne         $s0, $a2, L_00255554
    if (ctx->r16 != ctx->r6) {
        // 0x0025553C: nop
    
            goto L_00255554;
    }
    // 0x0025553C: nop

    // 0x00255540: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x00255544: lw          $v0, 0x518($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X518);
    // 0x00255548: jal         0x002540E4
    // 0x0025554C: sb          $s0, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r16;
    func_002540E4(rdram, ctx);
        goto after_0;
    // 0x0025554C: sb          $s0, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r16;
    after_0:
    // 0x00255550: sw          $s0, 0x1FF($s1)
    MEM_W(0X1FF, ctx->r17) = ctx->r16;
L_00255554:
    // 0x00255554: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00255558: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025555C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255560: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255564: jr          $ra
    // 0x00255568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00255568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402CF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402CF4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00402CF8: lw          $a0, -0xA40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA40);
    // 0x00402CFC: addiu       $a2, $zero, 0x5AAA
    ctx->r6 = ADD32(0, 0X5AAA);
    // 0x00402D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00402D04: jal         0x002666B0
    // 0x00402D08: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x00402D08: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00402D0C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00402D10: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00402D14: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00402D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00402D1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402D20: jr          $ra
    // 0x00402D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020F7EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F7EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0020F7F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F7F4: lwc1        $f2, 0x55E8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X55E8);
    // 0x0020F7F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F7FC: lwc1        $f1, 0x55EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55EC);
L_0020F800:
    // 0x0020F800: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0020F804: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_0020F808:
    // 0x0020F808: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0020F80C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0020F810: nop

    // 0x0020F814: bc1f        L_0020F824
    if (!c1cs) {
        // 0x0020F818: nop
    
            goto L_0020F824;
    }
    // 0x0020F818: nop

    // 0x0020F81C: j           L_0020F834
    // 0x0020F820: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
        goto L_0020F834;
    // 0x0020F820: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_0020F824:
    // 0x0020F824: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020F828: nop

    // 0x0020F82C: bc1tl       L_0020F834
    if (c1cs) {
        // 0x0020F830: swc1        $f1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_0020F834;
    }
    goto skip_0;
    // 0x0020F830: swc1        $f1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_0020F834:
    // 0x0020F834: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0020F838: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x0020F83C: bne         $v0, $zero, L_0020F808
    if (ctx->r2 != 0) {
        // 0x0020F840: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0020F808;
    }
    // 0x0020F840: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0020F844: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0020F848: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x0020F84C: bne         $v0, $zero, L_0020F800
    if (ctx->r2 != 0) {
        // 0x0020F850: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0020F800;
    }
    // 0x0020F850: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0020F854: jr          $ra
    // 0x0020F858: nop

    return;
    // 0x0020F858: nop

;}
RECOMP_FUNC void func_00460F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460F78: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00460F7C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00460F80: addiu       $v0, $v0, 0xE20
    ctx->r2 = ADD32(ctx->r2, 0XE20);
    // 0x00460F84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00460F88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00460F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460F90: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x00460F94: sb          $v0, 0x0($sp)
    MEM_B(0X0, ctx->r29) = ctx->r2;
    // 0x00460F98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00460F9C: sb          $v0, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r2;
    // 0x00460FA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00460FA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00460FA8: sb          $zero, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = 0;
    // 0x00460FAC: sb          $zero, 0x2($sp)
    MEM_B(0X2, ctx->r29) = 0;
    // 0x00460FB0: sb          $v0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r2;
    // 0x00460FB4: sb          $v0, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r2;
    // 0x00460FB8: blez        $a0, L_00460FD4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00460FBC: sb          $v0, 0x5($sp)
        MEM_B(0X5, ctx->r29) = ctx->r2;
            goto L_00460FD4;
    }
    // 0x00460FBC: sb          $v0, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r2;
L_00460FC0:
    // 0x00460FC0: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x00460FC4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00460FC8: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00460FCC: bne         $v0, $zero, L_00460FC0
    if (ctx->r2 != 0) {
        // 0x00460FD0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00460FC0;
    }
    // 0x00460FD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00460FD4:
    // 0x00460FD4: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00460FD8: lwl         $a2, 0x0($sp)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r29, 0X0);
    // 0x00460FDC: lwr         $a2, 0x3($sp)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r29, 0X3);
    // 0x00460FE0: lb          $a3, 0x4($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X4);
    // 0x00460FE4: lb          $t0, 0x5($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X5);
    // 0x00460FE8: swl         $a2, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r6);
    // 0x00460FEC: swr         $a2, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r6);
    // 0x00460FF0: sb          $a3, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r7;
    // 0x00460FF4: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
    // 0x00460FF8: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x00460FFC: jr          $ra
    // 0x00461000: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00461000: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00402888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040288C: addiu       $v0, $zero, 0x1D4D
    ctx->r2 = ADD32(0, 0X1D4D);
    // 0x00402890: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00402894: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x00402898: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040289C: addiu       $v0, $v0, 0xCA4
    ctx->r2 = ADD32(ctx->r2, 0XCA4);
    // 0x004028A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004028A4: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x004028A8: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x004028AC: addiu       $v0, $v0, 0x2A10
    ctx->r2 = ADD32(ctx->r2, 0X2A10);
    // 0x004028B0: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x004028B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x004028B8: addiu       $v0, $v0, 0x2404
    ctx->r2 = ADD32(ctx->r2, 0X2404);
    // 0x004028BC: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x004028C0: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x004028C4: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x004028C8: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x004028CC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x004028D0: addiu       $v0, $v0, 0x3660
    ctx->r2 = ADD32(ctx->r2, 0X3660);
    // 0x004028D4: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x004028D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004028DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004028E0: jal         0x00243414
    // 0x004028E4: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004028E4: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    after_0:
    // 0x004028E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004028EC: jr          $ra
    // 0x004028F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004028F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00460B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427CBC:
    // 0x00460B3C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
L_00427D50:
    // 0x00460B40: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x00460B44: sw          $s3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r19;
    // 0x00460B48: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00460B4C: sw          $s1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r17;
    // 0x00460B50: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00460B54: sw          $ra, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r31;
    // 0x00460B58: sw          $s7, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r23;
    // 0x00460B5C: sw          $s6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r22;
    // 0x00460B60: sw          $s5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r21;
    // 0x00460B64: sw          $s4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r20;
    // 0x00460B68: sw          $s2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r18;
    // 0x00460B6C: sw          $s0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r16;
    // 0x00460B70: lw          $v0, 0x50($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X50);
    // 0x00460B74: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00460B78: beq         $v0, $zero, L_00460C04
    if (ctx->r2 == 0) {
        // 0x00460B7C: addu        $s6, $a2, $zero
        ctx->r22 = ADD32(ctx->r6, 0);
            goto L_00460C04;
    }
    // 0x00460B7C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00460B80: bltz        $s1, L_00460D50
    if (SIGNED(ctx->r17) < 0) {
        // 0x00460B84: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00460D50;
    }
    // 0x00460B84: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00460B88: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00460B8C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00460B90: beq         $v0, $zero, L_00460D50
    if (ctx->r2 == 0) {
        // 0x00460B94: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00460D50;
    }
    // 0x00460B94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00460B98: jal         0x00429D1C
    // 0x00460B9C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429D1C(rdram, ctx);
        goto after_0;
    // 0x00460B9C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00460BA0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00460BA4: beq         $v0, $v1, L_00460D50
    if (ctx->r2 == ctx->r3) {
        // 0x00460BA8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00460D50;
    }
    // 0x00460BA8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00460BAC: lbu         $v0, 0x65($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X65);
    // 0x00460BB0: beq         $v0, $zero, L_00460BCC
    if (ctx->r2 == 0) {
        // 0x00460BB4: addiu       $a3, $sp, 0x110
        ctx->r7 = ADD32(ctx->r29, 0X110);
            goto L_00460BCC;
    }
    // 0x00460BB4: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x00460BB8: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    // 0x00460BBC: jal         0x00429DE4
    // 0x00460BC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    entry_00429DE4(rdram, ctx);
        goto after_1;
    // 0x00460BC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00460BC4: bne         $v0, $zero, L_00460D50
    if (ctx->r2 != 0) {
        // 0x00460BC8: addiu       $a3, $sp, 0x110
        ctx->r7 = ADD32(ctx->r29, 0X110);
            goto L_00460D50;
    }
    // 0x00460BC8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
L_00460BCC:
    // 0x00460BCC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x00460BD0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x00460BD4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00460BD8: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x00460BDC: jal         0x00299680
    // 0x00460BE0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00460BE0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00460BE4: bne         $v0, $zero, L_00460D50
    if (ctx->r2 != 0) {
        // 0x00460BE8: nop
    
            goto L_00460D50;
    }
    // 0x00460BE8: nop

    // 0x00460BEC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00460BF0: beq         $v0, $zero, L_00460D50
    if (ctx->r2 == 0) {
        // 0x00460BF4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00460D50;
    }
    // 0x00460BF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00460BF8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00460BFC: bne         $v0, $zero, L_00460C0C
    if (ctx->r2 != 0) {
        // 0x00460C00: nop
    
            goto L_00460C0C;
    }
    // 0x00460C00: nop

L_00460C04:
    // 0x00460C04: j           L_00427D50
    // 0x00460C08: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    entry_00427D50(rdram, ctx);
    return;
    // 0x00460C08: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00460C0C:
    // 0x00460C0C: lhu         $v0, 0x116($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X116);
    // 0x00460C10: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00460C14: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00460C18: bne         $v0, $zero, L_00460D50
    if (ctx->r2 != 0) {
        // 0x00460C1C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00460D50;
    }
    // 0x00460C1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00460C20: lbu         $s5, 0x117($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X117);
    // 0x00460C24: lbu         $s2, 0x116($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X116);
    // 0x00460C28: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00460C2C: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00460C30: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00460C34: beq         $v0, $zero, L_00460CD4
    if (ctx->r2 == 0) {
        // 0x00460C38: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00460CD4;
    }
    // 0x00460C38: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00460C3C: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x00460C40: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00460C44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00460C48:
    // 0x00460C48: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00460C4C: jal         0x004299C4
    // 0x00460C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_004299C4(rdram, ctx);
        goto after_3;
    // 0x00460C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x00460C54: bne         $v0, $zero, L_00460D50
    if (ctx->r2 != 0) {
        // 0x00460C58: nop
    
            goto L_00460D50;
    }
    // 0x00460C58: nop

    // 0x00460C5C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00460C60: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00460C64: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00460C68: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00460C6C: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00460C70: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00460C74: bne         $v0, $zero, L_00460CB8
    if (ctx->r2 != 0) {
        // 0x00460C78: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00460CB8;
    }
    // 0x00460C78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00460C7C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00460C80: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00460C84:
    // 0x00460C84: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00460C88: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00460C8C: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00460C90: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x00460C94: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x00460C98: beq         $v1, $s2, L_00460CAC
    if (ctx->r3 == ctx->r18) {
        // 0x00460C9C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00460CAC;
    }
    // 0x00460C9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00460CA0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x00460CA4: j           L_00427CBC
    // 0x00460CA8: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    entry_00427CBC(rdram, ctx);
    return;
    // 0x00460CA8: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00460CAC:
    // 0x00460CAC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00460CB0: beq         $v0, $zero, L_00460C84
    if (ctx->r2 == 0) {
        // 0x00460CB4: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_00460C84;
    }
    // 0x00460CB4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00460CB8:
    // 0x00460CB8: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x00460CBC: beq         $v0, $s7, L_00460CE4
    if (ctx->r2 == ctx->r23) {
        // 0x00460CC0: andi        $a3, $s2, 0xFF
        ctx->r7 = ctx->r18 & 0XFF;
            goto L_00460CE4;
    }
    // 0x00460CC0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00460CC4: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00460CC8: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00460CCC: bnel        $v0, $zero, L_00460C48
    if (ctx->r2 != 0) {
        // 0x00460CD0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00460C48;
    }
    goto skip_0;
    // 0x00460CD0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_0:
L_00460CD4:
    // 0x00460CD4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00460CD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460CDC: bne         $v1, $v0, L_00460D50
    if (ctx->r3 != ctx->r2) {
        // 0x00460CE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00460D50;
    }
    // 0x00460CE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00460CE4:
    // 0x00460CE4: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00460CE8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00460CEC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00460CF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00460CF4: sh          $v0, 0x8($s6)
    MEM_H(0X8, ctx->r22) = ctx->r2;
    // 0x00460CF8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00460CFC: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00460D00: sw          $v0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r2;
    // 0x00460D04: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00460D08:
    // 0x00460D08: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00460D0C: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x00460D10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00460D14: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x00460D18: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x00460D1C: bne         $v0, $zero, L_00460D08
    if (ctx->r2 != 0) {
        // 0x00460D20: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00460D08;
    }
    // 0x00460D20: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00460D24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00460D28: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00460D2C: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00460D30:
    // 0x00460D30: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00460D34: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00460D38: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00460D3C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x00460D40: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00460D44: bne         $v0, $zero, L_00460D30
    if (ctx->r2 != 0) {
        // 0x00460D48: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00460D30;
    }
    // 0x00460D48: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00460D4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00460D50:
    // 0x00460D50: lw          $ra, 0x150($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X150);
    // 0x00460D54: lw          $s7, 0x14C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14C);
    // 0x00460D58: lw          $s6, 0x148($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X148);
    // 0x00460D5C: lw          $s5, 0x144($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X144);
    // 0x00460D60: lw          $s4, 0x140($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X140);
    // 0x00460D64: lw          $s3, 0x13C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X13C);
    // 0x00460D68: lw          $s2, 0x138($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X138);
    // 0x00460D6C: lw          $s1, 0x134($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X134);
    // 0x00460D70: lw          $s0, 0x130($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X130);
    // 0x00460D74: jr          $ra
    // 0x00460D78: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    // 0x00460D78: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_00256D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256D7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00256D80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00256D84: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00256D88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00256D8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00256D90: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00256D94: jal         0x00268A2C
    // 0x00256D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268A2C(rdram, ctx);
        goto after_0;
    // 0x00256D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00256D9C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00256DA0: beq         $s1, $zero, L_00256E54
    if (ctx->r17 == 0) {
        // 0x00256DA4: nop
    
            goto L_00256E54;
    }
    // 0x00256DA4: nop

    // 0x00256DA8: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x00256DAC: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x00256DB0: beq         $v0, $zero, L_00256E54
    if (ctx->r2 == 0) {
        // 0x00256DB4: nop
    
            goto L_00256E54;
    }
    // 0x00256DB4: nop

    // 0x00256DB8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00256DBC: mul.s       $f3, $f0, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00256DC0: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00256DC4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00256DC8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00256DCC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00256DD0: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00256DD4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00256DD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256DDC: lwc1        $f2, 0x7208($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7208);
    // 0x00256DE0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00256DE4: nop

    // 0x00256DE8: bc1f        L_00256E54
    if (!c1cs) {
        // 0x00256DEC: nop
    
            goto L_00256E54;
    }
    // 0x00256DEC: nop

    // 0x00256DF0: sub.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x00256DF4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00256DF8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00256DFC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00256E00: nop

    // 0x00256E04: bc1tl       L_00256E0C
    if (c1cs) {
        // 0x00256E08: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_00256E0C;
    }
    goto skip_0;
    // 0x00256E08: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_0:
L_00256E0C:
    // 0x00256E0C: jal         0x00298470
    // 0x00256E10: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x00256E10: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x00256E14: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00256E18: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00256E1C: nop

    // 0x00256E20: bc1tl       L_00256E28
    if (c1cs) {
        // 0x00256E24: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_00256E28;
    }
    goto skip_1;
    // 0x00256E24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
L_00256E28:
    // 0x00256E28: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00256E2C: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x00256E30: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x00256E34: beq         $v0, $zero, L_00256E54
    if (ctx->r2 == 0) {
        // 0x00256E38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00256E54;
    }
    // 0x00256E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256E3C: jal         0x0026872C
    // 0x00256E40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_2;
    // 0x00256E40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00256E44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256E48: lwc1        $f1, 0x720C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X720C);
    // 0x00256E4C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00256E50: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00256E54:
    // 0x00256E54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00256E58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00256E5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00256E60: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00256E64: jr          $ra
    // 0x00256E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00256E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004652DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004652DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004652E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004652E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004652E8: jal         0x0042C338
    // 0x004652EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    entry_0042C338(rdram, ctx);
        goto after_0;
    // 0x004652EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x004652F0: jal         0x0042C38C
    // 0x004652F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042C38C(rdram, ctx);
        goto after_1;
    // 0x004652F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004652F8: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x004652FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465300: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00465304: sw          $zero, -0x7020($at)
    MEM_W(-0X7020, ctx->r1) = 0;
    // 0x00465308: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046530C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00465310: sw          $v0, -0x701C($at)
    MEM_W(-0X701C, ctx->r1) = ctx->r2;
    // 0x00465314: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00465318: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0046531C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465320: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00465324: sw          $v0, -0x7018($at)
    MEM_W(-0X7018, ctx->r1) = ctx->r2;
    // 0x00465328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0046532C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465330: jr          $ra
    // 0x00465334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00465334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412C3C:
    // 0x0044BB9C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044BBA0: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044BBA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0044BBA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0044BBAC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0044BBB0: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x0044BBB4: bne         $v0, $zero, L_0044BBE8
    if (ctx->r2 != 0) {
        // 0x0044BBB8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0044BBE8;
    }
    // 0x0044BBB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044BBBC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0044BBC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0044BBC4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x0044BBC8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0044BBCC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0044BBD0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0044BBD4: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x0044BBD8: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x0044BBDC: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x0044BBE0: j           L_00412C3C
    // 0x0044BBE4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    entry_00412C3C(rdram, ctx);
    return;
    // 0x0044BBE4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044BBE8:
    // 0x0044BBE8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0044BBEC: jal         0x002017D4
    // 0x0044BBF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BBF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044BBF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BBF8: jal         0x002017D4
    // 0x0044BBFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044BBFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0044BC00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BC04: jal         0x002017D4
    // 0x0044BC08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044BC08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0044BC0C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0044BC10: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x0044BC14: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0044BC18: jal         0x004101B8
    // 0x0044BC1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_3;
    // 0x0044BC1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x0044BC20: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x0044BC24: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0044BC28: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x0044BC2C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x0044BC30: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x0044BC34: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x0044BC38: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044BC3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0044BC40: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0044BC44: jr          $ra
    // 0x0044BC48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044BC48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00407BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00407BEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00407BF0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00407BF4: beq         $v0, $zero, L_00407C0C
    if (ctx->r2 == 0) {
        // 0x00407BF8: nop
    
            goto L_00407C0C;
    }
    // 0x00407BF8: nop

    // 0x00407BFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00407C00: sb          $zero, -0x630($at)
    MEM_B(-0X630, ctx->r1) = 0;
    // 0x00407C04: jal         0x00243414
    // 0x00407C08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00407C08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_00407C0C:
    // 0x00407C0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00407C10: jr          $ra
    // 0x00407C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00407C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0025AD24:
    // 0x00293CD8: j           L_0025AD24
    // 0x00293CDC: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    entry_0025AD24(rdram, ctx);
    return;
    // 0x00293CDC: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
;}
RECOMP_FUNC void func_00407AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407AC0: jr          $ra
    // 0x00407AC4: nop

    return;
    // 0x00407AC4: nop

;}
RECOMP_FUNC void func_002673CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002673CC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x002673D0: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x002673D4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002673D8: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x002673DC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002673E0: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x002673E4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002673E8: sw          $ra, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r31;
    // 0x002673EC: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x002673F0: sdc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE8, ctx->r29);
    // 0x002673F4: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x002673F8: beq         $s2, $zero, L_00267458
    if (ctx->r18 == 0) {
        // 0x002673FC: sw          $a3, 0xFC($sp)
        MEM_W(0XFC, ctx->r29) = ctx->r7;
            goto L_00267458;
    }
    // 0x002673FC: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x00267400: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x00267404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267408: bne         $v1, $v0, L_00267458
    if (ctx->r3 != ctx->r2) {
        // 0x0026740C: addiu       $s0, $sp, 0x70
        ctx->r16 = ADD32(ctx->r29, 0X70);
            goto L_00267458;
    }
    // 0x0026740C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x00267410: lw          $s1, 0x1C0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1C0);
    // 0x00267414: jal         0x0021AE6C
    // 0x00267418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021AE6C(rdram, ctx);
        goto after_0;
    // 0x00267418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0026741C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00267420: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x00267424: jal         0x00211114
    // 0x00267428: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_1;
    // 0x00267428: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0026742C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00267430: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x00267434: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267438: lwc1        $f0, 0x7DE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DE4);
    // 0x0026743C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x00267440: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x00267444: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x00267448: jal         0x0020F85C
    // 0x0026744C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0026744C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x00267450: j           L_0026746C
    // 0x00267454: nop

        goto L_0026746C;
    // 0x00267454: nop

L_00267458:
    // 0x00267458: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026745C: lwc1        $f0, 0x7DE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DE8);
    // 0x00267460: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00267464: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00267468: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
L_0026746C:
    // 0x0026746C: bne         $s1, $zero, L_002674C0
    if (ctx->r17 != 0) {
        // 0x00267470: nop
    
            goto L_002674C0;
    }
    // 0x00267470: nop

    // 0x00267474: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    // 0x00267478: lw          $a2, 0xFC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XFC);
    // 0x0026747C: lw          $a3, 0x100($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X100);
    // 0x00267480: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00267484: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00267488: jal         0x002532EC
    // 0x0026748C: nop

    func_002532EC(rdram, ctx);
        goto after_3;
    // 0x0026748C: nop

    after_3:
    // 0x00267490: bnel        $v0, $zero, L_00267498
    if (ctx->r2 != 0) {
        // 0x00267494: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_00267498;
    }
    goto skip_0;
    // 0x00267494: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    skip_0:
L_00267498:
    // 0x00267498: bne         $s1, $zero, L_002674C0
    if (ctx->r17 != 0) {
        // 0x0026749C: nop
    
            goto L_002674C0;
    }
    // 0x0026749C: nop

    // 0x002674A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002674A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002674A8: lwc1        $f1, 0x7DEC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7DEC);
    // 0x002674AC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x002674B0: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x002674B4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x002674B8: j           L_00267604
    // 0x002674BC: swc1        $f1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_00267604;
    // 0x002674BC: swc1        $f1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_002674C0:
    // 0x002674C0: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x002674C4: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x002674C8: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x002674CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x002674D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x002674D4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x002674D8: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x002674DC: lwc1        $f1, 0x54($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X54);
    // 0x002674E0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002674E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002674E8: jal         0x002671B4
    // 0x002674EC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_4;
    // 0x002674EC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x002674F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002674F4: lwc1        $f1, 0x7DF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7DF0);
    // 0x002674F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002674FC: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x00267500: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00267504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00267508: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026750C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00267510: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    // 0x00267514: jal         0x0020EF2C
    // 0x00267518: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00267518: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_5:
    // 0x0026751C: jal         0x0020F040
    // 0x00267520: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_6;
    // 0x00267520: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00267524: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x00267528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026752C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x00267530: jal         0x0020EFDC
    // 0x00267534: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EFDC(rdram, ctx);
        goto after_7;
    // 0x00267534: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00267538: jal         0x0020F040
    // 0x0026753C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_8;
    // 0x0026753C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00267540: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00267544: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00267548: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026754C: lwc1        $f1, 0x34($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x00267550: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00267554: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00267558: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0026755C: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00267560: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00267564: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00267568: jal         0x0021153C
    // 0x0026756C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_9;
    // 0x0026756C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_9:
    // 0x00267570: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267574: lwc1        $f1, 0x7DF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7DF4);
    // 0x00267578: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026757C: jal         0x002982F0
    // 0x00267580: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_10;
    // 0x00267580: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_10:
    // 0x00267584: lwc1        $f3, 0x50($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x00267588: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026758C: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00267590: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00267594: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x00267598: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026759C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002675A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002675A4: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x002675A8: swc1        $f3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x002675AC: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x002675B0: jal         0x002974C0
    // 0x002675B4: swc1        $f1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_11;
    // 0x002675B4: swc1        $f1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_11:
    // 0x002675B8: beq         $s2, $zero, L_002675E4
    if (ctx->r18 == 0) {
        // 0x002675BC: swc1        $f0, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
            goto L_002675E4;
    }
    // 0x002675BC: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x002675C0: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x002675C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002675C8: bne         $v1, $v0, L_002675E4
    if (ctx->r3 != ctx->r2) {
        // 0x002675CC: addiu       $a0, $sp, 0x80
        ctx->r4 = ADD32(ctx->r29, 0X80);
            goto L_002675E4;
    }
    // 0x002675CC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x002675D0: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x002675D4: jal         0x00210F68
    // 0x002675D8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_00210F68(rdram, ctx);
        goto after_12;
    // 0x002675D8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_12:
    // 0x002675DC: j           L_00267604
    // 0x002675E0: nop

        goto L_00267604;
    // 0x002675E0: nop

L_002675E4:
    // 0x002675E4: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x002675E8: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x002675EC: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x002675F0: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x002675F4: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x002675F8: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x002675FC: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x00267600: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
L_00267604:
    // 0x00267604: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x00267608: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x0026760C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x00267610: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x00267614: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x00267618: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
    // 0x0026761C: sw          $t2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r10;
    // 0x00267620: sw          $t3, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r11;
    // 0x00267624: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00267628: lw          $ra, 0xE0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE0);
    // 0x0026762C: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x00267630: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x00267634: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x00267638: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x0026763C: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x00267640: jr          $ra
    // 0x00267644: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x00267644: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_0029C5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0029C58C:
    // 0x0029C5D8: addu        $s2, $ra, $zero
    ctx->r18 = ADD32(ctx->r31, 0);
L_0029C5A8:
    // 0x0029C5DC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x0029C5E0: addiu       $t2, $t2, 0x29A0
    ctx->r10 = ADD32(ctx->r10, 0X29A0);
    // 0x0029C5E4: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x0029C5E8: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x0029C5EC: nop

    // 0x0029C5F0: beq         $t1, $zero, L_0029C69C
    if (ctx->r9 == 0) {
        // 0x0029C5F4: nop
    
            goto L_0029C69C;
    }
    // 0x0029C5F4: nop

    // 0x0029C5F8: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x0029C5FC: lw          $t4, 0x10($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X10);
    // 0x0029C600: nop

    // 0x0029C604: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x0029C608: beq         $at, $zero, L_0029C69C
    if (ctx->r1 == 0) {
        // 0x0029C60C: nop
    
            goto L_0029C69C;
    }
    // 0x0029C60C: nop

    // 0x0029C610: lw          $t5, 0xC($t1)
    ctx->r13 = MEM_W(ctx->r9, 0XC);
    // 0x0029C614: nop

    // 0x0029C618: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x0029C61C: div         $zero, $t5, $t4
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r12)));
    // 0x0029C620: bne         $t4, $zero, L_0029C62C
    if (ctx->r12 != 0) {
        // 0x0029C624: nop
    
            goto L_0029C62C;
    }
    // 0x0029C624: nop

    // 0x0029C628: break       7
    do_break(2737704);
L_0029C62C:
    // 0x0029C62C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0029C630: bne         $t4, $at, L_0029C644
    if (ctx->r12 != ctx->r1) {
        // 0x0029C634: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0029C644;
    }
    // 0x0029C634: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0029C638: bne         $t5, $at, L_0029C644
    if (ctx->r13 != ctx->r1) {
        // 0x0029C63C: nop
    
            goto L_0029C644;
    }
    // 0x0029C63C: nop

    // 0x0029C640: break       6
    do_break(2737728);
L_0029C644:
    // 0x0029C644: mfhi        $t5
    ctx->r13 = hi;
    // 0x0029C648: lw          $t4, 0x14($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X14);
    // 0x0029C64C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x0029C650: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x0029C654: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x0029C658: nop

    // 0x0029C65C: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x0029C660: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x0029C664: sw          $t2, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r10;
    // 0x0029C668: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x0029C66C: nop

    // 0x0029C670: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x0029C674: nop

    // 0x0029C678: beq         $t3, $zero, L_0029C69C
    if (ctx->r11 == 0) {
        // 0x0029C67C: nop
    
            goto L_0029C69C;
    }
    // 0x0029C67C: nop

    // 0x0029C680: jal         0x0029C8C8
    // 0x0029C684: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    func_0029C8C8(rdram, ctx);
        goto after_0;
    // 0x0029C684: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    after_0:
    // 0x0029C688: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x0029C68C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029C690: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029C694: jal         0x0029C878
    // 0x0029C698: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    func_0029C878(rdram, ctx);
        goto after_1;
    // 0x0029C698: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    after_1:
L_0029C69C:
    // 0x0029C69C: jr          $s2
    // 0x0029C6A0: nop

    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
    return;
    // 0x0029C6A0: nop

    // 0x0029C6A4: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x0029C6A8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x0029C6AC: srl         $t1, $t1, 28
    ctx->r9 = S32(U32(ctx->r9) >> 28);
    // 0x0029C6B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0029C6B4: bne         $t1, $t2, L_0029C5A8
    if (ctx->r9 != ctx->r10) {
        // 0x0029C6B8: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_0029C5A8;
    }
    // 0x0029C6B8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0029C6BC: sw          $t1, 0x18($k0)
    MEM_W(0X18, ctx->r26) = ctx->r9;
    // 0x0029C6C0: lw          $k1, 0x118($k0)
    ctx->r27 = MEM_W(ctx->r26, 0X118);
    // 0x0029C6C4: nop

    // 0x0029C6C8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0029C6CC: or          $k1, $k1, $at
    ctx->r27 = ctx->r27 | ctx->r1;
    // 0x0029C6D0: sw          $k1, 0x118($k0)
    MEM_W(0X118, ctx->r26) = ctx->r27;
    // 0x0029C6D4: bgez        $zero, L_0029C58C
    if (SIGNED(0) >= 0) {
        // 0x0029C6D8: nop
    
            goto L_0029C58C;
    }
    // 0x0029C6D8: nop

;}
RECOMP_FUNC void func_002478C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002478C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002478CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002478D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002478D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002478D8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002478DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002478E0: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x002478E4: addiu       $s2, $s2, -0x5528
    ctx->r18 = ADD32(ctx->r18, -0X5528);
    // 0x002478E8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002478EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002478F0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x002478F4: lbu         $v0, 0x19($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X19);
    // 0x002478F8: beq         $v0, $zero, L_00247BF0
    if (ctx->r2 == 0) {
        // 0x002478FC: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_00247BF0;
    }
    // 0x002478FC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00247900: bne         $s1, $s0, L_00247930
    if (ctx->r17 != ctx->r16) {
        // 0x00247904: nop
    
            goto L_00247930;
    }
    // 0x00247904: nop

    // 0x00247908: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x0024790C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00247910: addiu       $a1, $a1, 0x542C
    ctx->r5 = ADD32(ctx->r5, 0X542C);
    // 0x00247914: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247918: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0024791C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247920: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247924: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    // 0x00247928: j           L_00247B90
    // 0x0024792C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
        goto L_00247B90;
    // 0x0024792C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
L_00247930:
    // 0x00247930: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x00247934: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00247938: beq         $v0, $zero, L_00247A48
    if (ctx->r2 == 0) {
        // 0x0024793C: nop
    
            goto L_00247A48;
    }
    // 0x0024793C: nop

    // 0x00247940: lw          $v0, 0x12B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12B4);
    // 0x00247944: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00247948: addiu       $a1, $a1, 0x53FC
    ctx->r5 = ADD32(ctx->r5, 0X53FC);
    // 0x0024794C: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247950: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247954: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247958: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0024795C: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    // 0x00247960: jal         0x00288800
    // 0x00247964: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_00288800(rdram, ctx);
        goto after_0;
    // 0x00247964: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_0:
    // 0x00247968: lw          $v0, 0x12B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12B4);
    // 0x0024796C: lw          $a1, 0x518($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X518);
    // 0x00247970: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247974: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247978: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0024797C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247980: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00247984: addiu       $a0, $a0, 0x12C2
    ctx->r4 = ADD32(ctx->r4, 0X12C2);
    // 0x00247988: jal         0x00288800
    // 0x0024798C: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
    func_00288800(rdram, ctx);
        goto after_1;
    // 0x0024798C: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
    after_1:
    // 0x00247990: addiu       $s2, $s2, -0x1228
    ctx->r18 = ADD32(ctx->r18, -0X1228);
    // 0x00247994: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00247998: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x0024799C: lw          $v0, 0x12B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12B4);
    // 0x002479A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002479A4: lwc1        $f20, 0x6A7C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6A7C);
    // 0x002479A8: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x002479AC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x002479B0: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x002479B4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x002479B8: addiu       $a2, $a2, 0x12B8
    ctx->r6 = ADD32(ctx->r6, 0X12B8);
    // 0x002479BC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x002479C0: jal         0x00281610
    // 0x002479C4: addu        $a2, $s1, $a2
    ctx->r6 = ADD32(ctx->r17, ctx->r6);
    func_00281610(rdram, ctx);
        goto after_2;
    // 0x002479C4: addu        $a2, $s1, $a2
    ctx->r6 = ADD32(ctx->r17, ctx->r6);
    after_2:
    // 0x002479C8: lw          $a0, 0x12B4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X12B4);
    // 0x002479CC: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x002479D0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002479D4: bgez        $v1, L_002479E0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002479D8: sw          $v1, 0x12B4($s1)
        MEM_W(0X12B4, ctx->r17) = ctx->r3;
            goto L_002479E0;
    }
    // 0x002479D8: sw          $v1, 0x12B4($s1)
    MEM_W(0X12B4, ctx->r17) = ctx->r3;
    // 0x002479DC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_002479E0:
    // 0x002479E0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x002479E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002479E8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x002479EC: sw          $v0, 0x12B4($s1)
    MEM_W(0X12B4, ctx->r17) = ctx->r2;
    // 0x002479F0: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x002479F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002479F8: addiu       $a1, $a1, 0x5408
    ctx->r5 = ADD32(ctx->r5, 0X5408);
    // 0x002479FC: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247A00: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A04: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247A08: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A0C: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    // 0x00247A10: jal         0x00288800
    // 0x00247A14: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_00288800(rdram, ctx);
        goto after_3;
    // 0x00247A14: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_3:
    // 0x00247A18: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x00247A1C: lw          $a1, 0x518($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X518);
    // 0x00247A20: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247A24: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A28: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247A2C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A30: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x00247A34: addiu       $a0, $a0, 0x12C3
    ctx->r4 = ADD32(ctx->r4, 0X12C3);
    // 0x00247A38: jal         0x00288800
    // 0x00247A3C: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
    func_00288800(rdram, ctx);
        goto after_4;
    // 0x00247A3C: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
    after_4:
    // 0x00247A40: j           L_00247BA0
    // 0x00247A44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_00247BA0;
    // 0x00247A44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00247A48:
    // 0x00247A48: lw          $v0, 0x12B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12B4);
    // 0x00247A4C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00247A50: addiu       $a1, $a1, 0x5414
    ctx->r5 = ADD32(ctx->r5, 0X5414);
    // 0x00247A54: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247A58: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A5C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247A60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A64: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    // 0x00247A68: jal         0x00288800
    // 0x00247A6C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_00288800(rdram, ctx);
        goto after_5;
    // 0x00247A6C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_5:
    // 0x00247A70: lw          $v0, 0x12B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12B4);
    // 0x00247A74: lw          $a1, 0x518($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X518);
    // 0x00247A78: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247A7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A80: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247A84: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247A88: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00247A8C: addiu       $a0, $a0, 0x12C2
    ctx->r4 = ADD32(ctx->r4, 0X12C2);
    // 0x00247A90: jal         0x00288800
    // 0x00247A94: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
    func_00288800(rdram, ctx);
        goto after_6;
    // 0x00247A94: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
    after_6:
    // 0x00247A98: addiu       $s2, $s2, -0x1228
    ctx->r18 = ADD32(ctx->r18, -0X1228);
    // 0x00247A9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00247AA0: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x00247AA4: lw          $v0, 0x12B4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12B4);
    // 0x00247AA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247AAC: lwc1        $f20, 0x6A80($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6A80);
    // 0x00247AB0: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x00247AB4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00247AB8: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x00247ABC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00247AC0: addiu       $a2, $a2, 0x12B8
    ctx->r6 = ADD32(ctx->r6, 0X12B8);
    // 0x00247AC4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00247AC8: jal         0x00281610
    // 0x00247ACC: addu        $a2, $s1, $a2
    ctx->r6 = ADD32(ctx->r17, ctx->r6);
    func_00281610(rdram, ctx);
        goto after_7;
    // 0x00247ACC: addu        $a2, $s1, $a2
    ctx->r6 = ADD32(ctx->r17, ctx->r6);
    after_7:
    // 0x00247AD0: lw          $a0, 0x12B4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X12B4);
    // 0x00247AD4: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00247AD8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00247ADC: bgez        $v1, L_00247AE8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00247AE0: sw          $v1, 0x12B4($s1)
        MEM_W(0X12B4, ctx->r17) = ctx->r3;
            goto L_00247AE8;
    }
    // 0x00247AE0: sw          $v1, 0x12B4($s1)
    MEM_W(0X12B4, ctx->r17) = ctx->r3;
    // 0x00247AE4: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_00247AE8:
    // 0x00247AE8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x00247AEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00247AF0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x00247AF4: sw          $v0, 0x12B4($s1)
    MEM_W(0X12B4, ctx->r17) = ctx->r2;
    // 0x00247AF8: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x00247AFC: beq         $a2, $zero, L_00247B44
    if (ctx->r6 == 0) {
        // 0x00247B00: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00247B44;
    }
    // 0x00247B00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00247B04: lbu         $v0, 0x65($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X65);
    // 0x00247B08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00247B0C: bne         $v0, $v1, L_00247B44
    if (ctx->r2 != ctx->r3) {
        // 0x00247B10: nop
    
            goto L_00247B44;
    }
    // 0x00247B10: nop

    // 0x00247B14: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x00247B18: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00247B1C: addiu       $a1, $a1, 0x53D0
    ctx->r5 = ADD32(ctx->r5, 0X53D0);
    // 0x00247B20: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00247B24: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247B28: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247B2C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247B30: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    // 0x00247B34: jal         0x00288800
    // 0x00247B38: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_00288800(rdram, ctx);
        goto after_8;
    // 0x00247B38: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_8:
    // 0x00247B3C: j           L_00247BA0
    // 0x00247B40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_00247BA0;
    // 0x00247B40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00247B44:
    // 0x00247B44: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x00247B48: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00247B4C: addiu       $a1, $a1, 0x5420
    ctx->r5 = ADD32(ctx->r5, 0X5420);
    // 0x00247B50: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247B54: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247B58: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247B5C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247B60: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, 0X12B8);
    // 0x00247B64: jal         0x00288800
    // 0x00247B68: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_00288800(rdram, ctx);
        goto after_9;
    // 0x00247B68: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_9:
    // 0x00247B6C: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x00247B70: lw          $a1, 0x518($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X518);
    // 0x00247B74: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00247B78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247B7C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00247B80: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00247B84: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x00247B88: addiu       $a0, $a0, 0x12C3
    ctx->r4 = ADD32(ctx->r4, 0X12C3);
    // 0x00247B8C: addiu       $a1, $a1, 0x33
    ctx->r5 = ADD32(ctx->r5, 0X33);
L_00247B90:
    // 0x00247B90: jal         0x00288800
    // 0x00247B94: nop

    func_00288800(rdram, ctx);
        goto after_10;
    // 0x00247B94: nop

    after_10:
    // 0x00247B98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00247B9C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
L_00247BA0:
    // 0x00247BA0: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x00247BA4: lw          $v0, 0x12B4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B4);
    // 0x00247BA8: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x00247BAC: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x00247BB0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00247BB4: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x00247BB8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00247BBC: addiu       $a2, $a2, 0x12B8
    ctx->r6 = ADD32(ctx->r6, 0X12B8);
    // 0x00247BC0: jal         0x00281610
    // 0x00247BC4: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    func_00281610(rdram, ctx);
        goto after_11;
    // 0x00247BC4: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    after_11:
    // 0x00247BC8: lw          $a0, 0x12B4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X12B4);
    // 0x00247BCC: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x00247BD0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00247BD4: bgez        $v1, L_00247BE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00247BD8: sw          $v1, 0x12B4($s0)
        MEM_W(0X12B4, ctx->r16) = ctx->r3;
            goto L_00247BE0;
    }
    // 0x00247BD8: sw          $v1, 0x12B4($s0)
    MEM_W(0X12B4, ctx->r16) = ctx->r3;
    // 0x00247BDC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_00247BE0:
    // 0x00247BE0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x00247BE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00247BE8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x00247BEC: sw          $v0, 0x12B4($s0)
    MEM_W(0X12B4, ctx->r16) = ctx->r2;
L_00247BF0:
    // 0x00247BF0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00247BF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00247BF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00247BFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00247C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00247C04: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00247C08: jr          $ra
    // 0x00247C0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00247C0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00217450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217450: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00217454: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00217458: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021745C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00217460: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00217464: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00217468: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0021746C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00217470: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00217474: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00217478: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0021747C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00217480: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x00217484: jal         0x00217C58
    // 0x00217488: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00217C58(rdram, ctx);
        goto after_0;
    // 0x00217488: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0021748C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00217490: lw          $v1, 0x6798($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6798);
    // 0x00217494: beq         $v1, $zero, L_002174CC
    if (ctx->r3 == 0) {
        // 0x00217498: sw          $v0, 0x2C($s1)
        MEM_W(0X2C, ctx->r17) = ctx->r2;
            goto L_002174CC;
    }
    // 0x00217498: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x0021749C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002174A0: jal         0x00217C58
    // 0x002174A4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_00217C58(rdram, ctx);
        goto after_1;
    // 0x002174A4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x002174A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002174AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x002174B0: jal         0x00217C58
    // 0x002174B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00217C58(rdram, ctx);
        goto after_2;
    // 0x002174B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x002174B8: lwc1        $f21, 0x14($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002174BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002174C0: lwc1        $f20, 0x18($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002174C4: j           L_00217580
    // 0x002174C8: sub.s       $f0, $f20, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f21.fl;
        goto L_00217580;
    // 0x002174C8: sub.s       $f0, $f20, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f21.fl;
L_002174CC:
    // 0x002174CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002174D0: jal         0x00217C58
    // 0x002174D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217C58(rdram, ctx);
        goto after_3;
    // 0x002174D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x002174D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002174DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x002174E0: jal         0x00217C58
    // 0x002174E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00217C58(rdram, ctx);
        goto after_4;
    // 0x002174E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x002174E8: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x002174EC: mtc1        $v1, $f12
    ctx->f12.u32l = ctx->r3;
    // 0x002174F0: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x002174F4: bgez        $v1, L_00217508
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002174F8: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_00217508;
    }
    // 0x002174F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002174FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217500: ldc1        $f0, 0x59A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59A8);
    // 0x00217504: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00217508:
    // 0x00217508: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0021750C: jal         0x00217AD4
    // 0x00217510: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217AD4(rdram, ctx);
        goto after_5;
    // 0x00217510: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x00217514: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00217518: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0021751C: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00217520: bgez        $v0, L_00217534
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00217524: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_00217534;
    }
    // 0x00217524: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00217528: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021752C: ldc1        $f0, 0x59B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59B0);
    // 0x00217530: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00217534:
    // 0x00217534: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00217538: jal         0x00217AD4
    // 0x0021753C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217AD4(rdram, ctx);
        goto after_6;
    // 0x0021753C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x00217540: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00217544: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217548: lwc1        $f14, 0x679C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X679C);
    // 0x0021754C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00217550: lw          $a2, 0x67A0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X67A0);
    // 0x00217554: jal         0x00217AF0
    // 0x00217558: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_00217AF0(rdram, ctx);
        goto after_7;
    // 0x00217558: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_7:
    // 0x0021755C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00217560: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00217564: lwc1        $f14, 0x679C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X679C);
    // 0x00217568: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0021756C: lw          $a2, 0x67A0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X67A0);
    // 0x00217570: jal         0x00217AF0
    // 0x00217574: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_00217AF0(rdram, ctx);
        goto after_8;
    // 0x00217574: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_8:
    // 0x00217578: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0021757C: sub.s       $f0, $f20, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f21.fl;
L_00217580:
    // 0x00217580: swc1        $f21, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
    // 0x00217584: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x00217588: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021758C: jal         0x00217C58
    // 0x00217590: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217C58(rdram, ctx);
        goto after_9;
    // 0x00217590: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_9:
    // 0x00217594: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00217598: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021759C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002175A0: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x002175A4: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x002175A8: jal         0x00217214
    // 0x002175AC: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    func_00217214(rdram, ctx);
        goto after_10;
    // 0x002175AC: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    after_10:
    // 0x002175B0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002175B4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x002175B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002175BC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002175C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002175C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002175C8: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x002175CC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x002175D0: jr          $ra
    // 0x002175D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002175D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0041C954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C954: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0041C958: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041C95C: beql        $v1, $v0, L_0041C970
    if (ctx->r3 == ctx->r2) {
        // 0x0041C960: addiu       $sp, $sp, -0x28
        ctx->r29 = ADD32(ctx->r29, -0X28);
            goto L_0041C970;
    }
    goto skip_0;
    // 0x0041C960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    skip_0:
    // 0x0041C964: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0041C968: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0041C96C: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
L_0041C970:
    // 0x0041C970: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0041C974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C978: lw          $s0, 0x1C($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C97C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041C980: jal         0x0025340C
    // 0x0041C984: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041C984: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041C988: jal         0x00421250
    // 0x0041C98C: nop

    func_00421250(rdram, ctx);
        goto after_1;
    // 0x0041C98C: nop

    after_1:
    // 0x0041C990: addiu       $a0, $s1, 0x5BC
    ctx->r4 = ADD32(ctx->r17, 0X5BC);
    // 0x0041C994: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041C998: addiu       $a1, $a1, -0x4934
    ctx->r5 = ADD32(ctx->r5, -0X4934);
    // 0x0041C99C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041C9A0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041C9A4: jal         0x00416644
    // 0x0041C9A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x0041C9A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041C9AC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0041C9B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C9B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C9B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C9BC: jr          $ra
    // 0x0041C9C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041C9C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042FF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FF58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042FF5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042FF60: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042FF64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042FF68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042FF6C: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x0042FF70: beq         $s0, $zero, L_0042FF9C
    if (ctx->r16 == 0) {
        // 0x0042FF74: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0042FF9C;
    }
    // 0x0042FF74: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0042FF78: jal         0x0042F9B0
    // 0x0042FF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042F9B0(rdram, ctx);
        goto after_0;
    // 0x0042FF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0042FF80: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x0042FF84: jal         0x00200738
    // 0x0042FF88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0042FF88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042FF8C: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    // 0x0042FF90: jal         0x00200574
    // 0x0042FF94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x0042FF94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042FF98: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0042FF9C:
    // 0x0042FF9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042FFA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FFA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FFA8: jr          $ra
    // 0x0042FFAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042FFAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042BA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042BA40: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0042BA44: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x0042BA48: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x0042BA4C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0042BA50: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x0042BA54: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x0042BA58: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x0042BA5C: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x0042BA60: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x0042BA64: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x0042BA68: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x0042BA6C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x0042BA70: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x0042BA74: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x0042BA78: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x0042BA7C: jal         0x00200B00
    // 0x0042BA80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0042BA80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0042BA84: beq         $v0, $zero, L_0042BF14
    if (ctx->r2 == 0) {
        // 0x0042BA88: nop
    
            goto L_0042BF14;
    }
    // 0x0042BA88: nop

    // 0x0042BA8C: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BA90: jal         0x002242F8
    // 0x0042BA94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002242F8(rdram, ctx);
        goto after_1;
    // 0x0042BA94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0042BA98: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x0042BA9C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x0042BAA0: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x0042BAA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042BAA8: lw          $fp, 0x4($s0)
    ctx->r30 = MEM_W(ctx->r16, 0X4);
    // 0x0042BAAC: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x0042BAB0: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x0042BAB4: sll         $a2, $fp, 2
    ctx->r6 = S32(ctx->r30 << 2);
    // 0x0042BAB8: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x0042BABC: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x0042BAC0: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x0042BAC4: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x0042BAC8: jal         0x00205D7C
    // 0x0042BACC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    func_00205D7C(rdram, ctx);
        goto after_2;
    // 0x0042BACC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    after_2:
    // 0x0042BAD0: beq         $v0, $zero, L_0042BEFC
    if (ctx->r2 == 0) {
        // 0x0042BAD4: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_0042BEFC;
    }
    // 0x0042BAD4: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x0042BAD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042BADC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042BAE0: jal         0x0020192C
    // 0x0042BAE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0020192C(rdram, ctx);
        goto after_3;
    // 0x0042BAE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0042BAE8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0042BAEC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x0042BAF0: addiu       $v1, $zero, 0x288
    ctx->r3 = ADD32(0, 0X288);
    // 0x0042BAF4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0042BAF8: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x0042BAFC: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BB00: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
    // 0x0042BB04: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB08: addu        $at, $t2, $at
    ctx->r1 = ADD32(ctx->r10, ctx->r1);
    // 0x0042BB0C: lw          $v1, -0x7048($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7048);
    // 0x0042BB10: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0042BB14: bne         $v1, $zero, L_0042BB64
    if (ctx->r3 != 0) {
        // 0x0042BB18: sw          $v0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r2;
            goto L_0042BB64;
    }
    // 0x0042BB18: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x0042BB1C: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x0042BB20: ori         $a3, $a3, 0x8FBC
    ctx->r7 = ctx->r7 | 0X8FBC;
    // 0x0042BB24: addu        $a0, $t2, $zero
    ctx->r4 = ADD32(ctx->r10, 0);
    // 0x0042BB28: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x0042BB2C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB30: addu        $at, $t2, $at
    ctx->r1 = ADD32(ctx->r10, ctx->r1);
    // 0x0042BB34: lw          $a2, -0x7058($at)
    ctx->r6 = MEM_W(ctx->r1, -0X7058);
    // 0x0042BB38: jal         0x0042C560
    // 0x0042BB3C: addu        $a3, $t2, $a3
    ctx->r7 = ADD32(ctx->r10, ctx->r7);
    func_0042C560(rdram, ctx);
        goto after_4;
    // 0x0042BB3C: addu        $a3, $t2, $a3
    ctx->r7 = ADD32(ctx->r10, ctx->r7);
    after_4:
    // 0x0042BB40: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BB44: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB48: addu        $at, $t3, $at
    ctx->r1 = ADD32(ctx->r11, ctx->r1);
    // 0x0042BB4C: sw          $v0, -0x7030($at)
    MEM_W(-0X7030, ctx->r1) = ctx->r2;
    // 0x0042BB50: beq         $v0, $zero, L_0042BB64
    if (ctx->r2 == 0) {
        // 0x0042BB54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042BB64;
    }
    // 0x0042BB54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042BB58: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB5C: addu        $at, $t3, $at
    ctx->r1 = ADD32(ctx->r11, ctx->r1);
    // 0x0042BB60: sw          $v0, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = ctx->r2;
L_0042BB64:
    // 0x0042BB64: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BB68: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB6C: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x0042BB70: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x0042BB74: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0042BB78: beq         $v0, $zero, L_0042BBB0
    if (ctx->r2 == 0) {
        // 0x0042BB7C: sw          $zero, 0x74($sp)
        MEM_W(0X74, ctx->r29) = 0;
            goto L_0042BBB0;
    }
    // 0x0042BB7C: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x0042BB80: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x0042BB84: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x0042BB88: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB8C: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x0042BB90: lw          $a1, -0x7058($at)
    ctx->r5 = MEM_W(ctx->r1, -0X7058);
    // 0x0042BB94: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042BB98: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x0042BB9C: lw          $a2, -0x7030($at)
    ctx->r6 = MEM_W(ctx->r1, -0X7030);
    // 0x0042BBA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042BBA4: jal         0x0042C194
    // 0x0042BBA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0042C194(rdram, ctx);
        goto after_5;
    // 0x0042BBA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x0042BBAC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
L_0042BBB0:
    // 0x0042BBB0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0042BBB4: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BBB8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042BBBC: sw          $t2, 0xE0($t1)
    MEM_W(0XE0, ctx->r9) = ctx->r10;
    // 0x0042BBC0: blez        $fp, L_0042BBFC
    if (SIGNED(ctx->r30) <= 0) {
        // 0x0042BBC4: sw          $fp, 0xE8($t1)
        MEM_W(0XE8, ctx->r9) = ctx->r30;
            goto L_0042BBFC;
    }
    // 0x0042BBC4: sw          $fp, 0xE8($t1)
    MEM_W(0XE8, ctx->r9) = ctx->r30;
    // 0x0042BBC8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x0042BBCC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_0042BBD0:
    // 0x0042BBD0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0042BBD4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042BBD8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BBDC: lhu         $a1, 0x22($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X22);
    // 0x0042BBE0: jal         0x00225E88
    // 0x0042BBE4: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    func_00225E88(rdram, ctx);
        goto after_6;
    // 0x0042BBE4: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    after_6:
    // 0x0042BBE8: addiu       $v1, $s0, 0x288
    ctx->r3 = ADD32(ctx->r16, 0X288);
    // 0x0042BBEC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0042BBF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BBF4: bne         $v0, $zero, L_0042BBD0
    if (ctx->r2 != 0) {
        // 0x0042BBF8: addiu       $a1, $s1, 0x28
        ctx->r5 = ADD32(ctx->r17, 0X28);
            goto L_0042BBD0;
    }
    // 0x0042BBF8: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
L_0042BBFC:
    // 0x0042BBFC: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BC00: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042BC04: blez        $fp, L_0042BDE8
    if (SIGNED(ctx->r30) <= 0) {
        // 0x0042BC08: sw          $zero, 0xE4($t3)
        MEM_W(0XE4, ctx->r11) = 0;
            goto L_0042BDE8;
    }
    // 0x0042BC08: sw          $zero, 0xE4($t3)
    MEM_W(0XE4, ctx->r11) = 0;
    // 0x0042BC0C: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x0042BC10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BC14: lwc1        $f20, 0x5F58($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F58);
    // 0x0042BC18: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0042BC1C: addu        $s6, $s2, $zero
    ctx->r22 = ADD32(ctx->r18, 0);
    // 0x0042BC20: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x0042BC24: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
L_0042BC28:
    // 0x0042BC28: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0042BC2C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x0042BC30: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x0042BC34: jal         0x0021E6AC
    // 0x0042BC38: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_0021E6AC(rdram, ctx);
        goto after_7;
    // 0x0042BC38: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0042BC3C: lhu         $a1, 0x22($s6)
    ctx->r5 = MEM_HU(ctx->r22, 0X22);
    // 0x0042BC40: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BC44: jal         0x00225E88
    // 0x0042BC48: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    func_00225E88(rdram, ctx);
        goto after_8;
    // 0x0042BC48: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    after_8:
    // 0x0042BC4C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042BC50: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0042BC54: beq         $v1, $v0, L_0042BC64
    if (ctx->r3 == ctx->r2) {
        // 0x0042BC58: nop
    
            goto L_0042BC64;
    }
    // 0x0042BC58: nop

    // 0x0042BC5C: bnel        $s3, $zero, L_0042BDD0
    if (ctx->r19 != 0) {
        // 0x0042BC60: addiu       $s6, $s6, 0x28
        ctx->r22 = ADD32(ctx->r22, 0X28);
            goto L_0042BDD0;
    }
    goto skip_0;
    // 0x0042BC60: addiu       $s6, $s6, 0x28
    ctx->r22 = ADD32(ctx->r22, 0X28);
    skip_0:
L_0042BC64:
    // 0x0042BC64: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BC68: lw          $v0, 0xE4($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XE4);
    // 0x0042BC6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BC70: lwc1        $f1, 0x5F5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5F5C);
    // 0x0042BC74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042BC78: sw          $v0, 0xE4($t2)
    MEM_W(0XE4, ctx->r10) = ctx->r2;
    // 0x0042BC7C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x0042BC80: addiu       $t2, $t2, -0x66D8
    ctx->r10 = ADD32(ctx->r10, -0X66D8);
    // 0x0042BC84: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x0042BC88: lw          $t0, 0x8($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X8);
    // 0x0042BC8C: lw          $t1, 0xC($s6)
    ctx->r9 = MEM_W(ctx->r22, 0XC);
    // 0x0042BC90: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x0042BC94: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x0042BC98: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
    // 0x0042BC9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042BCA0: lwc1        $f0, -0x66D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66D4);
    // 0x0042BCA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0042BCA8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BCAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042BCB0: swc1        $f0, -0x66D4($at)
    MEM_W(-0X66D4, ctx->r1) = ctx->f0.u32l;
    // 0x0042BCB4: jal         0x00220A1C
    // 0x0042BCB8: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    func_00220A1C(rdram, ctx);
        goto after_9;
    // 0x0042BCB8: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    after_9:
    // 0x0042BCBC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042BCC0: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x0042BCC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042BCC8: sw          $v0, -0x66B8($at)
    MEM_W(-0X66B8, ctx->r1) = ctx->r2;
    // 0x0042BCCC: blez        $v1, L_0042BDCC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0042BCD0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042BDCC;
    }
    // 0x0042BCD0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042BCD4: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x0042BCD8: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x0042BCDC: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x0042BCE0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0042BCE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042BCE8: addu        $s0, $v0, $t3
    ctx->r16 = ADD32(ctx->r2, ctx->r11);
L_0042BCEC:
    // 0x0042BCEC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042BCF0: lw          $v0, -0x678C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X678C);
    // 0x0042BCF4: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0042BCF8: beq         $t0, $zero, L_0042BDA0
    if (ctx->r8 == 0) {
        // 0x0042BCFC: addu        $s7, $v0, $s4
        ctx->r23 = ADD32(ctx->r2, ctx->r20);
            goto L_0042BDA0;
    }
    // 0x0042BCFC: addu        $s7, $v0, $s4
    ctx->r23 = ADD32(ctx->r2, ctx->r20);
    // 0x0042BD00: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x0042BD04: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x0042BD08: jal         0x00210EF0
    // 0x0042BD0C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_00210EF0(rdram, ctx);
        goto after_10;
    // 0x0042BD0C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_10:
    // 0x0042BD10: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0042BD14: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0042BD18: nop

    // 0x0042BD1C: bc1t        L_0042BD68
    if (c1cs) {
        // 0x0042BD20: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_0042BD68;
    }
    // 0x0042BD20: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x0042BD24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BD28: lwc1        $f0, 0x5F60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F60);
    // 0x0042BD2C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0042BD30: nop

    // 0x0042BD34: bc1t        L_0042BD68
    if (c1cs) {
        // 0x0042BD38: addiu       $v0, $zero, -0x7FFF
        ctx->r2 = ADD32(0, -0X7FFF);
            goto L_0042BD68;
    }
    // 0x0042BD38: addiu       $v0, $zero, -0x7FFF
    ctx->r2 = ADD32(0, -0X7FFF);
    // 0x0042BD3C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0042BD40: nop

    // 0x0042BD44: bc1t        L_0042BD68
    if (c1cs) {
        // 0x0042BD48: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_0042BD68;
    }
    // 0x0042BD48: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x0042BD4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BD50: lwc1        $f0, 0x5F64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F64);
    // 0x0042BD54: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0042BD58: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0042BD5C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0042BD60: j           L_0042BD6C
    // 0x0042BD64: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
        goto L_0042BD6C;
    // 0x0042BD64: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_0042BD68:
    // 0x0042BD68: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_0042BD6C:
    // 0x0042BD6C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0042BD70: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0042BD74: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0042BD78: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0042BD7C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0042BD80: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x0042BD84: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0042BD88: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0042BD8C: slt         $v0, $s5, $t0
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042BD90: bne         $v0, $zero, L_0042BDA0
    if (ctx->r2 != 0) {
        // 0x0042BD94: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0042BDA0;
    }
    // 0x0042BD94: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x0042BD98: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0042BD9C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_0042BDA0:
    // 0x0042BDA0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0042BDA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0042BDA8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x0042BDAC: jal         0x0042DA60
    // 0x0042BDB0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_0042DA60(rdram, ctx);
        goto after_11;
    // 0x0042BDB0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_11:
    // 0x0042BDB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042BDB8: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x0042BDBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042BDC0: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042BDC4: bne         $v0, $zero, L_0042BCEC
    if (ctx->r2 != 0) {
        // 0x0042BDC8: addiu       $s4, $s4, 0x1328
        ctx->r20 = ADD32(ctx->r20, 0X1328);
            goto L_0042BCEC;
    }
    // 0x0042BDC8: addiu       $s4, $s4, 0x1328
    ctx->r20 = ADD32(ctx->r20, 0X1328);
L_0042BDCC:
    // 0x0042BDCC: addiu       $s6, $s6, 0x28
    ctx->r22 = ADD32(ctx->r22, 0X28);
L_0042BDD0:
    // 0x0042BDD0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0042BDD4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x0042BDD8: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BDDC: addiu       $t1, $t1, 0x288
    ctx->r9 = ADD32(ctx->r9, 0X288);
    // 0x0042BDE0: bne         $v0, $zero, L_0042BC28
    if (ctx->r2 != 0) {
        // 0x0042BDE4: sw          $t1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r9;
            goto L_0042BC28;
    }
    // 0x0042BDE4: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
L_0042BDE8:
    // 0x0042BDE8: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BDEC: lw          $s3, 0xE4($t2)
    ctx->r19 = MEM_W(ctx->r10, 0XE4);
    // 0x0042BDF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BDF4: beq         $v0, $zero, L_0042BEFC
    if (ctx->r2 == 0) {
        // 0x0042BDF8: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_0042BEFC;
    }
    // 0x0042BDF8: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0042BDFC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042BE00: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042BE04: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042BE08: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x0042BE0C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042BE10: addu        $s1, $v0, $t3
    ctx->r17 = ADD32(ctx->r2, ctx->r11);
L_0042BE14:
    // 0x0042BE14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042BE18: lwc1        $f20, 0x5F54($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F54);
    // 0x0042BE1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042BE20: jal         0x00267DBC
    // 0x0042BE24: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    func_00267DBC(rdram, ctx);
        goto after_12;
    // 0x0042BE24: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    after_12:
    // 0x0042BE28: beql        $v0, $zero, L_0042BEF0
    if (ctx->r2 == 0) {
        // 0x0042BE2C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042BEF0;
    }
    goto skip_1;
    // 0x0042BE2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x0042BE30: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BE34: lw          $s2, 0xE4($t0)
    ctx->r18 = MEM_W(ctx->r8, 0XE4);
    // 0x0042BE38: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BE3C: beq         $v0, $zero, L_0042BEEC
    if (ctx->r2 == 0) {
        // 0x0042BE40: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_0042BEEC;
    }
    // 0x0042BE40: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x0042BE44: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0042BE48: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042BE4C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0042BE50: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0042BE54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042BE58: addu        $s0, $v0, $t1
    ctx->r16 = ADD32(ctx->r2, ctx->r9);
L_0042BE5C:
    // 0x0042BE5C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0042BE60: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0042BE64: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0042BE68: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0042BE6C: bnel        $a0, $v0, L_0042BEE0
    if (ctx->r4 != ctx->r2) {
        // 0x0042BE70: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_2;
    // 0x0042BE70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x0042BE74: jal         0x00267D94
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267D94(rdram, ctx);
        goto after_13;
    // 0x0042BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0042BE7C: beql        $v0, $zero, L_0042BEE0
    if (ctx->r2 == 0) {
        // 0x0042BE80: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_3;
    // 0x0042BE80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x0042BE84: beql        $s1, $s0, L_0042BEE0
    if (ctx->r17 == ctx->r16) {
        // 0x0042BE88: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_4;
    // 0x0042BE88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x0042BE8C: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x0042BE90: beql        $v0, $zero, L_0042BEC4
    if (ctx->r2 == 0) {
        // 0x0042BE94: sw          $s0, 0x1A8($s1)
        MEM_W(0X1A8, ctx->r17) = ctx->r16;
            goto L_0042BEC4;
    }
    goto skip_5;
    // 0x0042BE94: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
    skip_5:
    // 0x0042BE98: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BE9C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BEA0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BEA4: jal         0x002465F0
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_14;
    // 0x0042BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0042BEAC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0042BEB0: nop

    // 0x0042BEB4: bc1fl       L_0042BEE0
    if (!c1cs) {
        // 0x0042BEB8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042BEE0;
    }
    goto skip_6;
    // 0x0042BEB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_6:
    // 0x0042BEBC: j           L_0042BED8
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
        goto L_0042BED8;
    // 0x0042BEC0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
L_0042BEC4:
    // 0x0042BEC4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0042BEC8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0042BECC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0042BED0: jal         0x002465F0
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_15;
    // 0x0042BED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
L_0042BED8:
    // 0x0042BED8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0042BEDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0042BEE0:
    // 0x0042BEE0: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEE4: bne         $v0, $zero, L_0042BE5C
    if (ctx->r2 != 0) {
        // 0x0042BEE8: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042BE5C;
    }
    // 0x0042BEE8: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042BEEC:
    // 0x0042BEEC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0042BEF0:
    // 0x0042BEF0: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0042BEF4: bne         $v0, $zero, L_0042BE14
    if (ctx->r2 != 0) {
        // 0x0042BEF8: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_0042BE14;
    }
    // 0x0042BEF8: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
L_0042BEFC:
    // 0x0042BEFC: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x0042BF00: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x0042BF04: jal         0x002057B0
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_16;
    // 0x0042BF08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x0042BF0C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0042BF10: sw          $zero, 0xF00($t2)
    MEM_W(0XF00, ctx->r10) = 0;
L_0042BF14:
    // 0x0042BF14: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0042BF18: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x0042BF1C: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x0042BF20: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x0042BF24: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x0042BF28: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x0042BF2C: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x0042BF30: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x0042BF34: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0042BF38: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0042BF3C: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0042BF40: jr          $ra
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0042BF44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
