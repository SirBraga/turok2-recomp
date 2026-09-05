#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00423E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423E00: addiu       $v0, $v0, 0x52F8
    ctx->r2 = ADD32(ctx->r2, 0X52F8);
    // 0x00423E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00423E08: jr          $ra
    // 0x00423E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00423E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00423E08: jr          $ra
    // 0x00423E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00423F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423F28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F2C: lw          $t3, 0x2178($at)
    ctx->r11 = MEM_W(ctx->r1, 0X2178);
    // 0x00423F30: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00423F34: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00423F38: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00423F3C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x00423F40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F48: lw          $t0, 0x217C($at)
    ctx->r8 = MEM_W(ctx->r1, 0X217C);
    // 0x00423F4C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00423F50: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00423F54: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00423F58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00423F5C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x00423F60: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x00423F64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F68: sw          $v0, 0x2044($at)
    MEM_W(0X2044, ctx->r1) = ctx->r2;
    // 0x00423F6C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00423F70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F74: sw          $v1, -0x4770($at)
    MEM_W(-0X4770, ctx->r1) = ctx->r3;
    // 0x00423F78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F7C: sw          $a0, -0x476C($at)
    MEM_W(-0X476C, ctx->r1) = ctx->r4;
    // 0x00423F80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F84: sw          $a1, -0x4768($at)
    MEM_W(-0X4768, ctx->r1) = ctx->r5;
    // 0x00423F88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F8C: sw          $a2, -0x4764($at)
    MEM_W(-0X4764, ctx->r1) = ctx->r6;
    // 0x00423F90: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00423F94: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00423F98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00423F9C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00423FA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423FA4: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // 0x00423FA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423FAC: sw          $a0, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r4;
    // 0x00423FB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00423FB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00423FB8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00423FBC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00423FC0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00423FC4: jal         0x0042464C
    // 0x00423FC8: nop

    func_0042464C(rdram, ctx);
        goto after_0;
    // 0x00423FC8: nop

    after_0:
    // 0x00423FCC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423FD0: lw          $v0, 0x2044($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2044);
    // 0x00423FD4: beq         $v0, $zero, L_00423FE0
    if (ctx->r2 == 0) {
        // 0x00423FD8: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_00423FE0;
    }
    // 0x00423FD8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x00423FDC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_00423FE0:
    // 0x00423FE0: jal         0x0029AAD0
    // 0x00423FE4: nop

    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_1;
    // 0x00423FE4: nop

    after_1:
    // 0x00423FE8: jal         0x0029AAD0
    // 0x00423FEC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x00423FEC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x00423FF0: jal         0x0029AAD0
    // 0x00423FF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_3;
    // 0x00423FF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x00423FF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00423FFC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00424000: jr          $ra
    // 0x00424004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00424004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00424260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424260: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x00424264: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00424268: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042426C: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00424270: bnel        $v1, $zero, L_00424278
    if (ctx->r3 != 0) {
        // 0x00424274: sh          $v0, 0x16($sp)
        MEM_H(0X16, ctx->r29) = ctx->r2;
            goto L_00424278;
    }
    goto skip_0;
    // 0x00424274: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    skip_0:
L_00424278:
    // 0x00424278: slt         $v0, $t9, $a3
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0042427C: beq         $v0, $zero, L_0042428C
    if (ctx->r2 == 0) {
        // 0x00424280: andi        $v0, $t8, 0xFFFF
        ctx->r2 = ctx->r24 & 0XFFFF;
            goto L_0042428C;
    }
    // 0x00424280: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x00424284: and         $t5, $t5, $t6
    ctx->r13 = ctx->r13 & ctx->r14;
    // 0x00424288: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
L_0042428C:
    // 0x0042428C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00424290: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x00424294: sw          $t7, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r15;
    // 0x00424298: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x0042429C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x004242A0: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x004242A4: sll         $v1, $s6, 1
    ctx->r3 = S32(ctx->r22 << 1);
    // 0x004242A8: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
    // 0x004242AC: sw          $s6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r22;
    // 0x004242B0: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x004242B4: sw          $t5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r13;
    // 0x004242B8: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x004242BC: jal         0x0029AA80
    // 0x004242C0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    osViSetMode_recomp(rdram, ctx);
        goto after_0;
    // 0x004242C0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    after_0:
    // 0x004242C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x004242C8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x004242CC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x004242D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004242D4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004242D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004242DC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004242E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004242E4: jr          $ra
    // 0x004242E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x004242E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_0042444C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00424400:
    // 0x0042444C: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00424450: bne         $v0, $zero, L_00424400
    if (ctx->r2 != 0) {
        // 0x00424454: nop
    
            goto L_00424400;
    }
    // 0x00424454: nop

    // 0x00424458: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x0042445C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x00424460: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00424464: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x00424468: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0042446C: lw          $a0, 0x2038($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2038);
    // 0x00424470: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00424474: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00424478: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0042447C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00424480: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
    // 0x00424484: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00424488: lw          $a0, 0x203C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X203C);
    // 0x0042448C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424490: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00424494: lw          $a1, 0x2054($at)
    ctx->r5 = MEM_W(ctx->r1, 0X2054);
    // 0x00424498: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0042449C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x004244A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004244A4: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x004244A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244AC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004244B0: lw          $v1, 0x2054($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2054);
    // 0x004244B4: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x004244B8: bnel        $v0, $zero, L_004244C0
    if (ctx->r2 != 0) {
        // 0x004244BC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_004244C0;
    }
    goto skip_0;
    // 0x004244BC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_004244C0:
    // 0x004244C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244C4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x004244C8: lw          $v1, 0x2058($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2058);
    // 0x004244CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244D0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004244D4: lw          $a0, 0x2058($at)
    ctx->r4 = MEM_W(ctx->r1, 0X2058);
    // 0x004244D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244DC: sw          $a1, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r5;
    // 0x004244E0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x004244E4: bnel        $v0, $zero, L_004244EC
    if (ctx->r2 != 0) {
        // 0x004244E8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_004244EC;
    }
    goto skip_1;
    // 0x004244E8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_004244EC:
    // 0x004244EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004244F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004244F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004244F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244FC: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // turok2: reconnected split function: a stray ELF symbol at 0x00424500 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00424500(rdram, ctx);
;}
RECOMP_FUNC void entry_004244B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004244B0: lw          $v1, 0x2054($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2054);
    // 0x004244B4: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x004244B8: bnel        $v0, $zero, L_004244C0
    if (ctx->r2 != 0) {
        // 0x004244BC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_004244C0;
    }
    goto skip_0;
    // 0x004244BC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_004244C0:
    // 0x004244C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244C4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x004244C8: lw          $v1, 0x2058($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2058);
    // 0x004244CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244D0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004244D4: lw          $a0, 0x2058($at)
    ctx->r4 = MEM_W(ctx->r1, 0X2058);
    // 0x004244D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244DC: sw          $a1, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r5;
    // 0x004244E0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x004244E4: bnel        $v0, $zero, L_004244EC
    if (ctx->r2 != 0) {
        // 0x004244E8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_004244EC;
    }
    goto skip_1;
    // 0x004244E8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_004244EC:
    // 0x004244EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004244F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004244F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004244F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244FC: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // turok2: reconnected split function: a stray ELF symbol at 0x00424500 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00424500(rdram, ctx);
;}
RECOMP_FUNC void entry_0042456C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042456C: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00424570: beq         $v0, $v1, L_00424588
    if (ctx->r2 == ctx->r3) {
        // 0x00424574: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00424588;
    }
    // 0x00424574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424578: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042457C: sw          $v0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r2;
    // 0x00424580: j           L_00424590
    // 0x00424584: nop

        goto L_00424590;
    // 0x00424584: nop

