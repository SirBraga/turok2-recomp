#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002961FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002961FC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x00296200: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00296204: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296208: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x0029620C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00296210: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00296214: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00296218: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029621C: lwc1        $f0, -0x59B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X59B8);
    // 0x00296220: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296224: lwc1        $f2, -0x59B4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X59B4);
    // 0x00296228: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0029622C: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
L_00296230:
    // 0x00296230: beq         $v0, $zero, L_0029623C
    if (ctx->r2 == 0) {
        // 0x00296234: sra         $a1, $a1, 1
        ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
            goto L_0029623C;
    }
    // 0x00296234: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    // 0x00296238: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
L_0029623C:
    // 0x0029623C: beq         $a1, $zero, L_00296254
    if (ctx->r5 == 0) {
        // 0x00296240: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00296254;
    }
    // 0x00296240: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00296244: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x00296248: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0029624C: bne         $v0, $zero, L_00296230
    if (ctx->r2 != 0) {
        // 0x00296250: andi        $v0, $a1, 0x1
        ctx->r2 = ctx->r5 & 0X1;
            goto L_00296230;
    }
    // 0x00296250: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
L_00296254:
    // 0x00296254: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x00296258: jr          $ra
    // 0x0029625C: nop

    return;
    // 0x0029625C: nop

;}
RECOMP_FUNC void func_0020B9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B9F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0020B9F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0020B9FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020BA00: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0020BA04: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0020BA08: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0020BA0C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0020BA10: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0020BA14: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0020BA18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BA1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0020BA20: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0020BA24: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0020BA28: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0020BA2C: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x0020BA30: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0020BA34: addiu       $v0, $v0, 0x53D8
    ctx->r2 = ADD32(ctx->r2, 0X53D8);
    // 0x0020BA38: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0020BA3C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0020BA40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0020BA44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0020BA48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0020BA4C: jal         0x0020367C
    // 0x0020BA50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0020BA50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x0020BA54: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0020BA58: beq         $s1, $zero, L_0020BBC0
    if (ctx->r17 == 0) {
        // 0x0020BA5C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0020BBC0;
    }
    // 0x0020BA5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0020BA60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0020BA64: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0020BA68: jal         0x0020185C
    // 0x0020BA6C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x0020BA6C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x0020BA70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BA74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0020BA78: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0020BA7C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0020BA80: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0020BA84: addiu       $v0, $v0, -0x4B50
    ctx->r2 = ADD32(ctx->r2, -0X4B50);
    // 0x0020BA88: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0020BA8C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0020BA90: addiu       $v0, $v0, 0x53EC
    ctx->r2 = ADD32(ctx->r2, 0X53EC);
    // 0x0020BA94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0020BA98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0020BA9C: jal         0x0020367C
    // 0x0020BAA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x0020BAA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x0020BAA4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020BAA8: beq         $s0, $zero, L_0020BBB8
    if (ctx->r16 == 0) {
        // 0x0020BAAC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020BBB8;
    }
    // 0x0020BAAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BAB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0020BAB4: jal         0x002017D4
    // 0x0020BAB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020BAB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x0020BABC: bltz        $s2, L_0020BBAC
    if (SIGNED(ctx->r18) < 0) {
        // 0x0020BAC0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020BBAC;
    }
    // 0x0020BAC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BAC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0020BAC8: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020BACC: beq         $v0, $zero, L_0020BBAC
    if (ctx->r2 == 0) {
        // 0x0020BAD0: nop
    
            goto L_0020BBAC;
    }
    // 0x0020BAD0: nop

    // 0x0020BAD4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BAD8: lw          $v0, -0x71D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71D8);
    // 0x0020BADC: bne         $v0, $s0, L_0020BB14
    if (ctx->r2 != ctx->r16) {
        // 0x0020BAE0: nop
    
            goto L_0020BB14;
    }
    // 0x0020BAE0: nop

    // 0x0020BAE4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BAE8: lw          $v0, -0x71EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71EC);
    // 0x0020BAEC: bne         $v0, $s2, L_0020BB14
    if (ctx->r2 != ctx->r18) {
        // 0x0020BAF0: nop
    
            goto L_0020BB14;
    }
    // 0x0020BAF0: nop

    // 0x0020BAF4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BAF8: lw          $v0, -0x71F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71F0);
    // 0x0020BAFC: bne         $v0, $s3, L_0020BB14
    if (ctx->r2 != ctx->r19) {
        // 0x0020BB00: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0020BB14;
    }
    // 0x0020BB00: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0020BB04: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020BB08: lw          $v1, -0x71CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71CC);
    // 0x0020BB0C: bne         $v1, $v0, L_0020BB5C
    if (ctx->r3 != ctx->r2) {
        // 0x0020BB10: nop
    
            goto L_0020BB5C;
    }
    // 0x0020BB10: nop

L_0020BB14:
    // 0x0020BB14: jal         0x0020A568
    // 0x0020BB18: nop

    func_0020A568(rdram, ctx);
        goto after_4;
    // 0x0020BB18: nop

    after_4:
    // 0x0020BB1C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020BB20: lw          $v1, -0x2E90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E90);
    // 0x0020BB24: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0020BB28: beq         $v1, $v0, L_0020BBA8
    if (ctx->r3 == ctx->r2) {
        // 0x0020BB2C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020BBA8;
    }
    // 0x0020BB2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BB30: jal         0x00205110
    // 0x0020BB34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00205110(rdram, ctx);
        goto after_5;
    // 0x0020BB34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0020BB38: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BB3C: lw          $v0, -0x2E90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2E90);
    // 0x0020BB40: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0020BB44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020BB48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BB4C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0020BB50: sw          $s0, -0x2E88($at)
    MEM_W(-0X2E88, ctx->r1) = ctx->r16;
    // 0x0020BB54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BB58: sw          $v0, -0x2E90($at)
    MEM_W(-0X2E90, ctx->r1) = ctx->r2;
L_0020BB5C:
    // 0x0020BB5C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BB60: lw          $v0, -0x71CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71CC);
    // 0x0020BB64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BB68: sw          $s0, -0x71D8($at)
    MEM_W(-0X71D8, ctx->r1) = ctx->r16;
    // 0x0020BB6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BB70: sw          $s2, -0x71EC($at)
    MEM_W(-0X71EC, ctx->r1) = ctx->r18;
    // 0x0020BB74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BB78: sw          $s3, -0x71F0($at)
    MEM_W(-0X71F0, ctx->r1) = ctx->r19;
    // 0x0020BB7C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0020BB80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020BB84: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BB88: sw          $v0, -0x71CC($at)
    MEM_W(-0X71CC, ctx->r1) = ctx->r2;
    // 0x0020BB8C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020BB90: addiu       $v0, $v0, -0x2A88
    ctx->r2 = ADD32(ctx->r2, -0X2A88);
    // 0x0020BB94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0020BB98: sw          $s4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r20;
    // 0x0020BB9C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x0020BBA0: sw          $s5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r21;
    // 0x0020BBA4: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_0020BBA8:
    // 0x0020BBA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020BBAC:
    // 0x0020BBAC: jal         0x002051F4
    // 0x0020BBB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_6;
    // 0x0020BBB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0020BBB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020BBB8:
    // 0x0020BBB8: jal         0x002051F4
    // 0x0020BBBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x0020BBBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0020BBC0:
    // 0x0020BBC0: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0020BBC4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0020BBC8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0020BBCC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0020BBD0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0020BBD4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0020BBD8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0020BBDC: jr          $ra
    // 0x0020BBE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0020BBE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004245E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004245E0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004245E4: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x004245E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004245EC: beq         $v1, $v0, L_0042461C
    if (ctx->r3 == ctx->r2) {
            // 0x004245F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    func_0042461C(rdram, ctx);
    return;
    }
    // 0x004245F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004245F4: bne         $v0, $zero, L_0042460C
    if (ctx->r2 != 0) {
        // 0x004245F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0042460C;
    }
    // 0x004245F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004245FC: beq         $v1, $v0, L_0042462C
    if (ctx->r3 == ctx->r2) {
            // 0x00424600: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_0042462C(rdram, ctx);
    return;
    }
    // 0x00424600: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424604: beq         $v1, $v0, L_0042463C
    if (ctx->r3 == ctx->r2) {
            // 0x00424608: nop

    func_0042463C(rdram, ctx);
    return;
    }
    // 0x00424608: nop

L_0042460C:
    // 0x0042460C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424610: addiu       $v0, $v0, 0x40E0
    ctx->r2 = ADD32(ctx->r2, 0X40E0);
    // 0x00424614: jr          $ra
    // 0x00424618: nop

    return;
    // 0x00424618: nop

;}
RECOMP_FUNC void func_0041CAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CAE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041CAE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041CAEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041CAF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041CAF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041CAF8: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CAFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CB00: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CB04: jal         0x0025340C
    // 0x0041CB08: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CB08: nop

    after_0:
    // 0x0041CB0C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041CB10: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041CB14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041CB18: lhu         $s1, -0x54A2($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A2);
    // 0x0041CB1C: jal         0x004160F0
    // 0x0041CB20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041CB20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041CB24: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041CB28: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x0041CB2C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041CB30: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041CB34: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0041CB38: jal         0x0029E3E0
    // 0x0041CB3C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041CB3C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041CB40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041CB44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041CB48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CB4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CB50: jr          $ra
    // 0x0041CB54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041CB54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028D0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D0F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D0F4: sw          $zero, -0xD70($at)
    MEM_W(-0XD70, ctx->r1) = 0;
    // 0x0028D0F8: jr          $ra
    // 0x0028D0FC: nop

    return;
    // 0x0028D0FC: nop

;}
RECOMP_FUNC void func_00268460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00268460:
    // 0x00268460: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00268464: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00268468: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026846C: beq         $v1, $v0, L_002684E4
    if (ctx->r3 == ctx->r2) {
            // 0x00268470: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    func_002684E4(rdram, ctx);
    return;
    }
    // 0x00268470: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x00268474: beq         $v0, $zero, L_0026848C
    if (ctx->r2 == 0) {
        // 0x00268478: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026848C;
    }
    // 0x00268478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026847C: beq         $v1, $v0, L_002684E4
    if (ctx->r3 == ctx->r2) {
            // 0x00268480: nop

    func_002684E4(rdram, ctx);
    return;
    }
    // 0x00268480: nop

    // 0x00268484: j           L_002684FC
    // 0x00268488: nop

    func_002684FC(rdram, ctx);
    return;
    // 0x00268488: nop

L_0026848C:
    // 0x0026848C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00268490: beq         $v1, $v0, L_002684F0
    if (ctx->r3 == ctx->r2) {
            // 0x00268494: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    func_002684F0(rdram, ctx);
    return;
    }
    // 0x00268494: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00268498: bne         $v1, $v0, L_002684FC
    if (ctx->r3 != ctx->r2) {
            // 0x0026849C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_002684FC(rdram, ctx);
    return;
    }
    // 0x0026849C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002684A0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002684A4: bne         $v1, $v0, L_002684D4
    if (ctx->r3 != ctx->r2) {
        // 0x002684A8: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_002684D4;
    }
    // 0x002684A8: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002684AC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002684B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002684B4: beq         $v0, $zero, L_002684D4
    if (ctx->r2 == 0) {
        // 0x002684B8: nop
    
            goto L_002684D4;
    }
    // 0x002684B8: nop

    // 0x002684BC: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x002684C0: lw          $v0, 0xBB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XBB0);
    // 0x002684C4: beq         $v0, $zero, L_002684D4
    if (ctx->r2 == 0) {
        // 0x002684C8: nop
    
            goto L_002684D4;
    }
    // 0x002684C8: nop

    // 0x002684CC: j           L_00268460
    // 0x002684D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_00268460;
    // 0x002684D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_002684D4:
    // 0x002684D4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002684D8: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x002684DC: jr          $ra
    // 0x002684E0: nop

    return;
    // 0x002684E0: nop

;}
RECOMP_FUNC void func_0040BD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BD60: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040BD64: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040BD68: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040BD6C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040BD70: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040BD74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040BD78: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x0040BD7C: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x0040BD80: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0040BD84: jal         0x00246108
    // 0x0040BD88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040BD88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x0040BD8C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x0040BD90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040BD94: lwc1        $f20, 0x894($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X894);
    // 0x0040BD98: beq         $a0, $zero, L_0040BDB8
    if (ctx->r4 == 0) {
        // 0x0040BD9C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0040BDB8;
    }
    // 0x0040BD9C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0040BDA0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040BDA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040BDA8: beq         $v0, $zero, L_0040BDBC
    if (ctx->r2 == 0) {
        // 0x0040BDAC: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0040BDBC;
    }
    // 0x0040BDAC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0040BDB0: lwc1        $f20, 0x9C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x0040BDB4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_0040BDB8:
    // 0x0040BDB8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_0040BDBC:
    // 0x0040BDBC: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0040BDC0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040BDC4: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x0040BDC8: jr          $ra
    // 0x0040BDCC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040BDCC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00285558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028555C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00285560: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x00285564: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00285568: beq         $v0, $zero, L_0028559C
    if (ctx->r2 == 0) {
        // 0x0028556C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028559C;
    }
    // 0x0028556C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285570: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285574: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x00285578: beq         $v0, $zero, L_0028559C
    if (ctx->r2 == 0) {
        // 0x0028557C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028559C;
    }
    // 0x0028557C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285580: jal         0x00284174
    // 0x00285584: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00285584: nop

    after_0:
    // 0x00285588: bne         $v0, $zero, L_0028559C
    if (ctx->r2 != 0) {
        // 0x0028558C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028559C;
    }
    // 0x0028558C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285590: jal         0x00275624
    // 0x00285594: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00275624(rdram, ctx);
        goto after_1;
    // 0x00285594: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_1:
    // 0x00285598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0028559C:
    // 0x0028559C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002855A0: jr          $ra
    // 0x002855A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002855A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455A38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455A3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455A40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455A44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455A48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455A4C: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00455A50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455A54: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455A58: jal         0x0025340C
    // 0x00455A5C: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455A5C: nop

    after_0:
    // 0x00455A60: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00455A64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00455A68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00455A6C: lhu         $s1, -0x54A2($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A2);
    // 0x00455A70: jal         0x004160F0
    // 0x00455A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00455A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00455A78: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455A7C: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x00455A80: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00455A84: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00455A88: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00455A8C: jal         0x0029E3E0
    // 0x00455A90: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00455A90: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00455A94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455A98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00455A9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455AA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455AA4: jr          $ra
    // 0x00455AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002974C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002974C0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x002974C4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x002974C8: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x002974CC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x002974D0: slti        $v0, $v0, 0x136
    ctx->r2 = SIGNED(ctx->r2) < 0X136 ? 1 : 0;
    // 0x002974D4: beq         $v0, $zero, L_002975B4
    if (ctx->r2 == 0) {
            // 0x002974D8: nop

    func_002975B4(rdram, ctx);
    return;
    }
    // 0x002974D8: nop

    // 0x002974DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002974E0: ldc1        $f0, -0x5888($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5888);
    // 0x002974E4: abs.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = fabsf(ctx->f12.fl);
    // 0x002974E8: cvt.d.s     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.d = CVT_D_S(ctx->f12.fl);
    // 0x002974EC: mul.d       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f12.d, ctx->f0.d);
    // 0x002974F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002974F4: ldc1        $f1, -0x5868($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5868);
    // 0x002974F8: add.d       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f2.d = ctx->f0.d + ctx->f1.d;
    // 0x002974FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297500: ldc1        $f0, -0x5860($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5860);
    // 0x00297504: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x00297508: nop

    // 0x0029750C: bc1fl       L_00297518
    if (!c1cs) {
        // 0x00297510: sub.d       $f0, $f2, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f2.d - ctx->f1.d;
            goto L_00297518;
    }
    goto skip_0;
    // 0x00297510: sub.d       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f2.d - ctx->f1.d;
    skip_0:
    // 0x00297514: add.d       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f2.d + ctx->f1.d;
L_00297518:
    // 0x00297518: trunc.w.d   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_D(ctx->f0.d);
    // 0x0029751C: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297520: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297524: ldc1        $f0, -0x5858($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5858);
    // 0x00297528: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x0029752C: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x00297530: sub.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d - ctx->f0.d;
    // 0x00297534: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297538: ldc1        $f1, -0x5880($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5880);
    // 0x0029753C: mul.d       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f2.d, ctx->f1.d);
    // 0x00297540: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297544: ldc1        $f0, -0x5878($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5878);
    // 0x00297548: mul.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x0029754C: sub.d       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f1.d); 
    ctx->f12.d = ctx->f12.d - ctx->f1.d;
    // 0x00297550: sub.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d - ctx->f0.d;
    // 0x00297554: mul.d       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x00297558: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029755C: addiu       $v0, $v0, -0x58B0
    ctx->r2 = ADD32(ctx->r2, -0X58B0);
    // 0x00297560: ldc1        $f0, 0x20($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X20);
    // 0x00297564: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x00297568: ldc1        $f1, 0x18($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X18);
    // 0x0029756C: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x00297570: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x00297574: ldc1        $f1, 0x10($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X10);
    // 0x00297578: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x0029757C: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x00297580: nop

    // 0x00297584: mul.d       $f2, $f12, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f2.d);
    // 0x00297588: ldc1        $f1, 0x8($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X8);
    // 0x0029758C: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x00297590: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x00297594: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00297598: bne         $v0, $zero, L_002975A8
    if (ctx->r2 != 0) {
            // 0x0029759C: add.d       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f12.d + ctx->f2.d;
    func_002975A8(rdram, ctx);
    return;
    }
    // 0x0029759C: add.d       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f12.d + ctx->f2.d;
    // 0x002975A0: jr          $ra
    // 0x002975A4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    return;
    // 0x002975A4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
;}
RECOMP_FUNC void func_002465C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002465C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002465CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002465D0: lw          $v0, 0xF8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XF8);
    // 0x002465D4: beq         $v0, $zero, L_002465E4
    if (ctx->r2 == 0) {
        // 0x002465D8: nop
    
            goto L_002465E4;
    }
    // 0x002465D8: nop

    // 0x002465DC: jalr        $v0
    // 0x002465E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x002465E0: nop

    after_0:
