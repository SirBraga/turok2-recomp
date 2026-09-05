#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0045ED94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00425F54:
    // 0x0045ED94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_00425F58:
    // 0x0045ED98: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0045ED9C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0045EDA0: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0045EDA4: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0045EDA8: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x0045EDAC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045EDB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045EDB4: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x0045EDB8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0045EDBC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0045EDC0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0045EDC4: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0045EDC8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0045EDCC: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x0045EDD0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0045EDD4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0045EDD8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045EDDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045EDE0: beq         $v0, $v1, L_0045EDF0
    if (ctx->r2 == ctx->r3) {
        // 0x0045EDE4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0045EDF0;
    }
    // 0x0045EDE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045EDE8: j           L_00425F58
    // 0x0045EDEC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00425F58(rdram, ctx);
    return;
    // 0x0045EDEC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045EDF0:
    // 0x0045EDF0: sll         $v0, $s3, 7
    ctx->r2 = S32(ctx->r19 << 7);
    // 0x0045EDF4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0045EDF8: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x0045EDFC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045EE00: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x0045EE04: sll         $s2, $s4, 5
    ctx->r18 = S32(ctx->r20 << 5);
    // 0x0045EE08: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x0045EE0C: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x0045EE10: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0045EE14: bne         $v0, $zero, L_0045EE24
    if (ctx->r2 != 0) {
        // 0x0045EE18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045EE24;
    }
    // 0x0045EE18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045EE1C: j           L_00425F54
    // 0x0045EE20: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    entry_00425F54(rdram, ctx);
    return;
    // 0x0045EE20: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_0045EE24:
    // 0x0045EE24: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0045EE28: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0045EE2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045EE30: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0045EE34: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0045EE38: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0045EE3C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x0045EE40: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0045EE44: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x0045EE48: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x0045EE4C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0045EE50: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045EE54: lw          $a1, 0x2224($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2224);
    // 0x0045EE58: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
    // 0x0045EE5C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x0045EE60: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0045EE64: jal         0x0029E460
    // 0x0045EE68: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x0045EE68: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_0:
    // 0x0045EE6C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0045EE70: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045EE74: lw          $a1, 0x2224($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2224);
    // 0x0045EE78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0045EE7C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x0045EE80: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0045EE84: jal         0x0029E460
    // 0x0045EE88: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    func_0029E460(rdram, ctx);
        goto after_1;
    // 0x0045EE88: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    after_1:
    // 0x0045EE8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045EE90: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x0045EE94: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045EE98: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0045EE9C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x0045EEA0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0045EEA4: addu        $s0, $s2, $v0
    ctx->r16 = ADD32(ctx->r18, ctx->r2);
    // 0x0045EEA8: addiu       $s0, $s0, 0x12
    ctx->r16 = ADD32(ctx->r16, 0X12);
L_0045EEAC:
    // 0x0045EEAC: addu        $v1, $s0, $a0
    ctx->r3 = ADD32(ctx->r16, ctx->r4);
    // 0x0045EEB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045EEB4: sltiu       $v0, $v0, 0x42
    ctx->r2 = ctx->r2 < 0X42 ? 1 : 0;
    // 0x0045EEB8: beql        $v0, $zero, L_0045EED4
    if (ctx->r2 == 0) {
        // 0x0045EEBC: sb          $a1, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r5;
            goto L_0045EED4;
    }
    goto skip_0;
    // 0x0045EEBC: sb          $a1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r5;
    skip_0:
    // 0x0045EEC0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045EEC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045EEC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045EECC: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x0045EED0: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_0045EED4:
    // 0x0045EED4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045EED8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x0045EEDC: bne         $v0, $zero, L_0045EEAC
    if (ctx->r2 != 0) {
        // 0x0045EEE0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0045EEAC;
    }
    // 0x0045EEE0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0045EEE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045EEE8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    // 0x0045EEEC: sll         $v0, $s4, 5
    ctx->r2 = S32(ctx->r20 << 5);
    // 0x0045EEF0: sll         $v1, $s3, 7
    ctx->r3 = S32(ctx->r19 << 7);
    // 0x0045EEF4: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x0045EEF8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045EEFC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045EF00: lw          $a0, 0x2224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2224);
    // 0x0045EF04: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x0045EF08: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0045EF0C: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x0045EF10: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
L_0045EF14:
    // 0x0045EF14: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x0045EF18: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045EF1C: sltiu       $v0, $v0, 0x42
    ctx->r2 = ctx->r2 < 0X42 ? 1 : 0;
    // 0x0045EF20: beql        $v0, $zero, L_0045EF3C
    if (ctx->r2 == 0) {
        // 0x0045EF24: sb          $a3, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r7;
            goto L_0045EF3C;
    }
    goto skip_1;
    // 0x0045EF24: sb          $a3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r7;
    skip_1:
    // 0x0045EF28: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045EF2C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045EF30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045EF34: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x0045EF38: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_0045EF3C:
    // 0x0045EF3C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0045EF40: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x0045EF44: bne         $v0, $zero, L_0045EF14
    if (ctx->r2 != 0) {
        // 0x0045EF48: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0045EF14;
    }
    // 0x0045EF48: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045EF4C: sb          $zero, 0x4($s6)
    MEM_B(0X4, ctx->r22) = 0;
    // 0x0045EF50: sb          $zero, 0x2($s7)
    MEM_B(0X2, ctx->r23) = 0;
    // 0x0045EF54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045EF58: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0045EF5C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0045EF60: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0045EF64: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0045EF68: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0045EF6C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0045EF70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045EF74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045EF78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045EF7C: jr          $ra
    // 0x0045EF80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0045EF80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029E220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E220: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x0029E224: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x0029E228: jr          $ra
    // 0x0029E22C: nop

    return;
    // 0x0029E22C: nop

;}
RECOMP_FUNC void func_00268160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268160: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00268164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268168: bne         $v1, $v0, L_00268188
    if (ctx->r3 != ctx->r2) {
        // 0x0026816C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00268188;
    }
    // 0x0026816C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00268170: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00268174: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00268178: beq         $v0, $zero, L_00268188
    if (ctx->r2 == 0) {
        // 0x0026817C: nop
    
            goto L_00268188;
    }
    // 0x0026817C: nop

L_00268180:
    // 0x00268180: jr          $ra
    // 0x00268184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00268184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00268188:
    // 0x00268188: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026818C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00268190: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00268194: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x00268198: beq         $v0, $zero, L_002681B4
    if (ctx->r2 == 0) {
        // 0x0026819C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002681B4;
    }
    // 0x0026819C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002681A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002681A4: addu        $at, $at, $v0
    gpr jr_addend_002681AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002681A8: lw          $v0, 0x7E38($at)
    ctx->r2 = ADD32(ctx->r1, 0X7E38);
    // 0x002681AC: jr          $v0
    // 0x002681B0: nop

    switch (jr_addend_002681AC >> 2) {
        case 0: goto L_00268180; break;
        case 1: goto L_00268180; break;
        case 2: goto L_002681B4; break;
        case 3: goto L_002681B4; break;
        case 4: goto L_00268180; break;
        case 5: goto L_002681B4; break;
        case 6: goto L_002681B4; break;
        case 7: goto L_00268180; break;
        case 8: goto L_00268180; break;
        default: switch_error(__func__, 0x002681AC, 0x800A7E38);
    }
    // 0x002681B0: nop

L_002681B4:
    // 0x002681B4: jr          $ra
    // 0x002681B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002681B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00279AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00279AC4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00279AC8: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x00279ACC: lui         $t2, 0xF590
    ctx->r10 = S32(0XF590 << 16);
    // 0x00279AD0: ori         $t2, $t2, 0x100
    ctx->r10 = ctx->r10 | 0X100;
    // 0x00279AD4: lui         $t1, 0x701
    ctx->r9 = S32(0X701 << 16);
    // 0x00279AD8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00279ADC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00279AE0: ori         $t1, $t1, 0x4050
    ctx->r9 = ctx->r9 | 0X4050;
    // 0x00279AE4: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x00279AE8: addu        $t7, $a2, $zero
    ctx->r15 = ADD32(ctx->r6, 0);
    // 0x00279AEC: addu        $t8, $a3, $zero
    ctx->r24 = ADD32(ctx->r7, 0);
    // 0x00279AF0: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x00279AF4: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x00279AF8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00279AFC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x00279B00: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x00279B04: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x00279B08: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x00279B0C: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00279B10: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00279B14: addu        $t4, $t3, $zero
    ctx->r12 = ADD32(ctx->r11, 0);
    // 0x00279B18: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00279B1C: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x00279B20: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x00279B24: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00279B28: addiu       $t0, $v1, 0x10
    ctx->r8 = ADD32(ctx->r3, 0X10);
    // 0x00279B2C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00279B30: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00279B34: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x00279B38: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00279B3C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00279B40: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00279B44: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00279B48: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00279B4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00279B50: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00279B54: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    // 0x00279B58: bgez        $t3, L_00279B64
    if (SIGNED(ctx->r11) >= 0) {
        // 0x00279B5C: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_00279B64;
    }
    // 0x00279B5C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00279B60: addiu       $t4, $t3, 0xF
    ctx->r12 = ADD32(ctx->r11, 0XF);
L_00279B64:
    // 0x00279B64: sra         $a0, $t4, 4
    ctx->r4 = S32(SIGNED(ctx->r12) >> 4);
    // 0x00279B68: blez        $a0, L_00279B74
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00279B6C: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_00279B74;
    }
    // 0x00279B6C: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x00279B70: addiu       $a1, $a0, 0x7FF
    ctx->r5 = ADD32(ctx->r4, 0X7FF);
L_00279B74:
    // 0x00279B74: mult        $t3, $t6
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279B78: mflo        $s1
    ctx->r17 = lo;
    // 0x00279B7C: addiu       $v0, $s1, 0x3
    ctx->r2 = ADD32(ctx->r17, 0X3);
    // 0x00279B80: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x00279B84: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00279B88: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x00279B8C: beql        $v0, $zero, L_00279B94
    if (ctx->r2 == 0) {
        // 0x00279B90: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_00279B94;
    }
    goto skip_0;
    // 0x00279B90: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_0:
L_00279B94:
    // 0x00279B94: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00279B98: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279B9C: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x00279BA0: blez        $a0, L_00279BE4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00279BA4: or          $a2, $v0, $v1
        ctx->r6 = ctx->r2 | ctx->r3;
            goto L_00279BE4;
    }
    // 0x00279BA4: or          $a2, $v0, $v1
    ctx->r6 = ctx->r2 | ctx->r3;
    // 0x00279BA8: div         $zero, $a1, $a0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r4)));
    // 0x00279BAC: bne         $a0, $zero, L_00279BB8
    if (ctx->r4 != 0) {
        // 0x00279BB0: nop
    
            goto L_00279BB8;
    }
    // 0x00279BB0: nop

    // 0x00279BB4: break       7
    do_break(2595764);
L_00279BB8:
    // 0x00279BB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00279BBC: bne         $a0, $at, L_00279BD0
    if (ctx->r4 != ctx->r1) {
        // 0x00279BC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00279BD0;
    }
    // 0x00279BC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00279BC4: bne         $a1, $at, L_00279BD0
    if (ctx->r5 != ctx->r1) {
        // 0x00279BC8: nop
    
            goto L_00279BD0;
    }
    // 0x00279BC8: nop

    // 0x00279BCC: break       6
    do_break(2595788);
L_00279BD0:
    // 0x00279BD0: mflo        $v0
    ctx->r2 = lo;
    // 0x00279BD4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279BD8: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00279BDC: j           L_00279BF0
    // 0x00279BE0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
        goto L_00279BF0;
    // 0x00279BE0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_00279BE4:
    // 0x00279BE4: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    // 0x00279BE8: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00279BEC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_00279BF0:
    // 0x00279BF0: lui         $a2, 0xF580
    ctx->r6 = S32(0XF580 << 16);
    // 0x00279BF4: ori         $a2, $a2, 0x100
    ctx->r6 = ctx->r6 | 0X100;
    // 0x00279BF8: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x00279BFC: ori         $t0, $t0, 0x4050
    ctx->r8 = ctx->r8 | 0X4050;
    // 0x00279C00: lui         $t1, 0x701
    ctx->r9 = S32(0X701 << 16);
    // 0x00279C04: ori         $t1, $t1, 0x4050
    ctx->r9 = ctx->r9 | 0X4050;
    // 0x00279C08: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00279C0C: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00279C10: addu        $t2, $t3, $zero
    ctx->r10 = ADD32(ctx->r11, 0);
    // 0x00279C14: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00279C18: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00279C1C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00279C20: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00279C24: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x00279C28: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00279C2C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00279C30: sra         $v0, $t3, 1
    ctx->r2 = S32(SIGNED(ctx->r11) >> 1);
    // 0x00279C34: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00279C38: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00279C3C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279C40: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00279C44: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00279C48: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x00279C4C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00279C50: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x00279C54: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00279C58: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x00279C5C: addiu       $v1, $t3, -0x1
    ctx->r3 = ADD32(ctx->r11, -0X1);
    // 0x00279C60: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00279C64: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x00279C68: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x00279C6C: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x00279C70: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00279C74: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00279C78: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x00279C7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279C80: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279C84: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00279C88: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00279C8C: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x00279C90: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x00279C94: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00279C98: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00279C9C: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x00279CA0: addiu       $a2, $a0, 0x20
    ctx->r6 = ADD32(ctx->r4, 0X20);
    // 0x00279CA4: lui         $v0, 0xF510
    ctx->r2 = S32(0XF510 << 16);
    // 0x00279CA8: addiu       $a3, $a0, 0x28
    ctx->r7 = ADD32(ctx->r4, 0X28);
    // 0x00279CAC: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00279CB0: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x00279CB4: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00279CB8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00279CBC: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x00279CC0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x00279CC4: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x00279CC8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00279CCC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00279CD0: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00279CD4: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x00279CD8: bgez        $t3, L_00279CE4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x00279CDC: sw          $v0, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r2;
            goto L_00279CE4;
    }
    // 0x00279CDC: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x00279CE0: addiu       $t2, $t3, 0x3
    ctx->r10 = ADD32(ctx->r11, 0X3);
L_00279CE4:
    // 0x00279CE4: sra         $a0, $t2, 2
    ctx->r4 = S32(SIGNED(ctx->r10) >> 2);
    // 0x00279CE8: blez        $a0, L_00279CF4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00279CEC: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_00279CF4;
    }
    // 0x00279CEC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x00279CF0: addiu       $a1, $a0, 0x7FF
    ctx->r5 = ADD32(ctx->r4, 0X7FF);
L_00279CF4:
    // 0x00279CF4: mult        $t3, $t6
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279CF8: mflo        $s1
    ctx->r17 = lo;
    // 0x00279CFC: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x00279D00: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x00279D04: beql        $v0, $zero, L_00279D0C
    if (ctx->r2 == 0) {
        // 0x00279D08: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_00279D0C;
    }
    goto skip_1;
    // 0x00279D08: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_1:
