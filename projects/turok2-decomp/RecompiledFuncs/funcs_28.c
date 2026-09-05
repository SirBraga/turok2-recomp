#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004035CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004035CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004035D0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x004035D4: lwc1        $f1, 0x24C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X24C);
    // 0x004035D8: lwc1        $f0, 0x24C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24C);
    // 0x004035DC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004035E0: nop

    // 0x004035E4: bc1f        L_004035F0
    if (!c1cs) {
        // 0x004035E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004035F0;
    }
    // 0x004035E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004035EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004035F0:
    // 0x004035F0: jr          $ra
    // 0x004035F4: nop

    return;
    // 0x004035F4: nop

;}
RECOMP_FUNC void func_0042EA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EA00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042EA04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042EA08: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042EA0C: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x0042EA10: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042EA14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042EA18: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x0042EA1C: bne         $v0, $zero, L_0042EA3C
    if (ctx->r2 != 0) {
        // 0x0042EA20: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0042EA3C;
    }
    // 0x0042EA20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042EA24: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x0042EA28: jal         0x00285BD0
    // 0x0042EA2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x0042EA2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0042EA30: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x0042EA34: beq         $v0, $zero, L_0042EA4C
    if (ctx->r2 == 0) {
        // 0x0042EA38: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0042EA4C;
    }
    // 0x0042EA38: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0042EA3C:
    // 0x0042EA3C: jal         0x002540E4
    // 0x0042EA40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_1;
    // 0x0042EA40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042EA44: j           L_0042EA54
    // 0x0042EA48: nop

        goto L_0042EA54;
    // 0x0042EA48: nop

L_0042EA4C:
    // 0x0042EA4C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042EA50: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
L_0042EA54:
    // 0x0042EA54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042EA58: lwc1        $f0, 0x70D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70D8);
    // 0x0042EA5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042EA60: jal         0x00248340
    // 0x0042EA64: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_2;
    // 0x0042EA64: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0042EA68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042EA6C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x0042EA70: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0042EA74: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x0042EA78: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0042EA7C: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x0042EA80: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0042EA84: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0042EA88: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042EA8C: bne         $v1, $v0, L_0042EAD8
    if (ctx->r3 != ctx->r2) {
        // 0x0042EA90: nop
    
            goto L_0042EAD8;
    }
    // 0x0042EA90: nop

    // 0x0042EA94: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x0042EA98: bne         $v0, $zero, L_0042EAD8
    if (ctx->r2 != 0) {
        // 0x0042EA9C: nop
    
            goto L_0042EAD8;
    }
    // 0x0042EA9C: nop

    // 0x0042EAA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042EAA4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0042EAA8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0042EAAC: bne         $v0, $zero, L_0042EAD8
    if (ctx->r2 != 0) {
        // 0x0042EAB0: nop
    
            goto L_0042EAD8;
    }
    // 0x0042EAB0: nop

    // 0x0042EAB4: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0042EAB8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0042EABC: beq         $v0, $zero, L_0042EAD8
    if (ctx->r2 == 0) {
        // 0x0042EAC0: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0042EAD8;
    }
    // 0x0042EAC0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0042EAC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042EAC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042EACC: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x0042EAD0: jal         0x0027580C
    // 0x0042EAD4: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0042EAD4: nop

    after_3:
L_0042EAD8:
    // 0x0042EAD8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042EADC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042EADC(rdram, ctx);
;}
RECOMP_FUNC void func_00294540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294540: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00294544: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00294548: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x0029454C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294550: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x00294554: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00294558: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0029455C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00294560: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x00294564: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00294568: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0029456C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00294570: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00294574: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00294578: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0029457C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00294580: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00294584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294588: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0029458C: beq         $v0, $zero, L_00294614
    if (ctx->r2 == 0) {
        // 0x00294590: addu        $s3, $s1, $zero
        ctx->r19 = ADD32(ctx->r17, 0);
            goto L_00294614;
    }
    // 0x00294590: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x00294594: jal         0x00294B58
    // 0x00294598: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294598: nop

    after_0:
    // 0x0029459C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002945A0: beq         $s0, $zero, L_00294614
    if (ctx->r16 == 0) {
        // 0x002945A4: sll         $v0, $s1, 24
        ctx->r2 = S32(ctx->r17 << 24);
            goto L_00294614;
    }
    // 0x002945A4: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x002945A8: bltzl       $v0, L_002945B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x002945AC: negu        $s3, $s1
        ctx->r19 = SUB32(0, ctx->r17);
            goto L_002945B0;
    }
    goto skip_0;
    // 0x002945AC: negu        $s3, $s1
    ctx->r19 = SUB32(0, ctx->r17);
    skip_0:
L_002945B0:
    // 0x002945B0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x002945B4: lw          $v1, 0x1C($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X1C);
    // 0x002945B8: lw          $a1, 0xD8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XD8);
    // 0x002945BC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x002945C0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x002945C4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x002945C8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x002945CC: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x002945D0: lhu         $v0, 0x1A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1A);
    // 0x002945D4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x002945D8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002945DC: sb          $s4, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r20;
    // 0x002945E0: sh          $s6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r22;
    // 0x002945E4: sb          $s3, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r19;
    // 0x002945E8: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x002945EC: jal         0x00294C30
    // 0x002945F0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    func_00294C30(rdram, ctx);
        goto after_1;
    // 0x002945F0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    after_1:
    // 0x002945F4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x002945F8: sw          $s7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r23;
    // 0x002945FC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00294600: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00294604: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00294608: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0029460C: jalr        $v0
    // 0x00294610: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00294610: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_00294614:
    // 0x00294614: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00294618: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0029461C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00294620: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00294624: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00294628: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029462C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294630: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00294634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294638: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0029463C: jr          $ra
    // 0x00294640: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00294640: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002A3774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00282E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00282E4C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00282E50: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00282E54: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00282E58: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x00282E5C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x00282E60: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00282E64: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00282E68: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00282E6C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00282E70: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00282E74: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00282E78: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00282E7C: sdc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X70, ctx->r29);
    // 0x00282E80: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x00282E84: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x00282E88: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x00282E8C: lw          $s0, 0x58($s6)
    ctx->r16 = MEM_W(ctx->r22, 0X58);
    // 0x00282E90: beq         $s0, $zero, L_002831F8
    if (ctx->r16 == 0) {
        // 0x00282E94: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_002831F8;
    }
    // 0x00282E94: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00282E98: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00282E9C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00282EA0: jal         0x0022425C
    // 0x00282EA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00282EA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00282EA8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00282EAC: beq         $s4, $zero, L_002831F8
    if (ctx->r20 == 0) {
        // 0x00282EB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002831F8;
    }
    // 0x00282EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00282EB4: lw          $a1, 0x38($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X38);
    // 0x00282EB8: lw          $a2, 0x40($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X40);
    // 0x00282EBC: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x00282EC0: jal         0x0026BE60
    // 0x00282EC4: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    func_0026BE60(rdram, ctx);
        goto after_1;
    // 0x00282EC4: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    after_1:
    // 0x00282EC8: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x00282ECC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00282ED0: beq         $v0, $zero, L_00282F60
    if (ctx->r2 == 0) {
        // 0x00282ED4: mov.s       $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
            goto L_00282F60;
    }
    // 0x00282ED4: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    // 0x00282ED8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00282EDC: jal         0x00280E40
    // 0x00282EE0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_00280E40(rdram, ctx);
        goto after_2;
    // 0x00282EE0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_2:
    // 0x00282EE4: lwc1        $f0, 0x20($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X20);
    // 0x00282EE8: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00282EEC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00282EF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282EF4: lwc1        $f20, -0x636C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X636C);
    // 0x00282EF8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00282EFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282F00: lwc1        $f1, -0x6368($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6368);
    // 0x00282F04: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00282F08: nop

    // 0x00282F0C: bc1f        L_00282F1C
    if (!c1cs) {
        // 0x00282F10: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00282F1C;
    }
    // 0x00282F10: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00282F14: j           L_00282F34
    // 0x00282F18: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
        goto L_00282F34;
    // 0x00282F18: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
L_00282F1C:
    // 0x00282F1C: jal         0x00280E40
    // 0x00282F20: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_00280E40(rdram, ctx);
        goto after_3;
    // 0x00282F20: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_3:
    // 0x00282F24: lwc1        $f0, 0x20($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X20);
    // 0x00282F28: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00282F2C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00282F30: mul.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
L_00282F34:
    // 0x00282F34: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00282F38: jal         0x00280E40
    // 0x00282F3C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_00280E40(rdram, ctx);
        goto after_4;
    // 0x00282F3C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_4:
    // 0x00282F40: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00282F44: lwc1        $f1, 0x20($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X20);
    // 0x00282F48: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00282F4C: nop

    // 0x00282F50: bc1t        L_00282F5C
    if (c1cs) {
        // 0x00282F54: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_00282F5C;
    }
    // 0x00282F54: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00282F58: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_00282F5C:
    // 0x00282F5C: sub.s       $f21, $f1, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f20.fl;
L_00282F60:
    // 0x00282F60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00282F64: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x00282F68: lw          $s3, -0xE8($s3)
    ctx->r19 = MEM_W(ctx->r19, -0XE8);
    // 0x00282F6C: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x00282F70: lw          $s2, -0xEC($s2)
    ctx->r18 = MEM_W(ctx->r18, -0XEC);
    // 0x00282F74: lhu         $s4, 0x56($s4)
    ctx->r20 = MEM_HU(ctx->r20, 0X56);
    // 0x00282F78: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x00282F7C: beq         $s3, $v0, L_00283030
    if (ctx->r19 == ctx->r2) {
        // 0x00282F80: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00283030;
    }
    // 0x00282F80: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00282F84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282F88: lwc1        $f20, -0x6364($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6364);
    // 0x00282F8C: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
L_00282F90:
    // 0x00282F90: and         $v0, $s4, $s1
    ctx->r2 = ctx->r20 & ctx->r17;
    // 0x00282F94: beql        $v0, $zero, L_00283024
    if (ctx->r2 == 0) {
        // 0x00282F98: addiu       $s2, $s2, 0x2C
        ctx->r18 = ADD32(ctx->r18, 0X2C);
            goto L_00283024;
    }
    goto skip_0;
    // 0x00282F98: addiu       $s2, $s2, 0x2C
    ctx->r18 = ADD32(ctx->r18, 0X2C);
    skip_0:
    // 0x00282F9C: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x00282FA0: beql        $v0, $zero, L_00283024
    if (ctx->r2 == 0) {
        // 0x00282FA4: addiu       $s2, $s2, 0x2C
        ctx->r18 = ADD32(ctx->r18, 0X2C);
            goto L_00283024;
    }
    goto skip_1;
    // 0x00282FA4: addiu       $s2, $s2, 0x2C
    ctx->r18 = ADD32(ctx->r18, 0X2C);
    skip_1:
    // 0x00282FA8: lhu         $v0, 0x8C8($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X8C8);
    // 0x00282FAC: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x00282FB0: bnel        $v0, $zero, L_00283024
    if (ctx->r2 != 0) {
        // 0x00282FB4: addiu       $s2, $s2, 0x2C
        ctx->r18 = ADD32(ctx->r18, 0X2C);
            goto L_00283024;
    }
    goto skip_2;
    // 0x00282FB4: addiu       $s2, $s2, 0x2C
    ctx->r18 = ADD32(ctx->r18, 0X2C);
    skip_2:
    // 0x00282FB8: lw          $s0, 0x8A0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X8A0);
    // 0x00282FBC: beq         $s0, $zero, L_00282FD8
    if (ctx->r16 == 0) {
        // 0x00282FC0: addiu       $a0, $s5, 0x8A0
        ctx->r4 = ADD32(ctx->r21, 0X8A0);
            goto L_00282FD8;
    }
    // 0x00282FC0: addiu       $a0, $s5, 0x8A0
    ctx->r4 = ADD32(ctx->r21, 0X8A0);
    // 0x00282FC4: jal         0x00200738
    // 0x00282FC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_5;
    // 0x00282FC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00282FCC: addiu       $a0, $s5, 0x8B4
    ctx->r4 = ADD32(ctx->r21, 0X8B4);
    // 0x00282FD0: jal         0x00200574
    // 0x00282FD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_6;
    // 0x00282FD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
L_00282FD8:
    // 0x00282FD8: beql        $s0, $zero, L_00283024
    if (ctx->r16 == 0) {
        // 0x00282FDC: addiu       $s2, $s2, 0x2C
        ctx->r18 = ADD32(ctx->r18, 0X2C);
            goto L_00283024;
    }
    goto skip_3;
    // 0x00282FDC: addiu       $s2, $s2, 0x2C
    ctx->r18 = ADD32(ctx->r18, 0X2C);
    skip_3:
    // 0x00282FE0: sw          $s2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r18;
    // 0x00282FE4: sh          $s1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r17;
    // 0x00282FE8: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x00282FEC: jal         0x00207914
    // 0x00282FF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    entry_00207914(rdram, ctx);
        goto after_7;
    // 0x00282FF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x00282FF4: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00282FF8: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00282FFC: sw          $zero, 0x208($s0)
    MEM_W(0X208, ctx->r16) = 0;
    // 0x00283000: sw          $zero, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = 0;
    // 0x00283004: swc1        $f20, 0x214($s0)
    MEM_W(0X214, ctx->r16) = ctx->f20.u32l;
    // 0x00283008: swc1        $f20, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->f20.u32l;
    // 0x0028300C: sw          $zero, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = 0;
    // 0x00283010: swc1        $f20, 0x220($s0)
    MEM_W(0X220, ctx->r16) = ctx->f20.u32l;
    // 0x00283014: lhu         $v0, 0x8C8($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X8C8);
    // 0x00283018: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x0028301C: sh          $v0, 0x8C8($s5)
    MEM_H(0X8C8, ctx->r21) = ctx->r2;
    // 0x00283020: addiu       $s2, $s2, 0x2C
    ctx->r18 = ADD32(ctx->r18, 0X2C);
L_00283024:
    // 0x00283024: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x00283028: bne         $s3, $fp, L_00282F90
    if (ctx->r19 != ctx->r30) {
        // 0x0028302C: sll         $s1, $s1, 1
        ctx->r17 = S32(ctx->r17 << 1);
            goto L_00282F90;
    }
    // 0x0028302C: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
L_00283030:
    // 0x00283030: lw          $s0, 0x8B4($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X8B4);
    // 0x00283034: beq         $s0, $zero, L_002831F8
    if (ctx->r16 == 0) {
        // 0x00283038: nop
    
            goto L_002831F8;
    }
    // 0x00283038: nop

    // 0x0028303C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283040: lwc1        $f22, -0x6360($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6360);
    // 0x00283044: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_00283048:
    // 0x00283048: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x0028304C: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x00283050: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x00283054: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x00283058: beq         $v0, $zero, L_00283090
    if (ctx->r2 == 0) {
        // 0x0028305C: nop
    
            goto L_00283090;
    }
    // 0x0028305C: nop

    // 0x00283060: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x00283064: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283068: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0028306C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00283070: lwc1        $f0, 0x208($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X208);
    // 0x00283074: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00283078: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0028307C: nop

    // 0x00283080: bc1tl       L_002830C8
    if (c1cs) {
        // 0x00283084: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_002830C8;
    }
    goto skip_4;
    // 0x00283084: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    skip_4:
    // 0x00283088: j           L_002830CC
    // 0x0028308C: swc1        $f0, 0x208($s0)
    MEM_W(0X208, ctx->r16) = ctx->f0.u32l;
        goto L_002830CC;
    // 0x0028308C: swc1        $f0, 0x208($s0)
    MEM_W(0X208, ctx->r16) = ctx->f0.u32l;