L_002465E4:
    // 0x002465E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002465E8: jr          $ra
    // 0x002465EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002465EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044C09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C09C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044C0A0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044C0A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044C0A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044C0AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044C0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044C0B4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044C0B8: jal         0x002017D4
    // 0x0044C0BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044C0BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044C0C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C0C4: jal         0x002017D4
    // 0x0044C0C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044C0C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044C0CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C0D0: jal         0x002017D4
    // 0x0044C0D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044C0D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0044C0D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044C0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044C0E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044C0E4: jr          $ra
    // 0x0044C0E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044C0E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00408DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408DCC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00408DD0: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00408DD4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408DD8: lwc1        $f0, 0x5B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B0);
    // 0x00408DDC: swc1        $f0, 0xAAC($v0)
    MEM_W(0XAAC, ctx->r2) = ctx->f0.u32l;
    // 0x00408DE0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408DE4: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408DE8: beq         $v1, $zero, L_00408E38
    if (ctx->r3 == 0) {
        // 0x00408DEC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00408E38;
    }
    // 0x00408DEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00408DF0: lui         $a1, 0x2000
    ctx->r5 = S32(0X2000 << 16);
    // 0x00408DF4: lui         $a0, 0x4000
    ctx->r4 = S32(0X4000 << 16);
L_00408DF8:
    // 0x00408DF8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00408DFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408E00: bne         $v0, $a2, L_00408E2C
    if (ctx->r2 != ctx->r6) {
        // 0x00408E04: nop
    
            goto L_00408E2C;
    }
    // 0x00408E04: nop

    // 0x00408E08: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408E0C: beq         $v0, $zero, L_00408E2C
    if (ctx->r2 == 0) {
        // 0x00408E10: nop
    
            goto L_00408E2C;
    }
    // 0x00408E10: nop

    // 0x00408E14: lw          $v0, 0x140($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X140);
    // 0x00408E18: sw          $zero, 0x1C8($v1)
    MEM_W(0X1C8, ctx->r3) = 0;
    // 0x00408E1C: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x00408E20: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00408E24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00408E28: sw          $v0, 0x140($v1)
    MEM_W(0X140, ctx->r3) = ctx->r2;
L_00408E2C:
    // 0x00408E2C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00408E30: bne         $v1, $zero, L_00408DF8
    if (ctx->r3 != 0) {
        // 0x00408E34: nop
    
            goto L_00408DF8;
    }
    // 0x00408E34: nop

L_00408E38:
    // 0x00408E38: jr          $ra
    // 0x00408E3C: nop

    return;
    // 0x00408E3C: nop

;}
RECOMP_FUNC void func_0024C648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024C648: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0024C64C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0024C650: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024C654: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0024C658: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0024C65C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0024C660: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024C664: lw          $v1, -0x5374($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5374);
    // 0x0024C668: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0024C66C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0024C670: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0024C674: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x0024C678: sdc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X50, ctx->r29);
    // 0x0024C67C: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x0024C680: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0024C684: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0024C688: beq         $v1, $v0, L_0024CF28
    if (ctx->r3 == ctx->r2) {
        // 0x0024C68C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0024CF28;
    }
    // 0x0024C68C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0024C690: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0024C694: beq         $v1, $v0, L_0024CF28
    if (ctx->r3 == ctx->r2) {
        // 0x0024C698: nop
    
            goto L_0024CF28;
    }
    // 0x0024C698: nop

    // 0x0024C69C: jal         0x00277328
    // 0x0024C6A0: addiu       $a0, $s1, 0x1064
    ctx->r4 = ADD32(ctx->r17, 0X1064);
    func_00277328(rdram, ctx);
        goto after_0;
    // 0x0024C6A0: addiu       $a0, $s1, 0x1064
    ctx->r4 = ADD32(ctx->r17, 0X1064);
    after_0:
    // 0x0024C6A4: jal         0x00277328
    // 0x0024C6A8: addiu       $a0, $s1, 0x10A0
    ctx->r4 = ADD32(ctx->r17, 0X10A0);
    func_00277328(rdram, ctx);
        goto after_1;
    // 0x0024C6A8: addiu       $a0, $s1, 0x10A0
    ctx->r4 = ADD32(ctx->r17, 0X10A0);
    after_1:
    // 0x0024C6AC: jal         0x00277328
    // 0x0024C6B0: addiu       $a0, $s1, 0x10DC
    ctx->r4 = ADD32(ctx->r17, 0X10DC);
    func_00277328(rdram, ctx);
        goto after_2;
    // 0x0024C6B0: addiu       $a0, $s1, 0x10DC
    ctx->r4 = ADD32(ctx->r17, 0X10DC);
    after_2:
    // 0x0024C6B4: jal         0x00277328
    // 0x0024C6B8: addiu       $a0, $s1, 0x1118
    ctx->r4 = ADD32(ctx->r17, 0X1118);
    func_00277328(rdram, ctx);
        goto after_3;
    // 0x0024C6B8: addiu       $a0, $s1, 0x1118
    ctx->r4 = ADD32(ctx->r17, 0X1118);
    after_3:
    // 0x0024C6BC: jal         0x00277328
    // 0x0024C6C0: addiu       $a0, $s1, 0x1208
    ctx->r4 = ADD32(ctx->r17, 0X1208);
    func_00277328(rdram, ctx);
        goto after_4;
    // 0x0024C6C0: addiu       $a0, $s1, 0x1208
    ctx->r4 = ADD32(ctx->r17, 0X1208);
    after_4:
    // 0x0024C6C4: jal         0x00277328
    // 0x0024C6C8: addiu       $a0, $s1, 0x1244
    ctx->r4 = ADD32(ctx->r17, 0X1244);
    func_00277328(rdram, ctx);
        goto after_5;
    // 0x0024C6C8: addiu       $a0, $s1, 0x1244
    ctx->r4 = ADD32(ctx->r17, 0X1244);
    after_5:
    // 0x0024C6CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024C6D0: jal         0x0024A86C
    // 0x0024C6D4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0024A86C(rdram, ctx);
        goto after_6;
    // 0x0024C6D4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x0024C6D8: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x0024C6DC: bne         $v0, $zero, L_0024C6F4
    if (ctx->r2 != 0) {
        // 0x0024C6E0: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_0024C6F4;
    }
    // 0x0024C6E0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0024C6E4: addiu       $a0, $s1, 0xC10
    ctx->r4 = ADD32(ctx->r17, 0XC10);
    // 0x0024C6E8: jal         0x00247438
    // 0x0024C6EC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00247438(rdram, ctx);
        goto after_7;
    // 0x0024C6EC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0024C6F0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_0024C6F4:
    // 0x0024C6F4: jal         0x00279028
    // 0x0024C6F8: addiu       $s0, $s1, 0xCD0
    ctx->r16 = ADD32(ctx->r17, 0XCD0);
    func_00279028(rdram, ctx);
        goto after_8;
    // 0x0024C6F8: addiu       $s0, $s1, 0xCD0
    ctx->r16 = ADD32(ctx->r17, 0XCD0);
    after_8:
    // 0x0024C6FC: lui         $v0, 0xE300
    ctx->r2 = S32(0XE300 << 16);
    // 0x0024C700: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0024C704: lw          $v1, -0x71DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71DC);
    // 0x0024C708: ori         $v0, $v0, 0x1201
    ctx->r2 = ctx->r2 | 0X1201;
    // 0x0024C70C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0024C710: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0024C714: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0024C718: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0024C71C: lw          $v0, 0x380($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X380);
    // 0x0024C720: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0024C724: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0024C728: sw          $v1, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r3;
    // 0x0024C72C: beq         $v0, $zero, L_0024C748
    if (ctx->r2 == 0) {
        // 0x0024C730: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024C748;
    }
    // 0x0024C730: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024C734: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024C738: jal         0x00254D5C
    // 0x0024C73C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00254D5C(rdram, ctx);
        goto after_9;
    // 0x0024C73C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0024C740: j           L_0024C754
    // 0x0024C744: nop

        goto L_0024C754;
    // 0x0024C744: nop

L_0024C748:
    // 0x0024C748: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024C74C: jal         0x0024B3E4
    // 0x0024C750: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0024B3E4(rdram, ctx);
        goto after_10;
    // 0x0024C750: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_10:
L_0024C754:
    // 0x0024C754: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0024C758: lbu         $a0, -0x5516($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5516);
    // 0x0024C75C: jal         0x00279028
    // 0x0024C760: nop

    func_00279028(rdram, ctx);
        goto after_11;
    // 0x0024C760: nop

    after_11:
    // 0x0024C764: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024C768: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0024C76C: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0024C770: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024C774: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0024C778: lwc1        $f2, 0x2034($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0024C77C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0024C780: lwc1        $f1, 0x288($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X288);
    // 0x0024C784: lh          $a1, 0x996($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X996);
    // 0x0024C788: div.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024C78C: lwc1        $f0, 0x28C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28C);
    // 0x0024C790: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C794: lwc1        $f1, 0x6C74($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C74);
    // 0x0024C798: mul.s       $f20, $f22, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0024C79C: jal         0x0024E700
    // 0x0024C7A0: div.s       $f21, $f0, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    func_0024E700(rdram, ctx);
        goto after_12;
    // 0x0024C7A0: div.s       $f21, $f0, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    after_12:
    // 0x0024C7A4: lw          $v1, 0x109C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X109C);
    // 0x0024C7A8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024C7AC: beq         $v1, $s0, L_0024C7C8
    if (ctx->r3 == ctx->r16) {
        // 0x0024C7B0: nop
    
            goto L_0024C7C8;
    }
    // 0x0024C7B0: nop

    // 0x0024C7B4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024C7B8: addiu       $a1, $a1, -0x247C
    ctx->r5 = ADD32(ctx->r5, -0X247C);
    // 0x0024C7BC: jal         0x0027AD00
    // 0x0024C7C0: addiu       $a0, $s1, 0x1064
    ctx->r4 = ADD32(ctx->r17, 0X1064);
    func_0027AD00(rdram, ctx);
        goto after_13;
    // 0x0024C7C0: addiu       $a0, $s1, 0x1064
    ctx->r4 = ADD32(ctx->r17, 0X1064);
    after_13:
    // 0x0024C7C4: sw          $s0, 0x109C($s1)
    MEM_W(0X109C, ctx->r17) = ctx->r16;
L_0024C7C8:
    // 0x0024C7C8: jal         0x0024E7D0
    // 0x0024C7CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0024E7D0(rdram, ctx);
        goto after_14;
    // 0x0024C7CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0024C7D0: lw          $v1, 0x1064($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1064);
    // 0x0024C7D4: beq         $v1, $zero, L_0024C964
    if (ctx->r3 == 0) {
        // 0x0024C7D8: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0024C964;
    }
    // 0x0024C7D8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024C7DC: lw          $v0, 0x106C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X106C);
    // 0x0024C7E0: beq         $v0, $zero, L_0024C964
    if (ctx->r2 == 0) {
        // 0x0024C7E4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024C964;
    }
    // 0x0024C7E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024C7E8: beq         $s0, $v0, L_0024C964
    if (ctx->r16 == ctx->r2) {
        // 0x0024C7EC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0024C964;
    }
    // 0x0024C7EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024C7F0: lwc1        $f2, 0x1074($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X1074);
    // 0x0024C7F4: mul.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x0024C7F8: lwc1        $f1, 0x1078($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1078);
    // 0x0024C7FC: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0024C800: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C804: lwc1        $f3, 0x6C78($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6C78);
    // 0x0024C808: mul.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f22.fl, ctx->f3.fl);
    // 0x0024C80C: lwc1        $f0, 0x290($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X290);
    // 0x0024C810: add.s       $f23, $f2, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0024C814: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x0024C818: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024C81C: lwc1        $f0, 0x28C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28C);
    // 0x0024C820: add.s       $f24, $f1, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024C824: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x0024C828: sub.s       $f0, $f23, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f23.fl - ctx->f20.fl;
    // 0x0024C82C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024C830: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024C834: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0024C838: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024C83C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0024C840: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024C844: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C848: add.s       $f0, $f24, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f21.fl;
    // 0x0024C84C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024C850: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024C854: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024C858: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C85C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024C860: jal         0x0027B320
    // 0x0024C864: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_15;
    // 0x0024C864: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_15:
    // 0x0024C868: addiu       $v0, $zero, 0xDD
    ctx->r2 = ADD32(0, 0XDD);
    // 0x0024C86C: bne         $s0, $v0, L_0024C8B4
    if (ctx->r16 != ctx->r2) {
        // 0x0024C870: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0024C8B4;
    }
    // 0x0024C870: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024C874: lwc1        $f1, 0x4F8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4F8);
    // 0x0024C878: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024C87C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0024C880: nop

    // 0x0024C884: bc1t        L_0024C8C4
    if (c1cs) {
        // 0x0024C888: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_0024C8C4;
    }
    // 0x0024C888: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0024C88C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C890: lwc1        $f0, 0x6C7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C7C);
    // 0x0024C894: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024C898: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C89C: lwc1        $f1, 0x6C80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C80);
    // 0x0024C8A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024C8A4: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024C8A8: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C8AC: j           L_0024C8C8
    // 0x0024C8B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_0024C8C8;
    // 0x0024C8B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0024C8B4:
    // 0x0024C8B4: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x0024C8B8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x0024C8BC: bne         $v1, $v0, L_0024C8C8
    if (ctx->r3 != ctx->r2) {
        // 0x0024C8C0: nop
    
            goto L_0024C8C8;
    }
    // 0x0024C8C0: nop

L_0024C8C4:
    // 0x0024C8C4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0024C8C8:
    // 0x0024C8C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C8CC: lwc1        $f0, 0x6C84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C84);
    // 0x0024C8D0: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0024C8D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024C8D8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024C8DC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024C8E0: sub.s       $f1, $f23, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f23.fl - ctx->f20.fl;
    // 0x0024C8E4: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024C8E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024C8EC: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0024C8F0: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C8F4: sub.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x0024C8F8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024C8FC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024C900: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024C904: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C908: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024C90C: jal         0x0027B320
    // 0x0024C910: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_16;
    // 0x0024C910: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_16:
    // 0x0024C914: beq         $s2, $zero, L_0024C964
    if (ctx->r18 == 0) {
        // 0x0024C918: nop
    
            goto L_0024C964;
    }
    // 0x0024C918: nop

    // 0x0024C91C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C920: lwc1        $f0, 0x6C88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C88);
    // 0x0024C924: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024C928: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C92C: lwc1        $f1, 0x6C8C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C8C);
    // 0x0024C930: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0024C934: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024C938: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0024C93C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0024C940: sub.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x0024C944: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0024C948: lw          $a0, 0x109C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X109C);
    // 0x0024C94C: sub.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f1.fl;
    // 0x0024C950: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0024C954: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024C958: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024C95C: jal         0x00277CF0
    // 0x0024C960: nop

    func_00277CF0(rdram, ctx);
        goto after_17;
    // 0x0024C960: nop

    after_17:
L_0024C964:
    // 0x0024C964: lwc1        $f2, 0x10B0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10B0);
    // 0x0024C968: mul.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x0024C96C: lwc1        $f1, 0x10B4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10B4);
    // 0x0024C970: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0024C974: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C978: lwc1        $f3, 0x6C90($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6C90);
    // 0x0024C97C: mul.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f22.fl, ctx->f3.fl);
    // 0x0024C980: lwc1        $f0, 0x290($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X290);
    // 0x0024C984: add.s       $f23, $f2, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0024C988: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x0024C98C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024C990: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x0024C994: sub.s       $f20, $f23, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f23.fl - ctx->f20.fl;
    // 0x0024C998: lwc1        $f0, 0x28C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28C);
    // 0x0024C99C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024C9A0: add.s       $f24, $f1, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024C9A4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0024C9A8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024C9AC: add.s       $f3, $f20, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f20.fl + ctx->f3.fl;
    // 0x0024C9B0: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024C9B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024C9B8: add.s       $f0, $f24, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f21.fl;
    // 0x0024C9BC: trunc.w.s   $f5, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0024C9C0: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C9C4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024C9C8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024C9CC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024C9D0: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024C9D4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024C9D8: jal         0x0027B320
    // 0x0024C9DC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_18;
    // 0x0024C9DC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_18:
    // 0x0024C9E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C9E4: lwc1        $f0, 0x6C94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C94);
    // 0x0024C9E8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0024C9EC: addiu       $a0, $zero, 0x1F7
    ctx->r4 = ADD32(0, 0X1F7);
    // 0x0024C9F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024C9F4: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024C9F8: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x0024C9FC: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CA00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024CA04: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0024CA08: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CA0C: sub.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x0024CA10: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CA14: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024CA18: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024CA1C: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CA20: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CA24: jal         0x0027B320
    // 0x0024CA28: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_19;
    // 0x0024CA28: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_19:
    // 0x0024CA2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CA30: lwc1        $f0, 0x6C98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C98);
    // 0x0024CA34: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024CA38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CA3C: lwc1        $f1, 0x6C9C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C9C);
    // 0x0024CA40: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0024CA44: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0024CA48: lw          $a0, 0x524($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X524);
    // 0x0024CA4C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CA50: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0024CA54: sub.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x0024CA58: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0024CA5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0024CA60: sub.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f1.fl;
    // 0x0024CA64: addiu       $a0, $a0, 0xFF
    ctx->r4 = ADD32(ctx->r4, 0XFF);
    // 0x0024CA68: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024CA6C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024CA70: jal         0x00277CF0
    // 0x0024CA74: sra         $a0, $a0, 8
    ctx->r4 = S32(SIGNED(ctx->r4) >> 8);
    func_00277CF0(rdram, ctx);
        goto after_20;
    // 0x0024CA74: sra         $a0, $a0, 8
    ctx->r4 = S32(SIGNED(ctx->r4) >> 8);
    after_20:
    // 0x0024CA78: lh          $s0, 0x528($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X528);
    // 0x0024CA7C: lw          $v0, 0x1150($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1150);
    // 0x0024CA80: beq         $v0, $s0, L_0024CA9C
    if (ctx->r2 == ctx->r16) {
        // 0x0024CA84: nop
    
            goto L_0024CA9C;
    }
    // 0x0024CA84: nop

    // 0x0024CA88: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024CA8C: addiu       $a1, $a1, -0x2400
    ctx->r5 = ADD32(ctx->r5, -0X2400);
    // 0x0024CA90: jal         0x0027AD00
    // 0x0024CA94: addiu       $a0, $s1, 0x1118
    ctx->r4 = ADD32(ctx->r17, 0X1118);
    func_0027AD00(rdram, ctx);
        goto after_21;
    // 0x0024CA94: addiu       $a0, $s1, 0x1118
    ctx->r4 = ADD32(ctx->r17, 0X1118);
    after_21:
    // 0x0024CA98: sw          $s0, 0x1150($s1)
    MEM_W(0X1150, ctx->r17) = ctx->r16;