L_00279D0C:
    // 0x00279D0C: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00279D10: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279D14: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x00279D18: blez        $a0, L_00279D5C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00279D1C: or          $a2, $v0, $v1
        ctx->r6 = ctx->r2 | ctx->r3;
            goto L_00279D5C;
    }
    // 0x00279D1C: or          $a2, $v0, $v1
    ctx->r6 = ctx->r2 | ctx->r3;
    // 0x00279D20: div         $zero, $a1, $a0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r4)));
    // 0x00279D24: bne         $a0, $zero, L_00279D30
    if (ctx->r4 != 0) {
        // 0x00279D28: nop
    
            goto L_00279D30;
    }
    // 0x00279D28: nop

    // 0x00279D2C: break       7
    do_break(2596140);
L_00279D30:
    // 0x00279D30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00279D34: bne         $a0, $at, L_00279D48
    if (ctx->r4 != ctx->r1) {
        // 0x00279D38: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00279D48;
    }
    // 0x00279D38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00279D3C: bne         $a1, $at, L_00279D48
    if (ctx->r5 != ctx->r1) {
        // 0x00279D40: nop
    
            goto L_00279D48;
    }
    // 0x00279D40: nop

    // 0x00279D44: break       6
    do_break(2596164);
L_00279D48:
    // 0x00279D48: mflo        $v0
    ctx->r2 = lo;
    // 0x00279D4C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279D50: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00279D54: j           L_00279D68
    // 0x00279D58: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
        goto L_00279D68;
    // 0x00279D58: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_00279D5C:
    // 0x00279D5C: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    // 0x00279D60: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00279D64: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_00279D68:
    // 0x00279D68: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x00279D6C: ori         $a1, $a1, 0x4050
    ctx->r5 = ctx->r5 | 0X4050;
    // 0x00279D70: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x00279D74: addiu       $t1, $t1, -0x71DC
    ctx->r9 = ADD32(ctx->r9, -0X71DC);
    // 0x00279D78: addu        $t4, $t3, $zero
    ctx->r12 = ADD32(ctx->r11, 0);
    // 0x00279D7C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00279D80: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x00279D84: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x00279D88: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x00279D8C: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00279D90: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    // 0x00279D94: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x00279D98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00279D9C: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x00279DA0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00279DA4: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00279DA8: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279DAC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00279DB0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00279DB4: lui         $v1, 0xF510
    ctx->r3 = S32(0XF510 << 16);
    // 0x00279DB8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00279DBC: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00279DC0: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x00279DC4: addiu       $a1, $t0, 0x10
    ctx->r5 = ADD32(ctx->r8, 0X10);
    // 0x00279DC8: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00279DCC: addiu       $v0, $t3, -0x1
    ctx->r2 = ADD32(ctx->r11, -0X1);
    // 0x00279DD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279DD4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279DD8: sll         $t2, $v0, 12
    ctx->r10 = S32(ctx->r2 << 12);
    // 0x00279DDC: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x00279DE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279DE4: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x00279DE8: or          $v0, $t2, $a2
    ctx->r2 = ctx->r10 | ctx->r6;
    // 0x00279DEC: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x00279DF0: sw          $t5, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r13;
    // 0x00279DF4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00279DF8: addiu       $a0, $t0, 0x18
    ctx->r4 = ADD32(ctx->r8, 0X18);
    // 0x00279DFC: bgez        $t3, L_00279E08
    if (SIGNED(ctx->r11) >= 0) {
        // 0x00279E00: sw          $a0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r4;
            goto L_00279E08;
    }
    // 0x00279E00: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00279E04: addiu       $t4, $t3, 0xF
    ctx->r12 = ADD32(ctx->r11, 0XF);
L_00279E08:
    // 0x00279E08: lui         $v1, 0xF580
    ctx->r3 = S32(0XF580 << 16);
    // 0x00279E0C: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00279E10: lui         $a3, 0x400
    ctx->r7 = S32(0X400 << 16);
    // 0x00279E14: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x00279E18: sra         $v0, $t4, 4
    ctx->r2 = S32(SIGNED(ctx->r12) >> 4);
    // 0x00279E1C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279E20: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00279E24: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00279E28: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x00279E2C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00279E30: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00279E34: addiu       $a1, $t0, 0x20
    ctx->r5 = ADD32(ctx->r8, 0X20);
    // 0x00279E38: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00279E3C: or          $v0, $t2, $v0
    ctx->r2 = ctx->r10 | ctx->r2;
    // 0x00279E40: addiu       $a2, $t0, 0x28
    ctx->r6 = ADD32(ctx->r8, 0X28);
    // 0x00279E44: subu        $v1, $t3, $t9
    ctx->r3 = SUB32(ctx->r11, ctx->r25);
    // 0x00279E48: addu        $v1, $t7, $v1
    ctx->r3 = ADD32(ctx->r15, ctx->r3);
    // 0x00279E4C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00279E50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x00279E54: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x00279E58: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x00279E5C: sw          $t5, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r13;
    // 0x00279E60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00279E64: subu        $v0, $t6, $s0
    ctx->r2 = SUB32(ctx->r14, ctx->r16);
    // 0x00279E68: addu        $v0, $t8, $v0
    ctx->r2 = ADD32(ctx->r24, ctx->r2);
    // 0x00279E6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279E70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279E74: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x00279E78: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00279E7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00279E80: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x00279E84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279E88: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279E8C: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x00279E90: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x00279E94: sll         $v1, $t8, 2
    ctx->r3 = S32(ctx->r24 << 2);
    // 0x00279E98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x00279E9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00279EA0: addiu       $a0, $t0, 0x30
    ctx->r4 = ADD32(ctx->r8, 0X30);
    // 0x00279EA4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00279EA8: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x00279EAC: sll         $v1, $t9, 21
    ctx->r3 = S32(ctx->r25 << 21);
    // 0x00279EB0: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00279EB4: sw          $v0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r2;
    // 0x00279EB8: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
    // 0x00279EBC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00279EC0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00279EC4: addiu       $v0, $t0, 0x38
    ctx->r2 = ADD32(ctx->r8, 0X38);
    // 0x00279EC8: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x00279ECC: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x00279ED0: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x00279ED4: sw          $v0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r2;
    // 0x00279ED8: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x00279EDC: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x00279EE0: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x00279EE4: jr          $ra
    // 0x00279EE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00279EE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0041AFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AFEC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041AFF0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041AFF4: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0041AFF8: beq         $v0, $zero, L_0041B00C
    if (ctx->r2 == 0) {
        // 0x0041AFFC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B00C;
    }
    // 0x0041AFFC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B000: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B004: j           L_0041B01C
    // 0x0041B008: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B01C;
    // 0x0041B008: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B00C:
    // 0x0041B00C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B010: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B014: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B018: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B01C:
    // 0x0041B01C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B020: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B024: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B028: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0041B02C: beql        $v0, $zero, L_0041B038
    if (ctx->r2 == 0) {
        // 0x0041B030: sw          $a3, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r7;
            goto L_0041B038;
    }
    goto skip_0;
    // 0x0041B030: sw          $a3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r7;
    skip_0:
    // 0x0041B034: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_0041B038:
    // 0x0041B038: jr          $ra
    // 0x0041B03C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B03C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00253720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253720: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00253724: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00253728: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0025372C: bne         $v0, $zero, L_00253740
    if (ctx->r2 != 0) {
            // 0x00253730: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    func_00253740(rdram, ctx);
    return;
    }
    // 0x00253730: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00253734: lbu         $v0, -0xA74($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XA74);
    // 0x00253738: jr          $ra
    // 0x0025373C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    return;
    // 0x0025373C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
;}
RECOMP_FUNC void func_002005D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002005D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002005D4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002005D8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002005DC: beq         $v1, $zero, L_00200628
    if (ctx->r3 == 0) {
        // 0x002005E0: nop
    
            goto L_00200628;
    }
    // 0x002005E0: nop

    // 0x002005E4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002005E8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002005EC: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x002005F0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002005F4: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x002005F8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x002005FC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200600: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00200604: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200608: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020060C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00200610: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200614: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200618: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x0020061C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00200620: j           L_0020067C
    // 0x00200624: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_0020067C;
    // 0x00200624: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_00200628:
    // 0x00200628: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0020062C: beq         $v1, $zero, L_00200654
    if (ctx->r3 == 0) {
        // 0x00200630: nop
    
            goto L_00200654;
    }
    // 0x00200630: nop

    // 0x00200634: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200638: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0020063C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00200640: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00200644: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00200648: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0020064C: j           L_00200664
    // 0x00200650: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_00200664;
    // 0x00200650: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_00200654:
    // 0x00200654: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200658: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0020065C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00200660: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
L_00200664:
    // 0x00200664: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200668: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0020066C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00200670: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00200674: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00200678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_0020067C:
    // 0x0020067C: jr          $ra
    // 0x00200680: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x00200680: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00254C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254C44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00254C48: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00254C4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254C50: lwc1        $f2, 0x7128($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7128);
    // 0x00254C54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254C58: lwc1        $f1, -0x1D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1D28);
    // 0x00254C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254C60: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x00254C64: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00254C68: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00254C6C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x00254C70: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00254C74: sw          $v1, 0x37C($a0)
    MEM_W(0X37C, ctx->r4) = ctx->r3;
    // 0x00254C78: sw          $v0, 0x380($a0)
    MEM_W(0X380, ctx->r4) = ctx->r2;
    // 0x00254C7C: sw          $zero, 0x388($a0)
    MEM_W(0X388, ctx->r4) = 0;
    // 0x00254C80: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00254C84: sw          $zero, 0x38C($a0)
    MEM_W(0X38C, ctx->r4) = 0;
    // 0x00254C88: sw          $v1, 0x390($a0)
    MEM_W(0X390, ctx->r4) = ctx->r3;
L_00254C8C:
    // 0x00254C8C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00254C90: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00254C94: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00254C98: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00254C9C: slti        $v0, $a1, 0x24
    ctx->r2 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
    // 0x00254CA0: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x00254CA4: swc1        $f1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00254CA8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00254CAC: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x00254CB0: bne         $v0, $zero, L_00254C8C
    if (ctx->r2 != 0) {
        // 0x00254CB4: addiu       $a0, $a0, 0x18
        ctx->r4 = ADD32(ctx->r4, 0X18);
            goto L_00254C8C;
    }
    // 0x00254CB4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x00254CB8: jr          $ra
    // 0x00254CBC: nop

    return;
    // 0x00254CBC: nop

;}
RECOMP_FUNC void func_00218590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00218594: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x00218598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0021859C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002185A0: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x002185A4: bltz        $a3, L_002185D4
    if (SIGNED(ctx->r7) < 0) {
        // 0x002185A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002185D4;
    }
    // 0x002185A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002185AC: lui         $t0, 0xDEAD
    ctx->r8 = S32(0XDEAD << 16);
    // 0x002185B0: ori         $t0, $t0, 0xBEEF
    ctx->r8 = ctx->r8 | 0XBEEF;
    // 0x002185B4: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
L_002185B8:
    // 0x002185B8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002185BC: beql        $v0, $t0, L_002185D8
    if (ctx->r2 == ctx->r8) {
        // 0x002185C0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002185D8;
    }
    goto skip_0;
    // 0x002185C0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x002185C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002185C8: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x002185CC: beq         $v0, $zero, L_002185B8
    if (ctx->r2 == 0) {
        // 0x002185D0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_002185B8;
    }
    // 0x002185D0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_002185D4:
    // 0x002185D4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_002185D8:
    // 0x002185D8: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x002185DC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002185E0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x002185E4: addu        $a0, $t1, $a0
    ctx->r4 = ADD32(ctx->r9, ctx->r4);
    // 0x002185E8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002185EC: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x002185F0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002185F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x002185F8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002185FC: beq         $a1, $zero, L_0021860C
    if (ctx->r5 == 0) {
        // 0x00218600: addu        $s0, $t1, $v0
        ctx->r16 = ADD32(ctx->r9, ctx->r2);
            goto L_0021860C;
    }
    // 0x00218600: addu        $s0, $t1, $v0
    ctx->r16 = ADD32(ctx->r9, ctx->r2);
    // 0x00218604: jal         0x0029E460
    // 0x00218608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00218608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_0021860C:
    // 0x0021860C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00218610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00218614: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00218618: jr          $ra
    // 0x0021861C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021861C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00292638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292638: jr          $ra
    // 0x0029263C: nop

    return;
    // 0x0029263C: nop

;}
RECOMP_FUNC void func_002576AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002576AC: lw          $v1, 0xC04($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC04);
    // 0x002576B0: addiu       $v0, $zero, 0x1144
    ctx->r2 = ADD32(0, 0X1144);
    // 0x002576B4: bne         $v1, $v0, L_002576C4
    if (ctx->r3 != ctx->r2) {
        // 0x002576B8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002576C4;
    }
    // 0x002576B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002576BC: lb          $v0, 0xE2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE2);
    // 0x002576C0: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
L_002576C4:
    // 0x002576C4: bne         $a1, $zero, L_00257718
    if (ctx->r5 != 0) {
        // 0x002576C8: nop
    
            goto L_00257718;
    }
    // 0x002576C8: nop

    // 0x002576CC: lwc1        $f1, 0xA78($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XA78);
    // 0x002576D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002576D4: lwc1        $f0, 0x723C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X723C);
    // 0x002576D8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002576DC: nop

    // 0x002576E0: bc1f        L_002576F0
    if (!c1cs) {
        // 0x002576E4: addiu       $v0, $zero, 0x8A2
        ctx->r2 = ADD32(0, 0X8A2);
            goto L_002576F0;
    }
    // 0x002576E4: addiu       $v0, $zero, 0x8A2
    ctx->r2 = ADD32(0, 0X8A2);
    // 0x002576E8: jr          $ra
    // 0x002576EC: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
    return;
    // 0x002576EC: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
L_002576F0:
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
            goto L_00257714;
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
L_00257714:
    // 0x00257714: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
L_00257718:
    // 0x00257718: jr          $ra
    // 0x0025771C: nop

    return;
    // 0x0025771C: nop

;}
RECOMP_FUNC void func_00210C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210C70: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00210C74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210C78: lwc1        $f1, 0x5628($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5628);
    // 0x00210C7C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00210C80: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00210C84: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x00210C88: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00210C8C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x00210C90: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x00210C94: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x00210C98: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x00210C9C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00210CA0: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x00210CA4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x00210CA8: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x00210CAC: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x00210CB0: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x00210CB4: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x00210CB8: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x00210CBC: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x00210CC0: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x00210CC4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x00210CC8: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x00210CCC: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00210CD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00210CD4: lwc1        $f2, 0x38($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X38);
    // 0x00210CD8: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210CDC: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x00210CE0: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x00210CE4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x00210CE8: jr          $ra
    // 0x00210CEC: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x00210CEC: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_0040DC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DC9C: jr          $ra
    // 0x0040DCA0: nop

    return;
    // 0x0040DCA0: nop