L_00424588:
    // 0x00424588: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042458C: sw          $zero, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = 0;
L_00424590:
    // 0x00424590: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424594: lw          $v0, 0x2040($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2040);
    // 0x00424598: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x0042459C: beq         $v0, $zero, L_004245D4
    if (ctx->r2 == 0) {
        // 0x004245A0: nop
    
            goto L_004245D4;
    }
    // 0x004245A0: nop

    // 0x004245A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004245A8: lw          $v1, 0x203C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X203C);
    // 0x004245AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004245B0: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x004245B4: beq         $v1, $v0, L_004245D4
    if (ctx->r3 == ctx->r2) {
        // 0x004245B8: nop
    
            goto L_004245D4;
    }
    // 0x004245B8: nop

    // 0x004245BC: jal         0x00423E10
    // 0x004245C0: nop

    func_00423E10(rdram, ctx);
        goto after_0;
    // 0x004245C0: nop

    after_0:
    // 0x004245C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004245C8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x004245CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004245D0: sw          $v0, 0x203C($at)
    MEM_W(0X203C, ctx->r1) = ctx->r2;
L_004245D4:
    // 0x004245D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004245D8: jr          $ra
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004245C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004245C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004245C8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x004245CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004245D0: sw          $v0, 0x203C($at)
    MEM_W(0X203C, ctx->r1) = ctx->r2;
    // 0x004245D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004245D8: jr          $ra
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004245C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004245C8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x004245CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004245D0: sw          $v0, 0x203C($at)
    MEM_W(0X203C, ctx->r1) = ctx->r2;
    // 0x004245D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004245D8: jr          $ra
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00424740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424740: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424744: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00424748: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0042474C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424750: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00424754: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00424758: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
L_0042475C:
    // 0x0042475C: sw          $zero, 0x294($v0)
    MEM_W(0X294, ctx->r2) = 0;
    // 0x00424760: swc1        $f1, 0x288($v0)
    MEM_W(0X288, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00424764: swc1        $f0, 0x28C($v0)
    MEM_W(0X28C, ctx->r2) = ctx->f0.u32l;
    // 0x00424768: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0042476C: bnel        $v0, $zero, L_0042475C
    if (ctx->r2 != 0) {
        // 0x00424770: sw          $zero, 0x290($v0)
        MEM_W(0X290, ctx->r2) = 0;
            goto L_0042475C;
    }
    goto skip_0;
    // 0x00424770: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
    skip_0:
    // 0x00424774: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00424778: jr          $ra
    // 0x0042477C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042477C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0042483C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042483C: lwc1        $f0, 0x1720($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1720);
    // 0x00424840: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00424844: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00424848: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0042484C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424850: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
    // 0x00424854: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00424858: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0042485C: jal         0x00279028
    // 0x00424860: nop

    func_00279028(rdram, ctx);
        goto after_0;
    // 0x00424860: nop

    after_0:
    // 0x00424864: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
    // 0x00424868: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0042486C: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00424870: ori         $a0, $a0, 0xA01
    ctx->r4 = ctx->r4 | 0XA01;
    // 0x00424874: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x00424878: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0042487C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00424880: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00424884: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x00424888: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x0042488C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00424890: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00424894: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00424898: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x0042489C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x004248A0: beq         $s1, $zero, L_004248E0
    if (ctx->r17 == 0) {
        // 0x004248A4: sw          $v0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r2;
            goto L_004248E0;
    }
    // 0x004248A4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x004248A8: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x004248AC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x004248B0: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x004248B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004248B8: lwc1        $f1, 0x1724($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1724);
    // 0x004248BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004248C0: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x004248C4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004248C8: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x004248CC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004248D0: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004248D4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x004248D8: j           L_0042491C
    // 0x004248DC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
        goto L_0042491C;
    // 0x004248DC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
L_004248E0:
    // 0x004248E0: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x004248E4: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x004248E8: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x004248EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004248F0: lwc1        $f1, 0x1728($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1728);
    // 0x004248F4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004248F8: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x004248FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00424900: lui         $v1, 0x3232
    ctx->r3 = S32(0X3232 << 16);
    // 0x00424904: ori         $v1, $v1, 0x3200
    ctx->r3 = ctx->r3 | 0X3200;
    // 0x00424908: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x0042490C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00424910: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00424914: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00424918: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_0042491C:
    // 0x0042491C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00424920: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00424924: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x00424928: lh          $a2, 0x16($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X16);
    // 0x0042492C: lh          $a3, 0x1E($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X1E);
    // 0x00424930: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00424934: lwc1        $f0, 0x10($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X10);
    // 0x00424938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042493C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00424940: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00424944: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x00424948: jal         0x0027B320
    // 0x0042494C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_1;
    // 0x0042494C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00424950: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00424954: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00424958: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042495C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00424960: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00424964: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00424968: jr          $ra
    // 0x0042496C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042496C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042491C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042491C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00424920: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00424924: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x00424928: lh          $a2, 0x16($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X16);
    // 0x0042492C: lh          $a3, 0x1E($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X1E);
    // 0x00424930: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00424934: lwc1        $f0, 0x10($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X10);
    // 0x00424938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042493C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00424940: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00424944: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x00424948: jal         0x0027B320
    // 0x0042494C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_0;
    // 0x0042494C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00424950: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00424954: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00424958: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042495C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00424960: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00424964: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00424968: jr          $ra
    // 0x0042496C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042496C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00424A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424A88: lw          $v0, 0x1750($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1750);
    // 0x00424A8C: jr          $v0
    // 0x00424A90: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x00424A90: nop

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
RECOMP_FUNC void entry_00424C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00424C64: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
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
        goto after_1;
    // 0x00424C98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
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
        goto after_2;
    // 0x00424CCC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
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
        goto after_3;
    // 0x00424D00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
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
        goto after_4;
    // 0x00424D28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
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
RECOMP_FUNC void entry_00424D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424D30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00424D34: addiu       $v1, $s0, 0x30
    ctx->r3 = ADD32(ctx->r16, 0X30);
    // 0x00424D38: sb          $v1, -0x6($v0)
    MEM_B(-0X6, ctx->r2) = ctx->r3;
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
RECOMP_FUNC void entry_00424DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424DD8: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
    // 0x00424DDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424DE0: addiu       $v0, $v0, 0x441C
    ctx->r2 = ADD32(ctx->r2, 0X441C);
    // 0x00424DE4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424DE8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424DEC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424DF0: j           L_00424E10
    // 0x00424DF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_00424E10;
    // 0x00424DF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00424DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424DFC: addiu       $v0, $v0, 0x4470
    ctx->r2 = ADD32(ctx->r2, 0X4470);
    // 0x00424E00: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E04: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424E08: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424E0C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_00424E10:
    // 0x00424E10: jal         0x00224C08
    // 0x00424E14: nop

    func_00224C08(rdram, ctx);
        goto after_0;
    // 0x00424E14: nop

    after_0:
    // 0x00424E18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424E1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424E20: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424E24: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424EDC;
    }
    // 0x00424E24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424E28: j           L_00424EB8
    // 0x00424E2C: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424EB8;
    // 0x00424E2C: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
    // 0x00424E30: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424E34: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00424E38: j           L_00424EB8
    // 0x00424E3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00424EB8;
    // 0x00424E3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E40: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424E44: addiu       $v0, $v0, 0x450C
    ctx->r2 = ADD32(ctx->r2, 0X450C);
    // 0x00424E48: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424E50: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424E54: jal         0x00224C08
    // 0x00424E58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_00224C08(rdram, ctx);
        goto after_1;
    // 0x00424E58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x00424E5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424E60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424E64: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424E68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00424EDC;
    }
    // 0x00424E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424E6C: j           L_00424EB8
    // 0x00424E70: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424EB8;
    // 0x00424E70: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
    // 0x00424E74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424E78: addiu       $v0, $v0, 0x4588
    ctx->r2 = ADD32(ctx->r2, 0X4588);
    // 0x00424E7C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424E84: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424E88: jal         0x00224C08
    // 0x00424E8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_00224C08(rdram, ctx);
        goto after_2;
    // 0x00424E8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_2:
    // 0x00424E90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424E94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424E98: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424E9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424EDC;
    }
    // 0x00424E9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424EA0: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
    // 0x00424EA4: bne         $s0, $v0, L_00424EBC
    if (ctx->r16 != ctx->r2) {
        // 0x00424EA8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00424EBC;
    }
    // 0x00424EA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424EAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424EB0: addiu       $v0, $v0, 0x4574
    ctx->r2 = ADD32(ctx->r2, 0X4574);
    // 0x00424EB4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00424EB8:
    // 0x00424EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00424EBC:
    // 0x00424EBC: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424EC0: nop
    
            goto L_00424EDC;
    }
    // 0x00424EC0: nop

    // 0x00424EC4: jal         0x004160F0
    // 0x00424EC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004160F0(rdram, ctx);
        goto after_3;
    // 0x00424EC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00424ECC: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x00424ED0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00424ED4: addiu       $v1, $s0, 0x30
    ctx->r3 = ADD32(ctx->r16, 0X30);
    // 0x00424ED8: sb          $v1, -0x6($v0)
    MEM_B(-0X6, ctx->r2) = ctx->r3;