L_00283090:
    // 0x00283090: lwc1        $f2, 0x208($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X208);
    // 0x00283094: c.eq.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl == ctx->f20.fl;
    // 0x00283098: nop

    // 0x0028309C: bc1t        L_002831BC
    if (c1cs) {
        // 0x002830A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002831BC;
    }
    // 0x002830A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002830A4: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x002830A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002830AC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002830B0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002830B4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002830B8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002830BC: nop

    // 0x002830C0: bc1tl       L_002830C8
    if (c1cs) {
        // 0x002830C4: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_002830C8;
    }
    goto skip_5;
    // 0x002830C4: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_5:
L_002830C8:
    // 0x002830C8: swc1        $f0, 0x208($s0)
    MEM_W(0X208, ctx->r16) = ctx->f0.u32l;
L_002830CC:
    // 0x002830CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002830D0: lwc1        $f3, 0x6D28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002830D4: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x002830D8: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x002830DC: lwc1        $f0, 0x214($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X214);
    // 0x002830E0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002830E4: lwc1        $f2, 0x20C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x002830E8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002830EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002830F0: lwc1        $f0, 0x6D34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D34);
    // 0x002830F4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002830F8: swc1        $f2, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->f2.u32l;
    // 0x002830FC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00283100: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00283104: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00283108: lwc1        $f0, -0x635C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X635C);
    // 0x0028310C: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00283110: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00283114: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00283118: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028311C: lwc1        $f2, -0x6358($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6358);
    // 0x00283120: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00283124: nop

    // 0x00283128: bc1f        L_00283138
    if (!c1cs) {
        // 0x0028312C: swc1        $f0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
            goto L_00283138;
    }
    // 0x0028312C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x00283130: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00283134: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00283138:
    // 0x00283138: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028313C: lwc1        $f0, -0x6354($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6354);
    // 0x00283140: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00283144: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x00283148: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0028314C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00283150: nop

    // 0x00283154: bc1f        L_00283164
    if (!c1cs) {
        // 0x00283158: swc1        $f0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
            goto L_00283164;
    }
    // 0x00283158: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0028315C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00283160: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_00283164:
    // 0x00283164: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x00283168: lwc1        $f0, 0x21C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X21C);
    // 0x0028316C: beq         $s7, $zero, L_00283188
    if (ctx->r23 == 0) {
        // 0x00283170: add.s       $f2, $f1, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_00283188;
    }
    // 0x00283170: add.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00283174: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x00283178: bne         $v0, $zero, L_00283188
    if (ctx->r2 != 0) {
        // 0x0028317C: nop
    
            goto L_00283188;
    }
    // 0x0028317C: nop

    // 0x00283180: j           L_002831B4
    // 0x00283184: add.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f21.fl;
        goto L_002831B4;
    // 0x00283184: add.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f21.fl;
L_00283188:
    // 0x00283188: lbu         $v1, 0x29($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X29);
    // 0x0028318C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00283190: beq         $v0, $zero, L_002831AC
    if (ctx->r2 == 0) {
        // 0x00283194: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_002831AC;
    }
    // 0x00283194: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00283198: lwc1        $f0, 0x118($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X118);
    // 0x0028319C: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x002831A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002831A4: j           L_002831B4
    // 0x002831A8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_002831B4;
    // 0x002831A8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_002831AC:
    // 0x002831AC: bnel        $v0, $zero, L_002831B4
    if (ctx->r2 != 0) {
        // 0x002831B0: add.s       $f2, $f2, $f23
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f23.fl;
            goto L_002831B4;
    }
    goto skip_6;
    // 0x002831B0: add.s       $f2, $f2, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f23.fl;
    skip_6:
L_002831B4:
    // 0x002831B4: swc1        $f2, 0x210($s0)
    MEM_W(0X210, ctx->r16) = ctx->f2.u32l;
    // 0x002831B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002831BC:
    // 0x002831BC: beq         $v0, $zero, L_002831EC
    if (ctx->r2 == 0) {
        // 0x002831C0: addiu       $a0, $s5, 0x8B4
        ctx->r4 = ADD32(ctx->r21, 0X8B4);
            goto L_002831EC;
    }
    // 0x002831C0: addiu       $a0, $s5, 0x8B4
    ctx->r4 = ADD32(ctx->r21, 0X8B4);
    // 0x002831C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002831C8: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x002831CC: lhu         $v1, 0x8C8($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X8C8);
    // 0x002831D0: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x002831D4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x002831D8: jal         0x00200738
    // 0x002831DC: sh          $v1, 0x8C8($s5)
    MEM_H(0X8C8, ctx->r21) = ctx->r3;
    func_00200738(rdram, ctx);
        goto after_8;
    // 0x002831DC: sh          $v1, 0x8C8($s5)
    MEM_H(0X8C8, ctx->r21) = ctx->r3;
    after_8:
    // 0x002831E0: addiu       $a0, $s5, 0x8A0
    ctx->r4 = ADD32(ctx->r21, 0X8A0);
    // 0x002831E4: jal         0x00200518
    // 0x002831E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_9;
    // 0x002831E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
L_002831EC:
    // 0x002831EC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x002831F0: bne         $s0, $zero, L_00283048
    if (ctx->r16 != 0) {
        // 0x002831F4: nop
    
            goto L_00283048;
    }
    // 0x002831F4: nop

L_002831F8:
    // 0x002831F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x002831FC: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x00283200: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00283204: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00283208: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0028320C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00283210: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00283214: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00283218: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0028321C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00283220: ldc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X70);
    // 0x00283224: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x00283228: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0028322C: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x00283230: jr          $ra
    // 0x00283234: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00283234: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_002007F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002007F4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x002007F8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002007FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00200800: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00200804: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00200808: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0020080C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00200810: jr          $ra
    // 0x00200814: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    return;
    // 0x00200814: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_0040AD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AD28: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0040AD2C: andi        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 & 0X2;
    // 0x0040AD30: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0040AD34: beq         $v0, $zero, L_0040AD4C
    if (ctx->r2 == 0) {
        // 0x0040AD38: nop
    
            goto L_0040AD4C;
    }
    // 0x0040AD38: nop

    // 0x0040AD3C: beq         $v1, $zero, L_0040AD58
    if (ctx->r3 == 0) {
        // 0x0040AD40: addiu       $v0, $zero, 0x56C2
        ctx->r2 = ADD32(0, 0X56C2);
            goto L_0040AD58;
    }
    // 0x0040AD40: addiu       $v0, $zero, 0x56C2
    ctx->r2 = ADD32(0, 0X56C2);
    // 0x0040AD44: jr          $ra
    // 0x0040AD48: addiu       $v0, $zero, 0x5640
    ctx->r2 = ADD32(0, 0X5640);
    return;
    // 0x0040AD48: addiu       $v0, $zero, 0x5640
    ctx->r2 = ADD32(0, 0X5640);
L_0040AD4C:
    // 0x0040AD4C: beq         $v1, $zero, L_0040AD58
    if (ctx->r3 == 0) {
        // 0x0040AD50: addiu       $v0, $zero, 0x56A4
        ctx->r2 = ADD32(0, 0X56A4);
            goto L_0040AD58;
    }
    // 0x0040AD50: addiu       $v0, $zero, 0x56A4
    ctx->r2 = ADD32(0, 0X56A4);
    // 0x0040AD54: addiu       $v0, $zero, 0x56B8
    ctx->r2 = ADD32(0, 0X56B8);
L_0040AD58:
    // 0x0040AD58: jr          $ra
    // 0x0040AD5C: nop

    return;
    // 0x0040AD5C: nop

;}
RECOMP_FUNC void func_0025A57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A57C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A580: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A584: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A588: lhu         $a3, 0x88($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X88);
    // 0x0025A58C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A590: addiu       $a2, $a2, -0x208
    ctx->r6 = ADD32(ctx->r6, -0X208);
    // 0x0025A594: jal         0x00245A98
    // 0x0025A598: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A598: nop

    after_0:
    // 0x0025A59C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A5A0: jr          $ra
    // 0x0025A5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029BC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void func_0027B274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B274: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0027B278: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0027B27C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0027B280: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x0027B284: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x0027B288: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x0027B28C: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x0027B290: sdc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X48, ctx->r29);
    // 0x0027B294: lwc1        $f23, 0x60($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x0027B298: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x0027B29C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0027B2A0: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x0027B2A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0027B2A8: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x0027B2AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0027B2B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027B2B4: beq         $v0, $zero, L_0027B2D4
    if (ctx->r2 == 0) {
        // 0x0027B2B8: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_0027B2D4;
    }
    // 0x0027B2B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0027B2BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027B2C0: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x0027B2C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0027B2C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0027B2CC: jal         0x0027874C
    // 0x0027B2D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0027874C(rdram, ctx);
        goto after_0;
    // 0x0027B2D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
L_0027B2D4:
    // 0x0027B2D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0027B2D8: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027B2DC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0027B2E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027B2E4: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x0027B2E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0027B2EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0027B2F0: jal         0x0027874C
    // 0x0027B2F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0027874C(rdram, ctx);
        goto after_1;
    // 0x0027B2F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x0027B2F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0027B2FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0027B300: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0027B304: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0027B308: ldc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X48);
    // 0x0027B30C: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x0027B310: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0027B314: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0027B318: jr          $ra
    // 0x0027B31C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0027B31C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002718F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718F4: jr          $ra
    // 0x002718F8: addiu       $v0, $a0, 0x84
    ctx->r2 = ADD32(ctx->r4, 0X84);
    return;
    // 0x002718F8: addiu       $v0, $a0, 0x84
    ctx->r2 = ADD32(ctx->r4, 0X84);
;}
RECOMP_FUNC void func_00255D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255D68: jr          $ra
    // 0x00255D6C: nop

    return;
    // 0x00255D6C: nop

;}
RECOMP_FUNC void func_00289B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289B60: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289B64: lw          $v0, 0x6D70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D70);
    // 0x00289B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289B6C: beq         $v0, $zero, L_00289B88
    if (ctx->r2 == 0) {
        // 0x00289B70: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00289B88;
    }
    // 0x00289B70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00289B78: jal         0x00288E58
    // 0x00289B7C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x00289B7C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00289B80: j           L_00289BCC
    // 0x00289B84: nop

        goto L_00289BCC;
    // 0x00289B84: nop

L_00289B88:
    // 0x00289B88: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00289B8C: addiu       $v1, $v1, 0x5D2C
    ctx->r3 = ADD32(ctx->r3, 0X5D2C);
    // 0x00289B90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00289B94: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00289B98: beq         $v0, $zero, L_00289BCC
    if (ctx->r2 == 0) {
        // 0x00289B9C: nop
    
            goto L_00289BCC;
    }
    // 0x00289B9C: nop

    // 0x00289BA0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00289BA4: lw          $v0, -0x5300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5300);
    // 0x00289BA8: bne         $v0, $zero, L_00289BCC
    if (ctx->r2 != 0) {
        // 0x00289BAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00289BCC;
    }
    // 0x00289BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289BB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289BB4: lwc1        $f0, -0x61E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61E4);
    // 0x00289BB8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289BBC: sw          $v0, -0x5300($at)
    MEM_W(-0X5300, ctx->r1) = ctx->r2;
    // 0x00289BC0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x00289BC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289BC8: swc1        $f0, -0x4EE4($at)
    MEM_W(-0X4EE4, ctx->r1) = ctx->f0.u32l;
L_00289BCC:
    // 0x00289BCC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289BD0: jr          $ra
    // 0x00289BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002894F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002894F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002894F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x002894FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00289500: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00289504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00289508: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0028950C: lw          $a3, 0x2030($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2030);
    // 0x00289510: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289514: lwc1        $f0, -0x61F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61F4);
    // 0x00289518: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028951C: lwc1        $f1, -0x61F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X61F0);
    // 0x00289520: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00289524: addiu       $a2, $a2, 0x369C
    ctx->r6 = ADD32(ctx->r6, 0X369C);
    // 0x00289528: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028952C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00289530: srl         $v0, $a3, 31
    ctx->r2 = S32(U32(ctx->r7) >> 31);
    // 0x00289534: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00289538: srav        $a3, $a3, $a1
    ctx->r7 = S32(SIGNED(ctx->r7) >> (ctx->r5 & 31));
    // 0x0028953C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00289540: jal         0x00286E14
    // 0x00289544: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00286E14(rdram, ctx);
        goto after_0;
    // 0x00289544: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x00289548: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028954C: jr          $ra
    // 0x00289550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00289550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028A43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028A43C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028A440: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0028A444: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0028A448: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0028A44C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028A450: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028A454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028A458: lw          $s2, 0x2F4($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X2F4);
    // 0x0028A45C: sw          $zero, 0x2F4($s3)
    MEM_W(0X2F4, ctx->r19) = 0;
    // 0x0028A460: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0028A464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0028A468: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0028A46C: beq         $v0, $zero, L_0028A59C
    if (ctx->r2 == 0) {
        // 0x0028A470: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_0028A59C;
    }
    // 0x0028A470: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0028A474: jal         0x0029A510
    // 0x0028A478: addiu       $a0, $s2, 0x10
    ctx->r4 = ADD32(ctx->r18, 0X10);
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x0028A478: addiu       $a0, $s2, 0x10
    ctx->r4 = ADD32(ctx->r18, 0X10);
    after_0:
    // 0x0028A47C: beq         $v0, $zero, L_0028A59C
    if (ctx->r2 == 0) {
        // 0x0028A480: nop
    
            goto L_0028A59C;
    }
    // 0x0028A480: nop

    // 0x0028A484: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0028A488: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x0028A48C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x0028A490: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0028A494: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x0028A498: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0028A49C: bne         $v1, $v0, L_0028A4BC
    if (ctx->r3 != ctx->r2) {
        // 0x0028A4A0: nop
    
            goto L_0028A4BC;
    }
    // 0x0028A4A0: nop

    // 0x0028A4A4: lw          $v0, 0x2E8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2E8);
    // 0x0028A4A8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x0028A4AC: lw          $v0, 0x2F0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2F0);
    // 0x0028A4B0: bne         $v0, $zero, L_0028A4BC
    if (ctx->r2 != 0) {
        // 0x0028A4B4: sw          $s2, 0x2E8($s3)
        MEM_W(0X2E8, ctx->r19) = ctx->r18;
            goto L_0028A4BC;
    }
    // 0x0028A4B4: sw          $s2, 0x2E8($s3)
    MEM_W(0X2E8, ctx->r19) = ctx->r18;
    // 0x0028A4B8: sw          $s2, 0x2F0($s3)
    MEM_W(0X2F0, ctx->r19) = ctx->r18;
L_0028A4BC:
    // 0x0028A4BC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0028A4C0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028A4C4: beq         $v0, $zero, L_0028A8B8
    if (ctx->r2 == 0) {
        // 0x0028A4C8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0028A8B8;
    }
    // 0x0028A4C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028A4CC: jal         0x0029B170
    // 0x0028A4D0: nop

    func_0029B170(rdram, ctx);
        goto after_1;
    // 0x0028A4D0: nop

    after_1:
    // 0x0028A4D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028A4D8: lw          $a0, -0xEA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEA0);
    // 0x0028A4DC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028A4E0: lw          $a1, -0xE9C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XE9C);
    // 0x0028A4E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028A4E8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0028A4EC: sltu        $t0, $v1, $a1
    ctx->r8 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0028A4F0: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    // 0x0028A4F4: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x0028A4F8: subu        $a0, $a0, $t0
    ctx->r4 = SUB32(ctx->r4, ctx->r8);
    // 0x0028A4FC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028A500: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028A504: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A508: jal         0x002A4650
    // 0x0028A50C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_2;
    // 0x0028A50C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_2:
    // 0x0028A510: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028A514: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028A518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A51C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028A520: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028A524: jal         0x002A50E0
    // 0x0028A528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_3;
    // 0x0028A528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0028A52C: blez        $v0, L_0028A544
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028A530: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028A544;
    }
    // 0x0028A530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A534: jal         0x002A5130
    // 0x0028A538: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_4;
    // 0x0028A538: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0028A53C: j           L_0028A574
    // 0x0028A540: nop

        goto L_0028A574;
    // 0x0028A540: nop