;}
RECOMP_FUNC void func_0029845C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029845C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298460: lwc1        $f0, -0x5790($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5790);
    // 0x00298464: jr          $ra
    // 0x00298468: nop

    return;
    // 0x00298468: nop

;}
RECOMP_FUNC void func_00266F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266F00: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x00266F04: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00266F08: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x00266F0C: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00266F10: jr          $ra
    // 0x00266F14: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    return;
    // 0x00266F14: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_0021852C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021852C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00218530: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00218534: jal         0x002175D8
    // 0x00218538: nop

    func_002175D8(rdram, ctx);
        goto after_0;
    // 0x00218538: nop

    after_0:
    // 0x0021853C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00218540: jr          $ra
    // 0x00218544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00218544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00443D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00443D28: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00443D2C: andi        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 & 0X2;
    // 0x00443D30: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00443D34: beq         $v0, $zero, L_00443D4C
    if (ctx->r2 == 0) {
        // 0x00443D38: nop
    
            goto L_00443D4C;
    }
    // 0x00443D38: nop

    // 0x00443D3C: beq         $v1, $zero, L_00443D58
    if (ctx->r3 == 0) {
        // 0x00443D40: addiu       $v0, $zero, 0x56C2
        ctx->r2 = ADD32(0, 0X56C2);
            goto L_00443D58;
    }
    // 0x00443D40: addiu       $v0, $zero, 0x56C2
    ctx->r2 = ADD32(0, 0X56C2);
    // 0x00443D44: jr          $ra
    // 0x00443D48: addiu       $v0, $zero, 0x5640
    ctx->r2 = ADD32(0, 0X5640);
    return;
    // 0x00443D48: addiu       $v0, $zero, 0x5640
    ctx->r2 = ADD32(0, 0X5640);
L_00443D4C:
    // 0x00443D4C: beq         $v1, $zero, L_00443D58
    if (ctx->r3 == 0) {
        // 0x00443D50: addiu       $v0, $zero, 0x56A4
        ctx->r2 = ADD32(0, 0X56A4);
            goto L_00443D58;
    }
    // 0x00443D50: addiu       $v0, $zero, 0x56A4
    ctx->r2 = ADD32(0, 0X56A4);
    // 0x00443D54: addiu       $v0, $zero, 0x56B8
    ctx->r2 = ADD32(0, 0X56B8);
L_00443D58:
    // 0x00443D58: jr          $ra
    // 0x00443D5C: nop

    return;
    // 0x00443D5C: nop

;}
RECOMP_FUNC void func_0026C590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C594: beq         $a0, $zero, L_0026C5B8
    if (ctx->r4 == 0) {
        // 0x0026C598: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0026C5B8;
    }
    // 0x0026C598: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C59C: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0026C5A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0026C5A4: beq         $v0, $zero, L_0026C5B8
    if (ctx->r2 == 0) {
        // 0x0026C5A8: nop
    
            goto L_0026C5B8;
    }
    // 0x0026C5A8: nop

    // 0x0026C5AC: lhu         $a1, 0x0($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X0);
    // 0x0026C5B0: jal         0x0026C934
    // 0x0026C5B4: nop

    func_0026C934(rdram, ctx);
        goto after_0;
    // 0x0026C5B4: nop

    after_0:
L_0026C5B8:
    // 0x0026C5B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C5BC: jr          $ra
    // 0x0026C5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029B150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B150: bne         $a0, $zero, L_0029B160
    if (ctx->r4 != 0) {
        // 0x0029B154: nop
    
            goto L_0029B160;
    }
    // 0x0029B154: nop

    // 0x0029B158: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029B15C: lw          $a0, -0x76E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X76E0);
L_0029B160:
    // 0x0029B160: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0029B164: jr          $ra
    // 0x0029B168: nop

    return;
    // 0x0029B168: nop

;}
RECOMP_FUNC void func_0020F108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F108: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0020F10C: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F110: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F114: div.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0020F118: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F11C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020F120: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x0020F124: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F128: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020F12C: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020F130: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F134: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F138: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0020F13C: jr          $ra
    // 0x0020F140: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0020F140: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_00452F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00419FD0:
    // 0x00452F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0041A00C:
    // 0x00452F8C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00452F90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452F94: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00452F98: ori         $v1, $v1, 0x202
    ctx->r3 = ctx->r3 | 0X202;
    // 0x00452F9C: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x00452FA0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00452FA4: lw          $a0, 0x1F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F78);
    // 0x00452FA8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00452FAC: beq         $v0, $zero, L_00452FD0
    if (ctx->r2 == 0) {
        // 0x00452FB0: nop
    
            goto L_00452FD0;
    }
    // 0x00452FB0: nop

    // 0x00452FB4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00452FB8: bgez        $a0, L_00452FC8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00452FBC: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_00452FC8;
    }
    // 0x00452FBC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00452FC0: j           L_00419FD0
    // 0x00452FC4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    entry_00419FD0(rdram, ctx);
    return;
    // 0x00452FC4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
L_00452FC8:
    // 0x00452FC8: beql        $a0, $v0, L_00452FD0
    if (ctx->r4 == ctx->r2) {
        // 0x00452FCC: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_00452FD0;
    }
    goto skip_0;
    // 0x00452FCC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    skip_0:
L_00452FD0:
    // 0x00452FD0: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00452FD4: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x00452FD8: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x00452FDC: ori         $v1, $v1, 0xD101
    ctx->r3 = ctx->r3 | 0XD101;
    // 0x00452FE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00452FE4: beq         $v0, $zero, L_0045300C
    if (ctx->r2 == 0) {
        // 0x00452FE8: nop
    
            goto L_0045300C;
    }
    // 0x00452FE8: nop

    // 0x00452FEC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00452FF0: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x00452FF4: bne         $v0, $zero, L_00453004
    if (ctx->r2 != 0) {
        // 0x00452FF8: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_00453004;
    }
    // 0x00452FF8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00452FFC: j           L_0041A00C
    // 0x00453000: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    entry_0041A00C(rdram, ctx);
    return;
    // 0x00453000: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00453004:
    // 0x00453004: beql        $a0, $v0, L_0045300C
    if (ctx->r4 == ctx->r2) {
        // 0x00453008: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_0045300C;
    }
    goto skip_1;
    // 0x00453008: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    skip_1:
L_0045300C:
    // 0x0045300C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453010: sw          $a0, 0x1F78($at)
    MEM_W(0X1F78, ctx->r1) = ctx->r4;
    // 0x00453014: jal         0x002759C4
    // 0x00453018: nop

    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x00453018: nop

    after_0:
    // 0x0045301C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00453020: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00453024: jr          $ra
    // 0x00453028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00453028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238FD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00238FD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00238FDC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x00238FE0: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x00238FE4: beq         $a2, $zero, L_00238FFC
    if (ctx->r6 == 0) {
        // 0x00238FE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00238FFC;
    }
    // 0x00238FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238FEC: beq         $a2, $v0, L_00239014
    if (ctx->r6 == ctx->r2) {
        // 0x00238FF0: nop
    
            goto L_00239014;
    }
    // 0x00238FF0: nop

    // 0x00238FF4: j           L_00239030
    // 0x00238FF8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
        goto L_00239030;
    // 0x00238FF8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_00238FFC:
    // 0x00238FFC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x00239000: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00239004: bne         $v1, $v0, L_0023904C
    if (ctx->r3 != ctx->r2) {
        // 0x00239008: nop
    
            goto L_0023904C;
    }
    // 0x00239008: nop

    // 0x0023900C: j           L_00239030
    // 0x00239010: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
        goto L_00239030;
    // 0x00239010: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_00239014:
    // 0x00239014: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00239018: lw          $v1, 0x14C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14C);
    // 0x0023901C: sllv        $v0, $a2, $v0
    ctx->r2 = S32(ctx->r6 << (ctx->r2 & 31));
    // 0x00239020: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00239024: beq         $v1, $zero, L_0023904C
    if (ctx->r3 == 0) {
        // 0x00239028: nop
    
            goto L_0023904C;
    }
    // 0x00239028: nop

    // 0x0023902C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_00239030:
    // 0x00239030: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x00239034: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00239038: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0023903C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00239040: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x00239044: jal         0x00246690
    // 0x00239048: nop

    func_00246690(rdram, ctx);
        goto after_0;
    // 0x00239048: nop

    after_0:
L_0023904C:
    // 0x0023904C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00239050: jr          $ra
    // 0x00239054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00239054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002810A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002810A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002810A4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x002810A8: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x002810AC: beq         $v0, $zero, L_002810C4
    if (ctx->r2 == 0) {
            // 0x002810B0: nop

    func_002810C4(rdram, ctx);
    return;
    }
    // 0x002810B0: nop

    // 0x002810B4: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x002810B8: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x002810BC: jr          $ra
    // 0x002810C0: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    return;
    // 0x002810C0: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
;}
RECOMP_FUNC void func_00285670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00285674: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x00285678: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028567C: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x00285680: ori         $v1, $v1, 0x101
    ctx->r3 = ctx->r3 | 0X101;
    // 0x00285684: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00285688: beq         $v0, $zero, L_002856AC
    if (ctx->r2 == 0) {
        // 0x0028568C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002856AC;
    }
    // 0x0028568C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285690: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285694: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x00285698: beq         $v0, $zero, L_002856AC
    if (ctx->r2 == 0) {
        // 0x0028569C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002856AC;
    }
    // 0x0028569C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002856A0: jal         0x00275624
    // 0x002856A4: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x002856A4: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_0:
    // 0x002856A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002856AC:
    // 0x002856AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002856B0: jr          $ra
    // 0x002856B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002856B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D740: sw          $v1, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r3;
    // 0x0041D744: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041D748: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D74C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D750: sb          $zero, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = 0;
    // 0x0041D754: j           L_0041D760
    // 0x0041D758: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041D760;
    // 0x0041D758: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041D75C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041D760:
    // 0x0041D760: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041D764: jr          $ra
    // 0x0041D768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00238118: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0023811C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00238120: jal         0x0027580C
    // 0x00238124: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_0027580C(rdram, ctx);
        goto after_0;
    // 0x00238124: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x00238128: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0023812C: jr          $ra
    // 0x00238130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00238130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020C318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020C318: mul.s       $f0, $f10, $f9
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f9.fl);
    // 0x0020C31C: nop

    // 0x0020C320: mul.s       $f1, $f8, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = MUL_S(ctx->f8.fl, ctx->f7.fl);
    // 0x0020C324: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020C328: lwc1        $f11, 0x5400($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5400);
    // 0x0020C32C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020C330: div.s       $f8, $f11, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f11.fl, ctx->f2.fl);
    // 0x0020C334: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C338: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020C33C: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C340: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x0020C344: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020C348: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C34C: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020C350: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C354: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020C358: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C35C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020C360: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C364: lwc1        $f1, 0x18($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C368: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C36C: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C370: lwc1        $f1, 0x14($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0020C374: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C378: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020C37C: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C380: swc1        $f3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020C384: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020C388: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C38C: lwc1        $f1, 0x28($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C390: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020C394: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C398: lwc1        $f2, 0x18($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X18);
    // 0x0020C39C: lwc1        $f1, 0x20($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X20);
    // 0x0020C3A0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C3A4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C3A8: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C3AC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020C3B0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C3B4: lwc1        $f1, 0x28($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C3B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C3BC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C3C0: lwc1        $f1, 0x20($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X20);
    // 0x0020C3C4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C3C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020C3CC: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C3D0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020C3D4: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C3D8: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x0020C3DC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020C3E0: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020C3E4: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C3E8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C3EC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020C3F0: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C3F4: swc1        $f3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020C3F8: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020C3FC: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C400: lwc1        $f1, 0x24($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x0020C404: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020C408: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C40C: lwc1        $f2, 0x14($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C410: lwc1        $f1, 0x20($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X20);
    // 0x0020C414: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C418: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C41C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020C420: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C424: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020C428: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C42C: lwc1        $f1, 0x24($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x0020C430: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020C434: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C438: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C43C: lwc1        $f1, 0x20($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X20);
    // 0x0020C440: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C444: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C448: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C44C: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020C450: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020C454: lwc1        $f1, 0x14($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0020C458: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020C45C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020C460: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C464: lwc1        $f1, 0x10($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X10);
    // 0x0020C468: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020C46C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C470: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020C474: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C478: swc1        $f3, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020C47C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x0020C480: lwc1        $f5, 0x10($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X10);
    // 0x0020C484: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020C488: neg.s       $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = -ctx->f5.fl;
    // 0x0020C48C: mul.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x0020C490: lwc1        $f9, 0x28($a1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C494: mul.s       $f5, $f5, $f9
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f9.fl);
    // 0x0020C498: lwc1        $f2, 0x20($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020C49C: lwc1        $f3, 0x14($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0020C4A0: mul.s       $f4, $f2, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0020C4A4: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x0020C4A8: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x0020C4AC: lwc1        $f7, 0x38($a1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020C4B0: mul.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f7.fl);
    // 0x0020C4B4: lwc1        $f1, 0x34($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x0020C4B8: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0020C4BC: nop

    // 0x0020C4C0: mul.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f7.fl);
    // 0x0020C4C4: nop

    // 0x0020C4C8: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C4CC: lwc1        $f1, 0x30($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X30);
    // 0x0020C4D0: mul.s       $f3, $f1, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0020C4D4: nop

    // 0x0020C4D8: mul.s       $f1, $f1, $f10
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f10.fl);
    // 0x0020C4DC: nop

    // 0x0020C4E0: mul.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f9.fl);
    // 0x0020C4E4: nop

    // 0x0020C4E8: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x0020C4EC: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x0020C4F0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020C4F4: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020C4F8: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0020C4FC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020C500: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C504: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020C508: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020C50C: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020C510: mul.s       $f0, $f5, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f10.fl);
    // 0x0020C514: lwc1        $f9, 0x28($a1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C518: mul.s       $f5, $f5, $f9
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f9.fl);
    // 0x0020C51C: lwc1        $f2, 0x20($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020C520: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020C524: mul.s       $f4, $f2, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0020C528: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C52C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x0020C530: lwc1        $f7, 0x38($a1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020C534: mul.s       $f0, $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f7.fl);
    // 0x0020C538: lwc1        $f1, 0x34($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x0020C53C: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0020C540: nop

    // 0x0020C544: mul.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f7.fl);
    // 0x0020C548: nop

    // 0x0020C54C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020C550: lwc1        $f1, 0x30($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X30);
    // 0x0020C554: mul.s       $f3, $f1, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0020C558: nop

    // 0x0020C55C: mul.s       $f1, $f1, $f10
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f10.fl);
    // 0x0020C560: nop

    // 0x0020C564: mul.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f9.fl);
    // 0x0020C568: nop

    // 0x0020C56C: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x0020C570: sub.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f5.fl;
    // 0x0020C574: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x0020C578: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C57C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C580: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020C584: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C588: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020C58C: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020C590: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C594: mul.s       $f1, $f5, $f10
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f10.fl);
    // 0x0020C598: lwc1        $f9, 0x18($a1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C59C: mul.s       $f5, $f5, $f9
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f9.fl);
    // 0x0020C5A0: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C5A4: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020C5A8: mul.s       $f4, $f2, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0020C5AC: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C5B0: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x0020C5B4: lwc1        $f7, 0x38($a1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x0020C5B8: mul.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f7.fl);
    // 0x0020C5BC: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020C5C0: mul.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x0020C5C4: nop

    // 0x0020C5C8: mul.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f7.fl);
    // 0x0020C5CC: nop

    // 0x0020C5D0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020C5D4: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020C5D8: mul.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0020C5DC: nop

    // 0x0020C5E0: mul.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x0020C5E4: nop

    // 0x0020C5E8: mul.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f9.fl);
    // 0x0020C5EC: nop

    // 0x0020C5F0: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x0020C5F4: sub.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f5.fl;
    // 0x0020C5F8: sub.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x0020C5FC: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0020C600: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0020C604: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020C608: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0020C60C: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x0020C610: jr          $ra
    // 0x0020C614: swc1        $f11, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(11 - 1) * 2];
    return;
    // 0x0020C614: swc1        $f11, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(11 - 1) * 2];
