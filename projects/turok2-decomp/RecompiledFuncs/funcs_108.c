#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_004266E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_004267DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004267DC: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x004267E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004267E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004267E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004267EC: bltzl       $v0, L_004267F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x004267F0: addiu       $v0, $v0, 0xFF
        ctx->r2 = ADD32(ctx->r2, 0XFF);
            goto L_004267F4;
    }
    goto skip_0;
    // 0x004267F0: addiu       $v0, $v0, 0xFF
    ctx->r2 = ADD32(ctx->r2, 0XFF);
    skip_0:
L_004267F4:
    // 0x004267F4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x004267F8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x004267FC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00426800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426808: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0042680C: jr          $ra
    // 0x00426810: nop

    return;
    // 0x00426810: nop

;}
RECOMP_FUNC void entry_00426884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00426898: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
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
        goto after_1;
    // 0x004268AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x004268B0: jal         0x002858A4
    // 0x004268B4: nop

    func_002858A4(rdram, ctx);
        goto after_2;
    // 0x004268B4: nop

    after_2:
    // 0x004268B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
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
RECOMP_FUNC void entry_00426898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426898: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
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
        goto after_0;
    // 0x004268AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x004268B0: jal         0x002858A4
    // 0x004268B4: nop

    func_002858A4(rdram, ctx);
        goto after_1;
    // 0x004268B4: nop

    after_1:
    // 0x004268B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
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
RECOMP_FUNC void entry_004269A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004269A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004269A8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004269AC: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x004269B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x004269B4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004269B8: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    // 0x004269BC: jr          $ra
    // 0x004269C0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    return;
    // 0x004269C0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void entry_004269B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004269B4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004269B8: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    // 0x004269BC: jr          $ra
    // 0x004269C0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    return;
    // 0x004269C0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void entry_00426ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426ACC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x00426AD0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x00426AD4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x00426AD8: beq         $v1, $v0, L_00426AE8
    if (ctx->r3 == ctx->r2) {
        // 0x00426ADC: sw          $s0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r16;
            goto L_00426AE8;
    }
    // 0x00426ADC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x00426AE0: j           L_00426BAC
    // 0x00426AE4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00426BAC(rdram, ctx);
    return;
    // 0x00426AE4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00426AE8:
    // 0x00426AE8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00426AEC: addiu       $s6, $sp, 0x44
    ctx->r22 = ADD32(ctx->r29, 0X44);
    // 0x00426AF0: addiu       $s5, $sp, 0x20
    ctx->r21 = ADD32(ctx->r29, 0X20);
    // 0x00426AF4: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // turok2: reconnected split function: a stray ELF symbol at 0x00426AF8 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426AF8(rdram, ctx);
;}
RECOMP_FUNC void entry_00426B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426B98: sllv        $v0, $v1, $s0
    ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
    // 0x00426B9C: slti        $v1, $s0, 0x10
    ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00426BA0: beq         $v1, $zero, L_00426BAC
    if (ctx->r3 == 0) {
        // 0x00426BA4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00426BAC;
    }
    // 0x00426BA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00426BA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00426BAC:
    // 0x00426BAC: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00426BB0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x00426BB4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x00426BB8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x00426BBC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00426BC0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00426BC4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00426BC8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00426BCC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00426BD0: jr          $ra
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void entry_00426BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426BA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00426BAC: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00426BB0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x00426BB4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x00426BB8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x00426BBC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00426BC0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00426BC4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00426BC8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00426BCC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00426BD0: jr          $ra
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void entry_00426BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426BAC: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00426BB0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x00426BB4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x00426BB8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x00426BBC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00426BC0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00426BC4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00426BC8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00426BCC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00426BD0: jr          $ra
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void entry_00426C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426C50: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00426C54: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00426C58: jal         0x00299198
    // 0x00426C5C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    func_00299198(rdram, ctx);
        goto after_0;
    // 0x00426C5C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    after_0:
    // 0x00426C60: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00426C64: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00426C68: j           L_00426C78
    // 0x00426C6C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    entry_00426C78(rdram, ctx);
    return;
    // 0x00426C6C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426C70: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x00426C74 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426C74(rdram, ctx);
;}
RECOMP_FUNC void entry_00426C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00426C7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426C80: jr          $ra
    // 0x00426C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00426C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00426C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
    // 0x00426CCC: jr          $ra
    // 0x00426CD0: nop

    return;
    // 0x00426CD0: nop

;}
RECOMP_FUNC void entry_00426CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426C94:
    // 0x00426CAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426CB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426CB4: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00426CB8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
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
    // 0x00426CCC: jr          $ra
    // 0x00426CD0: nop

    return;
    // 0x00426CD0: nop

;}
RECOMP_FUNC void entry_00426D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426CE0:
    // 0x00426D24: slti        $v0, $a3, 0x42
    ctx->r2 = SIGNED(ctx->r7) < 0X42 ? 1 : 0;
L_00426D04:
    // 0x00426D28: bne         $v0, $zero, L_00426D04
    if (ctx->r2 != 0) {
        // 0x00426D2C: nop
    
            goto L_00426D04;
    }
    // 0x00426D2C: nop

    // 0x00426D30: beql        $a3, $t3, L_00426D38
    if (ctx->r7 == ctx->r11) {
        // 0x00426D34: sb          $zero, 0x0($a1)
        MEM_B(0X0, ctx->r5) = 0;
            goto L_00426D38;
    }
    goto skip_0;
    // 0x00426D34: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    skip_0:
L_00426D38:
    // 0x00426D38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426D3C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x00426D40: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00426D44: bne         $v0, $zero, L_00426CE0
    if (ctx->r2 != 0) {
        // 0x00426D48: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00426CE0;
    }
    // 0x00426D48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426D4C: jr          $ra
    // 0x00426D50: nop

    return;
    // 0x00426D50: nop

;}
RECOMP_FUNC void entry_00426D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426D5C:
    // 0x00426D70: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426D74: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426D78: beq         $v1, $v0, L_00426D5C
    if (ctx->r3 == ctx->r2) {
            // 0x00426D7C: nop

    func_00426D5C(rdram, ctx);
    return;
    }
    // 0x00426D7C: nop

    // 0x00426D80: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426D84: jr          $ra
    // 0x00426D88: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x00426D88: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void entry_00426D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426D98:
    // 0x00426D98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00426D9C: bne         $v0, $zero, L_00426D98
    if (ctx->r2 != 0) {
        // 0x00426DA0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00426D98;
    }
    // 0x00426DA0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00426DA4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x00426DA8: jr          $ra
    // 0x00426DAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x00426DAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void entry_00426EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426E8C:
    // 0x00426EBC: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x00426EC0: bne         $v0, $zero, L_00426E8C
    if (ctx->r2 != 0) {
        // 0x00426EC4: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_00426E8C;
    }
    // 0x00426EC4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x00426EC8: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x00426ECC: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00426ED0: beq         $v0, $zero, L_00426F14
    if (ctx->r2 == 0) {
        // 0x00426ED4: nor         $a2, $zero, $a2
        ctx->r6 = ~(0 | ctx->r6);
            goto L_00426F14;
    }
    // 0x00426ED4: nor         $a2, $zero, $a2
    ctx->r6 = ~(0 | ctx->r6);
    // 0x00426ED8: lui         $a3, 0xFF
    ctx->r7 = S32(0XFF << 16);
    // 0x00426EDC: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
L_00426EE0:
    // 0x00426EE0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00426EE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426EE8: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x00426EEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00426EF4: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x00426EF8: srl         $v0, $a2, 8
    ctx->r2 = S32(U32(ctx->r6) >> 8);
    // 0x00426EFC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00426F00: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x00426F04: xor         $a2, $v1, $v0
    ctx->r6 = ctx->r3 ^ ctx->r2;
    // 0x00426F08: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00426F0C: bne         $v0, $zero, L_00426EE0
    if (ctx->r2 != 0) {
        // 0x00426F10: nop
    
            goto L_00426EE0;
    }
    // 0x00426F10: nop

L_00426F14:
    // 0x00426F14: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x00426F18: jr          $ra
    // 0x00426F1C: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
    return;
    // 0x00426F1C: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
;}
RECOMP_FUNC void entry_004270A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004270A0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x004270A4: jr          $ra
    // 0x004270A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004270A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00427318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004272C0:
    // 0x00427318: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004272E8:
    // 0x0042731C: addiu       $v0, $sp, 0x24C
    ctx->r2 = ADD32(ctx->r29, 0X24C);
    // 0x00427320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00427324: jal         0x00427524
    // 0x00427328: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00427524(rdram, ctx);
        goto after_0;
    // 0x00427328: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x0042732C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427330: bne         $v1, $zero, L_004274E8
    if (ctx->r3 != 0) {
        // 0x00427334: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004274E8;
    }
    // 0x00427334: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00427338: lw          $v1, 0x244($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X244);
    // 0x0042733C: beql        $v1, $v0, L_004273E4
    if (ctx->r3 == ctx->r2) {
        // 0x00427340: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004273E4;
    }
    goto skip_0;
    // 0x00427340: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x00427344: beq         $fp, $zero, L_00427388
    if (ctx->r30 == 0) {
        // 0x00427348: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00427388;
    }
    // 0x00427348: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042734C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427350: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x00427354: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00427358: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0042735C: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x00427360: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x00427364: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00427368: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0042736C: jal         0x00429AA4
    // 0x00427370: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    func_00429AA4(rdram, ctx);
        goto after_1;
    // 0x00427370: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    after_1:
    // 0x00427374: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427378: beq         $v1, $zero, L_0042739C
    if (ctx->r3 == 0) {
        // 0x0042737C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0042739C;
    }
    // 0x0042737C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00427380: j           L_004274F4
    // 0x00427384: nop

        goto L_004274F4;
    // 0x00427384: nop

L_00427388:
    // 0x00427388: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x0042738C: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00427390: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00427394: sh          $v0, 0x266($sp)
    MEM_H(0X266, ctx->r29) = ctx->r2;
    // 0x00427398: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0042739C:
    // 0x0042739C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004273A0: lw          $v1, 0x26C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X26C);
L_004273A4:
    // 0x004273A4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x004273A8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x004273AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004273B0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004273B4: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x004273B8: bne         $v0, $zero, L_004273A4
    if (ctx->r2 != 0) {
        // 0x004273BC: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_004273A4;
    }
    // 0x004273BC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x004273C0: lw          $v1, 0x248($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X248);
    // 0x004273C4: lw          $t0, 0x24C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24C);
    // 0x004273C8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x004273CC: sb          $s1, 0x258($sp)
    MEM_B(0X258, ctx->r29) = ctx->r17;
    // 0x004273D0: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x004273D4: beq         $v0, $zero, L_004272C0
    if (ctx->r2 == 0) {
        // 0x004273D8: sw          $t0, 0x254($sp)
        MEM_W(0X254, ctx->r29) = ctx->r8;
            goto L_004272C0;
    }
    // 0x004273D8: sw          $t0, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r8;
    // 0x004273DC: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
    // 0x004273E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004273E4:
    // 0x004273E4: lbu         $v1, 0x64($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X64);
    // 0x004273E8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x004273EC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x004273F0: bnel        $v0, $zero, L_004272E8
    if (ctx->r2 != 0) {
        // 0x004273F4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_004272E8;
    }
    goto skip_1;
    // 0x004273F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_1:
    // 0x004273F8: bgtz        $s2, L_004274F4
    if (SIGNED(ctx->r18) > 0) {
        // 0x004273FC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004274F4;
    }
    // 0x004273FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00427400: lw          $v1, 0x244($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X244);
    // 0x00427404: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00427408: bne         $v1, $v0, L_00427418
    if (ctx->r3 != ctx->r2) {
        // 0x0042740C: addiu       $a1, $sp, 0x120
        ctx->r5 = ADD32(ctx->r29, 0X120);
            goto L_00427418;
    }
    // 0x0042740C: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x00427410: j           L_004274F4
    // 0x00427414: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_004274F4;
    // 0x00427414: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427418:
    // 0x00427418: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x0042741C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00427420: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00427424: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00427428: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x0042742C: lbu         $v0, 0x247($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X247);
    // 0x00427430: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00427434: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427438: jal         0x00429AA4
    // 0x0042743C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    func_00429AA4(rdram, ctx);
        goto after_2;
    // 0x0042743C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    after_2:
    // 0x00427440: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427444: bne         $v1, $zero, L_004274F4
    if (ctx->r3 != 0) {
        // 0x00427448: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004274F4;
    }
    // 0x00427448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042744C: lhu         $t0, 0x266($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X266);
    // 0x00427450: sh          $t0, 0x226($sp)
    MEM_H(0X226, ctx->r29) = ctx->r8;
    // 0x00427454: lhu         $t0, 0x250($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X250);
    // 0x00427458: sh          $t0, 0x224($sp)
    MEM_H(0X224, ctx->r29) = ctx->r8;
    // 0x0042745C: lw          $t0, 0x2A0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A0);
    // 0x00427460: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
    // 0x00427464: sh          $zero, 0x22A($sp)
    MEM_H(0X22A, ctx->r29) = 0;
    // 0x00427468: sw          $t0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r8;
