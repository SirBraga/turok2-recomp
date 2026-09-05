#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00427E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427E60: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x00427E64: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x00427E68: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00427E6C: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x00427E70: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00427E74: sw          $ra, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r31;
    // 0x00427E78: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x00427E7C: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x00427E80: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x00427E84: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x00427E88: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x00427E8C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00427E90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00427E94: bne         $v0, $zero, L_00427EA4
    if (ctx->r2 != 0) {
        // 0x00427E98: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00427EA4;
    }
    // 0x00427E98: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00427E9C: j           L_00427F50
    // 0x00427EA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00427F50;
    // 0x00427EA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00427EA4:
    // 0x00427EA4: jal         0x00429DFC
    // 0x00427EA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00427EA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00427EAC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00427EB0: beq         $v0, $v1, L_00427F50
    if (ctx->r2 == ctx->r3) {
        // 0x00427EB4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00427F50;
    }
    // 0x00427EB4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00427EB8: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427EBC: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x00427EC0: beq         $v0, $zero, L_00427F44
    if (ctx->r2 == 0) {
        // 0x00427EC4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00427F44;
    }
    // 0x00427EC4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00427EC8: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
    // 0x00427ECC: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00427ED0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00427ED4:
    // 0x00427ED4: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x00427ED8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00427EDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00427EE0: jal         0x00429AA4
    // 0x00427EE4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_1;
    // 0x00427EE4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00427EE8: bne         $v0, $zero, L_00427F50
    if (ctx->r2 != 0) {
        // 0x00427EEC: nop
    
            goto L_00427F50;
    }
    // 0x00427EEC: nop

    // 0x00427EF0: bne         $s0, $zero, L_00427EFC
    if (ctx->r16 != 0) {
        // 0x00427EF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00427EFC;
    }
    // 0x00427EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427EF8: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
L_00427EFC:
    // 0x00427EFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00427F00: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x00427F04: beq         $v0, $zero, L_00427F2C
    if (ctx->r2 == 0) {
        // 0x00427F08: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_00427F2C;
    }
    // 0x00427F08: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00427F0C: addu        $v1, $v0, $s5
    ctx->r3 = ADD32(ctx->r2, ctx->r21);
L_00427F10:
    // 0x00427F10: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00427F14: beql        $v0, $s4, L_00427F1C
    if (ctx->r2 == ctx->r20) {
        // 0x00427F18: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00427F1C;
    }
    goto skip_0;
    // 0x00427F18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
L_00427F1C:
    // 0x00427F1C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427F20: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x00427F24: bne         $v0, $zero, L_00427F10
    if (ctx->r2 != 0) {
        // 0x00427F28: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00427F10;
    }
    // 0x00427F28: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00427F2C:
    // 0x00427F2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427F30: lbu         $v1, 0x64($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X64);
    // 0x00427F34: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00427F38: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00427F3C: bnel        $v0, $zero, L_00427ED4
    if (ctx->r2 != 0) {
        // 0x00427F40: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00427ED4;
    }
    goto skip_1;
    // 0x00427F40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_1:
L_00427F44:
    // 0x00427F44: sll         $v0, $s2, 8
    ctx->r2 = S32(ctx->r18 << 8);
    // 0x00427F48: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00427F4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427F50:
    // 0x00427F50: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
    // 0x00427F54: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x00427F58: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x00427F5C: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x00427F60: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x00427F64: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x00427F68: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x00427F6C: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x00427F70: jr          $ra
    // 0x00427F74: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x00427F74: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_00423930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423930: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423934: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00423938: beq         $v0, $zero, L_00423950
    if (ctx->r2 == 0) {
        // 0x0042393C: nop
    
            goto L_00423950;
    }
    // 0x0042393C: nop

    // 0x00423940: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423944: addiu       $v0, $v0, 0x510C
    ctx->r2 = ADD32(ctx->r2, 0X510C);
    // 0x00423948: j           L_0042395C
    // 0x0042394C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0042395C;
    // 0x0042394C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423950:
    // 0x00423950: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423954: addiu       $v0, $v0, 0x5118
    ctx->r2 = ADD32(ctx->r2, 0X5118);
    // 0x00423958: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0042395C:
    // 0x0042395C: jr          $ra
    // 0x00423960: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423960: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041EA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EA84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0041EA88: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0041EA8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041EA90: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0041EA94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0041EA98: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041EA9C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0041EAA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EAA4: sw          $t0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r8;
    // 0x0041EAA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EAAC: sw          $t0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r8;
    // 0x0041EAB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EAB4: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x0041EAB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EABC: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x0041EAC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EAC4: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x0041EAC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EACC: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x0041EAD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EAD4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0041EAD8: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0041EADC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041EAE0: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0041EAE4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041EAE8: lw          $v1, 0x2020($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2020);
    // 0x0041EAEC: beq         $v1, $zero, L_0041EB2C
    if (ctx->r3 == 0) {
        // 0x0041EAF0: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041EB2C;
    }
    // 0x0041EAF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041EAF4: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0041EAF8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EAFC: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x0041EB00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041EB04: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041EB08: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EB0C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EB10: sw          $t0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r8;
    // 0x0041EB14: jal         0x00416644
    // 0x0041EB18: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041EB18: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x0041EB1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EB20: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0041EB24: j           L_0041EC30
    // 0x0041EB28: nop

        goto L_0041EC30;
    // 0x0041EB28: nop

L_0041EB2C:
    // 0x0041EB2C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041EB30: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041EB34: jal         0x00426480
    // 0x0041EB38: nop

    func_00426480(rdram, ctx);
        goto after_1;
    // 0x0041EB38: nop

    after_1:
    // 0x0041EB3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EB40: jal         0x0042655C
    // 0x0041EB44: nop

    func_0042655C(rdram, ctx);
        goto after_2;
    // 0x0041EB44: nop

    after_2:
    // 0x0041EB48: bnel        $v0, $zero, L_0041EB9C
    if (ctx->r2 != 0) {
        // 0x0041EB4C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0041EB9C;
    }
    goto skip_0;
    // 0x0041EB4C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x0041EB50: jal         0x0041D890
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041D890(rdram, ctx);
        goto after_3;
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041EB58: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x0041EB5C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041EB60: lw          $a1, 0x70A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X70A8);
    // 0x0041EB64: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041EB68: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041EB6C: jal         0x00426E78
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    func_00426E78(rdram, ctx);
        goto after_4;
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    after_4:
    // 0x0041EB74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041EB78: lw          $a1, 0x2018($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2018);
    // 0x0041EB7C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041EB80: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041EB84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041EB88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041EB8C: jal         0x0041DA28
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    func_0041DA28(rdram, ctx);
        goto after_5;
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    after_5:
    // 0x0041EB94: j           L_0041EC30
    // 0x0041EB98: nop

        goto L_0041EC30;
    // 0x0041EB98: nop

L_0041EB9C:
    // 0x0041EB9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EBA4: sw          $s1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r17;
    // 0x0041EBA8: jal         0x00426594
    // 0x0041EBAC: nop

    func_00426594(rdram, ctx);
        goto after_6;
    // 0x0041EBAC: nop

    after_6:
    // 0x0041EBB0: beq         $v0, $zero, L_0041EBCC
    if (ctx->r2 == 0) {
        // 0x0041EBB4: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EBCC;
    }
    // 0x0041EBB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBBC: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041EBC0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0041EBC4: j           L_0041EC20
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041EC20;
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041EBCC:
    // 0x0041EBCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBD0: jal         0x00426BD8
    // 0x0041EBD4: nop

    func_00426BD8(rdram, ctx);
        goto after_7;
    // 0x0041EBD4: nop

    after_7:
    // 0x0041EBD8: beq         $v0, $zero, L_0041EC08
    if (ctx->r2 == 0) {
        // 0x0041EBDC: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EC08;
    }
    // 0x0041EBDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EBE4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EBE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBEC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EBF0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EBF4: addiu       $v0, $v0, -0x48EC
    ctx->r2 = ADD32(ctx->r2, -0X48EC);
    // 0x0041EBF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EBFC: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041EC00: j           L_0041EC28
    // 0x0041EC04: nop

        goto L_0041EC28;
    // 0x0041EC04: nop

L_0041EC08:
    // 0x0041EC08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EC0C: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041EC10: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0041EC14: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EC18: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041EC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041EC20:
    // 0x0041EC20: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041EC24: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041EC28:
    // 0x0041EC28: jal         0x00416644
    // 0x0041EC2C: nop

    func_00416644(rdram, ctx);
        goto after_8;
    // 0x0041EC2C: nop

    after_8:
L_0041EC30:
    // 0x0041EC30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0041EC34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041EC38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041EC3C: jr          $ra
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026E110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E110: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0026E114: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0026E118: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0026E11C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0026E120: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0026E124: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0026E128: lw          $v0, 0xD4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XD4);
    // 0x0026E12C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0026E130: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026E134: bne         $v0, $zero, L_0026E188
    if (ctx->r2 != 0) {
        // 0x0026E138: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0026E188;
    }
    // 0x0026E138: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0026E13C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026E140: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026E144: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x0026E148: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0026E14C: jal         0x00225058
    // 0x0026E150: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_00225058(rdram, ctx);
        goto after_0;
    // 0x0026E150: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x0026E154: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0026E158: beq         $a1, $zero, L_0026E188
    if (ctx->r5 == 0) {
        // 0x0026E15C: lui         $a3, 0x3F
        ctx->r7 = S32(0X3F << 16);
            goto L_0026E188;
    }
    // 0x0026E15C: lui         $a3, 0x3F
    ctx->r7 = S32(0X3F << 16);
    // 0x0026E160: ori         $a3, $a3, 0xC1FF
    ctx->r7 = ctx->r7 | 0XC1FF;
    // 0x0026E164: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0026E168: and         $a3, $s0, $a3
    ctx->r7 = ctx->r16 & ctx->r7;
    // 0x0026E16C: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0026E170: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0026E174: and         $v0, $s0, $v1
    ctx->r2 = ctx->r16 & ctx->r3;
    // 0x0026E178: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026E17C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0026E180: jal         0x0026E4B8
    // 0x0026E184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_0026E4B8(rdram, ctx);
        goto after_1;
    // 0x0026E184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_1:
L_0026E188:
    // 0x0026E188: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0026E18C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0026E190: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0026E194: jr          $ra
    // 0x0026E198: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0026E198: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0043E6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405850:
    // 0x0043E6DC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