L_00424EDC:
    // 0x00424EDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00424EE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00424EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424EE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00424EEC: jr          $ra
    // 0x00424EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00424EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00424ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424ED4: addiu       $v1, $s0, 0x30
    ctx->r3 = ADD32(ctx->r16, 0X30);
    // 0x00424ED8: sb          $v1, -0x6($v0)
    MEM_B(-0X6, ctx->r2) = ctx->r3;
    // 0x00424EDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00424EE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00424EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424EE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00424EEC: jr          $ra
    // 0x00424EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00424EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00424F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424F78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00424F7C: sw          $v0, 0xA34($at)
    MEM_W(0XA34, ctx->r1) = ctx->r2;
    // 0x00424F80: jr          $ra
    // 0x00424F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00425014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425014: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425018: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042501C: addiu       $v0, $v0, 0x4444
    ctx->r2 = ADD32(ctx->r2, 0X4444);
    // 0x00425020: j           L_00425054
    // 0x00425024: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425024: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425028: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042502C: addiu       $v0, $v0, 0x449C
    ctx->r2 = ADD32(ctx->r2, 0X449C);
    // 0x00425030: j           L_00425054
    // 0x00425034: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425034: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425038: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042503C: addiu       $v0, $v0, 0x44D4
    ctx->r2 = ADD32(ctx->r2, 0X44D4);
    // 0x00425040: j           L_00425054
    // 0x00425044: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425044: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042504C: addiu       $v0, $v0, 0x4534
    ctx->r2 = ADD32(ctx->r2, 0X4534);
    // 0x00425050: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425054:
    // 0x00425054: jr          $ra
    // 0x00425058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00425058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004250B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004250B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004250B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004250BC: addiu       $v0, $v0, 0x4464
    ctx->r2 = ADD32(ctx->r2, 0X4464);
    // 0x004250C0: j           L_004250F4
    // 0x004250C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004250F4;
    // 0x004250C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004250C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004250CC: addiu       $v0, $v0, 0x44C4
    ctx->r2 = ADD32(ctx->r2, 0X44C4);
    // 0x004250D0: j           L_004250F4
    // 0x004250D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004250F4;
    // 0x004250D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004250D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004250DC: addiu       $v0, $v0, 0x44FC
    ctx->r2 = ADD32(ctx->r2, 0X44FC);
    // 0x004250E0: j           L_004250F4
    // 0x004250E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004250F4;
    // 0x004250E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004250E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004250EC: addiu       $v0, $v0, 0x4560
    ctx->r2 = ADD32(ctx->r2, 0X4560);
    // 0x004250F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004250F4:
    // 0x004250F4: jr          $ra
    // 0x004250F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004250F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00425128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425128: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042512C: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00425130: j           L_00425194
    // 0x00425134: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425134: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425138: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042513C: addiu       $v0, $v0, 0x43E0
    ctx->r2 = ADD32(ctx->r2, 0X43E0);
    // 0x00425140: j           L_00425194
    // 0x00425144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425148: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042514C: addiu       $v0, $v0, 0x4430
    ctx->r2 = ADD32(ctx->r2, 0X4430);
    // 0x00425150: j           L_00425194
    // 0x00425154: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425154: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425158: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042515C: addiu       $v0, $v0, 0x4484
    ctx->r2 = ADD32(ctx->r2, 0X4484);
    // 0x00425160: j           L_00425194
    // 0x00425164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425168: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042516C: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00425170: j           L_00425194
    // 0x00425174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425178: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042517C: addiu       $v0, $v0, 0x4520
    ctx->r2 = ADD32(ctx->r2, 0X4520);
    // 0x00425180: j           L_00425194
    // 0x00425184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00425188: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042518C: addiu       $v0, $v0, 0x459C
    ctx->r2 = ADD32(ctx->r2, 0X459C);
    // 0x00425190: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425194:
    // 0x00425194: jr          $ra
    // 0x00425198: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00425198: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00425388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425388: sw          $s1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r17;
    // 0x0042538C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00425390: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00425394: lw          $a1, 0x2210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2210);
    // 0x00425398: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042539C: sw          $v0, 0xA78($at)
    MEM_W(0XA78, ctx->r1) = ctx->r2;
    // 0x004253A0: beq         $a1, $zero, L_00425468
    if (ctx->r5 == 0) {
        // 0x004253A4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00425468;
    }
    // 0x004253A4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004253A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004253AC:
    // 0x004253AC: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x004253B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x004253B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004253B8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x004253BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004253C0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004253C4: sw          $v0, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r2;
    // 0x004253C8: sltu        $v0, $s0, $a1
    ctx->r2 = ctx->r16 < ctx->r5 ? 1 : 0;
    // 0x004253CC: bne         $v0, $zero, L_004253AC
    if (ctx->r2 != 0) {
        // 0x004253D0: addu        $a0, $a0, $s2
        ctx->r4 = ADD32(ctx->r4, ctx->r18);
            goto L_004253AC;
    }
    // 0x004253D0: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x004253D4: j           L_00425468
    // 0x004253D8: nop

        goto L_00425468;
    // 0x004253D8: nop

    // 0x004253DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004253E0: lw          $a2, 0x2210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2210);
    // 0x004253E4: ori         $s2, $s2, 0xECC0
    ctx->r18 = ctx->r18 | 0XECC0;
    // 0x004253E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x004253EC: mult        $a2, $s2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004253F0: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x004253F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004253F8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004253FC: addiu       $a3, $a3, 0x182C
    ctx->r7 = ADD32(ctx->r7, 0X182C);
    // 0x00425400: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00425404: mflo        $a2
    ctx->r6 = lo;
    // 0x00425408: jal         0x00204FD0
    // 0x0042540C: subu        $a1, $s1, $a2
    ctx->r5 = SUB32(ctx->r17, ctx->r6);
    func_00204FD0(rdram, ctx);
        goto after_0;
    // 0x0042540C: subu        $a1, $s1, $a2
    ctx->r5 = SUB32(ctx->r17, ctx->r6);
    after_0:
    // 0x00425410: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00425414: lw          $a2, 0x2210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2210);
    // 0x00425418: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042541C: beq         $a2, $zero, L_00425450
    if (ctx->r6 == 0) {
        // 0x00425420: sw          $a1, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->r5;
            goto L_00425450;
    }
    // 0x00425420: sw          $a1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r5;
    // 0x00425424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00425428:
    // 0x00425428: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0042542C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00425430: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00425434: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00425438: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042543C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00425440: sw          $v0, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r2;
    // 0x00425444: sltu        $v0, $s0, $a2
    ctx->r2 = ctx->r16 < ctx->r6 ? 1 : 0;
    // 0x00425448: bne         $v0, $zero, L_00425428
    if (ctx->r2 != 0) {
        // 0x0042544C: addu        $a0, $a0, $s2
        ctx->r4 = ADD32(ctx->r4, ctx->r18);
            goto L_00425428;
    }
    // 0x0042544C: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