L_0042746C:
    // 0x0042746C: lbu         $v1, 0x0($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X0);
    // 0x00427470: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427474: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00427478: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x0042747C: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x00427480: bne         $v0, $zero, L_0042746C
    if (ctx->r2 != 0) {
        // 0x00427484: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_0042746C;
    }
    // 0x00427484: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00427488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042748C: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
L_00427490:
    // 0x00427490: lbu         $v1, 0x0($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X0);
    // 0x00427494: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427498: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042749C: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x004274A0: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004274A4: bne         $v0, $zero, L_00427490
    if (ctx->r2 != 0) {
        // 0x004274A8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_00427490;
    }
    // 0x004274A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x004274AC: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004274B0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x004274B4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x004274B8: addiu       $a3, $sp, 0x220
    ctx->r7 = ADD32(ctx->r29, 0X220);
    // 0x004274BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004274C0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004274C4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004274C8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x004274CC: jal         0x00299A40
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_3;
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x004274D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004274D8: beql        $v1, $zero, L_004274F4
    if (ctx->r3 == 0) {
        // 0x004274DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004274F4;
    }
    goto skip_2;
    // 0x004274DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
    // 0x004274E0: j           L_004274F4
    // 0x004274E4: nop

        goto L_004274F4;
    // 0x004274E4: nop

L_004274E8:
    // 0x004274E8: j           L_004274F4
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004274F4;
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004274F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004274F4:
    // 0x004274F4: lw          $ra, 0x294($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X294);
    // 0x004274F8: lw          $fp, 0x290($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X290);
    // 0x004274FC: lw          $s7, 0x28C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28C);
    // 0x00427500: lw          $s6, 0x288($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X288);
    // 0x00427504: lw          $s5, 0x284($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X284);
    // 0x00427508: lw          $s4, 0x280($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X280);
    // 0x0042750C: lw          $s3, 0x27C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X27C);
    // 0x00427510: lw          $s2, 0x278($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X278);
    // 0x00427514: lw          $s1, 0x274($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X274);
    // 0x00427518: lw          $s0, 0x270($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X270);
    // 0x0042751C: jr          $ra
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    return;
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
RECOMP_FUNC void entry_00427414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427414: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00427418: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x0042741C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00427420: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00427424: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00427428: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x0042742C: lbu         $v0, 0x247($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X247);
    // 0x00427430: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00427434: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427438: jal         0x00429AA4
    // 0x0042743C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x0042743C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    after_0:
    // 0x00427440: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427444: bne         $v1, $zero, L_004274F4
    if (ctx->r3 != 0) {
        // 0x00427448: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004274F4;
    }
    // 0x00427448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042744C: lhu         $t0, 0x266($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X266);
    // 0x00427450: sh          $t0, 0x226($sp)
    MEM_H(0X226, ctx->r29) = ctx->r8;
    // 0x00427454: lhu         $t0, 0x250($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X250);
    // 0x00427458: sh          $t0, 0x224($sp)
    MEM_H(0X224, ctx->r29) = ctx->r8;
    // 0x0042745C: lw          $t0, 0x2A0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A0);
    // 0x00427460: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
    // 0x00427464: sh          $zero, 0x22A($sp)
    MEM_H(0X22A, ctx->r29) = 0;
    // 0x00427468: sw          $t0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r8;
L_0042746C:
    // 0x0042746C: lbu         $v1, 0x0($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X0);
    // 0x00427470: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427474: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00427478: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x0042747C: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x00427480: bne         $v0, $zero, L_0042746C
    if (ctx->r2 != 0) {
        // 0x00427484: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_0042746C;
    }
    // 0x00427484: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00427488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042748C: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
L_00427490:
    // 0x00427490: lbu         $v1, 0x0($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X0);
    // 0x00427494: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427498: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042749C: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x004274A0: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004274A4: bne         $v0, $zero, L_00427490
    if (ctx->r2 != 0) {
        // 0x004274A8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_00427490;
    }
    // 0x004274A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x004274AC: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004274B0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x004274B4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x004274B8: addiu       $a3, $sp, 0x220
    ctx->r7 = ADD32(ctx->r29, 0X220);
    // 0x004274BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004274C0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004274C4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004274C8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x004274CC: jal         0x00299A40
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x004274D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004274D8: beql        $v1, $zero, L_004274F4
    if (ctx->r3 == 0) {
        // 0x004274DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004274F4;
    }
    goto skip_0;
    // 0x004274DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x004274E0: j           L_004274F4
    // 0x004274E4: nop

        goto L_004274F4;
    // 0x004274E4: nop

    // 0x004274E8: j           L_004274F4
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004274F4;
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004274F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004274F4:
    // 0x004274F4: lw          $ra, 0x294($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X294);
    // 0x004274F8: lw          $fp, 0x290($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X290);
    // 0x004274FC: lw          $s7, 0x28C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28C);
    // 0x00427500: lw          $s6, 0x288($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X288);
    // 0x00427504: lw          $s5, 0x284($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X284);
    // 0x00427508: lw          $s4, 0x280($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X280);
    // 0x0042750C: lw          $s3, 0x27C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X27C);
    // 0x00427510: lw          $s2, 0x278($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X278);
    // 0x00427514: lw          $s1, 0x274($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X274);
    // 0x00427518: lw          $s0, 0x270($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X270);
    // 0x0042751C: jr          $ra
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    return;
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
RECOMP_FUNC void entry_00427444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427444: bne         $v1, $zero, L_004274F4
    if (ctx->r3 != 0) {
        // 0x00427448: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004274F4;
    }
    // 0x00427448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042744C: lhu         $t0, 0x266($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X266);
    // 0x00427450: sh          $t0, 0x226($sp)
    MEM_H(0X226, ctx->r29) = ctx->r8;
    // 0x00427454: lhu         $t0, 0x250($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X250);
    // 0x00427458: sh          $t0, 0x224($sp)
    MEM_H(0X224, ctx->r29) = ctx->r8;
    // 0x0042745C: lw          $t0, 0x2A0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A0);
    // 0x00427460: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
    // 0x00427464: sh          $zero, 0x22A($sp)
    MEM_H(0X22A, ctx->r29) = 0;
    // 0x00427468: sw          $t0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r8;
L_0042746C:
    // 0x0042746C: lbu         $v1, 0x0($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X0);
    // 0x00427470: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427474: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00427478: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x0042747C: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x00427480: bne         $v0, $zero, L_0042746C
    if (ctx->r2 != 0) {
        // 0x00427484: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_0042746C;
    }
    // 0x00427484: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00427488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042748C: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
L_00427490:
    // 0x00427490: lbu         $v1, 0x0($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X0);
    // 0x00427494: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427498: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042749C: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x004274A0: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004274A4: bne         $v0, $zero, L_00427490
    if (ctx->r2 != 0) {
        // 0x004274A8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_00427490;
    }
    // 0x004274A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x004274AC: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004274B0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x004274B4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x004274B8: addiu       $a3, $sp, 0x220
    ctx->r7 = ADD32(ctx->r29, 0X220);
    // 0x004274BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004274C0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004274C4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004274C8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x004274CC: jal         0x00299A40
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x004274D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004274D8: beql        $v1, $zero, L_004274F4
    if (ctx->r3 == 0) {
        // 0x004274DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004274F4;
    }
    goto skip_0;
    // 0x004274DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x004274E0: j           L_004274F4
    // 0x004274E4: nop

        goto L_004274F4;
    // 0x004274E4: nop

    // 0x004274E8: j           L_004274F4
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004274F4;
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004274F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004274F4:
    // 0x004274F4: lw          $ra, 0x294($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X294);
    // 0x004274F8: lw          $fp, 0x290($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X290);
    // 0x004274FC: lw          $s7, 0x28C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28C);
    // 0x00427500: lw          $s6, 0x288($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X288);
    // 0x00427504: lw          $s5, 0x284($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X284);
    // 0x00427508: lw          $s4, 0x280($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X280);
    // 0x0042750C: lw          $s3, 0x27C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X27C);
    // 0x00427510: lw          $s2, 0x278($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X278);
    // 0x00427514: lw          $s1, 0x274($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X274);
    // 0x00427518: lw          $s0, 0x270($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X270);
    // 0x0042751C: jr          $ra
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    return;
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
RECOMP_FUNC void entry_004274E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004274E4: nop

    // 0x004274E8: j           L_004274F4
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004274F4;
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004274F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004274F4:
    // 0x004274F4: lw          $ra, 0x294($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X294);
    // 0x004274F8: lw          $fp, 0x290($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X290);
    // 0x004274FC: lw          $s7, 0x28C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28C);
    // 0x00427500: lw          $s6, 0x288($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X288);
    // 0x00427504: lw          $s5, 0x284($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X284);
    // 0x00427508: lw          $s4, 0x280($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X280);
    // 0x0042750C: lw          $s3, 0x27C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X27C);
    // 0x00427510: lw          $s2, 0x278($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X278);
    // 0x00427514: lw          $s1, 0x274($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X274);
    // 0x00427518: lw          $s0, 0x270($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X270);
    // 0x0042751C: jr          $ra
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    return;
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
RECOMP_FUNC void entry_004275C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004275C4:
    // 0x004275C4: j           L_004276C0
    // 0x004275C8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    entry_004276C0(rdram, ctx);
    return;
    // 0x004275C8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x004275CC: addiu       $v0, $sp, 0x2F
    ctx->r2 = ADD32(ctx->r29, 0X2F);
L_004275D0:
    // 0x004275D0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x004275D4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004275D8: bgez        $v1, L_004275D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004275DC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004275D0;
    }
    // 0x004275DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004275E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004275E4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x004275E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004275EC: addu        $s0, $a1, $v0
    ctx->r16 = ADD32(ctx->r5, ctx->r2);
    // 0x004275F0: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x004275F4: beq         $v0, $zero, L_0042766C
    if (ctx->r2 == 0) {
        // 0x004275F8: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0042766C;
    }
    // 0x004275F8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x004275FC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x00427600: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00427604: addu        $s1, $v0, $s4
    ctx->r17 = ADD32(ctx->r2, ctx->r20);
L_00427608:
    // 0x00427608: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042760C: beq         $v0, $zero, L_0042766C
    if (ctx->r2 == 0) {
        // 0x00427610: nop
    
            goto L_0042766C;
    }
    // 0x00427610: nop

    // 0x00427614: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x00427618: bnel        $v0, $fp, L_0042765C
    if (ctx->r2 != ctx->r30) {
        // 0x0042761C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042765C;
    }
    goto skip_0;
    // 0x0042761C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    skip_0:
    // 0x00427620: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00427624: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00427628: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x0042762C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00427630: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427634: sb          $s3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r19;
    // 0x00427638: jal         0x004276F0
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    func_004276F0(rdram, ctx);
        goto after_0;
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    after_0:
    // 0x00427640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00427644: bne         $a0, $zero, L_004275C4
    if (ctx->r4 != 0) {
        // 0x00427648: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_004275C4;
    }
    // 0x00427648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042764C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00427654: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00427658: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_0042765C:
    // 0x0042765C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427660: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427664: bne         $v0, $zero, L_00427608
    if (ctx->r2 != 0) {
        // 0x00427668: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00427608;
    }
    // 0x00427668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042766C:
    // 0x0042766C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00427670: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00427674: bne         $s0, $v0, L_00427698
    if (ctx->r16 != ctx->r2) {
        // 0x00427678: sw          $s7, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r23;
            goto L_00427698;
    }
    // 0x00427678: sw          $s7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r23;
    // 0x0042767C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427680: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427684: beql        $v0, $zero, L_0042769C
    if (ctx->r2 == 0) {
        // 0x00427688: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0042769C;
    }
    goto skip_1;
    // 0x00427688: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    skip_1:
    // 0x0042768C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00427690: j           L_004275C4
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
        goto L_004275C4;
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
L_00427698:
    // 0x00427698: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0042769C:
    // 0x0042769C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x004276A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004276A0(rdram, ctx);
;}
RECOMP_FUNC void entry_004275E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004275C4:
    // 0x004275E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004275E4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x004275E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004275EC: addu        $s0, $a1, $v0
    ctx->r16 = ADD32(ctx->r5, ctx->r2);
    // 0x004275F0: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x004275F4: beq         $v0, $zero, L_0042766C
    if (ctx->r2 == 0) {
        // 0x004275F8: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0042766C;
    }
    // 0x004275F8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x004275FC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x00427600: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00427604: addu        $s1, $v0, $s4
    ctx->r17 = ADD32(ctx->r2, ctx->r20);