L_00405934:
    // 0x0043E6E0: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0043E6E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0043E6E8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0043E6EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0043E6F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0043E6F4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0043E6F8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043E6FC: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043E700: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0043E704: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0043E708: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x0043E70C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E710: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0043E714: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043E718: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043E71C: jal         0x00246108
    // 0x0043E720: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0043E720: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x0043E724: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x0043E728: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0043E72C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E730: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043E734: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x0043E738: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0043E73C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043E740: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0043E744: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0043E748: bne         $v1, $v0, L_0043E778
    if (ctx->r3 != ctx->r2) {
        // 0x0043E74C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0043E778;
    }
    // 0x0043E74C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0043E750: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0043E754: beq         $v0, $zero, L_0043E778
    if (ctx->r2 == 0) {
        // 0x0043E758: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0043E778;
    }
    // 0x0043E758: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0043E75C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0043E760: bne         $v0, $zero, L_0043E924
    if (ctx->r2 != 0) {
        // 0x0043E764: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043E924;
    }
    // 0x0043E764: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043E768: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043E76C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x0043E770: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0043E774: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0043E778:
    // 0x0043E778: bne         $v1, $v0, L_0043E7B8
    if (ctx->r3 != ctx->r2) {
        // 0x0043E77C: nop
    
            goto L_0043E7B8;
    }
    // 0x0043E77C: nop

    // 0x0043E780: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0043E784: beq         $v0, $zero, L_0043E7B8
    if (ctx->r2 == 0) {
        // 0x0043E788: nop
    
            goto L_0043E7B8;
    }
    // 0x0043E788: nop

    // 0x0043E78C: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0043E790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043E794: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043E798: nop

    // 0x0043E79C: bc1f        L_0043E7B8
    if (!c1cs) {
        // 0x0043E7A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0043E7B8;
    }
    // 0x0043E7A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043E7A4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0043E7A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043E7AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0043E7B0: j           L_00405934
    // 0x0043E7B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    entry_00405934(rdram, ctx);
    return;
    // 0x0043E7B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_0043E7B8:
    // 0x0043E7B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043E7BC: addiu       $a0, $a0, -0x61C
    ctx->r4 = ADD32(ctx->r4, -0X61C);
    // 0x0043E7C0: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0043E7C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0043E7C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043E7CC: nop

    // 0x0043E7D0: bc1f        L_0043E7E8
    if (!c1cs) {
        // 0x0043E7D4: nop
    
            goto L_0043E7E8;
    }
    // 0x0043E7D4: nop

    // 0x0043E7D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043E7DC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043E7E0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043E7E4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_0043E7E8:
    // 0x0043E7E8: lbu         $v0, -0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X3);
    // 0x0043E7EC: beq         $v0, $zero, L_0043E8F0
    if (ctx->r2 == 0) {
        // 0x0043E7F0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0043E8F0;
    }
    // 0x0043E7F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0043E7F4: lw          $v1, -0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, -0XC);
    // 0x0043E7F8: beq         $v1, $v0, L_0043E8F0
    if (ctx->r3 == ctx->r2) {
        // 0x0043E7FC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043E8F0;
    }
    // 0x0043E7FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043E800: lw          $a0, 0x20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20);
    // 0x0043E804: bnel        $a0, $v0, L_0043E8DC
    if (ctx->r4 != ctx->r2) {
        // 0x0043E808: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043E8DC;
    }
    goto skip_0;
    // 0x0043E808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0043E80C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E810: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0043E814: beq         $v1, $a0, L_0043E844
    if (ctx->r3 == ctx->r4) {
        // 0x0043E818: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0043E844;
    }
    // 0x0043E818: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043E81C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E820: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E824: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x0043E828: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043E82C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E830: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0043E834: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043E838: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x0043E83C: j           L_00405850
    // 0x0043E840: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    entry_00405850(rdram, ctx);
    return;
    // 0x0043E840: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_0043E844:
    // 0x0043E844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043E848: swc1        $f2, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f2.u32l;
    // 0x0043E84C: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_0043E850:
    // 0x0043E850: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043E854: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x0043E858: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043E85C: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x0043E860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043E864: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0043E868: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043E86C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043E870: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043E874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043E878: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x0043E87C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0043E880: bne         $v0, $s0, L_0043E890
    if (ctx->r2 != ctx->r16) {
        // 0x0043E884: nop
    
            goto L_0043E890;
    }
    // 0x0043E884: nop

    // 0x0043E888: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043E88C: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_0043E890:
    // 0x0043E890: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043E894: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x0043E898: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043E89C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043E8A0: lwc1        $f14, 0x464($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X464);
    // 0x0043E8A4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0043E8A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043E8AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043E8B0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043E8B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043E8B8: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x0043E8BC: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0043E8C0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0043E8C4: jal         0x002119FC
    // 0x0043E8C8: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0043E8C8: nop

    after_1:
    // 0x0043E8CC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0043E8D0: nop

    // 0x0043E8D4: bc1t        L_0043E850
    if (c1cs) {
        // 0x0043E8D8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043E850;
    }
    // 0x0043E8D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0043E8DC:
    // 0x0043E8DC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x0043E8E0: jal         0x00404C44
    // 0x0043E8E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00404C44(rdram, ctx);
        goto after_2;
    // 0x0043E8E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0043E8E8: bne         $v0, $zero, L_0043E93C
    if (ctx->r2 != 0) {
        // 0x0043E8EC: nop
    
            goto L_0043E93C;
    }
    // 0x0043E8EC: nop

L_0043E8F0:
    // 0x0043E8F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043E8F4: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x0043E8F8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0043E8FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0043E900: bne         $v1, $v0, L_0043E93C
    if (ctx->r3 != ctx->r2) {
        // 0x0043E904: nop
    
            goto L_0043E93C;
    }
    // 0x0043E904: nop

    // 0x0043E908: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0043E90C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043E910: lwc1        $f0, 0x468($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X468);
    // 0x0043E914: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0043E918: nop

    // 0x0043E91C: bc1f        L_0043E93C
    if (!c1cs) {
        // 0x0043E920: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043E93C;
    }
    // 0x0043E920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0043E924:
    // 0x0043E924: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0043E928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043E92C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0043E930: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0043E934: jal         0x00243414
    // 0x0043E938: nop

    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0043E938: nop

    after_3:
L_0043E93C:
    // 0x0043E93C: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0043E940: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0043E944: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0043E948: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0043E94C: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x0043E950: jr          $ra
    // 0x0043E954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x0043E954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00457294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E308:
    // 0x00457294: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
L_0041E354:
    // 0x00457298: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
L_0041E400:
    // 0x0045729C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004572A0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x004572A4: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x004572A8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x004572AC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x004572B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x004572B4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004572B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x004572BC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x004572C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004572C4:
    // 0x004572C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004572C8: jal         0x00426898
    // 0x004572CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    entry_00426898(rdram, ctx);
        goto after_0;
    // 0x004572CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x004572D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x004572D4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x004572D8: jal         0x00426BA8
    // 0x004572DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    entry_00426BA8(rdram, ctx);
        goto after_1;
    // 0x004572DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x004572E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004572E4: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x004572E8: jal         0x00426C74
    // 0x004572EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00426C74(rdram, ctx);
        goto after_2;
    // 0x004572EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x004572F0: beq         $v0, $zero, L_0045737C
    if (ctx->r2 == 0) {
        // 0x004572F4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0045737C;
    }
    // 0x004572F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004572F8: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x004572FC: bnel        $v0, $zero, L_004572C4
    if (ctx->r2 != 0) {
        // 0x00457300: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004572C4;
    }
    goto skip_0;
    // 0x00457300: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00457304: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00457308: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045730C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00457310:
    // 0x00457310: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00457314: jal         0x00426898
    // 0x00457318: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    entry_00426898(rdram, ctx);
        goto after_3;
    // 0x00457318: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x0045731C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x00457320: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00457324: jal         0x00426BA8
    // 0x00457328: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    entry_00426BA8(rdram, ctx);
        goto after_4;
    // 0x00457328: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x0045732C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00457330: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x00457334: jal         0x00426C74
    // 0x00457338: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00426C74(rdram, ctx);
        goto after_5;
    // 0x00457338: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x0045733C: beq         $v0, $zero, L_00457374
    if (ctx->r2 == 0) {
        // 0x00457340: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00457374;
    }
    // 0x00457340: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00457344: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00457348: bnel        $v0, $zero, L_00457310
    if (ctx->r2 != 0) {
        // 0x0045734C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00457310;
    }
    goto skip_1;
    // 0x0045734C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_1:
    // 0x00457350: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00457354: bnel        $s1, $zero, L_00457364
    if (ctx->r17 != 0) {
        // 0x00457358: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00457364;
    }
    goto skip_2;
    // 0x00457358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x0045735C: beq         $v0, $zero, L_00457384
    if (ctx->r2 == 0) {
        // 0x00457360: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00457384;
    }
    // 0x00457360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00457364:
    // 0x00457364: addiu       $v1, $zero, 0x7B
    ctx->r3 = ADD32(0, 0X7B);
    // 0x00457368: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    // 0x0045736C: j           L_0041E400
    // 0x00457370: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    entry_0041E400(rdram, ctx);
    return;
    // 0x00457370: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
L_00457374:
    // 0x00457374: j           L_0041E354
    // 0x00457378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_0041E354(rdram, ctx);
    return;
    // 0x00457378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045737C:
    // 0x0045737C: j           L_0041E308
    // 0x00457380: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    entry_0041E308(rdram, ctx);
    return;
    // 0x00457380: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_00457384:
    // 0x00457384: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00457388: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045738C: jal         0x004266C0
    // 0x00457390: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    entry_004266C0(rdram, ctx);
        goto after_6;
    // 0x00457390: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x00457394: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00457398: bne         $s0, $zero, L_00457400
    if (ctx->r16 != 0) {
        // 0x0045739C: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_00457400;
    }
    // 0x0045739C: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x004573A0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004573A4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004573A8: jal         0x0042662C
    // 0x004573AC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    entry_0042662C(rdram, ctx);
        goto after_7;
    // 0x004573AC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x004573B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004573B4: bne         $s0, $zero, L_00457400
    if (ctx->r16 != 0) {
        // 0x004573B8: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_00457400;
    }
    // 0x004573B8: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x004573BC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004573C0: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x004573C4: jal         0x00426D8C
    // 0x004573C8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426D8C(rdram, ctx);
        goto after_8;
    // 0x004573C8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_8:
    // 0x004573CC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x004573D0: beq         $v1, $zero, L_004573E8
    if (ctx->r3 == 0) {
        // 0x004573D4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_004573E8;
    }
    // 0x004573D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004573D8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x004573DC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x004573E0: beq         $v0, $zero, L_00457400
    if (ctx->r2 == 0) {
        // 0x004573E4: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_00457400;
    }
    // 0x004573E4: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
L_004573E8:
    // 0x004573E8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x004573EC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x004573F0: beq         $v0, $zero, L_00457400
    if (ctx->r2 == 0) {
        // 0x004573F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00457400;
    }
    // 0x004573F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004573F8: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x004573FC: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
L_00457400:
    // 0x00457400: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00457404: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00457408: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0045740C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00457410: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00457414: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00457418: jr          $ra
    // 0x0045741C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0045741C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00255E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255E4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00255E50: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00255E54: lui         $v0, 0xFF7F
    ctx->r2 = S32(0XFF7F << 16);
    // 0x00255E58: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00255E5C: addiu       $a1, $a1, -0x6770
    ctx->r5 = ADD32(ctx->r5, -0X6770);
    // 0x00255E60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00255E64: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00255E68: lw          $v1, 0xD4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XD4);
    // 0x00255E6C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00255E70: sw          $zero, 0x1298($a2)
    MEM_W(0X1298, ctx->r6) = 0;
    // 0x00255E74: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00255E78: bne         $a2, $a0, L_00255E9C
    if (ctx->r6 != ctx->r4) {
        // 0x00255E7C: sw          $v1, 0xD4($a2)
        MEM_W(0XD4, ctx->r6) = ctx->r3;
            goto L_00255E9C;
    }
    // 0x00255E7C: sw          $v1, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->r3;
    // 0x00255E80: addiu       $a0, $a1, 0x59C
    ctx->r4 = ADD32(ctx->r5, 0X59C);
    // 0x00255E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00255E88: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00255E8C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00255E90: addiu       $a1, $a1, 0x1E54
    ctx->r5 = ADD32(ctx->r5, 0X1E54);
    // 0x00255E94: jal         0x00416644
    // 0x00255E98: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00255E98: nop

    after_0:
L_00255E9C:
    // 0x00255E9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00255EA0: jr          $ra
    // 0x00255EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00255EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00255A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255A44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00255A48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00255A4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00255A50: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00255A54: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00255A58: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00255A5C: jal         0x00268A5C
    // 0x00255A60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268A5C(rdram, ctx);
        goto after_0;
    // 0x00255A60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00255A64: lwc1        $f1, 0xAE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAE4);
    // 0x00255A68: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00255A6C: lwc1        $f0, 0xAA4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAA4);
    // 0x00255A70: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00255A74: nop

    // 0x00255A78: bc1tl       L_00255A80
    if (c1cs) {
        // 0x00255A7C: swc1        $f1, 0xAA4($s0)
        MEM_W(0XAA4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00255A80;
    }
    goto skip_0;
    // 0x00255A7C: swc1        $f1, 0xAA4($s0)
    MEM_W(0XAA4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_00255A80:
    // 0x00255A80: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00255A84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255A88: lwc1        $f2, 0x71A0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X71A0);
    // 0x00255A8C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00255A90: lwc1        $f0, 0xA7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x00255A94: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00255A98: swc1        $f1, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00255A9C: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
    // 0x00255AA0: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00255AA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255AA8: lwc1        $f1, 0x71A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71A4);
    // 0x00255AAC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00255AB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255AB4: lwc1        $f1, 0x71A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71A8);
    // 0x00255AB8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00255ABC: nop

    // 0x00255AC0: bc1f        L_00255ACC
    if (!c1cs) {
        // 0x00255AC4: swc1        $f0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
            goto L_00255ACC;
    }
    // 0x00255AC4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x00255AC8: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00255ACC:
    // 0x00255ACC: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00255AD0: jal         0x00280EAC
    // 0x00255AD4: sw          $zero, 0xBEC($s0)
    MEM_W(0XBEC, ctx->r16) = 0;
    func_00280EAC(rdram, ctx);
        goto after_1;
    // 0x00255AD4: sw          $zero, 0xBEC($s0)
    MEM_W(0XBEC, ctx->r16) = 0;
    after_1:
    // 0x00255AD8: addiu       $v0, $s0, 0xCD0
    ctx->r2 = ADD32(ctx->r16, 0XCD0);
    // 0x00255ADC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00255AE0: sw          $zero, 0xCD0($s0)
    MEM_W(0XCD0, ctx->r16) = 0;
    // 0x00255AE4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00255AE8: sw          $v1, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r3;
    // 0x00255AEC: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00255AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00255AF4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00255AF8: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00255AFC: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00255B00: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00255B04: jal         0x00275544
    // 0x00255B08: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x00255B08: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    after_2:
    // 0x00255B0C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00255B10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00255B14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00255B18: jr          $ra
    // 0x00255B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00255B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00466328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00466328: jal         0x00291B00
    // 0x0046632C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_00291B00(rdram, ctx);
        goto after_0;
    // 0x0046632C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00466330: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00466334: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00466338: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0046633C: addiu       $a0, $s2, 0x7514
    ctx->r4 = ADD32(ctx->r18, 0X7514);
    // 0x00466340: addiu       $a1, $s2, 0x6A94
    ctx->r5 = ADD32(ctx->r18, 0X6A94);
    // 0x00466344: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    // 0x00466348: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x0046634C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00466350: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00466354: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00466358: jal         0x0026D330
    // 0x0046635C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0026D330(rdram, ctx);
        goto after_1;
    // 0x0046635C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x00466360: addiu       $a0, $s2, 0x7580
    ctx->r4 = ADD32(ctx->r18, 0X7580);
    // 0x00466364: addiu       $a1, $s2, 0x752C
    ctx->r5 = ADD32(ctx->r18, 0X752C);
    // 0x00466368: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x0046636C: jal         0x0026D330
    // 0x00466370: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0026D330(rdram, ctx);
        goto after_2;
    // 0x00466370: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x00466374: jal         0x0026D230
    // 0x00466378: addiu       $a0, $s2, 0x6A88
    ctx->r4 = ADD32(ctx->r18, 0X6A88);
    func_0026D230(rdram, ctx);
        goto after_3;
    // 0x00466378: addiu       $a0, $s2, 0x6A88
    ctx->r4 = ADD32(ctx->r18, 0X6A88);
    after_3:
    // 0x0046637C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00466380: addiu       $s1, $zero, 0x2588
    ctx->r17 = ADD32(0, 0X2588);
L_00466384:
    // 0x00466384: addiu       $a0, $s2, 0x6A88
    ctx->r4 = ADD32(ctx->r18, 0X6A88);
    // 0x00466388: jal         0x0026D288
    // 0x0046638C: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    func_0026D288(rdram, ctx);
        goto after_4;
    // 0x0046638C: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    after_4:
    // 0x00466390: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00466394: slti        $v0, $s0, 0x60
    ctx->r2 = SIGNED(ctx->r16) < 0X60 ? 1 : 0;
    // 0x00466398: bne         $v0, $zero, L_00466384
    if (ctx->r2 != 0) {
        // 0x0046639C: addiu       $s1, $s1, 0xB8
        ctx->r17 = ADD32(ctx->r17, 0XB8);
            goto L_00466384;
    }
    // 0x0046639C: addiu       $s1, $s1, 0xB8
    ctx->r17 = ADD32(ctx->r17, 0XB8);
    // 0x004663A0: ori         $a0, $zero, 0x95A0
    ctx->r4 = 0 | 0X95A0;
    // 0x004663A4: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x004663A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004663AC: jal         0x00200500
    // 0x004663B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x004663B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x004663B4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004663B8: ori         $s1, $zero, 0x94D8
    ctx->r17 = 0 | 0X94D8;
L_004663BC:
    // 0x004663BC: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    // 0x004663C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004663C4: jal         0x00200500
    // 0x004663C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_6;
    // 0x004663C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x004663CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004663D0: slti        $v0, $s0, 0xA
    ctx->r2 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x004663D4: bne         $v0, $zero, L_004663BC
    if (ctx->r2 != 0) {
        // 0x004663D8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_004663BC;
    }
    // 0x004663D8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x004663DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004663E0: ori         $s3, $zero, 0x95A0
    ctx->r19 = 0 | 0X95A0;
    // 0x004663E4: addiu       $s1, $zero, 0x7598
    ctx->r17 = ADD32(0, 0X7598);
L_004663E8:
    // 0x004663E8: addu        $a0, $s2, $s3
    ctx->r4 = ADD32(ctx->r18, ctx->r19);
    // 0x004663EC: jal         0x00200574
    // 0x004663F0: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    func_00200574(rdram, ctx);
        goto after_7;
    // 0x004663F0: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    after_7:
    // 0x004663F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004663F8: slti        $v0, $s0, 0x64
    ctx->r2 = SIGNED(ctx->r16) < 0X64 ? 1 : 0;
    // 0x004663FC: bne         $v0, $zero, L_004663E8
    if (ctx->r2 != 0) {
        // 0x00466400: addiu       $s1, $s1, 0x50
        ctx->r17 = ADD32(ctx->r17, 0X50);
            goto L_004663E8;
    }
    // 0x00466400: addiu       $s1, $s1, 0x50
    ctx->r17 = ADD32(ctx->r17, 0X50);
    // 0x00466404: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00466408: jal         0x00235F48
    // 0x0046640C: sw          $zero, 0x2580($s2)
    MEM_W(0X2580, ctx->r18) = 0;
    func_00235F48(rdram, ctx);
        goto after_8;
    // 0x0046640C: sw          $zero, 0x2580($s2)
    MEM_W(0X2580, ctx->r18) = 0;
    after_8:
    // 0x00466410: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00466414: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00466418: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0046641C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00466420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00466424: jr          $ra
    // 0x00466428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00466428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00401C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401C78: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00401C7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00401C80: jr          $ra
    // 0x00401C84: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    return;
    // 0x00401C84: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
;}
RECOMP_FUNC void func_00265E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265E9C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00265EA0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265EA4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00265EA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00265EAC: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x00265EB0: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x00265EB4: jal         0x002245BC
    // 0x00265EB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x00265EB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x00265EBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265EC0: jr          $ra
    // 0x00265EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002429BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002429BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002429C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002429C4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002429C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002429CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002429D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002429D4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002429D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002429DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002429E0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002429E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002429E8: lw          $s0, 0x68($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X68);
    // 0x002429EC: jal         0x00266C5C
    // 0x002429F0: addiu       $a2, $zero, 0x13C
    ctx->r6 = ADD32(0, 0X13C);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x002429F0: addiu       $a2, $zero, 0x13C
    ctx->r6 = ADD32(0, 0X13C);
    after_0:
    // 0x002429F4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x002429F8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x002429FC: sw          $s0, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r16;
    // 0x00242A00: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x00242A04: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x00242A08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00242A0C: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x00242A10: lw          $a1, 0x14($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X14);
    // 0x00242A14: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    // 0x00242A18: jal         0x002427E0
    // 0x00242A1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002427E0(rdram, ctx);
        goto after_1;
    // 0x00242A1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00242A20: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00242A24: addiu       $v0, $v0, -0x17C0
    ctx->r2 = ADD32(ctx->r2, -0X17C0);
    // 0x00242A28: sw          $v0, 0x104($s1)
    MEM_W(0X104, ctx->r17) = ctx->r2;
    // 0x00242A2C: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00242A30: addiu       $v0, $v0, -0x2844
    ctx->r2 = ADD32(ctx->r2, -0X2844);
    // 0x00242A34: sw          $v0, 0xF4($s1)
    MEM_W(0XF4, ctx->r17) = ctx->r2;
    // 0x00242A38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00242A3C: sb          $v0, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r2;
    // 0x00242A40: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
    // 0x00242A44: sw          $zero, 0x30($s1)
    MEM_W(0X30, ctx->r17) = 0;
    // 0x00242A48: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00242A4C: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00242A50: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x00242A54: sw          $t0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r8;
    // 0x00242A58: sw          $t1, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r9;
    // 0x00242A5C: sw          $t2, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r10;
    // 0x00242A60: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00242A64: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00242A68: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x00242A6C: sw          $t0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r8;
    // 0x00242A70: sw          $t1, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r9;
    // 0x00242A74: sw          $t2, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r10;
    // 0x00242A78: sw          $zero, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = 0;
    // 0x00242A7C: sw          $zero, 0x70($s1)
    MEM_W(0X70, ctx->r17) = 0;
    // 0x00242A80: sw          $zero, 0x74($s1)
    MEM_W(0X74, ctx->r17) = 0;
    // 0x00242A84: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00242A88: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    // 0x00242A8C: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x00242A90: sw          $zero, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = 0;
    // 0x00242A94: sw          $zero, 0x80($s1)
    MEM_W(0X80, ctx->r17) = 0;
    // 0x00242A98: sw          $zero, 0x84($s1)
    MEM_W(0X84, ctx->r17) = 0;
    // 0x00242A9C: sw          $zero, 0x88($s1)
    MEM_W(0X88, ctx->r17) = 0;
    // 0x00242AA0: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    // 0x00242AA4: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00242AA8: swc1        $f0, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->f0.u32l;
    // 0x00242AAC: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00242AB0: swc1        $f0, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f0.u32l;
    // 0x00242AB4: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00242AB8: swc1        $f0, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->f0.u32l;
    // 0x00242ABC: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00242AC0: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00242AC4: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x00242AC8: sw          $t0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r8;
    // 0x00242ACC: sw          $t1, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r9;
    // 0x00242AD0: sw          $t2, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r10;
    // 0x00242AD4: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x00242AD8: sw          $v0, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r2;
    // 0x00242ADC: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00242AE0: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00242AE4: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x00242AE8: sw          $t0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r8;
    // 0x00242AEC: sw          $t1, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r9;
    // 0x00242AF0: sw          $t2, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r10;
    // 0x00242AF4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x00242AF8: sw          $a0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r4;
    // 0x00242AFC: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00242B00: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00242B04: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00242B08: beq         $v0, $zero, L_00242B2C
    if (ctx->r2 == 0) {
        // 0x00242B0C: nop
    
            goto L_00242B2C;
    }
    // 0x00242B0C: nop

    // 0x00242B10: beq         $a0, $zero, L_00242B2C
    if (ctx->r4 == 0) {
        // 0x00242B14: nop
    
            goto L_00242B2C;
    }
    // 0x00242B14: nop

    // 0x00242B18: lw          $a1, 0xAC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XAC);
    // 0x00242B1C: lw          $a2, 0xB4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XB4);
    // 0x00242B20: jal         0x0026BE60
    // 0x00242B24: nop

    func_0026BE60(rdram, ctx);
        goto after_2;
    // 0x00242B24: nop

    after_2:
    // 0x00242B28: swc1        $f0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->f0.u32l;
L_00242B2C:
    // 0x00242B2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00242B30: lwc1        $f0, 0x68A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X68A8);
    // 0x00242B34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00242B38: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x00242B3C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00242B40: sb          $v0, 0x13($s1)
    MEM_B(0X13, ctx->r17) = ctx->r2;
    // 0x00242B44: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00242B48: sb          $v0, 0x95($s1)
    MEM_B(0X95, ctx->r17) = ctx->r2;
    // 0x00242B4C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242B50: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00242B54: sh          $v1, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r3;
    // 0x00242B58: sb          $v1, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r3;
    // 0x00242B5C: sb          $v1, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r3;
    // 0x00242B60: sb          $v1, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r3;
    // 0x00242B64: sb          $v1, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r3;
    // 0x00242B68: sb          $v1, 0x17($s1)
    MEM_B(0X17, ctx->r17) = ctx->r3;
    // 0x00242B6C: sh          $v1, 0x96($s1)
    MEM_H(0X96, ctx->r17) = ctx->r3;
    // 0x00242B70: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00242B74: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x00242B78: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x00242B7C: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    // 0x00242B80: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x00242B84: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    // 0x00242B88: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x00242B8C: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x00242B90: sw          $zero, 0x24($s1)
    MEM_W(0X24, ctx->r17) = 0;
    // 0x00242B94: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
    // 0x00242B98: sb          $zero, 0x94($s1)
    MEM_B(0X94, ctx->r17) = 0;
    // 0x00242B9C: sw          $zero, 0xEC($s1)
    MEM_W(0XEC, ctx->r17) = 0;
    // 0x00242BA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242BA4: swc1        $f0, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->f0.u32l;
    // 0x00242BA8: swc1        $f0, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->f0.u32l;
    // 0x00242BAC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00242BB0: beq         $s3, $zero, L_00242BCC
    if (ctx->r19 == 0) {
        // 0x00242BB4: swc1        $f0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
            goto L_00242BCC;
    }
    // 0x00242BB4: swc1        $f0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
    // 0x00242BB8: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x00242BBC: beq         $a2, $zero, L_00242BCC
    if (ctx->r6 == 0) {
        // 0x00242BC0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00242BCC;
    }
    // 0x00242BC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00242BC4: jalr        $a2
    // 0x00242BC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_3;
    // 0x00242BC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_00242BCC:
    // 0x00242BCC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00242BD0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00242BD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242BD8: beq         $v0, $zero, L_00242BE4
    if (ctx->r2 == 0) {
        // 0x00242BDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00242BE4;
    }
    // 0x00242BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242BE0: sb          $v0, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = ctx->r2;
L_00242BE4:
    // 0x00242BE4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00242BE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00242BEC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00242BF0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00242BF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00242BF8: jr          $ra
    // 0x00242BFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00242BFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00200500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200500: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00200504: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    // 0x00200508: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0020050C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x00200510: jr          $ra
    // 0x00200514: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    return;
    // 0x00200514: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0045B770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B770: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0045B774: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B778: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B77C: jr          $ra
    // 0x0045B780: nop

    return;
    // 0x0045B780: nop

;}
RECOMP_FUNC void func_0025A99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A99C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A9A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A9A4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A9A8: lhu         $a3, 0x8E($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8E);
    // 0x0025A9AC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A9B0: addiu       $a2, $a2, 0x2A0
    ctx->r6 = ADD32(ctx->r6, 0X2A0);
    // 0x0025A9B4: jal         0x00245A98
    // 0x0025A9B8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A9B8: nop

    after_0:
    // 0x0025A9BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A9C0: jr          $ra
    // 0x0025A9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002119FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002119FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00211A00: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00211A04: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x00211A08: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x00211A0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00211A10: jal         0x0027BC34
    // 0x00211A14: mov.s       $f21, $f14
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 14);
    ctx->f21.fl = ctx->f14.fl;
    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x00211A14: mov.s       $f21, $f14
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 14);
    ctx->f21.fl = ctx->f14.fl;
    after_0:
    // 0x00211A18: beq         $v0, $zero, L_00211A30
    if (ctx->r2 == 0) {
        // 0x00211A1C: lui         $v1, 0xA84A
        ctx->r3 = S32(0XA84A << 16);
            goto L_00211A30;
    }
    // 0x00211A1C: lui         $v1, 0xA84A
    ctx->r3 = S32(0XA84A << 16);
    // 0x00211A20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00211A24: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00211A28: j           L_00211A3C
    // 0x00211A2C: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
        goto L_00211A3C;
    // 0x00211A2C: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_00211A30:
    // 0x00211A30: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00211A34: lw          $v0, -0x287C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X287C);
    // 0x00211A38: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_00211A3C:
    // 0x00211A3C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00211A40: lui         $v0, 0x5834
    ctx->r2 = S32(0X5834 << 16);
    // 0x00211A44: ori         $v0, $v0, 0x8C2D
    ctx->r2 = ctx->r2 | 0X8C2D;
    // 0x00211A48: mflo        $a2
    ctx->r6 = lo;
    // 0x00211A4C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00211A50: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00211A54: sw          $v0, -0x287C($at)
    MEM_W(-0X287C, ctx->r1) = ctx->r2;
    // 0x00211A58: lui         $a1, 0x7FFF
    ctx->r5 = S32(0X7FFF << 16);
    // 0x00211A5C: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x00211A60: lui         $a0, 0x68DB
    ctx->r4 = S32(0X68DB << 16);
    // 0x00211A64: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00211A68: lw          $v0, -0x287C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X287C);
    // 0x00211A6C: ori         $a0, $a0, 0x8BAD
    ctx->r4 = ctx->r4 | 0X8BAD;
    // 0x00211A70: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x00211A74: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x00211A78: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00211A7C: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x00211A80: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00211A84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211A88: lwc1        $f0, 0x56C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X56C0);
    // 0x00211A8C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00211A90: mfhi        $a2
    ctx->r6 = hi;
    // 0x00211A94: sra         $a0, $a2, 12
    ctx->r4 = S32(SIGNED(ctx->r6) >> 12);
    // 0x00211A98: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x00211A9C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00211AA0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00211AA4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00211AA8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00211AAC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00211AB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00211AB4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00211AB8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00211ABC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00211AC0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00211AC4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00211AC8: nop

    // 0x00211ACC: mul.s       $f2, $f1, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x00211AD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211AD4: lwc1        $f0, 0x56C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X56C4);
    // 0x00211AD8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211ADC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00211AE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00211AE4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00211AE8: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00211AEC: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00211AF0: jr          $ra
    // 0x00211AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00211AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00290E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0028B274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028B278: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028B27C: lw          $a0, 0x2F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2F4);
    // 0x0028B280: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x0028B284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028B288: bne         $v1, $v0, L_0028B2A0
    if (ctx->r3 != ctx->r2) {
        // 0x0028B28C: nop
    
            goto L_0028B2A0;
    }
    // 0x0028B28C: nop

    // 0x0028B290: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028B294: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0028B298: jal         0x0029A4F0
    // 0x0028B29C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    osSpTaskYield_recomp(rdram, ctx);
        goto after_0;
    // 0x0028B29C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    after_0:
L_0028B2A0:
    // 0x0028B2A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028B2A4: jr          $ra
    // 0x0028B2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028B2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002757E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002757E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002757E8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002757EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002757F0: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x002757F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002757F8: jal         0x00271904
    // 0x002757FC: nop

    func_00271904(rdram, ctx);
        goto after_0;
    // 0x002757FC: nop

    after_0:
    // 0x00275800: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275804: jr          $ra
    // 0x00275808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0043DFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405054:
    // 0x0043DFE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
L_004050C8:
    // 0x0043DFE4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043DFE8: addiu       $a0, $a0, -0x5F4
    ctx->r4 = ADD32(ctx->r4, -0X5F4);
    // 0x0043DFEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0043DFF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0043DFF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0043DFF8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0043DFFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0043E000: beq         $v0, $zero, L_0043E0C8
    if (ctx->r2 == 0) {
        // 0x0043E004: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043E0C8;
    }
    // 0x0043E004: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043E008: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0043E00C: beql        $v1, $v0, L_0043E054
    if (ctx->r3 == ctx->r2) {
        // 0x0043E010: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_0043E054;
    }
    goto skip_0;
    // 0x0043E010: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
    skip_0:
    // 0x0043E014: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E018: lw          $v1, -0x5F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F0);
    // 0x0043E01C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0043E020: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0043E024: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E028: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0043E02C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043E030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E034: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x0043E038: j           L_00405054
    // 0x0043E03C: swc1        $f0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f0.u32l;
    entry_00405054(rdram, ctx);
    return;
    // 0x0043E03C: swc1        $f0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f0.u32l;
L_0043E040:
    // 0x0043E040: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x0043E044: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043E048: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0043E04C: j           L_004050C8
    // 0x0043E050: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    entry_004050C8(rdram, ctx);
    return;
    // 0x0043E050: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
L_0043E054:
    // 0x0043E054: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043E058: addiu       $s0, $s0, -0x5F0
    ctx->r16 = ADD32(ctx->r16, -0X5F0);
    // 0x0043E05C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_0043E060:
    // 0x0043E060: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E064: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x0043E068: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0043E06C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E070: lw          $v1, -0x5F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F0);
    // 0x0043E074: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0043E078: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0043E07C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043E080: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0043E084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043E088: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0043E08C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0043E090: beq         $v0, $s1, L_0043E040
    if (ctx->r2 == ctx->r17) {
        // 0x0043E094: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043E040;
    }
    // 0x0043E094: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043E098: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043E09C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043E0A0: lwc1        $f14, 0x41C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X41C);
    // 0x0043E0A4: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x0043E0A8: lwc1        $f20, 0x10($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X10);
    // 0x0043E0AC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0043E0B0: jal         0x002119FC
    // 0x0043E0B4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0043E0B4: nop

    after_0:
    // 0x0043E0B8: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0043E0BC: nop

    // 0x0043E0C0: bc1t        L_0043E060
    if (c1cs) {
        // 0x0043E0C4: nop
    
            goto L_0043E060;
    }
    // 0x0043E0C4: nop