;}
RECOMP_FUNC void func_00261CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261CAC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x00261CB0: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x00261CB4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261CB8: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x00261CBC: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x00261CC0: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x00261CC4: sdc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF0, ctx->r29);
    // 0x00261CC8: lwc1        $f12, 0x118($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X118);
    // 0x00261CCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261CD0: lwc1        $f20, 0x7B1C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7B1C);
    // 0x00261CD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261CD8: lwc1        $f14, 0x7B20($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B20);
    // 0x00261CDC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00261CE0: jal         0x00211774
    // 0x00261CE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00261CE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00261CE8: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x00261CEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261CF0: lwc1        $f14, 0x7B24($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B24);
    // 0x00261CF4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00261CF8: jal         0x00211774
    // 0x00261CFC: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    func_00211774(rdram, ctx);
        goto after_1;
    // 0x00261CFC: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00261D00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00261D04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00261D08: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00261D0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00261D10: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00261D14: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x00261D18: jal         0x00246108
    // 0x00261D1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_2;
    // 0x00261D1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00261D20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00261D24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00261D28: jal         0x0024599C
    // 0x00261D2C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0024599C(rdram, ctx);
        goto after_3;
    // 0x00261D2C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x00261D30: lwc1        $f0, 0xB8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x00261D34: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x00261D38: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00261D3C: lwc1        $f12, 0x1C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00261D40: lwc1        $f14, 0x60($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00261D44: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00261D48: jal         0x0021160C
    // 0x00261D4C: nop

    func_0021160C(rdram, ctx);
        goto after_4;
    // 0x00261D4C: nop

    after_4:
    // 0x00261D50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261D54: lwc1        $f1, 0x7B28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B28);
    // 0x00261D58: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00261D5C: nop

    // 0x00261D60: bc1t        L_00261D80
    if (c1cs) {
        // 0x00261D64: swc1        $f0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
            goto L_00261D80;
    }
    // 0x00261D64: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x00261D68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261D6C: lwc1        $f1, 0x7B2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B2C);
    // 0x00261D70: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00261D74: nop

    // 0x00261D78: bc1f        L_00261D88
    if (!c1cs) {
        // 0x00261D7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00261D88;
    }
    // 0x00261D7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00261D80:
    // 0x00261D80: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00261D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00261D88:
    // 0x00261D88: lw          $a2, 0x118($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X118);
    // 0x00261D8C: lw          $a3, 0x4C($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4C);
    // 0x00261D90: jal         0x00245BAC
    // 0x00261D94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_5;
    // 0x00261D94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00261D98: lwc1        $f2, 0x40($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X40);
    // 0x00261D9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261DA0: lwc1        $f0, 0x7B30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B30);
    // 0x00261DA4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00261DA8: nop

    // 0x00261DAC: bc1f        L_00261DF4
    if (!c1cs) {
        // 0x00261DB0: nop
    
            goto L_00261DF4;
    }
    // 0x00261DB0: nop

    // 0x00261DB4: lwc1        $f1, 0x9C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X9C);
    // 0x00261DB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261DBC: lwc1        $f0, 0x7B34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B34);
    // 0x00261DC0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00261DC4: nop

    // 0x00261DC8: bc1t        L_00261DE8
    if (c1cs) {
        // 0x00261DCC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00261DE8;
    }
    // 0x00261DCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00261DD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261DD4: lwc1        $f0, 0x7B38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B38);
    // 0x00261DD8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00261DDC: nop

    // 0x00261DE0: bc1f        L_00261DF4
    if (!c1cs) {
        // 0x00261DE4: nop
    
            goto L_00261DF4;
    }
    // 0x00261DE4: nop

L_00261DE8:
    // 0x00261DE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00261DEC: jal         0x00243414
    // 0x00261DF0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x00261DF0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
L_00261DF4:
    // 0x00261DF4: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x00261DF8: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x00261DFC: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x00261E00: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x00261E04: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x00261E08: jr          $ra
    // 0x00261E0C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x00261E0C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_00419A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419A00: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419A04: lbu         $v1, -0x5510($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5510);
    // 0x00419A08: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00419A0C: beq         $v0, $zero, L_00419A84
    if (ctx->r2 == 0) {
        // 0x00419A10: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00419A84;
    }
    // 0x00419A10: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00419A14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00419A18: addu        $at, $at, $v0
    gpr jr_addend_00419A20 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00419A1C: lw          $v0, 0x1048($at)
    ctx->r2 = ADD32(ctx->r1, 0X1048);
    // 0x00419A20: jr          $v0
    // 0x00419A24: nop

    switch (jr_addend_00419A20 >> 2) {
        case 0: goto L_00419A28; break;
        case 1: goto L_00419A38; break;
        case 2: goto L_00419A48; break;
        case 3: goto L_00419A58; break;
        case 4: goto L_00419A68; break;
        case 5: goto L_00419A78; break;
        default: switch_error(__func__, 0x00419A20, 0x800C1048);
    }
    // 0x00419A24: nop

L_00419A28:
    // 0x00419A28: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419A2C: addiu       $v0, $v0, 0x1EE0
    ctx->r2 = ADD32(ctx->r2, 0X1EE0);
    // 0x00419A30: j           L_00419A84
    // 0x00419A34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419A84;
    // 0x00419A34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419A38:
    // 0x00419A38: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419A3C: addiu       $v0, $v0, 0x1EF8
    ctx->r2 = ADD32(ctx->r2, 0X1EF8);
    // 0x00419A40: j           L_00419A84
    // 0x00419A44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419A84;
    // 0x00419A44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419A48:
    // 0x00419A48: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419A4C: addiu       $v0, $v0, 0x1F10
    ctx->r2 = ADD32(ctx->r2, 0X1F10);
    // 0x00419A50: j           L_00419A84
    // 0x00419A54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419A84;
    // 0x00419A54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419A58:
    // 0x00419A58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419A5C: addiu       $v0, $v0, 0x1F28
    ctx->r2 = ADD32(ctx->r2, 0X1F28);
    // 0x00419A60: j           L_00419A84
    // 0x00419A64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419A84;
    // 0x00419A64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419A68:
    // 0x00419A68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419A6C: addiu       $v0, $v0, 0x1F40
    ctx->r2 = ADD32(ctx->r2, 0X1F40);
    // 0x00419A70: j           L_00419A84
    // 0x00419A74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419A84;
    // 0x00419A74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419A78:
    // 0x00419A78: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00419A7C: addiu       $v0, $v0, 0x1F58
    ctx->r2 = ADD32(ctx->r2, 0X1F58);
    // 0x00419A80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419A84:
    // 0x00419A84: jr          $ra
    // 0x00419A88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00419A88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00265A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265A80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00265A84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00265A88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00265A8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00265A90: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00265A94: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265A98: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00265A9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00265AA0: jal         0x00220408
    // 0x00265AA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00265AA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00265AA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00265AAC: bne         $v0, $v1, L_00265AC8
    if (ctx->r2 != ctx->r3) {
        // 0x00265AB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00265AC8;
    }
    // 0x00265AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265AB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00265AB8: jal         0x00243414
    // 0x00265ABC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00265ABC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    after_1:
    // 0x00265AC0: j           L_00265AE4
    // 0x00265AC4: nop

        goto L_00265AE4;
    // 0x00265AC4: nop

L_00265AC8:
    // 0x00265AC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00265ACC: jal         0x00243414
    // 0x00265AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00265AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00265AD4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265AD8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00265ADC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00265AE0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00265AE4:
    // 0x00265AE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00265AE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00265AEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00265AF0: jr          $ra
    // 0x00265AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00265AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026CD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CD70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026CD74: beq         $a1, $zero, L_0026CDA0
    if (ctx->r5 == 0) {
        // 0x0026CD78: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0026CDA0;
    }
    // 0x0026CD78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026CD7C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026CD80: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0026CD84: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD88: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD8C: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026CD90: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x0026CD94: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0026CD98: jal         0x0026CDAC
    // 0x0026CD9C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    func_0026CDAC(rdram, ctx);
        goto after_0;
    // 0x0026CD9C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    after_0:
L_0026CDA0:
    // 0x0026CDA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026CDA4: jr          $ra
    // 0x0026CDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026CDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266C80: addu        $a3, $a0, $a2
    ctx->r7 = ADD32(ctx->r4, ctx->r6);
    // 0x00266C84: slti        $a2, $a2, 0x4
    ctx->r6 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00266C88: bne         $a2, $zero, L_00266D14
    if (ctx->r6 != 0) {
        // 0x00266C8C: sltu        $v0, $a0, $a3
        ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
            goto L_00266D14;
    }
    // 0x00266C8C: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x00266C90: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x00266C94: bne         $v0, $zero, L_00266D14
    if (ctx->r2 != 0) {
        // 0x00266C98: sltu        $v0, $a0, $a3
        ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
            goto L_00266D14;
    }
    // 0x00266C98: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x00266C9C: andi        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 & 0X3;
    // 0x00266CA0: bne         $v0, $zero, L_00266D14
    if (ctx->r2 != 0) {
        // 0x00266CA4: sltu        $v0, $a0, $a3
        ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
            goto L_00266D14;
    }
    // 0x00266CA4: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x00266CA8: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x00266CAC: sltu        $v0, $a3, $a0
    ctx->r2 = ctx->r7 < ctx->r4 ? 1 : 0;
    // 0x00266CB0: bnel        $v0, $zero, L_00266D10
    if (ctx->r2 != 0) {
        // 0x00266CB4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00266D10;
    }
    goto skip_0;
    // 0x00266CB4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    skip_0:
L_00266CB8:
    // 0x00266CB8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00266CBC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00266CC0: beql        $v1, $v0, L_00266CD4
    if (ctx->r3 == ctx->r2) {
        // 0x00266CC4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00266CD4;
    }
    goto skip_1;
    // 0x00266CC4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    skip_1:
    // 0x00266CC8: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x00266CCC: j           L_00266CE0
    // 0x00266CD0: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
        goto L_00266CE0;
    // 0x00266CD0: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
L_00266CD4:
    // 0x00266CD4: sltu        $v0, $a3, $a0
    ctx->r2 = ctx->r7 < ctx->r4 ? 1 : 0;
    // 0x00266CD8: beq         $v0, $zero, L_00266CB8
    if (ctx->r2 == 0) {
        // 0x00266CDC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00266CB8;
    }
    // 0x00266CDC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00266CE0:
    // 0x00266CE0: j           L_00266D10
    // 0x00266CE4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
        goto L_00266D10;
    // 0x00266CE4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_00266CE8:
    // 0x00266CE8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00266CEC: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x00266CF0: beq         $v1, $a2, L_00266D08
    if (ctx->r3 == ctx->r6) {
        // 0x00266CF4: sltu        $v1, $v1, $a2
        ctx->r3 = ctx->r3 < ctx->r6 ? 1 : 0;
            goto L_00266D08;
    }
    // 0x00266CF4: sltu        $v1, $v1, $a2
    ctx->r3 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x00266CF8: bne         $v1, $zero, L_00266D1C
    if (ctx->r3 != 0) {
        // 0x00266CFC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00266D1C;
    }
    // 0x00266CFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00266D00: jr          $ra
    // 0x00266D04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00266D04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00266D08:
    // 0x00266D08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00266D0C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00266D10:
    // 0x00266D10: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
L_00266D14:
    // 0x00266D14: bne         $v0, $zero, L_00266CE8
    if (ctx->r2 != 0) {
        // 0x00266D18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00266CE8;
    }
    // 0x00266D18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00266D1C:
    // 0x00266D1C: jr          $ra
    // 0x00266D20: nop

    return;
    // 0x00266D20: nop

;}
RECOMP_FUNC void func_0021F9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F9C4: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x0021F9C8: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0021F9CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021F9D0: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x0021F9D4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021F9D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021F9DC: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021F9E0: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x0021F9E4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0021F9E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021F9EC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021F9F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021F9F4: swc1        $f1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021F9F8: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x0021F9FC: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0021FA00: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FA04: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FA08: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021FA0C: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021FA10: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
    // 0x0021FA14: lwc1        $f1, 0xC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x0021FA18: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FA1C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FA20: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021FA24: jr          $ra
    // 0x0021FA28: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0021FA28: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_00298470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298470: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    // 0x00298474: jr          $ra
    // 0x00298478: nop

    return;
    // 0x00298478: nop