L_00427608:
    // 0x00427608: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042760C: beq         $v0, $zero, L_0042766C
    if (ctx->r2 == 0) {
        // 0x00427610: nop
    
            goto L_0042766C;
    }
    // 0x00427610: nop

    // 0x00427614: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x00427618: bnel        $v0, $fp, L_0042765C
    if (ctx->r2 != ctx->r30) {
        // 0x0042761C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042765C;
    }
    goto skip_0;
    // 0x0042761C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    skip_0:
    // 0x00427620: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00427624: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00427628: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x0042762C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00427630: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427634: sb          $s3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r19;
    // 0x00427638: jal         0x004276F0
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    func_004276F0(rdram, ctx);
        goto after_0;
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    after_0:
    // 0x00427640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00427644: bne         $a0, $zero, L_004275C4
    if (ctx->r4 != 0) {
            // 0x00427648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_004275C4(rdram, ctx);
    return;
    }
    // 0x00427648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042764C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00427654: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00427658: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_0042765C:
    // 0x0042765C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427660: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427664: bne         $v0, $zero, L_00427608
    if (ctx->r2 != 0) {
        // 0x00427668: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00427608;
    }
    // 0x00427668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0042766C:
    // 0x0042766C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00427670: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00427674: bne         $s0, $v0, L_00427698
    if (ctx->r16 != ctx->r2) {
        // 0x00427678: sw          $s7, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r23;
            goto L_00427698;
    }
    // 0x00427678: sw          $s7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r23;
    // 0x0042767C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427680: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427684: beql        $v0, $zero, L_0042769C
    if (ctx->r2 == 0) {
        // 0x00427688: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0042769C;
    }
    goto skip_1;
    // 0x00427688: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    skip_1:
    // 0x0042768C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00427690: j           L_004275C4
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    entry_004275C4(rdram, ctx);
    return;
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
L_00427698:
    // 0x00427698: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0042769C:
    // 0x0042769C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x004276A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004276A0(rdram, ctx);
;}
RECOMP_FUNC void entry_00427610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004275C4:
    // 0x00427610: nop

L_00427608:
    // 0x00427614: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x00427618: bnel        $v0, $fp, L_0042765C
    if (ctx->r2 != ctx->r30) {
        // 0x0042761C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042765C;
    }
    goto skip_0;
    // 0x0042761C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    skip_0:
    // 0x00427620: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00427624: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00427628: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x0042762C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00427630: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427634: sb          $s3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r19;
    // 0x00427638: jal         0x004276F0
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    func_004276F0(rdram, ctx);
        goto after_0;
    // 0x0042763C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
    after_0:
    // 0x00427640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00427644: bne         $a0, $zero, L_004275C4
    if (ctx->r4 != 0) {
            // 0x00427648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_004275C4(rdram, ctx);
    return;
    }
    // 0x00427648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042764C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00427654: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00427658: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_0042765C:
    // 0x0042765C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427660: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427664: bne         $v0, $zero, L_00427608
    if (ctx->r2 != 0) {
        // 0x00427668: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00427608;
    }
    // 0x00427668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042766C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00427670: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00427674: bne         $s0, $v0, L_00427698
    if (ctx->r16 != ctx->r2) {
        // 0x00427678: sw          $s7, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r23;
            goto L_00427698;
    }
    // 0x00427678: sw          $s7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r23;
    // 0x0042767C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00427680: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00427684: beql        $v0, $zero, L_0042769C
    if (ctx->r2 == 0) {
        // 0x00427688: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0042769C;
    }
    goto skip_1;
    // 0x00427688: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    skip_1:
    // 0x0042768C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00427690: j           L_004275C4
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    entry_004275C4(rdram, ctx);
    return;
    // 0x00427694: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
L_00427698:
    // 0x00427698: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_0042769C:
    // 0x0042769C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x004276A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004276A0(rdram, ctx);
;}
RECOMP_FUNC void entry_004276C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004276C0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x004276C4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x004276C8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x004276CC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x004276D0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x004276D4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x004276D8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x004276DC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004276E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004276E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004276E8: jr          $ra
    // 0x004276EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x004276EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_004278A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427890:
    // 0x004278A8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004278AC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004278B0: addiu       $a3, $sp, 0x144
    ctx->r7 = ADD32(ctx->r29, 0X144);
    // 0x004278B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004278B8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x004278BC: jal         0x004279AC
    // 0x004278C0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_004279AC(rdram, ctx);
        goto after_0;
    // 0x004278C0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_0:
    // 0x004278C4: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x004278C8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427988;
    }
    // 0x004278C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004278CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004278D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004278D4: jal         0x00429AA4
    // 0x004278D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_1;
    // 0x004278D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004278DC: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x004278E0: nop
    
            goto L_00427988;
    }
    // 0x004278E0: nop

    // 0x004278E4: lhu         $v0, 0x146($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X146);
    // 0x004278E8: beq         $v0, $s5, L_0042790C
    if (ctx->r2 == ctx->r21) {
        // 0x004278EC: nop
    
            goto L_0042790C;
    }
    // 0x004278EC: nop

    // 0x004278F0: lbu         $s3, 0x146($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X146);
    // 0x004278F4: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x004278F8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004278FC: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x00427900: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x00427904: bne         $v0, $zero, L_00427890
    if (ctx->r2 != 0) {
        // 0x00427908: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427890;
    }
    // 0x00427908: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0042790C:
    // 0x0042790C: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x00427910: sltu        $v0, $s3, $v0
    ctx->r2 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x00427914: bne         $v0, $zero, L_00427924
    if (ctx->r2 != 0) {
        // 0x00427918: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_00427924;
    }
    // 0x00427918: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x0042791C: j           L_00427988
    // 0x00427920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00427988;
    // 0x00427920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427924:
    // 0x00427924: addiu       $v0, $sp, 0x12F
    ctx->r2 = ADD32(ctx->r29, 0X12F);
    // 0x00427928: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x0042792C: sh          $zero, 0x124($sp)
    MEM_H(0X124, ctx->r29) = 0;
    // 0x00427930: sh          $zero, 0x126($sp)
    MEM_H(0X126, ctx->r29) = 0;
    // 0x00427934: sh          $zero, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = 0;
L_00427938:
    // 0x00427938: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x0042793C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427940: bgez        $v1, L_00427938
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00427944: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427938;
    }
    // 0x00427944: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427948: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0042794C: addiu       $v0, $sp, 0x123
    ctx->r2 = ADD32(ctx->r29, 0X123);
L_00427950:
    // 0x00427950: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x00427954: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427958: bgez        $v1, L_00427950
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0042795C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427950;
    }
    // 0x0042795C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427960: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x00427964: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00427968: lhu         $v0, 0x142($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X142);
    // 0x0042796C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x00427970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00427974: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00427978: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042797C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00427980: jal         0x00299A40
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
L_00427988:
    // 0x00427988: lw          $ra, 0x160($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X160);
    // 0x0042798C: lw          $s5, 0x15C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X15C);
    // 0x00427990: lw          $s4, 0x158($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X158);
    // 0x00427994: lw          $s3, 0x154($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X154);
    // 0x00427998: lw          $s2, 0x150($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X150);
    // 0x0042799C: lw          $s1, 0x14C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14C);
    // 0x004279A0: lw          $s0, 0x148($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X148);
    // 0x004279A4: jr          $ra
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void entry_004278CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427890:
    // 0x004278CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004278D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004278D4: jal         0x00429AA4
    // 0x004278D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x004278D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004278DC: bne         $v0, $zero, L_00427988
    if (ctx->r2 != 0) {
        // 0x004278E0: nop
    
            goto L_00427988;
    }
    // 0x004278E0: nop

    // 0x004278E4: lhu         $v0, 0x146($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X146);
    // 0x004278E8: beq         $v0, $s5, L_0042790C
    if (ctx->r2 == ctx->r21) {
        // 0x004278EC: nop
    
            goto L_0042790C;
    }
    // 0x004278EC: nop

    // 0x004278F0: lbu         $s3, 0x146($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X146);
    // 0x004278F4: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x004278F8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004278FC: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x00427900: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x00427904: bne         $v0, $zero, L_00427890
    if (ctx->r2 != 0) {
        // 0x00427908: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427890;
    }
    // 0x00427908: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0042790C:
    // 0x0042790C: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x00427910: sltu        $v0, $s3, $v0
    ctx->r2 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x00427914: bne         $v0, $zero, L_00427924
    if (ctx->r2 != 0) {
        // 0x00427918: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_00427924;
    }
    // 0x00427918: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x0042791C: j           L_00427988
    // 0x00427920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_00427988;
    // 0x00427920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427924:
    // 0x00427924: addiu       $v0, $sp, 0x12F
    ctx->r2 = ADD32(ctx->r29, 0X12F);
    // 0x00427928: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x0042792C: sh          $zero, 0x124($sp)
    MEM_H(0X124, ctx->r29) = 0;
    // 0x00427930: sh          $zero, 0x126($sp)
    MEM_H(0X126, ctx->r29) = 0;
    // 0x00427934: sh          $zero, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = 0;
L_00427938:
    // 0x00427938: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x0042793C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427940: bgez        $v1, L_00427938
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00427944: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427938;
    }
    // 0x00427944: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427948: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0042794C: addiu       $v0, $sp, 0x123
    ctx->r2 = ADD32(ctx->r29, 0X123);
L_00427950:
    // 0x00427950: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x00427954: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427958: bgez        $v1, L_00427950
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0042795C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427950;
    }
    // 0x0042795C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427960: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x00427964: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00427968: lhu         $v0, 0x142($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X142);
    // 0x0042796C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x00427970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00427974: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00427978: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042797C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00427980: jal         0x00299A40
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_1;
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
L_00427988:
    // 0x00427988: lw          $ra, 0x160($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X160);
    // 0x0042798C: lw          $s5, 0x15C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X15C);
    // 0x00427990: lw          $s4, 0x158($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X158);
    // 0x00427994: lw          $s3, 0x154($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X154);
    // 0x00427998: lw          $s2, 0x150($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X150);
    // 0x0042799C: lw          $s1, 0x14C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14C);
    // 0x004279A0: lw          $s0, 0x148($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X148);
    // 0x004279A4: jr          $ra
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void entry_00427944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427944: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427948: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0042794C: addiu       $v0, $sp, 0x123
    ctx->r2 = ADD32(ctx->r29, 0X123);
L_00427950:
    // 0x00427950: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x00427954: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00427958: bgez        $v1, L_00427950
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0042795C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00427950;
    }
    // 0x0042795C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00427960: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x00427964: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00427968: lhu         $v0, 0x142($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X142);
    // 0x0042796C: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x00427970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00427974: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00427978: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042797C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00427980: jal         0x00299A40
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x00427984: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x00427988: lw          $ra, 0x160($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X160);
    // 0x0042798C: lw          $s5, 0x15C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X15C);
    // 0x00427990: lw          $s4, 0x158($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X158);
    // 0x00427994: lw          $s3, 0x154($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X154);
    // 0x00427998: lw          $s2, 0x150($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X150);
    // 0x0042799C: lw          $s1, 0x14C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14C);
    // 0x004279A0: lw          $s0, 0x148($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X148);
    // 0x004279A4: jr          $ra
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x004279A8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void entry_00427A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427A6C: andi        $s1, $a3, 0xFF
    ctx->r17 = ctx->r7 & 0XFF;
    // 0x00427A70: jal         0x00427B4C
    // 0x00427A74: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_00427B4C(rdram, ctx);
        goto after_0;
    // 0x00427A74: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00427A78: bne         $v0, $zero, L_00427B24
    if (ctx->r2 != 0) {
        // 0x00427A7C: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_00427B24;
    }
    // 0x00427A7C: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427A80: beq         $v1, $s4, L_00427B24
    if (ctx->r3 == ctx->r20) {
        // 0x00427A84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00427B24;
    }
    // 0x00427A84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00427A88: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00427A8C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427A90: bnel        $v0, $zero, L_00427B20
    if (ctx->r2 != 0) {
        // 0x00427A94: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427B20;
    }
    goto skip_0;
    // 0x00427A94: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_0:
    // 0x00427A98: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00427A9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00427AA0:
    // 0x00427AA0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00427AA4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x00427AA8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00427AAC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00427AB0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00427AB4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427AB8: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427ABC: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427AC0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00427AC4: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427AC8: jal         0x00427B4C
    // 0x00427ACC: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    func_00427B4C(rdram, ctx);
        goto after_1;
    // 0x00427ACC: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    after_1:
    // 0x00427AD0: bne         $v0, $zero, L_00427B24
    if (ctx->r2 != 0) {
        // 0x00427AD4: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_00427B24;
    }
    // 0x00427AD4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427AD8: srl         $a0, $v1, 8
    ctx->r4 = S32(U32(ctx->r3) >> 8);
    // 0x00427ADC: bne         $a0, $s1, L_00427AF4
    if (ctx->r4 != ctx->r17) {
        // 0x00427AE0: nop
    
            goto L_00427AF4;
    }
    // 0x00427AE0: nop

    // 0x00427AE4: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00427AE8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427AEC: beql        $v0, $zero, L_00427AA0
    if (ctx->r2 == 0) {
        // 0x00427AF0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00427AA0;
    }
    goto skip_1;
    // 0x00427AF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_1:
L_00427AF4:
    // 0x00427AF4: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00427AF8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00427AFC: bnel        $v0, $zero, L_00427B20
    if (ctx->r2 != 0) {
        // 0x00427B00: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427B20;
    }
    goto skip_2;
    // 0x00427B00: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_2:
    // 0x00427B04: bnel        $a0, $s1, L_00427B20
    if (ctx->r4 != ctx->r17) {
        // 0x00427B08: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00427B20;
    }
    goto skip_3;
    // 0x00427B08: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_3:
    // 0x00427B0C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00427B10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427B14: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00427B18: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    // 0x00427B1C: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