L_0028A544:
    // 0x0028A544: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x0028A548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0028A54C: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x0028A550: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0028A554: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028A558: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028A55C: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028A560: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028A564: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A568: jal         0x002A5130
    // 0x0028A56C: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_5;
    // 0x0028A56C: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_5:
    // 0x0028A570: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_0028A574:
    // 0x0028A574: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A578: lwc1        $f1, -0x61D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X61D0);
    // 0x0028A57C: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028A580: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A584: lwc1        $f0, -0xEA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XEA8);
    // 0x0028A588: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0028A58C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A590: swc1        $f0, -0xEA8($at)
    MEM_W(-0XEA8, ctx->r1) = ctx->f0.u32l;
    // 0x0028A594: j           L_0028A8B8
    // 0x0028A598: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
        goto L_0028A8B8;
    // 0x0028A598: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0028A59C:
    // 0x0028A59C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0028A5A0: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x0028A5A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0028A5A8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x0028A5AC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x0028A5B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028A5B4: bne         $v1, $v0, L_0028A7C8
    if (ctx->r3 != ctx->r2) {
        // 0x0028A5B8: nop
    
            goto L_0028A7C8;
    }
    // 0x0028A5B8: nop

    // 0x0028A5BC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0028A5C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A5C4: sw          $zero, 0x6E50($at)
    MEM_W(0X6E50, ctx->r1) = 0;
    // 0x0028A5C8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028A5CC: beq         $v0, $zero, L_0028A8AC
    if (ctx->r2 == 0) {
        // 0x0028A5D0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0028A8AC;
    }
    // 0x0028A5D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028A5D4: jal         0x0029B170
    // 0x0028A5D8: nop

    func_0029B170(rdram, ctx);
        goto after_6;
    // 0x0028A5D8: nop

    after_6:
    // 0x0028A5DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028A5E0: lw          $a0, -0xEA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEA0);
    // 0x0028A5E4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028A5E8: lw          $a1, -0xE9C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XE9C);
    // 0x0028A5EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028A5F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0028A5F4: sltu        $t0, $v1, $a1
    ctx->r8 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0028A5F8: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    // 0x0028A5FC: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x0028A600: subu        $a0, $a0, $t0
    ctx->r4 = SUB32(ctx->r4, ctx->r8);
    // 0x0028A604: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028A608: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028A60C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A610: jal         0x002A4650
    // 0x0028A614: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_7;
    // 0x0028A614: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_7:
    // 0x0028A618: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028A61C: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028A620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A624: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028A628: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028A62C: jal         0x002A50E0
    // 0x0028A630: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_8;
    // 0x0028A630: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0028A634: blez        $v0, L_0028A64C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028A638: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028A64C;
    }
    // 0x0028A638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A63C: jal         0x002A5130
    // 0x0028A640: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_9;
    // 0x0028A640: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0028A644: j           L_0028A67C
    // 0x0028A648: nop

        goto L_0028A67C;
    // 0x0028A648: nop

L_0028A64C:
    // 0x0028A64C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x0028A650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0028A654: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x0028A658: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0028A65C: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028A660: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028A664: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028A668: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028A66C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A670: jal         0x002A5130
    // 0x0028A674: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_10;
    // 0x0028A674: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_10:
    // 0x0028A678: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_0028A67C:
    // 0x0028A67C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A680: lwc1        $f1, -0x61CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X61CC);
    // 0x0028A684: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028A688: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A68C: lwc1        $f0, -0xEA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XEA8);
    // 0x0028A690: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0028A694: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028A698: swc1        $f0, -0xEA8($at)
    MEM_W(-0XEA8, ctx->r1) = ctx->f0.u32l;
    // 0x0028A69C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A6A0: swc1        $f0, 0x6D40($at)
    MEM_W(0X6D40, ctx->r1) = ctx->f0.u32l;
    // 0x0028A6A4: jal         0x0029B170
    // 0x0028A6A8: nop

    func_0029B170(rdram, ctx);
        goto after_11;
    // 0x0028A6A8: nop

    after_11:
    // 0x0028A6AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028A6B0: lw          $a0, -0xEB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEB0);
    // 0x0028A6B4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028A6B8: lw          $a1, -0xEAC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEAC);
    // 0x0028A6BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028A6C0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0028A6C4: sltu        $t0, $v1, $a1
    ctx->r8 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0028A6C8: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    // 0x0028A6CC: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x0028A6D0: subu        $a0, $a0, $t0
    ctx->r4 = SUB32(ctx->r4, ctx->r8);
    // 0x0028A6D4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028A6D8: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028A6DC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A6E0: jal         0x002A4650
    // 0x0028A6E4: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_12;
    // 0x0028A6E4: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_12:
    // 0x0028A6E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028A6EC: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028A6F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A6F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028A6F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028A6FC: jal         0x002A50E0
    // 0x0028A700: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_13;
    // 0x0028A700: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_13:
    // 0x0028A704: blez        $v0, L_0028A71C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028A708: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028A71C;
    }
    // 0x0028A708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A70C: jal         0x002A5130
    // 0x0028A710: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_14;
    // 0x0028A710: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0028A714: j           L_0028A750
    // 0x0028A718: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_0028A750;
    // 0x0028A718: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_0028A71C:
    // 0x0028A71C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x0028A720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0028A724: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x0028A728: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0028A72C: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028A730: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028A734: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028A738: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028A73C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A740: jal         0x002A5130
    // 0x0028A744: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_15;
    // 0x0028A744: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_15:
    // 0x0028A748: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0028A74C: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
L_0028A750:
    // 0x0028A750: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A754: lwc1        $f0, -0x61C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61C8);
    // 0x0028A758: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028A75C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0028A760: addiu       $v1, $v1, 0x6CB0
    ctx->r3 = ADD32(ctx->r3, 0X6CB0);
    // 0x0028A764: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0028A768: lw          $v0, 0x110($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X110);
    // 0x0028A76C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A770: swc1        $f0, 0x6D3C($at)
    MEM_W(0X6D3C, ctx->r1) = ctx->f0.u32l;
    // 0x0028A774: beq         $a0, $v0, L_0028A79C
    if (ctx->r4 == ctx->r2) {
        // 0x0028A778: nop
    
            goto L_0028A79C;
    }
    // 0x0028A778: nop

    // 0x0028A77C: lw          $v0, 0x250($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X250);
    // 0x0028A780: bne         $a0, $v0, L_0028A790
    if (ctx->r4 != ctx->r2) {
        // 0x0028A784: nop
    
            goto L_0028A790;
    }
    // 0x0028A784: nop

    // 0x0028A788: j           L_0028A79C
    // 0x0028A78C: addiu       $v1, $v1, 0x140
    ctx->r3 = ADD32(ctx->r3, 0X140);
        goto L_0028A79C;
    // 0x0028A78C: addiu       $v1, $v1, 0x140
    ctx->r3 = ADD32(ctx->r3, 0X140);
L_0028A790:
    // 0x0028A790: lw          $v0, 0x390($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X390);
    // 0x0028A794: beql        $a0, $v0, L_0028A79C
    if (ctx->r4 == ctx->r2) {
        // 0x0028A798: addiu       $v1, $v1, 0x280
        ctx->r3 = ADD32(ctx->r3, 0X280);
            goto L_0028A79C;
    }
    goto skip_0;
    // 0x0028A798: addiu       $v1, $v1, 0x280
    ctx->r3 = ADD32(ctx->r3, 0X280);
    skip_0:
L_0028A79C:
    // 0x0028A79C: lw          $a1, 0x114($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X114);
    // 0x0028A7A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0028A7A4: lw          $v0, 0xA84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA84);
    // 0x0028A7A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028A7AC: xor         $a1, $a1, $v0
    ctx->r5 = ctx->r5 ^ ctx->r2;
    // 0x0028A7B0: jal         0x0020578C
    // 0x0028A7B4: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    func_0020578C(rdram, ctx);
        goto after_16;
    // 0x0028A7B4: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    after_16:
    // 0x0028A7B8: lw          $a0, 0x50($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X50);
    // 0x0028A7BC: lw          $a1, 0x54($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X54);
    // 0x0028A7C0: j           L_0028A894
    // 0x0028A7C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_0028A894;
    // 0x0028A7C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0028A7C8:
    // 0x0028A7C8: jal         0x0029B170
    // 0x0028A7CC: nop

    func_0029B170(rdram, ctx);
        goto after_17;
    // 0x0028A7CC: nop

    after_17:
    // 0x0028A7D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028A7D4: lw          $a0, -0xEB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEB0);
    // 0x0028A7D8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028A7DC: lw          $a1, -0xEAC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEAC);
    // 0x0028A7E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028A7E4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0028A7E8: sltu        $t0, $v1, $a1
    ctx->r8 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0028A7EC: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    // 0x0028A7F0: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x0028A7F4: subu        $a0, $a0, $t0
    ctx->r4 = SUB32(ctx->r4, ctx->r8);
    // 0x0028A7F8: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028A7FC: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028A800: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A804: jal         0x002A4650
    // 0x0028A808: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_18;
    // 0x0028A808: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_18:
    // 0x0028A80C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028A810: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028A814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A818: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028A81C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028A820: jal         0x002A50E0
    // 0x0028A824: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_19;
    // 0x0028A824: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_19:
    // 0x0028A828: blez        $v0, L_0028A840
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028A82C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028A840;
    }
    // 0x0028A82C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028A830: jal         0x002A5130
    // 0x0028A834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_20;
    // 0x0028A834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_20:
    // 0x0028A838: j           L_0028A874
    // 0x0028A83C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_0028A874;
    // 0x0028A83C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_0028A840:
    // 0x0028A840: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x0028A844: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0028A848: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    // 0x0028A84C: and         $a1, $s1, $a1
    ctx->r5 = ctx->r17 & ctx->r5;
    // 0x0028A850: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028A854: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028A858: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028A85C: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028A860: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028A864: jal         0x002A5130
    // 0x0028A868: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_21;
    // 0x0028A868: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_21:
    // 0x0028A86C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0028A870: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
L_0028A874:
    // 0x0028A874: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A878: lwc1        $f0, -0x61C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61C4);
    // 0x0028A87C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028A880: lw          $a0, 0x50($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X50);
    // 0x0028A884: lw          $a1, 0x54($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X54);
    // 0x0028A888: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028A88C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A890: swc1        $f0, 0x6D3C($at)
    MEM_W(0X6D3C, ctx->r1) = ctx->f0.u32l;
L_0028A894:
    // 0x0028A894: jal         0x0029B820
    // 0x0028A898: nop

    osSendMesg_recomp(rdram, ctx);
        goto after_22;
    // 0x0028A898: nop

    after_22:
    // 0x0028A89C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0028A8A0: bne         $v0, $v1, L_0028A8AC
    if (ctx->r2 != ctx->r3) {
        // 0x0028A8A4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0028A8AC;
    }
    // 0x0028A8A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028A8A8: sb          $zero, 0x0($zero)
    MEM_B(0X0, 0) = 0;
L_0028A8AC:
    // 0x0028A8AC: jal         0x0028B0A8
    // 0x0028A8B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0028B0A8(rdram, ctx);
        goto after_23;
    // 0x0028A8B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_23:
    // 0x0028A8B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0028A8B8:
    // 0x0028A8B8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028A8BC: addiu       $a2, $sp, 0x14
    ctx->r6 = ADD32(ctx->r29, 0X14);
    // 0x0028A8C0: lw          $s0, 0x2F4($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X2F4);
    // 0x0028A8C4: lw          $v0, 0x2F8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2F8);
    // 0x0028A8C8: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0028A8CC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x0028A8D0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028A8D4: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x0028A8D8: jal         0x0028ABE0
    // 0x0028A8DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0028ABE0(rdram, ctx);
        goto after_24;
    // 0x0028A8DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_24:
    // 0x0028A8E0: beq         $v0, $s0, L_0028A8F8
    if (ctx->r2 == ctx->r16) {
        // 0x0028A8E4: nop
    
            goto L_0028A8F8;
    }
    // 0x0028A8E4: nop

    // 0x0028A8E8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0028A8EC: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0028A8F0: jal         0x0028B0FC
    // 0x0028A8F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0028B0FC(rdram, ctx);
        goto after_25;
    // 0x0028A8F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
L_0028A8F8:
    // 0x0028A8F8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028A8FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0028A900: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028A904: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028A908: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028A90C: jr          $ra
    // 0x0028A910: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028A910: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0020798C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020798C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00207990: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00207994: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x00207998: addiu       $v1, $v1, 0x6990
    ctx->r3 = ADD32(ctx->r3, 0X6990);
    // 0x0020799C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x002079A0: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x002079A4: addiu       $v1, $v1, 0x51F0
    ctx->r3 = ADD32(ctx->r3, 0X51F0);
    // 0x002079A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002079AC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002079B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002079B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x002079B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x002079BC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x002079C0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x002079C4: jal         0x0020367C
    // 0x002079C8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x002079C8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002079CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002079D0: jr          $ra
    // 0x002079D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002079D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040E30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E30C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040E310: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040E314: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040E318: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040E31C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040E320: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x0040E324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040E328: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040E32C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0040E330: lb          $v1, 0x174($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X174);
    // 0x0040E334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040E338: beq         $v1, $v0, L_0040E34C
    if (ctx->r3 == ctx->r2) {
        // 0x0040E33C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0040E34C;
    }
    // 0x0040E33C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0040E340: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040E344: jal         0x00243414
    // 0x0040E348: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E348: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
L_0040E34C:
    // 0x0040E34C: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x0040E350: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040E354: sw          $v0, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->r2;
    // 0x0040E358: lhu         $a0, 0xB8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XB8);
    // 0x0040E35C: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x0040E360: beq         $a0, $v0, L_0040E3A4
    if (ctx->r4 == ctx->r2) {
        // 0x0040E364: slti        $v0, $a0, 0x456
        ctx->r2 = SIGNED(ctx->r4) < 0X456 ? 1 : 0;
            goto L_0040E3A4;
    }
    // 0x0040E364: slti        $v0, $a0, 0x456
    ctx->r2 = SIGNED(ctx->r4) < 0X456 ? 1 : 0;
    // 0x0040E368: beq         $v0, $zero, L_0040E380
    if (ctx->r2 == 0) {
        // 0x0040E36C: addiu       $v0, $zero, 0x454
        ctx->r2 = ADD32(0, 0X454);
            goto L_0040E380;
    }
    // 0x0040E36C: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x0040E370: beq         $a0, $v0, L_0040E394
    if (ctx->r4 == ctx->r2) {
        // 0x0040E374: nop
    
            goto L_0040E394;
    }
    // 0x0040E374: nop

    // 0x0040E378: j           L_0040E418
    // 0x0040E37C: nop

        goto L_0040E418;
    // 0x0040E37C: nop