;}
RECOMP_FUNC void func_0020E61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020E61C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0020E620: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0020E624: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0020E628: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0020E62C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0020E630: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0020E634: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0020E638: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0020E63C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020E640: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x0020E644: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020E648: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0020E64C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0020E650: jal         0x002113A4
    // 0x0020E654: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0020E654: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0020E658: lui         $v1, 0x68DB
    ctx->r3 = S32(0X68DB << 16);
    // 0x0020E65C: ori         $v1, $v1, 0x8BAD
    ctx->r3 = ctx->r3 | 0X8BAD;
    // 0x0020E660: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020E664: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0020E668: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E66C: lwc1        $f1, 0x5534($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5534);
    // 0x0020E670: mfhi        $a3
    ctx->r7 = hi;
    // 0x0020E674: sra         $a0, $a3, 13
    ctx->r4 = S32(SIGNED(ctx->r7) >> 13);
    // 0x0020E678: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0020E67C: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0020E680: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E684: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0020E688: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0020E68C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0020E690: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E694: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0020E698: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020E69C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020E6A0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020E6A4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E6A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E6AC: lwc1        $f1, 0x5538($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5538);
    // 0x0020E6B0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E6B4: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0020E6B8: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E6BC: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0020E6C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0020E6C4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E6C8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E6CC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E6D0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E6D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E6D8: jal         0x00298470
    // 0x0020E6DC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0020E6DC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x0020E6E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0020E6E4: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0020E6E8: c.eq.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl == ctx->f20.fl;
    // 0x0020E6EC: nop

    // 0x0020E6F0: bc1t        L_0020E728
    if (c1cs) {
        // 0x0020E6F4: nop
    
            goto L_0020E728;
    }
    // 0x0020E6F4: nop

    // 0x0020E6F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E6FC: lwc1        $f2, 0x553C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X553C);
    // 0x0020E700: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E704: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E708: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E70C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020E710: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020E714: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020E718: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E71C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E720: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E724: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0020E728:
    // 0x0020E728: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020E72C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E730: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E734: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E738: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E73C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E740: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020E744: jal         0x00298470
    // 0x0020E748: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0020E748: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_2:
    // 0x0020E74C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0020E750: nop

    // 0x0020E754: bc1t        L_0020E78C
    if (c1cs) {
        // 0x0020E758: nop
    
            goto L_0020E78C;
    }
    // 0x0020E758: nop

    // 0x0020E75C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E760: lwc1        $f1, 0x5540($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5540);
    // 0x0020E764: lwc1        $f3, 0x0($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E768: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E76C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020E770: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0020E774: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E778: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E77C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E780: swc1        $f3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020E784: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x0020E788: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0020E78C:
    // 0x0020E78C: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E790: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E794: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E798: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E79C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E7A0: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E7A4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E7A8: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E7AC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E7B0: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E7B4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E7B8: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E7BC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E7C0: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0020E7C4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E7C8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E7CC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E7D0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0020E7D4: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E7D8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0020E7DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0020E7E0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0020E7E4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0020E7E8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0020E7EC: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x0020E7F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0020E7F4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0020E7F8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0020E7FC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0020E800: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0020E804: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0020E808: jr          $ra
    // 0x0020E80C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0020E80C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0042ECE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042ECE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042ECE8: jr          $ra
    // 0x0042ECEC: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x0042ECEC: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00451308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451308: jr          $ra
    // 0x0045130C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045130C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004280E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004280E4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x004280E8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x004280EC: addiu       $a2, $a2, 0xE20
    ctx->r6 = ADD32(ctx->r6, 0XE20);
    // 0x004280F0: blez        $a0, L_00428108
    if (SIGNED(ctx->r4) <= 0) {
        // 0x004280F4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00428108;
    }
    // 0x004280F4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004280F8:
    // 0x004280F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004280FC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00428100: bne         $v0, $zero, L_004280F8
    if (ctx->r2 != 0) {
        // 0x00428104: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_004280F8;
    }
    // 0x00428104: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00428108:
    // 0x00428108: lwl         $a3, 0x0($a2)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r6, 0X0);
    // 0x0042810C: lwr         $a3, 0x3($a2)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r6, 0X3);
    // 0x00428110: lb          $t0, 0x4($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X4);
    // 0x00428114: lb          $t1, 0x5($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X5);
    // 0x00428118: swl         $a3, 0x0($sp)
    do_swl(rdram, 0X0, ctx->r29, ctx->r7);
    // 0x0042811C: swr         $a3, 0x3($sp)
    do_swr(rdram, 0X3, ctx->r29, ctx->r7);
    // 0x00428120: sb          $t0, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r8;
    // 0x00428124: sb          $t1, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r9;
    // 0x00428128: lbu         $v0, 0x1($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1);
    // 0x0042812C: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00428130: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x00428134: bne         $v0, $zero, L_00428158
    if (ctx->r2 != 0) {
        // 0x00428138: sb          $v0, 0x3($a1)
        MEM_B(0X3, ctx->r5) = ctx->r2;
            goto L_00428158;
    }
    // 0x00428138: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x0042813C: lbu         $v0, 0x4($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4);
    // 0x00428140: lbu         $v1, 0x3($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3);
    // 0x00428144: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00428148: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0042814C: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x00428150: lbu         $v0, 0x5($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X5);
    // 0x00428154: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
L_00428158:
    // 0x00428158: jr          $ra
    // 0x0042815C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0042815C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0020DAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020DAA4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0020DAA8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0020DAAC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0020DAB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0020DAB4: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0020DAB8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0020DABC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0020DAC0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0020DAC4: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x0020DAC8: sdc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X50, ctx->r29);
    // 0x0020DACC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x0020DAD0: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0020DAD4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0020DAD8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0020DADC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0020DAE0: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0020DAE4: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0020DAE8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0020DAEC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0020DAF0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0020DAF4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0020DAF8: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020DAFC: lwc1        $f11, 0x14($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0020DB00: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0020DB04: lwc1        $f9, 0x1C($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0020DB08: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x0020DB0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x0020DB10: neg.s       $f11, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); 
    ctx->f11.fl = -ctx->f11.fl;
    // 0x0020DB14: swc1        $f11, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x0020DB18: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x0020DB1C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x0020DB20: neg.s       $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); 
    ctx->f9.fl = -ctx->f9.fl;
    // 0x0020DB24: swc1        $f9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x0020DB28: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020DB2C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020DB30: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020DB34: lwc1        $f7, 0x4($s1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020DB38: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020DB3C: mul.s       $f6, $f7, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f7.fl, ctx->f6.fl);
    // 0x0020DB40: lwc1        $f5, 0x8($s1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0020DB44: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020DB48: mul.s       $f4, $f5, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x0020DB4C: lwc1        $f3, 0xC($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0020DB50: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0020DB54: mul.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0020DB58: nop

    // 0x0020DB5C: mul.s       $f1, $f1, $f10
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f10.fl);
    // 0x0020DB60: nop

    // 0x0020DB64: mul.s       $f7, $f7, $f11
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f11.fl);
    // 0x0020DB68: nop

    // 0x0020DB6C: mul.s       $f5, $f5, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f8.fl);
    // 0x0020DB70: nop

    // 0x0020DB74: mul.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f9.fl);
    // 0x0020DB78: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x0020DB7C: add.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f7.fl;
    // 0x0020DB80: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020DB84: add.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f5.fl;
    // 0x0020DB88: add.s       $f22, $f0, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020DB8C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0020DB90: add.s       $f23, $f1, $f3
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f23.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0020DB94: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x0020DB98: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x0020DB9C: nop

    // 0x0020DBA0: bc1f        L_0020DBB0
    if (!c1cs) {
        // 0x0020DBA4: addiu       $s2, $sp, 0x10
        ctx->r18 = ADD32(ctx->r29, 0X10);
            goto L_0020DBB0;
    }
    // 0x0020DBA4: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x0020DBA8: mov.s       $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
    // 0x0020DBAC: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0020DBB0:
    // 0x0020DBB0: jal         0x0021153C
    // 0x0020DBB4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_0021153C(rdram, ctx);
        goto after_0;
    // 0x0020DBB4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x0020DBB8: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0020DBBC: jal         0x002982F0
    // 0x0020DBC0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x0020DBC0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_1:
    // 0x0020DBC4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020DBC8: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0020DBCC: nop

    // 0x0020DBD0: bc1f        L_0020DBFC
    if (!c1cs) {
        // 0x0020DBD4: nop
    
            goto L_0020DBFC;
    }
    // 0x0020DBD4: nop

    // 0x0020DBD8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0020DBDC: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0020DBE0: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x0020DBE4: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x0020DBE8: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0020DBEC: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x0020DBF0: sw          $t0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r8;
    // 0x0020DBF4: j           L_0020DC98
    // 0x0020DBF8: sw          $t1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r9;
        goto L_0020DC98;
    // 0x0020DBF8: sw          $t1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r9;
L_0020DBFC:
    // 0x0020DBFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020DC00: lwc1        $f20, 0x5500($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5500);
    // 0x0020DC04: sub.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x0020DC08: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x0020DC0C: jal         0x002982F0
    // 0x0020DC10: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0020DC10: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    after_2:
    // 0x0020DC14: mul.s       $f12, $f24, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f21.fl);
    // 0x0020DC18: nop

    // 0x0020DC1C: mul.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0020DC20: jal         0x002982F0
    // 0x0020DC24: nop

    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0020DC24: nop

    after_3:
    // 0x0020DC28: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x0020DC2C: mul.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0020DC30: bc1tl       L_0020DC38
    if (c1cs) {
        // 0x0020DC34: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0020DC38;
    }
    goto skip_0;
    // 0x0020DC34: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_0:
L_0020DC38:
    // 0x0020DC38: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020DC3C: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DC40: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020DC44: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DC48: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DC4C: swc1        $f1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DC50: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020DC54: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DC58: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020DC5C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DC60: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DC64: swc1        $f1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DC68: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0020DC6C: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DC70: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020DC74: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DC78: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DC7C: swc1        $f1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DC80: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0020DC84: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DC88: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0020DC8C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DC90: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DC94: swc1        $f1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_0020DC98:
    // 0x0020DC98: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0020DC9C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0020DCA0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0020DCA4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0020DCA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0020DCAC: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x0020DCB0: ldc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X50);
    // 0x0020DCB4: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x0020DCB8: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0020DCBC: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0020DCC0: jr          $ra
    // 0x0020DCC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0020DCC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00422814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422814: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00422818: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042281C: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x00422820: jr          $ra
    // 0x00422824: nop

    return;
    // 0x00422824: nop

;}
RECOMP_FUNC void func_0026E760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E760: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0026E764: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0026E768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026E76C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0026E770: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0026E774: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x0026E778: sdc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X48, ctx->r29);
    // 0x0026E77C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x0026E780: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x0026E784: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0026E788: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x0026E78C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x0026E790: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x0026E794: lwc1        $f22, 0x28($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X28);
    // 0x0026E798: jal         0x0029DFF0
    // 0x0026E79C: nop

    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0026E79C: nop

    after_0:
    // 0x0026E7A0: jal         0x0027BC34
    // 0x0026E7A4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_0027BC34(rdram, ctx);
        goto after_1;
    // 0x0026E7A4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0026E7A8: bne         $v0, $zero, L_0026E7C0
    if (ctx->r2 != 0) {
        // 0x0026E7AC: nop
    
            goto L_0026E7C0;
    }
    // 0x0026E7AC: nop

    // 0x0026E7B0: jal         0x00284188
    // 0x0026E7B4: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x0026E7B4: nop

    after_2:
    // 0x0026E7B8: beq         $v0, $zero, L_0026E7CC
    if (ctx->r2 == 0) {
        // 0x0026E7BC: nop
    
            goto L_0026E7CC;
    }
    // 0x0026E7BC: nop

L_0026E7C0:
    // 0x0026E7C0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0026E7C4: j           L_0026E8B8
    // 0x0026E7C8: nop

        goto L_0026E8B8;
    // 0x0026E7C8: nop

L_0026E7CC:
    // 0x0026E7CC: lw          $s0, 0x14($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X14);
    // 0x0026E7D0: beq         $s0, $zero, L_0026E8B8
    if (ctx->r16 == 0) {
        // 0x0026E7D4: nop
    
            goto L_0026E8B8;
    }
    // 0x0026E7D4: nop

    // 0x0026E7D8: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x0026E7DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026E7E0: lwc1        $f24, -0x7FB0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X7FB0);
L_0026E7E4:
    // 0x0026E7E4: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x0026E7E8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0026E7EC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x0026E7F0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0026E7F4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026E7F8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0026E7FC: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026E800: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0026E804: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026E808: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0026E80C: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026E810: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0026E814: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0026E818: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0026E81C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0026E820: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0026E824: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x0026E828: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0026E82C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026E830: jal         0x00298470
    // 0x0026E834: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0026E834: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0026E838: c.eq.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl == ctx->f23.fl;
    // 0x0026E83C: nop

    // 0x0026E840: bc1t        L_0026E85C
    if (c1cs) {
        // 0x0026E844: nop
    
            goto L_0026E85C;
    }
    // 0x0026E844: nop

    // 0x0026E848: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x0026E84C: c.eq.s      $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f1.fl == ctx->f23.fl;
    // 0x0026E850: nop

    // 0x0026E854: bc1f        L_0026E86C
    if (!c1cs) {
        // 0x0026E858: nop
    
            goto L_0026E86C;
    }
    // 0x0026E858: nop

L_0026E85C:
    // 0x0026E85C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026E860: lwc1        $f21, -0x7FAC($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X7FAC);
    // 0x0026E864: j           L_0026E884
    // 0x0026E868: nop

        goto L_0026E884;
    // 0x0026E868: nop

L_0026E86C:
    // 0x0026E86C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0026E870: nop

    // 0x0026E874: bc1f        L_0026E884
    if (!c1cs) {
        // 0x0026E878: mov.s       $f21, $f23
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    ctx->f21.fl = ctx->f23.fl;
            goto L_0026E884;
    }
    // 0x0026E878: mov.s       $f21, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    ctx->f21.fl = ctx->f23.fl;
    // 0x0026E87C: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026E880: sub.s       $f21, $f24, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f24.fl - ctx->f0.fl;
L_0026E884:
    // 0x0026E884: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0026E888: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0026E88C: jal         0x0026EF30
    // 0x0026E890: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_0026EF30(rdram, ctx);
        goto after_4;
    // 0x0026E890: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_4:
    // 0x0026E894: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x0026E898: jal         0x0026EF30
    // 0x0026E89C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026EF30(rdram, ctx);
        goto after_5;
    // 0x0026E89C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x0026E8A0: mul.s       $f20, $f21, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x0026E8A4: nop

    // 0x0026E8A8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0026E8AC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0026E8B0: bne         $s0, $zero, L_0026E7E4
    if (ctx->r16 != 0) {
        // 0x0026E8B4: add.s       $f22, $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f20.fl;
            goto L_0026E7E4;
    }
    // 0x0026E8B4: add.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f20.fl;