L_00427B20:
    // 0x00427B20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427B24:
    // 0x00427B24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00427B28: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00427B2C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00427B30: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00427B34: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00427B38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00427B3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x00427B40 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00427B40(rdram, ctx);
;}
RECOMP_FUNC void entry_00427B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427B1C: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    // 0x00427B20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00427B24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00427B28: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00427B2C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00427B30: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00427B34: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00427B38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00427B3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x00427B40 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00427B40(rdram, ctx);
;}
RECOMP_FUNC void entry_00427CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427CBC: jal         0x00299680
    // 0x00427CC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_0;
    // 0x00427CC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x00427CC4: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427CC8: nop
    
            goto L_00427E30;
    }
    // 0x00427CC8: nop

    // 0x00427CCC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00427CD0: beq         $v0, $zero, L_00427E30
    if (ctx->r2 == 0) {
        // 0x00427CD4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00427E30;
    }
    // 0x00427CD4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00427CD8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00427CDC: bne         $v0, $zero, L_00427CEC
    if (ctx->r2 != 0) {
        // 0x00427CE0: nop
    
            goto L_00427CEC;
    }
    // 0x00427CE0: nop

    // 0x00427CE4: j           L_00427E30
    // 0x00427CE8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00427E30;
    // 0x00427CE8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00427CEC:
    // 0x00427CEC: lhu         $v0, 0x116($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X116);
    // 0x00427CF0: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00427CF4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00427CF8: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427CFC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427E30;
    }
    // 0x00427CFC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00427D00: lbu         $s5, 0x117($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X117);
    // 0x00427D04: lbu         $s2, 0x116($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X116);
    // 0x00427D08: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427D0C: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00427D10: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00427D14: beq         $v0, $zero, L_00427DB4
    if (ctx->r2 == 0) {
        // 0x00427D18: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00427DB4;
    }
    // 0x00427D18: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00427D1C: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x00427D20: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00427D24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00427D28:
    // 0x00427D28: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00427D2C: jal         0x00429AA4
    // 0x00427D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_1;
    // 0x00427D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00427D34: bne         $v0, $zero, L_00427E30
    if (ctx->r2 != 0) {
        // 0x00427D38: nop
    
            goto L_00427E30;
    }
    // 0x00427D38: nop

    // 0x00427D3C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00427D40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427D44: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427D48: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427D4C: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00427D50: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00427D54: bne         $v0, $zero, L_00427D98
    if (ctx->r2 != 0) {
        // 0x00427D58: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00427D98;
    }
    // 0x00427D58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427D5C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00427D60: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427D64:
    // 0x00427D64: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427D68: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427D6C: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427D70: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x00427D74: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x00427D78: beq         $v1, $s2, L_00427D8C
    if (ctx->r3 == ctx->r18) {
        // 0x00427D7C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00427D8C;
    }
    // 0x00427D7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427D80: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x00427D84: j           L_00427D9C
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
        goto L_00427D9C;
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00427D8C:
    // 0x00427D8C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00427D90: beq         $v0, $zero, L_00427D64
    if (ctx->r2 == 0) {
        // 0x00427D94: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_00427D64;
    }
    // 0x00427D94: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427D98:
    // 0x00427D98: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
L_00427D9C:
    // 0x00427D9C: beq         $v0, $s7, L_00427DC4
    if (ctx->r2 == ctx->r23) {
        // 0x00427DA0: andi        $a3, $s2, 0xFF
        ctx->r7 = ctx->r18 & 0XFF;
            goto L_00427DC4;
    }
    // 0x00427DA0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00427DA4: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427DA8: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00427DAC: bnel        $v0, $zero, L_00427D28
    if (ctx->r2 != 0) {
        // 0x00427DB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00427D28;
    }
    goto skip_0;
    // 0x00427DB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_0:
L_00427DB4:
    // 0x00427DB4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427DBC: bne         $v1, $v0, L_00427E30
    if (ctx->r3 != ctx->r2) {
        // 0x00427DC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427E30;
    }
    // 0x00427DC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427DC4:
    // 0x00427DC4: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00427DC8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00427DCC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00427DD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427DD4: sh          $v0, 0x8($s6)
    MEM_H(0X8, ctx->r22) = ctx->r2;
    // 0x00427DD8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00427DDC: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427DE0: sw          $v0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r2;
    // 0x00427DE4: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427DE8:
    // 0x00427DE8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427DEC: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x00427DF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427DF4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x00427DF8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x00427DFC: bne         $v0, $zero, L_00427DE8
    if (ctx->r2 != 0) {
        // 0x00427E00: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427DE8;
    }
    // 0x00427E00: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427E08: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427E0C: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427E10:
    // 0x00427E10: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427E14: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00427E18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427E1C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x00427E20: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00427E24: bne         $v0, $zero, L_00427E10
    if (ctx->r2 != 0) {
        // 0x00427E28: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427E10;
    }
    // 0x00427E28: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427E30:
    // 0x00427E30: lw          $ra, 0x150($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X150);
    // 0x00427E34: lw          $s7, 0x14C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14C);
    // 0x00427E38: lw          $s6, 0x148($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X148);
    // 0x00427E3C: lw          $s5, 0x144($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X144);
    // 0x00427E40: lw          $s4, 0x140($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X140);
    // 0x00427E44: lw          $s3, 0x13C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X13C);
    // 0x00427E48: lw          $s2, 0x138($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X138);
    // 0x00427E4C: lw          $s1, 0x134($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X134);
    // 0x00427E50: lw          $s0, 0x130($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X130);
    // 0x00427E54: jr          $ra
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void entry_00427D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427D28:
    // 0x00427D50: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00427D54: bne         $v0, $zero, L_00427D98
    if (ctx->r2 != 0) {
        // 0x00427D58: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00427D98;
    }
    // 0x00427D58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427D5C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00427D60: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427D64:
    // 0x00427D64: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00427D68: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00427D6C: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x00427D70: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x00427D74: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x00427D78: beq         $v1, $s2, L_00427D8C
    if (ctx->r3 == ctx->r18) {
        // 0x00427D7C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00427D8C;
    }
    // 0x00427D7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427D80: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x00427D84: j           L_00427D9C
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
        goto L_00427D9C;
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00427D8C:
    // 0x00427D8C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00427D90: beq         $v0, $zero, L_00427D64
    if (ctx->r2 == 0) {
        // 0x00427D94: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_00427D64;
    }
    // 0x00427D94: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_00427D98:
    // 0x00427D98: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
L_00427D9C:
    // 0x00427D9C: beq         $v0, $s7, L_00427DC4
    if (ctx->r2 == ctx->r23) {
        // 0x00427DA0: andi        $a3, $s2, 0xFF
        ctx->r7 = ctx->r18 & 0XFF;
            goto L_00427DC4;
    }
    // 0x00427DA0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00427DA4: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427DA8: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00427DAC: bnel        $v0, $zero, L_00427D28
    if (ctx->r2 != 0) {
        // 0x00427DB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00427D28;
    }
    goto skip_0;
    // 0x00427DB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_0:
    // 0x00427DB4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427DBC: bne         $v1, $v0, L_00427E30
    if (ctx->r3 != ctx->r2) {
        // 0x00427DC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427E30;
    }
    // 0x00427DC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427DC4:
    // 0x00427DC4: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00427DC8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00427DCC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00427DD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427DD4: sh          $v0, 0x8($s6)
    MEM_H(0X8, ctx->r22) = ctx->r2;
    // 0x00427DD8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00427DDC: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427DE0: sw          $v0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r2;
    // 0x00427DE4: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427DE8:
    // 0x00427DE8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427DEC: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x00427DF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427DF4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x00427DF8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x00427DFC: bne         $v0, $zero, L_00427DE8
    if (ctx->r2 != 0) {
        // 0x00427E00: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427DE8;
    }
    // 0x00427E00: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427E08: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427E0C: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427E10:
    // 0x00427E10: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427E14: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00427E18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427E1C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x00427E20: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00427E24: bne         $v0, $zero, L_00427E10
    if (ctx->r2 != 0) {
        // 0x00427E28: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427E10;
    }
    // 0x00427E28: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427E30:
    // 0x00427E30: lw          $ra, 0x150($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X150);
    // 0x00427E34: lw          $s7, 0x14C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14C);
    // 0x00427E38: lw          $s6, 0x148($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X148);
    // 0x00427E3C: lw          $s5, 0x144($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X144);
    // 0x00427E40: lw          $s4, 0x140($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X140);
    // 0x00427E44: lw          $s3, 0x13C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X13C);
    // 0x00427E48: lw          $s2, 0x138($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X138);
    // 0x00427E4C: lw          $s1, 0x134($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X134);
    // 0x00427E50: lw          $s0, 0x130($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X130);
    // 0x00427E54: jr          $ra
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void entry_00427D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427D28:
    // 0x00427D80: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
L_00427D64:
    // 0x00427D84: j           L_00427D9C
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
        goto L_00427D9C;
    // 0x00427D88: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x00427D8C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00427D90: beq         $v0, $zero, L_00427D64
    if (ctx->r2 == 0) {
        // 0x00427D94: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_00427D64;
    }
    // 0x00427D94: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00427D98: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
L_00427D9C:
    // 0x00427D9C: beq         $v0, $s7, L_00427DC4
    if (ctx->r2 == ctx->r23) {
        // 0x00427DA0: andi        $a3, $s2, 0xFF
        ctx->r7 = ctx->r18 & 0XFF;
            goto L_00427DC4;
    }
    // 0x00427DA0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x00427DA4: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427DA8: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x00427DAC: bnel        $v0, $zero, L_00427D28
    if (ctx->r2 != 0) {
        // 0x00427DB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00427D28;
    }
    goto skip_0;
    // 0x00427DB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_0:
    // 0x00427DB4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00427DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427DBC: bne         $v1, $v0, L_00427E30
    if (ctx->r3 != ctx->r2) {
        // 0x00427DC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00427E30;
    }
    // 0x00427DC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427DC4:
    // 0x00427DC4: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00427DC8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00427DCC: lhu         $v0, 0x114($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X114);
    // 0x00427DD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427DD4: sh          $v0, 0x8($s6)
    MEM_H(0X8, ctx->r22) = ctx->r2;
    // 0x00427DD8: lw          $v0, 0x110($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X110);
    // 0x00427DDC: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427DE0: sw          $v0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r2;
    // 0x00427DE4: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427DE8:
    // 0x00427DE8: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427DEC: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x00427DF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427DF4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x00427DF8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x00427DFC: bne         $v0, $zero, L_00427DE8
    if (ctx->r2 != 0) {
        // 0x00427E00: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427DE8;
    }
    // 0x00427E00: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427E08: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x00427E0C: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
L_00427E10:
    // 0x00427E10: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00427E14: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00427E18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427E1C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x00427E20: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00427E24: bne         $v0, $zero, L_00427E10
    if (ctx->r2 != 0) {
        // 0x00427E28: addu        $v1, $s6, $a0
        ctx->r3 = ADD32(ctx->r22, ctx->r4);
            goto L_00427E10;
    }
    // 0x00427E28: addu        $v1, $s6, $a0
    ctx->r3 = ADD32(ctx->r22, ctx->r4);
    // 0x00427E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427E30:
    // 0x00427E30: lw          $ra, 0x150($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X150);
    // 0x00427E34: lw          $s7, 0x14C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14C);
    // 0x00427E38: lw          $s6, 0x148($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X148);
    // 0x00427E3C: lw          $s5, 0x144($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X144);
    // 0x00427E40: lw          $s4, 0x140($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X140);
    // 0x00427E44: lw          $s3, 0x13C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X13C);
    // 0x00427E48: lw          $s2, 0x138($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X138);
    // 0x00427E4C: lw          $s1, 0x134($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X134);
    // 0x00427E50: lw          $s0, 0x130($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X130);
    // 0x00427E54: jr          $ra
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    // 0x00427E58: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void entry_00427E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00427EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427EA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
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
RECOMP_FUNC void entry_00428234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428234: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428238: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0042823C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00428240: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x00428244: jal         0x00429460
    // 0x00428248: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00429460(rdram, ctx);
        goto after_0;
    // 0x00428248: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0042824C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00428250: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x00428254: nop
    
            goto L_00428314;
    }
    // 0x00428254: nop

    // 0x00428258: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x0042825C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428260: bne         $v0, $zero, L_00428270
    if (ctx->r2 != 0) {
        // 0x00428264: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428270;
    }
    // 0x00428264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428268: j           L_00428314
    // 0x0042826C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_00428314;
    // 0x0042826C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00428270:
    // 0x00428270: addu        $v1, $s2, $a0
    ctx->r3 = ADD32(ctx->r18, ctx->r4);