L_0040E380:
    // 0x0040E380: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040E384: beq         $a0, $v0, L_0040E3B4
    if (ctx->r4 == ctx->r2) {
        // 0x0040E388: nop
    
            goto L_0040E3B4;
    }
    // 0x0040E388: nop

    // 0x0040E38C: j           L_0040E418
    // 0x0040E390: nop

        goto L_0040E418;
    // 0x0040E390: nop

L_0040E394:
    // 0x0040E394: lw          $v0, 0x50C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50C);
    // 0x0040E398: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040E39C: j           L_0040E418
    // 0x0040E3A0: sw          $v0, 0x50C($s0)
    MEM_W(0X50C, ctx->r16) = ctx->r2;
        goto L_0040E418;
    // 0x0040E3A0: sw          $v0, 0x50C($s0)
    MEM_W(0X50C, ctx->r16) = ctx->r2;
L_0040E3A4:
    // 0x0040E3A4: lw          $v0, 0x510($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X510);
    // 0x0040E3A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040E3AC: j           L_0040E418
    // 0x0040E3B0: sw          $v0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r2;
        goto L_0040E418;
    // 0x0040E3B0: sw          $v0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r2;
L_0040E3B4:
    // 0x0040E3B4: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x0040E3B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040E3BC: sw          $v0, 0x514($s0)
    MEM_W(0X514, ctx->r16) = ctx->r2;
    // 0x0040E3C0: lw          $v1, 0x110($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X110);
    // 0x0040E3C4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040E3C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E3CC: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x0040E3D0: bne         $v0, $zero, L_0040E3DC
    if (ctx->r2 != 0) {
        // 0x0040E3D4: nop
    
            goto L_0040E3DC;
    }
    // 0x0040E3D4: nop

    // 0x0040E3D8: break       7
    do_break(4252632);
L_0040E3DC:
    // 0x0040E3DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0040E3E0: bne         $v0, $at, L_0040E3F4
    if (ctx->r2 != ctx->r1) {
        // 0x0040E3E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0040E3F4;
    }
    // 0x0040E3E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0040E3E8: bne         $v1, $at, L_0040E3F4
    if (ctx->r3 != ctx->r1) {
        // 0x0040E3EC: nop
    
            goto L_0040E3F4;
    }
    // 0x0040E3EC: nop

    // 0x0040E3F0: break       6
    do_break(4252656);
L_0040E3F4:
    // 0x0040E3F4: mfhi        $v0
    ctx->r2 = hi;
    // 0x0040E3F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040E3FC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0040E400: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    // 0x0040E404: lw          $v0, 0x24C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24C);
    // 0x0040E408: bne         $v0, $zero, L_0040E418
    if (ctx->r2 != 0) {
        // 0x0040E40C: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_0040E418;
    }
    // 0x0040E40C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040E410: jal         0x00243414
    // 0x0040E414: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040E414: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_0040E418:
    // 0x0040E418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040E41C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040E420: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040E424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E428: jr          $ra
    // 0x0040E42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040E42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025E47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E47C: lw          $v0, 0x114($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X114);
    // 0x0025E480: jr          $ra
    // 0x0025E484: nop

    return;
    // 0x0025E484: nop

;}
RECOMP_FUNC void func_0029DD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DD10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029DD14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029DD18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029DD1C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029DD20: addiu       $s0, $s0, 0x4DB8
    ctx->r16 = ADD32(ctx->r16, 0X4DB8);
    // 0x0029DD24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029DD28: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0029DD2C: addiu       $a1, $a1, 0x4DB0
    ctx->r5 = ADD32(ctx->r5, 0X4DB0);
    // 0x0029DD30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029DD34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029DD38: sw          $v0, -0x7670($at)
    MEM_W(-0X7670, ctx->r1) = ctx->r2;
    // 0x0029DD3C: jal         0x0029B030
    // 0x0029DD40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0029DD40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0029DD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029DD48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029DD4C: jal         0x0029B820
    // 0x0029DD50: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0029DD50: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x0029DD54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029DD58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DD5C: jr          $ra
    // 0x0029DD60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029DD60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002560BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002560BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002560C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002560C4: jal         0x00251698
    // 0x002560C8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x002560C8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
    // 0x002560CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002560D0: jr          $ra
    // 0x002560D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002560D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256FD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00256FDC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00256FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00256FE4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00256FE8: beq         $a1, $zero, L_00257004
    if (ctx->r5 == 0) {
        // 0x00256FEC: nop
    
            goto L_00257004;
    }
    // 0x00256FEC: nop

    // 0x00256FF0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00256FF4: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x00256FF8: jal         0x00228B4C
    // 0x00256FFC: nop

    func_00228B4C(rdram, ctx);
        goto after_0;
    // 0x00256FFC: nop

    after_0:
    // 0x00257000: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_00257004:
    // 0x00257004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00257008: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025700C: jr          $ra
    // 0x00257010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00257010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00225210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225210: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00225214: lw          $a2, 0x1168($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X1168);
    // 0x00225218: lw          $v1, 0x1178($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1178);
    // 0x0022521C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00225220: beq         $a2, $v0, L_0022525C
    if (ctx->r6 == ctx->r2) {
        // 0x00225224: addiu       $v1, $v1, 0xE
        ctx->r3 = ADD32(ctx->r3, 0XE);
            goto L_0022525C;
    }
    // 0x00225224: addiu       $v1, $v1, 0xE
    ctx->r3 = ADD32(ctx->r3, 0XE);
    // 0x00225228: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_0022522C:
    // 0x0022522C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x00225230: bne         $v0, $a1, L_00225250
    if (ctx->r2 != ctx->r5) {
        // 0x00225234: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00225250;
    }
    // 0x00225234: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00225238: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0022523C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00225240: bne         $v0, $zero, L_00225250
    if (ctx->r2 != 0) {
        // 0x00225244: nop
    
            goto L_00225250;
    }
    // 0x00225244: nop

L_00225248:
    // 0x00225248: jr          $ra
    // 0x0022524C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0022524C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00225250:
    // 0x00225250: bne         $a2, $a3, L_0022522C
    if (ctx->r6 != ctx->r7) {
        // 0x00225254: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_0022522C;
    }
    // 0x00225254: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x00225258: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0022525C:
    // 0x0022525C: lw          $a2, 0x116C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X116C);
    // 0x00225260: lw          $v1, 0x117C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X117C);
    // 0x00225264: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00225268: beq         $a2, $v0, L_00225298
    if (ctx->r6 == ctx->r2) {
        // 0x0022526C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00225298;
    }
    // 0x0022526C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00225270: addiu       $v1, $v1, 0xE
    ctx->r3 = ADD32(ctx->r3, 0XE);
L_00225274:
    // 0x00225274: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x00225278: bne         $v0, $a1, L_00225290
    if (ctx->r2 != ctx->r5) {
        // 0x0022527C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00225290;
    }
    // 0x0022527C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00225280: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00225284: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00225288: beq         $v0, $zero, L_00225248
    if (ctx->r2 == 0) {
        // 0x0022528C: nop
    
            goto L_00225248;
    }
    // 0x0022528C: nop

L_00225290:
    // 0x00225290: bne         $a2, $a0, L_00225274
    if (ctx->r6 != ctx->r4) {
        // 0x00225294: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_00225274;
    }
    // 0x00225294: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_00225298:
    // 0x00225298: jr          $ra
    // 0x0022529C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0022529C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_002182EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002182EC: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x002182F0: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002182F4: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x002182F8: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x002182FC: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00218300: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00218304: mflo        $a3
    ctx->r7 = lo;
    // 0x00218308: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x0021830C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00218310: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x00218314: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00218318: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021831C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x00218320: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00218324: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00218328: beq         $a0, $zero, L_00218340
    if (ctx->r4 == 0) {
        // 0x0021832C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00218340;
    }
    // 0x0021832C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00218330: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x00218334: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00218338: sllv        $a1, $a1, $v0
    ctx->r5 = S32(ctx->r5 << (ctx->r2 & 31));
    // 0x0021833C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
L_00218340:
    // 0x00218340: sltiu       $v0, $a2, 0x20
    ctx->r2 = ctx->r6 < 0X20 ? 1 : 0;
    // 0x00218344: beql        $v0, $zero, L_00218360
    if (ctx->r2 == 0) {
        // 0x00218348: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00218360;
    }
    goto skip_0;
    // 0x00218348: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x0021834C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218350: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00218354: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00218358: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0021835C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00218360:
    // 0x00218360: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00218364: jr          $ra
    // 0x00218368: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    return;
    // 0x00218368: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
;}
RECOMP_FUNC void func_0027C074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027C074: lw          $v1, 0x52C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X52C);
    // 0x0027C078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027C07C: beq         $v1, $v0, L_0027C0A4
    if (ctx->r3 == ctx->r2) {
        // 0x0027C080: nop
    
            goto L_0027C0A4;
    }
    // 0x0027C080: nop

    // 0x0027C084: beq         $v1, $zero, L_0027C1D0
    if (ctx->r3 == 0) {
        // 0x0027C088: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0027C1D0;
    }
    // 0x0027C088: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027C08C: beq         $v1, $v0, L_0027C110
    if (ctx->r3 == ctx->r2) {
        // 0x0027C090: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0027C110;
    }
    // 0x0027C090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0027C094: beq         $v1, $v0, L_0027C144
    if (ctx->r3 == ctx->r2) {
        // 0x0027C098: nop
    
            goto L_0027C144;
    }
    // 0x0027C098: nop

    // 0x0027C09C: j           L_0027C1D0
    // 0x0027C0A0: nop

        goto L_0027C1D0;
    // 0x0027C0A0: nop

L_0027C0A4:
    // 0x0027C0A4: lbu         $v0, 0x533($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X533);
    // 0x0027C0A8: lwc1        $f1, 0x520($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X520);
    // 0x0027C0AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027C0B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C0B4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027C0B8: nop

    // 0x0027C0BC: bc1f        L_0027C0D4
    if (!c1cs) {
        // 0x0027C0C0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0027C0D4;
    }
    // 0x0027C0C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0027C0C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027C0C8: sw          $v0, 0x52C($a0)
    MEM_W(0X52C, ctx->r4) = ctx->r2;
    // 0x0027C0CC: j           L_0027C110
    // 0x0027C0D0: sw          $zero, 0x520($a0)
    MEM_W(0X520, ctx->r4) = 0;
        goto L_0027C110;
    // 0x0027C0D0: sw          $zero, 0x520($a0)
    MEM_W(0X520, ctx->r4) = 0;
L_0027C0D4:
    // 0x0027C0D4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027C0D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C0DC: lbu         $v0, 0x532($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X532);
    // 0x0027C0E0: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027C0E4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027C0E8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027C0EC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027C0F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C0F4: lwc1        $f1, -0x6804($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6804);
    // 0x0027C0F8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C0FC: nop

    // 0x0027C100: bc1f        L_0027C1AC
    if (!c1cs) {
        // 0x0027C104: nop
    
            goto L_0027C1AC;
    }
    // 0x0027C104: nop

    // 0x0027C108: j           L_0027C1BC
    // 0x0027C10C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_0027C1BC;
    // 0x0027C10C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0027C110:
    // 0x0027C110: lbu         $v0, 0x534($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X534);
    // 0x0027C114: lwc1        $f1, 0x520($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X520);
    // 0x0027C118: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027C11C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C120: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0027C124: nop

    // 0x0027C128: bc1t        L_0027C13C
    if (c1cs) {
        // 0x0027C12C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0027C13C;
    }
    // 0x0027C12C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0027C130: lbu         $v0, 0x532($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X532);
    // 0x0027C134: j           L_0027C1D0
    // 0x0027C138: sb          $v0, 0x539($a0)
    MEM_B(0X539, ctx->r4) = ctx->r2;
        goto L_0027C1D0;
    // 0x0027C138: sb          $v0, 0x539($a0)
    MEM_B(0X539, ctx->r4) = ctx->r2;
L_0027C13C:
    // 0x0027C13C: sw          $v0, 0x52C($a0)
    MEM_W(0X52C, ctx->r4) = ctx->r2;
    // 0x0027C140: sw          $zero, 0x520($a0)
    MEM_W(0X520, ctx->r4) = 0;
L_0027C144:
    // 0x0027C144: lbu         $v1, 0x535($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X535);
    // 0x0027C148: lwc1        $f2, 0x520($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X520);
    // 0x0027C14C: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0027C150: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C154: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0027C158: nop

    // 0x0027C15C: bc1f        L_0027C170
    if (!c1cs) {
        // 0x0027C160: nop
    
            goto L_0027C170;
    }
    // 0x0027C160: nop

    // 0x0027C164: sw          $zero, 0x52C($a0)
    MEM_W(0X52C, ctx->r4) = 0;
    // 0x0027C168: j           L_0027C1D0
    // 0x0027C16C: sw          $zero, 0x520($a0)
    MEM_W(0X520, ctx->r4) = 0;
        goto L_0027C1D0;
    // 0x0027C16C: sw          $zero, 0x520($a0)
    MEM_W(0X520, ctx->r4) = 0;
L_0027C170:
    // 0x0027C170: lbu         $v0, 0x532($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X532);
    // 0x0027C174: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027C178: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027C17C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x0027C180: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027C184: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027C188: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0027C18C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027C190: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0027C194: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C198: lwc1        $f1, -0x6800($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6800);
    // 0x0027C19C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027C1A0: nop

    // 0x0027C1A4: bc1tl       L_0027C1BC
    if (c1cs) {
        // 0x0027C1A8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027C1BC;
    }
    goto skip_0;
    // 0x0027C1A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
L_0027C1AC:
    // 0x0027C1AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C1B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0027C1B4: j           L_0027C1D0
    // 0x0027C1B8: sb          $v1, 0x539($a0)
    MEM_B(0X539, ctx->r4) = ctx->r3;
        goto L_0027C1D0;
    // 0x0027C1B8: sb          $v1, 0x539($a0)
    MEM_B(0X539, ctx->r4) = ctx->r3;
L_0027C1BC:
    // 0x0027C1BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027C1C0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027C1C4: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0027C1C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027C1CC: sb          $v1, 0x539($a0)
    MEM_B(0X539, ctx->r4) = ctx->r3;