L_0024CA9C:
    // 0x0024CA9C: lw          $v0, 0x1118($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1118);
    // 0x0024CAA0: beq         $v0, $zero, L_0024CBBC
    if (ctx->r2 == 0) {
        // 0x0024CAA4: nop
    
            goto L_0024CBBC;
    }
    // 0x0024CAA4: nop

    // 0x0024CAA8: lw          $v0, 0x1120($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1120);
    // 0x0024CAAC: beq         $v0, $zero, L_0024CBBC
    if (ctx->r2 == 0) {
        // 0x0024CAB0: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_0024CBBC;
    }
    // 0x0024CAB0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x0024CAB4: lwc1        $f3, 0x1128($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X1128);
    // 0x0024CAB8: mul.s       $f3, $f3, $f22
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f22.fl);
    // 0x0024CABC: lwc1        $f1, 0x112C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X112C);
    // 0x0024CAC0: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0024CAC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CAC8: lwc1        $f4, 0x6CA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6CA0);
    // 0x0024CACC: mul.s       $f4, $f22, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x0024CAD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CAD4: lwc1        $f2, 0x6CA4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6CA4);
    // 0x0024CAD8: mul.s       $f2, $f21, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f2.fl);
    // 0x0024CADC: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x0024CAE0: add.s       $f24, $f1, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024CAE4: lwc1        $f0, 0x290($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X290);
    // 0x0024CAE8: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0024CAEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0024CAF0: lwc1        $f0, 0x288($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X288);
    // 0x0024CAF4: add.s       $f2, $f24, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f24.fl + ctx->f2.fl;
    // 0x0024CAF8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024CAFC: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CB00: add.s       $f23, $f3, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0024CB04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024CB08: trunc.w.s   $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0024CB0C: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CB10: add.s       $f4, $f23, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f23.fl + ctx->f4.fl;
    // 0x0024CB14: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CB18: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x0024CB1C: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0024CB20: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CB24: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CB28: jal         0x0027B320
    // 0x0024CB2C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_0027B320(rdram, ctx);
        goto after_22;
    // 0x0024CB2C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_22:
    // 0x0024CB30: addiu       $a0, $zero, 0x1F5
    ctx->r4 = ADD32(0, 0X1F5);
    // 0x0024CB34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CB38: lwc1        $f0, 0x6CA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CA8);
    // 0x0024CB3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024CB40: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0024CB44: trunc.w.s   $f5, $f23
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f23.fl);
    // 0x0024CB48: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CB4C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CB50: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024CB54: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024CB58: add.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x0024CB5C: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CB60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024CB64: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024CB68: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CB6C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CB70: jal         0x0027B320
    // 0x0024CB74: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_23;
    // 0x0024CB74: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_23:
    // 0x0024CB78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CB7C: lwc1        $f0, 0x6CAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CAC);
    // 0x0024CB80: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024CB84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CB88: lwc1        $f1, 0x6CB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CB0);
    // 0x0024CB8C: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0024CB90: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0024CB94: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0024CB98: add.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f1.fl;
    // 0x0024CB9C: lh          $a0, 0x528($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X528);
    // 0x0024CBA0: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024CBA4: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024CBA8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CBAC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0024CBB0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024CBB4: jal         0x00277CF0
    // 0x0024CBB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_00277CF0(rdram, ctx);
        goto after_24;
    // 0x0024CBB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_24:
L_0024CBBC:
    // 0x0024CBBC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024CBC0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024CBC4: bne         $v0, $zero, L_0024CD0C
    if (ctx->r2 != 0) {
        // 0x0024CBC8: nop
    
            goto L_0024CD0C;
    }
    // 0x0024CBC8: nop

    // 0x0024CBCC: lh          $s0, 0x52A($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X52A);
    // 0x0024CBD0: lw          $v0, 0x1114($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1114);
    // 0x0024CBD4: beq         $v0, $s0, L_0024CBF0
    if (ctx->r2 == ctx->r16) {
        // 0x0024CBD8: nop
    
            goto L_0024CBF0;
    }
    // 0x0024CBD8: nop

    // 0x0024CBDC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024CBE0: addiu       $a1, $a1, -0x2440
    ctx->r5 = ADD32(ctx->r5, -0X2440);
    // 0x0024CBE4: jal         0x0027AD00
    // 0x0024CBE8: addiu       $a0, $s1, 0x10DC
    ctx->r4 = ADD32(ctx->r17, 0X10DC);
    func_0027AD00(rdram, ctx);
        goto after_25;
    // 0x0024CBE8: addiu       $a0, $s1, 0x10DC
    ctx->r4 = ADD32(ctx->r17, 0X10DC);
    after_25:
    // 0x0024CBEC: sw          $s0, 0x1114($s1)
    MEM_W(0X1114, ctx->r17) = ctx->r16;
L_0024CBF0:
    // 0x0024CBF0: lw          $v0, 0x10DC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10DC);
    // 0x0024CBF4: beq         $v0, $zero, L_0024CCFC
    if (ctx->r2 == 0) {
        // 0x0024CBF8: nop
    
            goto L_0024CCFC;
    }
    // 0x0024CBF8: nop

    // 0x0024CBFC: lw          $v0, 0x10E4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10E4);
    // 0x0024CC00: beq         $v0, $zero, L_0024CCFC
    if (ctx->r2 == 0) {
        // 0x0024CC04: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_0024CCFC;
    }
    // 0x0024CC04: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x0024CC08: lwc1        $f1, 0x10EC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10EC);
    // 0x0024CC0C: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x0024CC10: lwc1        $f3, 0x10F0($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X10F0);
    // 0x0024CC14: mul.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f21.fl);
    // 0x0024CC18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CC1C: lwc1        $f2, 0x6CB4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6CB4);
    // 0x0024CC20: mul.s       $f2, $f22, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x0024CC24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CC28: lwc1        $f4, 0x6CB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6CB8);
    // 0x0024CC2C: mul.s       $f4, $f21, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f21.fl, ctx->f4.fl);
    // 0x0024CC30: lwc1        $f0, 0x290($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X290);
    // 0x0024CC34: add.s       $f23, $f1, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024CC38: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x0024CC3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024CC40: add.s       $f24, $f3, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0024CC44: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024CC48: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024CC4C: add.s       $f2, $f23, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f23.fl + ctx->f2.fl;
    // 0x0024CC50: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CC54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024CC58: add.s       $f4, $f24, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f4.fl;
    // 0x0024CC5C: trunc.w.s   $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0024CC60: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CC64: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CC68: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024CC6C: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0024CC70: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CC74: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CC78: jal         0x0027B320
    // 0x0024CC7C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_26;
    // 0x0024CC7C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_26:
    // 0x0024CC80: addiu       $a0, $zero, 0x1F6
    ctx->r4 = ADD32(0, 0X1F6);
    // 0x0024CC84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024CC88: trunc.w.s   $f5, $f23
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f23.fl);
    // 0x0024CC8C: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CC90: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CC94: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024CC98: trunc.w.s   $f5, $f24
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 24);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f24.fl);
    // 0x0024CC9C: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CCA0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CCA4: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x0024CCA8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024CCAC: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CCB0: jal         0x0027B320
    // 0x0024CCB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_0027B320(rdram, ctx);
        goto after_27;
    // 0x0024CCB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_27:
    // 0x0024CCB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CCBC: lwc1        $f0, 0x6CBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CBC);
    // 0x0024CCC0: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024CCC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CCC8: lwc1        $f1, 0x6CC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CC0);
    // 0x0024CCCC: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0024CCD0: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0024CCD4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0024CCD8: add.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f1.fl;
    // 0x0024CCDC: lh          $a0, 0x52A($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X52A);
    // 0x0024CCE0: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024CCE4: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024CCE8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CCEC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0024CCF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0024CCF4: jal         0x00277CF0
    // 0x0024CCF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_00277CF0(rdram, ctx);
        goto after_28;
    // 0x0024CCF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_28:
L_0024CCFC:
    // 0x0024CCFC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024CD00: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024CD04: beq         $v0, $zero, L_0024CF0C
    if (ctx->r2 == 0) {
        // 0x0024CD08: nop
    
            goto L_0024CF0C;
    }
    // 0x0024CD08: nop

L_0024CD0C:
    // 0x0024CD0C: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024CD10: lhu         $s0, 0x4($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X4);
    // 0x0024CD14: lw          $v0, 0x1240($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1240);
    // 0x0024CD18: beq         $v0, $s0, L_0024CD34
    if (ctx->r2 == ctx->r16) {
        // 0x0024CD1C: nop
    
            goto L_0024CD34;
    }
    // 0x0024CD1C: nop

    // 0x0024CD20: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024CD24: addiu       $a1, $a1, -0x23C0
    ctx->r5 = ADD32(ctx->r5, -0X23C0);
    // 0x0024CD28: jal         0x0027AD00
    // 0x0024CD2C: addiu       $a0, $s1, 0x1208
    ctx->r4 = ADD32(ctx->r17, 0X1208);
    func_0027AD00(rdram, ctx);
        goto after_29;
    // 0x0024CD2C: addiu       $a0, $s1, 0x1208
    ctx->r4 = ADD32(ctx->r17, 0X1208);
    after_29:
    // 0x0024CD30: sw          $s0, 0x1240($s1)
    MEM_W(0X1240, ctx->r17) = ctx->r16;
L_0024CD34:
    // 0x0024CD34: lw          $v0, 0x1208($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1208);
    // 0x0024CD38: beq         $v0, $zero, L_0024CE04
    if (ctx->r2 == 0) {
        // 0x0024CD3C: nop
    
            goto L_0024CE04;
    }
    // 0x0024CD3C: nop

    // 0x0024CD40: lw          $v0, 0x1210($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1210);
    // 0x0024CD44: beq         $v0, $zero, L_0024CE04
    if (ctx->r2 == 0) {
        // 0x0024CD48: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_0024CE04;
    }
    // 0x0024CD48: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x0024CD4C: lwc1        $f2, 0x1218($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X1218);
    // 0x0024CD50: mul.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x0024CD54: lwc1        $f0, 0x121C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X121C);
    // 0x0024CD58: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0024CD5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CD60: lwc1        $f3, 0x6CC4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6CC4);
    // 0x0024CD64: mul.s       $f3, $f21, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f21.fl, ctx->f3.fl);
    // 0x0024CD68: lwc1        $f1, 0x294($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X294);
    // 0x0024CD6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024CD70: add.s       $f24, $f0, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024CD74: lwc1        $f0, 0x290($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X290);
    // 0x0024CD78: lwc1        $f1, 0x288($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X288);
    // 0x0024CD7C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0024CD80: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024CD84: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024CD88: add.s       $f23, $f2, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0024CD8C: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CD90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024CD94: add.s       $f3, $f24, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f24.fl + ctx->f3.fl;
    // 0x0024CD98: trunc.w.s   $f5, $f23
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f23.fl);
    // 0x0024CD9C: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CDA0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CDA4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024CDA8: trunc.w.s   $f5, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0024CDAC: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CDB0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CDB4: jal         0x0027B320
    // 0x0024CDB8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_30;
    // 0x0024CDB8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_30:
    // 0x0024CDBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CDC0: lwc1        $f0, 0x6CC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CC8);
    // 0x0024CDC4: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024CDC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CDCC: lwc1        $f1, 0x6CCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CCC);
    // 0x0024CDD0: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0024CDD4: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0024CDD8: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024CDDC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0024CDE0: add.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f1.fl;
    // 0x0024CDE4: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x0024CDE8: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024CDEC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024CDF0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CDF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0024CDF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024CDFC: jal         0x00277CF0
    // 0x0024CE00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_00277CF0(rdram, ctx);
        goto after_31;
    // 0x0024CE00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_31:
L_0024CE04:
    // 0x0024CE04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024CE08: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0024CE0C: beq         $v0, $zero, L_0024CF0C
    if (ctx->r2 == 0) {
        // 0x0024CE10: nop
    
            goto L_0024CF0C;
    }
    // 0x0024CE10: nop

    // 0x0024CE14: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024CE18: lhu         $s0, 0x6($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X6);
    // 0x0024CE1C: lw          $v0, 0x127C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X127C);
    // 0x0024CE20: beq         $v0, $s0, L_0024CE3C
    if (ctx->r2 == ctx->r16) {
        // 0x0024CE24: nop
    
            goto L_0024CE3C;
    }
    // 0x0024CE24: nop

    // 0x0024CE28: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024CE2C: addiu       $a1, $a1, -0x2380
    ctx->r5 = ADD32(ctx->r5, -0X2380);
    // 0x0024CE30: jal         0x0027AD00
    // 0x0024CE34: addiu       $a0, $s1, 0x1244
    ctx->r4 = ADD32(ctx->r17, 0X1244);
    func_0027AD00(rdram, ctx);
        goto after_32;
    // 0x0024CE34: addiu       $a0, $s1, 0x1244
    ctx->r4 = ADD32(ctx->r17, 0X1244);
    after_32:
    // 0x0024CE38: sw          $s0, 0x127C($s1)
    MEM_W(0X127C, ctx->r17) = ctx->r16;
L_0024CE3C:
    // 0x0024CE3C: lw          $v0, 0x1244($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1244);
    // 0x0024CE40: beq         $v0, $zero, L_0024CF0C
    if (ctx->r2 == 0) {
        // 0x0024CE44: nop
    
            goto L_0024CF0C;
    }
    // 0x0024CE44: nop

    // 0x0024CE48: lw          $v0, 0x124C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X124C);
    // 0x0024CE4C: beq         $v0, $zero, L_0024CF0C
    if (ctx->r2 == 0) {
        // 0x0024CE50: addiu       $a0, $zero, 0x1FD
        ctx->r4 = ADD32(0, 0X1FD);
            goto L_0024CF0C;
    }
    // 0x0024CE50: addiu       $a0, $zero, 0x1FD
    ctx->r4 = ADD32(0, 0X1FD);
    // 0x0024CE54: lwc1        $f2, 0x1254($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X1254);
    // 0x0024CE58: mul.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x0024CE5C: lwc1        $f0, 0x1258($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1258);
    // 0x0024CE60: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0024CE64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CE68: lwc1        $f3, 0x6CD0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6CD0);
    // 0x0024CE6C: mul.s       $f3, $f21, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f21.fl, ctx->f3.fl);
    // 0x0024CE70: lwc1        $f1, 0x294($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X294);
    // 0x0024CE74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024CE78: add.s       $f24, $f0, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024CE7C: lwc1        $f0, 0x290($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X290);
    // 0x0024CE80: lwc1        $f1, 0x288($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X288);
    // 0x0024CE84: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0024CE88: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024CE8C: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0024CE90: add.s       $f23, $f2, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0024CE94: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CE98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024CE9C: add.s       $f3, $f24, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f24.fl + ctx->f3.fl;
    // 0x0024CEA0: trunc.w.s   $f5, $f23
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f23.fl);
    // 0x0024CEA4: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CEA8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0024CEAC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0024CEB0: trunc.w.s   $f5, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0024CEB4: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0024CEB8: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0024CEBC: jal         0x0027B320
    // 0x0024CEC0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_33;
    // 0x0024CEC0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_33:
    // 0x0024CEC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CEC8: lwc1        $f0, 0x6CD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CD4);
    // 0x0024CECC: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0024CED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CED4: lwc1        $f1, 0x6CD8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CD8);
    // 0x0024CED8: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0024CEDC: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x0024CEE0: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024CEE4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x0024CEE8: add.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f1.fl;
    // 0x0024CEEC: lhu         $a0, 0x6($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X6);
    // 0x0024CEF0: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0024CEF4: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x0024CEF8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024CEFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0024CF00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024CF04: jal         0x00277CF0
    // 0x0024CF08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_00277CF0(rdram, ctx);
        goto after_34;
    // 0x0024CF08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_34:
L_0024CF0C:
    // 0x0024CF0C: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024CF10: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x0024CF14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024CF18: bne         $v1, $v0, L_0024CF28
    if (ctx->r3 != ctx->r2) {
        // 0x0024CF1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024CF28;
    }
    // 0x0024CF1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024CF20: jal         0x00254768
    // 0x0024CF24: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00254768(rdram, ctx);
        goto after_35;
    // 0x0024CF24: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_35:
L_0024CF28:
    // 0x0024CF28: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0024CF2C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0024CF30: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0024CF34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0024CF38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0024CF3C: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x0024CF40: ldc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X50);
    // 0x0024CF44: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x0024CF48: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0024CF4C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0024CF50: jr          $ra
    // 0x0024CF54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0024CF54: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00224DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224DF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00224DF8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00224DFC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00224E00: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00224E04: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00224E08: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00224E0C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00224E10: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00224E14: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00224E18: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00224E1C: lw          $a0, 0x7C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X7C);
    // 0x00224E20: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00224E24: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x00224E28: jal         0x00266D24
    // 0x00224E2C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_00266D24(rdram, ctx);
        goto after_0;
    // 0x00224E2C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x00224E30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00224E34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00224E38: beq         $a2, $v0, L_00224EB4
    if (ctx->r6 == ctx->r2) {
        // 0x00224E3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00224EB4;
    }
    // 0x00224E3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00224E40: blez        $s1, L_00224E6C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00224E44: slti        $v0, $s1, 0x7
        ctx->r2 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
            goto L_00224E6C;
    }
    // 0x00224E44: slti        $v0, $s1, 0x7
    ctx->r2 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x00224E48: bnel        $v0, $zero, L_00224E70
    if (ctx->r2 != 0) {
        // 0x00224E4C: ori         $s0, $s0, 0x18
        ctx->r16 = ctx->r16 | 0X18;
            goto L_00224E70;
    }
    goto skip_0;
    // 0x00224E4C: ori         $s0, $s0, 0x18
    ctx->r16 = ctx->r16 | 0X18;
    skip_0:
    // 0x00224E50: slti        $v0, $s1, 0x69
    ctx->r2 = SIGNED(ctx->r17) < 0X69 ? 1 : 0;
    // 0x00224E54: beq         $v0, $zero, L_00224E6C
    if (ctx->r2 == 0) {
        // 0x00224E58: slti        $v0, $s1, 0x64
        ctx->r2 = SIGNED(ctx->r17) < 0X64 ? 1 : 0;
            goto L_00224E6C;
    }
    // 0x00224E58: slti        $v0, $s1, 0x64
    ctx->r2 = SIGNED(ctx->r17) < 0X64 ? 1 : 0;
    // 0x00224E5C: bnel        $v0, $zero, L_00224E70
    if (ctx->r2 != 0) {
        // 0x00224E60: ori         $s0, $s0, 0x4
        ctx->r16 = ctx->r16 | 0X4;
            goto L_00224E70;
    }
    goto skip_1;
    // 0x00224E60: ori         $s0, $s0, 0x4
    ctx->r16 = ctx->r16 | 0X4;
    skip_1:
    // 0x00224E64: j           L_00224E70
    // 0x00224E68: ori         $s0, $s0, 0x18
    ctx->r16 = ctx->r16 | 0X18;
        goto L_00224E70;
    // 0x00224E68: ori         $s0, $s0, 0x18
    ctx->r16 = ctx->r16 | 0X18;
L_00224E6C:
    // 0x00224E6C: ori         $s0, $s0, 0x4
    ctx->r16 = ctx->r16 | 0X4;
L_00224E70:
    // 0x00224E70: lw          $a0, 0x48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X48);
    // 0x00224E74: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00224E78: jal         0x0020185C
    // 0x00224E7C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x00224E7C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00224E80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00224E84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00224E88: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00224E8C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00224E90: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x00224E94: addiu       $v0, $v0, 0xAE0
    ctx->r2 = ADD32(ctx->r2, 0XAE0);
    // 0x00224E98: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00224E9C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00224EA0: addiu       $v0, $v0, 0x5F48
    ctx->r2 = ADD32(ctx->r2, 0X5F48);
    // 0x00224EA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00224EA8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00224EAC: jal         0x0020367C
    // 0x00224EB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x00224EB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_2:
L_00224EB4:
    // 0x00224EB4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00224EB8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00224EBC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00224EC0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00224EC4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00224EC8: jr          $ra
    // 0x00224ECC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00224ECC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002883CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002883CC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002883D0: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA50);
    // 0x002883D4: sw          $v0, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r2;
    // 0x002883D8: jr          $ra
    // 0x002883DC: nop

    return;
    // 0x002883DC: nop

;}
RECOMP_FUNC void func_0025748C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025748C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00257490: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00257494: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00257498: beq         $v0, $zero, L_00257564
    if (ctx->r2 == 0) {
        // 0x0025749C: nop
    
            goto L_00257564;
    }
    // 0x0025749C: nop

    // 0x002574A0: lw          $v0, 0x520($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X520);
    // 0x002574A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002574A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002574AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002574B0: lwc1        $f0, -0x2278($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2278);
    // 0x002574B4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x002574B8: nop

    // 0x002574BC: bc1t        L_00257564
    if (c1cs) {
        // 0x002574C0: nop
    
            goto L_00257564;
    }
    // 0x002574C0: nop

    // 0x002574C4: lwc1        $f3, 0x524($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X524);
    // 0x002574C8: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x002574CC: c.eq.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl == ctx->f2.fl;
    // 0x002574D0: nop

    // 0x002574D4: bc1t        L_00257564
    if (c1cs) {
        // 0x002574D8: nop
    
            goto L_00257564;
    }
    // 0x002574D8: nop

    // 0x002574DC: lw          $v0, 0x518($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X518);
    // 0x002574E0: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x002574E4: bne         $v0, $zero, L_00257564
    if (ctx->r2 != 0) {
        // 0x002574E8: nop
    
            goto L_00257564;
    }
    // 0x002574E8: nop

    // 0x002574EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002574F0: lwc1        $f1, 0x7220($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7220);
    // 0x002574F4: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002574F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002574FC: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00257500: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00257504: lwc1        $f0, 0x7224($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7224);
    // 0x00257508: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0025750C: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00257510: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00257514: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00257518: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0025751C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00257520: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00257524: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x00257528: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0025752C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00257530: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00257534: bgez        $v0, L_00257548
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00257538: add.s       $f2, $f3, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f0.fl;
            goto L_00257548;
    }
    // 0x00257538: add.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0025753C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00257540: ldc1        $f0, 0x7228($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X7228);
    // 0x00257544: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_00257548:
    // 0x00257548: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0025754C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00257550: nop

    // 0x00257554: bc1fl       L_0025755C
    if (!c1cs) {
        // 0x00257558: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0025755C;
    }
    goto skip_0;
    // 0x00257558: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_0:
L_0025755C:
    // 0x0025755C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00257560: swc1        $f4, 0x524($a0)
    MEM_W(0X524, ctx->r4) = ctx->f4.u32l;
L_00257564:
    // 0x00257564: jr          $ra
    // 0x00257568: nop

    return;
    // 0x00257568: nop

;}
RECOMP_FUNC void func_0029EEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029EEA0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0029EEA4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x0029EEA8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0029EEAC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0029EEB0: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x0029EEB4: addiu       $s7, $s7, -0x7610
    ctx->r23 = ADD32(ctx->r23, -0X7610);
    // 0x0029EEB8: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x0029EEBC: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x0029EEC0: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x0029EEC4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x0029EEC8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0029EECC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0029EED0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0029EED4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0029EED8: bne         $v1, $a0, L_0029EEE8
    if (ctx->r3 != ctx->r4) {
        // 0x0029EEDC: sw          $s0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r16;
            goto L_0029EEE8;
    }
    // 0x0029EEDC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0029EEE0: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x0029EEE4: addiu       $s7, $s7, -0x75FC
    ctx->r23 = ADD32(ctx->r23, -0X75FC);
L_0029EEE8:
    // 0x0029EEE8: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x0029EEEC: beq         $v1, $v0, L_0029EF0C
    if (ctx->r3 == ctx->r2) {
        // 0x0029EEF0: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_0029EF0C;
    }
    // 0x0029EEF0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x0029EEF4: beq         $v1, $v0, L_0029EF10
    if (ctx->r3 == ctx->r2) {
        // 0x0029EEF8: addiu       $s6, $zero, 0x10
        ctx->r22 = ADD32(0, 0X10);
            goto L_0029EF10;
    }
    // 0x0029EEF8: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x0029EEFC: bnel        $v1, $a0, L_0029EF10
    if (ctx->r3 != ctx->r4) {
        // 0x0029EF00: addiu       $s6, $zero, 0xA
        ctx->r22 = ADD32(0, 0XA);
            goto L_0029EF10;
    }
    goto skip_0;
    // 0x0029EF00: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    skip_0:
    // 0x0029EF04: j           L_0029EF14
    // 0x0029EF08: addiu       $s4, $zero, 0x18
    ctx->r20 = ADD32(0, 0X18);
        goto L_0029EF14;
    // 0x0029EF08: addiu       $s4, $zero, 0x18
    ctx->r20 = ADD32(0, 0X18);
L_0029EF0C:
    // 0x0029EF0C: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
L_0029EF10:
    // 0x0029EF10: addiu       $s4, $zero, 0x18
    ctx->r20 = ADD32(0, 0X18);
L_0029EF14:
    // 0x0029EF14: lw          $s2, 0x0($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X0);
    // 0x0029EF18: lw          $s3, 0x4($s5)
    ctx->r19 = MEM_W(ctx->r21, 0X4);
    // 0x0029EF1C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x0029EF20: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x0029EF24: beq         $a1, $v0, L_0029EF34
    if (ctx->r5 == ctx->r2) {
        // 0x0029EF28: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_0029EF34;
    }
    // 0x0029EF28: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x0029EF2C: bne         $a1, $v0, L_0029EF54
    if (ctx->r5 != ctx->r2) {
        // 0x0029EF30: or          $v0, $s3, $s2
        ctx->r2 = ctx->r19 | ctx->r18;
            goto L_0029EF54;
    }
    // 0x0029EF30: or          $v0, $s3, $s2
    ctx->r2 = ctx->r19 | ctx->r18;
L_0029EF34:
    // 0x0029EF34: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0029EF38: bgez        $v0, L_0029EF54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0029EF3C: or          $v0, $s3, $s2
        ctx->r2 = ctx->r19 | ctx->r18;
            goto L_0029EF54;
    }
    // 0x0029EF3C: or          $v0, $s3, $s2
    ctx->r2 = ctx->r19 | ctx->r18;
    // 0x0029EF40: negu        $s3, $s3
    ctx->r19 = SUB32(0, ctx->r19);
    // 0x0029EF44: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    // 0x0029EF48: sltu        $v0, $zero, $s3
    ctx->r2 = 0 < ctx->r19 ? 1 : 0;
    // 0x0029EF4C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x0029EF50: or          $v0, $s3, $s2
    ctx->r2 = ctx->r19 | ctx->r18;
L_0029EF54:
    // 0x0029EF54: bnel        $v0, $zero, L_0029EF6C
    if (ctx->r2 != 0) {
        // 0x0029EF58: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_0029EF6C;
    }
    goto skip_1;
    // 0x0029EF58: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    skip_1:
    // 0x0029EF5C: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x0029EF60: beq         $v0, $zero, L_0029EF98
    if (ctx->r2 == 0) {
        // 0x0029EF64: addu        $a3, $s6, $zero
        ctx->r7 = ADD32(ctx->r22, 0);
            goto L_0029EF98;
    }
    // 0x0029EF64: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x0029EF68: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_0029EF6C:
    // 0x0029EF6C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x0029EF70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0029EF74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029EF78: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029EF7C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0029EF80: jal         0x002A4BE0
    // 0x0029EF84: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    func_002A4BE0(rdram, ctx);
        goto after_0;
    // 0x0029EF84: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    after_0:
    // 0x0029EF88: addu        $v0, $s7, $v1
    ctx->r2 = ADD32(ctx->r23, ctx->r3);
    // 0x0029EF8C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0029EF90: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0029EF94: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_0029EF98:
    // 0x0029EF98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0029EF9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029EFA0: jal         0x002A4650
    // 0x0029EFA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002A4650(rdram, ctx);
        goto after_1;
    // 0x0029EFA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0029EFA8: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x0029EFAC: sw          $v1, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r3;
    // 0x0029EFB0: j           L_0029F030
    // 0x0029EFB4: nop

        goto L_0029F030;
    // 0x0029EFB4: nop

L_0029EFB8:
    // 0x0029EFB8: blezl       $s4, L_0029F050
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0029EFBC: addiu       $a1, $sp, 0x10
        ctx->r5 = ADD32(ctx->r29, 0X10);
            goto L_0029F050;
    }
    goto skip_2;
    // 0x0029EFBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    skip_2:
    // 0x0029EFC0: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    // 0x0029EFC4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0029EFC8: lw          $s2, 0x0($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X0);
    // 0x0029EFCC: lw          $s3, 0x4($s5)
    ctx->r19 = MEM_W(ctx->r21, 0X4);
    // 0x0029EFD0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0029EFD4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x0029EFD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029EFDC: jal         0x002A3AE0
    // 0x0029EFE0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002A3AE0(rdram, ctx);
        goto after_2;
    // 0x0029EFE0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0029EFE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029EFE8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029EFEC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0029EFF0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0029EFF4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0029EFF8: jal         0x002A40D0
    // 0x0029EFFC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_002A40D0(rdram, ctx);
        goto after_3;
    // 0x0029EFFC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0029F000: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0029F004: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x0029F008: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x0029F00C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x0029F010: sw          $a0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r4;
    // 0x0029F014: sw          $a1, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r5;
    // 0x0029F018: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0029F01C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x0029F020: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x0029F024: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0029F028: addu        $v0, $sp, $s4
    ctx->r2 = ADD32(ctx->r29, ctx->r20);
    // 0x0029F02C: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
L_0029F030:
    // 0x0029F030: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0029F034: bgtz        $v0, L_0029EFB8
    if (SIGNED(ctx->r2) > 0) {
        // 0x0029F038: nop
    
            goto L_0029EFB8;
    }
    // 0x0029F038: nop

    // 0x0029F03C: bne         $v0, $zero, L_0029F050
    if (ctx->r2 != 0) {
        // 0x0029F040: addiu       $a1, $sp, 0x10
        ctx->r5 = ADD32(ctx->r29, 0X10);
            goto L_0029F050;
    }
    // 0x0029F040: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0029F044: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0029F048: bne         $v0, $zero, L_0029EFB8
    if (ctx->r2 != 0) {
        // 0x0029F04C: nop
    
            goto L_0029EFB8;
    }
    // 0x0029F04C: nop

L_0029F050:
    // 0x0029F050: addu        $a1, $a1, $s4
    ctx->r5 = ADD32(ctx->r5, ctx->r20);
    // 0x0029F054: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0029F058: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    // 0x0029F05C: subu        $a2, $a2, $s4
    ctx->r6 = SUB32(ctx->r6, ctx->r20);
    // 0x0029F060: jal         0x0029E460
    // 0x0029F064: sw          $a2, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r6;
    func_0029E460(rdram, ctx);
        goto after_4;
    // 0x0029F064: sw          $a2, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r6;
    after_4:
    // 0x0029F068: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x0029F06C: lw          $v1, 0x24($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X24);
    // 0x0029F070: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0029F074: beq         $v0, $zero, L_0029F080
    if (ctx->r2 == 0) {
        // 0x0029F078: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_0029F080;
    }
    // 0x0029F078: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x0029F07C: sw          $v0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r2;
L_0029F080:
    // 0x0029F080: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x0029F084: bgez        $v0, L_0029F0C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0029F088: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_0029F0C4;
    }
    // 0x0029F088: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x0029F08C: lw          $v0, 0x30($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X30);
    // 0x0029F090: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x0029F094: bne         $v0, $v1, L_0029F0C4
    if (ctx->r2 != ctx->r3) {
        // 0x0029F098: nop
    
            goto L_0029F0C4;
    }
    // 0x0029F098: nop

    // 0x0029F09C: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x0029F0A0: lw          $v1, 0xC($s5)
    ctx->r3 = MEM_W(ctx->r21, 0XC);
    // 0x0029F0A4: lw          $a0, 0x10($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X10);
    // 0x0029F0A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0029F0AC: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    // 0x0029F0B0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0029F0B4: subu        $s4, $v0, $v1
    ctx->r20 = SUB32(ctx->r2, ctx->r3);
    // 0x0029F0B8: blez        $s4, L_0029F0C4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0029F0BC: addu        $v0, $a0, $s4
        ctx->r2 = ADD32(ctx->r4, ctx->r20);
            goto L_0029F0C4;
    }
    // 0x0029F0BC: addu        $v0, $a0, $s4
    ctx->r2 = ADD32(ctx->r4, ctx->r20);
    // 0x0029F0C0: sw          $v0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r2;
L_0029F0C4:
    // 0x0029F0C4: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x0029F0C8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0029F0CC: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0029F0D0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0029F0D4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0029F0D8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0029F0DC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0029F0E0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0029F0E4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0029F0E8: jr          $ra
    // 0x0029F0EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0029F0EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0020F1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F1D8: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F1DC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0020F1E0: mul.s       $f2, $f5, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x0020F1E4: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F1E8: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020F1EC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F1F0: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020F1F4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F1F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F1FC: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0020F200: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F204: mul.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0020F208: sub.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x0020F20C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x0020F210: swc1        $f5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0020F214: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020F218: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020F21C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020F220: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F224: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0020F228: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020F22C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F230: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F234: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020F238: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0020F23C: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    // 0x0020F240: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x0020F244: lw          $a3, 0x4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4);
    // 0x0020F248: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x0020F24C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0020F250: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x0020F254: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x0020F258: jr          $ra
    // 0x0020F25C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x0020F25C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0025620C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025620C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256210: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256214: jal         0x00251698
    // 0x00256218: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256218: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x0025621C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256220: jr          $ra
    // 0x00256224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026E378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E37C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026E380: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026E384: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x0026E388: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026E38C: bne         $v1, $v0, L_0026E39C
    if (ctx->r3 != ctx->r2) {
        // 0x0026E390: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0026E39C;
    }
    // 0x0026E390: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E394: jal         0x00412314
    // 0x0026E398: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x0026E398: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0026E39C:
    // 0x0026E39C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E3A0: jr          $ra
    // 0x0026E3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00273A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273A34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273A38: lwc1        $f0, -0x7E94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E94);
    // 0x00273A3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00273A40: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00273A44: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00273A48: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x00273A4C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x00273A50: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    // 0x00273A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00273A58: sw          $a1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r5;
    // 0x00273A5C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00273A60: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x00273A64: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00273A68: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x00273A6C: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x00273A70: sw          $zero, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = 0;
    // 0x00273A74: sw          $zero, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = 0;
    // 0x00273A78: sw          $zero, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = 0;
    // 0x00273A7C: sw          $zero, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = 0;
    // 0x00273A80: sw          $v0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r2;
    // 0x00273A84: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x00273A88: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00273A8C: jr          $ra
    // 0x00273A90: swc1        $f0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00273A90: swc1        $f0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00238C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238C8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238C94: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238C98: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00238C9C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238CA0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238CA4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238CA8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00238CAC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238CB0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x00238CB4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00238CB8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00238CBC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00238CC0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x00238CC4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238CC8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238CCC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238CD0: jal         0x00237AFC
    // 0x00238CD4: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00238CD4: nop

    after_0:
    // 0x00238CD8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238CDC: jr          $ra
    // 0x00238CE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238CE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00289838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028983C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289840: jal         0x00288DD0
    // 0x00289844: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    func_00288DD0(rdram, ctx);
        goto after_0;
    // 0x00289844: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    after_0:
    // 0x00289848: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028984C: jr          $ra
    // 0x00289850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045A0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A0CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045A0D0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045A0D4: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0045A0D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045A0DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045A0E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045A0E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045A0E8: bne         $v1, $v0, L_0045A144
    if (ctx->r3 != ctx->r2) {
        // 0x0045A0EC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0045A144;
    }
    // 0x0045A0EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045A0F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045A0F4: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0045A0F8: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_0045A0FC:
    // 0x0045A0FC: jal         0x004263A0
    // 0x0045A100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x0045A100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0045A104: jal         0x0042647C
    // 0x0045A108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_1;
    // 0x0045A108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0045A10C: bne         $v0, $s2, L_0045A134
    if (ctx->r2 != ctx->r18) {
        // 0x0045A110: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0045A134;
    }
    // 0x0045A110: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0045A114: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045A118: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0045A11C: beql        $v0, $zero, L_0045A124
    if (ctx->r2 == 0) {
        // 0x0045A120: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0045A124;
    }
    goto skip_0;
    // 0x0045A120: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0045A124:
    // 0x0045A124: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0045A128: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0045A12C: bne         $v0, $zero, L_0045A0FC
    if (ctx->r2 != 0) {
        // 0x0045A130: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0045A0FC;
    }
    // 0x0045A130: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0045A134:
    // 0x0045A134: beql        $s1, $v0, L_0045A13C
    if (ctx->r17 == ctx->r2) {
        // 0x0045A138: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045A13C;
    }
    goto skip_1;
    // 0x0045A138: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_1:
L_0045A13C:
    // 0x0045A13C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A140: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
L_0045A144:
    // 0x0045A144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045A148: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045A14C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045A150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045A154: jr          $ra
    // 0x0045A158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045A158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028961C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028961C: jr          $ra
    // 0x00289620: nop

    return;
    // 0x00289620: nop

;}
RECOMP_FUNC void func_00277088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277088: bne         $a0, $v0, L_002770C0
    if (ctx->r4 != ctx->r2) {
        // 0x0027708C: nop
    
            goto L_002770C0;
    }
    // 0x0027708C: nop

    // 0x00277090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00277094: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00277098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027709C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002770A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002770A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x002770A8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002770AC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002770B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002770B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002770B8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x002770BC: jal         0x00284188
    // 0x002770C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00284188(rdram, ctx);
        goto after_0;
L_002770C0:
    // 0x002770C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002770C4: bne         $v0, $zero, L_002772FC
    if (ctx->r2 != 0) {
        // 0x002770C8: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_002772FC;
    }
    // 0x002770C8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x002770CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002770D0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x002770D4: bne         $v1, $v0, L_002772FC
    if (ctx->r3 != ctx->r2) {
        // 0x002770D8: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_002772FC;
    }
    // 0x002770D8: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x002770DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002770E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x002770E4: jal         0x0027AEA8
    // 0x002770E8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x002770E8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x002770EC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x002770F0: beq         $v0, $zero, L_002772FC
    if (ctx->r2 == 0) {
        // 0x002770F4: nop
    
            goto L_002772FC;
    }
    // 0x002770F4: nop

    // 0x002770F8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x002770FC: beq         $v0, $zero, L_002772FC
    if (ctx->r2 == 0) {
        // 0x00277100: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002772FC;
    }
    // 0x00277100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00277104: beq         $s1, $v0, L_0027711C
    if (ctx->r17 == ctx->r2) {
        // 0x00277108: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0027711C;
    }
    // 0x00277108: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027710C: beq         $s1, $v0, L_0027713C
    if (ctx->r17 == ctx->r2) {
        // 0x00277110: addiu       $s1, $s0, 0x48
        ctx->r17 = ADD32(ctx->r16, 0X48);
            goto L_0027713C;
    }
    // 0x00277110: addiu       $s1, $s0, 0x48
    ctx->r17 = ADD32(ctx->r16, 0X48);
    // 0x00277114: j           L_002772FC
    // 0x00277118: nop

        goto L_002772FC;
    // 0x00277118: nop

L_0027711C:
    // 0x0027711C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00277120: lwc1        $f20, 0x44($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X44);
    // 0x00277124: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00277128: addiu       $s4, $zero, 0x32
    ctx->r20 = ADD32(0, 0X32);
    // 0x0027712C: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x00277130: addu        $s5, $s4, $zero
    ctx->r21 = ADD32(ctx->r20, 0);
    // 0x00277134: j           L_00277154
    // 0x00277138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
        goto L_00277154;
    // 0x00277138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0027713C:
    // 0x0027713C: lwc1        $f20, 0x8C($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x00277140: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00277144: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x00277148: addiu       $s6, $zero, 0x32
    ctx->r22 = ADD32(0, 0X32);
    // 0x0027714C: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x00277150: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
L_00277154:
    // 0x00277154: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00277158: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0027715C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00277160: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x00277164: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00277168: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0027716C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00277170: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00277174: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00277178: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027717C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00277180: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x00277184: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00277188: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027718C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00277190: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00277194: mfc1        $s3, $f3
    ctx->r19 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00277198: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027719C: mfc1        $s2, $f3
    ctx->r18 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002771A0: jal         0x0027AF4C
    // 0x002771A4: nop

    func_0027AF4C(rdram, ctx);
        goto after_2;
    // 0x002771A4: nop

    after_2:
    // 0x002771A8: jal         0x00277328
    // 0x002771AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00277328(rdram, ctx);
        goto after_3;
    // 0x002771AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x002771B0: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x002771B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002771B8: bne         $v1, $v0, L_0027722C
    if (ctx->r3 != ctx->r2) {
        // 0x002771BC: lui         $t1, 0x51EB
        ctx->r9 = S32(0X51EB << 16);
            goto L_0027722C;
    }
    // 0x002771BC: lui         $t1, 0x51EB
    ctx->r9 = S32(0X51EB << 16);
    // 0x002771C0: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x002771C4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002771C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002771CC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002771D0: nop

    // 0x002771D4: bc1f        L_002771F4
    if (!c1cs) {
        // 0x002771D8: nop
    
            goto L_002771F4;
    }
    // 0x002771D8: nop

    // 0x002771DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002771E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002771E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002771E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002771EC: j           L_00277214
    // 0x002771F0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
        goto L_00277214;
    // 0x002771F0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
L_002771F4:
    // 0x002771F4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002771F8: nop

    // 0x002771FC: bc1f        L_00277228
    if (!c1cs) {
        // 0x00277200: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_00277228;
    }
    // 0x00277200: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00277204: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x00277208: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027720C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277210: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_00277214:
    // 0x00277214: nop

    // 0x00277218: bc1f        L_0027722C
    if (!c1cs) {
        // 0x0027721C: lui         $t1, 0x51EB
        ctx->r9 = S32(0X51EB << 16);
            goto L_0027722C;
    }
    // 0x0027721C: lui         $t1, 0x51EB
    ctx->r9 = S32(0X51EB << 16);
    // 0x00277220: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00277224: swc1        $f3, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
L_00277228:
    // 0x00277228: lui         $t1, 0x51EB
    ctx->r9 = S32(0X51EB << 16);
L_0027722C:
    // 0x0027722C: ori         $t1, $t1, 0x851F
    ctx->r9 = ctx->r9 | 0X851F;
    // 0x00277230: lui         $a2, 0x8080
    ctx->r6 = S32(0X8080 << 16);
    // 0x00277234: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00277238: addiu       $s0, $s0, -0x5516
    ctx->r16 = ADD32(ctx->r16, -0X5516);
    // 0x0027723C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00277240: ori         $a2, $a2, 0x8081
    ctx->r6 = ctx->r6 | 0X8081;
    // 0x00277244: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00277248: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0027724C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00277250: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00277254: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00277258: mult        $v1, $a2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027725C: addiu       $a0, $s3, 0x1E
    ctx->r4 = ADD32(ctx->r19, 0X1E);
    // 0x00277260: addiu       $a1, $s2, 0x8
    ctx->r5 = ADD32(ctx->r18, 0X8);
    // 0x00277264: addiu       $a3, $s2, 0xE
    ctx->r7 = ADD32(ctx->r18, 0XE);
    // 0x00277268: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0027726C: mfhi        $t3
    ctx->r11 = hi;
    // 0x00277270: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x00277274: addiu       $t0, $t0, -0x3C
    ctx->r8 = ADD32(ctx->r8, -0X3C);
    // 0x00277278: mult        $t0, $v0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027727C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00277280: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x00277284: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00277288: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x0027728C: mflo        $t0
    ctx->r8 = lo;
    // 0x00277290: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00277294: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00277298: mult        $t0, $t1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027729C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002772A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002772A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x002772A8: sra         $t0, $t0, 31
    ctx->r8 = S32(SIGNED(ctx->r8) >> 31);
    // 0x002772AC: mfhi        $t1
    ctx->r9 = hi;
    // 0x002772B0: sra         $a2, $t1, 5
    ctx->r6 = S32(SIGNED(ctx->r9) >> 5);
    // 0x002772B4: subu        $a2, $a2, $t0
    ctx->r6 = SUB32(ctx->r6, ctx->r8);
    // 0x002772B8: jal         0x0027AFAC
    // 0x002772BC: addu        $a2, $a0, $a2
    ctx->r6 = ADD32(ctx->r4, ctx->r6);
    func_0027AFAC(rdram, ctx);
        goto after_4;
    // 0x002772BC: addu        $a2, $a0, $a2
    ctx->r6 = ADD32(ctx->r4, ctx->r6);
    after_4:
    // 0x002772C0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x002772C4: jal         0x00279028
    // 0x002772C8: nop

    func_00279028(rdram, ctx);
        goto after_5;
    // 0x002772C8: nop

    after_5:
    // 0x002772CC: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x002772D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002772D4: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x002772D8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x002772DC: sll         $a3, $s2, 16
    ctx->r7 = S32(ctx->r18 << 16);
    // 0x002772E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002772E4: lwc1        $f0, -0x7DC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7DC0);
    // 0x002772E8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x002772EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002772F0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002772F4: jal         0x0027B320
    // 0x002772F8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0027B320(rdram, ctx);
        goto after_6;
    // 0x002772F8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_6:
L_002772FC:
    // 0x002772FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00277300: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00277304: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00277308: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0027730C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00277310: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00277314: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00277318: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0027731C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00277320: jr          $ra
    // 0x00277324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00277324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0029D18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D18C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0028441C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028441C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284420: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284428: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028442C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00284430: beq         $a1, $zero, L_00284440
    if (ctx->r5 == 0) {
        // 0x00284434: nop
    
            goto L_00284440;
    }
    // 0x00284434: nop

    // 0x00284438: jal         0x002052D8
    // 0x0028443C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x0028443C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_00284440:
    // 0x00284440: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284444: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284448: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0028444C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00284450: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x00284454: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x00284458: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x0028445C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00284460: jr          $ra
    // 0x00284464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00284464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020FC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FC74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020FC78: lwc1        $f1, 0x55F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55F8);
    // 0x0020FC7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020FC80: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0020FC84: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    // 0x0020FC88: sw          $a3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r7;
    // 0x0020FC8C: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020FC90: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC94: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC98: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020FC9C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCA0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCA4: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCA8: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCAC: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCB0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCB4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCB8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020FCBC: jr          $ra
    // 0x0020FCC0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020FCC0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0041648C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041648C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00416490: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00416494: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00416498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041649C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004164A0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004164A4: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x004164A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004164AC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004164B0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004164B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004164B8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004164BC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x004164C0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x004164C4: jal         0x00285628
    // 0x004164C8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_00285628(rdram, ctx);
        goto after_0;
    // 0x004164C8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x004164CC: bnel        $v0, $zero, L_004164D4
    if (ctx->r2 != 0) {
        // 0x004164D0: subu        $s0, $s0, $s4
        ctx->r16 = SUB32(ctx->r16, ctx->r20);
            goto L_004164D4;
    }
    goto skip_0;
    // 0x004164D0: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    skip_0:
L_004164D4:
    // 0x004164D4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004164D8: jal         0x00285670
    // 0x004164DC: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x004164DC: nop

    after_1:
    // 0x004164E0: bnel        $v0, $zero, L_00416500
    if (ctx->r2 != 0) {
        // 0x004164E4: addu        $s0, $s0, $s4
        ctx->r16 = ADD32(ctx->r16, ctx->r20);
            goto L_00416500;
    }
    goto skip_1;
    // 0x004164E4: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    skip_1:
    // 0x004164E8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004164EC: jal         0x002855E8
    // 0x004164F0: nop

    func_002855E8(rdram, ctx);
        goto after_2;
    // 0x004164F0: nop

    after_2:
    // 0x004164F4: beq         $v0, $zero, L_00416504
    if (ctx->r2 == 0) {
        // 0x004164F8: slt         $v0, $s0, $s3
        ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_00416504;
    }
    // 0x004164F8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x004164FC: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
L_00416500:
    // 0x00416500: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