L_00428274:
    // 0x00428274: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x00428278: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042827C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00428280: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00428284: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00428288: bne         $v0, $zero, L_00428274
    if (ctx->r2 != 0) {
        // 0x0042828C: addu        $v1, $s2, $a0
        ctx->r3 = ADD32(ctx->r18, ctx->r4);
            goto L_00428274;
    }
    // 0x0042828C: addu        $v1, $s2, $a0
    ctx->r3 = ADD32(ctx->r18, ctx->r4);
    // 0x00428290: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00428294: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428298: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042829C: lbu         $v0, 0x1B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1B);
    // 0x004282A0: addiu       $a3, $s2, 0x2C
    ctx->r7 = ADD32(ctx->r18, 0X2C);
    // 0x004282A4: sw          $v0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r2;
    // 0x004282A8: lbu         $v1, 0x1A($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1A);
    // 0x004282AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x004282B0: sw          $v0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->r2;
    // 0x004282B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004282B8: sw          $v0, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r2;
    // 0x004282BC: sb          $v1, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r3;
    // 0x004282C0: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x004282C4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004282C8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004282CC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x004282D0: sw          $v1, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r3;
    // 0x004282D4: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x004282D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004282DC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004282E0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004282E4: sw          $v0, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->r2;
    // 0x004282E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004282EC: jal         0x00299680
    // 0x004282F0: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004282F0: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    after_1:
    // 0x004282F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004282F8: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x004282FC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00428314;
    }
    // 0x004282FC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00428300: jal         0x00428330
    // 0x00428304: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00428330(rdram, ctx);
        goto after_2;
    // 0x00428304: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00428308: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0042830C: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x00428310: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
L_00428314:
    // 0x00428314: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00428318: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0042831C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x00428320: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x00428324: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x00428328: jr          $ra
    // 0x0042832C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x0042832C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void entry_00428250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428250: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x00428254: nop
    
            goto L_00428314;
    }
    // 0x00428254: nop

    // 0x00428258: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x0042825C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428260: bne         $v0, $zero, L_00428270
    if (ctx->r2 != 0) {
        // 0x00428264: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428270;
    }
    // 0x00428264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428268: j           L_00428314
    // 0x0042826C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_00428314;
    // 0x0042826C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00428270:
    // 0x00428270: addu        $v1, $s2, $a0
    ctx->r3 = ADD32(ctx->r18, ctx->r4);
L_00428274:
    // 0x00428274: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x00428278: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042827C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00428280: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00428284: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00428288: bne         $v0, $zero, L_00428274
    if (ctx->r2 != 0) {
        // 0x0042828C: addu        $v1, $s2, $a0
        ctx->r3 = ADD32(ctx->r18, ctx->r4);
            goto L_00428274;
    }
    // 0x0042828C: addu        $v1, $s2, $a0
    ctx->r3 = ADD32(ctx->r18, ctx->r4);
    // 0x00428290: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00428294: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428298: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042829C: lbu         $v0, 0x1B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1B);
    // 0x004282A0: addiu       $a3, $s2, 0x2C
    ctx->r7 = ADD32(ctx->r18, 0X2C);
    // 0x004282A4: sw          $v0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r2;
    // 0x004282A8: lbu         $v1, 0x1A($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1A);
    // 0x004282AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x004282B0: sw          $v0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->r2;
    // 0x004282B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004282B8: sw          $v0, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r2;
    // 0x004282BC: sb          $v1, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r3;
    // 0x004282C0: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x004282C4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004282C8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004282CC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x004282D0: sw          $v1, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r3;
    // 0x004282D4: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x004282D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004282DC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004282E0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004282E4: sw          $v0, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->r2;
    // 0x004282E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004282EC: jal         0x00299680
    // 0x004282F0: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_0;
    // 0x004282F0: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    after_0:
    // 0x004282F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004282F8: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x004282FC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00428314;
    }
    // 0x004282FC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00428300: jal         0x00428330
    // 0x00428304: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00428330(rdram, ctx);
        goto after_1;
    // 0x00428304: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00428308: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0042830C: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x00428310: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
L_00428314:
    // 0x00428314: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00428318: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0042831C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x00428320: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x00428324: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x00428328: jr          $ra
    // 0x0042832C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x0042832C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void entry_0042839C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042838C:
    // 0x0042839C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004283A0: bne         $v1, $zero, L_0042873C
    if (ctx->r3 != 0) {
        // 0x004283A4: nop
    
            goto L_0042873C;
    }
    // 0x004283A4: nop

    // 0x004283A8: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004283AC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004283B0: beq         $v0, $zero, L_00428548
    if (ctx->r2 == 0) {
        // 0x004283B4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00428548;
    }
    // 0x004283B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004283B8: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x004283BC: addiu       $s5, $sp, 0x118
    ctx->r21 = ADD32(ctx->r29, 0X118);
    // 0x004283C0: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
L_004283C4:
    // 0x004283C4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004283C8: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x004283CC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004283D0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x004283D4: jal         0x00299680
    // 0x004283D8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_0;
    // 0x004283D8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x004283DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004283E0: bne         $v1, $zero, L_0042873C
    if (ctx->r3 != 0) {
        // 0x004283E4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x004283E4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004283E8: lhu         $v0, 0x21C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X21C);
    // 0x004283EC: beq         $v0, $zero, L_004284C4
    if (ctx->r2 == 0) {
        // 0x004283F0: nop
    
            goto L_004284C4;
    }
    // 0x004283F0: nop

    // 0x004283F4: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x004283F8: beq         $v0, $zero, L_004284D0
    if (ctx->r2 == 0) {
        // 0x004283FC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004284D0;
    }
    // 0x004283FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00428400: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00428404: lhu         $s0, 0x21E($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X21E);
    // 0x00428408: j           L_0042847C
    // 0x0042840C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_0042847C;
    // 0x0042840C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_00428410:
    // 0x00428410: bltz        $v0, L_004284A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x00428414: srl         $v1, $a0, 8
        ctx->r3 = S32(U32(ctx->r4) >> 8);
            goto L_004284A8;
    }
    // 0x00428414: srl         $v1, $a0, 8
    ctx->r3 = S32(U32(ctx->r4) >> 8);
    // 0x00428418: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042841C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00428420: beq         $v0, $a3, L_0042844C
    if (ctx->r2 == ctx->r7) {
        // 0x00428424: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0042844C;
    }
    // 0x00428424: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428428: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0042842C: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x00428430: jal         0x00429AA4
    // 0x00428434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_1;
    // 0x00428434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00428438: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042843C: beq         $v1, $zero, L_00428450
    if (ctx->r3 == 0) {
        // 0x00428440: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00428450;
    }
    // 0x00428440: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428444: bne         $v1, $s6, L_0042873C
    if (ctx->r3 != ctx->r22) {
        // 0x00428448: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x00428448: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0042844C:
    // 0x0042844C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00428450:
    // 0x00428450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00428454: addiu       $a2, $sp, 0x258
    ctx->r6 = ADD32(ctx->r29, 0X258);
    // 0x00428458: jal         0x004288B8
    // 0x0042845C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    func_004288B8(rdram, ctx);
        goto after_2;
    // 0x0042845C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    after_2:
    // 0x00428460: subu        $a1, $v0, $s4
    ctx->r5 = SUB32(ctx->r2, ctx->r20);
    // 0x00428464: bne         $a1, $zero, L_004284D0
    if (ctx->r5 != 0) {
        // 0x00428468: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_004284D0;
    }
    // 0x00428468: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0042846C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00428470: sllv        $v0, $v0, $s4
    ctx->r2 = S32(ctx->r2 << (ctx->r20 & 31));
    // 0x00428474: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00428478: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
L_0042847C:
    // 0x0042847C: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00428480: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x00428484: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428488: bne         $v0, $zero, L_004284A8
    if (ctx->r2 != 0) {
        // 0x0042848C: srl         $v0, $a0, 8
        ctx->r2 = S32(U32(ctx->r4) >> 8);
            goto L_004284A8;
    }
    // 0x0042848C: srl         $v0, $a0, 8
    ctx->r2 = S32(U32(ctx->r4) >> 8);
    // 0x00428490: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428494: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428498: beq         $v0, $zero, L_004284A8
    if (ctx->r2 == 0) {
        // 0x0042849C: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_004284A8;
    }
    // 0x0042849C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x004284A0: bne         $v0, $zero, L_00428410
    if (ctx->r2 != 0) {
        // 0x004284A4: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_00428410;
    }
    // 0x004284A4: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_004284A8:
    // 0x004284A8: bnel        $a1, $zero, L_004284D4
    if (ctx->r5 != 0) {
        // 0x004284AC: sh          $zero, 0x21C($sp)
        MEM_H(0X21C, ctx->r29) = 0;
            goto L_004284D4;
    }
    goto skip_0;
    // 0x004284AC: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
    skip_0:
    // 0x004284B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004284B4: beq         $s0, $v0, L_00428534
    if (ctx->r16 == ctx->r2) {
        // 0x004284B8: nop
    
            goto L_00428534;
    }
    // 0x004284B8: nop

    // 0x004284BC: j           L_004284D4
    // 0x004284C0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
        goto L_004284D4;
    // 0x004284C0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
L_004284C4:
    // 0x004284C4: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x004284C8: beq         $v0, $zero, L_00428534
    if (ctx->r2 == 0) {
        // 0x004284CC: nop
    
            goto L_00428534;
    }
    // 0x004284CC: nop

L_004284D0:
    // 0x004284D0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
L_004284D4:
    // 0x004284D4: sw          $zero, 0x218($sp)
    MEM_W(0X218, ctx->r29) = 0;
    // 0x004284D8: sh          $zero, 0x21E($sp)
    MEM_H(0X21E, ctx->r29) = 0;
    // 0x004284DC: sb          $zero, 0x220($sp)
    MEM_B(0X220, ctx->r29) = 0;
    // 0x004284E0: sh          $zero, 0x222($sp)
    MEM_H(0X222, ctx->r29) = 0;
    // 0x004284E4: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x004284E8: beq         $v0, $zero, L_00428508
    if (ctx->r2 == 0) {
        // 0x004284EC: nop
    
            goto L_00428508;
    }
    // 0x004284EC: nop

    // 0x004284F0: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x004284F4: jal         0x00429EC4
    // 0x004284F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_3;
    // 0x004284F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x004284FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428500: bne         $v1, $zero, L_0042873C
    if (ctx->r3 != 0) {
        // 0x00428504: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x00428504: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00428508:
    // 0x00428508: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0042850C: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x00428510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00428514: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428518: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042851C: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x00428520: jal         0x00299A40
    // 0x00428524: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_4;
    // 0x00428524: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
    // 0x00428528: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042852C: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428530: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0042838C;
    }
    // 0x00428530: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_00428534:
    // 0x00428534: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00428538: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042853C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428540: bne         $v0, $zero, L_004283C4
    if (ctx->r2 != 0) {
        // 0x00428544: addiu       $a3, $sp, 0x218
        ctx->r7 = ADD32(ctx->r29, 0X218);
            goto L_004283C4;
    }
    // 0x00428544: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
L_00428548:
    // 0x00428548: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042854C: blez        $v0, L_004285C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00428550: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004285C4;
    }
    // 0x00428550: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428554: addiu       $s0, $sp, 0x238
    ctx->r16 = ADD32(ctx->r29, 0X238);