L_00425450:
    // 0x00425450: mult        $s2, $s0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00425454: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00425458: mflo        $t0
    ctx->r8 = lo;
    // 0x0042545C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00425460: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425464: sw          $v0, 0xA78($at)
    MEM_W(0XA78, ctx->r1) = ctx->r2;
L_00425468:
    // 0x00425468: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042546C: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x00425470: beq         $v0, $zero, L_004254AC
    if (ctx->r2 == 0) {
        // 0x00425474: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004254AC;
    }
    // 0x00425474: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00425478: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0042547C:
    // 0x0042547C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00425480: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425484: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00425488: lw          $a0, 0xA88($at)
    ctx->r4 = MEM_W(ctx->r1, 0XA88);
    // 0x0042548C: jal         0x00266C5C
    // 0x00425490: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x00425490: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00425494: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425498: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x0042549C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004254A0: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x004254A4: bnel        $v0, $zero, L_0042547C
    if (ctx->r2 != 0) {
        // 0x004254A8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0042547C;
    }
    goto skip_0;
    // 0x004254A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_0:
L_004254AC:
    // 0x004254AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004254B0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004254B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004254B8: lw          $a0, 0xA78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA78);
    // 0x004254BC: jal         0x00266C5C
    // 0x004254C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00266C5C(rdram, ctx);
        goto after_2;
    // 0x004254C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_2:
    // 0x004254C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004254C8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x004254CC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004254D0: lw          $a1, 0x2214($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2214);
    // 0x004254D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004254D8: lw          $v0, 0x2218($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2218);
    // 0x004254DC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004254E0: addiu       $a3, $a3, 0x184C
    ctx->r7 = ADD32(ctx->r7, 0X184C);
    // 0x004254E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x004254E8: jal         0x00204EDC
    // 0x004254EC: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    func_00204EDC(rdram, ctx);
        goto after_3;
    // 0x004254EC: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    after_3:
    // 0x004254F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004254F4: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x004254F8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x004254FC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00425500: addiu       $a3, $a3, 0x185C
    ctx->r7 = ADD32(ctx->r7, 0X185C);
    // 0x00425504: jal         0x00204EDC
    // 0x00425508: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_4;
    // 0x00425508: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    after_4:
    // 0x0042550C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425510: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x00425514: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    // 0x00425518: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0042551C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00425520: addiu       $a3, $a3, 0x1864
    ctx->r7 = ADD32(ctx->r7, 0X1864);
    // 0x00425524: jal         0x00204EDC
    // 0x00425528: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_5;
    // 0x00425528: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    after_5:
    // 0x0042552C: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x00425530: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00425534: lw          $a1, 0x2214($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2214);
    // 0x00425538: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x0042553C: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x00425540: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x00425544: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425548: sw          $v0, 0xA44($at)
    MEM_W(0XA44, ctx->r1) = ctx->r2;
    // 0x0042554C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425550: lw          $v0, 0x2218($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2218);
    // 0x00425554: ori         $a0, $a0, 0x2000
    ctx->r4 = ctx->r4 | 0X2000;
    // 0x00425558: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042555C: sw          $a0, 0xA7C($at)
    MEM_W(0XA7C, ctx->r1) = ctx->r4;
    // 0x00425560: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x00425564: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00425568: lw          $a2, 0x2210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2210);
    // 0x0042556C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x00425570: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00425574: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00425578: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042557C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425580: sw          $v1, 0xA80($at)
    MEM_W(0XA80, ctx->r1) = ctx->r3;
    // 0x00425584: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00425588: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042558C: sw          $v1, 0xA4C($at)
    MEM_W(0XA4C, ctx->r1) = ctx->r3;
    // 0x00425590: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00425594: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00425598: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042559C: sw          $v1, 0xA84($at)
    MEM_W(0XA84, ctx->r1) = ctx->r3;
    // 0x004255A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004255A4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x004255A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004255AC: sw          $v1, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r3;
    // 0x004255B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004255B4: sw          $a0, 0xA40($at)
    MEM_W(0XA40, ctx->r1) = ctx->r4;
    // 0x004255B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004255BC: sw          $v0, 0xA48($at)
    MEM_W(0XA48, ctx->r1) = ctx->r2;
    // 0x004255C0: beq         $a2, $zero, L_004255E0
    if (ctx->r6 == 0) {
        // 0x004255C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004255E0;
    }
    // 0x004255C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004255C8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x004255CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_004255D0:
    // 0x004255D0: sltu        $v0, $s0, $v1
    ctx->r2 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x004255D4: bne         $v0, $zero, L_004255D0
    if (ctx->r2 != 0) {
        // 0x004255D8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004255D0;
    }
    // 0x004255D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004255DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004255E0:
    // 0x004255E0: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x004255E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x004255E8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004255EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004255F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004255F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004255F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004255FC: jr          $ra
    // 0x00425600: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00425600: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00425680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425680: nop

    // 0x00425684: jal         0x002052D8
    // 0x00425688: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x00425688: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0042568C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00425690: beq         $a1, $zero, L_004256A4
    if (ctx->r5 == 0) {
        // 0x00425694: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004256A4;
    }
    // 0x00425694: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00425698: jal         0x002052D8
    // 0x0042569C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0042569C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x004256A0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_004256A4:
    // 0x004256A4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_004256A8:
    // 0x004256A8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x004256AC: beql        $a1, $zero, L_004256C0
    if (ctx->r5 == 0) {
        // 0x004256B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004256C0;
    }
    goto skip_0;
    // 0x004256B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x004256B4: jal         0x002052D8
    // 0x004256B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x004256B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x004256BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004256C0:
    // 0x004256C0: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x004256C4: bne         $v0, $zero, L_004256A8
    if (ctx->r2 != 0) {
        // 0x004256C8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_004256A8;
    }
    // 0x004256C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x004256CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x004256D0: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x004256D4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x004256D8: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x004256DC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x004256E0: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x004256E4: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_004256E8:
    // 0x004256E8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x004256EC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004256F0: bgez        $v1, L_004256E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004256F4: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_004256E8;
    }
    // 0x004256F4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x004256F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004256FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00425700: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00425704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00425708: jr          $ra
    // 0x0042570C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042570C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00425808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004257D8:
    // 0x00425808: lw          $a2, 0x2224($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2224);
    // 0x0042580C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425810: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00425814: jal         0x00427C20
    // 0x00425818: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    func_00427C20(rdram, ctx);
        goto after_0;
    // 0x00425818: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    after_0:
    // 0x0042581C: bne         $v0, $s7, L_0042585C
    if (ctx->r2 != ctx->r23) {
        // 0x00425820: addu        $a0, $s6, $fp
        ctx->r4 = ADD32(ctx->r22, ctx->r30);
            goto L_0042585C;
    }
    // 0x00425820: addu        $a0, $s6, $fp
    ctx->r4 = ADD32(ctx->r22, ctx->r30);
    // 0x00425824: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425828: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0042582C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00425830: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00425834: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x00425838: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0042583C: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x00425840: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00425844: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00425848: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x0042584C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00425850: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x00425854: sb          $zero, 0x12($v1)
    MEM_B(0X12, ctx->r3) = 0;
    // 0x00425858: addu        $a0, $s6, $fp
    ctx->r4 = ADD32(ctx->r22, ctx->r30);