L_0043E0C8:
    // 0x0043E0C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0043E0CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0043E0D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0043E0D4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0043E0D8: jr          $ra
    // 0x0043E0DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0043E0DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026D620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D620: jr          $ra
    // 0x0026D624: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026D624: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002A259C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A259C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A25A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A25A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002A25A8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A25AC: ori         $a0, $a0, 0xFFE4
    ctx->r4 = ctx->r4 | 0XFFE4;
    // 0x002A25B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A25B4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002A25B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A25BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002A25C0: jal         0x002A1350
    // 0x002A25C4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_002A1350(rdram, ctx);
        goto after_0;
    // 0x002A25C4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x002A25C8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A25CC: ori         $a0, $a0, 0xFFE8
    ctx->r4 = ctx->r4 | 0XFFE8;
    // 0x002A25D0: jal         0x002A1350
    // 0x002A25D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A1350(rdram, ctx);
        goto after_1;
    // 0x002A25D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002A25D8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A25DC: ori         $a0, $a0, 0xFFEC
    ctx->r4 = ctx->r4 | 0XFFEC;
    // 0x002A25E0: jal         0x002A1350
    // 0x002A25E4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002A1350(rdram, ctx);
        goto after_2;
    // 0x002A25E4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x002A25E8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A25EC: ori         $a0, $a0, 0xFFE0
    ctx->r4 = ctx->r4 | 0XFFE0;
    // 0x002A25F0: jal         0x002A1350
    // 0x002A25F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002A1350(rdram, ctx);
        goto after_3;
    // 0x002A25F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_002A25F8:
    // 0x002A25F8: jal         0x002A13BC
    // 0x002A25FC: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_002A13BC(rdram, ctx);
        goto after_4;
    // 0x002A25FC: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_4:
    // 0x002A2600: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2604: jal         0x002A1384
    // 0x002A2608: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    func_002A1384(rdram, ctx);
        goto after_5;
    // 0x002A2608: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    after_5:
    // 0x002A260C: beql        $v0, $zero, L_002A261C
    if (ctx->r2 == 0) {
        // 0x002A2610: lui         $a0, 0xB1FF
        ctx->r4 = S32(0XB1FF << 16);
            goto L_002A261C;
    }
    goto skip_0;
    // 0x002A2610: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    skip_0:
    // 0x002A2614: break       1
    do_break(2762260);
    // 0x002A2618: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A261C:
    // 0x002A261C: jal         0x002A1384
    // 0x002A2620: ori         $a0, $a0, 0xFFE0
    ctx->r4 = ctx->r4 | 0XFFE0;
    func_002A1384(rdram, ctx);
        goto after_6;
    // 0x002A2620: ori         $a0, $a0, 0xFFE0
    ctx->r4 = ctx->r4 | 0XFFE0;
    after_6:
    // 0x002A2624: bne         $v0, $zero, L_002A25F8
    if (ctx->r2 != 0) {
        // 0x002A2628: nop
    
            goto L_002A25F8;
    }
    // 0x002A2628: nop

    // 0x002A262C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2630: jal         0x002A1384
    // 0x002A2634: ori         $a0, $a0, 0xFFDC
    ctx->r4 = ctx->r4 | 0XFFDC;
    func_002A1384(rdram, ctx);
        goto after_7;
    // 0x002A2634: ori         $a0, $a0, 0xFFDC
    ctx->r4 = ctx->r4 | 0XFFDC;
    after_7:
    // 0x002A2638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002A263C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A2640: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A2644: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A2648: jr          $ra
    // 0x002A264C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A264C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029864C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029864C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // turok2: reconnected split function: a stray ELF symbol at 0x00298650 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00298650(rdram, ctx);
;}
RECOMP_FUNC void func_004409C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00407A6C:
    // 0x004409C4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004409C8: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x004409CC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004409D0: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004409D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004409D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004409DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x004409E0: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004409E4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004409E8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x004409EC: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x004409F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004409F4: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x004409F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004409FC: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00440A00: jal         0x00246108
    // 0x00440A04: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00440A04: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00440A08: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x00440A0C: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x00440A10: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00440A14: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00440A18: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00440A1C: beq         $v1, $zero, L_00440A50
    if (ctx->r3 == 0) {
        // 0x00440A20: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00440A50;
    }
    // 0x00440A20: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00440A24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00440A28: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00440A2C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00440A30: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00440A34: jal         0x00245BAC
    // 0x00440A38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00440A38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00440A3C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00440A40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00440A44: swc1        $f0, -0x9D8($at)
    MEM_W(-0X9D8, ctx->r1) = ctx->f0.u32l;
    // 0x00440A48: j           L_00407A6C
    // 0x00440A4C: nop

    entry_00407A6C(rdram, ctx);
    return;
    // 0x00440A4C: nop

L_00440A50:
    // 0x00440A50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00440A54: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00440A58: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00440A5C: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00440A60: lw          $a3, -0x9D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X9D8);
    // 0x00440A64: jal         0x00245BAC
    // 0x00440A68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x00440A68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00440A6C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00440A70: beq         $v0, $zero, L_00440AA8
    if (ctx->r2 == 0) {
        // 0x00440A74: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00440AA8;
    }
    // 0x00440A74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00440A78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00440A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00440A80: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00440A84: addiu       $v1, $v1, -0x5FC
    ctx->r3 = ADD32(ctx->r3, -0X5FC);
    // 0x00440A88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440A8C: lwc1        $f0, 0x558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X558);
    // 0x00440A90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00440A94: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00440A98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00440A9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00440AA0: jal         0x00243414
    // 0x00440AA4: sw          $v0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00440AA4: sw          $v0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r2;
    after_3:
L_00440AA8:
    // 0x00440AA8: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00440AAC: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00440AB0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00440AB4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00440AB8: jr          $ra
    // 0x00440ABC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00440ABC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002718D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718D0: jr          $ra
    // 0x002718D4: sw          $a1, 0x2BB4($a0)
    MEM_W(0X2BB4, ctx->r4) = ctx->r5;
    return;
    // 0x002718D4: sw          $a1, 0x2BB4($a0)
    MEM_W(0X2BB4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_004162E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004162E4: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x004162E8: beq         $v1, $zero, L_004162F4
    if (ctx->r3 == 0) {
        // 0x004162EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004162F4;
    }
    // 0x004162EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004162F0: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
L_004162F4:
    // 0x004162F4: jr          $ra
    // 0x004162F8: nop

    return;
    // 0x004162F8: nop

;}
RECOMP_FUNC void func_00424B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424B90: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00424B94: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA30);
    // 0x00424B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00424B9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00424BA0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00424BA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00424BA8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00424BAC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00424BB0: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x00424BB4: beq         $v0, $zero, L_00424BD4
    if (ctx->r2 == 0) {
        // 0x00424BB8: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_00424BD4;
    }
    // 0x00424BB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00424BBC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00424BC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424BC4: addu        $at, $at, $v0
    gpr jr_addend_00424BCC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00424BC8: lw          $v0, 0x1770($at)
    ctx->r2 = ADD32(ctx->r1, 0X1770);
    // 0x00424BCC: jr          $v0
    // 0x00424BD0: nop

    switch (jr_addend_00424BCC >> 2) {
        case 0: goto L_00424BD4; break;
        case 1: goto L_00424BD4; break;
        case 2: goto L_00424BE4; break;
        case 3: goto L_00424C18; break;
        case 4: goto L_00424C4C; break;
        case 5: goto L_00424C80; break;
        case 6: goto L_00424CB4; break;
        case 7: goto L_00424CE8; break;
        default: switch_error(__func__, 0x00424BCC, 0x800C1770);
    }
    // 0x00424BD0: nop

L_00424BD4:
    // 0x00424BD4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424BD8: addiu       $v0, $v0, 0x438C
    ctx->r2 = ADD32(ctx->r2, 0X438C);
    // 0x00424BDC: j           L_00424D18
    // 0x00424BE0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00424D18;
    // 0x00424BE0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00424BE4:
    // 0x00424BE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424BE8: addiu       $v0, $v0, 0x43A8
    ctx->r2 = ADD32(ctx->r2, 0X43A8);
    // 0x00424BEC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424BF0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424BF4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424BF8: jal         0x00224C08
    // 0x00424BFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_00224C08(rdram, ctx);
        goto after_0;
    // 0x00424BFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00424C00: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424C04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424C08: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424C0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424D3C;
    }
    // 0x00424C0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424C10: j           L_00424D18
    // 0x00424C14: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424D18;
    // 0x00424C14: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424C18:
    // 0x00424C18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424C1C: addiu       $v0, $v0, 0x43FC
    ctx->r2 = ADD32(ctx->r2, 0X43FC);
    // 0x00424C20: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424C24: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424C28: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424C2C: jal         0x00224C08
    // 0x00424C30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_00224C08(rdram, ctx);
        goto after_1;
    // 0x00424C30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x00424C34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424C38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424C3C: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424C40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00424D3C;
    }
    // 0x00424C40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00424C44: j           L_00424D18
    // 0x00424C48: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424D18;
    // 0x00424C48: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424C4C:
    // 0x00424C4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424C50: addiu       $v0, $v0, 0x4454
    ctx->r2 = ADD32(ctx->r2, 0X4454);
    // 0x00424C54: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424C58: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424C5C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424C60: jal         0x00224C08
    // 0x00424C64: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00224C08(rdram, ctx);
        goto after_2;
    // 0x00424C64: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x00424C68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424C70: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424C74: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00424D3C;
    }
    // 0x00424C74: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00424C78: j           L_00424D18
    // 0x00424C7C: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424D18;
    // 0x00424C7C: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424C80:
    // 0x00424C80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424C84: addiu       $v0, $v0, 0x44B4
    ctx->r2 = ADD32(ctx->r2, 0X44B4);
    // 0x00424C88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424C8C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424C90: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424C94: jal         0x00224C08
    // 0x00424C98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_00224C08(rdram, ctx);
        goto after_3;
    // 0x00424C98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x00424C9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424CA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424CA4: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424CA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424D3C;
    }
    // 0x00424CA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424CAC: j           L_00424D18
    // 0x00424CB0: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424D18;
    // 0x00424CB0: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424CB4:
    // 0x00424CB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424CB8: addiu       $v0, $v0, 0x44E8
    ctx->r2 = ADD32(ctx->r2, 0X44E8);
    // 0x00424CBC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424CC0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424CC4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424CC8: jal         0x00224C08
    // 0x00424CCC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_00224C08(rdram, ctx);
        goto after_4;
    // 0x00424CCC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x00424CD0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424CD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424CD8: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424CDC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424D3C;
    }
    // 0x00424CDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424CE0: j           L_00424D18
    // 0x00424CE4: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424D18;
    // 0x00424CE4: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424CE8:
    // 0x00424CE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424CEC: addiu       $v0, $v0, 0x454C
    ctx->r2 = ADD32(ctx->r2, 0X454C);
    // 0x00424CF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424CF4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424CF8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424CFC: jal         0x00224C08
    // 0x00424D00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00224C08(rdram, ctx);
        goto after_5;
    // 0x00424D00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x00424D04: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424D08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424D0C: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424D10: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00424D3C;
    }
    // 0x00424D10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00424D14: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424D18:
    // 0x00424D18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424D1C: beq         $s0, $v0, L_00424D3C
    if (ctx->r16 == ctx->r2) {
        // 0x00424D20: nop
    
            goto L_00424D3C;
    }
    // 0x00424D20: nop

    // 0x00424D24: jal         0x004160F0
    // 0x00424D28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004160F0(rdram, ctx);
        goto after_6;
    // 0x00424D28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00424D2C: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x00424D30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00424D34: addiu       $v1, $s0, 0x30
    ctx->r3 = ADD32(ctx->r16, 0X30);
    // 0x00424D38: sb          $v1, -0x6($v0)
    MEM_B(-0X6, ctx->r2) = ctx->r3;
L_00424D3C:
    // 0x00424D3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00424D40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00424D44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00424D4C: jr          $ra
    // 0x00424D50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00424D50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00443FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00443FD0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00443FD4: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00443FD8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00443FDC: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00443FE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00443FE4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00443FE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00443FEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00443FF0: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00443FF4: jal         0x00246108
    // 0x00443FF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00443FF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00443FFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444000: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444004: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444008: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0044400C: jal         0x00245BAC
    // 0x00444010: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444010: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444014: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444018: beq         $v0, $zero, L_0044402C
    if (ctx->r2 == 0) {
        // 0x0044401C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044402C;
    }
    // 0x0044401C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444020: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444024: jal         0x00243414
    // 0x00444028: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444028: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_0044402C:
    // 0x0044402C: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444030: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444034: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444038: jr          $ra
    // 0x0044403C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0044403C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002982E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002982E8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x002982EC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // turok2: reconnected split function: a stray ELF symbol at 0x002982F0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002982F0(rdram, ctx);