L_00428558:
    // 0x00428558: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x0042855C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428560: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00428564: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00428568: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x0042856C: jal         0x00299680
    // 0x00428570: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_5;
    // 0x00428570: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_5:
    // 0x00428574: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428578: bne         $v1, $zero, L_0042873C
    if (ctx->r3 != 0) {
        // 0x0042857C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x0042857C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00428580: lhu         $v0, 0x21C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X21C);
    // 0x00428584: beql        $v0, $zero, L_004285B0
    if (ctx->r2 == 0) {
        // 0x00428588: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004285B0;
    }
    goto skip_1;
    // 0x00428588: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_1:
    // 0x0042858C: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x00428590: beql        $v0, $zero, L_004285B0
    if (ctx->r2 == 0) {
        // 0x00428594: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004285B0;
    }
    goto skip_2;
    // 0x00428594: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_2:
    // 0x00428598: lhu         $v1, 0x21E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X21E);
    // 0x0042859C: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x004285A0: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x004285A4: bnel        $v0, $zero, L_004285B0
    if (ctx->r2 != 0) {
        // 0x004285A8: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004285B0;
    }
    goto skip_3;
    // 0x004285A8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_3:
    // 0x004285AC: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_004285B0:
    // 0x004285B0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004285B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004285B8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004285BC: bne         $v0, $zero, L_00428558
    if (ctx->r2 != 0) {
        // 0x004285C0: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_00428558;
    }
    // 0x004285C0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_004285C4:
    // 0x004285C4: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004285C8: beq         $v0, $zero, L_00428718
    if (ctx->r2 == 0) {
        // 0x004285CC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00428718;
    }
    // 0x004285CC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004285D0: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x004285D4: addiu       $s4, $sp, 0x18
    ctx->r20 = ADD32(ctx->r29, 0X18);
    // 0x004285D8: addiu       $s5, $sp, 0x118
    ctx->r21 = ADD32(ctx->r29, 0X118);
    // 0x004285DC: addiu       $s6, $sp, 0x238
    ctx->r22 = ADD32(ctx->r29, 0X238);
    // 0x004285E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004285E4:
    // 0x004285E4: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x004285E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004285EC: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x004285F0: jal         0x00429AA4
    // 0x004285F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_6;
    // 0x004285F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_6:
    // 0x004285F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004285FC: beq         $v1, $zero, L_0042860C
    if (ctx->r3 == 0) {
        // 0x00428600: nop
    
            goto L_0042860C;
    }
    // 0x00428600: nop

    // 0x00428604: bne         $v1, $fp, L_0042873C
    if (ctx->r3 != ctx->r30) {
        // 0x00428608: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x00428608: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0042860C:
    // 0x0042860C: bne         $s0, $zero, L_00428618
    if (ctx->r16 != 0) {
        // 0x00428610: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00428618;
    }
    // 0x00428610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00428614: lw          $a1, 0x60($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X60);
L_00428618:
    // 0x00428618: blez        $a1, L_00428644
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0042861C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00428644;
    }
    // 0x0042861C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428620: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00428624: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_00428628:
    // 0x00428628: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0042862C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00428630: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00428634: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x00428638: slt         $v0, $s1, $a1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0042863C: bne         $v0, $zero, L_00428628
    if (ctx->r2 != 0) {
        // 0x00428640: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_00428628;
    }
    // 0x00428640: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_00428644:
    // 0x00428644: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00428648: beq         $v0, $zero, L_00428668
    if (ctx->r2 == 0) {
        // 0x0042864C: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_00428668;
    }
    // 0x0042864C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00428650: addu        $v1, $v0, $s4
    ctx->r3 = ADD32(ctx->r2, ctx->r20);
L_00428654:
    // 0x00428654: sh          $fp, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r30;
    // 0x00428658: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042865C: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00428660: bne         $v0, $zero, L_00428654
    if (ctx->r2 != 0) {
        // 0x00428664: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00428654;
    }
    // 0x00428664: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00428668:
    // 0x00428668: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042866C: blez        $v0, L_004286E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00428670: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004286E4;
    }
    // 0x00428670: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428674: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x00428678: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0042867C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_00428680:
    // 0x00428680: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00428684: bne         $v0, $t0, L_004286CC
    if (ctx->r2 != ctx->r8) {
        // 0x00428688: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_004286CC;
    }
    // 0x00428688: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_0042868C:
    // 0x0042868C: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x00428690: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x00428694: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x00428698: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0042869C: bnel        $v1, $zero, L_004286D0
    if (ctx->r3 != 0) {
        // 0x004286A0: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_004286D0;
    }
    goto skip_4;
    // 0x004286A0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_4:
    // 0x004286A4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x004286A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004286AC: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x004286B0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x004286B4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x004286B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004286BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004286C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004286C4: beq         $v0, $t0, L_0042868C
    if (ctx->r2 == ctx->r8) {
        // 0x004286C8: nop
    
            goto L_0042868C;
    }
    // 0x004286C8: nop

L_004286CC:
    // 0x004286CC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_004286D0:
    // 0x004286D0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004286D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004286D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004286DC: bne         $v0, $zero, L_00428680
    if (ctx->r2 != 0) {
        // 0x004286E0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_00428680;
    }
    // 0x004286E0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_004286E4:
    // 0x004286E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004286E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004286EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004286F0: jal         0x00429AA4
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    func_00429AA4(rdram, ctx);
        goto after_7;
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_7:
    // 0x004286F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004286FC: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428700: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042838C;
    }
    // 0x00428700: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00428704: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428708: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042870C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428710: bne         $v0, $zero, L_004285E4
    if (ctx->r2 != 0) {
        // 0x00428714: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004285E4;
    }
    // 0x00428714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00428718:
    // 0x00428718: beq         $s7, $zero, L_0042872C
    if (ctx->r23 == 0) {
        // 0x0042871C: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0042872C;
    }
    // 0x0042871C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x00428720: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428724: j           L_00428734
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_00428734;
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_0042872C:
    // 0x0042872C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00428734:
    // 0x00428734: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00428738: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0042873C:
    // 0x0042873C: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00428740: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00428744: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00428748: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0042874C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00428750: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00428754: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00428758: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0042875C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00428760: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00428764: jr          $ra
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    return;
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
;}
RECOMP_FUNC void entry_004283F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042838C:
    // 0x004283F4: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
L_004283C4:
    // 0x004283F8: beq         $v0, $zero, L_004284D0
    if (ctx->r2 == 0) {
        // 0x004283FC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004284D0;
    }
    // 0x004283FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00428400: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00428404: lhu         $s0, 0x21E($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X21E);
    // 0x00428408: j           L_0042847C
    // 0x0042840C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_0042847C;
    // 0x0042840C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_00428410:
    // 0x00428410: bltz        $v0, L_004284A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x00428414: srl         $v1, $a0, 8
        ctx->r3 = S32(U32(ctx->r4) >> 8);
            goto L_004284A8;
    }
    // 0x00428414: srl         $v1, $a0, 8
    ctx->r3 = S32(U32(ctx->r4) >> 8);
    // 0x00428418: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042841C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00428420: beq         $v0, $a3, L_0042844C
    if (ctx->r2 == ctx->r7) {
        // 0x00428424: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0042844C;
    }
    // 0x00428424: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428428: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0042842C: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x00428430: jal         0x00429AA4
    // 0x00428434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x00428434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00428438: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042843C: beq         $v1, $zero, L_00428450
    if (ctx->r3 == 0) {
        // 0x00428440: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00428450;
    }
    // 0x00428440: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428444: bne         $v1, $s6, L_0042873C
    if (ctx->r3 != ctx->r22) {
        // 0x00428448: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x00428448: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0042844C:
    // 0x0042844C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00428450:
    // 0x00428450: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00428454: addiu       $a2, $sp, 0x258
    ctx->r6 = ADD32(ctx->r29, 0X258);
    // 0x00428458: jal         0x004288B8
    // 0x0042845C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    func_004288B8(rdram, ctx);
        goto after_1;
    // 0x0042845C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    after_1:
    // 0x00428460: subu        $a1, $v0, $s4
    ctx->r5 = SUB32(ctx->r2, ctx->r20);
    // 0x00428464: bne         $a1, $zero, L_004284D0
    if (ctx->r5 != 0) {
        // 0x00428468: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_004284D0;
    }
    // 0x00428468: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0042846C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00428470: sllv        $v0, $v0, $s4
    ctx->r2 = S32(ctx->r2 << (ctx->r20 & 31));
    // 0x00428474: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00428478: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
L_0042847C:
    // 0x0042847C: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00428480: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x00428484: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428488: bne         $v0, $zero, L_004284A8
    if (ctx->r2 != 0) {
        // 0x0042848C: srl         $v0, $a0, 8
        ctx->r2 = S32(U32(ctx->r4) >> 8);
            goto L_004284A8;
    }
    // 0x0042848C: srl         $v0, $a0, 8
    ctx->r2 = S32(U32(ctx->r4) >> 8);
    // 0x00428490: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428494: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428498: beq         $v0, $zero, L_004284A8
    if (ctx->r2 == 0) {
        // 0x0042849C: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_004284A8;
    }
    // 0x0042849C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x004284A0: bne         $v0, $zero, L_00428410
    if (ctx->r2 != 0) {
        // 0x004284A4: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_00428410;
    }
    // 0x004284A4: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_004284A8:
    // 0x004284A8: bnel        $a1, $zero, L_004284D4
    if (ctx->r5 != 0) {
        // 0x004284AC: sh          $zero, 0x21C($sp)
        MEM_H(0X21C, ctx->r29) = 0;
            goto L_004284D4;
    }
    goto skip_0;
    // 0x004284AC: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
    skip_0:
    // 0x004284B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004284B4: beq         $s0, $v0, L_00428534
    if (ctx->r16 == ctx->r2) {
        // 0x004284B8: nop
    
            goto L_00428534;
    }
    // 0x004284B8: nop

    // 0x004284BC: j           L_004284D4
    // 0x004284C0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
        goto L_004284D4;
    // 0x004284C0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
    // 0x004284C4: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x004284C8: beq         $v0, $zero, L_00428534
    if (ctx->r2 == 0) {
        // 0x004284CC: nop
    
            goto L_00428534;
    }
    // 0x004284CC: nop

L_004284D0:
    // 0x004284D0: sh          $zero, 0x21C($sp)
    MEM_H(0X21C, ctx->r29) = 0;
L_004284D4:
    // 0x004284D4: sw          $zero, 0x218($sp)
    MEM_W(0X218, ctx->r29) = 0;
    // 0x004284D8: sh          $zero, 0x21E($sp)
    MEM_H(0X21E, ctx->r29) = 0;
    // 0x004284DC: sb          $zero, 0x220($sp)
    MEM_B(0X220, ctx->r29) = 0;
    // 0x004284E0: sh          $zero, 0x222($sp)
    MEM_H(0X222, ctx->r29) = 0;
    // 0x004284E4: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x004284E8: beq         $v0, $zero, L_00428508
    if (ctx->r2 == 0) {
        // 0x004284EC: nop
    
            goto L_00428508;
    }
    // 0x004284EC: nop

    // 0x004284F0: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x004284F4: jal         0x00429EC4
    // 0x004284F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_2;
    // 0x004284F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x004284FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428500: bne         $v1, $zero, L_0042873C
    if (ctx->r3 != 0) {
        // 0x00428504: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x00428504: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00428508:
    // 0x00428508: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0042850C: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x00428510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00428514: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428518: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042851C: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x00428520: jal         0x00299A40
    // 0x00428524: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_3;
    // 0x00428524: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x00428528: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042852C: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428530: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_0042838C;
    }
    // 0x00428530: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_00428534:
    // 0x00428534: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00428538: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042853C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428540: bne         $v0, $zero, L_004283C4
    if (ctx->r2 != 0) {
        // 0x00428544: addiu       $a3, $sp, 0x218
        ctx->r7 = ADD32(ctx->r29, 0X218);
            goto L_004283C4;
    }
    // 0x00428544: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x00428548: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042854C: blez        $v0, L_004285C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00428550: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004285C4;
    }
    // 0x00428550: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428554: addiu       $s0, $sp, 0x238
    ctx->r16 = ADD32(ctx->r29, 0X238);
L_00428558:
    // 0x00428558: addiu       $a3, $sp, 0x218
    ctx->r7 = ADD32(ctx->r29, 0X218);
    // 0x0042855C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428560: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00428564: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00428568: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x0042856C: jal         0x00299680
    // 0x00428570: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_4;
    // 0x00428570: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
    // 0x00428574: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428578: bne         $v1, $zero, L_0042873C
    if (ctx->r3 != 0) {
        // 0x0042857C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x0042857C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00428580: lhu         $v0, 0x21C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X21C);
    // 0x00428584: beql        $v0, $zero, L_004285B0
    if (ctx->r2 == 0) {
        // 0x00428588: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004285B0;
    }
    goto skip_1;
    // 0x00428588: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_1:
    // 0x0042858C: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x00428590: beql        $v0, $zero, L_004285B0
    if (ctx->r2 == 0) {
        // 0x00428594: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004285B0;
    }
    goto skip_2;
    // 0x00428594: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_2:
    // 0x00428598: lhu         $v1, 0x21E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X21E);
    // 0x0042859C: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x004285A0: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x004285A4: bnel        $v0, $zero, L_004285B0
    if (ctx->r2 != 0) {
        // 0x004285A8: sh          $zero, 0x0($s0)
        MEM_H(0X0, ctx->r16) = 0;
            goto L_004285B0;
    }
    goto skip_3;
    // 0x004285A8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    skip_3:
    // 0x004285AC: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_004285B0:
    // 0x004285B0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004285B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004285B8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004285BC: bne         $v0, $zero, L_00428558
    if (ctx->r2 != 0) {
        // 0x004285C0: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_00428558;
    }
    // 0x004285C0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_004285C4:
    // 0x004285C4: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004285C8: beq         $v0, $zero, L_00428718
    if (ctx->r2 == 0) {
        // 0x004285CC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00428718;
    }
    // 0x004285CC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004285D0: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x004285D4: addiu       $s4, $sp, 0x18
    ctx->r20 = ADD32(ctx->r29, 0X18);
    // 0x004285D8: addiu       $s5, $sp, 0x118
    ctx->r21 = ADD32(ctx->r29, 0X118);
    // 0x004285DC: addiu       $s6, $sp, 0x238
    ctx->r22 = ADD32(ctx->r29, 0X238);
    // 0x004285E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004285E4:
    // 0x004285E4: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x004285E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004285EC: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x004285F0: jal         0x00429AA4
    // 0x004285F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_5;
    // 0x004285F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x004285F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004285FC: beq         $v1, $zero, L_0042860C
    if (ctx->r3 == 0) {
        // 0x00428600: nop
    
            goto L_0042860C;
    }
    // 0x00428600: nop

    // 0x00428604: bne         $v1, $fp, L_0042873C
    if (ctx->r3 != ctx->r30) {
        // 0x00428608: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0042873C;
    }
    // 0x00428608: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0042860C:
    // 0x0042860C: bne         $s0, $zero, L_00428618
    if (ctx->r16 != 0) {
        // 0x00428610: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00428618;
    }
    // 0x00428610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00428614: lw          $a1, 0x60($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X60);
L_00428618:
    // 0x00428618: blez        $a1, L_00428644
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0042861C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00428644;
    }
    // 0x0042861C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428620: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00428624: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_00428628:
    // 0x00428628: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0042862C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00428630: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00428634: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x00428638: slt         $v0, $s1, $a1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0042863C: bne         $v0, $zero, L_00428628
    if (ctx->r2 != 0) {
        // 0x00428640: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_00428628;
    }
    // 0x00428640: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_00428644:
    // 0x00428644: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00428648: beq         $v0, $zero, L_00428668
    if (ctx->r2 == 0) {
        // 0x0042864C: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_00428668;
    }
    // 0x0042864C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00428650: addu        $v1, $v0, $s4
    ctx->r3 = ADD32(ctx->r2, ctx->r20);