L_00416504:
    // 0x00416504: beq         $v0, $zero, L_0041651C
    if (ctx->r2 == 0) {
        // 0x00416508: slt         $v0, $s2, $s0
        ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_0041651C;
    }
    // 0x00416508: slt         $v0, $s2, $s0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x0041650C: beq         $s5, $zero, L_00416530
    if (ctx->r21 == 0) {
        // 0x00416510: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_00416530;
    }
    // 0x00416510: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x00416514: j           L_00416530
    // 0x00416518: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
        goto L_00416530;
    // 0x00416518: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0041651C:
    // 0x0041651C: beq         $v0, $zero, L_00416534
    if (ctx->r2 == 0) {
        // 0x00416520: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00416534;
    }
    // 0x00416520: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00416524: beq         $s5, $zero, L_00416530
    if (ctx->r21 == 0) {
        // 0x00416528: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_00416530;
    }
    // 0x00416528: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x0041652C: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_00416530:
    // 0x00416530: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00416534:
    // 0x00416534: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00416538: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0041653C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00416540: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00416544: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00416548: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041654C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416550: jr          $ra
    // 0x00416554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00416554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00248340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00248340: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00248344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00248348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024834C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00248350: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00248354: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x00248358: addiu       $a0, $s0, 0xA40
    ctx->r4 = ADD32(ctx->r16, 0XA40);
    // 0x0024835C: sll         $a1, $v0, 4
    ctx->r5 = S32(ctx->r2 << 4);
    // 0x00248360: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00248364: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x00248368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0024836C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00248370: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00248374: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x00248378: jal         0x002470E8
    // 0x0024837C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_002470E8(rdram, ctx);
        goto after_0;
    // 0x0024837C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x00248380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00248384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248388: sw          $zero, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = 0;
    // 0x0024838C: sw          $zero, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = 0;
    // 0x00248390: sw          $zero, 0xA80($s0)
    MEM_W(0XA80, ctx->r16) = 0;
    // 0x00248394: sw          $zero, 0xA84($s0)
    MEM_W(0XA84, ctx->r16) = 0;
    // 0x00248398: sw          $v0, 0xA88($s0)
    MEM_W(0XA88, ctx->r16) = ctx->r2;
    // 0x0024839C: sw          $zero, 0xA8C($s0)
    MEM_W(0XA8C, ctx->r16) = 0;
    // 0x002483A0: sw          $zero, 0xA90($s0)
    MEM_W(0XA90, ctx->r16) = 0;
    // 0x002483A4: sw          $zero, 0xA94($s0)
    MEM_W(0XA94, ctx->r16) = 0;
    // 0x002483A8: sw          $zero, 0xA9C($s0)
    MEM_W(0XA9C, ctx->r16) = 0;
    // 0x002483AC: sw          $zero, 0xAFC($s0)
    MEM_W(0XAFC, ctx->r16) = 0;
    // 0x002483B0: sw          $zero, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = 0;
    // 0x002483B4: sw          $zero, 0x1284($s0)
    MEM_W(0X1284, ctx->r16) = 0;
    // 0x002483B8: sw          $zero, 0xAB0($s0)
    MEM_W(0XAB0, ctx->r16) = 0;
    // 0x002483BC: sw          $zero, 0xAB4($s0)
    MEM_W(0XAB4, ctx->r16) = 0;
    // 0x002483C0: sw          $zero, 0xAB8($s0)
    MEM_W(0XAB8, ctx->r16) = 0;
    // 0x002483C4: sw          $zero, 0xABC($s0)
    MEM_W(0XABC, ctx->r16) = 0;
    // 0x002483C8: sw          $zero, 0xAC8($s0)
    MEM_W(0XAC8, ctx->r16) = 0;
    // 0x002483CC: sw          $zero, 0xACC($s0)
    MEM_W(0XACC, ctx->r16) = 0;
    // 0x002483D0: sw          $zero, 0xAD0($s0)
    MEM_W(0XAD0, ctx->r16) = 0;
    // 0x002483D4: sw          $zero, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = 0;
    // 0x002483D8: sw          $zero, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = 0;
    // 0x002483DC: sw          $zero, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = 0;
    // 0x002483E0: jal         0x00253CFC
    // 0x002483E4: sw          $zero, 0xAE0($s0)
    MEM_W(0XAE0, ctx->r16) = 0;
    func_00253CFC(rdram, ctx);
        goto after_1;
    // 0x002483E4: sw          $zero, 0xAE0($s0)
    MEM_W(0XAE0, ctx->r16) = 0;
    after_1:
    // 0x002483E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002483EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002483F0: addiu       $v0, $s0, 0xAEC
    ctx->r2 = ADD32(ctx->r16, 0XAEC);
    // 0x002483F4: swc1        $f0, 0xAE4($s0)
    MEM_W(0XAE4, ctx->r16) = ctx->f0.u32l;
    // 0x002483F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002483FC: lwc1        $f0, 0x6A9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A9C);
    // 0x00248400: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00248404: sw          $zero, 0xAE8($s0)
    MEM_W(0XAE8, ctx->r16) = 0;
    // 0x00248408: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0024840C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00248410: addiu       $v0, $s0, 0xB7C
    ctx->r2 = ADD32(ctx->r16, 0XB7C);
    // 0x00248414: sw          $zero, 0xAEC($s0)
    MEM_W(0XAEC, ctx->r16) = 0;
    // 0x00248418: sw          $zero, 0xB24($s0)
    MEM_W(0XB24, ctx->r16) = 0;
    // 0x0024841C: swc1        $f0, 0xAF8($s0)
    MEM_W(0XAF8, ctx->r16) = ctx->f0.u32l;
    // 0x00248420: swc1        $f0, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f0.u32l;
    // 0x00248424: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x00248428: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0024842C: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x00248430: sw          $a3, 0xAA0($s0)
    MEM_W(0XAA0, ctx->r16) = ctx->r7;
    // 0x00248434: sw          $t0, 0xAA4($s0)
    MEM_W(0XAA4, ctx->r16) = ctx->r8;
    // 0x00248438: sw          $t1, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->r9;
    // 0x0024843C: sw          $zero, 0xB54($s0)
    MEM_W(0XB54, ctx->r16) = 0;
    // 0x00248440: lwc1        $f20, 0xB54($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XB54);
    // 0x00248444: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00248448: sw          $zero, 0xA10($s0)
    MEM_W(0XA10, ctx->r16) = 0;
    // 0x0024844C: sw          $zero, 0xA20($s0)
    MEM_W(0XA20, ctx->r16) = 0;
    // 0x00248450: sw          $zero, 0xA24($s0)
    MEM_W(0XA24, ctx->r16) = 0;
    // 0x00248454: sw          $zero, 0xAC0($s0)
    MEM_W(0XAC0, ctx->r16) = 0;
    // 0x00248458: sw          $zero, 0xAC4($s0)
    MEM_W(0XAC4, ctx->r16) = 0;
    // 0x0024845C: sw          $zero, 0xB90($s0)
    MEM_W(0XB90, ctx->r16) = 0;
    // 0x00248460: sw          $zero, 0xB94($s0)
    MEM_W(0XB94, ctx->r16) = 0;
    // 0x00248464: sw          $zero, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = 0;
    // 0x00248468: sw          $zero, 0xB2C($s0)
    MEM_W(0XB2C, ctx->r16) = 0;
    // 0x0024846C: sw          $zero, 0xB30($s0)
    MEM_W(0XB30, ctx->r16) = 0;
    // 0x00248470: sw          $zero, 0xB34($s0)
    MEM_W(0XB34, ctx->r16) = 0;
    // 0x00248474: sw          $zero, 0xB38($s0)
    MEM_W(0XB38, ctx->r16) = 0;
    // 0x00248478: sw          $v1, 0xB3C($s0)
    MEM_W(0XB3C, ctx->r16) = ctx->r3;
    // 0x0024847C: sw          $zero, 0xB40($s0)
    MEM_W(0XB40, ctx->r16) = 0;
    // 0x00248480: sw          $zero, 0xB44($s0)
    MEM_W(0XB44, ctx->r16) = 0;
    // 0x00248484: sw          $zero, 0xB48($s0)
    MEM_W(0XB48, ctx->r16) = 0;
    // 0x00248488: sw          $zero, 0xB4C($s0)
    MEM_W(0XB4C, ctx->r16) = 0;
    // 0x0024848C: sw          $zero, 0xB50($s0)
    MEM_W(0XB50, ctx->r16) = 0;
    // 0x00248490: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x00248494: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x00248498: swc1        $f20, 0xB7C($s0)
    MEM_W(0XB7C, ctx->r16) = ctx->f20.u32l;
    // 0x0024849C: swc1        $f0, 0xB88($s0)
    MEM_W(0XB88, ctx->r16) = ctx->f0.u32l;
    // 0x002484A0: sw          $zero, 0xB58($s0)
    MEM_W(0XB58, ctx->r16) = 0;
    // 0x002484A4: sw          $v1, 0xB5C($s0)
    MEM_W(0XB5C, ctx->r16) = ctx->r3;
    // 0x002484A8: swc1        $f20, 0xB64($s0)
    MEM_W(0XB64, ctx->r16) = ctx->f20.u32l;
    // 0x002484AC: swc1        $f20, 0xB68($s0)
    MEM_W(0XB68, ctx->r16) = ctx->f20.u32l;
    // 0x002484B0: swc1        $f20, 0xB6C($s0)
    MEM_W(0XB6C, ctx->r16) = ctx->f20.u32l;
    // 0x002484B4: swc1        $f20, 0xB70($s0)
    MEM_W(0XB70, ctx->r16) = ctx->f20.u32l;
    // 0x002484B8: swc1        $f20, 0xB74($s0)
    MEM_W(0XB74, ctx->r16) = ctx->f20.u32l;
    // 0x002484BC: jal         0x0024E5F0
    // 0x002484C0: swc1        $f20, 0xB78($s0)
    MEM_W(0XB78, ctx->r16) = ctx->f20.u32l;
    func_0024E5F0(rdram, ctx);
        goto after_2;
    // 0x002484C0: swc1        $f20, 0xB78($s0)
    MEM_W(0XB78, ctx->r16) = ctx->f20.u32l;
    after_2:
    // 0x002484C4: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002484C8: sw          $zero, 0xBB0($s0)
    MEM_W(0XBB0, ctx->r16) = 0;
    // 0x002484CC: swc1        $f20, 0xBDC($s0)
    MEM_W(0XBDC, ctx->r16) = ctx->f20.u32l;
    // 0x002484D0: swc1        $f20, 0xBE0($s0)
    MEM_W(0XBE0, ctx->r16) = ctx->f20.u32l;
    // 0x002484D4: swc1        $f20, 0xBE4($s0)
    MEM_W(0XBE4, ctx->r16) = ctx->f20.u32l;
    // 0x002484D8: sw          $zero, 0xBEC($s0)
    MEM_W(0XBEC, ctx->r16) = 0;
    // 0x002484DC: sb          $zero, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = 0;
    // 0x002484E0: swc1        $f20, 0xAAC($s0)
    MEM_W(0XAAC, ctx->r16) = ctx->f20.u32l;
    // 0x002484E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002484E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002484EC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x002484F0: jr          $ra
    // 0x002484F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002484F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402FA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00402FA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00402FA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402FAC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00402FB0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00402FB4: addiu       $a1, $zero, 0x1004
    ctx->r5 = ADD32(0, 0X1004);
    // 0x00402FB8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00402FBC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00402FC0: jal         0x00219F74
    // 0x00402FC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x00402FC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x00402FC8: lh          $v1, 0xDC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDC);
    // 0x00402FCC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00402FD0: addiu       $s1, $s1, -0xC60
    ctx->r17 = ADD32(ctx->r17, -0XC60);
    // 0x00402FD4: bne         $v1, $v0, L_00403074
    if (ctx->r3 != ctx->r2) {
        // 0x00402FD8: nop
    
            goto L_00403074;
    }
    // 0x00402FD8: nop

    // 0x00402FDC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00402FE0: bne         $v0, $zero, L_00403050
    if (ctx->r2 != 0) {
        // 0x00402FE4: nop
    
            goto L_00403050;
    }
    // 0x00402FE4: nop

    // 0x00402FE8: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x00402FEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402FF0: lwc1        $f0, 0x358($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X358);
    // 0x00402FF4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00402FF8: nop

    // 0x00402FFC: bc1f        L_00403054
    if (!c1cs) {
        // 0x00403000: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00403054;
    }
    // 0x00403000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00403004: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x00403008: lw          $a1, 0x80($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X80);
    // 0x0040300C: beq         $a1, $zero, L_00403050
    if (ctx->r5 == 0) {
        // 0x00403010: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00403050;
    }
    // 0x00403010: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00403014: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00403018: jal         0x0020EF2C
    // 0x0040301C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0040301C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_1:
    // 0x00403020: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00403024: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00403028: lwc1        $f2, 0x35C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X35C);
    // 0x0040302C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00403030: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00403034: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00403038: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0040303C: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00403040: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00403044: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00403048: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0040304C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_00403050:
    // 0x00403050: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
L_00403054:
    // 0x00403054: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00403058: lwc1        $f0, 0x360($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X360);
    // 0x0040305C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00403060: nop

    // 0x00403064: bc1f        L_00403074
    if (!c1cs) {
        // 0x00403068: nop
    
            goto L_00403074;
    }
    // 0x00403068: nop

    // 0x0040306C: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00403070: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
L_00403074:
    // 0x00403074: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00403078: beq         $v0, $zero, L_0040308C
    if (ctx->r2 == 0) {
        // 0x0040307C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040308C;
    }
    // 0x0040307C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00403080: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00403084: jal         0x00243414
    // 0x00403088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00403088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
L_0040308C:
    // 0x0040308C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00403090: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00403094: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00403098: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040309C: jr          $ra
    // 0x004030A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004030A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026E40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E40C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E410: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E414: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    // 0x0026E418: jal         0x002759C4
    // 0x0026E41C: nop

    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x0026E41C: nop

    after_0:
    // 0x0026E420: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E424: jr          $ra
    // 0x0026E428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028B614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B614: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028B618: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028B61C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0028B620: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028B624: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0028B628: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028B62C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0028B630: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028B634: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028B638: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028B63C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B640: beq         $v0, $zero, L_0028B660
    if (ctx->r2 == 0) {
        // 0x0028B644: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_0028B660;
    }
    // 0x0028B644: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0028B648:
    // 0x0028B648: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B64C: jal         0x0028B430
    // 0x0028B650: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028B650: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x0028B654: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B658: bne         $v0, $zero, L_0028B648
    if (ctx->r2 != 0) {
        // 0x0028B65C: nop
    
            goto L_0028B648;
    }
    // 0x0028B65C: nop

L_0028B660:
    // 0x0028B660: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B664: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028B668: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B66C: beql        $v0, $zero, L_0028B690
    if (ctx->r2 == 0) {
        // 0x0028B670: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028B690;
    }
    goto skip_0;
    // 0x0028B670: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0028B674:
    // 0x0028B674: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B678: jal         0x0028B430
    // 0x0028B67C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_1;
    // 0x0028B67C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x0028B680: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B684: bne         $v0, $zero, L_0028B674
    if (ctx->r2 != 0) {
        // 0x0028B688: nop
    
            goto L_0028B674;
    }
    // 0x0028B688: nop

    // 0x0028B68C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028B690:
    // 0x0028B690: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028B694: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028B698:
    // 0x0028B698: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028B69C: jal         0x0028CD68
    // 0x0028B6A0: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_2;
    // 0x0028B6A0: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    after_2:
    // 0x0028B6A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028B6A8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028B6AC: bnel        $v0, $zero, L_0028B698
    if (ctx->r2 != 0) {
        // 0x0028B6B0: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028B698;
    }
    goto skip_1;
    // 0x0028B6B0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_1:
    // 0x0028B6B4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B6B8: addiu       $s0, $s0, -0x5F20
    ctx->r16 = ADD32(ctx->r16, -0X5F20);
    // 0x0028B6BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B6C0: beq         $v0, $zero, L_0028B6E0
    if (ctx->r2 == 0) {
        // 0x0028B6C4: nop
    
            goto L_0028B6E0;
    }
    // 0x0028B6C4: nop

L_0028B6C8:
    // 0x0028B6C8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B6CC: jal         0x0028B430
    // 0x0028B6D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_3;
    // 0x0028B6D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_3:
    // 0x0028B6D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B6D8: bne         $v0, $zero, L_0028B6C8
    if (ctx->r2 != 0) {
        // 0x0028B6DC: nop
    
            goto L_0028B6C8;
    }
    // 0x0028B6DC: nop

L_0028B6E0:
    // 0x0028B6E0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0028B6E4: beq         $v0, $zero, L_0028B774
    if (ctx->r2 == 0) {
        // 0x0028B6E8: nop
    
            goto L_0028B774;
    }
    // 0x0028B6E8: nop

    // 0x0028B6EC: addiu       $s1, $s2, 0x8
    ctx->r17 = ADD32(ctx->r18, 0X8);
L_0028B6F0:
    // 0x0028B6F0: lw          $v1, -0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X4);
    // 0x0028B6F4: and         $v0, $s4, $v0
    ctx->r2 = ctx->r20 & ctx->r2;
    // 0x0028B6F8: bnel        $v0, $v1, L_0028B768
    if (ctx->r2 != ctx->r3) {
        // 0x0028B6FC: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_0028B768;
    }
    goto skip_2;
    // 0x0028B6FC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_2:
    // 0x0028B700: beq         $s3, $zero, L_0028B710
    if (ctx->r19 == 0) {
        // 0x0028B704: nop
    
            goto L_0028B710;
    }
    // 0x0028B704: nop

    // 0x0028B708: j           L_0028B73C
    // 0x0028B70C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
        goto L_0028B73C;
    // 0x0028B70C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_0028B710:
    // 0x0028B710: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B714: addiu       $s0, $s0, -0x5F1C
    ctx->r16 = ADD32(ctx->r16, -0X5F1C);
    // 0x0028B718: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B71C: beq         $v0, $zero, L_0028B73C
    if (ctx->r2 == 0) {
        // 0x0028B720: nop
    
            goto L_0028B73C;
    }
    // 0x0028B720: nop

L_0028B724:
    // 0x0028B724: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B728: jal         0x0028B430
    // 0x0028B72C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_4;
    // 0x0028B72C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x0028B730: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B734: bne         $v0, $zero, L_0028B724
    if (ctx->r2 != 0) {
        // 0x0028B738: nop
    
            goto L_0028B724;
    }
    // 0x0028B738: nop

L_0028B73C:
    // 0x0028B73C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0028B740: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B744: beql        $v0, $zero, L_0028B768
    if (ctx->r2 == 0) {
        // 0x0028B748: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_0028B768;
    }
    goto skip_3;
    // 0x0028B748: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_3:
L_0028B74C:
    // 0x0028B74C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B750: jal         0x0028B430
    // 0x0028B754: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_5;
    // 0x0028B754: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_5:
    // 0x0028B758: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B75C: bne         $v0, $zero, L_0028B74C
    if (ctx->r2 != 0) {
        // 0x0028B760: nop
    
            goto L_0028B74C;
    }
    // 0x0028B760: nop

    // 0x0028B764: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_0028B768:
    // 0x0028B768: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0028B76C: bne         $v0, $zero, L_0028B6F0
    if (ctx->r2 != 0) {
        // 0x0028B770: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_0028B6F0;
    }
    // 0x0028B770: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_0028B774:
    // 0x0028B774: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B778: addiu       $s0, $s0, -0x5F18
    ctx->r16 = ADD32(ctx->r16, -0X5F18);
    // 0x0028B77C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B780: beq         $v0, $zero, L_0028B7A0
    if (ctx->r2 == 0) {
        // 0x0028B784: nop
    
            goto L_0028B7A0;
    }
    // 0x0028B784: nop

L_0028B788:
    // 0x0028B788: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B78C: jal         0x0028B430
    // 0x0028B790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_6;
    // 0x0028B790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_6:
    // 0x0028B794: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B798: bne         $v0, $zero, L_0028B788
    if (ctx->r2 != 0) {
        // 0x0028B79C: nop
    
            goto L_0028B788;
    }
    // 0x0028B79C: nop

L_0028B7A0:
    // 0x0028B7A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028B7A4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028B7A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028B7AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028B7B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028B7B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028B7B8: jr          $ra
    // 0x0028B7BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028B7BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00402C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402C90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00402C94: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00402C98: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00402C9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00402CA0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00402CA4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00402CA8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00402CAC: jal         0x00225C84
    // 0x00402CB0: nop

    func_00225C84(rdram, ctx);
        goto after_0;
    // 0x00402CB0: nop

    after_0:
    // 0x00402CB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00402CB8: jr          $ra
    // 0x00402CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238824: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00238828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023882C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00238830: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x00238834: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00238838: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x0023883C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00238840: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00238844: jal         0x00237FAC
    // 0x00238848: nop

    func_00237FAC(rdram, ctx);
        goto after_0;
    // 0x00238848: nop

    after_0:
    // 0x0023884C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00238850: jr          $ra
    // 0x00238854: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00238854: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00201B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201B50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00201B54: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00201B58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00201B5C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00201B60: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00201B64: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00201B68: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x00201B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00201B70: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00201B74: jal         0x0029B030
    // 0x00201B78: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00201B78: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00201B7C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00201B80: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00201B84: lw          $a1, 0x6E88($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E88);
    // 0x00201B88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00201B8C: sw          $s0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r16;
    // 0x00201B90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00201B94: sw          $v0, 0x6E54($at)
    MEM_W(0X6E54, ctx->r1) = ctx->r2;
    // 0x00201B98: jal         0x0029B9B0
    // 0x00201B9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029B9B0(rdram, ctx);
        goto after_1;
    // 0x00201B9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00201BA0: addiu       $a0, $s1, 0x230
    ctx->r4 = ADD32(ctx->r17, 0X230);
    // 0x00201BA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00201BA8: jal         0x0029B5B0
    // 0x00201BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osJamMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00201BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00201BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00201BB4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x00201BB8: jal         0x0029B6F0
    // 0x00201BBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00201BBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00201BC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00201BC4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00201BC8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00201BCC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00201BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00201BD4: jr          $ra
    // 0x00201BD8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00201BD8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0042E06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E06C: lw          $a3, 0x12C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X12C);
    // 0x0042E070: lw          $t0, 0x130($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X130);
    // 0x0042E074: lw          $t1, 0x134($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X134);
    // 0x0042E078: lw          $t2, 0x138($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X138);
    // 0x0042E07C: sw          $a3, 0xB04($s1)
    MEM_W(0XB04, ctx->r17) = ctx->r7;
    // 0x0042E080: sw          $t0, 0xB08($s1)
    MEM_W(0XB08, ctx->r17) = ctx->r8;
    // 0x0042E084: sw          $t1, 0xB0C($s1)
    MEM_W(0XB0C, ctx->r17) = ctx->r9;
    // 0x0042E088: sw          $t2, 0xB10($s1)
    MEM_W(0XB10, ctx->r17) = ctx->r10;
    // 0x0042E08C: jal         0x00248340
    // 0x0042E090: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00248340(rdram, ctx);
        goto after_0;
    // 0x0042E090: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0042E094: jal         0x00284174
    // 0x0042E098: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x0042E098: nop

    after_1:
    // 0x0042E09C: bne         $v0, $zero, L_0042E0B4
    if (ctx->r2 != 0) {
        // 0x0042E0A0: nop
    
            goto L_0042E0B4;
    }
    // 0x0042E0A0: nop

    // 0x0042E0A4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0042E0A8: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x0042E0AC: xori        $v0, $v0, 0x3E7
    ctx->r2 = ctx->r2 ^ 0X3E7;
    // 0x0042E0B0: sltu        $s2, $s2, $v0
    ctx->r18 = ctx->r18 < ctx->r2 ? 1 : 0;