L_0026E8B8:
    // 0x0026E8B8: jal         0x0029E010
    // 0x0026E8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x0026E8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0026E8C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026E8C4: lwc1        $f1, -0x7FA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7FA8);
    // 0x0026E8C8: c.lt.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl < ctx->f22.fl;
    // 0x0026E8CC: nop

    // 0x0026E8D0: bc1t        L_0026E8F0
    if (c1cs) {
        // 0x0026E8D4: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_0026E8F0;
    }
    // 0x0026E8D4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0026E8D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026E8DC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0026E8E0: nop

    // 0x0026E8E4: bc1t        L_0026E900
    if (c1cs) {
        // 0x0026E8E8: nop
    
            goto L_0026E900;
    }
    // 0x0026E8E8: nop

    // 0x0026E8EC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_0026E8F0:
    // 0x0026E8F0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026E8F4: nop

    // 0x0026E8F8: bc1tl       L_0026E900
    if (c1cs) {
        // 0x0026E8FC: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026E900;
    }
    goto skip_0;
    // 0x0026E8FC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0026E900:
    // 0x0026E900: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0026E904: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0026E908: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0026E90C: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x0026E910: ldc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X48);
    // 0x0026E914: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x0026E918: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0026E91C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0026E920: jr          $ra
    // 0x0026E924: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0026E924: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00456434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00456434:
    // 0x00456434: lbu         $a3, 0x0($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X0);
    // 0x00456438: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045643C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00456440: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00456444: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x00456448: bne         $v1, $v0, L_00456460
    if (ctx->r3 != ctx->r2) {
        // 0x0045644C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00456460;
    }
    // 0x0045644C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00456450: beql        $v1, $zero, L_00456464
    if (ctx->r3 == 0) {
        // 0x00456454: xor         $v0, $v0, $a3
        ctx->r2 = ctx->r2 ^ ctx->r7;
            goto L_00456464;
    }
    goto skip_0;
    // 0x00456454: xor         $v0, $v0, $a3
    ctx->r2 = ctx->r2 ^ ctx->r7;
    skip_0:
    // 0x00456458: beq         $a2, $zero, L_00456434
    if (ctx->r6 == 0) {
        // 0x0045645C: nop
    
            goto L_00456434;
    }
    // 0x0045645C: nop

L_00456460:
    // 0x00456460: xor         $v0, $v0, $a3
    ctx->r2 = ctx->r2 ^ ctx->r7;
L_00456464:
    // 0x00456464: jr          $ra
    // 0x00456468: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00456468: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_00216604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00216604: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00216608: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x0021660C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00216610: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00216614: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x00216618: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0021661C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x00216620: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x00216624: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00216628: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0021662C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00216630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00216634: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00216638: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0021663C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00216640: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00216644: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00216648: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0021664C: beq         $v1, $v0, L_00216690
    if (ctx->r3 == ctx->r2) {
        // 0x00216650: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_00216690;
    }
    // 0x00216650: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00216654: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00216658: beq         $v0, $zero, L_00216670
    if (ctx->r2 == 0) {
        // 0x0021665C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00216670;
    }
    // 0x0021665C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00216660: beq         $v1, $zero, L_00216680
    if (ctx->r3 == 0) {
        // 0x00216664: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00216680;
    }
    // 0x00216664: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00216668: j           L_002166AC
    // 0x0021666C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
        goto L_002166AC;
    // 0x0021666C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
L_00216670:
    // 0x00216670: beq         $v1, $v0, L_002166A0
    if (ctx->r3 == ctx->r2) {
        // 0x00216674: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_002166A0;
    }
    // 0x00216674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00216678: j           L_002166AC
    // 0x0021667C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
        goto L_002166AC;
    // 0x0021667C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
L_00216680:
    // 0x00216680: lui         $s7, 0x22
    ctx->r23 = S32(0X22 << 16);
    // 0x00216684: addiu       $s7, $s7, -0x79E0
    ctx->r23 = ADD32(ctx->r23, -0X79E0);
    // 0x00216688: j           L_002166AC
    // 0x0021668C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
        goto L_002166AC;
    // 0x0021668C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
L_00216690:
    // 0x00216690: lui         $s7, 0x21
    ctx->r23 = S32(0X21 << 16);
    // 0x00216694: addiu       $s7, $s7, 0x6464
    ctx->r23 = ADD32(ctx->r23, 0X6464);
    // 0x00216698: j           L_002166A8
    // 0x0021669C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_002166A8;
    // 0x0021669C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_002166A0:
    // 0x002166A0: lui         $s7, 0x22
    ctx->r23 = S32(0X22 << 16);
    // 0x002166A4: addiu       $s7, $s7, -0x7928
    ctx->r23 = ADD32(ctx->r23, -0X7928);
L_002166A8:
    // 0x002166A8: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
L_002166AC:
    // 0x002166AC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x002166B0: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x002166B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002166B8: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    // 0x002166BC: blez        $s6, L_002166E4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x002166C0: sw          $v0, 0x4($s5)
        MEM_W(0X4, ctx->r21) = ctx->r2;
            goto L_002166E4;
    }
    // 0x002166C0: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x002166C4: lui         $a2, 0xDEAD
    ctx->r6 = S32(0XDEAD << 16);
    // 0x002166C8: ori         $a2, $a2, 0xBEEF
    ctx->r6 = ctx->r6 | 0XBEEF;
    // 0x002166CC: addiu       $v1, $s5, 0x4
    ctx->r3 = ADD32(ctx->r21, 0X4);
L_002166D0:
    // 0x002166D0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x002166D4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x002166D8: slt         $v0, $s6, $a1
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x002166DC: beq         $v0, $zero, L_002166D0
    if (ctx->r2 == 0) {
        // 0x002166E0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_002166D0;
    }
    // 0x002166E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_002166E4:
    // 0x002166E4: blez        $s6, L_00216760
    if (SIGNED(ctx->r22) <= 0) {
        // 0x002166E8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00216760;
    }
    // 0x002166E8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002166EC: lui         $a3, 0xDEAD
    ctx->r7 = S32(0XDEAD << 16);
    // 0x002166F0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002166F4: lw          $v0, 0x67A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X67A8);
    // 0x002166F8: ori         $a3, $a3, 0xBEEF
    ctx->r7 = ctx->r7 | 0XBEEF;
    // 0x002166FC: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
L_00216700:
    // 0x00216700: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x00216704: bltz        $a2, L_0021672C
    if (SIGNED(ctx->r6) < 0) {
        // 0x00216708: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0021672C;
    }
    // 0x00216708: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021670C: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_00216710:
    // 0x00216710: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00216714: beql        $v0, $a3, L_00216730
    if (ctx->r2 == ctx->r7) {
        // 0x00216718: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_00216730;
    }
    goto skip_0;
    // 0x00216718: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_0:
    // 0x0021671C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00216720: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00216724: beq         $v0, $zero, L_00216710
    if (ctx->r2 == 0) {
        // 0x00216728: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00216710;
    }
    // 0x00216728: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_0021672C:
    // 0x0021672C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_00216730:
    // 0x00216730: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00216734: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x00216738: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021673C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00216740: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00216744: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00216748: addu        $v1, $s5, $v1
    ctx->r3 = ADD32(ctx->r21, ctx->r3);
    // 0x0021674C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00216750: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00216754: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00216758: bne         $v0, $zero, L_00216700
    if (ctx->r2 != 0) {
        // 0x0021675C: nop
    
            goto L_00216700;
    }
    // 0x0021675C: nop

L_00216760:
    // 0x00216760: jal         0x00217B04
    // 0x00216764: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_00217B04(rdram, ctx);
        goto after_0;
    // 0x00216764: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_0:
    // 0x00216768: blez        $s6, L_002167D0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0021676C: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_002167D0;
    }
    // 0x0021676C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00216770: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x00216774: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_00216778:
    // 0x00216778: jal         0x002017D4
    // 0x0021677C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021677C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00216780: blez        $fp, L_002167C0
    if (SIGNED(ctx->r30) <= 0) {
        // 0x00216784: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002167C0;
    }
    // 0x00216784: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00216788: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021678C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00216790:
    // 0x00216790: jal         0x00217C58
    // 0x00216794: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_00217C58(rdram, ctx);
        goto after_2;
    // 0x00216794: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_2:
    // 0x00216798: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021679C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002167A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x002167A4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x002167A8: lw          $a2, 0x67A4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X67A4);
    // 0x002167AC: jalr        $s7
    // 0x002167B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_3;
    // 0x002167B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_3:
    // 0x002167B4: slt         $v0, $s1, $fp
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x002167B8: bne         $v0, $zero, L_00216790
    if (ctx->r2 != 0) {
        // 0x002167BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00216790;
    }
    // 0x002167BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002167C0:
    // 0x002167C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002167C4: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x002167C8: bne         $v0, $zero, L_00216778
    if (ctx->r2 != 0) {
        // 0x002167CC: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00216778;
    }
    // 0x002167CC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_002167D0:
    // 0x002167D0: blez        $s6, L_002168C8
    if (SIGNED(ctx->r22) <= 0) {
        // 0x002167D4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_002168C8;
    }
    // 0x002167D4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002167D8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x002167DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002167E0: lwc1        $f20, 0x5968($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5968);
    // 0x002167E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_002167E8:
    // 0x002167E8: jal         0x002017D4
    // 0x002167EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x002167EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x002167F0: bne         $fp, $s0, L_002168B8
    if (ctx->r30 != ctx->r16) {
        // 0x002167F4: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_002168B8;
    }
    // 0x002167F4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x002167F8: beql        $s4, $zero, L_002168BC
    if (ctx->r20 == 0) {
        // 0x002167FC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_002168BC;
    }
    goto skip_1;
    // 0x002167FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x00216800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00216804: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00216808: lw          $a1, 0x67A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X67A8);
L_0021680C:
    // 0x0021680C: blez        $a1, L_002168A8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00216810: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002168A8;
    }
    // 0x00216810: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00216814: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_00216818:
    // 0x00216818: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0021681C: negu        $a0, $s4
    ctx->r4 = SUB32(0, ctx->r20);
    // 0x00216820: slt         $v0, $s4, $a0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216824: bne         $v0, $zero, L_00216888
    if (ctx->r2 != 0) {
        // 0x00216828: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_00216888;
    }
    // 0x00216828: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
L_0021682C:
    // 0x0021682C: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x00216830: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00216834: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x00216838: bne         $a1, $zero, L_00216844
    if (ctx->r5 != 0) {
        // 0x0021683C: nop
    
            goto L_00216844;
    }
    // 0x0021683C: nop

    // 0x00216840: break       7
    do_break(2189376);
L_00216844:
    // 0x00216844: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00216848: bne         $a1, $at, L_0021685C
    if (ctx->r5 != ctx->r1) {
        // 0x0021684C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0021685C;
    }
    // 0x0021684C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00216850: bne         $v0, $at, L_0021685C
    if (ctx->r2 != ctx->r1) {
        // 0x00216854: nop
    
            goto L_0021685C;
    }
    // 0x00216854: nop

    // 0x00216858: break       6
    do_break(2189400);
L_0021685C:
    // 0x0021685C: mfhi        $v1
    ctx->r3 = hi;
    // 0x00216860: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00216864: add.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x00216868: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021686C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00216870: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00216874: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x00216878: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0021687C: slt         $v0, $s4, $a0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00216880: beq         $v0, $zero, L_0021682C
    if (ctx->r2 == 0) {
        // 0x00216884: add.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_0021682C;
    }
    // 0x00216884: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_00216888:
    // 0x00216888: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x0021688C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00216890: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00216894: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x00216898: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0021689C: slt         $v0, $s1, $a1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x002168A0: bne         $v0, $zero, L_00216818
    if (ctx->r2 != 0) {
        // 0x002168A4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00216818;
    }
    // 0x002168A4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_002168A8:
    // 0x002168A8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x002168AC: slt         $v0, $a2, $fp
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x002168B0: bne         $v0, $zero, L_0021680C
    if (ctx->r2 != 0) {
        // 0x002168B4: nop
    
            goto L_0021680C;
    }
    // 0x002168B4: nop

L_002168B8:
    // 0x002168B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_002168BC:
    // 0x002168BC: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x002168C0: bnel        $v0, $zero, L_002167E8
    if (ctx->r2 != 0) {
        // 0x002168C4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_002167E8;
    }
    goto skip_2;
    // 0x002168C4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_2:
L_002168C8:
    // 0x002168C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002168CC: bne         $fp, $v0, L_0021692C
    if (ctx->r30 != ctx->r2) {
        // 0x002168D0: nop
    
            goto L_0021692C;
    }
    // 0x002168D0: nop

    // 0x002168D4: blez        $s6, L_0021692C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x002168D8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0021692C;
    }
    // 0x002168D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002168DC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_002168E0:
    // 0x002168E0: jal         0x002017D4
    // 0x002168E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002168E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x002168E8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002168EC: lw          $v1, 0x67A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X67A8);
    // 0x002168F0: blez        $v1, L_0021691C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x002168F4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0021691C;
    }
    // 0x002168F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002168F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_002168FC:
    // 0x002168FC: jal         0x00211074
    // 0x00216900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00211074(rdram, ctx);
        goto after_6;
    // 0x00216900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00216904: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00216908: lw          $v0, 0x67A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X67A8);
    // 0x0021690C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00216910: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00216914: bne         $v0, $zero, L_002168FC
    if (ctx->r2 != 0) {
        // 0x00216918: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_002168FC;
    }
    // 0x00216918: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_0021691C:
    // 0x0021691C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00216920: slt         $v0, $s1, $s6
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00216924: bnel        $v0, $zero, L_002168E0
    if (ctx->r2 != 0) {
        // 0x00216928: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_002168E0;
    }
    goto skip_3;
    // 0x00216928: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_3:
L_0021692C:
    // 0x0021692C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00216930: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00216934: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00216938: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0021693C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00216940: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00216944: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00216948: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0021694C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00216950: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00216954: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00216958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021695C: jr          $ra
    // 0x00216960: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00216960: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00454708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454708: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045470C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454710: xori        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 ^ 0X800;
    // 0x00454714: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454718: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0045471C: jr          $ra
    // 0x00454720: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454720: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002706A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002706A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002706A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002706A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002706AC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002706B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002706B4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002706B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002706BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002706C0: beq         $a2, $v0, L_002708A4
    if (ctx->r6 == ctx->r2) {
        // 0x002706C4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_002708A4;
    }
    // 0x002706C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002706C8: addiu       $a0, $s1, 0x1DBC
    ctx->r4 = ADD32(ctx->r17, 0X1DBC);
    // 0x002706CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002706D0:
    // 0x002706D0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002706D4: beq         $v0, $a2, L_002706F0
    if (ctx->r2 == ctx->r6) {
        // 0x002706D8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_002706F0;
    }
    // 0x002706D8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002706DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002706E0: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x002706E4: bne         $v0, $zero, L_002706D0
    if (ctx->r2 != 0) {
        // 0x002706E8: addiu       $a0, $a0, 0xCC
        ctx->r4 = ADD32(ctx->r4, 0XCC);
            goto L_002706D0;
    }
    // 0x002706E8: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, 0XCC);
    // 0x002706EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002706F0:
    // 0x002706F0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002706F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002706F8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002706FC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00270700: beq         $v1, $a1, L_002708A4
    if (ctx->r3 == ctx->r5) {
        // 0x00270704: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002708A4;
    }
    // 0x00270704: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270708: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0027070C: bnel        $v1, $v0, L_00270728
    if (ctx->r3 != ctx->r2) {
        // 0x00270710: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_00270728;
    }
    goto skip_0;
    // 0x00270710: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    skip_0:
    // 0x00270714: addiu       $a0, $s1, 0x138
    ctx->r4 = ADD32(ctx->r17, 0X138);
    // 0x00270718: jal         0x002764C4
    // 0x0027071C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_002764C4(rdram, ctx);
        goto after_0;
    // 0x0027071C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00270720: j           L_002708A4
    // 0x00270724: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_002708A4;
    // 0x00270724: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00270728:
    // 0x00270728: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0027072C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00270730: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00270734: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00270738: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
    // 0x0027073C: addiu       $s0, $v0, 0x1DCC
    ctx->r16 = ADD32(ctx->r2, 0X1DCC);
    // 0x00270740: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00270744: bne         $v0, $zero, L_00270774
    if (ctx->r2 != 0) {
        // 0x00270748: addiu       $s2, $s1, 0x84
        ctx->r18 = ADD32(ctx->r17, 0X84);
            goto L_00270774;
    }
    // 0x00270748: addiu       $s2, $s1, 0x84
    ctx->r18 = ADD32(ctx->r17, 0X84);
    // 0x0027074C: addu        $a0, $s1, $v1
    ctx->r4 = ADD32(ctx->r17, ctx->r3);
    // 0x00270750: lw          $v1, 0x1E60($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1E60);
    // 0x00270754: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00270758: bnel        $v0, $zero, L_00270778
    if (ctx->r2 != 0) {
        // 0x0027075C: addiu       $a0, $s1, 0x1DB8
        ctx->r4 = ADD32(ctx->r17, 0X1DB8);
            goto L_00270778;
    }
    goto skip_1;
    // 0x0027075C: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    skip_1:
    // 0x00270760: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00270764: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x00270768: sw          $v1, 0x1E60($a0)
    MEM_W(0X1E60, ctx->r4) = ctx->r3;
    // 0x0027076C: j           L_002708A4
    // 0x00270770: sh          $a1, 0x102($s1)
    MEM_H(0X102, ctx->r17) = ctx->r5;
        goto L_002708A4;
    // 0x00270770: sh          $a1, 0x102($s1)
    MEM_H(0X102, ctx->r17) = ctx->r5;