L_00428654:
    // 0x00428654: sh          $fp, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r30;
    // 0x00428658: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042865C: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00428660: bne         $v0, $zero, L_00428654
    if (ctx->r2 != 0) {
        // 0x00428664: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00428654;
    }
    // 0x00428664: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00428668:
    // 0x00428668: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042866C: blez        $v0, L_004286E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00428670: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004286E4;
    }
    // 0x00428670: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428674: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x00428678: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0042867C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_00428680:
    // 0x00428680: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00428684: bne         $v0, $t0, L_004286CC
    if (ctx->r2 != ctx->r8) {
        // 0x00428688: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_004286CC;
    }
    // 0x00428688: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_0042868C:
    // 0x0042868C: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x00428690: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x00428694: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x00428698: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0042869C: bnel        $v1, $zero, L_004286D0
    if (ctx->r3 != 0) {
        // 0x004286A0: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_004286D0;
    }
    goto skip_4;
    // 0x004286A0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_4:
    // 0x004286A4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x004286A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004286AC: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x004286B0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x004286B4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x004286B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004286BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004286C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004286C4: beq         $v0, $t0, L_0042868C
    if (ctx->r2 == ctx->r8) {
        // 0x004286C8: nop
    
            goto L_0042868C;
    }
    // 0x004286C8: nop

L_004286CC:
    // 0x004286CC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_004286D0:
    // 0x004286D0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004286D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004286D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004286DC: bne         $v0, $zero, L_00428680
    if (ctx->r2 != 0) {
        // 0x004286E0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_00428680;
    }
    // 0x004286E0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_004286E4:
    // 0x004286E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004286E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004286EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004286F0: jal         0x00429AA4
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    func_00429AA4(rdram, ctx);
        goto after_6;
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_6:
    // 0x004286F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004286FC: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428700: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042838C;
    }
    // 0x00428700: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00428704: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428708: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042870C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428710: bne         $v0, $zero, L_004285E4
    if (ctx->r2 != 0) {
        // 0x00428714: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004285E4;
    }
    // 0x00428714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00428718:
    // 0x00428718: beq         $s7, $zero, L_0042872C
    if (ctx->r23 == 0) {
        // 0x0042871C: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0042872C;
    }
    // 0x0042871C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x00428720: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428724: j           L_00428734
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_00428734;
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_0042872C:
    // 0x0042872C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00428734:
    // 0x00428734: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00428738: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0042873C:
    // 0x0042873C: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00428740: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00428744: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00428748: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0042874C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00428750: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00428754: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00428758: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0042875C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00428760: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00428764: jr          $ra
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    return;
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
;}
RECOMP_FUNC void entry_00428654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042838C:
    // 0x00428654: sh          $fp, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r30;
L_004285E4:
    // 0x00428658: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00428654:
    // 0x0042865C: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x00428660: bne         $v0, $zero, L_00428654
    if (ctx->r2 != 0) {
        // 0x00428664: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00428654;
    }
    // 0x00428664: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00428668: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042866C: blez        $v0, L_004286E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00428670: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004286E4;
    }
    // 0x00428670: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428674: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x00428678: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0042867C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_00428680:
    // 0x00428680: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00428684: bne         $v0, $t0, L_004286CC
    if (ctx->r2 != ctx->r8) {
        // 0x00428688: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_004286CC;
    }
    // 0x00428688: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_0042868C:
    // 0x0042868C: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x00428690: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x00428694: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x00428698: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0042869C: bnel        $v1, $zero, L_004286D0
    if (ctx->r3 != 0) {
        // 0x004286A0: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_004286D0;
    }
    goto skip_0;
    // 0x004286A0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_0:
    // 0x004286A4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x004286A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004286AC: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x004286B0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x004286B4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x004286B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004286BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004286C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004286C4: beq         $v0, $t0, L_0042868C
    if (ctx->r2 == ctx->r8) {
        // 0x004286C8: nop
    
            goto L_0042868C;
    }
    // 0x004286C8: nop

L_004286CC:
    // 0x004286CC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_004286D0:
    // 0x004286D0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004286D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004286D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004286DC: bne         $v0, $zero, L_00428680
    if (ctx->r2 != 0) {
        // 0x004286E0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_00428680;
    }
    // 0x004286E0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_004286E4:
    // 0x004286E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004286E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004286EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004286F0: jal         0x00429AA4
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_0:
    // 0x004286F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004286FC: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428700: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042838C;
    }
    // 0x00428700: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00428704: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428708: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042870C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428710: bne         $v0, $zero, L_004285E4
    if (ctx->r2 != 0) {
        // 0x00428714: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004285E4;
    }
    // 0x00428714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428718: beq         $s7, $zero, L_0042872C
    if (ctx->r23 == 0) {
        // 0x0042871C: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0042872C;
    }
    // 0x0042871C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x00428720: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428724: j           L_00428734
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_00428734;
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_0042872C:
    // 0x0042872C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00428734:
    // 0x00428734: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00428738: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042873C: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00428740: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00428744: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00428748: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0042874C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00428750: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00428754: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00428758: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0042875C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00428760: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00428764: jr          $ra
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    return;
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
;}
RECOMP_FUNC void entry_0042865C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042838C:
    // 0x0042865C: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
L_004285E4:
    // 0x00428660: bne         $v0, $zero, L_00428654
    if (ctx->r2 != 0) {
            // 0x00428664: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    entry_00428654(rdram, ctx);
    return;
    }
L_00428654:
    // 0x00428664: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00428668: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042866C: blez        $v0, L_004286E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00428670: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004286E4;
    }
    // 0x00428670: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00428674: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x00428678: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0042867C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_00428680:
    // 0x00428680: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00428684: bne         $v0, $t0, L_004286CC
    if (ctx->r2 != ctx->r8) {
        // 0x00428688: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_004286CC;
    }
    // 0x00428688: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_0042868C:
    // 0x0042868C: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x00428690: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x00428694: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x00428698: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0042869C: bnel        $v1, $zero, L_004286D0
    if (ctx->r3 != 0) {
        // 0x004286A0: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_004286D0;
    }
    goto skip_0;
    // 0x004286A0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_0:
    // 0x004286A4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x004286A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004286AC: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x004286B0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x004286B4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x004286B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004286BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004286C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004286C4: beq         $v0, $t0, L_0042868C
    if (ctx->r2 == ctx->r8) {
        // 0x004286C8: nop
    
            goto L_0042868C;
    }
    // 0x004286C8: nop

L_004286CC:
    // 0x004286CC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_004286D0:
    // 0x004286D0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004286D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004286D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004286DC: bne         $v0, $zero, L_00428680
    if (ctx->r2 != 0) {
        // 0x004286E0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_00428680;
    }
    // 0x004286E0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_004286E4:
    // 0x004286E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004286E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004286EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004286F0: jal         0x00429AA4
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_0:
    // 0x004286F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004286FC: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428700: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042838C;
    }
    // 0x00428700: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00428704: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428708: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042870C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428710: bne         $v0, $zero, L_004285E4
    if (ctx->r2 != 0) {
        // 0x00428714: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004285E4;
    }
    // 0x00428714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428718: beq         $s7, $zero, L_0042872C
    if (ctx->r23 == 0) {
        // 0x0042871C: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0042872C;
    }
    // 0x0042871C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x00428720: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428724: j           L_00428734
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_00428734;
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_0042872C:
    // 0x0042872C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00428734:
    // 0x00428734: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00428738: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042873C: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00428740: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00428744: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00428748: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0042874C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00428750: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00428754: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00428758: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0042875C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00428760: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00428764: jr          $ra
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    return;
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
;}
RECOMP_FUNC void entry_0042868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042838C:
    // 0x0042868C: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
L_004285E4:
    // 0x00428690: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
L_00428680:
    // 0x00428694: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
L_0042868C:
    // 0x00428698: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0042869C: bnel        $v1, $zero, L_004286D0
    if (ctx->r3 != 0) {
        // 0x004286A0: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_004286D0;
    }
    goto skip_0;
    // 0x004286A0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_0:
    // 0x004286A4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x004286A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004286AC: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x004286B0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x004286B4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x004286B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004286BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004286C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004286C4: beq         $v0, $t0, L_0042868C
    if (ctx->r2 == ctx->r8) {
        // 0x004286C8: nop
    
            goto L_0042868C;
    }
    // 0x004286C8: nop

    // 0x004286CC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_004286D0:
    // 0x004286D0: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x004286D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004286D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004286DC: bne         $v0, $zero, L_00428680
    if (ctx->r2 != 0) {
        // 0x004286E0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_00428680;
    }
    // 0x004286E0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x004286E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004286E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004286EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004286F0: jal         0x00429AA4
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_0:
    // 0x004286F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004286FC: bne         $v1, $zero, L_0042838C
    if (ctx->r3 != 0) {
        // 0x00428700: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0042838C;
    }
    // 0x00428700: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00428704: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428708: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x0042870C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428710: bne         $v0, $zero, L_004285E4
    if (ctx->r2 != 0) {
        // 0x00428714: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004285E4;
    }
    // 0x00428714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428718: beq         $s7, $zero, L_0042872C
    if (ctx->r23 == 0) {
        // 0x0042871C: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0042872C;
    }
    // 0x0042871C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x00428720: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428724: j           L_00428734
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_00428734;
    // 0x00428728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_0042872C:
    // 0x0042872C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00428734:
    // 0x00428734: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00428738: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042873C: lw          $ra, 0x484($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X484);
    // 0x00428740: lw          $fp, 0x480($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X480);
    // 0x00428744: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x00428748: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0042874C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x00428750: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x00428754: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x00428758: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0042875C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x00428760: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x00428764: jr          $ra
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    return;
    // 0x00428768: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
;}
RECOMP_FUNC void entry_004287D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004287D4:
    // 0x004287D8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x004287DC: lw          $s0, 0x60($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X60);
    // 0x004287E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004287E4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x004287E8: jal         0x00429AA4
    // 0x004287EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x004287EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x004287F0: beq         $v0, $zero, L_00428800
    if (ctx->r2 == 0) {
        // 0x004287F4: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00428800;
    }
    // 0x004287F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004287F8: bne         $v0, $s6, L_00428890
    if (ctx->r2 != ctx->r22) {
        // 0x004287FC: nop
    
            goto L_00428890;
    }
    // 0x004287FC: nop

L_00428800:
    // 0x00428800: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x00428804: beql        $v0, $zero, L_00428878
    if (ctx->r2 == 0) {
        // 0x00428808: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00428878;
    }
    goto skip_0;
    // 0x00428808: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0042880C: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x00428810: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x00428814: sllv        $t0, $s5, $v0
    ctx->r8 = S32(ctx->r21 << (ctx->r2 & 31));
    // 0x00428818: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0042881C: addu        $a2, $v0, $s4
    ctx->r6 = ADD32(ctx->r2, ctx->r20);
L_00428820:
    // 0x00428820: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x00428824: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00428828: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x0042882C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428830: bne         $v0, $zero, L_00428868
    if (ctx->r2 != 0) {
        // 0x00428834: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00428868;
    }
    // 0x00428834: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00428838: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x0042883C: beq         $v1, $a3, L_00428868
    if (ctx->r3 == ctx->r7) {
        // 0x00428840: nop
    
            goto L_00428868;
    }
    // 0x00428840: nop

    // 0x00428844: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00428848: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x0042884C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00428850: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x00428854: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00428858: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x0042885C: lbu         $v1, 0x101($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X101);
    // 0x00428860: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00428864: sb          $v1, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r3;
L_00428868:
    // 0x00428868: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x0042886C: bne         $v0, $zero, L_00428820
    if (ctx->r2 != 0) {
        // 0x00428870: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_00428820;
    }
    // 0x00428870: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x00428874: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00428878:
    // 0x00428878: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x0042887C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00428880: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428884: bnel        $v0, $zero, L_004287D4
    if (ctx->r2 != 0) {
        // 0x00428888: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_004287D4;
    }
    goto skip_1;
    // 0x00428888: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    skip_1:
    // 0x0042888C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00428890:
    // 0x00428890: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
    // 0x00428894: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x00428898: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x0042889C: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x004288A0: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x004288A4: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x004288A8: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x004288AC: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x004288B0: jr          $ra
    // 0x004288B4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x004288B4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void entry_0042890C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042890C: lbu         $a0, 0x64($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X64);
    // 0x00428910: beq         $a0, $zero, L_004289E8
    if (ctx->r4 == 0) {
        // 0x00428914: addu        $s7, $v1, $v0
        ctx->r23 = ADD32(ctx->r3, ctx->r2);
            goto L_004289E8;
    }
    // 0x00428914: addu        $s7, $v1, $v0
    ctx->r23 = ADD32(ctx->r3, ctx->r2);
    // 0x00428918: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0042891C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00428920: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