L_0042E0B4:
    // 0x0042E0B4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0042E0B8: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0042E0BC: bnel        $v0, $zero, L_0042E0C4
    if (ctx->r2 != 0) {
        // 0x0042E0C0: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0042E0C4;
    }
    goto skip_0;
    // 0x0042E0C0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_0042E0C4:
    // 0x0042E0C4: beq         $s2, $zero, L_0042E0D8
    if (ctx->r18 == 0) {
        // 0x0042E0C8: nop
    
            goto L_0042E0D8;
    }
    // 0x0042E0C8: nop

    // 0x0042E0CC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0042E0D0: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x0042E0D4: sw          $v0, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = ctx->r2;
L_0042E0D8:
    // 0x0042E0D8: lbu         $v0, 0x19($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X19);
    // 0x0042E0DC: bne         $v0, $zero, L_0042E10C
    if (ctx->r2 != 0) {
        // 0x0042E0E0: nop
    
            goto L_0042E10C;
    }
    // 0x0042E0E0: nop

    // 0x0042E0E4: lb          $v0, 0x987($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X987);
    // 0x0042E0E8: beq         $v0, $zero, L_0042E10C
    if (ctx->r2 == 0) {
        // 0x0042E0EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0042E10C;
    }
    // 0x0042E0EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E0F0: jal         0x0025398C
    // 0x0042E0F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_0025398C(rdram, ctx);
        goto after_2;
    // 0x0042E0F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_2:
    // 0x0042E0F8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x0042E0FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0042E100: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0042E104: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042E108: sh          $v1, 0x934($v0)
    MEM_H(0X934, ctx->r2) = ctx->r3;
L_0042E10C:
    // 0x0042E10C: jal         0x002842C8
    // 0x0042E110: nop

    func_002842C8(rdram, ctx);
        goto after_3;
    // 0x0042E110: nop

    after_3:
    // 0x0042E114: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0042E118: beq         $a0, $zero, L_0042E128
    if (ctx->r4 == 0) {
        // 0x0042E11C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0042E128;
    }
    // 0x0042E11C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0042E120: jal         0x0026E19C
    // 0x0042E124: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0026E19C(rdram, ctx);
        goto after_4;
    // 0x0042E124: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_4:
L_0042E128:
    // 0x0042E128: jal         0x002842B4
    // 0x0042E12C: nop

    func_002842B4(rdram, ctx);
        goto after_5;
    // 0x0042E12C: nop

    after_5:
    // 0x0042E130: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042E134: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042E138: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042E13C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042E140: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E144: jr          $ra
    // 0x0042E148: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042E148: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00297414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297414: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00297418: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029741C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004449D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004449D8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004449DC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004449E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004449E4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004449E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004449EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004449F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004449F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004449F8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x004449FC: jal         0x00246108
    // 0x00444A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444A04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444A08: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444A0C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444A10: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444A14: jal         0x00245BAC
    // 0x00444A18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444A18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444A1C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444A20: beq         $v0, $zero, L_00444A34
    if (ctx->r2 == 0) {
        // 0x00444A24: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444A34;
    }
    // 0x00444A24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444A2C: jal         0x00243414
    // 0x00444A30: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444A30: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_00444A34:
    // 0x00444A34: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444A38: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444A3C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444A40: jr          $ra
    // 0x00444A44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444A44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00259EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259EBC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259EC0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259EC4: lhu         $a3, 0x76($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X76);
    // 0x00259EC8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259ECC: addiu       $a2, $a2, -0x8B0
    ctx->r6 = ADD32(ctx->r6, -0X8B0);
    // 0x00259ED0: jal         0x00245A98
    // 0x00259ED4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259ED4: nop

    after_0:
    // 0x00259ED8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259EDC: jr          $ra
    // 0x00259EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00426C18: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00426C1C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x00426C20: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x00426C24: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00426C28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00426C2C: addiu       $a0, $a0, 0xAA0
    ctx->r4 = ADD32(ctx->r4, 0XAA0);
    // 0x00426C30: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x00426C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00426C38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00426C3C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00426C40: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00426C44: lbu         $v1, 0x677B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X677B);
    // 0x00426C48: bne         $v1, $zero, L_00426C70
    if (ctx->r3 != 0) {
        // 0x00426C4C: addu        $s0, $v0, $a0
        ctx->r16 = ADD32(ctx->r2, ctx->r4);
            goto L_00426C70;
    }
    // 0x00426C4C: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
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
L_00426C70:
    // 0x00426C70: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x00426C74 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426C74(rdram, ctx);
;}
RECOMP_FUNC void func_00274B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274B34: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00274B38: beq         $v0, $zero, L_00274DF4
    if (ctx->r2 == 0) {
        // 0x00274B3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00274DF4;
    }
    // 0x00274B3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00274B40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00274B44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00274B48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00274B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00274B50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00274B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274B58: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00274B5C: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x00274B60: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x00274B64: beq         $v1, $a1, L_00274C24
    if (ctx->r3 == ctx->r5) {
        // 0x00274B68: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_00274C24;
    }
    // 0x00274B68: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x00274B6C: beq         $v0, $zero, L_00274B8C
    if (ctx->r2 == 0) {
        // 0x00274B70: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_00274B8C;
    }
    // 0x00274B70: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x00274B74: beq         $v1, $a0, L_00274DAC
    if (ctx->r3 == ctx->r4) {
        // 0x00274B78: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00274DAC;
    }
    // 0x00274B78: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00274B7C: beq         $v1, $v0, L_00274BA8
    if (ctx->r3 == ctx->r2) {
        // 0x00274B80: nop
    
            goto L_00274BA8;
    }
    // 0x00274B80: nop

    // 0x00274B84: j           L_00274DAC
    // 0x00274B88: nop

        goto L_00274DAC;
    // 0x00274B88: nop

L_00274B8C:
    // 0x00274B8C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x00274B90: beq         $v1, $a0, L_00274CE8
    if (ctx->r3 == ctx->r4) {
        // 0x00274B94: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_00274CE8;
    }
    // 0x00274B94: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x00274B98: beq         $v1, $v0, L_00274BD8
    if (ctx->r3 == ctx->r2) {
        // 0x00274B9C: nop
    
            goto L_00274BD8;
    }
    // 0x00274B9C: nop

    // 0x00274BA0: j           L_00274DAC
    // 0x00274BA4: nop

        goto L_00274DAC;
    // 0x00274BA4: nop

L_00274BA8:
    // 0x00274BA8: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00274BAC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00274BB0: beq         $v0, $zero, L_00274F18
    if (ctx->r2 == 0) {
        // 0x00274BB4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00274F18;
    }
    // 0x00274BB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274BB8: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x00274BBC: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x00274BC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274BC4: sw          $v0, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = ctx->r2;
    // 0x00274BC8: bltzl       $v1, L_00274F18
    if (SIGNED(ctx->r3) < 0) {
        // 0x00274BCC: sw          $a0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r4;
            goto L_00274F18;
    }
    goto skip_0;
    // 0x00274BCC: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    skip_0:
    // 0x00274BD0: j           L_00274F18
    // 0x00274BD4: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
        goto L_00274F18;
    // 0x00274BD4: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
L_00274BD8:
    // 0x00274BD8: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00274BDC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00274BE0: beq         $v0, $zero, L_00274BF4
    if (ctx->r2 == 0) {
        // 0x00274BE4: nop
    
            goto L_00274BF4;
    }
    // 0x00274BE4: nop

    // 0x00274BE8: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    // 0x00274BEC: j           L_00274F18
    // 0x00274BF0: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_00274F18;
    // 0x00274BF0: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_00274BF4:
    // 0x00274BF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00274BF8: lw          $v0, 0x2A74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2A74);
    // 0x00274BFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00274C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274C04: sw          $v0, 0x2A74($at)
    MEM_W(0X2A74, ctx->r1) = ctx->r2;
    // 0x00274C08: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x00274C0C: bne         $v0, $zero, L_00274F18
    if (ctx->r2 != 0) {
        // 0x00274C10: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00274F18;
    }
    // 0x00274C10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274C14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274C18: sw          $v0, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = ctx->r2;
    // 0x00274C1C: j           L_00274F18
    // 0x00274C20: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
        goto L_00274F18;
    // 0x00274C20: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
L_00274C24:
    // 0x00274C24: lw          $a2, 0x28($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X28);
    // 0x00274C28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00274C2C: beq         $a2, $s2, L_00274F14
    if (ctx->r6 == ctx->r18) {
        // 0x00274C30: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00274F14;
    }
    // 0x00274C30: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00274C34: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274C38: lw          $a0, 0x2B60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B60);
    // 0x00274C3C: lw          $a1, 0x2B64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B64);
    // 0x00274C40: jal         0x00266D24
    // 0x00274C44: nop

    func_00266D24(rdram, ctx);
        goto after_0;
    // 0x00274C44: nop

    after_0:
    // 0x00274C48: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00274C4C: beq         $s0, $s2, L_00274CB4
    if (ctx->r16 == ctx->r18) {
        // 0x00274C50: sll         $s0, $s0, 1
        ctx->r16 = S32(ctx->r16 << 1);
            goto L_00274CB4;
    }
    // 0x00274C50: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x00274C54: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274C58: lw          $a0, 0x2B50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B50);
    // 0x00274C5C: jal         0x002017D4
    // 0x00274C60: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00274C60: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    after_1:
    // 0x00274C64: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00274C68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00274C6C: lw          $a0, 0x2B50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B50);
    // 0x00274C70: jal         0x002017D4
    // 0x00274C74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00274C74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00274C78: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00274C7C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x00274C80: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x00274C84: jal         0x0026D210
    // 0x00274C88: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x00274C88: nop

    after_3:
    // 0x00274C8C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00274C90: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00274C94: nop

    // 0x00274C98: bc1f        L_00274CAC
    if (!c1cs) {
        // 0x00274C9C: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_00274CAC;
    }
    // 0x00274C9C: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x00274CA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274CA4: lwc1        $f0, -0x7E60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E60);
    // 0x00274CA8: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
L_00274CAC:
    // 0x00274CAC: j           L_00274CB8
    // 0x00274CB0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00274CB8;
    // 0x00274CB0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00274CB4:
    // 0x00274CB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00274CB8:
    // 0x00274CB8: bne         $v0, $zero, L_00274CD8
    if (ctx->r2 != 0) {
        // 0x00274CBC: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_00274CD8;
    }
    // 0x00274CBC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x00274CC0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x00274CC4: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274CC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274CCC: sw          $zero, 0x2A74($at)
    MEM_W(0X2A74, ctx->r1) = 0;
    // 0x00274CD0: j           L_00274F18
    // 0x00274CD4: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_00274F18;
    // 0x00274CD4: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_00274CD8:
    // 0x00274CD8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00274CDC: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00274CE4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_00274CE8:
    // 0x00274CE8: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x00274CEC: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x00274CF0: jal         0x0028F518
    // 0x00274CF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0028F518(rdram, ctx);
        goto after_4;
    // 0x00274CF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_4:
    // 0x00274CF8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274CFC: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x00274D00: jal         0x00290E90
    // 0x00274D04: nop

    func_00290E90(rdram, ctx);
        goto after_5;
    // 0x00274D04: nop

    after_5:
    // 0x00274D08: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00274D0C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D10: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00274D14: jal         0x00290E10
    // 0x00274D18: nop

    func_00290E10(rdram, ctx);
        goto after_6;
    // 0x00274D18: nop

    after_6:
L_00274D1C:
    // 0x00274D1C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D20: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x00274D24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00274D28: jal         0x00290E40
    // 0x00274D2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00290E40(rdram, ctx);
        goto after_7;
    // 0x00274D2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x00274D30: slti        $v0, $s0, 0x14
    ctx->r2 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x00274D34: bne         $v0, $zero, L_00274D1C
    if (ctx->r2 != 0) {
        // 0x00274D38: nop
    
            goto L_00274D1C;
    }
    // 0x00274D38: nop

    // 0x00274D3C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274D40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274D44: lwc1        $f1, -0x7E5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E5C);
    // 0x00274D48: lwc1        $f0, 0x2BA4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BA4);
    // 0x00274D4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274D50: lwc1        $f20, 0x24($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X24);
    // 0x00274D54: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00274D58: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274D5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274D60: lwc1        $f0, -0x7E58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E58);
    // 0x00274D64: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274D68: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D6C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00274D70: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00274D74: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00274D78: jal         0x00290EC0
    // 0x00274D7C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_8;
    // 0x00274D7C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_8:
    // 0x00274D80: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D84: jal         0x00290DE0
    // 0x00274D88: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
    func_00290DE0(rdram, ctx);
        goto after_9;
    // 0x00274D88: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
    after_9:
    // 0x00274D8C: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x00274D90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00274D94: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x00274D98: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274D9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274DA0: sw          $v1, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = ctx->r3;
    // 0x00274DA4: j           L_00274F18
    // 0x00274DA8: nop

        goto L_00274F18;
    // 0x00274DA8: nop

L_00274DAC:
    // 0x00274DAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00274DB0: lw          $v0, 0x2A70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2A70);
    // 0x00274DB4: blez        $v0, L_00274DE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00274DB8: nop
    
            goto L_00274DE0;
    }
    // 0x00274DB8: nop

    // 0x00274DBC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274DC0: jal         0x0028FA00
    // 0x00274DC4: nop

    func_0028FA00(rdram, ctx);
        goto after_10;
    // 0x00274DC4: nop

    after_10:
    // 0x00274DC8: bne         $v0, $zero, L_00274DE0
    if (ctx->r2 != 0) {
        // 0x00274DCC: nop
    
            goto L_00274DE0;
    }
    // 0x00274DCC: nop

    // 0x00274DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274DD4: sw          $zero, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = 0;
    // 0x00274DD8: j           L_00274E90
    // 0x00274DDC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
        goto L_00274E90;
    // 0x00274DDC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_00274DE0:
    // 0x00274DE0: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x00274DE4: beq         $v0, $zero, L_00274E1C
    if (ctx->r2 == 0) {
        // 0x00274DE8: nop
    
            goto L_00274E1C;
    }
    // 0x00274DE8: nop

    // 0x00274DEC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274DF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
L_00274DF4:
    // 0x00274DF4: lwc1        $f1, -0x7E54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E54);
    // 0x00274DF8: lwc1        $f0, 0x2BA4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BA4);
    // 0x00274DFC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274E00: lwc1        $f20, 0x24($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X24);
    // 0x00274E04: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00274E08: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274E0C: lwc1        $f0, 0x3C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x00274E10: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274E14: j           L_00274E68
    // 0x00274E18: nop

        goto L_00274E68;
    // 0x00274E18: nop

L_00274E1C:
    // 0x00274E1C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274E20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274E24: lwc1        $f0, -0x7E50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E50);
    // 0x00274E28: lwc1        $f1, 0x2BA4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X2BA4);
    // 0x00274E2C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00274E30: lw          $v0, 0x2BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BB8);
    // 0x00274E34: lwc1        $f0, 0x24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X24);
    // 0x00274E38: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00274E3C: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274E40: beq         $v0, $zero, L_00274E54
    if (ctx->r2 == 0) {
        // 0x00274E44: nop
    
            goto L_00274E54;
    }
    // 0x00274E44: nop

    // 0x00274E48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274E4C: lwc1        $f0, -0x7E4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E4C);
    // 0x00274E50: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00274E54:
    // 0x00274E54: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x00274E58: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x00274E5C: nop

    // 0x00274E60: bc1t        L_00274E90
    if (c1cs) {
        // 0x00274E64: nop
    
            goto L_00274E90;
    }
    // 0x00274E64: nop

L_00274E68:
    // 0x00274E68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274E6C: lwc1        $f0, -0x7E48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E48);
    // 0x00274E70: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274E74: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274E78: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00274E7C: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00274E80: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00274E84: jal         0x00290EC0
    // 0x00274E88: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_11;
    // 0x00274E88: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_11:
    // 0x00274E8C: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
L_00274E90:
    // 0x00274E90: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x00274E94: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00274E98: lw          $v1, 0x2A70($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2A70);
    // 0x00274E9C: beq         $v0, $v1, L_00274F18
    if (ctx->r2 == ctx->r3) {
        // 0x00274EA0: nop
    
            goto L_00274F18;
    }
    // 0x00274EA0: nop

    // 0x00274EA4: blez        $v1, L_00274F0C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00274EA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00274F0C;
    }
    // 0x00274EA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00274EAC: lwc1        $f1, 0x2C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2C);
    // 0x00274EB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274EB4: lwc1        $f0, -0x7E44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E44);
    // 0x00274EB8: lwc1        $f2, 0x30($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X30);
    // 0x00274EBC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00274EC0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00274EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274EC8: lwc1        $f0, -0x7E40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E40);
    // 0x00274ECC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00274ED0: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274ED4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00274ED8: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00274EDC: swc1        $f3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x00274EE0: bc1fl       L_00274EE8
    if (!c1cs) {
        // 0x00274EE4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_00274EE8;
    }
    goto skip_1;
    // 0x00274EE4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
L_00274EE8:
    // 0x00274EE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274EEC: lwc1        $f1, -0x7E3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E3C);
    // 0x00274EF0: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00274EF4: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x00274EF8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00274EFC: swc1        $f2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f2.u32l;
    // 0x00274F00: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274F04: j           L_00274F18
    // 0x00274F08: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
        goto L_00274F18;
    // 0x00274F08: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
L_00274F0C:
    // 0x00274F0C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00274F10: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_00274F14:
    // 0x00274F14: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