L_00270774:
    // 0x00270774: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
L_00270778:
    // 0x00270778: sll         $a1, $s3, 16
    ctx->r5 = S32(ctx->r19 << 16);
    // 0x0027077C: jal         0x00273B90
    // 0x00270780: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00273B90(rdram, ctx);
        goto after_1;
    // 0x00270780: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x00270784: bne         $v0, $zero, L_0027089C
    if (ctx->r2 != 0) {
        // 0x00270788: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0027089C;
    }
    // 0x00270788: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027078C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x00270790: jal         0x00293DE0
    // 0x00270794: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00293DE0(rdram, ctx);
        goto after_2;
    // 0x00270794: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00270798: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x0027079C: lw          $v1, 0x2B9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2B9C);
    // 0x002707A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002707A4: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002707A8: beq         $v0, $zero, L_002707C0
    if (ctx->r2 == 0) {
        // 0x002707AC: addiu       $a1, $zero, 0x7F
        ctx->r5 = ADD32(0, 0X7F);
            goto L_002707C0;
    }
    // 0x002707AC: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x002707B0: lbu         $v0, 0x11($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X11);
    // 0x002707B4: lbu         $v1, 0x2B9F($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2B9F);
    // 0x002707B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002707BC: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
L_002707C0:
    // 0x002707C0: jal         0x00293D40
    // 0x002707C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00293D40(rdram, ctx);
        goto after_3;
    // 0x002707C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x002707C8: lbu         $a1, 0x19($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X19);
    // 0x002707CC: jal         0x00293D90
    // 0x002707D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00293D90(rdram, ctx);
        goto after_4;
    // 0x002707D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x002707D4: sll         $v1, $s3, 16
    ctx->r3 = S32(ctx->r19 << 16);
    // 0x002707D8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002707DC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002707E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002707E4: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x002707E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002707EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002707F0: addu        $v1, $s1, $v0
    ctx->r3 = ADD32(ctx->r17, ctx->r2);
    // 0x002707F4: lw          $v0, 0x1E60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E60);
    // 0x002707F8: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x002707FC: beq         $v0, $zero, L_00270810
    if (ctx->r2 == 0) {
        // 0x00270800: nop
    
            goto L_00270810;
    }
    // 0x00270800: nop

    // 0x00270804: lwc1        $f1, 0x2BA8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2BA8);
    // 0x00270808: j           L_00270838
    // 0x0027080C: nop

        goto L_00270838;
    // 0x0027080C: nop

L_00270810:
    // 0x00270810: lw          $v0, 0x1E80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E80);
    // 0x00270814: lwc1        $f1, 0x2BA0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2BA0);
    // 0x00270818: beq         $v0, $zero, L_00270838
    if (ctx->r2 == 0) {
        // 0x0027081C: nop
    
            goto L_00270838;
    }
    // 0x0027081C: nop

    // 0x00270820: lw          $v0, 0x2BB8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2BB8);
    // 0x00270824: beq         $v0, $zero, L_00270838
    if (ctx->r2 == 0) {
        // 0x00270828: nop
    
            goto L_00270838;
    }
    // 0x00270828: nop

    // 0x0027082C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00270830: lwc1        $f0, -0x7F38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F38);
    // 0x00270834: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00270838:
    // 0x00270838: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0027083C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00270840: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00270844: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00270848: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027084C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00270850: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00270854: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00270858: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0027085C: jal         0x00293E70
    // 0x00270860: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00293E70(rdram, ctx);
        goto after_5;
    // 0x00270860: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_5:
    // 0x00270864: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x00270868: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027086C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00270870: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00270874: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00270878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0027087C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00270880: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00270884: lw          $v0, 0x1E5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E5C);
    // 0x00270888: bne         $v0, $zero, L_0027089C
    if (ctx->r2 != 0) {
        // 0x0027088C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0027089C;
    }
    // 0x0027088C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270890: jal         0x00273BF8
    // 0x00270894: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    func_00273BF8(rdram, ctx);
        goto after_6;
    // 0x00270894: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    after_6:
    // 0x00270898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0027089C:
    // 0x0027089C: sh          $v0, 0x102($s1)
    MEM_H(0X102, ctx->r17) = ctx->r2;
    // 0x002708A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002708A4:
    // 0x002708A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002708A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002708AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002708B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002708B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002708B8: jr          $ra
    // 0x002708BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002708BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0027BD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BD0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0027BD10 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0027BD10(rdram, ctx);
;}
RECOMP_FUNC void func_002A2264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2264: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002A2268: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002A226C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x002A2270: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A2274: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x002A2278: addiu       $fp, $v0, -0x53A0
    ctx->r30 = ADD32(ctx->r2, -0X53A0);
    // 0x002A227C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002A2280: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x002A2284: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002A2288: addiu       $s4, $zero, -0x2
    ctx->r20 = ADD32(0, -0X2);
    // 0x002A228C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A2290: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x002A2294: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A2298: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x002A229C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x002A22A0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x002A22A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x002A22A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A22AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A22B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_002A22B4:
    // 0x002A22B4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A22B8:
    // 0x002A22B8: jal         0x002A1384
    // 0x002A22BC: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A22BC: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    after_0:
    // 0x002A22C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A22C4: bne         $s0, $zero, L_002A22DC
    if (ctx->r16 != 0) {
        // 0x002A22C8: nop
    
            goto L_002A22DC;
    }
    // 0x002A22C8: nop

    // 0x002A22CC: jal         0x002A13BC
    // 0x002A22D0: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_002A13BC(rdram, ctx);
        goto after_1;
    // 0x002A22D0: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_1:
    // 0x002A22D4: j           L_002A22B8
    // 0x002A22D8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A22B8;
    // 0x002A22D8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A22DC:
    // 0x002A22DC: bne         $s0, $s6, L_002A2300
    if (ctx->r16 != ctx->r22) {
        // 0x002A22E0: lui         $a0, 0xB1FF
        ctx->r4 = S32(0XB1FF << 16);
            goto L_002A2300;
    }
    // 0x002A22E0: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A22E4: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x002A22E8: jal         0x002A1350
    // 0x002A22EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_2;
    // 0x002A22EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x002A22F0: jal         0x002A13BC
    // 0x002A22F4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_002A13BC(rdram, ctx);
        goto after_3;
    // 0x002A22F4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_3:
    // 0x002A22F8: j           L_002A2444
    // 0x002A22FC: nop

        goto L_002A2444;
    // 0x002A22FC: nop

L_002A2300:
    // 0x002A2300: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x002A2304: jal         0x002A1350
    // 0x002A2308: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    func_002A1350(rdram, ctx);
        goto after_4;
    // 0x002A2308: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_4:
    // 0x002A230C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A2310:
    // 0x002A2310: jal         0x002A1384
    // 0x002A2314: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    func_002A1384(rdram, ctx);
        goto after_5;
    // 0x002A2314: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    after_5:
    // 0x002A2318: bne         $v0, $s0, L_002A2330
    if (ctx->r2 != ctx->r16) {
        // 0x002A231C: lui         $a0, 0xB1FF
        ctx->r4 = S32(0XB1FF << 16);
            goto L_002A2330;
    }
    // 0x002A231C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2320: jal         0x002A13BC
    // 0x002A2324: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    func_002A13BC(rdram, ctx);
        goto after_6;
    // 0x002A2324: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    after_6:
    // 0x002A2328: j           L_002A2310
    // 0x002A232C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A2310;
    // 0x002A232C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A2330:
    // 0x002A2330: jal         0x002A1384
    // 0x002A2334: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    func_002A1384(rdram, ctx);
        goto after_7;
    // 0x002A2334: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    after_7:
    // 0x002A2338: bne         $v0, $s6, L_002A2358
    if (ctx->r2 != ctx->r22) {
        // 0x002A233C: addiu       $v1, $s0, -0x10
        ctx->r3 = ADD32(ctx->r16, -0X10);
            goto L_002A2358;
    }
    // 0x002A233C: addiu       $v1, $s0, -0x10
    ctx->r3 = ADD32(ctx->r16, -0X10);
    // 0x002A2340: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2344: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x002A2348: jal         0x002A1350
    // 0x002A234C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_8;
    // 0x002A234C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x002A2350: j           L_002A2444
    // 0x002A2354: nop

        goto L_002A2444;
    // 0x002A2354: nop

L_002A2358:
    // 0x002A2358: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x002A235C: beq         $v0, $zero, L_002A2410
    if (ctx->r2 == 0) {
        // 0x002A2360: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002A2410;
    }
    // 0x002A2360: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002A2364: addu        $v0, $v0, $fp
    gpr jr_addend_002A236C = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x002A2368: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x002A236C: jr          $v0
    // 0x002A2370: nop

    switch (jr_addend_002A236C >> 2) {
        case 0: goto L_002A2410; break;
        case 1: goto L_002A2374; break;
        case 2: goto L_002A237C; break;
        case 3: goto L_002A23A4; break;
        case 4: goto L_002A23B0; break;
        case 5: goto L_002A23BC; break;
        case 6: goto L_002A23C4; break;
        case 7: goto L_002A23E8; break;
        case 8: goto L_002A23F8; break;
        case 9: goto L_002A2408; break;
        default: switch_error(__func__, 0x002A236C, 0x800AAC60);
    }
    // 0x002A2370: nop

L_002A2374:
    // 0x002A2374: j           L_002A2410
    // 0x002A2378: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_002A2410;
    // 0x002A2378: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_002A237C:
    // 0x002A237C: lw          $v0, -0x7928($s5)
    ctx->r2 = MEM_W(ctx->r21, -0X7928);
    // 0x002A2380: sb          $zero, -0x7780($s3)
    MEM_B(-0X7780, ctx->r19) = 0;
    // 0x002A2384: sb          $zero, -0x777E($s1)
    MEM_B(-0X777E, ctx->r17) = 0;
    // 0x002A2388: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x002A238C: jal         0x002A31E4
    // 0x002A2390: sw          $v0, -0x7928($s5)
    MEM_W(-0X7928, ctx->r21) = ctx->r2;
    func_002A31E4(rdram, ctx);
        goto after_9;
    // 0x002A2390: sw          $v0, -0x7928($s5)
    MEM_W(-0X7928, ctx->r21) = ctx->r2;
    after_9:
    // 0x002A2394: jal         0x002A31F0
    // 0x002A2398: and         $a0, $v0, $s4
    ctx->r4 = ctx->r2 & ctx->r20;
    func_002A31F0(rdram, ctx);
        goto after_10;
    // 0x002A2398: and         $a0, $v0, $s4
    ctx->r4 = ctx->r2 & ctx->r20;
    after_10:
    // 0x002A239C: j           L_002A2414
    // 0x002A23A0: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A2414;
    // 0x002A23A0: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A23A4:
    // 0x002A23A4: sb          $zero, -0x777E($s1)
    MEM_B(-0X777E, ctx->r17) = 0;
    // 0x002A23A8: j           L_002A2410
    // 0x002A23AC: sb          $zero, -0x7780($s3)
    MEM_B(-0X7780, ctx->r19) = 0;
        goto L_002A2410;
    // 0x002A23AC: sb          $zero, -0x7780($s3)
    MEM_B(-0X7780, ctx->r19) = 0;
L_002A23B0:
    // 0x002A23B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x002A23B4: j           L_002A2410
    // 0x002A23B8: sb          $v0, -0x777E($s1)
    MEM_B(-0X777E, ctx->r17) = ctx->r2;
        goto L_002A2410;
    // 0x002A23B8: sb          $v0, -0x777E($s1)
    MEM_B(-0X777E, ctx->r17) = ctx->r2;
L_002A23BC:
    // 0x002A23BC: j           L_002A2410
    // 0x002A23C0: sb          $zero, -0x777E($s1)
    MEM_B(-0X777E, ctx->r17) = 0;
        goto L_002A2410;
    // 0x002A23C0: sb          $zero, -0x777E($s1)
    MEM_B(-0X777E, ctx->r17) = 0;
L_002A23C4:
    // 0x002A23C4: lui         $a0, 0xB1FE
    ctx->r4 = S32(0XB1FE << 16);
    // 0x002A23C8: lbu         $v0, -0x777E($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X777E);
    // 0x002A23CC: lbu         $a1, -0x7780($s3)
    ctx->r5 = MEM_BU(ctx->r19, -0X7780);
    // 0x002A23D0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x002A23D4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x002A23D8: jal         0x002A1350
    // 0x002A23DC: or          $a1, $v0, $a1
    ctx->r5 = ctx->r2 | ctx->r5;
    func_002A1350(rdram, ctx);
        goto after_11;
    // 0x002A23DC: or          $a1, $v0, $a1
    ctx->r5 = ctx->r2 | ctx->r5;
    after_11:
    // 0x002A23E0: j           L_002A2414
    // 0x002A23E4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A2414;
    // 0x002A23E4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A23E8:
    // 0x002A23E8: jal         0x002A1DEC
    // 0x002A23EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_002A1DEC(rdram, ctx);
        goto after_12;
    // 0x002A23EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_12:
    // 0x002A23F0: j           L_002A2414
    // 0x002A23F4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A2414;
    // 0x002A23F4: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A23F8:
    // 0x002A23F8: jal         0x002A1DEC
    // 0x002A23FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_002A1DEC(rdram, ctx);
        goto after_13;
    // 0x002A23FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x002A2400: j           L_002A2414
    // 0x002A2404: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A2414;
    // 0x002A2404: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A2408:
    // 0x002A2408: jal         0x002A2008
    // 0x002A240C: nop

    func_002A2008(rdram, ctx);
        goto after_14;
    // 0x002A240C: nop

    after_14:
L_002A2410:
    // 0x002A2410: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A2414:
    // 0x002A2414: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x002A2418: jal         0x002A1350
    // 0x002A241C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_15;
    // 0x002A241C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_15:
    // 0x002A2420: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A2424:
    // 0x002A2424: jal         0x002A1384
    // 0x002A2428: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    func_002A1384(rdram, ctx);
        goto after_16;
    // 0x002A2428: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    after_16:
    // 0x002A242C: bne         $v0, $s7, L_002A2444
    if (ctx->r2 != ctx->r23) {
        // 0x002A2430: nop
    
            goto L_002A2444;
    }
    // 0x002A2430: nop

    // 0x002A2434: jal         0x002A13BC
    // 0x002A2438: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    func_002A13BC(rdram, ctx);
        goto after_17;
    // 0x002A2438: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    after_17:
    // 0x002A243C: j           L_002A2424
    // 0x002A2440: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
        goto L_002A2424;
    // 0x002A2440: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
L_002A2444:
    // 0x002A2444: bne         $s2, $zero, L_002A22B4
    if (ctx->r18 != 0) {
        // 0x002A2448: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_002A22B4;
    }
    // 0x002A2448: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002A244C: lbu         $v0, -0x777E($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X777E);
    // 0x002A2450: beq         $v0, $zero, L_002A22B8
    if (ctx->r2 == 0) {
        // 0x002A2454: lui         $a0, 0xB1FF
        ctx->r4 = S32(0XB1FF << 16);
            goto L_002A22B8;
    }
    // 0x002A2454: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2458: ori         $a0, $a0, 0xFFF0
    ctx->r4 = ctx->r4 | 0XFFF0;
    // 0x002A245C: jal         0x002A1350
    // 0x002A2460: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002A1350(rdram, ctx);
        goto after_18;
    // 0x002A2460: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_18:
    // 0x002A2464: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002A2468: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x002A246C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x002A2470: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002A2474: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002A2478: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002A247C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A2480: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A2484: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A2488: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A248C: jr          $ra
    // 0x002A2490: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002A2490: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00452400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452404: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452408: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0045240C: addiu       $a2, $a2, -0x74A8
    ctx->r6 = ADD32(ctx->r6, -0X74A8);
    // 0x00452410: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452414: jal         0x00416894
    // 0x00452418: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452418: nop

    after_0:
    // 0x0045241C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452424: jr          $ra
    // 0x00452428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004258E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004258E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004258EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004258F0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004258F4: sll         $v1, $s3, 2
    ctx->r3 = S32(ctx->r19 << 2);
    // 0x004258F8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x004258FC: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x00425900: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00425904: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00425908: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042590C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00425910: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00425914: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00425918: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042591C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425920: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00425924: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00425928: beq         $v0, $zero, L_00425944
    if (ctx->r2 == 0) {
        // 0x0042592C: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00425944;
    }
    // 0x0042592C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00425930: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425934: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00425938: sw          $v0, 0xC70($at)
    MEM_W(0XC70, ctx->r1) = ctx->r2;
    // 0x0042593C: j           L_00425A88
    // 0x00425940: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00425A88;
    // 0x00425940: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00425944:
    // 0x00425944: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00425948: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x0042594C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00425950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00425954: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00425958: sll         $s6, $v0, 3
    ctx->r22 = S32(ctx->r2 << 3);
    // 0x0042595C: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x00425960: addiu       $fp, $fp, 0xC80
    ctx->r30 = ADD32(ctx->r30, 0XC80);
    // 0x00425964: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x00425968: addiu       $s7, $s7, 0x1870
    ctx->r23 = ADD32(ctx->r23, 0X1870);
    // 0x0042596C: addiu       $s5, $zero, -0x5
    ctx->r21 = ADD32(0, -0X5);
    // 0x00425970: addiu       $s4, $zero, -0x2
    ctx->r20 = ADD32(0, -0X2);
    // 0x00425974: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x00425978: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
L_0042597C:
    // 0x0042597C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00425980: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00425984: addu        $a1, $s6, $fp
    ctx->r5 = ADD32(ctx->r22, ctx->r30);
    // 0x00425988: jal         0x00428160
    // 0x0042598C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00428160(rdram, ctx);
        goto after_0;
    // 0x0042598C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00425990: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00425994: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x00425998: beq         $v0, $zero, L_004259F0
    if (ctx->r2 == 0) {
        // 0x0042599C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004259F0;
    }
    // 0x0042599C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004259A0: addu        $v0, $v0, $s7
    gpr jr_addend_004259A8 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x004259A4: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x004259A8: jr          $v0
    // 0x004259AC: nop

    switch (jr_addend_004259A8 >> 2) {
        case 0: goto L_004259B0; break;
        case 1: goto L_004259C4; break;
        case 2: goto L_004259B0; break;
        case 3: goto L_004259F0; break;
        case 4: goto L_004259D8; break;
        case 5: goto L_004259F0; break;
        case 6: goto L_004259F0; break;
        case 7: goto L_004259F0; break;
        case 8: goto L_004259F0; break;
        case 9: goto L_004259F0; break;
        case 10: goto L_004259E0; break;
        case 11: goto L_004259D8; break;
        default: switch_error(__func__, 0x004259A8, 0x800C1870);
    }
    // 0x004259AC: nop

L_004259B0:
    // 0x004259B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004259B4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004259B8: sw          $s5, 0xC70($at)
    MEM_W(0XC70, ctx->r1) = ctx->r21;
    // 0x004259BC: j           L_004259F0
    // 0x004259C0: nop

        goto L_004259F0;
    // 0x004259C0: nop

L_004259C4:
    // 0x004259C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004259C8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004259CC: sw          $s4, 0xC70($at)
    MEM_W(0XC70, ctx->r1) = ctx->r20;
    // 0x004259D0: j           L_004259F0
    // 0x004259D4: nop

        goto L_004259F0;
    // 0x004259D4: nop

L_004259D8:
    // 0x004259D8: j           L_004259E4
    // 0x004259DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
        goto L_004259E4;
    // 0x004259DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
L_004259E0:
    // 0x004259E0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
L_004259E4:
    // 0x004259E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004259E8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004259EC: sw          $v0, 0xC70($at)
    MEM_W(0XC70, ctx->r1) = ctx->r2;
L_004259F0:
    // 0x004259F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004259F4: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x004259F8: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x004259FC: beql        $v0, $s5, L_00425A20
    if (ctx->r2 == ctx->r21) {
        // 0x00425A00: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00425A20;
    }
    goto skip_0;
    // 0x00425A00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x00425A04: beq         $v0, $s4, L_00425A5C
    if (ctx->r2 == ctx->r20) {
        // 0x00425A08: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00425A5C;
    }
    // 0x00425A08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00425A0C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00425A10: bne         $v0, $zero, L_0042597C
    if (ctx->r2 != 0) {
        // 0x00425A14: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_0042597C;
    }
    // 0x00425A14: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00425A18: j           L_00425A60
    // 0x00425A1C: nop

        goto L_00425A60;
    // 0x00425A1C: nop

L_00425A20:
    // 0x00425A20: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425A24: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x00425A28: sw          $v0, 0xC60($at)
    MEM_W(0XC60, ctx->r1) = ctx->r2;
    // 0x00425A2C: jal         0x00425760
    // 0x00425A30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00425760(rdram, ctx);
        goto after_1;
    // 0x00425A30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00425A34: beq         $v0, $zero, L_00425A50
    if (ctx->r2 == 0) {
        // 0x00425A38: addiu       $v0, $zero, -0x4
        ctx->r2 = ADD32(0, -0X4);
            goto L_00425A50;
    }
    // 0x00425A38: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x00425A3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425A40: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x00425A44: sw          $v0, 0xC70($at)
    MEM_W(0XC70, ctx->r1) = ctx->r2;
    // 0x00425A48: j           L_00425A60
    // 0x00425A4C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
        goto L_00425A60;
    // 0x00425A4C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
L_00425A50:
    // 0x00425A50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425A54: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x00425A58: sw          $zero, 0xC70($at)
    MEM_W(0XC70, ctx->r1) = 0;
L_00425A5C:
    // 0x00425A5C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
L_00425A60:
    // 0x00425A60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425A64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00425A68: lw          $v1, 0xC70($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC70);
    // 0x00425A6C: beq         $v1, $zero, L_00425A80
    if (ctx->r3 == 0) {
        // 0x00425A70: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00425A80;
    }
    // 0x00425A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425A74: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x00425A78: bne         $v1, $v0, L_00425A88
    if (ctx->r3 != ctx->r2) {
        // 0x00425A7C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00425A88;
    }
    // 0x00425A7C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00425A80:
    // 0x00425A80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00425A84: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00425A88:
    // 0x00425A88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00425A8C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00425A90: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00425A94: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00425A98: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00425A9C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00425AA0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00425AA4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00425AA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00425AAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00425AB0: jr          $ra
    // 0x00425AB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00425AB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00445B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445B28: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00445B2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00445B30: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x00445B34: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x00445B38: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x00445B3C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x00445B40: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x00445B44: blez        $t2, L_00445BA0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x00445B48: addiu       $t0, $sp, 0x4
        ctx->r8 = ADD32(ctx->r29, 0X4);
            goto L_00445BA0;
    }
    // 0x00445B48: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x00445B4C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_00445B50:
    // 0x00445B50: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x00445B54: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00445B58: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x00445B5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445B60: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x00445B64: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x00445B68: beq         $v0, $zero, L_00445B90
    if (ctx->r2 == 0) {
        // 0x00445B6C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00445B90;
    }
    // 0x00445B6C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00445B70: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00445B74: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00445B78: beq         $v0, $zero, L_00445B90
    if (ctx->r2 == 0) {
        // 0x00445B7C: nop
    
            goto L_00445B90;
    }
    // 0x00445B7C: nop

    // 0x00445B80: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x00445B84: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x00445B88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445B8C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_00445B90:
    // 0x00445B90: slt         $v0, $a2, $t2
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x00445B94: bne         $v0, $zero, L_00445B50
    if (ctx->r2 != 0) {
        // 0x00445B98: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00445B50;
    }
    // 0x00445B98: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x00445B9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00445BA0:
    // 0x00445BA0: lw          $t2, 0x18($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X18);
    // 0x00445BA4: addiu       $v0, $a0, 0x1C
    ctx->r2 = ADD32(ctx->r4, 0X1C);
    // 0x00445BA8: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x00445BAC: blez        $t2, L_00445C04
    if (SIGNED(ctx->r10) <= 0) {
        // 0x00445BB0: addiu       $t0, $sp, 0x4
        ctx->r8 = ADD32(ctx->r29, 0X4);
            goto L_00445C04;
    }
    // 0x00445BB0: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x00445BB4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_00445BB8:
    // 0x00445BB8: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x00445BBC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00445BC0: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x00445BC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445BC8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x00445BCC: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x00445BD0: beq         $v0, $zero, L_00445BF8
    if (ctx->r2 == 0) {
        // 0x00445BD4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00445BF8;
    }
    // 0x00445BD4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00445BD8: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00445BDC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00445BE0: beq         $v0, $zero, L_00445BF8
    if (ctx->r2 == 0) {
        // 0x00445BE4: nop
    
            goto L_00445BF8;
    }
    // 0x00445BE4: nop

    // 0x00445BE8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x00445BEC: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x00445BF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445BF4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_00445BF8:
    // 0x00445BF8: slt         $v0, $a2, $t2
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x00445BFC: bne         $v0, $zero, L_00445BB8
    if (ctx->r2 != 0) {
        // 0x00445C00: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00445BB8;
    }
    // 0x00445C00: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_00445C04:
    // 0x00445C04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00445C08: lw          $t1, 0x2C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X2C);
    // 0x00445C0C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x00445C10: addu        $t0, $sp, $zero
    ctx->r8 = ADD32(ctx->r29, 0);
    // 0x00445C14: blez        $t1, L_00445C68
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00445C18: addiu       $a3, $sp, 0x4
        ctx->r7 = ADD32(ctx->r29, 0X4);
            goto L_00445C68;
    }
    // 0x00445C18: addiu       $a3, $sp, 0x4
    ctx->r7 = ADD32(ctx->r29, 0X4);
L_00445C1C:
    // 0x00445C1C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x00445C20: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x00445C24: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x00445C28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445C2C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00445C30: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x00445C34: beq         $v0, $zero, L_00445C5C
    if (ctx->r2 == 0) {
        // 0x00445C38: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00445C5C;
    }
    // 0x00445C38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00445C3C: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00445C40: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00445C44: beq         $v0, $zero, L_00445C5C
    if (ctx->r2 == 0) {
        // 0x00445C48: nop
    
            goto L_00445C5C;
    }
    // 0x00445C48: nop

    // 0x00445C4C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00445C50: lw          $v1, 0x148($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X148);
    // 0x00445C54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445C58: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_00445C5C:
    // 0x00445C5C: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00445C60: bne         $v0, $zero, L_00445C1C
    if (ctx->r2 != 0) {
        // 0x00445C64: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00445C1C;
    }
    // 0x00445C64: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00445C68:
    // 0x00445C68: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x00445C6C: beq         $a0, $zero, L_00445CB8
    if (ctx->r4 == 0) {
        // 0x00445C70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00445CB8;
    }
    // 0x00445C70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00445C74: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x00445C78: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00445C7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445C80: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00445C84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00445C88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00445C8C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x00445C90: bne         $a0, $zero, L_00445C9C
    if (ctx->r4 != 0) {
        // 0x00445C94: nop
    
            goto L_00445C9C;
    }
    // 0x00445C94: nop

    // 0x00445C98: break       7
    do_break(4480152);
L_00445C9C:
    // 0x00445C9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00445CA0: bne         $a0, $at, L_00445CB4
    if (ctx->r4 != ctx->r1) {
        // 0x00445CA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00445CB4;
    }
    // 0x00445CA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00445CA8: bne         $v0, $at, L_00445CB4
    if (ctx->r2 != ctx->r1) {
        // 0x00445CAC: nop
    
            goto L_00445CB4;
    }
    // 0x00445CAC: nop

    // 0x00445CB0: break       6
    do_break(4480176);
L_00445CB4:
    // 0x00445CB4: mflo        $v0
    ctx->r2 = lo;
L_00445CB8:
    // 0x00445CB8: jr          $ra
    // 0x00445CBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00445CBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