L_0027C1D0:
    // 0x0027C1D0: lwc1        $f0, 0x520($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X520);
    // 0x0027C1D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027C1D8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0027C1DC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027C1E0: jr          $ra
    // 0x0027C1E4: swc1        $f0, 0x520($a0)
    MEM_W(0X520, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0027C1E4: swc1        $f0, 0x520($a0)
    MEM_W(0X520, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0045108C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045108C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00451090: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00451094: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00451098: addiu       $a2, $a2, -0x4D7C
    ctx->r6 = ADD32(ctx->r6, -0X4D7C);
    // 0x0045109C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004510A0: jal         0x00416894
    // 0x004510A4: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004510A4: nop

    after_0:
    // 0x004510A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004510AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004510B0: jr          $ra
    // 0x004510B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004510B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029F178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F178: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0029F17C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // turok2: reconnected split function: a stray ELF symbol at 0x0029F180 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029F180(rdram, ctx);
;}
RECOMP_FUNC void func_00248720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00248720: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x00248724: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x00248728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024872C: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x00248730: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x00248734: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x00248738: lhu         $v0, 0xA08($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA08);
    // 0x0024873C: lw          $s2, 0x51C($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X51C);
    // 0x00248740: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00248744: bne         $v0, $zero, L_00248A74
    if (ctx->r2 != 0) {
        // 0x00248748: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00248A74;
    }
    // 0x00248748: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024874C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x00248750: jal         0x0021AE6C
    // 0x00248754: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0021AE6C(rdram, ctx);
        goto after_0;
    // 0x00248754: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00248758: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x0024875C: jal         0x0025398C
    // 0x00248760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025398C(rdram, ctx);
        goto after_1;
    // 0x00248760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00248764: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00248768: beq         $a1, $zero, L_00248884
    if (ctx->r5 == 0) {
        // 0x0024876C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00248884;
    }
    // 0x0024876C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00248770: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00248774: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00248778: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024877C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00248780: lw          $v1, -0x9E8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X9E8);
L_00248784:
    // 0x00248784: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00248788: beql        $v0, $zero, L_002487B4
    if (ctx->r2 == 0) {
        // 0x0024878C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002487B4;
    }
    goto skip_0;
    // 0x0024878C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00248790: lh          $v0, 0x4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4);
    // 0x00248794: bnel        $v0, $s1, L_002487A4
    if (ctx->r2 != ctx->r17) {
        // 0x00248798: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_002487A4;
    }
    goto skip_1;
    // 0x00248798: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x0024879C: j           L_002487B4
    // 0x002487A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002487B4;
    // 0x002487A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002487A4:
    // 0x002487A4: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x002487A8: bne         $v0, $zero, L_00248784
    if (ctx->r2 != 0) {
        // 0x002487AC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00248784;
    }
    // 0x002487AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002487B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002487B4:
    // 0x002487B4: beq         $v0, $zero, L_00248884
    if (ctx->r2 == 0) {
        // 0x002487B8: nop
    
            goto L_00248884;
    }
    // 0x002487B8: nop

    // 0x002487BC: lw          $t0, 0xB7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XB7C);
    // 0x002487C0: lw          $t1, 0xB80($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XB80);
    // 0x002487C4: lw          $t2, 0xB84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XB84);
    // 0x002487C8: lw          $t3, 0xB88($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XB88);
    // 0x002487CC: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x002487D0: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x002487D4: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x002487D8: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x002487DC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x002487E0: lhu         $v1, 0x6($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X6);
    // 0x002487E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002487E8: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x002487EC: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x002487F0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x002487F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002487F8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x002487FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00248800: bgez        $v0, L_0024880C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00248804: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0024880C;
    }
    // 0x00248804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00248808: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_0024880C:
    // 0x0024880C: lw          $v1, 0xC04($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC04);
    // 0x00248810: lh          $s1, 0x4($a1)
    ctx->r17 = MEM_H(ctx->r5, 0X4);
    // 0x00248814: bne         $v1, $a2, L_00248824
    if (ctx->r3 != ctx->r6) {
        // 0x00248818: addiu       $v0, $zero, 0x1130
        ctx->r2 = ADD32(0, 0X1130);
            goto L_00248824;
    }
    // 0x00248818: addiu       $v0, $zero, 0x1130
    ctx->r2 = ADD32(0, 0X1130);
    // 0x0024881C: j           L_00248880
    // 0x00248820: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
        goto L_00248880;
    // 0x00248820: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_00248824:
    // 0x00248824: beq         $v1, $v0, L_0024885C
    if (ctx->r3 == ctx->r2) {
        // 0x00248828: addiu       $v0, $zero, 0xA28
        ctx->r2 = ADD32(0, 0XA28);
            goto L_0024885C;
    }
    // 0x00248828: addiu       $v0, $zero, 0xA28
    ctx->r2 = ADD32(0, 0XA28);
    // 0x0024882C: bne         $v1, $v0, L_0024883C
    if (ctx->r3 != ctx->r2) {
        // 0x00248830: addiu       $v0, $zero, 0x1135
        ctx->r2 = ADD32(0, 0X1135);
            goto L_0024883C;
    }
    // 0x00248830: addiu       $v0, $zero, 0x1135
    ctx->r2 = ADD32(0, 0X1135);
    // 0x00248834: j           L_00248880
    // 0x00248838: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
        goto L_00248880;
    // 0x00248838: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_0024883C:
    // 0x0024883C: beq         $v1, $v0, L_0024885C
    if (ctx->r3 == ctx->r2) {
        // 0x00248840: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_0024885C;
    }
    // 0x00248840: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00248844: bne         $v1, $v0, L_00248854
    if (ctx->r3 != ctx->r2) {
        // 0x00248848: addiu       $v0, $zero, 0x1144
        ctx->r2 = ADD32(0, 0X1144);
            goto L_00248854;
    }
    // 0x00248848: addiu       $v0, $zero, 0x1144
    ctx->r2 = ADD32(0, 0X1144);
    // 0x0024884C: j           L_00248880
    // 0x00248850: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
        goto L_00248880;
    // 0x00248850: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_00248854:
    // 0x00248854: bnel        $v1, $v0, L_00248884
    if (ctx->r3 != ctx->r2) {
        // 0x00248858: sb          $zero, 0xE2($s0)
        MEM_B(0XE2, ctx->r16) = 0;
            goto L_00248884;
    }
    goto skip_2;
    // 0x00248858: sb          $zero, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = 0;
    skip_2:
L_0024885C:
    // 0x0024885C: lwc1        $f0, 0xD8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x00248860: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00248864: lwc1        $f1, 0x6AB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6AB4);
    // 0x00248868: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0024886C: nop

    // 0x00248870: bc1fl       L_00248884
    if (!c1cs) {
        // 0x00248874: sb          $zero, 0xE2($s0)
        MEM_B(0XE2, ctx->r16) = 0;
            goto L_00248884;
    }
    goto skip_3;
    // 0x00248874: sb          $zero, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = 0;
    skip_3:
    // 0x00248878: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024887C: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
L_00248880:
    // 0x00248880: sb          $zero, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = 0;
L_00248884:
    // 0x00248884: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248888: lwc1        $f0, -0x1CB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1CB0);
    // 0x0024888C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248890: swc1        $f0, -0x31F0($at)
    MEM_W(-0X31F0, ctx->r1) = ctx->f0.u32l;
    // 0x00248894: beq         $s2, $zero, L_002488BC
    if (ctx->r18 == 0) {
        // 0x00248898: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002488BC;
    }
    // 0x00248898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024889C: lw          $t0, 0x114($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X114);
    // 0x002488A0: lw          $t1, 0x118($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X118);
    // 0x002488A4: lw          $t2, 0x11C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X11C);
    // 0x002488A8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x002488AC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x002488B0: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x002488B4: j           L_002488D4
    // 0x002488B8: nop

        goto L_002488D4;
    // 0x002488B8: nop

L_002488BC:
    // 0x002488BC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x002488C0: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x002488C4: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x002488C8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x002488CC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x002488D0: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
L_002488D4:
    // 0x002488D4: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x002488D8: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x002488DC: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x002488E0: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x002488E4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x002488E8: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002488EC: lw          $v0, 0xB2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB2C);
    // 0x002488F0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x002488F4: bne         $v0, $a0, L_00248900
    if (ctx->r2 != ctx->r4) {
        // 0x002488F8: nop
    
            goto L_00248900;
    }
    // 0x002488F8: nop

    // 0x002488FC: lw          $a1, 0xB38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB38);
L_00248900:
    // 0x00248900: lwc1        $f0, 0x1294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1294);
    // 0x00248904: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x00248908: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024890C: swc1        $f0, -0x31EC($at)
    MEM_W(-0X31EC, ctx->r1) = ctx->f0.u32l;
    // 0x00248910: beq         $v0, $zero, L_00248978
    if (ctx->r2 == 0) {
        // 0x00248914: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_00248978;
    }
    // 0x00248914: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00248918: lh          $v1, 0x996($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X996);
    // 0x0024891C: beq         $v1, $v0, L_00248950
    if (ctx->r3 == ctx->r2) {
        // 0x00248920: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_00248950;
    }
    // 0x00248920: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x00248924: beq         $v0, $zero, L_0024893C
    if (ctx->r2 == 0) {
        // 0x00248928: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024893C;
    }
    // 0x00248928: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024892C: beq         $v1, $v0, L_00248960
    if (ctx->r3 == ctx->r2) {
        // 0x00248930: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00248960;
    }
    // 0x00248930: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00248934: j           L_0024897C
    // 0x00248938: nop

        goto L_0024897C;
    // 0x00248938: nop

L_0024893C:
    // 0x0024893C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x00248940: beq         $v1, $v0, L_00248958
    if (ctx->r3 == ctx->r2) {
        // 0x00248944: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00248958;
    }
    // 0x00248944: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00248948: j           L_0024897C
    // 0x0024894C: nop

        goto L_0024897C;
    // 0x0024894C: nop

L_00248950:
    // 0x00248950: j           L_00248978
    // 0x00248954: addiu       $s1, $zero, 0x110
    ctx->r17 = ADD32(0, 0X110);
        goto L_00248978;
    // 0x00248954: addiu       $s1, $zero, 0x110
    ctx->r17 = ADD32(0, 0X110);
L_00248958:
    // 0x00248958: j           L_00248978
    // 0x0024895C: addiu       $s1, $zero, 0x13A
    ctx->r17 = ADD32(0, 0X13A);
        goto L_00248978;
    // 0x0024895C: addiu       $s1, $zero, 0x13A
    ctx->r17 = ADD32(0, 0X13A);
L_00248960:
    // 0x00248960: bne         $s1, $a0, L_00248970
    if (ctx->r17 != ctx->r4) {
        // 0x00248964: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_00248970;
    }
    // 0x00248964: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x00248968: j           L_00248978
    // 0x0024896C: addiu       $s1, $zero, 0x111
    ctx->r17 = ADD32(0, 0X111);
        goto L_00248978;
    // 0x0024896C: addiu       $s1, $zero, 0x111
    ctx->r17 = ADD32(0, 0X111);
L_00248970:
    // 0x00248970: beql        $s1, $v0, L_00248978
    if (ctx->r17 == ctx->r2) {
        // 0x00248974: addiu       $s1, $zero, 0x126
        ctx->r17 = ADD32(0, 0X126);
            goto L_00248978;
    }
    goto skip_4;
    // 0x00248974: addiu       $s1, $zero, 0x126
    ctx->r17 = ADD32(0, 0X126);
    skip_4:
L_00248978:
    // 0x00248978: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0024897C:
    // 0x0024897C: bne         $s1, $v0, L_002489C0
    if (ctx->r17 != ctx->r2) {
        // 0x00248980: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002489C0;
    }
    // 0x00248980: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00248984: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248988: lwc1        $f1, -0x31EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X31EC);
    // 0x0024898C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00248990: lwc1        $f0, 0x6AB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AB8);
    // 0x00248994: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00248998: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024899C: nop

    // 0x002489A0: bc1t        L_002489C0
    if (c1cs) {
        // 0x002489A4: addiu       $s1, $zero, 0x1D2
        ctx->r17 = ADD32(0, 0X1D2);
            goto L_002489C0;
    }
    // 0x002489A4: addiu       $s1, $zero, 0x1D2
    ctx->r17 = ADD32(0, 0X1D2);
    // 0x002489A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002489AC: lwc1        $f0, 0x6ABC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6ABC);
    // 0x002489B0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002489B4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002489B8: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x002489BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002489C0:
    // 0x002489C0: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x002489C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002489C8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x002489CC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x002489D0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x002489D4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002489D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002489DC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x002489E0: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x002489E4: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x002489E8: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x002489EC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x002489F0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x002489F4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x002489F8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x002489FC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00248A00: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00248A04: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00248A08: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00248A0C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00248A10: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00248A14: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00248A18: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x00248A1C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00248A20: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00248A24: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00248A28: bne         $v0, $zero, L_00248A34
    if (ctx->r2 != 0) {
        // 0x00248A2C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00248A34;
    }
    // 0x00248A2C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00248A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00248A34:
    // 0x00248A34: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x00248A38: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00248A3C: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x00248A40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00248A44: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00248A48: jal         0x0022F350
    // 0x00248A4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0022F350(rdram, ctx);
        goto after_2;
    // 0x00248A4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x00248A50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00248A54: lwc1        $f0, 0x6AC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC0);
    // 0x00248A58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248A5C: swc1        $f0, -0x31F0($at)
    MEM_W(-0X31F0, ctx->r1) = ctx->f0.u32l;
    // 0x00248A60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248A64: swc1        $f0, -0x1CB0($at)
    MEM_W(-0X1CB0, ctx->r1) = ctx->f0.u32l;
    // 0x00248A68: swc1        $f0, 0x1294($s0)
    MEM_W(0X1294, ctx->r16) = ctx->f0.u32l;
    // 0x00248A6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248A70: swc1        $f0, -0x31EC($at)
    MEM_W(-0X31EC, ctx->r1) = ctx->f0.u32l;
L_00248A74:
    // 0x00248A74: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x00248A78: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x00248A7C: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x00248A80: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x00248A84: jr          $ra
    // 0x00248A88: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x00248A88: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00296340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
;}
RECOMP_FUNC void func_00294B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294B58: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00294B5C: lw          $a0, 0x7760($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7760);
    // 0x00294B60: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00294B64: beq         $v0, $zero, L_00294B7C
    if (ctx->r2 == 0) {
        // 0x00294B68: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00294B7C;
    }
    // 0x00294B68: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00294B6C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00294B70: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00294B74: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x00294B78: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_00294B7C:
    // 0x00294B7C: jr          $ra
    // 0x00294B80: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00294B80: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00201C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00201C64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00201C68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00201C6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00201C70: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
L_00201C74:
    // 0x00201C74: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00201C78: jal         0x0029B6F0
    // 0x00201C7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00201C7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00201C80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00201C84: lw          $v0, 0x6D18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D18);
    // 0x00201C88: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00201C8C: sw          $v0, 0x1448($s0)
    MEM_W(0X1448, ctx->r16) = ctx->r2;
    // 0x00201C90: lw          $a0, 0x18($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X18);
    // 0x00201C94: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00201C98: jalr        $v0
    // 0x00201C9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00201C9C: nop

    after_1:
    // 0x00201CA0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00201CA4: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x00201CA8: jal         0x0029B820
    // 0x00201CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00201CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00201CB0: j           L_00201C74
    // 0x00201CB4: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
        goto L_00201C74;
    // 0x00201CB4: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
    // 0x00201CB8: daddiu      $t7, $t2, 0x626A
    ctx->r15 = ctx->r10 + 0X626A;
    // 0x00201CBC: daddiu      $v1, $t3, 0x7449
    ctx->r3 = ctx->r11 + 0X7449;
;}
RECOMP_FUNC void func_0027580C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275810: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00275814: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x00275818: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0027581C: bne         $v0, $zero, L_00275834
    if (ctx->r2 != 0) {
        // 0x00275820: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00275834;
    }
    // 0x00275820: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275824: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275828: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x0027582C: jal         0x00271AC4
    // 0x00275830: nop

    func_00271AC4(rdram, ctx);
        goto after_0;
    // 0x00275830: nop

    after_0:
L_00275834:
    // 0x00275834: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275838: jr          $ra
    // 0x0027583C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027583C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040BC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BC64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040BC68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0040BC6C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040BC70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0040BC74: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040BC78: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0040BC7C: jal         0x0025AD90
    // 0x0040BC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0025AD90(rdram, ctx);
        goto after_0;
    // 0x0040BC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0040BC84: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x0040BC88: beq         $v0, $zero, L_0040BCA4
    if (ctx->r2 == 0) {
        // 0x0040BC8C: nop
    
            goto L_0040BCA4;
    }
    // 0x0040BC8C: nop

    // 0x0040BC90: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0040BC94: beq         $v0, $zero, L_0040BCA4
    if (ctx->r2 == 0) {
        // 0x0040BC98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BCA4;
    }
    // 0x0040BC98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BC9C: jalr        $v0
    // 0x0040BCA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0040BCA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0040BCA4:
    // 0x0040BCA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040BCA8: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x0040BCAC: lw          $v0, 0x65C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X65C);
    // 0x0040BCB0: bne         $v0, $zero, L_0040BCEC
    if (ctx->r2 != 0) {
        // 0x0040BCB4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BCEC;
    }
    // 0x0040BCB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BCB8: jal         0x0040BD60
    // 0x0040BCBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0040BD60(rdram, ctx);
        goto after_2;
    // 0x0040BCBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x0040BCC0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0040BCC4: beq         $v0, $zero, L_0040BCEC
    if (ctx->r2 == 0) {
        // 0x0040BCC8: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0040BCEC;
    }
    // 0x0040BCC8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0040BCCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040BCD0: lwc1        $f0, 0x890($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X890);
    // 0x0040BCD4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040BCD8: nop

    // 0x0040BCDC: bc1f        L_0040BCEC
    if (!c1cs) {
        // 0x0040BCE0: nop
    
            goto L_0040BCEC;
    }
    // 0x0040BCE0: nop

    // 0x0040BCE4: jal         0x0040BD10
    // 0x0040BCE8: nop

    func_0040BD10(rdram, ctx);
        goto after_3;
    // 0x0040BCE8: nop

    after_3:
L_0040BCEC:
    // 0x0040BCEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040BCF0: addiu       $a0, $a0, -0x490
    ctx->r4 = ADD32(ctx->r4, -0X490);
    // 0x0040BCF4: jal         0x00409784
    // 0x0040BCF8: nop

    func_00409784(rdram, ctx);
        goto after_4;
    // 0x0040BCF8: nop

    after_4:
    // 0x0040BCFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040BD00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0040BD04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0040BD08: jr          $ra
    // 0x0040BD0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040BD0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00206658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206658: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0020665C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00206660: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x00206664: addiu       $s1, $s1, -0x7298
    ctx->r17 = ADD32(ctx->r17, -0X7298);
    // 0x00206668: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0020666C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206670: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00206674: beq         $s0, $zero, L_00206698
    if (ctx->r16 == 0) {
        // 0x00206678: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00206698;
    }
    // 0x00206678: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0020667C: jal         0x00200738
    // 0x00206680: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00206680: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00206684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00206688: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0020668C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x00206690: jal         0x00200518
    // 0x00206694: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00206694: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00206698:
    // 0x00206698: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0020669C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002066A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002066A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002066A8: jr          $ra
    // 0x002066AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002066AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025E434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E434: jr          $ra
    // 0x0025E438: sb          $a2, 0x133($a1)
    MEM_B(0X133, ctx->r5) = ctx->r6;
    return;
    // 0x0025E438: sb          $a2, 0x133($a1)
    MEM_B(0X133, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void func_0041C220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C224: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041C228: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C22C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C234: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C238: addiu       $s0, $s0, -0x5511
    ctx->r16 = ADD32(ctx->r16, -0X5511);
    // 0x0041C23C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0041C244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C248: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041C24C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0041C250: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C254: jal         0x0041648C
    // 0x0041C258: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C258: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041C25C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0041C260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C26C: jr          $ra
    // 0x0041C270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00256298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025629C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002562A0: jal         0x00255FF4
    // 0x002562A4: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x002562A4: nop

    after_0:
    // 0x002562A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002562AC: jr          $ra
    // 0x002562B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002562B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0022BD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022BD10: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0022BD14: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0022BD18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022BD1C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0022BD20: lw          $v1, 0x1DB4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1DB4);
    // 0x0022BD24: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0022BD28: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0022BD2C: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0022BD30: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0022BD34: beq         $v1, $v0, L_0022BD5C
    if (ctx->r3 == ctx->r2) {
        // 0x0022BD38: sw          $s1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r17;
            goto L_0022BD5C;
    }
    // 0x0022BD38: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0022BD3C: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0022BD40: bne         $v0, $zero, L_0022BD60
    if (ctx->r2 != 0) {
        // 0x0022BD44: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0022BD60;
    }
    // 0x0022BD44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0022BD48: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0022BD4C: beql        $v1, $v0, L_0022BD60
    if (ctx->r3 == ctx->r2) {
        // 0x0022BD50: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_0022BD60;
    }
    goto skip_0;
    // 0x0022BD50: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    skip_0:
    // 0x0022BD54: j           L_0022BD64
    // 0x0022BD58: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
        goto L_0022BD64;
    // 0x0022BD58: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
L_0022BD5C:
    // 0x0022BD5C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_0022BD60:
    // 0x0022BD60: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
L_0022BD64:
    // 0x0022BD64: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022BD68: lw          $a2, 0xF8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF8);
    // 0x0022BD6C: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x0022BD70: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0022BD74: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022BD78: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0022BD7C: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022BD80: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x0022BD84: lhu         $v1, 0x8C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022BD88: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022BD8C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022BD90: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022BD94: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x0022BD98: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x0022BD9C: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022BDA0: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x0022BDA4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022BDA8: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022BDAC: beq         $v1, $s1, L_0022BDF4
    if (ctx->r3 == ctx->r17) {
        // 0x0022BDB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022BDF4;
    }
    // 0x0022BDB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022BDB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022BDB8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0022BDBC: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022BDC0: addiu       $t3, $t3, 0x1DA8
    ctx->r11 = ADD32(ctx->r11, 0X1DA8);
    // 0x0022BDC4: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022BDC8: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022BDCC: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022BDD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022BDD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022BDD8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022BDDC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0022BDE0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0022BDE4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022BDE8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022BDEC: jal         0x00236EA0
    // 0x0022BDF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_0;
    // 0x0022BDF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
L_0022BDF4:
    // 0x0022BDF4: beq         $s2, $s1, L_0022BF18
    if (ctx->r18 == ctx->r17) {
        // 0x0022BDF8: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_0022BF18;
    }
    // 0x0022BDF8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0022BDFC: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x0022BE00: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022BE04: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0022BE08: beq         $v0, $zero, L_0022BE38
    if (ctx->r2 == 0) {
        // 0x0022BE0C: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_0022BE38;
    }
    // 0x0022BE0C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x0022BE10: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022BE14: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x0022BE18: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022BE1C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022BE20: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022BE24: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022BE28: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022BE2C: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x0022BE30: j           L_0022BE50
    // 0x0022BE34: nop

        goto L_0022BE50;
    // 0x0022BE34: nop

L_0022BE38:
    // 0x0022BE38: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x0022BE3C: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0022BE40: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x0022BE44: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022BE48: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022BE4C: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_0022BE50:
    // 0x0022BE50: jal         0x0020E810
    // 0x0022BE54: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_0020E810(rdram, ctx);
        goto after_1;
    // 0x0022BE54: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x0022BE58: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0022BE5C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0022BE60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022BE64: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x0022BE68: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x0022BE6C: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x0022BE70: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0022BE74: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0022BE78: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0022BE7C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x0022BE80: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0022BE84: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x0022BE88: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x0022BE8C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022BE90: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0022BE94: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0022BE98: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0022BE9C: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022BEA0: addiu       $t3, $t3, 0x1DA8
    ctx->r11 = ADD32(ctx->r11, 0X1DA8);
    // 0x0022BEA4: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022BEA8: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022BEAC: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022BEB0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0022BEB4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0022BEB8: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0022BEBC: lw          $v0, 0x190($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X190);
    // 0x0022BEC0: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0022BEC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022BEC8: bnel        $v0, $zero, L_0022BEDC
    if (ctx->r2 != 0) {
        // 0x0022BECC: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_0022BEDC;
    }
    goto skip_1;
    // 0x0022BECC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    skip_1:
    // 0x0022BED0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022BED4: lw          $v0, 0x1DA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1DA4);
    // 0x0022BED8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_0022BEDC:
    // 0x0022BEDC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x0022BEE0: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x0022BEE4: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x0022BEE8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x0022BEEC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022BEF0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022BEF4: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022BEF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022BEFC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0022BF00: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0022BF04: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x0022BF08: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x0022BF0C: jal         0x0022F350
    // 0x0022BF10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_2;
    // 0x0022BF10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0022BF14: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_0022BF18:
    // 0x0022BF18: beq         $s3, $v0, L_0022BF48
    if (ctx->r19 == ctx->r2) {
        // 0x0022BF1C: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_0022BF48;
    }
    // 0x0022BF1C: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x0022BF20: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022BF24: addiu       $v0, $v0, 0x1DA8
    ctx->r2 = ADD32(ctx->r2, 0X1DA8);
    // 0x0022BF28: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0022BF2C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022BF30: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022BF34: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022BF38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022BF3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022BF40: jal         0x00275544
    // 0x0022BF44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0022BF44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
L_0022BF48:
    // 0x0022BF48: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022BF4C: lw          $v1, 0xF8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF8);
    // 0x0022BF50: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x0022BF54: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0022BF58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0022BF5C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0022BF60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022BF64: beq         $v0, $zero, L_0022BF84
    if (ctx->r2 == 0) {
        // 0x0022BF68: nop
    
            goto L_0022BF84;
    }
    // 0x0022BF68: nop

    // 0x0022BF6C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022BF70: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022BF74: jal         0x0022F1C8
    // 0x0022BF78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_4;
    // 0x0022BF78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0022BF7C: jal         0x00232B40
    // 0x0022BF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_5;
    // 0x0022BF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_0022BF84:
    // 0x0022BF84: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0022BF88: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0022BF8C: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0022BF90: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0022BF94: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0022BF98: jr          $ra
    // 0x0022BF9C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0022BF9C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_0024FE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024FE10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0024FE14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024FE18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024FE1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024FE20: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024FE24: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0024FE28: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0024FE2C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0024FE30: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024FE34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0024FE38: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x0024FE3C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x0024FE40: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0024FE44: jal         0x002117DC
    // 0x0024FE48: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x0024FE48: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    after_0:
    // 0x0024FE4C: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024FE50: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0024FE54: jal         0x002117DC
    // 0x0024FE58: addiu       $a0, $s0, 0xACC
    ctx->r4 = ADD32(ctx->r16, 0XACC);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x0024FE58: addiu       $a0, $s0, 0xACC
    ctx->r4 = ADD32(ctx->r16, 0XACC);
    after_1:
    // 0x0024FE5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FE60: lwc1        $f20, 0x6E74($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6E74);
    // 0x0024FE64: lwc1        $f12, 0xAD4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAD4);
    // 0x0024FE68: jal         0x0021170C
    // 0x0024FE6C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x0024FE6C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x0024FE70: lwc1        $f12, 0xAD8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAD8);
    // 0x0024FE74: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x0024FE78: jal         0x0021170C
    // 0x0024FE7C: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_3;
    // 0x0024FE7C: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x0024FE80: lwc1        $f20, 0xA78($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0024FE84: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
    // 0x0024FE88: nop

    // 0x0024FE8C: bc1f        L_0024FEAC
    if (!c1cs) {
        // 0x0024FE90: swc1        $f0, 0xAD8($s0)
        MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
            goto L_0024FEAC;
    }
    // 0x0024FE90: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    // 0x0024FE94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FE98: lwc1        $f1, 0x6E78($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E78);
    // 0x0024FE9C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x0024FEA0: mul.s       $f22, $f0, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FEA4: j           L_0024FEB8
    // 0x0024FEA8: nop

        goto L_0024FEB8;
    // 0x0024FEA8: nop

L_0024FEAC:
    // 0x0024FEAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FEB0: lwc1        $f0, 0x6E7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E7C);
    // 0x0024FEB4: mul.s       $f22, $f20, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_0024FEB8:
    // 0x0024FEB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024FEBC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0024FEC0: nop

    // 0x0024FEC4: bc1tl       L_0024FEE4
    if (c1cs) {
        // 0x0024FEC8: mov.s       $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
            goto L_0024FEE4;
    }
    goto skip_0;
    // 0x0024FEC8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    skip_0:
    // 0x0024FECC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FED0: lwc1        $f0, 0x6E80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E80);
    // 0x0024FED4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x0024FED8: nop

    // 0x0024FEDC: bc1tl       L_0024FEE4
    if (c1cs) {
        // 0x0024FEE0: mov.s       $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
            goto L_0024FEE4;
    }
    goto skip_1;
    // 0x0024FEE0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    skip_1:
L_0024FEE4:
    // 0x0024FEE4: lwc1        $f0, 0xA10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA10);
    // 0x0024FEE8: lwc1        $f1, 0xB28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB28);
    // 0x0024FEEC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FEF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FEF4: lwc1        $f1, 0x6E84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E84);
    // 0x0024FEF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FEFC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0024FF00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FF04: lwc1        $f1, 0x6E88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E88);
    // 0x0024FF08: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024FF0C: mul.s       $f23, $f0, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FF10: beq         $v0, $zero, L_0024FF30
    if (ctx->r2 == 0) {
        // 0x0024FF14: nop
    
            goto L_0024FF30;
    }
    // 0x0024FF14: nop

    // 0x0024FF18: lwc1        $f1, 0x30($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X30);
    // 0x0024FF1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FF20: lwc1        $f0, 0x6E8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E8C);
    // 0x0024FF24: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FF28: j           L_0024FF38
    // 0x0024FF2C: nop

        goto L_0024FF38;
    // 0x0024FF2C: nop

L_0024FF30:
    // 0x0024FF30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FF34: lwc1        $f20, 0x6E90($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6E90);
L_0024FF38:
    // 0x0024FF38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FF3C: lwc1        $f21, 0x6E94($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6E94);
    // 0x0024FF40: jal         0x002982F0
    // 0x0024FF44: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0024FF44: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    after_4:
    // 0x0024FF48: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0024FF4C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0024FF50: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024FF54: nop

    // 0x0024FF58: bc1f        L_0024FF7C
    if (!c1cs) {
        // 0x0024FF5C: nop
    
            goto L_0024FF7C;
    }
    // 0x0024FF5C: nop

    // 0x0024FF60: jal         0x002982F0
    // 0x0024FF64: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0024FF64: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    after_5:
    // 0x0024FF68: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0024FF6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024FF70: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024FF74: j           L_0024FF94
    // 0x0024FF78: sub.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f0.fl;
        goto L_0024FF94;
    // 0x0024FF78: sub.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f0.fl;
L_0024FF7C:
    // 0x0024FF7C: jal         0x002982F0
    // 0x0024FF80: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0024FF80: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    after_6:
    // 0x0024FF84: mul.s       $f1, $f22, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f21.fl);
    // 0x0024FF88: nop

    // 0x0024FF8C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FF90: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
L_0024FF94:
    // 0x0024FF94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FF98: lwc1        $f21, 0x6E98($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6E98);
    // 0x0024FF9C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0024FFA0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024FFA4: jal         0x002117DC
    // 0x0024FFA8: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    func_002117DC(rdram, ctx);
        goto after_7;
    // 0x0024FFA8: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    after_7:
    // 0x0024FFAC: jal         0x002974C0
    // 0x0024FFB0: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x0024FFB0: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    after_8:
    // 0x0024FFB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FFB8: lwc1        $f1, 0x6E9C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E9C);
    // 0x0024FFBC: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FFC0: nop

    // 0x0024FFC4: mul.s       $f20, $f22, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x0024FFC8: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024FFCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FFD0: lwc1        $f22, 0x6EA0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6EA0);
    // 0x0024FFD4: jal         0x002982F0
    // 0x0024FFD8: sub.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f22.fl;
    func_002982F0(rdram, ctx);
        goto after_9;
    // 0x0024FFD8: sub.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f22.fl;
    after_9:
    // 0x0024FFDC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024FFE0: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0024FFE4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024FFE8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0024FFEC: jal         0x002117DC
    // 0x0024FFF0: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    func_002117DC(rdram, ctx);
        goto after_10;
    // 0x0024FFF0: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_10:
    // 0x0024FFF4: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024FFF8: jal         0x002974C0
    // 0x0024FFFC: sub.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f22.fl;
    func_002974C0(rdram, ctx);
        goto after_11;
    // 0x0024FFFC: sub.s       $f12, $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f22.fl;
    after_11:
    // 0x00250000: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00250004: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250008: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0025000C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00250010: jal         0x002117DC
    // 0x00250014: addiu       $a0, $s0, 0xAE8
    ctx->r4 = ADD32(ctx->r16, 0XAE8);
    func_002117DC(rdram, ctx);
        goto after_12;
    // 0x00250014: addiu       $a0, $s0, 0xAE8
    ctx->r4 = ADD32(ctx->r16, 0XAE8);
    after_12:
    // 0x00250018: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025001C: lwc1        $f0, 0x6EA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EA4);
    // 0x00250020: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00250024: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00250028: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x0025002C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00250030: jal         0x002117DC
    // 0x00250034: addiu       $a0, $s0, 0xADC
    ctx->r4 = ADD32(ctx->r16, 0XADC);
    func_002117DC(rdram, ctx);
        goto after_13;
    // 0x00250034: addiu       $a0, $s0, 0xADC
    ctx->r4 = ADD32(ctx->r16, 0XADC);
    after_13:
    // 0x00250038: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025003C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00250040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00250044: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x00250048: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x0025004C: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00250050: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00250054: jr          $ra
    // 0x00250058: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00250058: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002A1844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002A1848: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A184C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002A1850: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1854: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A1858: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A185C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002A1860: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002A1864: beq         $s2, $zero, L_002A1900
    if (ctx->r18 == 0) {
        // 0x002A1868: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_002A1900;
    }
    // 0x002A1868: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A186C: andi        $v0, $s3, 0x3
    ctx->r2 = ctx->r19 & 0X3;
L_002A1870:
    // 0x002A1870: beq         $v0, $zero, L_002A1900
    if (ctx->r2 == 0) {
        // 0x002A1874: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002A1900;
    }
    // 0x002A1874: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002A1878: jal         0x002A1540
    // 0x002A187C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_002A1540(rdram, ctx);
        goto after_0;
    // 0x002A187C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_0:
    // 0x002A1880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1884: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1888: jal         0x002A1808
    // 0x002A188C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_002A1808(rdram, ctx);
        goto after_1;
    // 0x002A188C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x002A1890: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x002A1894: bne         $s2, $zero, L_002A1870
    if (ctx->r18 != 0) {
        // 0x002A1898: andi        $v0, $s3, 0x3
        ctx->r2 = ctx->r19 & 0X3;
            goto L_002A1870;
    }
    // 0x002A1898: andi        $v0, $s3, 0x3
    ctx->r2 = ctx->r19 & 0X3;
    // 0x002A189C: j           L_002A1904
    // 0x002A18A0: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
        goto L_002A1904;
    // 0x002A18A0: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
L_002A18A4:
    // 0x002A18A4: jal         0x002A1384
    // 0x002A18A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002A1384(rdram, ctx);
        goto after_2;
    // 0x002A18A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x002A18AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A18B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A18B4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A18B8: jal         0x002A1808
    // 0x002A18BC: srl         $a1, $s0, 24
    ctx->r5 = S32(U32(ctx->r16) >> 24);
    func_002A1808(rdram, ctx);
        goto after_3;
    // 0x002A18BC: srl         $a1, $s0, 24
    ctx->r5 = S32(U32(ctx->r16) >> 24);
    after_3:
    // 0x002A18C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A18C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A18C8: srl         $a1, $s0, 16
    ctx->r5 = S32(U32(ctx->r16) >> 16);
    // 0x002A18CC: jal         0x002A1808
    // 0x002A18D0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_002A1808(rdram, ctx);
        goto after_4;
    // 0x002A18D0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_4:
    // 0x002A18D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A18D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A18DC: srl         $a1, $s0, 8
    ctx->r5 = S32(U32(ctx->r16) >> 8);
    // 0x002A18E0: jal         0x002A1808
    // 0x002A18E4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_002A1808(rdram, ctx);
        goto after_5;
    // 0x002A18E4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_5:
    // 0x002A18E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A18EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A18F0: jal         0x002A1808
    // 0x002A18F4: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_002A1808(rdram, ctx);
        goto after_6;
    // 0x002A18F4: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_6:
    // 0x002A18F8: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x002A18FC: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
L_002A1900:
    // 0x002A1900: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
L_002A1904:
    // 0x002A1904: beq         $v0, $zero, L_002A18A4
    if (ctx->r2 == 0) {
        // 0x002A1908: nop
    
            goto L_002A18A4;
    }
    // 0x002A1908: nop

    // 0x002A190C: beq         $s2, $zero, L_002A1938
    if (ctx->r18 == 0) {
        // 0x002A1910: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002A1938;
    }
    // 0x002A1910: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002A1914:
    // 0x002A1914: jal         0x002A1540
    // 0x002A1918: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_002A1540(rdram, ctx);
        goto after_7;
    // 0x002A1918: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_7:
    // 0x002A191C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1920: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1924: jal         0x002A1808
    // 0x002A1928: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_002A1808(rdram, ctx);
        goto after_8;
    // 0x002A1928: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_8:
    // 0x002A192C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x002A1930: bne         $s2, $zero, L_002A1914
    if (ctx->r18 != 0) {
        // 0x002A1934: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002A1914;
    }
    // 0x002A1934: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002A1938:
    // 0x002A1938: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002A193C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A1940: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1944: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1948: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A194C: jr          $ra
    // 0x002A1950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002A1950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045B670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B670: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0045B674: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B678: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B67C: jr          $ra
    // 0x0045B680: nop

    return;
    // 0x0045B680: nop

;}
RECOMP_FUNC void func_002470E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002470E8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x002470EC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x002470F0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x002470F4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x002470F8: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    // 0x002470FC: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00247100: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00247104: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00247108: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x0024710C: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x00247110: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x00247114: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x00247118: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x0024711C: jr          $ra
    // 0x00247120: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    return;
    // 0x00247120: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00464960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042BC8C:
    // 0x00464960: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