;}
RECOMP_FUNC void func_00289494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
        turok2_patch_skip_pak_screen(rdram, ctx);

    // 0x00289494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289498: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0028949C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x002894A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002894A4: jal         0x00288D3C
    // 0x002894A8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00288D3C(rdram, ctx);
        goto after_0;
    // 0x002894A8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_0:
    // 0x002894AC: beq         $v0, $zero, L_002894BC
    if (ctx->r2 == 0) {
        // 0x002894B0: nop
    
            goto L_002894BC;
    }
    // 0x002894B0: nop

    // 0x002894B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002894B8: sw          $zero, 0x6D68($at)
    MEM_W(0X6D68, ctx->r1) = 0;
L_002894BC:
    // 0x002894BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002894C0: jr          $ra
    // 0x002894C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002894C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E2AC: jr          $ra
    // 0x0040E2B0: nop

    return;
    // 0x0040E2B0: nop

;}
RECOMP_FUNC void func_002156FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002156FC: lbu         $v1, 0x195($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X195);
    // 0x00215700: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00215704: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x00215708: beq         $v1, $v0, L_002157E8
    if (ctx->r3 == ctx->r2) {
        // 0x0021570C: nop
    
            goto L_002157E8;
    }
    // 0x0021570C: nop

    // 0x00215710: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00215714: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00215718: bne         $v0, $zero, L_002157E8
    if (ctx->r2 != 0) {
        // 0x0021571C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_002157E8;
    }
    // 0x0021571C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00215720: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00215724: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00215728: bne         $v1, $v0, L_00215748
    if (ctx->r3 != ctx->r2) {
        // 0x0021572C: nop
    
            goto L_00215748;
    }
    // 0x0021572C: nop

    // 0x00215730: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00215734: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00215738: lwc1        $f1, 0x20($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X20);
    // 0x0021573C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00215740: j           L_002157B8
    // 0x00215744: swc1        $f0, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f0.u32l;
        goto L_002157B8;
    // 0x00215744: swc1        $f0, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f0.u32l;
L_00215748:
    // 0x00215748: lhu         $v0, 0x16C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16C);
    // 0x0021574C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00215750: beq         $v0, $zero, L_002157B8
    if (ctx->r2 == 0) {
        // 0x00215754: nop
    
            goto L_002157B8;
    }
    // 0x00215754: nop

    // 0x00215758: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021575C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00215760: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215764: lwc1        $f1, 0x5880($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5880);
    // 0x00215768: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021576C: lwc1        $f1, 0x170($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X170);
    // 0x00215770: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00215774: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215778: lwc1        $f0, 0x5884($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5884);
    // 0x0021577C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00215780: nop

    // 0x00215784: bc1f        L_002157A0
    if (!c1cs) {
        // 0x00215788: swc1        $f1, 0x170($a0)
        MEM_W(0X170, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_002157A0;
    }
    // 0x00215788: swc1        $f1, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021578C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215790: lwc1        $f0, 0x5888($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5888);
    // 0x00215794: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00215798: j           L_002157B8
    // 0x0021579C: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
        goto L_002157B8;
    // 0x0021579C: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
L_002157A0:
    // 0x002157A0: lhu         $v0, 0x16C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16C);
    // 0x002157A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002157A8: lwc1        $f0, 0x588C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X588C);
    // 0x002157AC: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x002157B0: sh          $v0, 0x16C($a0)
    MEM_H(0X16C, ctx->r4) = ctx->r2;
    // 0x002157B4: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
L_002157B8:
    // 0x002157B8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002157BC: beq         $v0, $zero, L_002157D0
    if (ctx->r2 == 0) {
        // 0x002157C0: nop
    
            goto L_002157D0;
    }
    // 0x002157C0: nop

    // 0x002157C4: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x002157C8: j           L_002157DC
    // 0x002157CC: sw          $v0, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r2;
        goto L_002157DC;
    // 0x002157CC: sw          $v0, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r2;
L_002157D0:
    // 0x002157D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002157D4: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x002157D8: sw          $v0, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r2;
L_002157DC:
    // 0x002157DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002157E0: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x002157E4: sb          $v0, 0x195($a0)
    MEM_B(0X195, ctx->r4) = ctx->r2;
L_002157E8:
    // 0x002157E8: jr          $ra
    // 0x002157EC: nop

    return;
    // 0x002157EC: nop

;}
RECOMP_FUNC void func_00266A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266A04: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00266A08: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266A0C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266A10: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00266A14: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x00266A18: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x00266A1C: jal         0x002245BC
    // 0x00266A20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x00266A20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00266A24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00266A28: jr          $ra
    // 0x00266A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002660D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002660D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002660D4: addiu       $v0, $v0, 0x2410
    ctx->r2 = ADD32(ctx->r2, 0X2410);
    // 0x002660D8: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x002660DC: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002660E0: addiu       $v0, $v0, 0x609C
    ctx->r2 = ADD32(ctx->r2, 0X609C);
    // 0x002660E4: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x002660E8: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002660EC: addiu       $v0, $v0, 0x6570
    ctx->r2 = ADD32(ctx->r2, 0X6570);
    // 0x002660F0: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x002660F4: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x002660F8: sw          $zero, 0x110($a1)
    MEM_W(0X110, ctx->r5) = 0;
    // 0x002660FC: sw          $zero, 0x114($a1)
    MEM_W(0X114, ctx->r5) = 0;
    // 0x00266100: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00266104: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00266108: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0026610C: beq         $v0, $zero, L_00266128
    if (ctx->r2 == 0) {
            // 0x00266110: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    func_00266128(rdram, ctx);
    return;
    }
    // 0x00266110: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x00266114: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00266118: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0026611C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00266120: jr          $ra
    // 0x00266124: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x00266124: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002189EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002189EC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002189F0: add.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x002189F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002189F8: lwc1        $f1, 0x5A08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A08);
    // 0x002189FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00218A00: lwc1        $f2, 0x5A0C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5A0C);
    // 0x00218A04: c.le.s      $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f1.fl <= ctx->f12.fl;
    // 0x00218A08: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00218A0C: bc1f        L_00218A1C
    if (!c1cs) {
            // 0x00218A10: add.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f2.fl;
    func_00218A1C(rdram, ctx);
    return;
    }
    // 0x00218A10: add.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00218A14: jr          $ra
    // 0x00218A18: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00218A18: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00256EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256EC8: jr          $ra
    // 0x00256ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00256ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0045CAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042F514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F514: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042F518: addiu       $a0, $a0, 0x56B0
    ctx->r4 = ADD32(ctx->r4, 0X56B0);
    // 0x0042F51C: lw          $v0, 0x1C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C8);
    // 0x0042F520: beq         $v0, $zero, L_0042F56C
    if (ctx->r2 == 0) {
        // 0x0042F524: addiu       $v0, $a0, 0x1CC
        ctx->r2 = ADD32(ctx->r4, 0X1CC);
            goto L_0042F56C;
    }
    // 0x0042F524: addiu       $v0, $a0, 0x1CC
    ctx->r2 = ADD32(ctx->r4, 0X1CC);
    // 0x0042F528: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
    // 0x0042F52C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042F530: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0042F534: addiu       $a1, $a0, 0x34C
    ctx->r5 = ADD32(ctx->r4, 0X34C);
L_0042F538:
    // 0x0042F538: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0042F53C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x0042F540: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x0042F544: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x0042F548: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0042F54C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x0042F550: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x0042F554: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    // 0x0042F558: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0042F55C: bne         $v0, $a1, L_0042F538
    if (ctx->r2 != ctx->r5) {
        // 0x0042F560: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042F538;
    }
    // 0x0042F560: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042F564: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0042F568: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
L_0042F56C:
    // 0x0042F56C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x0042F570: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0042F574: jr          $ra
    // 0x0042F578: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x0042F578: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0045B60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B60C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045B610: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B614: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B618: jr          $ra
    // 0x0045B61C: nop

    return;
    // 0x0045B61C: nop

;}
RECOMP_FUNC void func_00422124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00422128: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042212C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422130: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x00422134: beq         $v0, $zero, L_00422160
    if (ctx->r2 == 0) {
        // 0x00422138: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_00422160;
    }
    // 0x00422138: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0042213C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00422140: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00422144: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00422148: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x0042214C: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x00422150: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00422154: addiu       $a1, $a1, -0x4910
    ctx->r5 = ADD32(ctx->r5, -0X4910);
    // 0x00422158: j           L_00422178
    // 0x0042215C: nop

        goto L_00422178;
    // 0x0042215C: nop

L_00422160:
    // 0x00422160: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00422164: lw          $a1, 0x24($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X24);
    // 0x00422168: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x0042216C: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x00422170: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00422174: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00422178:
    // 0x00422178: jal         0x00416644
    // 0x0042217C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042217C: nop

    after_0:
    // 0x00422180: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00422184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00422188: jr          $ra
    // 0x0042218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00285CF0(uint8_t* rdram, recomp_context* ctx) {
    // turok2: the ELF symbol for this function was at 0x00285CE8,
    // 8 bytes ahead of its prologue, so the address the game calls
    // was missing from the function table. The 2 instruction(s)
    // that used to open the body stored through the caller's frame and
    // belong to the code before this function.
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285CF0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00285CF4: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x00285CF8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00285CFC: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00285D00: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00285D04: addiu       $s2, $s2, 0x7078
    ctx->r18 = ADD32(ctx->r18, 0X7078);
    // 0x00285D08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00285D0C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x00285D10: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x00285D14: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00285D18: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00285D1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285D20: sw          $zero, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = 0;
    // 0x00285D24: jal         0x00224180
    // 0x00285D28: addiu       $a1, $zero, 0xE10
    ctx->r5 = ADD32(0, 0XE10);
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00285D28: addiu       $a1, $zero, 0xE10
    ctx->r5 = ADD32(0, 0XE10);
    after_0:
    // 0x00285D2C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00285D30: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x00285D34: beq         $s0, $s3, L_00285E40
    if (ctx->r16 == ctx->r19) {
        // 0x00285D38: nop
    
            goto L_00285E40;
    }
    // 0x00285D38: nop

    // 0x00285D3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00285D40: addiu       $a0, $a0, -0x6710
    ctx->r4 = ADD32(ctx->r4, -0X6710);
    // 0x00285D44: jal         0x0027E000
    // 0x00285D48: nop

    func_0027E000(rdram, ctx);
        goto after_1;
    // 0x00285D48: nop

    after_1:
    // 0x00285D4C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00285D50: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x00285D54: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    // 0x00285D58: jal         0x0020FC24
    // 0x00285D5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0020FC24(rdram, ctx);
        goto after_2;
    // 0x00285D5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00285D60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00285D64: addu        $at, $s4, $at
    ctx->r1 = ADD32(ctx->r20, ctx->r1);
    // 0x00285D68: lwc1        $f1, 0x3FD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FD0);
    // 0x00285D6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285D70: lwc1        $f0, -0x6300($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6300);
    // 0x00285D74: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00285D78: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00285D7C: jal         0x00210894
    // 0x00285D80: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210894(rdram, ctx);
        goto after_3;
    // 0x00285D80: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x00285D84: jal         0x00210C3C
    // 0x00285D88: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210C3C(rdram, ctx);
        goto after_4;
    // 0x00285D88: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x00285D8C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00285D90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00285D94: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00285D98: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00285D9C: addiu       $s1, $s1, 0x67C0
    ctx->r17 = ADD32(ctx->r17, 0X67C0);
    // 0x00285DA0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00285DA4: jal         0x0020D274
    // 0x00285DA8: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_0020D274(rdram, ctx);
        goto after_5;
    // 0x00285DA8: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_5:
    // 0x00285DAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00285DB0: jal         0x00224F84
    // 0x00285DB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00224F84(rdram, ctx);
        goto after_6;
    // 0x00285DB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00285DB8: jal         0x0020B5D4
    // 0x00285DBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0020B5D4(rdram, ctx);
        goto after_7;
    // 0x00285DBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00285DC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00285DC4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00285DC8: addiu       $a2, $a2, -0x4F18
    ctx->r6 = ADD32(ctx->r6, -0X4F18);
    // 0x00285DCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00285DD0: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00285DD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00285DD8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00285DDC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00285DE0: jal         0x0020B7F8
    // 0x00285DE4: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_0020B7F8(rdram, ctx);
        goto after_8;
    // 0x00285DE4: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_8:
    // 0x00285DE8: jal         0x0020B624
    // 0x00285DEC: nop

    func_0020B624(rdram, ctx);
        goto after_9;
    // 0x00285DEC: nop

    after_9:
    // 0x00285DF0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00285DF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00285DF8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00285DFC: addiu       $a2, $a2, 0x36F4
    ctx->r6 = ADD32(ctx->r6, 0X36F4);
    // 0x00285E00: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00285E04: lw          $a3, 0x2030($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2030);
    // 0x00285E08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285E0C: lwc1        $f0, -0x62FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62FC);
    // 0x00285E10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00285E14: lwc1        $f1, -0x62F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X62F8);
    // 0x00285E18: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x00285E1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00285E20: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00285E24: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00285E28: srl         $v0, $a3, 31
    ctx->r2 = S32(U32(ctx->r7) >> 31);
    // 0x00285E2C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00285E30: sra         $a3, $a3, 1
    ctx->r7 = S32(SIGNED(ctx->r7) >> 1);
    // 0x00285E34: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00285E38: jal         0x00286E14
    // 0x00285E3C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00286E14(rdram, ctx);
        goto after_10;
    // 0x00285E3C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_10:
L_00285E40:
    // 0x00285E40: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x00285E44: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x00285E48: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00285E4C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00285E50: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00285E54: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00285E58: jr          $ra
    // 0x00285E5C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00285E5C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00275520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275524: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275528: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x0027552C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275530: jal         0x00270240
    // 0x00275534: nop

    func_00270240(rdram, ctx);
        goto after_0;
    // 0x00275534: nop

    after_0:
    // 0x00275538: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027553C: jr          $ra
    // 0x00275540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264D9C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00264DA0: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00264DA4: beq         $v0, $zero, L_00264DC0
    if (ctx->r2 == 0) {
        // 0x00264DA8: nop
    
            goto L_00264DC0;
    }
    // 0x00264DA8: nop

    // 0x00264DAC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00264DB0: beq         $v0, $zero, L_00264DC0
    if (ctx->r2 == 0) {
        // 0x00264DB4: nop
    
            goto L_00264DC0;
    }
    // 0x00264DB4: nop

    // 0x00264DB8: jalr        $v0
    // 0x00264DBC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00264DBC: nop

    after_0:
L_00264DC0:
    // 0x00264DC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264DC4: jr          $ra
    // 0x00264DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00215944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215944: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00215948: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0021594C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00215950: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00215954: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00215958: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021595C: addiu       $v0, $v0, 0x585C
    ctx->r2 = ADD32(ctx->r2, 0X585C);
    // 0x00215960: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00215964: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00215968: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021596C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00215970: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00215974: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00215978: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x0021597C: jal         0x0020367C
    // 0x00215980: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00215980: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x00215984: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00215988: bne         $s0, $zero, L_00215998
    if (ctx->r16 != 0) {
        // 0x0021598C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00215998;
    }
    // 0x0021598C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00215990: j           L_002159EC
    // 0x00215994: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_002159EC;
    // 0x00215994: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00215998:
    // 0x00215998: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0021599C: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x002159A0: jal         0x0020185C
    // 0x002159A4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x002159A4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x002159A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002159AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002159B0: jal         0x002051F4
    // 0x002159B4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x002159B4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x002159B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002159BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002159C0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x002159C4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x002159C8: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x002159CC: addiu       $v0, $v0, -0x4B50
    ctx->r2 = ADD32(ctx->r2, -0X4B50);
    // 0x002159D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002159D4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x002159D8: addiu       $v0, $v0, 0x5870
    ctx->r2 = ADD32(ctx->r2, 0X5870);
    // 0x002159DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002159E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002159E4: jal         0x0020367C
    // 0x002159E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_3;
    // 0x002159E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
L_002159EC:
    // 0x002159EC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002159F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002159F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002159F8: jr          $ra
    // 0x002159FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002159FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0040336C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040336C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00403370: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00403374: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00403378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040337C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00403380: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00403384: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00403388: addiu       $s2, $s2, -0x6790
    ctx->r18 = ADD32(ctx->r18, -0X6790);
    // 0x0040338C: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00403390: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00403394: jal         0x002535E4
    // 0x00403398: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00403398: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0040339C: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    // 0x004033A0: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x004033A4: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x004033A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004033AC: jal         0x00284204
    // 0x004033B0: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    func_00284204(rdram, ctx);
        goto after_1;
    // 0x004033B0: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    after_1:
    // 0x004033B4: beq         $v0, $zero, L_004033F4
    if (ctx->r2 == 0) {
        // 0x004033B8: nop
    
            goto L_004033F4;
    }
    // 0x004033B8: nop

    // 0x004033BC: jal         0x002532A8
    // 0x004033C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002532A8(rdram, ctx);
        goto after_2;
    // 0x004033C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x004033C4: beq         $v0, $zero, L_004033F4
    if (ctx->r2 == 0) {
        // 0x004033C8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_004033F4;
    }
    // 0x004033C8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004033CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004033D0: addiu       $v1, $s2, 0x1268
    ctx->r3 = ADD32(ctx->r18, 0X1268);
    // 0x004033D4: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
    // 0x004033D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x004033DC: sw          $v0, 0x9E8($a0)
    MEM_W(0X9E8, ctx->r4) = ctx->r2;
    // 0x004033E0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004033E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004033E8: ori         $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 | 0X6000;
    // 0x004033EC: jal         0x00248BA8
    // 0x004033F0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00248BA8(rdram, ctx);
        goto after_3;
    // 0x004033F0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_3:
L_004033F4:
    // 0x004033F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004033F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004033FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00403400: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00403404: jr          $ra
    // 0x00403408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00403408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025739C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025739C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002573A0: addiu       $v1, $v1, -0x550F
    ctx->r3 = ADD32(ctx->r3, -0X550F);
    // 0x002573A4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002573A8: bne         $v0, $zero, L_002573F4
    if (ctx->r2 != 0) {
        // 0x002573AC: nop
    
            goto L_002573F4;
    }
    // 0x002573AC: nop

    // 0x002573B0: lw          $v0, -0x51($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X51);
    // 0x002573B4: beq         $v0, $zero, L_002573CC
    if (ctx->r2 == 0) {
        // 0x002573B8: nop
    
            goto L_002573CC;
    }
    // 0x002573B8: nop

    // 0x002573BC: lw          $v0, 0xA64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA64);
    // 0x002573C0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x002573C4: bne         $v0, $zero, L_002573F4
    if (ctx->r2 != 0) {
        // 0x002573C8: nop
    
            goto L_002573F4;
    }
    // 0x002573C8: nop

L_002573CC:
    // 0x002573CC: lw          $v0, 0xA68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA68);
    // 0x002573D0: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x002573D4: beq         $v0, $zero, L_002573F4
    if (ctx->r2 == 0) {
        // 0x002573D8: nop
    
            goto L_002573F4;
    }
    // 0x002573D8: nop

    // 0x002573DC: lw          $v0, 0x12A4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X12A4);
    // 0x002573E0: beq         $v0, $zero, L_002573F0
    if (ctx->r2 == 0) {
        // 0x002573E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002573F0;
    }
    // 0x002573E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002573E8: jr          $ra
    // 0x002573EC: sw          $zero, 0x12A4($a0)
    MEM_W(0X12A4, ctx->r4) = 0;
    return;
    // 0x002573EC: sw          $zero, 0x12A4($a0)
    MEM_W(0X12A4, ctx->r4) = 0;
L_002573F0:
    // 0x002573F0: sw          $v0, 0x12A4($a0)
    MEM_W(0X12A4, ctx->r4) = ctx->r2;
L_002573F4:
    // 0x002573F4: jr          $ra
    // 0x002573F8: nop

    return;
    // 0x002573F8: nop

;}
RECOMP_FUNC void func_002A2650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2650: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002A2654: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002A2658: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002A265C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002A2660: lui         $s1, 0x8000
    ctx->r17 = S32(0X8000 << 16);
    // 0x002A2664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002A2668: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x002A266C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002A2670: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002A2674: addiu       $s3, $v0, 0x70C0
    ctx->r19 = ADD32(ctx->r2, 0X70C0);
    // 0x002A2678: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002A267C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
L_002A2680:
    // 0x002A2680: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A2684: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2688: jal         0x0029B6F0
    // 0x002A268C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002A268C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x002A2690: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x002A2694: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002A2698: beq         $v0, $zero, L_002A26E4
    if (ctx->r2 == 0) {
        // 0x002A269C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002A26E4;
    }
    // 0x002A269C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002A26A0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x002A26A4: bne         $v0, $s2, L_002A26E8
    if (ctx->r2 != ctx->r18) {
        // 0x002A26A8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002A26E8;
    }
    // 0x002A26A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A26AC: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x002A26B0: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x002A26B4: bnel        $v0, $zero, L_002A26BC
    if (ctx->r2 != 0) {
        // 0x002A26B8: sw          $zero, -0x3D00($s0)
        MEM_W(-0X3D00, ctx->r16) = 0;
            goto L_002A26BC;
    }
    goto skip_0;
    // 0x002A26B8: sw          $zero, -0x3D00($s0)
    MEM_W(-0X3D00, ctx->r16) = 0;
    skip_0:
L_002A26BC:
    // 0x002A26BC: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x002A26C0: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x002A26C4: jal         0x002A1B24
    // 0x002A26C8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    func_002A1B24(rdram, ctx);
        goto after_1;
    // 0x002A26C8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    after_1:
    // 0x002A26CC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A26D0: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x002A26D4: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x002A26D8: bnel        $v0, $zero, L_002A26E0
    if (ctx->r2 != 0) {
        // 0x002A26DC: sw          $s2, -0x3D00($s0)
        MEM_W(-0X3D00, ctx->r16) = ctx->r18;
            goto L_002A26E0;
    }
    goto skip_1;
    // 0x002A26DC: sw          $s2, -0x3D00($s0)
    MEM_W(-0X3D00, ctx->r16) = ctx->r18;
    skip_1:
L_002A26E0:
    // 0x002A26E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002A26E4:
    // 0x002A26E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002A26E8:
    // 0x002A26E8: jal         0x0029B6F0
    // 0x002A26EC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002A26EC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x002A26F0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A26F4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A26F8: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x002A26FC: jal         0x002A1350
    // 0x002A2700: ori         $a0, $a0, 0xFFE4
    ctx->r4 = ctx->r4 | 0XFFE4;
    func_002A1350(rdram, ctx);
        goto after_3;
    // 0x002A2700: ori         $a0, $a0, 0xFFE4
    ctx->r4 = ctx->r4 | 0XFFE4;
    after_3:
    // 0x002A2704: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A2708: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A270C: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x002A2710: jal         0x002A1350
    // 0x002A2714: ori         $a0, $a0, 0xFFE8
    ctx->r4 = ctx->r4 | 0XFFE8;
    func_002A1350(rdram, ctx);
        goto after_4;
    // 0x002A2714: ori         $a0, $a0, 0xFFE8
    ctx->r4 = ctx->r4 | 0XFFE8;
    after_4:
    // 0x002A2718: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A271C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2720: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x002A2724: jal         0x002A1350
    // 0x002A2728: ori         $a0, $a0, 0xFFEC
    ctx->r4 = ctx->r4 | 0XFFEC;
    func_002A1350(rdram, ctx);
        goto after_5;
    // 0x002A2728: ori         $a0, $a0, 0xFFEC
    ctx->r4 = ctx->r4 | 0XFFEC;
    after_5:
    // 0x002A272C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2730: ori         $a0, $a0, 0xFFD8
    ctx->r4 = ctx->r4 | 0XFFD8;
    // 0x002A2734: lui         $a1, 0x101
    ctx->r5 = S32(0X101 << 16);
    // 0x002A2738: jal         0x002A1350
    // 0x002A273C: ori         $a1, $a1, 0x101
    ctx->r5 = ctx->r5 | 0X101;
    func_002A1350(rdram, ctx);
        goto after_6;
    // 0x002A273C: ori         $a1, $a1, 0x101
    ctx->r5 = ctx->r5 | 0X101;
    after_6:
    // 0x002A2740: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A2744: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2748: lhu         $a1, 0xE($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XE);
    // 0x002A274C: jal         0x002A1350
    // 0x002A2750: ori         $a0, $a0, 0xFFE0
    ctx->r4 = ctx->r4 | 0XFFE0;
    func_002A1350(rdram, ctx);
        goto after_7;
    // 0x002A2750: ori         $a0, $a0, 0xFFE0
    ctx->r4 = ctx->r4 | 0XFFE0;
    after_7:
    // 0x002A2754: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002A2758: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A275C: jal         0x0029B6F0
    // 0x002A2760: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x002A2760: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x002A2764: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x002A2768: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002A276C: beq         $v0, $zero, L_002A27CC
    if (ctx->r2 == 0) {
        // 0x002A2770: nop
    
            goto L_002A27CC;
    }
    // 0x002A2770: nop

    // 0x002A2774: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x002A2778: bne         $v0, $zero, L_002A27CC
    if (ctx->r2 != 0) {
        // 0x002A277C: nop
    
            goto L_002A27CC;
    }
    // 0x002A277C: nop

    // 0x002A2780: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2784: jal         0x002A1384
    // 0x002A2788: ori         $a0, $a0, 0xFFDC
    ctx->r4 = ctx->r4 | 0XFFDC;
    func_002A1384(rdram, ctx);
        goto after_9;
    // 0x002A2788: ori         $a0, $a0, 0xFFDC
    ctx->r4 = ctx->r4 | 0XFFDC;
    after_9:
    // 0x002A278C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x002A2790: beq         $a2, $zero, L_002A27CC
    if (ctx->r6 == 0) {
        // 0x002A2794: nop
    
            goto L_002A27CC;
    }
    // 0x002A2794: nop

    // 0x002A2798: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x002A279C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x002A27A0: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x002A27A4: bnel        $v0, $zero, L_002A27AC
    if (ctx->r2 != 0) {
        // 0x002A27A8: sw          $zero, -0x3D00($s0)
        MEM_W(-0X3D00, ctx->r16) = 0;
            goto L_002A27AC;
    }
    goto skip_2;
    // 0x002A27A8: sw          $zero, -0x3D00($s0)
    MEM_W(-0X3D00, ctx->r16) = 0;
    skip_2:
L_002A27AC:
    // 0x002A27AC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x002A27B0: jal         0x002A1690
    // 0x002A27B4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    func_002A1690(rdram, ctx);
        goto after_10;
    // 0x002A27B4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    after_10:
    // 0x002A27B8: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A27BC: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x002A27C0: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x002A27C4: bnel        $v0, $zero, L_002A27CC
    if (ctx->r2 != 0) {
        // 0x002A27C8: sw          $s2, -0x3D00($s0)
        MEM_W(-0X3D00, ctx->r16) = ctx->r18;
            goto L_002A27CC;
    }
    goto skip_3;
    // 0x002A27C8: sw          $s2, -0x3D00($s0)
    MEM_W(-0X3D00, ctx->r16) = ctx->r18;
    skip_3:
L_002A27CC:
    // 0x002A27CC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002A27D0: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x002A27D4: beql        $v0, $zero, L_002A2680
    if (ctx->r2 == 0) {
        // 0x002A27D8: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_002A2680;
    }
    goto skip_4;
    // 0x002A27D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    skip_4:
    // 0x002A27DC: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A27E0: jal         0x002A1384
    // 0x002A27E4: ori         $a0, $a0, 0xFFDC
    ctx->r4 = ctx->r4 | 0XFFDC;
    func_002A1384(rdram, ctx);
        goto after_11;
    // 0x002A27E4: ori         $a0, $a0, 0xFFDC
    ctx->r4 = ctx->r4 | 0XFFDC;
    after_11:
    // 0x002A27E8: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x002A27EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002A27F0: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x002A27F4: jal         0x0029B820
    // 0x002A27F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x002A27F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x002A27FC: j           L_002A2680
    // 0x002A2800: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
        goto L_002A2680;
    // 0x002A2800: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A2808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A280C: jal         0x002A12F0
    // 0x002A2810: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002A12F0(rdram, ctx);
        goto after_13;
    // 0x002A2810: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_13:
    // 0x002A2814: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x002A2818: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002A281C: sw          $v1, -0x3CFC($a0)
    MEM_W(-0X3CFC, ctx->r4) = ctx->r3;
    // 0x002A2820: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    // 0x002A2824: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A2828: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A282C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002A2830: jal         0x002A259C
    // 0x002A2834: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_002A259C(rdram, ctx);
        goto after_14;
    // 0x002A2834: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_14:
    // 0x002A2838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A283C: jal         0x002A1324
    // 0x002A2840: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002A1324(rdram, ctx);
        goto after_15;
    // 0x002A2840: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_15:
    // 0x002A2844: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002A2848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A284C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A2850: jr          $ra
    // 0x002A2854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A2854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002860A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002860A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002860A8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002860AC: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x002860B0: lw          $s2, 0x6CA0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X6CA0);
    // 0x002860B4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x002860B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002860BC: lwc1        $f20, -0xEE0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0XEE0);
    // 0x002860C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002860C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002860C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002860CC: sdc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X48, ctx->r29);
    // 0x002860D0: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x002860D4: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x002860D8: jal         0x00277F6C
    // 0x002860DC: nop

    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x002860DC: nop

    after_0:
    // 0x002860E0: jal         0x0027845C
    // 0x002860E4: nop

    func_0027845C(rdram, ctx);
        goto after_1;
    // 0x002860E4: nop

    after_1:
    // 0x002860E8: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x002860EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002860F0: lwc1        $f23, -0x62F0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X62F0);
    // 0x002860F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002860F8: lwc1        $f12, -0x62EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X62EC);
    // 0x002860FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286100: lwc1        $f22, -0x62E8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X62E8);
    // 0x00286104: jal         0x0027B0C0
    // 0x00286108: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_0027B0C0(rdram, ctx);
        goto after_2;
    // 0x00286108: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_2:
    // 0x0028610C: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
L_00286110:
    // 0x00286110: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286114: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00286118: lw          $s1, 0x66DC($at)
    ctx->r17 = MEM_W(ctx->r1, 0X66DC);
    // 0x0028611C: beq         $s1, $zero, L_00286250
    if (ctx->r17 == 0) {
        // 0x00286120: nop
    
            goto L_00286250;
    }
    // 0x00286120: nop

    // 0x00286124: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
    // 0x00286128: nop

    // 0x0028612C: bc1t        L_00286168
    if (c1cs) {
        // 0x00286130: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_00286168;
    }
    // 0x00286130: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x00286134: c.lt.s      $f23, $f20
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f23.fl < ctx->f20.fl;
    // 0x00286138: nop

    // 0x0028613C: bc1t        L_00286160
    if (c1cs) {
        // 0x00286140: nop
    
            goto L_00286160;
    }
    // 0x00286140: nop

    // 0x00286144: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
    // 0x00286148: nop

    // 0x0028614C: bc1t        L_00286168
    if (c1cs) {
        // 0x00286150: nop
    
            goto L_00286168;
    }
    // 0x00286150: nop

    // 0x00286154: mul.s       $f0, $f20, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f23.fl);
    // 0x00286158: j           L_00286168
    // 0x0028615C: nop

        goto L_00286168;
    // 0x0028615C: nop

L_00286160:
    // 0x00286160: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286164: lwc1        $f0, -0x62E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62E4);
L_00286168:
    // 0x00286168: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0028616C: nop

    // 0x00286170: bc1tl       L_00286178
    if (c1cs) {
        // 0x00286174: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_00286178;
    }
    goto skip_0;
    // 0x00286174: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    skip_0:
L_00286178:
    // 0x00286178: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0028617C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00286180: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00286184: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00286188: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x0028618C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00286190: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00286194: jal         0x0027B094
    // 0x00286198: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_0027B094(rdram, ctx);
        goto after_3;
    // 0x00286198: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_3:
    // 0x0028619C: c.le.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl <= ctx->f20.fl;
    // 0x002861A0: nop

    // 0x002861A4: bc1f        L_0028624C
    if (!c1cs) {
        // 0x002861A8: lui         $a3, 0xE6C2
        ctx->r7 = S32(0XE6C2 << 16);
            goto L_0028624C;
    }
    // 0x002861A8: lui         $a3, 0xE6C2
    ctx->r7 = S32(0XE6C2 << 16);
    // 0x002861AC: ori         $a3, $a3, 0xB449
    ctx->r7 = ctx->r7 | 0XB449;
    // 0x002861B0: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x002861B4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002861B8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x002861BC: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x002861C0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x002861C4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002861C8: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x002861CC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x002861D0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x002861D4: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002861D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002861DC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x002861E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002861E4: lwc1        $f1, -0x62E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X62E0);
    // 0x002861E8: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x002861EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002861F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002861F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002861F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002861FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00286200: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00286204: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00286208: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0028620C: mfhi        $t0
    ctx->r8 = hi;
    // 0x00286210: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x00286214: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00286218: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x0028621C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x00286220: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286224: lwc1        $f0, -0x62DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62DC);
    // 0x00286228: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0028622C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00286230: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00286234: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00286238: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x0028623C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00286240: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00286244: jal         0x0027B274
    // 0x00286248: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0027B274(rdram, ctx);
        goto after_4;
    // 0x00286248: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_4:
L_0028624C:
    // 0x0028624C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00286250:
    // 0x00286250: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286254: lwc1        $f0, -0x62D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62D8);
    // 0x00286258: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0028625C: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x00286260: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00286264: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00286268: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x0028626C: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00286270: nop

    // 0x00286274: bc1t        L_00286110
    if (c1cs) {
        // 0x00286278: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_00286110;
    }
    // 0x00286278: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x0028627C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00286280: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00286284: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00286288: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028628C: ldc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X48);
    // 0x00286290: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x00286294: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00286298: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0028629C: jr          $ra
    // 0x002862A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002862A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004529EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004529EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004529F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004529F4: jal         0x00275F7C
    // 0x004529F8: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x004529F8: nop

    after_0:
    // 0x004529FC: jal         0x00275E1C
    // 0x00452A00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275E1C(rdram, ctx);
        goto after_1;
    // 0x00452A00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00452A04: jal         0x00275A74
    // 0x00452A08: nop

    func_00275A74(rdram, ctx);
        goto after_2;
    // 0x00452A08: nop

    after_2:
    // 0x00452A0C: jal         0x00275ABC
    // 0x00452A10: nop

    func_00275ABC(rdram, ctx);
        goto after_3;
    // 0x00452A10: nop

    after_3:
    // 0x00452A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452A1C: jr          $ra
    // 0x00452A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040C584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C584: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040C588: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040C58C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040C590: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040C594: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0040C598: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040C59C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040C5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040C5A4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040C5A8: jal         0x00246108
    // 0x0040C5AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040C5AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040C5B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040C5B4: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040C5B8: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040C5BC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040C5C0: jal         0x00245BAC
    // 0x0040C5C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040C5C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0040C5C8: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040C5CC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040C5D0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040C5D4: jr          $ra
    // 0x0040C5D8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040C5D8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