L_00428924:
    // 0x00428924: bne         $a3, $zero, L_00428930
    if (ctx->r7 != 0) {
        // 0x00428928: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00428930;
    }
    // 0x00428928: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042892C: lw          $s2, 0x60($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X60);
L_00428930:
    // 0x00428930: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00428934: beq         $v1, $s6, L_00428954
    if (ctx->r3 == ctx->r22) {
        // 0x00428938: addu        $v0, $s3, $s7
        ctx->r2 = ADD32(ctx->r19, ctx->r23);
            goto L_00428954;
    }
    // 0x00428938: addu        $v0, $s3, $s7
    ctx->r2 = ADD32(ctx->r19, ctx->r23);
    // 0x0042893C: lbu         $v0, 0x101($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X101);
    // 0x00428940: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00428944: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x00428948: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0042894C: beql        $v0, $zero, L_004289D4
    if (ctx->r2 == 0) {
        // 0x00428950: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004289D4;
    }
    goto skip_0;
    // 0x00428950: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_00428954:
    // 0x00428954: lbu         $v0, 0x100($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X100);
    // 0x00428958: beq         $a3, $v0, L_00428984
    if (ctx->r7 == ctx->r2) {
        // 0x0042895C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00428984;
    }
    // 0x0042895C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00428960: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00428964: jal         0x00429AA4
    // 0x00428968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x00428968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0042896C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428970: beq         $v1, $zero, L_00428980
    if (ctx->r3 == 0) {
        // 0x00428974: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00428980;
    }
    // 0x00428974: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00428978: bne         $v1, $v0, L_004289EC
    if (ctx->r3 != ctx->r2) {
        // 0x0042897C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004289EC;
    }
    // 0x0042897C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00428980:
    // 0x00428980: sb          $s1, 0x100($s3)
    MEM_B(0X100, ctx->r19) = ctx->r17;
L_00428984:
    // 0x00428984: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x00428988: beq         $v0, $zero, L_004289CC
    if (ctx->r2 == 0) {
        // 0x0042898C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004289CC;
    }
    // 0x0042898C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428990: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00428994: addu        $v1, $v0, $s3
    ctx->r3 = ADD32(ctx->r2, ctx->r19);
L_00428998:
    // 0x00428998: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x0042899C: beq         $v0, $zero, L_004289C4
    if (ctx->r2 == 0) {
        // 0x004289A0: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_004289C4;
    }
    // 0x004289A0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x004289A4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x004289A8: beql        $v0, $s5, L_004289B0
    if (ctx->r2 == ctx->r21) {
        // 0x004289AC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004289B0;
    }
    goto skip_1;
    // 0x004289AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
L_004289B0:
    // 0x004289B0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x004289B4: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x004289B8: bne         $v0, $zero, L_00428998
    if (ctx->r2 != 0) {
        // 0x004289BC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428998;
    }
    // 0x004289BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004289C0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_004289C4:
    // 0x004289C4: bne         $v0, $zero, L_004289D4
    if (ctx->r2 != 0) {
        // 0x004289C8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004289D4;
    }
    // 0x004289C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004289CC:
    // 0x004289CC: j           L_004289EC
    // 0x004289D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_004289EC;
    // 0x004289D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_004289D4:
    // 0x004289D4: lbu         $v1, 0x64($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X64);
    // 0x004289D8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x004289DC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x004289E0: bne         $v0, $zero, L_00428924
    if (ctx->r2 != 0) {
        // 0x004289E4: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_00428924;
    }
    // 0x004289E4: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
L_004289E8:
    // 0x004289E8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004289EC:
    // 0x004289EC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x004289F0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x004289F4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x004289F8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x004289FC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00428A00: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00428A04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00428A08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00428A0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00428A10: jr          $ra
    // 0x00428A14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00428A14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00428ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428A6C:
    // 0x00428ABC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00428AC0: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
    // 0x00428AC4: beq         $v0, $zero, L_00428B00
    if (ctx->r2 == 0) {
        // 0x00428AC8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428B00;
    }
    // 0x00428AC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428ACC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00428AD0: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_00428AD4:
    // 0x00428AD4: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x00428AD8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00428ADC: bnel        $v0, $zero, L_00428AEC
    if (ctx->r2 != 0) {
        // 0x00428AE0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428AEC;
    }
    goto skip_0;
    // 0x00428AE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x00428AE4: j           L_00428AF8
    // 0x00428AE8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_00428AF8;
    // 0x00428AE8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_00428AEC:
    // 0x00428AEC: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00428AF0: bne         $v0, $zero, L_00428AD4
    if (ctx->r2 != 0) {
        // 0x00428AF4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00428AD4;
    }
    // 0x00428AF4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00428AF8:
    // 0x00428AF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00428AFC: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
L_00428B00:
    // 0x00428B00: beql        $a0, $v0, L_00428B08
    if (ctx->r4 == ctx->r2) {
        // 0x00428B04: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00428B08;
    }
    goto skip_1;
    // 0x00428B04: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00428B08:
    // 0x00428B08: bgtz        $s0, L_00428A6C
    if (SIGNED(ctx->r16) > 0) {
        // 0x00428B0C: nop
    
            goto L_00428A6C;
    }
    // 0x00428B0C: nop

    // 0x00428B10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00428B14: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
    // 0x00428B18: beq         $v0, $zero, L_00428B60
    if (ctx->r2 == 0) {
        // 0x00428B1C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428B60;
    }
    // 0x00428B1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428B20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00428B24: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00428B28: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
L_00428B2C:
    // 0x00428B2C: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x00428B30: bnel        $v0, $zero, L_00428B54
    if (ctx->r2 != 0) {
        // 0x00428B34: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428B54;
    }
    goto skip_2;
    // 0x00428B34: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x00428B38: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x00428B3C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428B40: beql        $v0, $zero, L_00428B54
    if (ctx->r2 == 0) {
        // 0x00428B44: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428B54;
    }
    goto skip_3;
    // 0x00428B44: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x00428B48: sllv        $v0, $a2, $a0
    ctx->r2 = S32(ctx->r6 << (ctx->r4 & 31));
    // 0x00428B4C: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
    // 0x00428B50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00428B54:
    // 0x00428B54: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00428B58: bne         $v0, $zero, L_00428B2C
    if (ctx->r2 != 0) {
        // 0x00428B5C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00428B2C;
    }
    // 0x00428B5C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00428B60:
    // 0x00428B60: jal         0x0029A050
    // 0x00428B64: nop

    func_0029A050(rdram, ctx);
        goto after_0;
    // 0x00428B64: nop

    after_0:
    // 0x00428B68: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00428B6C: sb          $s2, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r18;
    // 0x00428B70: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00428B74: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00428B78: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00428B7C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00428B80: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00428B84: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00428B88: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00428B8C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00428B90: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00428B94: jr          $ra
    // 0x00428B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00428B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_00428B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428B2C:
    // 0x00428B58: bne         $v0, $zero, L_00428B2C
    if (ctx->r2 != 0) {
        // 0x00428B5C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00428B2C;
    }
    // 0x00428B5C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00428B60: jal         0x0029A050
    // 0x00428B64: nop

    func_0029A050(rdram, ctx);
        goto after_0;
    // 0x00428B64: nop

    after_0:
    // 0x00428B68: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00428B6C: sb          $s2, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r18;
    // 0x00428B70: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00428B74: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00428B78: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00428B7C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00428B80: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00428B84: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00428B88: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00428B8C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00428B90: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00428B94: jr          $ra
    // 0x00428B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00428B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_00428C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428BF4:
    // 0x00428C10: swr         $t2, 0x7($a3)
    do_swr(rdram, 0X7, ctx->r7, ctx->r10);
    // 0x00428C14: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x00428C18: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00428C1C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428C20: bne         $v0, $zero, L_00428BF4
    if (ctx->r2 != 0) {
        // 0x00428C24: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_00428BF4;
    }
    // 0x00428C24: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x00428C28: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00428C2C: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x00428C30: jr          $ra
    // 0x00428C34: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00428C34: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void entry_00428F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428D88:
    // 0x00428F98: bne         $v0, $zero, L_00429000
    if (ctx->r2 != 0) {
        // 0x00428F9C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00429000;
    }
L_00428F60:
    // 0x00428F9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428FA0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428FA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00428FA8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00428FAC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00428FB0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x00428FB4: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00428FB8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00428FBC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00428FC0: bne         $v0, $zero, L_00428FF0
    if (ctx->r2 != 0) {
        // 0x00428FC4: nop
    
            goto L_00428FF0;
    }
    // 0x00428FC4: nop

    // 0x00428FC8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00428FCC: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428FD0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428FD4: beq         $v0, $zero, L_00428FF0
    if (ctx->r2 == 0) {
        // 0x00428FD8: nop
    
            goto L_00428FF0;
    }
    // 0x00428FD8: nop

    // 0x00428FDC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428FE0: beq         $v0, $zero, L_00428FF0
    if (ctx->r2 == 0) {
        // 0x00428FE4: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00428FF0;
    }
    // 0x00428FE4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00428FE8: bgez        $v0, L_00429000
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00428FEC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00429000;
    }
    // 0x00428FEC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00428FF0:
    // 0x00428FF0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00428FF4: bne         $v0, $s6, L_00429000
    if (ctx->r2 != ctx->r22) {
        // 0x00428FF8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00429000;
    }
    // 0x00428FF8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00428FFC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_00429000:
    // 0x00429000: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x00429004: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00428D88;
    }
    // 0x00429004: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00429008: lbu         $v1, 0x13A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13A);
    // 0x0042900C: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00429010: beq         $v0, $v1, L_00429030
    if (ctx->r2 == ctx->r3) {
        // 0x00429014: nop
    
            goto L_00429030;
    }
    // 0x00429014: nop

    // 0x00429018: sb          $v1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r3;
    // 0x0042901C: jal         0x00429EC4
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00429024: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429028: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x0042902C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004290F4;
    }
    // 0x0042902C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00429030:
    // 0x00429030: lbu         $v0, 0x13B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X13B);
    // 0x00429034: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00429038: addu        $a2, $v0, $s1
    ctx->r6 = ADD32(ctx->r2, ctx->r17);
    // 0x0042903C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00429040: bne         $v0, $zero, L_00429060
    if (ctx->r2 != 0) {
        // 0x00429044: andi        $a2, $a2, 0xFFFF
        ctx->r6 = ctx->r6 & 0XFFFF;
            goto L_00429060;
    }
    // 0x00429044: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00429048: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042904C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429050: jal         0x00299680
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00429058: j           L_00429078
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_00429078;
    // 0x0042905C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429060:
    // 0x00429060: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429064: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429068: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0042906C: jal         0x00299A40
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00429074: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00429078:
    // 0x00429078: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x0042907C: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_00428D88;
    }
    // 0x0042907C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
    // 0x00429080: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00429084: bgtz        $s4, L_00428F60
    if (SIGNED(ctx->r20) > 0) {
        // 0x00429088: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00428F60;
    }
    // 0x00429088: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042908C: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x00429090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00429094: bne         $v1, $v0, L_004290F4
    if (ctx->r3 != ctx->r2) {
        // 0x00429098: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x00429098: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042909C: lbu         $v1, 0x20($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X20);
    // 0x004290A0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x004290A4: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x004290A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    // 0x004290A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004290AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004290B0: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x004290B4: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x004290B8: jal         0x00429EC4
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_3;
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_3:
    // 0x004290C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290C4: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x004290C8: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_004290F4;
    }
    // 0x004290C8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004290CC: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x004290D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004290D4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004290D8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004290DC: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x004290E0: jal         0x00299A40
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_4;
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_4:
    // 0x004290E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290EC: beql        $v1, $zero, L_004290F4
    if (ctx->r3 == 0) {
        // 0x004290F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    goto skip_0;
    // 0x004290F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004290F4:
    // 0x004290F4: lw          $ra, 0x164($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X164);
    // 0x004290F8: lw          $fp, 0x160($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X160);
    // 0x004290FC: lw          $s7, 0x15C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X15C);
    // 0x00429100: lw          $s6, 0x158($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X158);
    // 0x00429104: lw          $s5, 0x154($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X154);
    // 0x00429108: lw          $s4, 0x150($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X150);
    // 0x0042910C: lw          $s3, 0x14C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14C);
    // 0x00429110: lw          $s2, 0x148($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X148);
    // 0x00429114: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x00429118: lw          $s0, 0x140($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X140);
    // 0x0042911C: jr          $ra
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x00429120: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