L_0042BDF8:
    // 0x00464964: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x00464968: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x0046496C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00464970: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x00464974: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x00464978: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x0046497C: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x00464980: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x00464984: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x00464988: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x0046498C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x00464990: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x00464994: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x00464998: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x0046499C: jal         0x00200B00
    // 0x004649A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x004649A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x004649A4: beq         $v0, $zero, L_00464E34
    if (ctx->r2 == 0) {
        // 0x004649A8: nop
    
            goto L_00464E34;
    }
    // 0x004649A8: nop

    // 0x004649AC: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x004649B0: jal         0x002242F8
    // 0x004649B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002242F8(rdram, ctx);
        goto after_1;
    // 0x004649B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x004649B8: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x004649BC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x004649C0: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x004649C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004649C8: lw          $fp, 0x4($s0)
    ctx->r30 = MEM_W(ctx->r16, 0X4);
    // 0x004649CC: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x004649D0: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x004649D4: sll         $a2, $fp, 2
    ctx->r6 = S32(ctx->r30 << 2);
    // 0x004649D8: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x004649DC: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x004649E0: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x004649E4: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x004649E8: jal         0x00205D7C
    // 0x004649EC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    func_00205D7C(rdram, ctx);
        goto after_2;
    // 0x004649EC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    after_2:
    // 0x004649F0: beq         $v0, $zero, L_00464E1C
    if (ctx->r2 == 0) {
        // 0x004649F4: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_00464E1C;
    }
    // 0x004649F4: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x004649F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004649FC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00464A00: jal         0x0020192C
    // 0x00464A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0020192C(rdram, ctx);
        goto after_3;
    // 0x00464A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00464A08: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00464A0C: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00464A10: addiu       $v1, $zero, 0x288
    ctx->r3 = ADD32(0, 0X288);
    // 0x00464A14: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00464A18: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x00464A1C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x00464A20: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
    // 0x00464A24: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464A28: addu        $at, $t2, $at
    ctx->r1 = ADD32(ctx->r10, ctx->r1);
    // 0x00464A2C: lw          $v1, -0x7048($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7048);
    // 0x00464A30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00464A34: bne         $v1, $zero, L_00464A84
    if (ctx->r3 != 0) {
        // 0x00464A38: sw          $v0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r2;
            goto L_00464A84;
    }
    // 0x00464A38: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x00464A3C: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x00464A40: ori         $a3, $a3, 0x8FBC
    ctx->r7 = ctx->r7 | 0X8FBC;
    // 0x00464A44: addu        $a0, $t2, $zero
    ctx->r4 = ADD32(ctx->r10, 0);
    // 0x00464A48: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x00464A4C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464A50: addu        $at, $t2, $at
    ctx->r1 = ADD32(ctx->r10, ctx->r1);
    // 0x00464A54: lw          $a2, -0x7058($at)
    ctx->r6 = MEM_W(ctx->r1, -0X7058);
    // 0x00464A58: jal         0x0042C480
    // 0x00464A5C: addu        $a3, $t2, $a3
    ctx->r7 = ADD32(ctx->r10, ctx->r7);
    func_0042C480(rdram, ctx);
        goto after_4;
    // 0x00464A5C: addu        $a3, $t2, $a3
    ctx->r7 = ADD32(ctx->r10, ctx->r7);
    after_4:
    // 0x00464A60: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x00464A64: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464A68: addu        $at, $t3, $at
    ctx->r1 = ADD32(ctx->r11, ctx->r1);
    // 0x00464A6C: sw          $v0, -0x7030($at)
    MEM_W(-0X7030, ctx->r1) = ctx->r2;
    // 0x00464A70: beq         $v0, $zero, L_00464A84
    if (ctx->r2 == 0) {
        // 0x00464A74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00464A84;
    }
    // 0x00464A74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00464A78: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464A7C: addu        $at, $t3, $at
    ctx->r1 = ADD32(ctx->r11, ctx->r1);
    // 0x00464A80: sw          $v0, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = ctx->r2;
L_00464A84:
    // 0x00464A84: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00464A88: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464A8C: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x00464A90: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x00464A94: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00464A98: beq         $v0, $zero, L_00464AD0
    if (ctx->r2 == 0) {
        // 0x00464A9C: sw          $zero, 0x74($sp)
        MEM_W(0X74, ctx->r29) = 0;
            goto L_00464AD0;
    }
    // 0x00464A9C: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x00464AA0: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x00464AA4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00464AA8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464AAC: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x00464AB0: lw          $a1, -0x7058($at)
    ctx->r5 = MEM_W(ctx->r1, -0X7058);
    // 0x00464AB4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464AB8: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x00464ABC: lw          $a2, -0x7030($at)
    ctx->r6 = MEM_W(ctx->r1, -0X7030);
    // 0x00464AC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00464AC4: jal         0x0042C0B4
    // 0x00464AC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_0042C0B4(rdram, ctx);
        goto after_5;
    // 0x00464AC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x00464ACC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
L_00464AD0:
    // 0x00464AD0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00464AD4: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x00464AD8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00464ADC: sw          $t2, 0xE0($t1)
    MEM_W(0XE0, ctx->r9) = ctx->r10;
    // 0x00464AE0: blez        $fp, L_00464B1C
    if (SIGNED(ctx->r30) <= 0) {
        // 0x00464AE4: sw          $fp, 0xE8($t1)
        MEM_W(0XE8, ctx->r9) = ctx->r30;
            goto L_00464B1C;
    }
    // 0x00464AE4: sw          $fp, 0xE8($t1)
    MEM_W(0XE8, ctx->r9) = ctx->r30;
    // 0x00464AE8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00464AEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00464AF0:
    // 0x00464AF0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00464AF4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00464AF8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x00464AFC: lhu         $a1, 0x22($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X22);
    // 0x00464B00: jal         0x00225E88
    // 0x00464B04: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    func_00225E88(rdram, ctx);
        goto after_6;
    // 0x00464B04: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    after_6:
    // 0x00464B08: addiu       $v1, $s0, 0x288
    ctx->r3 = ADD32(ctx->r16, 0X288);
    // 0x00464B0C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00464B10: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00464B14: bne         $v0, $zero, L_00464AF0
    if (ctx->r2 != 0) {
        // 0x00464B18: addiu       $a1, $s1, 0x28
        ctx->r5 = ADD32(ctx->r17, 0X28);
            goto L_00464AF0;
    }
    // 0x00464B18: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
L_00464B1C:
    // 0x00464B1C: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x00464B20: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00464B24: blez        $fp, L_00464D08
    if (SIGNED(ctx->r30) <= 0) {
        // 0x00464B28: sw          $zero, 0xE4($t3)
        MEM_W(0XE4, ctx->r11) = 0;
            goto L_00464D08;
    }
    // 0x00464B28: sw          $zero, 0xE4($t3)
    MEM_W(0XE4, ctx->r11) = 0;
    // 0x00464B2C: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x00464B30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00464B34: lwc1        $f20, 0x5F58($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F58);
    // 0x00464B38: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x00464B3C: addu        $s6, $s2, $zero
    ctx->r22 = ADD32(ctx->r18, 0);
    // 0x00464B40: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x00464B44: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
L_00464B48:
    // 0x00464B48: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00464B4C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x00464B50: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x00464B54: jal         0x0021E6AC
    // 0x00464B58: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_0021E6AC(rdram, ctx);
        goto after_7;
    // 0x00464B58: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00464B5C: lhu         $a1, 0x22($s6)
    ctx->r5 = MEM_HU(ctx->r22, 0X22);
    // 0x00464B60: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x00464B64: jal         0x00225E88
    // 0x00464B68: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    func_00225E88(rdram, ctx);
        goto after_8;
    // 0x00464B68: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    after_8:
    // 0x00464B6C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00464B70: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00464B74: beq         $v1, $v0, L_00464B84
    if (ctx->r3 == ctx->r2) {
        // 0x00464B78: nop
    
            goto L_00464B84;
    }
    // 0x00464B78: nop

    // 0x00464B7C: bnel        $s3, $zero, L_00464CF0
    if (ctx->r19 != 0) {
        // 0x00464B80: addiu       $s6, $s6, 0x28
        ctx->r22 = ADD32(ctx->r22, 0X28);
            goto L_00464CF0;
    }
    goto skip_0;
    // 0x00464B80: addiu       $s6, $s6, 0x28
    ctx->r22 = ADD32(ctx->r22, 0X28);
    skip_0:
L_00464B84:
    // 0x00464B84: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x00464B88: lw          $v0, 0xE4($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XE4);
    // 0x00464B8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00464B90: lwc1        $f1, 0x5F5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5F5C);
    // 0x00464B94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00464B98: sw          $v0, 0xE4($t2)
    MEM_W(0XE4, ctx->r10) = ctx->r2;
    // 0x00464B9C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x00464BA0: addiu       $t2, $t2, -0x66D8
    ctx->r10 = ADD32(ctx->r10, -0X66D8);
    // 0x00464BA4: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x00464BA8: lw          $t0, 0x8($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X8);
    // 0x00464BAC: lw          $t1, 0xC($s6)
    ctx->r9 = MEM_W(ctx->r22, 0XC);
    // 0x00464BB0: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x00464BB4: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x00464BB8: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
    // 0x00464BBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00464BC0: lwc1        $f0, -0x66D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66D4);
    // 0x00464BC4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00464BC8: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x00464BCC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00464BD0: swc1        $f0, -0x66D4($at)
    MEM_W(-0X66D4, ctx->r1) = ctx->f0.u32l;
    // 0x00464BD4: jal         0x00220A1C
    // 0x00464BD8: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    func_00220A1C(rdram, ctx);
        goto after_9;
    // 0x00464BD8: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    after_9:
    // 0x00464BDC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00464BE0: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x00464BE4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00464BE8: sw          $v0, -0x66B8($at)
    MEM_W(-0X66B8, ctx->r1) = ctx->r2;
    // 0x00464BEC: blez        $v1, L_00464CEC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00464BF0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00464CEC;
    }
    // 0x00464BF0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00464BF4: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x00464BF8: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x00464BFC: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00464C00: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x00464C04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00464C08: addu        $s0, $v0, $t3
    ctx->r16 = ADD32(ctx->r2, ctx->r11);
L_00464C0C:
    // 0x00464C0C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00464C10: lw          $v0, -0x678C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X678C);
    // 0x00464C14: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x00464C18: beq         $t0, $zero, L_00464CC0
    if (ctx->r8 == 0) {
        // 0x00464C1C: addu        $s7, $v0, $s4
        ctx->r23 = ADD32(ctx->r2, ctx->r20);
            goto L_00464CC0;
    }
    // 0x00464C1C: addu        $s7, $v0, $s4
    ctx->r23 = ADD32(ctx->r2, ctx->r20);
    // 0x00464C20: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x00464C24: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x00464C28: jal         0x00210EF0
    // 0x00464C2C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_00210EF0(rdram, ctx);
        goto after_10;
    // 0x00464C2C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_10:
    // 0x00464C30: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00464C34: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00464C38: nop

    // 0x00464C3C: bc1t        L_00464C88
    if (c1cs) {
        // 0x00464C40: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_00464C88;
    }
    // 0x00464C40: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x00464C44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00464C48: lwc1        $f0, 0x5F60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F60);
    // 0x00464C4C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00464C50: nop

    // 0x00464C54: bc1t        L_00464C88
    if (c1cs) {
        // 0x00464C58: addiu       $v0, $zero, -0x7FFF
        ctx->r2 = ADD32(0, -0X7FFF);
            goto L_00464C88;
    }
    // 0x00464C58: addiu       $v0, $zero, -0x7FFF
    ctx->r2 = ADD32(0, -0X7FFF);
    // 0x00464C5C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00464C60: nop

    // 0x00464C64: bc1t        L_00464C88
    if (c1cs) {
        // 0x00464C68: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_00464C88;
    }
    // 0x00464C68: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x00464C6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00464C70: lwc1        $f0, 0x5F64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F64);
    // 0x00464C74: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00464C78: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00464C7C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00464C80: j           L_0042BC8C
    // 0x00464C84: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    entry_0042BC8C(rdram, ctx);
    return;
    // 0x00464C84: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_00464C88:
    // 0x00464C88: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x00464C8C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x00464C90: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x00464C94: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x00464C98: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x00464C9C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x00464CA0: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x00464CA4: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x00464CA8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00464CAC: slt         $v0, $s5, $t0
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00464CB0: bne         $v0, $zero, L_00464CC0
    if (ctx->r2 != 0) {
        // 0x00464CB4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_00464CC0;
    }
    // 0x00464CB4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x00464CB8: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x00464CBC: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_00464CC0:
    // 0x00464CC0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00464CC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00464CC8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x00464CCC: jal         0x0042D980
    // 0x00464CD0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    entry_0042D980(rdram, ctx);
        goto after_11;
    // 0x00464CD0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_11:
    // 0x00464CD4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00464CD8: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x00464CDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00464CE0: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00464CE4: bne         $v0, $zero, L_00464C0C
    if (ctx->r2 != 0) {
        // 0x00464CE8: addiu       $s4, $s4, 0x1328
        ctx->r20 = ADD32(ctx->r20, 0X1328);
            goto L_00464C0C;
    }
    // 0x00464CE8: addiu       $s4, $s4, 0x1328
    ctx->r20 = ADD32(ctx->r20, 0X1328);
L_00464CEC:
    // 0x00464CEC: addiu       $s6, $s6, 0x28
    ctx->r22 = ADD32(ctx->r22, 0X28);
L_00464CF0:
    // 0x00464CF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00464CF4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x00464CF8: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00464CFC: addiu       $t1, $t1, 0x288
    ctx->r9 = ADD32(ctx->r9, 0X288);
    // 0x00464D00: bne         $v0, $zero, L_00464B48
    if (ctx->r2 != 0) {
        // 0x00464D04: sw          $t1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r9;
            goto L_00464B48;
    }
    // 0x00464D04: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
L_00464D08:
    // 0x00464D08: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x00464D0C: lw          $s3, 0xE4($t2)
    ctx->r19 = MEM_W(ctx->r10, 0XE4);
    // 0x00464D10: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00464D14: beq         $v0, $zero, L_00464E1C
    if (ctx->r2 == 0) {
        // 0x00464D18: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00464E1C;
    }
    // 0x00464D18: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00464D1C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00464D20: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00464D24: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00464D28: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x00464D2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00464D30: addu        $s1, $v0, $t3
    ctx->r17 = ADD32(ctx->r2, ctx->r11);
L_00464D34:
    // 0x00464D34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00464D38: lwc1        $f20, 0x5F54($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F54);
    // 0x00464D3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00464D40: jal         0x00267DBC
    // 0x00464D44: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    func_00267DBC(rdram, ctx);
        goto after_12;
    // 0x00464D44: sw          $zero, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = 0;
    after_12:
    // 0x00464D48: beql        $v0, $zero, L_00464E10
    if (ctx->r2 == 0) {
        // 0x00464D4C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00464E10;
    }
    goto skip_1;
    // 0x00464D4C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x00464D50: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00464D54: lw          $s2, 0xE4($t0)
    ctx->r18 = MEM_W(ctx->r8, 0XE4);
    // 0x00464D58: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00464D5C: beq         $v0, $zero, L_00464E0C
    if (ctx->r2 == 0) {
        // 0x00464D60: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_00464E0C;
    }
    // 0x00464D60: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x00464D64: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00464D68: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00464D6C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00464D70: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x00464D74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00464D78: addu        $s0, $v0, $t1
    ctx->r16 = ADD32(ctx->r2, ctx->r9);
L_00464D7C:
    // 0x00464D7C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00464D80: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00464D84: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00464D88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00464D8C: bnel        $a0, $v0, L_00464E00
    if (ctx->r4 != ctx->r2) {
        // 0x00464D90: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00464E00;
    }
    goto skip_2;
    // 0x00464D90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x00464D94: jal         0x00267D94
    // 0x00464D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267D94(rdram, ctx);
        goto after_13;
    // 0x00464D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00464D9C: beql        $v0, $zero, L_00464E00
    if (ctx->r2 == 0) {
        // 0x00464DA0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00464E00;
    }
    goto skip_3;
    // 0x00464DA0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x00464DA4: beql        $s1, $s0, L_00464E00
    if (ctx->r17 == ctx->r16) {
        // 0x00464DA8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00464E00;
    }
    goto skip_4;
    // 0x00464DA8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x00464DAC: lw          $v0, 0x1A8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1A8);
    // 0x00464DB0: beql        $v0, $zero, L_00464DE4
    if (ctx->r2 == 0) {
        // 0x00464DB4: sw          $s0, 0x1A8($s1)
        MEM_W(0X1A8, ctx->r17) = ctx->r16;
            goto L_00464DE4;
    }
    goto skip_5;
    // 0x00464DB4: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
    skip_5:
    // 0x00464DB8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00464DBC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00464DC0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00464DC4: jal         0x002465F0
    // 0x00464DC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_14;
    // 0x00464DC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
    // 0x00464DCC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00464DD0: nop

    // 0x00464DD4: bc1fl       L_00464E00
    if (!c1cs) {
        // 0x00464DD8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00464E00;
    }
    goto skip_6;
    // 0x00464DD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_6:
    // 0x00464DDC: j           L_0042BDF8
    // 0x00464DE0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
    entry_0042BDF8(rdram, ctx);
    return;
    // 0x00464DE0: sw          $s0, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r16;
L_00464DE4:
    // 0x00464DE4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00464DE8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00464DEC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00464DF0: jal         0x002465F0
    // 0x00464DF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002465F0(rdram, ctx);
        goto after_15;
    // 0x00464DF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x00464DF8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00464DFC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00464E00:
    // 0x00464E00: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00464E04: bne         $v0, $zero, L_00464D7C
    if (ctx->r2 != 0) {
        // 0x00464E08: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_00464D7C;
    }
    // 0x00464E08: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_00464E0C:
    // 0x00464E0C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00464E10:
    // 0x00464E10: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00464E14: bne         $v0, $zero, L_00464D34
    if (ctx->r2 != 0) {
        // 0x00464E18: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_00464D34;
    }
    // 0x00464E18: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
L_00464E1C:
    // 0x00464E1C: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x00464E20: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x00464E24: jal         0x002057B0
    // 0x00464E28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_16;
    // 0x00464E28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x00464E2C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x00464E30: sw          $zero, 0xF00($t2)
    MEM_W(0XF00, ctx->r10) = 0;
L_00464E34:
    // 0x00464E34: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x00464E38: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x00464E3C: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x00464E40: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x00464E44: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x00464E48: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x00464E4C: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x00464E50: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x00464E54: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x00464E58: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x00464E5C: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00464E60: jr          $ra
    // 0x00464E64: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00464E64: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_004502F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004173F8:
    // 0x004502F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004502FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00450300: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00450304: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00450308: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0045030C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00450310: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00450314: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00450318: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0045031C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00450320: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00450324: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x00450328: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045032C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00450330: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00450334: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00450338: blez        $v1, L_00450370
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0045033C: addiu       $a1, $v0, 0x1D8
        ctx->r5 = ADD32(ctx->r2, 0X1D8);
            goto L_00450370;
    }
    // 0x0045033C: addiu       $a1, $v0, 0x1D8
    ctx->r5 = ADD32(ctx->r2, 0X1D8);
    // 0x00450340: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x00450344: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00450348: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_0045034C:
    // 0x0045034C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00450350: bne         $v0, $t0, L_0045035C
    if (ctx->r2 != ctx->r8) {
        // 0x00450354: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0045035C;
    }
    // 0x00450354: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00450358: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0045035C:
    // 0x0045035C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x00450360: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00450364: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00450368: bne         $v0, $zero, L_0045034C
    if (ctx->r2 != 0) {
        // 0x0045036C: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_0045034C;
    }
    // 0x0045036C: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_00450370:
    // 0x00450370: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00450374: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00450378: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0045037C: jal         0x00204EDC
    // 0x00450380: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00450380: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x00450384: beql        $v0, $zero, L_004503F8
    if (ctx->r2 == 0) {
        // 0x00450388: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004503F8;
    }
    goto skip_0;
    // 0x00450388: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0045038C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00450390: bne         $s0, $zero, L_004503A0
    if (ctx->r16 != 0) {
        // 0x00450394: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004503A0;
    }
    // 0x00450394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00450398: j           L_004173F8
    // 0x0045039C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_004173F8(rdram, ctx);
    return;
    // 0x0045039C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004503A0:
    // 0x004503A0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004503A4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x004503A8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004503AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004503B0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x004503B4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x004503B8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x004503BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x004503C0: jal         0x00414EA8
    // 0x004503C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x004503C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x004503C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004503CC: jal         0x00200518
    // 0x004503D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x004503D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004503D4: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x004503D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004503DC: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x004503E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004503E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004503E8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x004503EC: beql        $v0, $zero, L_004503F4
    if (ctx->r2 == 0) {
        // 0x004503F0: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_004503F4;
    }
    goto skip_1;
    // 0x004503F0: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_1:
L_004503F4:
    // 0x004503F4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004503F8:
    // 0x004503F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004503FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00450400: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00450404: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00450408: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0045040C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00450410: jr          $ra
    // 0x00450414: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00450414: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004545F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004545F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004545FC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454600: xori        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 ^ 0X200;
    // 0x00454604: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454608: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0045460C: jr          $ra
    // 0x00454610: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454610: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021FB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021FB10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021FB14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021FB18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021FB1C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021FB20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0021FB24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021FB28: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0021FB2C: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0021FB30: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021FB34: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x0021FB38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021FB3C: bne         $a1, $v0, L_0021FBB0
    if (ctx->r5 != ctx->r2) {
        // 0x0021FB40: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0021FBB0;
    }
    // 0x0021FB40: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0021FB44: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0021FB48: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021FB4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021FB50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0021FB54: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x0021FB58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FB5C: lwc1        $f1, 0x5D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D28);
    // 0x0021FB60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FB64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FB68: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FB6C: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x0021FB70: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x0021FB74: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FB78: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FB7C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FB80: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x0021FB84: lh          $v0, 0x10($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X10);
    // 0x0021FB88: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FB8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FB90: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FB94: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x0021FB98: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x0021FB9C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FBA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FBA4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FBA8: j           L_0021FC38
    // 0x0021FBAC: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_0021FC38;
    // 0x0021FBAC: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_0021FBB0:
    // 0x0021FBB0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021FBB4: jal         0x002017D4
    // 0x0021FBB8: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021FBB8: nop

    after_0:
    // 0x0021FBBC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0021FBC0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0021FBC4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021FBC8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x0021FBCC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021FBD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021FBD4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0021FBD8: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021FBDC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FBE0: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0021FBE4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FBE8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021FBEC: swc1        $f1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021FBF0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0021FBF4: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021FBF8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FBFC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FC00: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021FC04: swc1        $f1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021FC08: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0021FC0C: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0021FC10: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FC14: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FC18: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021FC1C: swc1        $f1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021FC20: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0021FC24: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0021FC28: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FC2C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021FC30: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021FC34: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0021FC38:
    // 0x0021FC38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021FC3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021FC40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021FC44: jr          $ra
    // 0x0021FC48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021FC48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00452900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452900: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00452904: jr          $ra
    // 0x00452908: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x00452908: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00417B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417B74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00417B78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00417B7C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00417B80: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00417B84: beq         $a1, $zero, L_00417B9C
    if (ctx->r5 == 0) {
        // 0x00417B88: nop
    
            goto L_00417B9C;
    }
    // 0x00417B88: nop

    // 0x00417B8C: jal         0x00285A68
    // 0x00417B90: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00417B90: nop

    after_0:
    // 0x00417B94: j           L_00417BA4
    // 0x00417B98: nop

        goto L_00417BA4;
    // 0x00417B98: nop

L_00417B9C:
    // 0x00417B9C: jal         0x00285A80
    // 0x00417BA0: nop

    func_00285A80(rdram, ctx);
        goto after_1;
    // 0x00417BA0: nop

    after_1:
L_00417BA4:
    // 0x00417BA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00417BA8: jr          $ra
    // 0x00417BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040B35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B35C: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0040B360: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x0040B364: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040B368: jr          $ra
    // 0x0040B36C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    return;
    // 0x0040B36C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00412F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412F74: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00412F78: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x00412F7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00412F80: jr          $ra
    // 0x00412F84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x00412F84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_00241894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241894: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00241898: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x0024189C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x002418A0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002418A4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x002418A8: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
    // 0x002418AC: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x002418B0: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x002418B4: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x002418B8: jr          $ra
    // 0x002418BC: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
    return;
    // 0x002418BC: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
;}