L_0042585C:
    // 0x0042585C: jal         0x00427E60
    // 0x00425860: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00427E60(rdram, ctx);
        goto after_1;
    // 0x00425860: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00425864: bne         $v0, $zero, L_00425880
    if (ctx->r2 != 0) {
        // 0x00425868: addiu       $s2, $s2, 0x20
        ctx->r18 = ADD32(ctx->r18, 0X20);
            goto L_00425880;
    }
    // 0x00425868: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x0042586C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425870: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x00425874: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00425878: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0042587C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00425880:
    // 0x00425880: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00425884: slti        $v0, $s3, 0x10
    ctx->r2 = SIGNED(ctx->r19) < 0X10 ? 1 : 0;
    // 0x00425888: bne         $v0, $zero, L_004257D8
    if (ctx->r2 != 0) {
        // 0x0042588C: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_004257D8;
    }
    // 0x0042588C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x00425890: sll         $a0, $s4, 1
    ctx->r4 = S32(ctx->r20 << 1);
    // 0x00425894: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x00425898: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0042589C: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x004258A0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x004258A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004258A8: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x004258AC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x004258B0: jal         0x00427E60
    // 0x004258B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00427E60(rdram, ctx);
        goto after_2;
    // 0x004258B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x004258B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x004258BC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x004258C0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x004258C4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x004258C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x004258CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x004258D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004258D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004258D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004258DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004258E0: jr          $ra
    // 0x004258E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004258E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00425904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00425910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00425980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042597C:
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
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x004259A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004259A8: jr          $v0
    // 0x004259AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x004259AC: nop

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

    // 0x004259D8: j           L_004259E4
    // 0x004259DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
        goto L_004259E4;
    // 0x004259DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
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
RECOMP_FUNC void entry_004259A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042597C:
    // 0x004259A8: jr          $v0
    // 0x004259AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x004259AC: nop

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

    // 0x004259D8: j           L_004259E4
    // 0x004259DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
        goto L_004259E4;
    // 0x004259DC: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
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
        goto after_0;
    // 0x00425A30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
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
RECOMP_FUNC void entry_00425A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00425A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00425AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425AE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00425AE4: jal         0x002847E0
    // 0x00425AE8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_002847E0(rdram, ctx);
        goto after_0;
    // 0x00425AE8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_0:
    // 0x00425AEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00425AF0: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x00425AF4: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x00425AF8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00425AFC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00425B00: addiu       $s1, $s1, 0xC60
    ctx->r17 = ADD32(ctx->r17, 0XC60);
    // 0x00425B04: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00425B08: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00425B0C: addiu       $s0, $s0, 0xAA0
    ctx->r16 = ADD32(ctx->r16, 0XAA0);
    // 0x00425B10: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425B14: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
L_00425B18:
    // 0x00425B18: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425B1C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00425B20: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00425B24: beq         $v0, $zero, L_00425B34
    if (ctx->r2 == 0) {
        // 0x00425B28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00425B34;
    }
    // 0x00425B28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00425B2C: j           L_00425B54
    // 0x00425B30: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_00425B54;
    // 0x00425B30: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_00425B34:
    // 0x00425B34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00425B38: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00425B3C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x00425B40: jal         0x00299198
    // 0x00425B44: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00299198(rdram, ctx);
        goto after_1;
    // 0x00425B44: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00425B48: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00425B4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00425B50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00425B54:
    // 0x00425B54: beq         $v0, $zero, L_00425B64
    if (ctx->r2 == 0) {
        // 0x00425B58: nop
    
            goto L_00425B64;
    }
    // 0x00425B58: nop

    // 0x00425B5C: j           L_00425B78
    // 0x00425B60: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
        goto L_00425B78;
    // 0x00425B60: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
L_00425B64:
    // 0x00425B64: jal         0x004258E8
    // 0x00425B68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_004258E8(rdram, ctx);
        goto after_2;
    // 0x00425B68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00425B6C: beql        $v0, $zero, L_00425B78
    if (ctx->r2 == 0) {
        // 0x00425B70: sw          $s4, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r20;
            goto L_00425B78;
    }
    goto skip_0;
    // 0x00425B70: sw          $s4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r20;
    skip_0:
    // 0x00425B74: sw          $s5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r21;
L_00425B78:
    // 0x00425B78: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00425B7C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00425B80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00425B84: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00425B88: bne         $v0, $zero, L_00425B18
    if (ctx->r2 != 0) {
        // 0x00425B8C: addiu       $s0, $s0, 0x70
        ctx->r16 = ADD32(ctx->r16, 0X70);
            goto L_00425B18;
    }
    // 0x00425B8C: addiu       $s0, $s0, 0x70
    ctx->r16 = ADD32(ctx->r16, 0X70);
    // 0x00425B90: jal         0x002858A4
    // 0x00425B94: nop

    func_002858A4(rdram, ctx);
        goto after_3;
    // 0x00425B94: nop

    after_3:
    // 0x00425B98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00425B9C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00425BA0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00425BA4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00425BA8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00425BAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00425BB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00425BB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00425BB8: jr          $ra
    // 0x00425BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00425BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00425BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425BD8: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00425BDC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00425BE0: sll         $s0, $s6, 2
    ctx->r16 = S32(ctx->r22 << 2);
    // 0x00425BE4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00425BE8: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x00425BEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425BF0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00425BF4: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x00425BF8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00425BFC: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00425C00: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00425C04: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x00425C08: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00425C0C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00425C10: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00425C14: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x00425C18: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00425C1C: beq         $v0, $v1, L_00425C2C
    if (ctx->r2 == ctx->r3) {
        // 0x00425C20: sw          $ra, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r31;
            goto L_00425C2C;
    }
    // 0x00425C20: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00425C24: j           L_00425E44
    // 0x00425C28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_00425E44;
    // 0x00425C28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00425C2C:
    // 0x00425C2C: jal         0x00285878
    // 0x00425C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00425C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x00425C34: jal         0x002847E0
    // 0x00425C38: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00425C38: nop

    after_1:
    // 0x00425C3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00425C40: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00425C44: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x00425C48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00425C4C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425C50: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x00425C54: bne         $s0, $zero, L_00425E38
    if (ctx->r16 != 0) {
        // 0x00425C58: addiu       $t2, $zero, 0x42
        ctx->r10 = ADD32(0, 0X42);
            goto L_00425E38;
    }
    // 0x00425C58: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x00425C5C: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x00425C60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00425C64: addiu       $t1, $a1, 0x4
    ctx->r9 = ADD32(ctx->r5, 0X4);
L_00425C68:
    // 0x00425C68: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00425C6C: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00425C70: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00425C74: bnel        $v0, $zero, L_00425C7C
    if (ctx->r2 != 0) {
        // 0x00425C78: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00425C7C;
    }
    goto skip_0;
    // 0x00425C78: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_0:
L_00425C7C:
    // 0x00425C7C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x00425C80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425C84: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00425C88: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_00425C8C:
    // 0x00425C8C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00425C90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425C94: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00425C98: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425C9C: bnel        $v1, $v0, L_00425CAC
    if (ctx->r3 != ctx->r2) {
        // 0x00425CA0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00425CAC;
    }
    goto skip_1;
    // 0x00425CA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x00425CA4: j           L_00425CB8
    // 0x00425CA8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
        goto L_00425CB8;
    // 0x00425CA8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_00425CAC:
    // 0x00425CAC: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x00425CB0: bne         $v0, $zero, L_00425C8C
    if (ctx->r2 != 0) {
        // 0x00425CB4: nop
    
            goto L_00425C8C;
    }
    // 0x00425CB4: nop

L_00425CB8:
    // 0x00425CB8: beql        $a0, $t2, L_00425CC0
    if (ctx->r4 == ctx->r10) {
        // 0x00425CBC: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_00425CC0;
    }
    goto skip_2;
    // 0x00425CBC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_2:
L_00425CC0:
    // 0x00425CC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00425CC4: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00425CC8: bne         $v0, $zero, L_00425C68
    if (ctx->r2 != 0) {
        // 0x00425CCC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00425C68;
    }
    // 0x00425CCC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00425CD0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
    // 0x00425CD4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x00425CD8: and         $s5, $v1, $v0
    ctx->r21 = ctx->r3 & ctx->r2;
    // 0x00425CDC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00425CE0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425CE4: jal         0x0029E460
    // 0x00425CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0029E460(rdram, ctx);
        goto after_2;
    // 0x00425CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x00425CEC: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x00425CF0: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x00425CF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425CF8: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
L_00425CFC:
    // 0x00425CFC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00425D00: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00425D04: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00425D08: bnel        $v0, $zero, L_00425D10
    if (ctx->r2 != 0) {
        // 0x00425D0C: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00425D10;
    }
    goto skip_3;
    // 0x00425D0C: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_3:
L_00425D10:
    // 0x00425D10: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x00425D14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425D18: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00425D1C: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_00425D20:
    // 0x00425D20: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00425D24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425D28: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00425D2C: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425D30: bnel        $v1, $v0, L_00425D40
    if (ctx->r3 != ctx->r2) {
        // 0x00425D34: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00425D40;
    }
    goto skip_4;
    // 0x00425D34: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x00425D38: j           L_00425D4C
    // 0x00425D3C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
        goto L_00425D4C;
    // 0x00425D3C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_00425D40:
    // 0x00425D40: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x00425D44: bne         $v0, $zero, L_00425D20
    if (ctx->r2 != 0) {
        // 0x00425D48: nop
    
            goto L_00425D20;
    }
    // 0x00425D48: nop

L_00425D4C:
    // 0x00425D4C: beql        $a0, $t2, L_00425D54
    if (ctx->r4 == ctx->r10) {
        // 0x00425D50: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_00425D54;
    }
    goto skip_5;
    // 0x00425D50: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_5:
L_00425D54:
    // 0x00425D54: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00425D58: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00425D5C: bne         $v0, $zero, L_00425CFC
    if (ctx->r2 != 0) {
        // 0x00425D60: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00425CFC;
    }
    // 0x00425D60: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00425D64: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x00425D68: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00425D70: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00425D78: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00425D7C: addiu       $v1, $v1, 0xC80
    ctx->r3 = ADD32(ctx->r3, 0XC80);
    // 0x00425D80: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00425D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425D88: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00425D8C: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x00425D90: lbu         $a1, 0x1($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1);
    // 0x00425D94: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x00425D98: lbu         $a2, 0x1($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X1);
    // 0x00425D9C: lbu         $t0, 0x2($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X2);
    // 0x00425DA0: lbu         $t1, 0x3($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X3);
    // 0x00425DA4: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x00425DA8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00425DAC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00425DB0: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x00425DB4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00425DB8: or          $s3, $a1, $v1
    ctx->r19 = ctx->r5 | ctx->r3;
    // 0x00425DBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425DC0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00425DC4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00425DC8: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00425DCC: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x00425DD0: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x00425DD4: or          $s2, $v0, $t1
    ctx->r18 = ctx->r2 | ctx->r9;
    // 0x00425DD8: jal         0x00427180
    // 0x00425DDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00427180(rdram, ctx);
        goto after_3;
    // 0x00425DDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00425DE0: beq         $v0, $zero, L_00425DF0
    if (ctx->r2 == 0) {
        // 0x00425DE4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00425DF0;
    }
    // 0x00425DE4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00425DE8: bne         $s0, $zero, L_00425E30
    if (ctx->r16 != 0) {
        // 0x00425DEC: nop
    
            goto L_00425E30;
    }
    // 0x00425DEC: nop

L_00425DF0:
    // 0x00425DF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425DF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00425DF8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x00425DFC: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x00425E00: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x00425E04: jal         0x00428CF0
    // 0x00425E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00428CF0(rdram, ctx);
        goto after_4;
    // 0x00425E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x00425E0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00425E10: beq         $s0, $zero, L_00425E30
    if (ctx->r16 == 0) {
        // 0x00425E14: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00425E30;
    }
    // 0x00425E14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425E18: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00425E1C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425E20: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00425E24: jal         0x00427780
    // 0x00425E28: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_00427780(rdram, ctx);
        goto after_5;
    // 0x00425E28: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x00425E2C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_00425E30:
    // 0x00425E30: jal         0x004258E8
    // 0x00425E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_004258E8(rdram, ctx);
        goto after_6;
    // 0x00425E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_6:
L_00425E38:
    // 0x00425E38: jal         0x002858A4
    // 0x00425E3C: nop

    func_002858A4(rdram, ctx);
        goto after_7;
    // 0x00425E3C: nop

    after_7:
    // 0x00425E40: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00425E44:
    // 0x00425E44: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00425E48: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00425E4C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00425E50: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00425E54: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00425E58: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00425E5C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00425E60: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00425E64: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00425E68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00425E6C: jr          $ra
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_00425C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00425C68:
    // 0x00425C6C: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00425C70: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00425C74: bnel        $v0, $zero, L_00425C7C
    if (ctx->r2 != 0) {
        // 0x00425C78: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00425C7C;
    }
    goto skip_0;
    // 0x00425C78: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_0:
L_00425C7C:
    // 0x00425C7C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x00425C80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425C84: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00425C88: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_00425C8C:
    // 0x00425C8C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00425C90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425C94: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00425C98: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425C9C: bnel        $v1, $v0, L_00425CAC
    if (ctx->r3 != ctx->r2) {
        // 0x00425CA0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00425CAC;
    }
    goto skip_1;
    // 0x00425CA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x00425CA4: j           L_00425CB8
    // 0x00425CA8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
        goto L_00425CB8;
    // 0x00425CA8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_00425CAC:
    // 0x00425CAC: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x00425CB0: bne         $v0, $zero, L_00425C8C
    if (ctx->r2 != 0) {
        // 0x00425CB4: nop
    
            goto L_00425C8C;
    }
    // 0x00425CB4: nop

L_00425CB8:
    // 0x00425CB8: beql        $a0, $t2, L_00425CC0
    if (ctx->r4 == ctx->r10) {
        // 0x00425CBC: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_00425CC0;
    }
    goto skip_2;
    // 0x00425CBC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_2:
L_00425CC0:
    // 0x00425CC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00425CC4: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00425CC8: bne         $v0, $zero, L_00425C68
    if (ctx->r2 != 0) {
        // 0x00425CCC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00425C68;
    }
    // 0x00425CCC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00425CD0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
    // 0x00425CD4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x00425CD8: and         $s5, $v1, $v0
    ctx->r21 = ctx->r3 & ctx->r2;
    // 0x00425CDC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00425CE0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425CE4: jal         0x0029E460
    // 0x00425CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00425CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x00425CEC: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x00425CF0: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x00425CF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425CF8: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
L_00425CFC:
    // 0x00425CFC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00425D00: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x00425D04: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00425D08: bnel        $v0, $zero, L_00425D10
    if (ctx->r2 != 0) {
        // 0x00425D0C: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_00425D10;
    }
    goto skip_3;
    // 0x00425D0C: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_3:
L_00425D10:
    // 0x00425D10: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x00425D14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425D18: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00425D1C: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_00425D20:
    // 0x00425D20: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00425D24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425D28: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00425D2C: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425D30: bnel        $v1, $v0, L_00425D40
    if (ctx->r3 != ctx->r2) {
        // 0x00425D34: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00425D40;
    }
    goto skip_4;
    // 0x00425D34: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x00425D38: j           L_00425D4C
    // 0x00425D3C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
        goto L_00425D4C;
    // 0x00425D3C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_00425D40:
    // 0x00425D40: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x00425D44: bne         $v0, $zero, L_00425D20
    if (ctx->r2 != 0) {
        // 0x00425D48: nop
    
            goto L_00425D20;
    }
    // 0x00425D48: nop

L_00425D4C:
    // 0x00425D4C: beql        $a0, $t2, L_00425D54
    if (ctx->r4 == ctx->r10) {
        // 0x00425D50: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_00425D54;
    }
    goto skip_5;
    // 0x00425D50: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_5:
L_00425D54:
    // 0x00425D54: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00425D58: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00425D5C: bne         $v0, $zero, L_00425CFC
    if (ctx->r2 != 0) {
        // 0x00425D60: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00425CFC;
    }
    // 0x00425D60: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00425D64: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x00425D68: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00425D70: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00425D78: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00425D7C: addiu       $v1, $v1, 0xC80
    ctx->r3 = ADD32(ctx->r3, 0XC80);
    // 0x00425D80: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00425D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425D88: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00425D8C: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x00425D90: lbu         $a1, 0x1($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1);
    // turok2: reconnected split function: a stray ELF symbol at 0x00425D94 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00425D94(rdram, ctx);
;}
RECOMP_FUNC void entry_00425D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425D64: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x00425D68: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00425D70: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00425D74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00425D78: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00425D7C: addiu       $v1, $v1, 0xC80
    ctx->r3 = ADD32(ctx->r3, 0XC80);
    // 0x00425D80: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x00425D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425D88: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00425D8C: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x00425D90: lbu         $a1, 0x1($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1);
    // turok2: reconnected split function: a stray ELF symbol at 0x00425D94 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00425D94(rdram, ctx);
;}
RECOMP_FUNC void entry_00425E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425E44: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00425E48: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00425E4C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00425E50: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00425E54: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00425E58: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00425E5C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00425E60: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00425E64: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00425E68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00425E6C: jr          $ra
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_00425F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00425F68: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    after_0:
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
RECOMP_FUNC void entry_00425F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00425F68: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    after_0:
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
RECOMP_FUNC void entry_00426034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426034: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00426038: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042603C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00426040: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00426044: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00426048: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042604C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00426050: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00426054: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426058: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042605C: jr          $ra
    // 0x00426060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00426060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00426038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426038: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042603C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00426040: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00426044: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00426048: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042604C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00426050: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00426054: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426058: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042605C: jr          $ra
    // 0x00426060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00426060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042606C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042606C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00426070: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00426074: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00426078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0042607C: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x00426080: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x00426084 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426084(rdram, ctx);
;}
RECOMP_FUNC void entry_004262CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426224:
    // 0x004262CC: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x004262D0: bne         $s0, $zero, L_00426324
    if (ctx->r16 != 0) {
        // 0x004262D4: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_00426324;
    }
    // 0x004262D4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004262D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004262DC: addiu       $a0, $a0, 0xC80
    ctx->r4 = ADD32(ctx->r4, 0XC80);
    // 0x004262E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004262E4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x004262E8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x004262EC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004262F0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x004262F4: jal         0x00428CF0
    // 0x004262F8: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    func_00428CF0(rdram, ctx);
        goto after_0;
    // 0x004262F8: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    after_0:
    // 0x004262FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00426300: beq         $s0, $zero, L_00426314
    if (ctx->r16 == 0) {
        // 0x00426304: nop
    
            goto L_00426314;
    }
    // 0x00426304: nop

    // 0x00426308: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0042630C: bne         $s0, $zero, L_00426324
    if (ctx->r16 != 0) {
        // 0x00426310: nop
    
            goto L_00426324;
    }
    // 0x00426310: nop

L_00426314:
    // 0x00426314: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00426318: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0042631C: jal         0x0029E460
    // 0x00426320: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0029E460(rdram, ctx);
        goto after_1;
    // 0x00426320: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_00426324:
    // 0x00426324: jal         0x002858A4
    // 0x00426328: nop

    func_002858A4(rdram, ctx);
        goto after_2;
    // 0x00426328: nop

    after_2:
    // 0x0042632C: jal         0x002053A8
    // 0x00426330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_3;
    // 0x00426330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x00426334: beq         $s1, $zero, L_00426344
    if (ctx->r17 == 0) {
        // 0x00426338: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00426344;
    }
    // 0x00426338: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042633C: jal         0x002052D8
    // 0x00426340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x00426340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_00426344:
    // 0x00426344: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00426348: bne         $v0, $zero, L_0042636C
    if (ctx->r2 != 0) {
        // 0x0042634C: nop
    
            goto L_0042636C;
    }
    // 0x0042634C: nop

    // 0x00426350: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00426354: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x00426358: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0042635C: jal         0x00266C80
    // 0x00426360: nop

    func_00266C80(rdram, ctx);
        goto after_5;
    // 0x00426360: nop

    after_5:
    // 0x00426364: beq         $v0, $zero, L_0042638C
    if (ctx->r2 == 0) {
        // 0x00426368: nop
    
            goto L_0042638C;
    }
    // 0x00426368: nop

L_0042636C:
    // 0x0042636C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00426370: jal         0x00426064
    // 0x00426374: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_00426064(rdram, ctx);
        goto after_6;
    // 0x00426374: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_6:
    // 0x00426378: bne         $v0, $zero, L_0042638C
    if (ctx->r2 != 0) {
        // 0x0042637C: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_0042638C;
    }
    // 0x0042637C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00426380: slti        $v0, $s5, 0x4
    ctx->r2 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x00426384: bne         $v0, $zero, L_00426224
    if (ctx->r2 != 0) {
        // 0x00426388: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_00426224;
    }
    // 0x00426388: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_0042638C:
    // 0x0042638C: jal         0x002053A8
    // 0x00426390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_7;
    // 0x00426390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x00426394: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x00426398: beq         $t0, $zero, L_004263A8
    if (ctx->r8 == 0) {
        // 0x0042639C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004263A8;
    }
    // 0x0042639C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004263A0: jal         0x002052D8
    // 0x004263A4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    func_002052D8(rdram, ctx);
        goto after_8;
    // 0x004263A4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    after_8:
L_004263A8:
    // 0x004263A8: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x004263AC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    entry_004263AC(rdram, ctx);