L_00274F18:
    // 0x00274F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00274F1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00274F20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00274F24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274F28: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00274F2C: jr          $ra
    // 0x00274F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00274F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A19C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A19C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A19CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A19D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002A19D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A19D8: nor         $s2, $zero, $s0
    ctx->r18 = ~(0 | ctx->r16);
    // 0x002A19DC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x002A19E0: and         $s0, $s0, $v0
    ctx->r16 = ctx->r16 & ctx->r2;
    // 0x002A19E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A19E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A19EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A19F0: andi        $s2, $s2, 0x3
    ctx->r18 = ctx->r18 & 0X3;
    // 0x002A19F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002A19F8: jal         0x002A1384
    // 0x002A19FC: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A19FC: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    after_0:
    // 0x002A1A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A1A04: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x002A1A08: sllv        $v1, $v1, $s2
    ctx->r3 = S32(ctx->r3 << (ctx->r18 & 31));
    // 0x002A1A0C: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x002A1A10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002A1A14: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x002A1A18: sllv        $s1, $s1, $s2
    ctx->r17 = S32(ctx->r17 << (ctx->r18 & 31));
    // 0x002A1A1C: jal         0x002A1350
    // 0x002A1A20: or          $a1, $v0, $s1
    ctx->r5 = ctx->r2 | ctx->r17;
    func_002A1350(rdram, ctx);
        goto after_1;
    // 0x002A1A20: or          $a1, $v0, $s1
    ctx->r5 = ctx->r2 | ctx->r17;
    after_1:
    // 0x002A1A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002A1A28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1A2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1A30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1A34: jr          $ra
    // 0x002A1A38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A1A38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00425604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425604: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00425608: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0042560C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x00425610: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00425614: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00425618: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x0042561C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_00425620:
    // 0x00425620: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00425624: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00425628: bgez        $v1, L_00425620
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0042562C: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_00425620;
    }
    // 0x0042562C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00425630: jr          $ra
    // 0x00425634: nop

    return;
    // 0x00425634: nop

;}
RECOMP_FUNC void func_00401FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401FCC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00401FD0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00401FD4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00401FD8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00401FDC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00401FE0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00401FE4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00401FE8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00401FEC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00401FF0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00401FF4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00401FF8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00401FFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00402000: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00402004: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00402008: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0040200C: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00402010: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x00402014: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x00402018: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x0040201C: lw          $fp, -0xA4C($fp)
    ctx->r30 = MEM_W(ctx->r30, -0XA4C);
    // 0x00402020: jal         0x002532EC
    // 0x00402024: nop

    func_002532EC(rdram, ctx);
        goto after_0;
    // 0x00402024: nop

    after_0:
    // 0x00402028: beql        $v0, $zero, L_00402050
    if (ctx->r2 == 0) {
        // 0x0040202C: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_00402050;
    }
    goto skip_0;
    // 0x0040202C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    skip_0:
    // 0x00402030: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00402034: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x00402038: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x0040203C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00402040: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00402044: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00402048: j           L_00402058
    // 0x0040204C: nop

        goto L_00402058;
    // 0x0040204C: nop

L_00402050:
    // 0x00402050: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00402054: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_00402058:
    // 0x00402058: lw          $v0, 0x244($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X244);
    // 0x0040205C: blez        $v0, L_004020D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00402060: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004020D0;
    }
    // 0x00402060: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00402064: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00402068: lui         $s6, 0xFFFF
    ctx->r22 = S32(0XFFFF << 16);
    // 0x0040206C: lui         $s5, 0x1
    ctx->r21 = S32(0X1 << 16);
    // 0x00402070: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_00402074:
    // 0x00402074: lw          $s0, 0x224($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X224);
    // 0x00402078: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0040207C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00402080: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00402084: jal         0x002465F0
    // 0x00402088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002465F0(rdram, ctx);
        goto after_1;
    // 0x00402088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040208C: lw          $v0, 0x174($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X174);
    // 0x00402090: swc1        $f0, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = ctx->f0.u32l;
    // 0x00402094: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x00402098: bne         $v0, $s5, L_004020BC
    if (ctx->r2 != ctx->r21) {
        // 0x0040209C: sw          $s7, 0x250($s0)
        MEM_W(0X250, ctx->r16) = ctx->r23;
            goto L_004020BC;
    }
    // 0x0040209C: sw          $s7, 0x250($s0)
    MEM_W(0X250, ctx->r16) = ctx->r23;
    // 0x004020A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004020A4: lwc1        $f12, 0x320($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X320);
    // 0x004020A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004020AC: lwc1        $f14, 0x324($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X324);
    // 0x004020B0: jal         0x002119FC
    // 0x004020B4: nop

    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x004020B4: nop

    after_2:
    // 0x004020B8: swc1        $f0, 0x1FC($s0)
    MEM_W(0X1FC, ctx->r16) = ctx->f0.u32l;
L_004020BC:
    // 0x004020BC: lw          $v0, 0x244($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X244);
    // 0x004020C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004020C4: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004020C8: bne         $v0, $zero, L_00402074
    if (ctx->r2 != 0) {
        // 0x004020CC: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00402074;
    }
    // 0x004020CC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_004020D0:
    // 0x004020D0: addiu       $a0, $s3, 0x224
    ctx->r4 = ADD32(ctx->r19, 0X224);
    // 0x004020D4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x004020D8: addiu       $v0, $v0, 0x35B8
    ctx->r2 = ADD32(ctx->r2, 0X35B8);
    // 0x004020DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004020E0: lw          $a1, 0x244($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X244);
    // 0x004020E4: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x004020E8: addiu       $a3, $a3, 0x35CC
    ctx->r7 = ADD32(ctx->r7, 0X35CC);
    // 0x004020EC: jal         0x00226F90
    // 0x004020F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    entry_00226F90(rdram, ctx);
        goto after_3;
    // 0x004020F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x004020F4: lw          $v0, 0x244($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X244);
    // 0x004020F8: blez        $v0, L_00402198
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004020FC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00402198;
    }
    // 0x004020FC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00402100: lw          $v0, 0x218($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X218);
    // 0x00402104: beq         $v0, $zero, L_00402198
    if (ctx->r2 == 0) {
        // 0x00402108: addu        $s2, $s3, $zero
        ctx->r18 = ADD32(ctx->r19, 0);
            goto L_00402198;
    }
    // 0x00402108: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_0040210C:
    // 0x0040210C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x00402110: lw          $v1, 0x8($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X8);
    // 0x00402114: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00402118: beq         $v0, $zero, L_00402198
    if (ctx->r2 == 0) {
        // 0x0040211C: nop
    
            goto L_00402198;
    }
    // 0x0040211C: nop

    // 0x00402120: lw          $s0, 0x224($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X224);
    // 0x00402124: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x00402128: bne         $v0, $zero, L_00402178
    if (ctx->r2 != 0) {
        // 0x0040212C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00402178;
    }
    // 0x0040212C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402130: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00402134: jal         0x00243414
    // 0x00402138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00402138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x0040213C: beq         $v0, $zero, L_00402178
    if (ctx->r2 == 0) {
        // 0x00402140: nop
    
            goto L_00402178;
    }
    // 0x00402140: nop

    // 0x00402144: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402148: lwc1        $f12, 0x328($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X328);
    // 0x0040214C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402150: lwc1        $f14, 0x32C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X32C);
    // 0x00402154: jal         0x002119FC
    // 0x00402158: nop

    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00402158: nop

    after_5:
    // 0x0040215C: swc1        $f0, 0x1FC($s0)
    MEM_W(0X1FC, ctx->r16) = ctx->f0.u32l;
    // 0x00402160: lw          $v0, 0x218($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X218);
    // 0x00402164: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00402168: sw          $v0, 0x218($s3)
    MEM_W(0X218, ctx->r19) = ctx->r2;
    // 0x0040216C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x00402170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00402174: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
L_00402178:
    // 0x00402178: lw          $v0, 0x244($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X244);
    // 0x0040217C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00402180: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00402184: beq         $v0, $zero, L_00402198
    if (ctx->r2 == 0) {
        // 0x00402188: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00402198;
    }
    // 0x00402188: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x0040218C: lw          $v0, 0x218($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X218);
    // 0x00402190: bne         $v0, $zero, L_0040210C
    if (ctx->r2 != 0) {
        // 0x00402194: nop
    
            goto L_0040210C;
    }
    // 0x00402194: nop

L_00402198:
    // 0x00402198: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0040219C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x004021A0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x004021A4: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x004021A8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x004021AC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004021B0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004021B4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004021B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004021BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004021C0: jr          $ra
    // 0x004021C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004021C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00268560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268560: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00268564: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00268568: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0026856C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00268570: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00268574: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00268578: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0026857C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00268580: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00268584: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x00268588: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026858C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00268590: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00268594: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00268598: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0026859C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x002685A0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x002685A4: jal         0x002688C8
    // 0x002685A8: nop

    func_002688C8(rdram, ctx);
        goto after_0;
    // 0x002685A8: nop

    after_0:
    // 0x002685AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x002685B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x002685B4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002685B8: jal         0x0026BE60
    // 0x002685BC: nop

    func_0026BE60(rdram, ctx);
        goto after_1;
    // 0x002685BC: nop

    after_1:
    // 0x002685C0: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x002685C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002685C8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002685CC: jr          $ra
    // 0x002685D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002685D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0026E294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E294: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0026E298: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0026E29C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x0026E2A0: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
    // 0x0026E2A4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x0026E2A8: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x0026E2AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026E2B0: bne         $v1, $v0, L_0026E2F0
    if (ctx->r3 != ctx->r2) {
        // 0x0026E2B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0026E2F0;
    }
    // 0x0026E2B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0026E2B8: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x0026E2BC: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x0026E2C0: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x0026E2C4: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x0026E2C8: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x0026E2CC: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x0026E2D0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x0026E2D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0026E2D8: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x0026E2DC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x0026E2E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026E2E4: sb          $v0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r2;
    // 0x0026E2E8: jal         0x0026DFB0
    // 0x0026E2EC: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    func_0026DFB0(rdram, ctx);
        goto after_0;
    // 0x0026E2EC: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    after_0:
L_0026E2F0:
    // 0x0026E2F0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0026E2F4: jr          $ra
    // 0x0026E2F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0026E2F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00227240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227240: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00227244: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00227248: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022724C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00227250: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00227254: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00227258: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x0022725C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00227260: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00227264: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00227268: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0022726C: beq         $v0, $zero, L_00227294
    if (ctx->r2 == 0) {
        // 0x00227270: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_00227294;
    }
    // 0x00227270: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00227274: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00227278: addiu       $s3, $s3, 0x7078
    ctx->r19 = ADD32(ctx->r19, 0X7078);
    // 0x0022727C: jal         0x00224180
    // 0x00227280: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00227280: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00227284: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00227288: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022728C: bne         $s1, $v0, L_0022729C
    if (ctx->r17 != ctx->r2) {
        // 0x00227290: nop
    
            goto L_0022729C;
    }
    // 0x00227290: nop

L_00227294:
    // 0x00227294: j           L_00227488
    // 0x00227298: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00227488;
    // 0x00227298: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022729C:
    // 0x0022729C: lw          $v0, 0x3600($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3600);
    // 0x002272A0: bne         $v0, $zero, L_002272B4
    if (ctx->r2 != 0) {
        // 0x002272A4: nop
    
            goto L_002272B4;
    }
    // 0x002272A4: nop

    // 0x002272A8: lw          $a1, 0x3608($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3608);
    // 0x002272AC: jal         0x00227B7C
    // 0x002272B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00227B7C(rdram, ctx);
        goto after_1;
    // 0x002272B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_002272B4:
    // 0x002272B4: lw          $a2, 0x3600($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X3600);
    // 0x002272B8: lw          $v1, 0x3604($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3604);
    // 0x002272BC: lw          $v0, 0x1AC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1AC);
    // 0x002272C0: beq         $v1, $zero, L_002272CC
    if (ctx->r3 == 0) {
        // 0x002272C4: sw          $v0, 0x3600($s0)
        MEM_W(0X3600, ctx->r16) = ctx->r2;
            goto L_002272CC;
    }
    // 0x002272C4: sw          $v0, 0x3600($s0)
    MEM_W(0X3600, ctx->r16) = ctx->r2;
    // 0x002272C8: sw          $a2, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = ctx->r6;
L_002272CC:
    // 0x002272CC: lw          $v0, 0x3604($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3604);
    // 0x002272D0: sw          $zero, 0x1A8($a2)
    MEM_W(0X1A8, ctx->r6) = 0;
    // 0x002272D4: sw          $v0, 0x1AC($a2)
    MEM_W(0X1AC, ctx->r6) = ctx->r2;
    // 0x002272D8: lw          $v0, 0x3608($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3608);
    // 0x002272DC: bne         $v0, $zero, L_002272E8
    if (ctx->r2 != 0) {
        // 0x002272E0: sw          $a2, 0x3604($s0)
        MEM_W(0X3604, ctx->r16) = ctx->r6;
            goto L_002272E8;
    }
    // 0x002272E0: sw          $a2, 0x3604($s0)
    MEM_W(0X3604, ctx->r16) = ctx->r6;
    // 0x002272E4: sw          $a2, 0x3608($s0)
    MEM_W(0X3608, ctx->r16) = ctx->r6;
L_002272E8:
    // 0x002272E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002272EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002272F0: lw          $v0, 0x1A0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1A0);
    // 0x002272F4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002272F8: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
    // 0x002272FC: sw          $zero, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = 0;
    // 0x00227300: sw          $zero, 0x20($a2)
    MEM_W(0X20, ctx->r6) = 0;
    // 0x00227304: sw          $zero, 0x24($a2)
    MEM_W(0X24, ctx->r6) = 0;
    // 0x00227308: sw          $zero, 0x28($a2)
    MEM_W(0X28, ctx->r6) = 0;
    // 0x0022730C: sw          $zero, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = 0;
    // 0x00227310: sw          $zero, 0x30($a2)
    MEM_W(0X30, ctx->r6) = 0;
    // 0x00227314: sw          $zero, 0x198($a2)
    MEM_W(0X198, ctx->r6) = 0;
    // 0x00227318: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0022731C: jal         0x00224F84
    // 0x00227320: sw          $v0, 0x1A0($a2)
    MEM_W(0X1A0, ctx->r6) = ctx->r2;
    func_00224F84(rdram, ctx);
        goto after_2;
    // 0x00227320: sw          $v0, 0x1A0($a2)
    MEM_W(0X1A0, ctx->r6) = ctx->r2;
    after_2:
    // 0x00227324: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00227328: beq         $s2, $zero, L_0022733C
    if (ctx->r18 == 0) {
        // 0x0022732C: sw          $s2, 0x1A4($s0)
        MEM_W(0X1A4, ctx->r16) = ctx->r18;
            goto L_0022733C;
    }
    // 0x0022732C: sw          $s2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r18;
    // 0x00227330: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00227334: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00227338: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_0022733C:
    // 0x0022733C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00227340: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00227344: beq         $v0, $zero, L_0022735C
    if (ctx->r2 == 0) {
        // 0x00227348: nop
    
            goto L_0022735C;
    }
    // 0x00227348: nop

    // 0x0022734C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00227350: addiu       $v0, $v0, 0x12C0
    ctx->r2 = ADD32(ctx->r2, 0X12C0);
    // 0x00227354: j           L_00227368
    // 0x00227358: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00227368;
    // 0x00227358: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0022735C:
    // 0x0022735C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00227360: addiu       $v0, $v0, 0x1360
    ctx->r2 = ADD32(ctx->r2, 0X1360);
    // 0x00227364: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00227368:
    // 0x00227368: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022736C: lwc1        $f1, 0x6054($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6054);
    // 0x00227370: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00227374: sw          $zero, 0x19C($s0)
    MEM_W(0X19C, ctx->r16) = 0;
    // 0x00227378: sh          $s1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r17;
    // 0x0022737C: swc1        $f0, 0x198($s0)
    MEM_W(0X198, ctx->r16) = ctx->f0.u32l;
    // 0x00227380: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00227384: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00227388: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0022738C: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00227390: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x00227394: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x00227398: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x0022739C: sw          $zero, 0x148($s0)
    MEM_W(0X148, ctx->r16) = 0;
    // 0x002273A0: sw          $zero, 0x138($s0)
    MEM_W(0X138, ctx->r16) = 0;
    // 0x002273A4: sw          $zero, 0x140($s0)
    MEM_W(0X140, ctx->r16) = 0;
    // 0x002273A8: swc1        $f1, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002273AC: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x002273B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002273B4: lwc1        $f1, 0x6058($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6058);
    // 0x002273B8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002273BC: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x002273C0: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x002273C4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002273C8: swc1        $f0, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f0.u32l;
    // 0x002273CC: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x002273D0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002273D4: swc1        $f0, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->f0.u32l;
    // 0x002273D8: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x002273DC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002273E0: swc1        $f0, 0x158($s0)
    MEM_W(0X158, ctx->r16) = ctx->f0.u32l;
    // 0x002273E4: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x002273E8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002273EC: swc1        $f0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->f0.u32l;
    // 0x002273F0: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x002273F4: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x002273F8: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x002273FC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00227400: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x00227404: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00227408: sh          $v0, 0x16C($s0)
    MEM_H(0X16C, ctx->r16) = ctx->r2;
    // 0x0022740C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00227410: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x00227414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00227418: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    // 0x0022741C: swc1        $f0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->f0.u32l;
    // 0x00227420: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x00227424: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x00227428: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x0022742C: sw          $t0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r8;
    // 0x00227430: sw          $t1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r9;
    // 0x00227434: sw          $t2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r10;
    // 0x00227438: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0022743C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00227440: sb          $v0, 0x195($s0)
    MEM_B(0X195, ctx->r16) = ctx->r2;
    // 0x00227444: sb          $v0, 0x194($s0)
    MEM_B(0X194, ctx->r16) = ctx->r2;
    // 0x00227448: jal         0x002671B4
    // 0x0022744C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_3;
    // 0x0022744C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x00227450: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00227454: lwc1        $f1, 0x605C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X605C);
    // 0x00227458: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022745C: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00227460: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00227464: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00227468: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0022746C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00227470: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00227474: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00227478: addiu       $a2, $s0, 0x178
    ctx->r6 = ADD32(ctx->r16, 0X178);
    // 0x0022747C: jal         0x002254C0
    // 0x00227480: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_002254C0(rdram, ctx);
        goto after_4;
    // 0x00227480: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x00227484: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00227488:
    // 0x00227488: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0022748C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00227490: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00227494: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00227498: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0022749C: jr          $ra
    // 0x002274A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002274A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