;}
RECOMP_FUNC void entry_004263AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004263AC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x004263B0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x004263B4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x004263B8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x004263BC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x004263C0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x004263C4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x004263C8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x004263CC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x004263D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x004263D4: jr          $ra
    // 0x004263D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x004263D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_00426428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426428: sw          $v0, 0x2220($at)
    MEM_W(0X2220, ctx->r1) = ctx->r2;
    // 0x0042642C: jr          $ra
    // 0x00426430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00426430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00426454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426454: jal         0x002052D8
    // 0x00426458: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x00426458: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0042645C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426460: sw          $zero, 0x2228($at)
    MEM_W(0X2228, ctx->r1) = 0;
    // 0x00426464: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426468: sw          $zero, 0x2224($at)
    MEM_W(0X2224, ctx->r1) = 0;
    // 0x0042646C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00426470: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426474: sw          $zero, 0x2220($at)
    MEM_W(0X2220, ctx->r1) = 0;
    // 0x00426478: jr          $ra
    // turok2: restored delay slot: a stray ELF symbol at 0x0042647C sits on this
    // jump's delay slot, so the recompiler stopped at the jump and
    // dropped the instruction. On the hardware it runs before the
    // jump takes effect.
    // 0x0042647C: addiu $r29, $r29, 0X18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
;}
RECOMP_FUNC void entry_0042647C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042647C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x00426480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00426484: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00426488: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042648C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00426490: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00426494: jal         0x00285878
    // 0x00426498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00426498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042649C: jal         0x002847E0
    // 0x004264A0: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x004264A0: nop

    after_1:
    // 0x004264A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004264A8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004264AC: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x004264B0: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x004264B4: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x004264B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x004264BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004264C0: addiu       $a0, $a0, 0xAA0
    ctx->r4 = ADD32(ctx->r4, 0XAA0);
    // 0x004264C4: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x004264C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004264CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004264D0: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x004264D4: beq         $v1, $zero, L_004264E8
    if (ctx->r3 == 0) {
        // 0x004264D8: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_004264E8;
    }
    // 0x004264D8: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x004264DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x004264E0: j           L_00426508
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00426508;
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004264E8:
    // 0x004264E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004264EC: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x004264F0: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x004264F4: jal         0x00299198
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00299198(rdram, ctx);
        goto after_2;
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004264FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00426500: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00426504: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00426508:
    // 0x00426508: beq         $v0, $zero, L_00426518
    if (ctx->r2 == 0) {
        // 0x0042650C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426518;
    }
    // 0x0042650C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426510: j           L_00426534
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_00426534;
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00426518:
    // 0x00426518: jal         0x004258E8
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00426520: beq         $v0, $zero, L_00426530
    if (ctx->r2 == 0) {
        // 0x00426524: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426530;
    }
    // 0x00426524: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426528: j           L_00426534
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00426534;
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00426530:
    // 0x00426530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00426534:
    // 0x00426534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426538: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0042653C: sw          $v0, 0xC60($at)
    MEM_W(0XC60, ctx->r1) = ctx->r2;
    // 0x00426540: jal         0x002858A4
    // 0x00426544: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x00426544: nop

    after_4:
    // 0x00426548: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042654C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426554: jr          $ra
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004264B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004264B4: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x004264B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x004264BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004264C0: addiu       $a0, $a0, 0xAA0
    ctx->r4 = ADD32(ctx->r4, 0XAA0);
    // 0x004264C4: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x004264C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004264CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004264D0: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x004264D4: beq         $v1, $zero, L_004264E8
    if (ctx->r3 == 0) {
        // 0x004264D8: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_004264E8;
    }
    // 0x004264D8: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x004264DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x004264E0: j           L_00426508
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00426508;
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004264E8:
    // 0x004264E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004264EC: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x004264F0: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x004264F4: jal         0x00299198
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00299198(rdram, ctx);
        goto after_0;
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x004264FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00426500: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00426504: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00426508:
    // 0x00426508: beq         $v0, $zero, L_00426518
    if (ctx->r2 == 0) {
        // 0x0042650C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426518;
    }
    // 0x0042650C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426510: j           L_00426534
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_00426534;
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00426518:
    // 0x00426518: jal         0x004258E8
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_1;
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00426520: beq         $v0, $zero, L_00426530
    if (ctx->r2 == 0) {
        // 0x00426524: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426530;
    }
    // 0x00426524: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426528: j           L_00426534
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00426534;
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00426530:
    // 0x00426530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00426534:
    // 0x00426534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426538: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0042653C: sw          $v0, 0xC60($at)
    MEM_W(0XC60, ctx->r1) = ctx->r2;
    // 0x00426540: jal         0x002858A4
    // 0x00426544: nop

    func_002858A4(rdram, ctx);
        goto after_2;
    // 0x00426544: nop

    after_2:
    // 0x00426548: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042654C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426554: jr          $ra
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004264D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004264D0: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x004264D4: beq         $v1, $zero, L_004264E8
    if (ctx->r3 == 0) {
        // 0x004264D8: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_004264E8;
    }
    // 0x004264D8: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x004264DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x004264E0: j           L_00426508
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00426508;
    // 0x004264E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004264E8:
    // 0x004264E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004264EC: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x004264F0: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x004264F4: jal         0x00299198
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00299198(rdram, ctx);
        goto after_0;
    // 0x004264F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x004264FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00426500: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00426504: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00426508:
    // 0x00426508: beq         $v0, $zero, L_00426518
    if (ctx->r2 == 0) {
        // 0x0042650C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426518;
    }
    // 0x0042650C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426510: j           L_00426534
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_00426534;
    // 0x00426514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00426518:
    // 0x00426518: jal         0x004258E8
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004258E8(rdram, ctx);
        goto after_1;
    // 0x0042651C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00426520: beq         $v0, $zero, L_00426530
    if (ctx->r2 == 0) {
        // 0x00426524: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_00426530;
    }
    // 0x00426524: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00426528: j           L_00426534
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00426534;
    // 0x0042652C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00426530:
    // 0x00426530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00426534:
    // 0x00426534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426538: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0042653C: sw          $v0, 0xC60($at)
    MEM_W(0XC60, ctx->r1) = ctx->r2;
    // 0x00426540: jal         0x002858A4
    // 0x00426544: nop

    func_002858A4(rdram, ctx);
        goto after_2;
    // 0x00426544: nop

    after_2:
    // 0x00426548: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042654C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426554: jr          $ra
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00426558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00426600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
    entry_004266E0(rdram, ctx);
    return;
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
    // turok2: reconnected split function: a stray ELF symbol at 0x0042662C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    entry_0042662C(rdram, ctx);
;}
RECOMP_FUNC void entry_0042662C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042662C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00426630: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x00426634: jal         0x00285878
    // 0x00426638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00426638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0042663C: jal         0x002847E0
    // 0x00426640: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00426640: nop

    after_1:
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
        goto after_2;
    // 0x00426694: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_2:
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
        goto after_3;
    // 0x004266B8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_3:
L_004266BC:
    // 0x004266BC: jal         0x002858A4
    // 0x004266C0: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x004266C0: nop

    after_4:
    // 0x004266C4: jal         0x002053A8
    // 0x004266C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_5;
    // 0x004266C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
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
        goto after_6;
    // 0x004266D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
L_004266DC:
    // 0x004266DC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
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
RECOMP_FUNC void entry_004266C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004266C0: nop

    // 0x004266C4: jal         0x002053A8
    // 0x004266C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x004266C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
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
        goto after_1;
    // 0x004266D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_004266DC:
    // 0x004266DC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
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
