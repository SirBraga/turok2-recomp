#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0040C684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C684: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040C688: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040C68C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040C690: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040C694: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040C698: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040C69C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040C6A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040C6A4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040C6A8: jal         0x00246108
    // 0x0040C6AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040C6AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040C6B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040C6B4: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040C6B8: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040C6BC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040C6C0: jal         0x00245BAC
    // 0x0040C6C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040C6C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040C6C8: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040C6CC: beq         $v0, $zero, L_0040C6E0
    if (ctx->r2 == 0) {
        // 0x0040C6D0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040C6E0;
    }
    // 0x0040C6D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040C6D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040C6D8: jal         0x00243414
    // 0x0040C6DC: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040C6DC: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_0040C6E0:
    // 0x0040C6E0: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040C6E4: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040C6E8: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040C6EC: jr          $ra
    // 0x0040C6F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040C6F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_004196B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004196B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004196B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004196B8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x004196BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004196C0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x004196C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004196C8: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x004196CC: addiu       $a0, $v0, 0xC0
    ctx->r4 = ADD32(ctx->r2, 0XC0);
    // 0x004196D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004196D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004196D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004196DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004196E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004196E4: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x004196E8: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
L_004196EC:
    // 0x004196EC: sb          $zero, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = 0;
    // 0x004196F0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x004196F4: bgez        $s0, L_004196EC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x004196F8: addiu       $a0, $a0, -0x40
        ctx->r4 = ADD32(ctx->r4, -0X40);
            goto L_004196EC;
    }
    // 0x004196F8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x004196FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00419700: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00419704: addiu       $s3, $s3, -0x54E8
    ctx->r19 = ADD32(ctx->r19, -0X54E8);
    // 0x00419708: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041970C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00419710: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00419714:
    // 0x00419714: jal         0x002855E8
    // 0x00419718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00419718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0041971C: beql        $v0, $zero, L_00419738
    if (ctx->r2 == 0) {
        // 0x00419720: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00419738;
    }
    goto skip_0;
    // 0x00419720: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00419724: sb          $s2, 0x28($s3)
    MEM_B(0X28, ctx->r19) = ctx->r18;
    // 0x00419728: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041972C: sb          $s0, -0x54B9($at)
    MEM_B(-0X54B9, ctx->r1) = ctx->r16;
    // 0x00419730: j           L_00419744
    // 0x00419734: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
        goto L_00419744;
    // 0x00419734: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
L_00419738:
    // 0x00419738: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041973C: bne         $v0, $zero, L_00419714
    if (ctx->r2 != 0) {
        // 0x00419740: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00419714;
    }
    // 0x00419740: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
L_00419744:
    // 0x00419744: jal         0x00275A74
    // 0x00419748: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x00419748: nop

    after_1:
    // 0x0041974C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00419750: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00419754: jal         0x00430454
    // 0x00419758: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00430454(rdram, ctx);
        goto after_2;
    // 0x00419758: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x0041975C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00419760: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00419764: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00419768: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041976C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419778: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041977C: sw          $v0, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = ctx->r2;
    // 0x00419780: jr          $ra
    // 0x00419784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00419784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00256B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256B84: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00256B88: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00256B8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00256B90: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00256B94: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00256B98: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00256B9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00256BA0: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x00256BA4: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
L_00256BA8:
    // 0x00256BA8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00256BAC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00256BB0: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00256BB4: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00256BB8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00256BBC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00256BC0: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00256BC4: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00256BC8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00256BCC: bne         $v0, $a0, L_00256BA8
    if (ctx->r2 != ctx->r4) {
        // 0x00256BD0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00256BA8;
    }
    // 0x00256BD0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00256BD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256BD8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00256BDC: jal         0x002671B4
    // 0x00256BE0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x00256BE0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    after_0:
    // 0x00256BE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256BE8: lwc1        $f1, 0x7204($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7204);
    // 0x00256BEC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00256BF0: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00256BF4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00256BF8: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00256BFC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00256C00: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00256C04: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x00256C08: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00256C0C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00256C10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00256C14: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00256C18: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00256C1C: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x00256C20: jal         0x00239F00
    // 0x00256C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_1;
    // 0x00256C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00256C28: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x00256C2C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00256C30: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00256C34: nop

    // 0x00256C38: bc1f        L_00256C70
    if (!c1cs) {
        // 0x00256C3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00256C70;
    }
    // 0x00256C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00256C40: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00256C44: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00256C48: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00256C4C: nop

    // 0x00256C50: bc1fl       L_00256C74
    if (!c1cs) {
        // 0x00256C54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00256C74;
    }
    goto skip_0;
    // 0x00256C54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x00256C58: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00256C5C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00256C60: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00256C64: nop

    // 0x00256C68: bc1t        L_00256C74
    if (c1cs) {
        // 0x00256C6C: nop
    
            goto L_00256C74;
    }
    // 0x00256C6C: nop

L_00256C70:
    // 0x00256C70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00256C74:
    // 0x00256C74: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00256C78: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00256C7C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00256C80: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x00256C84: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00256C88: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00256C8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256C90: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00256C94: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
L_00256C98:
    // 0x00256C98: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00256C9C: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00256CA0: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00256CA4: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x00256CA8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00256CAC: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00256CB0: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00256CB4: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x00256CB8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00256CBC: bne         $v1, $a1, L_00256C98
    if (ctx->r3 != ctx->r5) {
        // 0x00256CC0: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00256C98;
    }
    // 0x00256CC0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00256CC4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00256CC8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00256CCC: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x00256CD0: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00256CD4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00256CD8: jr          $ra
    // 0x00256CDC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00256CDC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00223F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00223F8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00223F90: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00223F94: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00223F98: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00223F9C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00223FA0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00223FA4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00223FA8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00223FAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00223FB0: jal         0x0020B5D4
    // 0x00223FB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0020B5D4(rdram, ctx);
        goto after_0;
    // 0x00223FB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00223FB8: lui         $v0, 0xDB04
    ctx->r2 = S32(0XDB04 << 16);
    // 0x00223FBC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x00223FC0: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x00223FC4: ori         $a3, $a3, 0xC
    ctx->r7 = ctx->r7 | 0XC;
    // 0x00223FC8: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x00223FCC: ori         $t0, $t0, 0x14
    ctx->r8 = ctx->r8 | 0X14;
    // 0x00223FD0: lui         $t1, 0xDB04
    ctx->r9 = S32(0XDB04 << 16);
    // 0x00223FD4: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x00223FD8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00223FDC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00223FE0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00223FE4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00223FE8: lw          $s3, 0xDF8($s2)
    ctx->r19 = MEM_W(ctx->r18, 0XDF8);
    // 0x00223FEC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00223FF0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00223FF4: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00223FF8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00223FFC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00224000: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x00224004: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00224008: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0022400C: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x00224010: addiu       $a3, $v1, 0x10
    ctx->r7 = ADD32(ctx->r3, 0X10);
    // 0x00224014: ori         $a1, $zero, 0xFFFB
    ctx->r5 = 0 | 0XFFFB;
    // 0x00224018: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0022401C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00224020: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x00224024: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x00224028: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x0022402C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00224030: addiu       $v0, $s2, 0xBF8
    ctx->r2 = ADD32(ctx->r18, 0XBF8);
    // 0x00224034: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x00224038: blez        $s3, L_00224098
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0022403C: sw          $a1, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r5;
            goto L_00224098;
    }
    // 0x0022403C: sw          $a1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r5;
    // 0x00224040: addiu       $s4, $zero, 0x40
    ctx->r20 = ADD32(0, 0X40);
    // 0x00224044: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00224048:
    // 0x00224048: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0022404C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00224050: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00224054: beq         $v0, $zero, L_00224080
    if (ctx->r2 == 0) {
        // 0x00224058: nop
    
            goto L_00224080;
    }
    // 0x00224058: nop

    // 0x0022405C: lw          $v1, 0x1064($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1064);
    // 0x00224060: beql        $v1, $s4, L_0022408C
    if (ctx->r3 == ctx->r20) {
        // 0x00224064: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022408C;
    }
    goto skip_0;
    // 0x00224064: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x00224068: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022406C: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00224070: sw          $a0, 0x1068($v0)
    MEM_W(0X1068, ctx->r2) = ctx->r4;
    // 0x00224074: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00224078: j           L_00224088
    // 0x0022407C: sw          $v0, 0x1064($s2)
    MEM_W(0X1064, ctx->r18) = ctx->r2;
        goto L_00224088;
    // 0x0022407C: sw          $v0, 0x1064($s2)
    MEM_W(0X1064, ctx->r18) = ctx->r2;
L_00224080:
    // 0x00224080: jal         0x0021D39C
    // 0x00224084: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0021D39C(rdram, ctx);
        goto after_1;
    // 0x00224084: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_1:
L_00224088:
    // 0x00224088: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0022408C:
    // 0x0022408C: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00224090: bne         $v0, $zero, L_00224048
    if (ctx->r2 != 0) {
        // 0x00224094: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_00224048;
    }
    // 0x00224094: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_00224098:
    // 0x00224098: jal         0x0020B624
    // 0x0022409C: nop

    func_0020B624(rdram, ctx);
        goto after_2;
    // 0x0022409C: nop

    after_2:
    // 0x002240A0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002240A4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002240A8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002240AC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002240B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002240B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002240B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002240BC: jr          $ra
    // 0x002240C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002240C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0042505C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042505C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00425060: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA30);
    // 0x00425064: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00425068: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x0042506C: beq         $v0, $zero, L_00425088
    if (ctx->r2 == 0) {
        // 0x00425070: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00425088;
    }
    // 0x00425070: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00425074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425078: addu        $at, $at, $v0
    gpr jr_addend_00425080 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042507C: lw          $v0, 0x17D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X17D0);
    // 0x00425080: jr          $v0
    // 0x00425084: nop

    switch (jr_addend_00425080 >> 2) {
        case 0: goto L_00425088; break;
        case 1: goto L_00425088; break;
        case 2: goto L_00425098; break;
        case 3: goto L_004250A8; break;
        case 4: goto L_004250B8; break;
        case 5: goto L_004250C8; break;
        case 6: goto L_004250D8; break;
        case 7: goto L_004250E8; break;
        default: switch_error(__func__, 0x00425080, 0x800C17D0);
    }
    // 0x00425084: nop

L_00425088:
    // 0x00425088: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042508C: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00425090: j           L_004250F4
    // 0x00425094: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004250F4;
    // 0x00425094: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425098:
    // 0x00425098: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042509C: addiu       $v0, $v0, 0x43BC
    ctx->r2 = ADD32(ctx->r2, 0X43BC);
    // 0x004250A0: j           L_004250F4
    // 0x004250A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004250F4;
    // 0x004250A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004250A8:
    // 0x004250A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004250AC: addiu       $v0, $v0, 0x4410
    ctx->r2 = ADD32(ctx->r2, 0X4410);
    // 0x004250B0: j           L_004250F4
    // 0x004250B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004250F4;
    // 0x004250B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004250B8:
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
L_004250C8:
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
L_004250D8:
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
L_004250E8:
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
RECOMP_FUNC void func_0025328C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025328C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00253290: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00253294: jal         0x00252E08
    // 0x00253298: nop

    func_00252E08(rdram, ctx);
        goto after_0;
    // 0x00253298: nop

    after_0:
    // 0x0025329C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002532A0: jr          $ra
    // 0x002532A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002532A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00446CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446CD8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446CDC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446CE0: beq         $v0, $zero, L_00446CF0
    if (ctx->r2 == 0) {
        // 0x00446CE4: nop
    
            goto L_00446CF0;
    }
    // 0x00446CE4: nop

    // 0x00446CE8: jal         0x00243414
    // 0x00446CEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446CEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00446CF0:
    // 0x00446CF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446CF4: jr          $ra
    // 0x00446CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A0B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A0B6C: addiu       $sp, $sp, -0x830
    ctx->r29 = ADD32(ctx->r29, -0X830);
    // 0x002A0B70: sw          $s2, 0x820($sp)
    MEM_W(0X820, ctx->r29) = ctx->r18;
    // 0x002A0B74: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002A0B78: sw          $s0, 0x818($sp)
    MEM_W(0X818, ctx->r29) = ctx->r16;
    // 0x002A0B7C: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x002A0B80: addiu       $s0, $s0, -0x7450
    ctx->r16 = ADD32(ctx->r16, -0X7450);
    // 0x002A0B84: sw          $ra, 0x824($sp)
    MEM_W(0X824, ctx->r29) = ctx->r31;
    // 0x002A0B88: sw          $s1, 0x81C($sp)
    MEM_W(0X81C, ctx->r29) = ctx->r17;
    // 0x002A0B8C: sdc1        $f20, 0x828($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X828, ctx->r29);
    // 0x002A0B90: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x002A0B94: bne         $v0, $zero, L_002A0BBC
    if (ctx->r2 != 0) {
        // 0x002A0B98: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_002A0BBC;
    }
    // 0x002A0B98: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A0B9C: jal         0x002A05D4
    // 0x002A0BA0: nop

    func_002A05D4(rdram, ctx);
        goto after_0;
    // 0x002A0BA0: nop

    after_0:
    // 0x002A0BA4: jal         0x002A073C
    // 0x002A0BA8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_002A073C(rdram, ctx);
        goto after_1;
    // 0x002A0BA8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_1:
    // 0x002A0BAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002A0BB0: sw          $v0, 0x5A30($at)
    MEM_W(0X5A30, ctx->r1) = ctx->r2;
    // 0x002A0BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A0BB8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_002A0BBC:
    // 0x002A0BBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A0BC0: lwc1        $f20, -0x53C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X53C8);
    // 0x002A0BC4: addiu       $s0, $sp, 0x418
    ctx->r16 = ADD32(ctx->r29, 0X418);
    // 0x002A0BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A0BCC: jal         0x002A08C4
    // 0x002A0BD0: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    func_002A08C4(rdram, ctx);
        goto after_2;
    // 0x002A0BD0: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    after_2:
    // 0x002A0BD4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x002A0BD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A0BDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_002A0BE0:
    // 0x002A0BE0: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x002A0BE4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A0BE8: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
    // 0x002A0BEC: addu        $v0, $a0, $s0
    ctx->r2 = ADD32(ctx->r4, ctx->r16);
    // 0x002A0BF0: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x002A0BF4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x002A0BF8: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x002A0BFC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002A0C00: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x002A0C04: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002A0C08: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x002A0C0C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002A0C10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0C14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0C18: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x002A0C1C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x002A0C20: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A0C24: bne         $v0, $zero, L_002A0BE0
    if (ctx->r2 != 0) {
        // 0x002A0C28: swc1        $f0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
            goto L_002A0BE0;
    }
    // 0x002A0C28: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x002A0C2C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x002A0C30: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x002A0C34: addiu       $t0, $t0, 0x5030
    ctx->r8 = ADD32(ctx->r8, 0X5030);
    // 0x002A0C38: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x002A0C3C: addiu       $a3, $a3, 0x5230
    ctx->r7 = ADD32(ctx->r7, 0X5230);
    // 0x002A0C40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002A0C44:
    // 0x002A0C44: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x002A0C48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0C4C: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x002A0C50: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x002A0C54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0C58: addu        $v1, $v0, $t0
    ctx->r3 = ADD32(ctx->r2, ctx->r8);
    // 0x002A0C5C: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x002A0C60: lwc1        $f5, 0x0($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x002A0C64: mul.s       $f4, $f2, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x002A0C68: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x002A0C6C: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x002A0C70: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002A0C74: mul.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002A0C78: nop

    // 0x002A0C7C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002A0C80: nop

    // 0x002A0C84: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x002A0C88: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x002A0C8C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002A0C90: sub.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x002A0C94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0C98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0C9C: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002A0CA0: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A0CA4: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x002A0CA8: bne         $v0, $zero, L_002A0C44
    if (ctx->r2 != 0) {
        // 0x002A0CAC: swc1        $f2, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
            goto L_002A0C44;
    }
    // 0x002A0CAC: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x002A0CB0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002A0CB4: lw          $v1, 0x5A30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5A30);
    // 0x002A0CB8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002A0CBC: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x002A0CC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002A0CC4: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x002A0CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A0CCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002A0CD0: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x002A0CD4: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x002A0CD8: jal         0x002A09E8
    // 0x002A0CDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_002A09E8(rdram, ctx);
        goto after_3;
    // 0x002A0CDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x002A0CE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x002A0CE4: addiu       $a3, $a3, 0x5430
    ctx->r7 = ADD32(ctx->r7, 0X5430);
    // 0x002A0CE8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x002A0CEC: addiu       $a2, $a2, 0x5630
    ctx->r6 = ADD32(ctx->r6, 0X5630);
    // 0x002A0CF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002A0CF4:
    // 0x002A0CF4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x002A0CF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0CFC: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x002A0D00: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x002A0D04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0D08: addu        $v1, $v0, $a3
    ctx->r3 = ADD32(ctx->r2, ctx->r7);
    // 0x002A0D0C: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x002A0D10: lwc1        $f5, 0x0($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x002A0D14: mul.s       $f4, $f2, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x002A0D18: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A0D1C: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x002A0D20: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002A0D24: mul.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002A0D28: nop

    // 0x002A0D2C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002A0D30: nop

    // 0x002A0D34: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x002A0D38: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x002A0D3C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002A0D40: sub.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x002A0D44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0D48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0D4C: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002A0D50: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A0D54: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x002A0D58: bne         $v0, $zero, L_002A0CF4
    if (ctx->r2 != 0) {
        // 0x002A0D5C: swc1        $f2, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
            goto L_002A0CF4;
    }
    // 0x002A0D5C: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x002A0D60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A0D64: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x002A0D68: addiu       $t4, $t4, 0x5830
    ctx->r12 = ADD32(ctx->r12, 0X5830);
    // 0x002A0D6C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x002A0D70: addiu       $t3, $t3, 0x5030
    ctx->r11 = ADD32(ctx->r11, 0X5030);
    // 0x002A0D74: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x002A0D78: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x002A0D7C: addiu       $t2, $t2, 0x5230
    ctx->r10 = ADD32(ctx->r10, 0X5230);
    // 0x002A0D80: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x002A0D84: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x002A0D88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A0D8C: lwc1        $f8, -0x53C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X53C4);
    // 0x002A0D90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A0D94: lwc1        $f7, -0x53C0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X53C0);
    // 0x002A0D98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A0D9C: lwc1        $f6, -0x53BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X53BC);
    // 0x002A0DA0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
L_002A0DA4:
    // 0x002A0DA4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A0DA8: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x002A0DAC: addu        $a2, $a0, $t4
    ctx->r6 = ADD32(ctx->r4, ctx->r12);
    // 0x002A0DB0: addu        $a1, $a0, $t3
    ctx->r5 = ADD32(ctx->r4, ctx->r11);
    // 0x002A0DB4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x002A0DB8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x002A0DBC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x002A0DC0: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x002A0DC4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x002A0DC8: mul.s       $f1, $f4, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f4.fl, ctx->f5.fl);
    // 0x002A0DCC: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x002A0DD0: lwc1        $f3, 0x0($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x002A0DD4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x002A0DD8: mul.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002A0DDC: nop

    // 0x002A0DE0: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x002A0DE4: nop

    // 0x002A0DE8: mul.s       $f3, $f3, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f5.fl);
    // 0x002A0DEC: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002A0DF0: mul.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x002A0DF4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x002A0DF8: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x002A0DFC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x002A0E00: sub.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x002A0E04: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x002A0E08: c.le.s      $f9, $f1
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f9.fl <= ctx->f1.fl;
    // 0x002A0E0C: nop

    // 0x002A0E10: bc1f        L_002A0E34
    if (!c1cs) {
        // 0x002A0E14: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002A0E34;
    }
    // 0x002A0E14: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x002A0E18: add.s       $f0, $f1, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f8.fl;
    // 0x002A0E1C: c.lt.s      $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f7.fl < ctx->f0.fl;
    // 0x002A0E20: nop

    // 0x002A0E24: bc1tl       L_002A0E48
    if (c1cs) {
        // 0x002A0E28: mov.s       $f0, $f7
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    ctx->f0.fl = ctx->f7.fl;
            goto L_002A0E48;
    }
    goto skip_0;
    // 0x002A0E28: mov.s       $f0, $f7
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    ctx->f0.fl = ctx->f7.fl;
    skip_0:
    // 0x002A0E2C: j           L_002A0E48
    // 0x002A0E30: nop

        goto L_002A0E48;
    // 0x002A0E30: nop

L_002A0E34:
    // 0x002A0E34: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x002A0E38: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x002A0E3C: nop

    // 0x002A0E40: bc1tl       L_002A0E48
    if (c1cs) {
        // 0x002A0E44: mov.s       $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
            goto L_002A0E48;
    }
    goto skip_1;
    // 0x002A0E44: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
    skip_1:
L_002A0E48:
    // 0x002A0E48: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002A0E4C: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x002A0E50: mul.s       $f4, $f20, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x002A0E54: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A0E58: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x002A0E5C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x002A0E60: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x002A0E64: c.le.s      $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f9.fl <= ctx->f4.fl;
    // 0x002A0E68: nop

    // 0x002A0E6C: bc1f        L_002A0E90
    if (!c1cs) {
        // 0x002A0E70: mov.s       $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
            goto L_002A0E90;
    }
    // 0x002A0E70: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    // 0x002A0E74: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x002A0E78: c.lt.s      $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f7.fl < ctx->f4.fl;
    // 0x002A0E7C: nop

    // 0x002A0E80: bc1tl       L_002A0EA4
    if (c1cs) {
        // 0x002A0E84: mov.s       $f4, $f7
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    ctx->f4.fl = ctx->f7.fl;
            goto L_002A0EA4;
    }
    goto skip_2;
    // 0x002A0E84: mov.s       $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    ctx->f4.fl = ctx->f7.fl;
    skip_2:
    // 0x002A0E88: j           L_002A0EA4
    // 0x002A0E8C: nop

        goto L_002A0EA4;
    // 0x002A0E8C: nop

L_002A0E90:
    // 0x002A0E90: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x002A0E94: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x002A0E98: nop

    // 0x002A0E9C: bc1tl       L_002A0EA4
    if (c1cs) {
        // 0x002A0EA0: mov.s       $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = ctx->f6.fl;
            goto L_002A0EA4;
    }
    goto skip_3;
    // 0x002A0EA0: mov.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = ctx->f6.fl;
    skip_3:
L_002A0EA4:
    // 0x002A0EA4: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x002A0EA8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x002A0EAC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A0EB0: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x002A0EB4: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x002A0EB8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002A0EBC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x002A0EC0: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x002A0EC4: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x002A0EC8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x002A0ECC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0ED0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0ED4: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A0ED8: bnel        $v0, $zero, L_002A0DA4
    if (ctx->r2 != 0) {
        // 0x002A0EDC: sll         $v1, $a3, 16
        ctx->r3 = S32(ctx->r7 << 16);
            goto L_002A0DA4;
    }
    goto skip_4;
    // 0x002A0EDC: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    skip_4:
    // 0x002A0EE0: lw          $ra, 0x824($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X824);
    // 0x002A0EE4: lw          $s2, 0x820($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X820);
    // 0x002A0EE8: lw          $s1, 0x81C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X81C);
    // 0x002A0EEC: lw          $s0, 0x818($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X818);
    // 0x002A0EF0: ldc1        $f20, 0x828($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X828);
    // 0x002A0EF4: jr          $ra
    // 0x002A0EF8: addiu       $sp, $sp, 0x830
    ctx->r29 = ADD32(ctx->r29, 0X830);
    return;
    // 0x002A0EF8: addiu       $sp, $sp, 0x830
    ctx->r29 = ADD32(ctx->r29, 0X830);
;}
RECOMP_FUNC void func_004226EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004226EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004226F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004226F4: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x004226F8: jr          $ra
    // 0x004226FC: nop

    return;
    // 0x004226FC: nop

;}
RECOMP_FUNC void func_00274F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274F34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00274F38: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00274F3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00274F40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00274F44: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00274F48: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00274F4C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00274F50: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00274F54: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00274F58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274F5C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x00274F60: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x00274F64: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x00274F68: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00274F6C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00274F70: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00274F74: sb          $v1, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r3;
    // 0x00274F78: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00274F7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00274F80: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00274F84: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x00274F88: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00274F8C: addiu       $v0, $v0, 0x1DA8
    ctx->r2 = ADD32(ctx->r2, 0X1DA8);
    // 0x00274F90: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00274F94: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x00274F98: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
    // 0x00274F9C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00274FA0: jal         0x002912A0
    // 0x00274FA4: addiu       $a2, $a2, 0x1DA8
    ctx->r6 = ADD32(ctx->r6, 0X1DA8);
    func_002912A0(rdram, ctx);
        goto after_0;
    // 0x00274FA4: addiu       $a2, $a2, 0x1DA8
    ctx->r6 = ADD32(ctx->r6, 0X1DA8);
    after_0:
    // 0x00274FA8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00274FAC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00274FB0: jal         0x0028FA10
    // 0x00274FB4: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    func_0028FA10(rdram, ctx);
        goto after_1;
    // 0x00274FB4: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    after_1:
    // 0x00274FB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00274FBC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00274FC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00274FC4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x00274FC8: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    // 0x00274FCC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00274FD0: jal         0x002912A0
    // 0x00274FD4: addiu       $a2, $a2, 0x1DA8
    ctx->r6 = ADD32(ctx->r6, 0X1DA8);
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x00274FD4: addiu       $a2, $a2, 0x1DA8
    ctx->r6 = ADD32(ctx->r6, 0X1DA8);
    after_2:
    // 0x00274FD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274FDC: lwc1        $f0, -0x7E38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E38);
    // 0x00274FE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274FE4: lwc1        $f1, -0x7E34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E34);
    // 0x00274FE8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00274FEC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x00274FF0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00274FF4: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x00274FF8: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x00274FFC: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00275000: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x00275004: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x00275008: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0027500C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00275010: jr          $ra
    // 0x00275014: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00275014: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00452960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0020B490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020B494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0020B498: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020B49C: jal         0x00209AF4
    // 0x0020B4A0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00209AF4(rdram, ctx);
        goto after_0;
    // 0x0020B4A0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0020B4A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020B4A8: jr          $ra
    // 0x0020B4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020B4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00442D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0041DF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DF50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0041DF54: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0041DF58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0041DF5C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0041DF60: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0041DF64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0041DF68: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x0041DF6C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0041DF70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DF74: sw          $v1, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r3;
    // 0x0041DF78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DF7C: sw          $v1, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r3;
    // 0x0041DF80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DF84: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x0041DF88: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DF8C: sw          $v1, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = ctx->r3;
    // 0x0041DF90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041DF94: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x0041DF98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DF9C: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x0041DFA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DFA4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0041DFA8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041DFAC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0041DFB0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041DFB4: beq         $a0, $v1, L_0041DFE8
    if (ctx->r4 == ctx->r3) {
        // 0x0041DFB8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_0041DFE8;
    }
    // 0x0041DFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0041DFBC: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0041DFC0: bne         $v0, $zero, L_0041DFD8
    if (ctx->r2 != 0) {
        // 0x0041DFC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041DFD8;
    }
    // 0x0041DFC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041DFC8: beq         $a0, $v0, L_0041DFF8
    if (ctx->r4 == ctx->r2) {
        // 0x0041DFCC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041DFF8;
    }
    // 0x0041DFCC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041DFD0: beq         $a0, $v0, L_0041E008
    if (ctx->r4 == ctx->r2) {
        // 0x0041DFD4: nop
    
            goto L_0041E008;
    }
    // 0x0041DFD4: nop

L_0041DFD8:
    // 0x0041DFD8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DFDC: addiu       $a1, $a1, -0x5380
    ctx->r5 = ADD32(ctx->r5, -0X5380);
    // 0x0041DFE0: j           L_0041E010
    // 0x0041DFE4: nop

        goto L_0041E010;
    // 0x0041DFE4: nop

L_0041DFE8:
    // 0x0041DFE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DFEC: addiu       $a1, $a1, -0x535C
    ctx->r5 = ADD32(ctx->r5, -0X535C);
    // 0x0041DFF0: j           L_0041E010
    // 0x0041DFF4: nop

        goto L_0041E010;
    // 0x0041DFF4: nop

L_0041DFF8:
    // 0x0041DFF8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DFFC: addiu       $a1, $a1, -0x5338
    ctx->r5 = ADD32(ctx->r5, -0X5338);
    // 0x0041E000: j           L_0041E010
    // 0x0041E004: nop

        goto L_0041E010;
    // 0x0041E004: nop

L_0041E008:
    // 0x0041E008: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E00C: addiu       $a1, $a1, -0x5314
    ctx->r5 = ADD32(ctx->r5, -0X5314);
L_0041E010:
    // 0x0041E010: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041E014: lw          $v0, 0x2020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2020);
    // 0x0041E018: beq         $v0, $zero, L_0041E048
    if (ctx->r2 == 0) {
        // 0x0041E01C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0041E048;
    }
    // 0x0041E01C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041E020: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0041E024: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x0041E028: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041E02C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E030: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041E034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E038: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E03C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E040: j           L_0041E1B8
    // 0x0041E044: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_0041E1B8;
    // 0x0041E044: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041E048:
    // 0x0041E048: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041E04C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041E050: beq         $v0, $zero, L_0041E068
    if (ctx->r2 == 0) {
        // 0x0041E054: nop
    
            goto L_0041E068;
    }
    // 0x0041E054: nop

    // 0x0041E058: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E05C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E060: j           L_0041E070
    // 0x0041E064: nop

        goto L_0041E070;
    // 0x0041E064: nop

L_0041E068:
    // 0x0041E068: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x0041E06C: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_0041E070:
    // 0x0041E070: jal         0x00426480
    // 0x0041E074: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E074: nop

    after_0:
    // 0x0041E078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E07C: jal         0x0042655C
    // 0x0041E080: nop

    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E080: nop

    after_1:
    // 0x0041E084: bne         $v0, $zero, L_0041E138
    if (ctx->r2 != 0) {
        // 0x0041E088: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E138;
    }
    // 0x0041E088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E08C: lw          $a2, 0x518($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X518);
    // 0x0041E090: lbu         $v0, 0x30($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X30);
    // 0x0041E094: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E098: sb          $v0, 0x970($at)
    MEM_B(0X970, ctx->r1) = ctx->r2;
    // 0x0041E09C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x0041E0A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0A4: sh          $v0, 0x968($at)
    MEM_H(0X968, ctx->r1) = ctx->r2;
    // 0x0041E0A8: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x0041E0AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0B0: sh          $v0, 0x96A($at)
    MEM_H(0X96A, ctx->r1) = ctx->r2;
    // 0x0041E0B4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x0041E0B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0BC: sh          $v0, 0x96C($at)
    MEM_H(0X96C, ctx->r1) = ctx->r2;
    // 0x0041E0C0: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x0041E0C4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041E0C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0CC: sb          $zero, 0x971($at)
    MEM_B(0X971, ctx->r1) = 0;
    // 0x0041E0D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0D4: sb          $zero, 0x972($at)
    MEM_B(0X972, ctx->r1) = 0;
    // 0x0041E0D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0DC: sb          $zero, 0x973($at)
    MEM_B(0X973, ctx->r1) = 0;
    // 0x0041E0E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0E4: sh          $v0, 0x96E($at)
    MEM_H(0X96E, ctx->r1) = ctx->r2;
    // 0x0041E0E8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
L_0041E0EC:
    // 0x0041E0EC: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x0041E0F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041E0F8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0041E0FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041E100: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0041E104: bne         $v0, $zero, L_0041E0EC
    if (ctx->r2 != 0) {
        // 0x0041E108: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041E0EC;
    }
    // 0x0041E108: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041E10C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041E110: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041E114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041E118: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041E11C: jal         0x00426E78
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_2;
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x0041E124: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041E128: jal         0x0041DA28
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_3;
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041E130: j           L_0041E1C0
    // 0x0041E134: nop

        goto L_0041E1C0;
    // 0x0041E134: nop

L_0041E138:
    // 0x0041E138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E13C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E140: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E144: jal         0x00426594
    // 0x0041E148: nop

    func_00426594(rdram, ctx);
        goto after_4;
    // 0x0041E148: nop

    after_4:
    // 0x0041E14C: beq         $v0, $zero, L_0041E16C
    if (ctx->r2 == 0) {
        // 0x0041E150: nop
    
            goto L_0041E16C;
    }
    // 0x0041E150: nop

    // 0x0041E154: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E158: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E15C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E160: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041E164: j           L_0041E1B0
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041E1B0;
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041E16C:
    // 0x0041E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E170: jal         0x00426BD8
    // 0x0041E174: nop

    func_00426BD8(rdram, ctx);
        goto after_5;
    // 0x0041E174: nop

    after_5:
    // 0x0041E178: beql        $v0, $zero, L_0041E1A0
    if (ctx->r2 == 0) {
        // 0x0041E17C: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_0041E1A0;
    }
    goto skip_0;
    // 0x0041E17C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x0041E180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E184: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E188: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E18C: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E190: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E194: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x0041E198: j           L_0041E1B0
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041E1B0;
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041E1A0:
    // 0x0041E1A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E1A4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E1A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E1AC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E1B0:
    // 0x0041E1B0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041E1B4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041E1B8:
    // 0x0041E1B8: jal         0x00416644
    // 0x0041E1BC: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041E1BC: nop

    after_6:
L_0041E1C0:
    // 0x0041E1C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E1C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041E1C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041E1CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041E1D0: jr          $ra
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00211774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211774: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x00211778: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x0021177C: nop

    // 0x00211780: bc1f        L_002117A4
    if (!c1cs) {
        // 0x00211784: nop
    
            goto L_002117A4;
    }
    // 0x00211784: nop

    // 0x00211788: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021178C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00211790: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00211794: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x00211798: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x0021179C: j           L_002117C8
    // 0x002117A0: nop

        goto L_002117C8;
    // 0x002117A0: nop

L_002117A4:
    // 0x002117A4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x002117A8: nop

    // 0x002117AC: bc1f        L_002117D4
    if (!c1cs) {
        // 0x002117B0: nop
    
            goto L_002117D4;
    }
    // 0x002117B0: nop

    // 0x002117B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002117B8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002117BC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002117C0: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x002117C4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_002117C8:
    // 0x002117C8: nop

    // 0x002117CC: bc1tl       L_002117D4
    if (c1cs) {
        // 0x002117D0: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_002117D4;
    }
    goto skip_0;
    // 0x002117D0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_0:
L_002117D4:
    // 0x002117D4: jr          $ra
    // 0x002117D8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x002117D8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_00468410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468410: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00468414: addiu       $v0, $v0, 0x56B0
    ctx->r2 = ADD32(ctx->r2, 0X56B0);
    // 0x00468418: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0046841C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00468420: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00468424: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x00468428: sw          $zero, 0x350($v0)
    MEM_W(0X350, ctx->r2) = 0;
    // 0x0046842C: jr          $ra
    // 0x00468430: sw          $zero, 0x1C8($v0)
    MEM_W(0X1C8, ctx->r2) = 0;
    return;
    // 0x00468430: sw          $zero, 0x1C8($v0)
    MEM_W(0X1C8, ctx->r2) = 0;
;}
RECOMP_FUNC void func_00239058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239058: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0023905C: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00239060: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x00239064: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00239068: lwc1        $f1, 0x68($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x0023906C: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00239070: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00239074: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00239078: nop

    // 0x0023907C: bc1f        L_002390A8
    if (!c1cs) {
        // 0x00239080: nop
    
            goto L_002390A8;
    }
    // 0x00239080: nop

    // 0x00239084: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00239088: lwc1        $f1, 0x65E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X65E8);
    // 0x0023908C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00239090: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00239094: nop

    // 0x00239098: bc1t        L_002390C0
    if (c1cs) {
        // 0x0023909C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002390C0;
    }
    // 0x0023909C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002390A0: j           L_00239124
    // 0x002390A4: nop

        goto L_00239124;
    // 0x002390A4: nop

L_002390A8:
    // 0x002390A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002390AC: lwc1        $f0, 0x65EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65EC);
    // 0x002390B0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x002390B4: nop

    // 0x002390B8: bc1f        L_00239124
    if (!c1cs) {
        // 0x002390BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00239124;
    }
    // 0x002390BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002390C0:
    // 0x002390C0: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x002390C4: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x002390C8: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x002390CC: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x002390D0: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x002390D4: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x002390D8: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x002390DC: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x002390E0: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x002390E4: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x002390E8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x002390EC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x002390F0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x002390F4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x002390F8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x002390FC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00239100: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00239104: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00239108: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0023910C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x00239110: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00239114: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00239118: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x0023911C: jal         0x00237AFC
    // 0x00239120: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00239120: nop

    after_0:
L_00239124:
    // 0x00239124: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00239128: jr          $ra
    // 0x0023912C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0023912C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00426C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426C0C: jr          $ra
    // 0x00426C10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00426C10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00425220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00425224: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00425228: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042522C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00425230: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00425234: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00425238: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042523C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00425240: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x00425244: beq         $a1, $zero, L_00425254
    if (ctx->r5 == 0) {
        // 0x00425248: lui         $s4, 0x10
        ctx->r20 = S32(0X10 << 16);
            goto L_00425254;
    }
    // 0x00425248: lui         $s4, 0x10
    ctx->r20 = S32(0X10 << 16);
    // 0x0042524C: jal         0x002052D8
    // 0x00425250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x00425250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_00425254:
    // 0x00425254: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00425258: beq         $a1, $zero, L_00425268
    if (ctx->r5 == 0) {
        // 0x0042525C: nop
    
            goto L_00425268;
    }
    // 0x0042525C: nop

    // 0x00425260: jal         0x002052D8
    // 0x00425264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x00425264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_00425268:
    // 0x00425268: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x0042526C: beq         $a1, $zero, L_0042527C
    if (ctx->r5 == 0) {
        // 0x00425270: nop
    
            goto L_0042527C;
    }
    // 0x00425270: nop

    // 0x00425274: jal         0x002052D8
    // 0x00425278: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x00425278: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0042527C:
    // 0x0042527C: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x00425280: beq         $a1, $zero, L_00425294
    if (ctx->r5 == 0) {
        // 0x00425284: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00425294;
    }
    // 0x00425284: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00425288: jal         0x002052D8
    // 0x0042528C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0042528C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x00425290: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00425294:
    // 0x00425294: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_00425298:
    // 0x00425298: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0042529C: beql        $a1, $zero, L_004252B0
    if (ctx->r5 == 0) {
        // 0x004252A0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004252B0;
    }
    goto skip_0;
    // 0x004252A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x004252A4: jal         0x002052D8
    // 0x004252A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x004252A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x004252AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004252B0:
    // 0x004252B0: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x004252B4: bne         $v0, $zero, L_00425298
    if (ctx->r2 != 0) {
        // 0x004252B8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_00425298;
    }
    // 0x004252B8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x004252BC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x004252C0: addiu       $v0, $s3, 0x8
    ctx->r2 = ADD32(ctx->r19, 0X8);
    // 0x004252C4: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x004252C8: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x004252CC: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x004252D0: sw          $zero, 0x18($s3)
    MEM_W(0X18, ctx->r19) = 0;
    // 0x004252D4: sw          $zero, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = 0;
L_004252D8:
    // 0x004252D8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x004252DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004252E0: bgez        $v1, L_004252D8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004252E4: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_004252D8;
    }
    // 0x004252E4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x004252E8: jal         0x00266B80
    // 0x004252EC: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    func_00266B80(rdram, ctx);
        goto after_5;
    // 0x004252EC: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    after_5:
    // 0x004252F0: addu        $v1, $s0, $s4
    ctx->r3 = ADD32(ctx->r16, ctx->r20);
    // 0x004252F4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004252F8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x004252FC: bne         $v0, $zero, L_004253DC
    if (ctx->r2 != 0) {
        // 0x00425300: lui         $s2, 0x1
        ctx->r18 = S32(0X1 << 16);
            goto L_004253DC;
    }
    // 0x00425300: lui         $s2, 0x1
    ctx->r18 = S32(0X1 << 16);
    // 0x00425304: jal         0x00266B80
    // 0x00425308: lui         $s2, 0x5
    ctx->r18 = S32(0X5 << 16);
    func_00266B80(rdram, ctx);
        goto after_6;
    // 0x00425308: lui         $s2, 0x5
    ctx->r18 = S32(0X5 << 16);
    after_6:
    // 0x0042530C: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x00425310: or          $s1, $v0, $v1
    ctx->r17 = ctx->r2 | ctx->r3;
    // 0x00425314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425318: subu        $a1, $s1, $s4
    ctx->r5 = SUB32(ctx->r17, ctx->r20);
    // 0x0042531C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00425320: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00425324: addiu       $a3, $a3, 0x1810
    ctx->r7 = ADD32(ctx->r7, 0X1810);
    // 0x00425328: jal         0x00204FD0
    // 0x0042532C: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    func_00204FD0(rdram, ctx);
        goto after_7;
    // 0x0042532C: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    after_7:
    // 0x00425330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00425334: subu        $a1, $s1, $s0
    ctx->r5 = SUB32(ctx->r17, ctx->r16);
    // 0x00425338: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x0042533C: ori         $a2, $a2, 0xD200
    ctx->r6 = ctx->r6 | 0XD200;
    // 0x00425340: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00425344: addiu       $a3, $a3, 0x181C
    ctx->r7 = ADD32(ctx->r7, 0X181C);
    // 0x00425348: jal         0x00204FD0
    // 0x0042534C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00204FD0(rdram, ctx);
        goto after_8;
    // 0x0042534C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_8:
    // 0x00425350: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00425354: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x00425358: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042535C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00425360: jal         0x00266C5C
    // 0x00425364: ori         $a2, $a2, 0xD200
    ctx->r6 = ctx->r6 | 0XD200;
    func_00266C5C(rdram, ctx);
        goto after_9;
    // 0x00425364: ori         $a2, $a2, 0xD200
    ctx->r6 = ctx->r6 | 0XD200;
    after_9:
    // 0x00425368: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042536C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00425370: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00425374: jal         0x00266C5C
    // 0x00425378: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    func_00266C5C(rdram, ctx);
        goto after_10;
    // 0x00425378: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    after_10:
    // 0x0042537C: sw          $s0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r16;
    // 0x00425380: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00425384: ori         $s2, $s2, 0x4600
    ctx->r18 = ctx->r18 | 0X4600;
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

L_004253DC:
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
        goto after_11;
    // 0x0042540C: subu        $a1, $s1, $a2
    ctx->r5 = SUB32(ctx->r17, ctx->r6);
    after_11:
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
        goto after_12;
    // 0x00425490: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_12:
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
    goto skip_1;
    // 0x004254A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_1:
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
        goto after_13;
    // 0x004254C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_13:
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
        goto after_14;
    // 0x004254EC: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    after_14:
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
        goto after_15;
    // 0x00425508: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    after_15:
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
        goto after_16;
    // 0x00425528: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    after_16:
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
RECOMP_FUNC void func_00268C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00268C08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00268C0C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00268C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268C14: beq         $v1, $v0, L_00268C38
    if (ctx->r3 == ctx->r2) {
        // 0x00268C18: nop
    
            goto L_00268C38;
    }
    // 0x00268C18: nop

    // 0x00268C1C: lhu         $a1, 0x2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X2);
    // 0x00268C20: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00268C24: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00268C28: jal         0x002241C0
    // 0x00268C2C: nop

    func_002241C0(rdram, ctx);
        goto after_0;
    // 0x00268C2C: nop

    after_0:
    // 0x00268C30: j           L_00268C3C
    // 0x00268C34: nop

        goto L_00268C3C;
    // 0x00268C34: nop

L_00268C38:
    // 0x00268C38: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
L_00268C3C:
    // 0x00268C3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00268C40: jr          $ra
    // 0x00268C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E080: lw          $v0, 0x50C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X50C);
    // 0x0040E084: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040E088: jr          $ra
    // 0x0040E08C: sw          $v0, 0x50C($a1)
    MEM_W(0X50C, ctx->r5) = ctx->r2;
    return;
    // 0x0040E08C: sw          $v0, 0x50C($a1)
    MEM_W(0X50C, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_0040E46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040E474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040E478: jal         0x00284204
    // 0x0040E47C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00284204(rdram, ctx);
        goto after_0;
    // 0x0040E47C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0040E480: beq         $v0, $zero, L_0040E54C
    if (ctx->r2 == 0) {
        // 0x0040E484: nop
    
            goto L_0040E54C;
    }
    // 0x0040E484: nop

    // 0x0040E488: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x0040E48C: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040E490: sw          $v1, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r3;
    // 0x0040E494: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0040E498: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040E49C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E4A0: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0040E4A4: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x0040E4A8: blez        $v0, L_0040E4D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E4AC: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_0040E4D0;
    }
    // 0x0040E4AC: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x0040E4B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040E4B4:
    // 0x0040E4B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040E4B8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E4BC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040E4C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E4C4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E4C8: bne         $v0, $zero, L_0040E4B4
    if (ctx->r2 != 0) {
        // 0x0040E4CC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040E4B4;
    }
    // 0x0040E4CC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040E4D0:
    // 0x0040E4D0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040E4D4: blez        $v0, L_0040E4FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E4D8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E4FC;
    }
    // 0x0040E4D8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E4DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040E4E0:
    // 0x0040E4E0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0040E4E4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E4E8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040E4EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E4F0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E4F4: bne         $v0, $zero, L_0040E4E0
    if (ctx->r2 != 0) {
        // 0x0040E4F8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040E4E0;
    }
    // 0x0040E4F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040E4FC:
    // 0x0040E4FC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040E500: blez        $v0, L_0040E528
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E504: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E528;
    }
    // 0x0040E504: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040E50C:
    // 0x0040E50C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0040E510: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E514: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040E518: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E51C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E520: bne         $v0, $zero, L_0040E50C
    if (ctx->r2 != 0) {
        // 0x0040E524: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040E50C;
    }
    // 0x0040E524: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040E528:
    // 0x0040E528: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040E52C: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x0040E530: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040E534: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040E538: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040E53C: beq         $v0, $zero, L_0040E54C
    if (ctx->r2 == 0) {
        // 0x0040E540: nop
    
            goto L_0040E54C;
    }
    // 0x0040E540: nop

    // 0x0040E544: jalr        $v0
    // 0x0040E548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0040E548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0040E54C:
    // 0x0040E54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040E550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E554: jr          $ra
    // 0x0040E558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026D028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D028: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D02C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026D030: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026D034: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026D038: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026D03C: nop

    // 0x0026D040: bc1fl       L_0026D048
    if (!c1cs) {
        // 0x0026D044: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026D048;
    }
    goto skip_0;
    // 0x0026D044: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0026D048:
    // 0x0026D048: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026D04C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026D050: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026D054: nop

    // 0x0026D058: bc1fl       L_0026D060
    if (!c1cs) {
        // 0x0026D05C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026D060;
    }
    goto skip_1;
    // 0x0026D05C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0026D060:
    // 0x0026D060: jr          $ra
    // 0x0026D064: nop

    return;
    // 0x0026D064: nop

    // 0x0026D068: nop

    // 0x0026D06C: lwc1        $f1, 0x18($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X18);
;}
RECOMP_FUNC void func_00232C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00232C80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00232C84: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x00232C88: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00232C8C: bne         $v0, $zero, L_00232CCC
    if (ctx->r2 != 0) {
        // 0x00232C90: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00232CCC;
    }
    // 0x00232C90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00232C94: ori         $t0, $zero, 0xEC28
    ctx->r8 = 0 | 0XEC28;
    // 0x00232C98: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00232C9C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00232CA0:
    // 0x00232CA0: addu        $v0, $v1, $t0
    ctx->r2 = ADD32(ctx->r3, ctx->r8);
    // 0x00232CA4: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00232CA8: beq         $a1, $zero, L_00232CC0
    if (ctx->r5 == 0) {
        // 0x00232CAC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00232CC0;
    }
    // 0x00232CAC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00232CB0: jal         0x0022F1C8
    // 0x00232CB4: nop

    func_0022F1C8(rdram, ctx);
        goto after_0;
    // 0x00232CB4: nop

    after_0:
    // 0x00232CB8: j           L_00232CCC
    // 0x00232CBC: nop

        goto L_00232CCC;
    // 0x00232CBC: nop

L_00232CC0:
    // 0x00232CC0: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00232CC4: beq         $v0, $zero, L_00232CA0
    if (ctx->r2 == 0) {
        // 0x00232CC8: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_00232CA0;
    }
    // 0x00232CC8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_00232CCC:
    // 0x00232CCC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00232CD0: jr          $ra
    // 0x00232CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00232CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042F57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042F580: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0042F584: sw          $v0, 0x56B0($at)
    MEM_W(0X56B0, ctx->r1) = ctx->r2;
    // 0x0042F588: jr          $ra
    // 0x0042F58C: nop

    return;
    // 0x0042F58C: nop

;}
RECOMP_FUNC void func_00276898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276898: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x0027689C: jr          $ra
    // 0x002768A0: andi        $v0, $v0, 0x3FFF
    ctx->r2 = ctx->r2 & 0X3FFF;
    return;
    // 0x002768A0: andi        $v0, $v0, 0x3FFF
    ctx->r2 = ctx->r2 & 0X3FFF;
;}
RECOMP_FUNC void func_00206920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206920: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00206924: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00206928: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0020692C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00206930: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00206934: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00206938: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020693C: mflo        $a1
    ctx->r5 = lo;
    // 0x00206940: sll         $v1, $a1, 6
    ctx->r3 = S32(ctx->r5 << 6);
    // 0x00206944: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00206948: jr          $ra
    // 0x0020694C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x0020694C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0041AB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AB80: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041AB84: addiu       $a2, $a2, 0x1F84
    ctx->r6 = ADD32(ctx->r6, 0X1F84);
    // 0x0041AB88: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x0041AB8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041AB90: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041AB94: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
    // 0x0041AB98: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x0041AB9C: bne         $v1, $v0, L_0041ABAC
    if (ctx->r3 != ctx->r2) {
            // 0x0041ABA0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    func_0041ABAC(rdram, ctx);
    return;
    }
    // 0x0041ABA0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0041ABA4: jr          $ra
    // 0x0041ABA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041ABA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00246690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246690: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x00246694: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x00246698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024669C: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x002466A0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002466A4: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x002466A8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002466AC: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x002466B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002466B4: addiu       $v0, $sp, 0x80
    ctx->r2 = ADD32(ctx->r29, 0X80);
    // 0x002466B8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002466BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002466C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002466C4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x002466C8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x002466CC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x002466D0: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x002466D4: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x002466D8: sw          $ra, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r31;
    // 0x002466DC: jal         0x002688C8
    // 0x002466E0: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    func_002688C8(rdram, ctx);
        goto after_0;
    // 0x002466E0: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    after_0:
    // 0x002466E4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002466E8: beq         $v1, $s1, L_00246750
    if (ctx->r3 == ctx->r17) {
        // 0x002466EC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00246750;
    }
    // 0x002466EC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002466F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002466F4: beq         $v0, $zero, L_0024670C
    if (ctx->r2 == 0) {
        // 0x002466F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024670C;
    }
    // 0x002466F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002466FC: beq         $v1, $zero, L_00246724
    if (ctx->r3 == 0) {
        // 0x00246700: nop
    
            goto L_00246724;
    }
    // 0x00246700: nop

    // 0x00246704: j           L_002467B4
    // 0x00246708: nop

        goto L_002467B4;
    // 0x00246708: nop

L_0024670C:
    // 0x0024670C: beq         $v1, $v0, L_00246724
    if (ctx->r3 == ctx->r2) {
        // 0x00246710: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00246724;
    }
    // 0x00246710: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00246714: beq         $v1, $v0, L_00246794
    if (ctx->r3 == ctx->r2) {
        // 0x00246718: addiu       $a0, $sp, 0x70
        ctx->r4 = ADD32(ctx->r29, 0X70);
            goto L_00246794;
    }
    // 0x00246718: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x0024671C: j           L_002467B4
    // 0x00246720: nop

        goto L_002467B4;
    // 0x00246720: nop

L_00246724:
    // 0x00246724: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00246728: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024672C: lwc1        $f1, 0x698C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X698C);
    // 0x00246730: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x00246734: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x00246738: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0024673C: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x00246740: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x00246744: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x00246748: j           L_002467B4
    // 0x0024674C: swc1        $f1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_002467B4;
    // 0x0024674C: swc1        $f1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00246750:
    // 0x00246750: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x00246754: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00246758: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0024675C: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x00246760: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00246764: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00246768: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x0024676C: jal         0x0021AE6C
    // 0x00246770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0021AE6C(rdram, ctx);
        goto after_1;
    // 0x00246770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00246774: lw          $s2, 0x1C0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X1C0);
    // 0x00246778: jal         0x0021F1F8
    // 0x0024677C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1F8(rdram, ctx);
        goto after_2;
    // 0x0024677C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00246780: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x00246784: beql        $v0, $v1, L_002467B4
    if (ctx->r2 == ctx->r3) {
        // 0x00246788: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_002467B4;
    }
    goto skip_0;
    // 0x00246788: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    skip_0:
    // 0x0024678C: j           L_002467B4
    // 0x00246790: nop

        goto L_002467B4;
    // 0x00246790: nop

L_00246794:
    // 0x00246794: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00246798: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0024679C: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x002467A0: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x002467A4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x002467A8: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002467AC: jal         0x002156D4
    // 0x002467B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002156D4(rdram, ctx);
        goto after_3;
    // 0x002467B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_002467B4:
    // 0x002467B4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002467B8: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002467BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002467C0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002467C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002467C8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x002467CC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x002467D0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x002467D4: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x002467D8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x002467DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002467E0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002467E4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x002467E8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x002467EC: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x002467F0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x002467F4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x002467F8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x002467FC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00246800: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00246804: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00246808: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0024680C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00246810: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00246814: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00246818: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0024681C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00246820: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x00246824: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00246828: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x0024682C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x00246830: jal         0x0022F350
    // 0x00246834: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_0022F350(rdram, ctx);
        goto after_4;
    // 0x00246834: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_4:
    // 0x00246838: lw          $ra, 0x98($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X98);
    // 0x0024683C: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x00246840: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x00246844: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x00246848: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0024684C: jr          $ra
    // 0x00246850: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x00246850: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00235C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235C30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00235C34: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x00235C38: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00235C3C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00235C40: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00235C44: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00235C48: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00235C4C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00235C50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00235C54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00235C58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00235C5C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x00235C60: addu        $at, $s7, $at
    ctx->r1 = ADD32(ctx->r23, ctx->r1);
    // 0x00235C64: lw          $v1, -0x6A50($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6A50);
    // 0x00235C68: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x00235C6C: beq         $v1, $v0, L_00235F1C
    if (ctx->r3 == ctx->r2) {
        // 0x00235C70: lui         $a1, 0xE300
        ctx->r5 = S32(0XE300 << 16);
            goto L_00235F1C;
    }
    // 0x00235C70: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x00235C74: ori         $a1, $a1, 0xA01
    ctx->r5 = ctx->r5 | 0XA01;
    // 0x00235C78: lui         $a3, 0x708
    ctx->r7 = S32(0X708 << 16);
    // 0x00235C7C: ori         $a3, $a3, 0x200
    ctx->r7 = ctx->r7 | 0X200;
    // 0x00235C80: lui         $t0, 0x707
    ctx->r8 = S32(0X707 << 16);
    // 0x00235C84: ori         $t0, $t0, 0xF400
    ctx->r8 = ctx->r8 | 0XF400;
    // 0x00235C88: lui         $t2, 0xF588
    ctx->r10 = S32(0XF588 << 16);
    // 0x00235C8C: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x00235C90: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x00235C94: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x00235C98: lui         $t3, 0x3
    ctx->r11 = S32(0X3 << 16);
    // 0x00235C9C: ori         $t3, $t3, 0xC03C
    ctx->r11 = ctx->r11 | 0XC03C;
    // 0x00235CA0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00235CA4: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00235CA8: addiu       $s2, $s2, 0x5A1C
    ctx->r18 = ADD32(ctx->r18, 0X5A1C);
    // 0x00235CAC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00235CB0: addiu       $v0, $v0, -0x71DC
    ctx->r2 = ADD32(ctx->r2, -0X71DC);
    // 0x00235CB4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00235CB8: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x00235CBC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00235CC0: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x00235CC4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00235CC8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00235CCC: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x00235CD0: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00235CD4: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00235CD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00235CDC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00235CE0: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00235CE4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00235CE8: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x00235CEC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00235CF0: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x00235CF4: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    // 0x00235CF8: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00235CFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00235D00: addiu       $v0, $v0, -0x4A80
    ctx->r2 = ADD32(ctx->r2, -0X4A80);
    // 0x00235D04: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00235D08: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x00235D0C: lui         $v0, 0xF590
    ctx->r2 = S32(0XF590 << 16);
    // 0x00235D10: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00235D14: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00235D18: sw          $a3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r7;
    // 0x00235D1C: addiu       $a1, $v1, 0x20
    ctx->r5 = ADD32(ctx->r3, 0X20);
    // 0x00235D20: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00235D24: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    // 0x00235D28: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x00235D2C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00235D30: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x00235D34: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00235D38: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00235D3C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x00235D40: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x00235D44: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x00235D48: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00235D4C: sw          $a2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r6;
    // 0x00235D50: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00235D54: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x00235D58: addiu       $a1, $v1, 0x40
    ctx->r5 = ADD32(ctx->r3, 0X40);
    // 0x00235D5C: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00235D60: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    // 0x00235D64: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x00235D68: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x00235D6C: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    // 0x00235D70: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x00235D74: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x00235D78: addiu       $a0, $v1, 0x48
    ctx->r4 = ADD32(ctx->r3, 0X48);
    // 0x00235D7C: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00235D80: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00235D84: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x00235D88: addiu       $v0, $zero, -0x38
    ctx->r2 = ADD32(0, -0X38);
    // 0x00235D8C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00235D90: addiu       $v0, $v1, 0x50
    ctx->r2 = ADD32(ctx->r3, 0X50);
    // 0x00235D94: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00235D98: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x00235D9C: sw          $v0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r2;
    // 0x00235DA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00235DA4: addiu       $v0, $v0, -0x3038
    ctx->r2 = ADD32(ctx->r2, -0X3038);
    // 0x00235DA8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_00235DAC:
    // 0x00235DAC: ori         $v0, $zero, 0x94D8
    ctx->r2 = 0 | 0X94D8;
    // 0x00235DB0: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00235DB4: addu        $s3, $s7, $v0
    ctx->r19 = ADD32(ctx->r23, ctx->r2);
    // 0x00235DB8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x00235DBC: beql        $s0, $zero, L_00235F00
    if (ctx->r16 == 0) {
        // 0x00235DC0: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_00235F00;
    }
    goto skip_0;
    // 0x00235DC0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_0:
    // 0x00235DC4: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
L_00235DC8:
    // 0x00235DC8: lh          $v0, 0x18($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X18);
    // 0x00235DCC: lw          $s4, 0x4($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X4);
    // 0x00235DD0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00235DD4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00235DD8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x00235DDC: lh          $v0, 0x1A($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X1A);
    // 0x00235DE0: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x00235DE4: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00235DE8: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00235DEC: lh          $v0, 0x1C($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X1C);
    // 0x00235DF0: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00235DF4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00235DF8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00235DFC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00235E00: nop

    // 0x00235E04: bc1f        L_00235E70
    if (!c1cs) {
        // 0x00235E08: swc1        $f1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00235E70;
    }
    // 0x00235E08: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00235E0C: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00235E10: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x00235E14: nop

    // 0x00235E18: bc1f        L_00235E74
    if (!c1cs) {
        // 0x00235E1C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00235E74;
    }
    // 0x00235E1C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00235E20: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00235E24: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00235E28: nop

    // 0x00235E2C: bc1f        L_00235E74
    if (!c1cs) {
        // 0x00235E30: nop
    
            goto L_00235E74;
    }
    // 0x00235E30: nop

    // 0x00235E34: lwc1        $f0, -0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, -0XC);
    // 0x00235E38: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00235E3C: nop

    // 0x00235E40: bc1f        L_00235E74
    if (!c1cs) {
        // 0x00235E44: nop
    
            goto L_00235E74;
    }
    // 0x00235E44: nop

    // 0x00235E48: lwc1        $f0, -0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, -0X8);
    // 0x00235E4C: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x00235E50: nop

    // 0x00235E54: bc1f        L_00235E74
    if (!c1cs) {
        // 0x00235E58: nop
    
            goto L_00235E74;
    }
    // 0x00235E58: nop

    // 0x00235E5C: lwc1        $f0, -0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, -0X4);
    // 0x00235E60: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00235E64: nop

    // 0x00235E68: bc1t        L_00235E94
    if (c1cs) {
        // 0x00235E6C: lui         $a0, 0xDA38
        ctx->r4 = S32(0XDA38 << 16);
            goto L_00235E94;
    }
    // 0x00235E6C: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
L_00235E70:
    // 0x00235E70: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00235E74:
    // 0x00235E74: jal         0x00200738
    // 0x00235E78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00235E78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00235E7C: ori         $a0, $zero, 0x95A0
    ctx->r4 = 0 | 0X95A0;
    // 0x00235E80: addu        $a0, $s7, $a0
    ctx->r4 = ADD32(ctx->r23, ctx->r4);
    // 0x00235E84: jal         0x00200574
    // 0x00235E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x00235E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00235E8C: j           L_00235EF4
    // 0x00235E90: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
        goto L_00235EF4;
    // 0x00235E90: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
L_00235E94:
    // 0x00235E94: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x00235E98: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x00235E9C: ori         $a1, $a1, 0x4008
    ctx->r5 = ctx->r5 | 0X4008;
    // 0x00235EA0: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x00235EA4: ori         $a3, $a3, 0x204
    ctx->r7 = ctx->r7 | 0X204;
    // 0x00235EA8: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    // 0x00235EAC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00235EB0: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x00235EB4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00235EB8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00235EBC: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00235EC0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x00235EC4: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x00235EC8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x00235ECC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00235ED0: addiu       $v0, $v0, -0x52B8
    ctx->r2 = ADD32(ctx->r2, -0X52B8);
    // 0x00235ED4: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00235ED8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00235EDC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x00235EE0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00235EE4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00235EE8: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00235EEC: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x00235EF0: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
L_00235EF4:
    // 0x00235EF4: bne         $s0, $zero, L_00235DC8
    if (ctx->r16 != 0) {
        // 0x00235EF8: addiu       $t0, $s0, 0x8
        ctx->r8 = ADD32(ctx->r16, 0X8);
            goto L_00235DC8;
    }
    // 0x00235EF8: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x00235EFC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_00235F00:
    // 0x00235F00: slti        $v0, $s6, 0xA
    ctx->r2 = SIGNED(ctx->r22) < 0XA ? 1 : 0;
    // 0x00235F04: bne         $v0, $zero, L_00235DAC
    if (ctx->r2 != 0) {
        // 0x00235F08: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_00235DAC;
    }
    // 0x00235F08: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
    // 0x00235F0C: jal         0x0020B5B8
    // 0x00235F10: nop

    func_0020B5B8(rdram, ctx);
        goto after_2;
    // 0x00235F10: nop

    after_2:
    // 0x00235F14: jal         0x00207A54
    // 0x00235F18: nop

    entry_00207A54(rdram, ctx);
        goto after_3;
    // 0x00235F18: nop

    after_3:
L_00235F1C:
    // 0x00235F1C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00235F20: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00235F24: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00235F28: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00235F2C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00235F30: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00235F34: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00235F38: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00235F3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00235F40: jr          $ra
    // 0x00235F44: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00235F44: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0025E658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025E65C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025E660: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x0025E664: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0025E668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025E66C: bne         $v1, $v0, L_0025E68C
    if (ctx->r3 != ctx->r2) {
        // 0x0025E670: nop
    
            goto L_0025E68C;
    }
    // 0x0025E670: nop

    // 0x0025E674: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x0025E678: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0025E67C: bne         $v0, $zero, L_0025E68C
    if (ctx->r2 != 0) {
        // 0x0025E680: nop
    
            goto L_0025E68C;
    }
    // 0x0025E680: nop

    // 0x0025E684: jal         0x00243414
    // 0x0025E688: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025E688: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0025E68C:
    // 0x0025E68C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025E690: jr          $ra
    // 0x0025E694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025E694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00270A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00270A60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00270A64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00270A68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00270A6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00270A70: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00270A74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00270A78: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00270A7C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00270A80: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00270A84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00270A88: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00270A8C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00270A90: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00270A94: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00270A98: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00270A9C: jal         0x00281444
    // 0x00270AA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    func_00281444(rdram, ctx);
        goto after_0;
    // 0x00270AA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x00270AA4: sw          $v0, 0x2B98($s1)
    MEM_W(0X2B98, ctx->r17) = ctx->r2;
    // 0x00270AA8: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x00270AAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00270AB0: beq         $v0, $zero, L_00270AF0
    if (ctx->r2 == 0) {
        // 0x00270AB4: nop
    
            goto L_00270AF0;
    }
    // 0x00270AB4: nop

    // 0x00270AB8: lh          $a1, 0x2B8C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2B8C);
    // 0x00270ABC: jal         0x00273D88
    // 0x00270AC0: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    func_00273D88(rdram, ctx);
        goto after_1;
    // 0x00270AC0: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    after_1:
    // 0x00270AC4: bne         $v0, $zero, L_00270C5C
    if (ctx->r2 != 0) {
        // 0x00270AC8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00270C5C;
    }
    // 0x00270AC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270ACC: lw          $a1, 0x2B98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2B98);
    // 0x00270AD0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00270AD4: jal         0x002743D0
    // 0x00270AD8: addiu       $a1, $a1, 0x114
    ctx->r5 = ADD32(ctx->r5, 0X114);
    func_002743D0(rdram, ctx);
        goto after_2;
    // 0x00270AD8: addiu       $a1, $a1, 0x114
    ctx->r5 = ADD32(ctx->r5, 0X114);
    after_2:
    // 0x00270ADC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00270AE0: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00270AE4: nop

    // 0x00270AE8: bc1t        L_00270C5C
    if (c1cs) {
        // 0x00270AEC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00270C5C;
    }
    // 0x00270AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00270AF0:
    // 0x00270AF0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x00270AF4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00270AF8: beq         $v0, $zero, L_00270B24
    if (ctx->r2 == 0) {
        // 0x00270AFC: nop
    
            goto L_00270B24;
    }
    // 0x00270AFC: nop

    // 0x00270B00: lw          $a2, 0x2B90($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X2B90);
    // 0x00270B04: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00270B08: beq         $a2, $s2, L_00270B24
    if (ctx->r6 == ctx->r18) {
        // 0x00270B0C: nop
    
            goto L_00270B24;
    }
    // 0x00270B0C: nop

    // 0x00270B10: lh          $a1, 0x2B8C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2B8C);
    // 0x00270B14: jal         0x002740E8
    // 0x00270B18: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    func_002740E8(rdram, ctx);
        goto after_3;
    // 0x00270B18: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    after_3:
    // 0x00270B1C: bne         $v0, $s2, L_00270C5C
    if (ctx->r2 != ctx->r18) {
        // 0x00270B20: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00270C5C;
    }
    // 0x00270B20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00270B24:
    // 0x00270B24: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x00270B28: beq         $v0, $zero, L_00270B4C
    if (ctx->r2 == 0) {
        // 0x00270B2C: addiu       $a0, $s1, 0x138
        ctx->r4 = ADD32(ctx->r17, 0X138);
            goto L_00270B4C;
    }
    // 0x00270B2C: addiu       $a0, $s1, 0x138
    ctx->r4 = ADD32(ctx->r17, 0X138);
    // 0x00270B30: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x00270B34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00270B38: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00270B3C: jal         0x00275FA0
    // 0x00270B40: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00275FA0(rdram, ctx);
        goto after_4;
    // 0x00270B40: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_4:
    // 0x00270B44: j           L_00270C5C
    // 0x00270B48: nop

        goto L_00270C5C;
    // 0x00270B48: nop

L_00270B4C:
    // 0x00270B4C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x00270B50: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00270B54: beq         $v0, $zero, L_00270B70
    if (ctx->r2 == 0) {
        // 0x00270B58: addiu       $a0, $s1, 0x1DB8
        ctx->r4 = ADD32(ctx->r17, 0X1DB8);
            goto L_00270B70;
    }
    // 0x00270B58: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    // 0x00270B5C: lh          $a1, 0x2B8C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2B8C);
    // 0x00270B60: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x00270B64: jal         0x00273C5C
    // 0x00270B68: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    func_00273C5C(rdram, ctx);
        goto after_5;
    // 0x00270B68: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    after_5:
    // 0x00270B6C: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
L_00270B70:
    // 0x00270B70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00270B74: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x00270B78: jal         0x00273504
    // 0x00270B7C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00273504(rdram, ctx);
        goto after_6;
    // 0x00270B7C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_6:
    // 0x00270B80: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00270B84: bne         $s2, $zero, L_00270B94
    if (ctx->r18 != 0) {
        // 0x00270B88: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00270B94;
    }
    // 0x00270B88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00270B8C: j           L_00270C5C
    // 0x00270B90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_00270C5C;
    // 0x00270B90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00270B94:
    // 0x00270B94: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x00270B98: jal         0x00273E98
    // 0x00270B9C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00273E98(rdram, ctx);
        goto after_7;
    // 0x00270B9C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00270BA0: lh          $a1, 0x2B8C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2B8C);
    // 0x00270BA4: jal         0x00273EB8
    // 0x00270BA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00273EB8(rdram, ctx);
        goto after_8;
    // 0x00270BA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x00270BAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00270BB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00270BB4: jal         0x00273EC0
    // 0x00270BB8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_00273EC0(rdram, ctx);
        goto after_9;
    // 0x00270BB8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_9:
    // 0x00270BBC: jal         0x0029DFF0
    // 0x00270BC0: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_10;
    // 0x00270BC0: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    after_10:
    // 0x00270BC4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00270BC8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00270BCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00270BD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00270BD4: beq         $v1, $v0, L_00270BFC
    if (ctx->r3 == ctx->r2) {
        // 0x00270BD8: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00270BFC;
    }
    // 0x00270BD8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00270BDC: jal         0x0029E010
    // 0x00270BE0: nop

    func_0029E010(rdram, ctx);
        goto after_11;
    // 0x00270BE0: nop

    after_11:
    // 0x00270BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00270BE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270BEC: jal         0x0029B6F0
    // 0x00270BF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x00270BF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x00270BF4: j           L_00270C08
    // 0x00270BF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00270C08;
    // 0x00270BF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00270BFC:
    // 0x00270BFC: jal         0x0029E010
    // 0x00270C00: nop

    func_0029E010(rdram, ctx);
        goto after_13;
    // 0x00270C00: nop

    after_13:
    // 0x00270C04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00270C08:
    // 0x00270C08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00270C0C: lw          $a1, 0xC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC);
    // 0x00270C10: jal         0x002706A0
    // 0x00270C14: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_002706A0(rdram, ctx);
        goto after_14;
    // 0x00270C14: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_14:
    // 0x00270C18: jal         0x0029DFF0
    // 0x00270C1C: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_15;
    // 0x00270C1C: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    after_15:
    // 0x00270C20: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00270C24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00270C28: beq         $v1, $zero, L_00270C50
    if (ctx->r3 == 0) {
        // 0x00270C2C: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00270C50;
    }
    // 0x00270C2C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00270C30: jal         0x0029E010
    // 0x00270C34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_16;
    // 0x00270C34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_16:
    // 0x00270C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00270C3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270C40: jal         0x0029B820
    // 0x00270C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_17;
    // 0x00270C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x00270C48: j           L_00270C5C
    // 0x00270C4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00270C5C;
    // 0x00270C4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00270C50:
    // 0x00270C50: jal         0x0029E010
    // 0x00270C54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_18;
    // 0x00270C54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_18:
    // 0x00270C58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00270C5C:
    // 0x00270C5C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00270C60: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00270C64: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00270C68: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00270C6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00270C70: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00270C74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00270C78: jr          $ra
    // 0x00270C7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00270C7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00446DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446DAC: jr          $ra
    // 0x00446DB0: nop

    return;
    // 0x00446DB0: nop

;}
RECOMP_FUNC void func_0027BA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BA8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027BA90: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0027BA94: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_0027BA98:
    // 0x0027BA98: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0027BA9C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0027BAA0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0027BAA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0027BAA8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0027BAAC: bgez        $v0, L_0027BA98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027BAB0: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_0027BA98;
    }
    // 0x0027BAB0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x0027BAB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0027BAB8:
    // 0x0027BAB8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x0027BABC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0027BAC0: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x0027BAC4: lb          $a3, 0x0($v1)
    ctx->r7 = MEM_B(ctx->r3, 0X0);
    // 0x0027BAC8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0027BACC: bltz        $a3, L_0027BADC
    if (SIGNED(ctx->r7) < 0) {
        // 0x0027BAD0: addu        $v0, $v0, $a2
        ctx->r2 = ADD32(ctx->r2, ctx->r6);
            goto L_0027BADC;
    }
    // 0x0027BAD0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0027BAD4: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x0027BAD8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_0027BADC:
    // 0x0027BADC: bgez        $a3, L_0027BAB8
    if (SIGNED(ctx->r7) >= 0) {
        // 0x0027BAE0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0027BAB8;
    }
    // 0x0027BAE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0027BAE4: jr          $ra
    // 0x0027BAE8: nop

    return;
    // 0x0027BAE8: nop

;}
RECOMP_FUNC void func_004263DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004263DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004263E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004263E4: addiu       $a1, $zero, 0x810
    ctx->r5 = ADD32(0, 0X810);
    // 0x004263E8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004263EC: addiu       $a3, $a3, 0x18A0
    ctx->r7 = ADD32(ctx->r7, 0X18A0);
    // 0x004263F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004263F4: jal         0x00204EDC
    // 0x004263F8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x004263F8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_0:
    // 0x004263FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00426400: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00426404: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426408: sw          $v0, 0x2228($at)
    MEM_W(0X2228, ctx->r1) = ctx->r2;
    // 0x0042640C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426410: sw          $a0, 0x2224($at)
    MEM_W(0X2224, ctx->r1) = ctx->r4;
    // 0x00426414: jal         0x00266C5C
    // 0x00426418: addiu       $a2, $zero, 0x810
    ctx->r6 = ADD32(0, 0X810);
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x00426418: addiu       $a2, $zero, 0x810
    ctx->r6 = ADD32(0, 0X810);
    after_1:
    // 0x0042641C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00426420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00426424: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426428: sw          $v0, 0x2220($at)
    MEM_W(0X2220, ctx->r1) = ctx->r2;
    // 0x0042642C: jr          $ra
    // 0x00426430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00426430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E454: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E458: jal         0x00412438
    // 0x0040E45C: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    func_00412438(rdram, ctx);
        goto after_0;
    // 0x0040E45C: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_0:
    // 0x0040E460: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E464: jr          $ra
    // 0x0040E468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004617D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042890C:
    // 0x004617D8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x004617DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004617E0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004617E4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x004617E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004617EC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x004617F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004617F4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004617F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004617FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00461800: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x00461804: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x00461808: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x0046180C: srl         $a2, $a1, 8
    ctx->r6 = S32(U32(ctx->r5) >> 8);
    // 0x00461810: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x00461814: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x00461818: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0046181C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00461820: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00461824: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00461828: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0046182C: lbu         $a0, 0x64($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X64);
    // 0x00461830: beq         $a0, $zero, L_00461908
    if (ctx->r4 == 0) {
        // 0x00461834: addu        $s7, $v1, $v0
        ctx->r23 = ADD32(ctx->r3, ctx->r2);
            goto L_00461908;
    }
    // 0x00461834: addu        $s7, $v1, $v0
    ctx->r23 = ADD32(ctx->r3, ctx->r2);
    // 0x00461838: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0046183C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x00461840: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
L_00461844:
    // 0x00461844: bne         $a3, $zero, L_00461850
    if (ctx->r7 != 0) {
        // 0x00461848: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00461850;
    }
    // 0x00461848: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0046184C: lw          $s2, 0x60($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X60);
L_00461850:
    // 0x00461850: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00461854: beq         $v1, $s6, L_00461874
    if (ctx->r3 == ctx->r22) {
        // 0x00461858: addu        $v0, $s3, $s7
        ctx->r2 = ADD32(ctx->r19, ctx->r23);
            goto L_00461874;
    }
    // 0x00461858: addu        $v0, $s3, $s7
    ctx->r2 = ADD32(ctx->r19, ctx->r23);
    // 0x0046185C: lbu         $v0, 0x101($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X101);
    // 0x00461860: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00461864: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x00461868: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0046186C: beql        $v0, $zero, L_004618F4
    if (ctx->r2 == 0) {
        // 0x00461870: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004618F4;
    }
    goto skip_0;
    // 0x00461870: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_00461874:
    // 0x00461874: lbu         $v0, 0x100($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X100);
    // 0x00461878: beq         $a3, $v0, L_004618A4
    if (ctx->r7 == ctx->r2) {
        // 0x0046187C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_004618A4;
    }
    // 0x0046187C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00461880: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00461884: jal         0x004299C4
    // 0x00461888: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_004299C4(rdram, ctx);
        goto after_0;
    // 0x00461888: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0046188C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461890: beq         $v1, $zero, L_004618A0
    if (ctx->r3 == 0) {
        // 0x00461894: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004618A0;
    }
    // 0x00461894: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00461898: bne         $v1, $v0, L_0046190C
    if (ctx->r3 != ctx->r2) {
        // 0x0046189C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0046190C;
    }
    // 0x0046189C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004618A0:
    // 0x004618A0: sb          $s1, 0x100($s3)
    MEM_B(0X100, ctx->r19) = ctx->r17;
L_004618A4:
    // 0x004618A4: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x004618A8: beq         $v0, $zero, L_004618EC
    if (ctx->r2 == 0) {
        // 0x004618AC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004618EC;
    }
    // 0x004618AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004618B0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x004618B4: addu        $v1, $v0, $s3
    ctx->r3 = ADD32(ctx->r2, ctx->r19);
L_004618B8:
    // 0x004618B8: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x004618BC: beq         $v0, $zero, L_004618E4
    if (ctx->r2 == 0) {
        // 0x004618C0: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_004618E4;
    }
    // 0x004618C0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x004618C4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x004618C8: beql        $v0, $s5, L_004618D0
    if (ctx->r2 == ctx->r21) {
        // 0x004618CC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004618D0;
    }
    goto skip_1;
    // 0x004618CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
L_004618D0:
    // 0x004618D0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x004618D4: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x004618D8: bne         $v0, $zero, L_004618B8
    if (ctx->r2 != 0) {
        // 0x004618DC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004618B8;
    }
    // 0x004618DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004618E0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_004618E4:
    // 0x004618E4: bne         $v0, $zero, L_004618F4
    if (ctx->r2 != 0) {
        // 0x004618E8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004618F4;
    }
    // 0x004618E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004618EC:
    // 0x004618EC: j           L_0042890C
    // 0x004618F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    entry_0042890C(rdram, ctx);
    return;
    // 0x004618F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_004618F4:
    // 0x004618F4: lbu         $v1, 0x64($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X64);
    // 0x004618F8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x004618FC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00461900: bne         $v0, $zero, L_00461844
    if (ctx->r2 != 0) {
        // 0x00461904: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_00461844;
    }
    // 0x00461904: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
L_00461908:
    // 0x00461908: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0046190C:
    // 0x0046190C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00461910: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00461914: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00461918: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0046191C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00461920: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00461924: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00461928: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0046192C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00461930: jr          $ra
    // 0x00461934: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00461934: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004032E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004032E4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004032E8: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004032EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004032F0: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004032F4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004032F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004032FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00403300: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00403304: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00403308: jal         0x00246108
    // 0x0040330C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040330C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00403310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00403314: lui         $a2, 0x3C8E
    ctx->r6 = S32(0X3C8E << 16);
    // 0x00403318: ori         $a2, $a2, 0xFA37
    ctx->r6 = ctx->r6 | 0XFA37;
    // 0x0040331C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x00403320: jal         0x00245BAC
    // 0x00403324: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00403324: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00403328: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040332C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00403330: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00403334: jr          $ra
    // 0x00403338: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00403338: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002718D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718D8: jr          $ra
    // 0x002718DC: sw          $a1, 0x2B98($a0)
    MEM_W(0X2B98, ctx->r4) = ctx->r5;
    return;
    // 0x002718DC: sw          $a1, 0x2B98($a0)
    MEM_W(0X2B98, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00253624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253624: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x00253628: beq         $v0, $zero, L_00253638
    if (ctx->r2 == 0) {
        // 0x0025362C: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00253638;
    }
    // 0x0025362C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00253630: bnel        $v0, $v1, L_00253638
    if (ctx->r2 != ctx->r3) {
        // 0x00253634: sw          $v1, 0xB4($a0)
        MEM_W(0XB4, ctx->r4) = ctx->r3;
            goto L_00253638;
    }
    goto skip_0;
    // 0x00253634: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    skip_0:
L_00253638:
    // 0x00253638: jr          $ra
    // 0x0025363C: nop

    return;
    // 0x0025363C: nop

;}
RECOMP_FUNC void func_004540F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004540F8: jr          $ra
    // 0x004540FC: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    return;
    // 0x004540FC: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
;}
RECOMP_FUNC void func_00423C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423C40: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423C44: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423C48: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423C4C: beq         $v0, $zero, L_00423C68
    if (ctx->r2 == 0) {
        // 0x00423C50: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423C68;
    }
    // 0x00423C50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423C54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423C58: addu        $at, $at, $v0
    gpr jr_addend_00423C60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423C5C: lw          $v0, 0x16B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X16B8);
    // 0x00423C60: jr          $v0
    // 0x00423C64: nop

    switch (jr_addend_00423C60 >> 2) {
        case 0: goto L_00423C68; break;
        case 1: goto L_00423C78; break;
        case 2: goto L_00423C88; break;
        case 3: goto L_00423C98; break;
        case 4: goto L_00423CA8; break;
        default: switch_error(__func__, 0x00423C60, 0x800C16B8);
    }
    // 0x00423C64: nop

L_00423C68:
    // 0x00423C68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C6C: addiu       $v0, $v0, 0x5168
    ctx->r2 = ADD32(ctx->r2, 0X5168);
    // 0x00423C70: j           L_00423CB4
    // 0x00423C74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423CB4;
    // 0x00423C74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C78:
    // 0x00423C78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C7C: addiu       $v0, $v0, 0x51C4
    ctx->r2 = ADD32(ctx->r2, 0X51C4);
    // 0x00423C80: j           L_00423CB4
    // 0x00423C84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423CB4;
    // 0x00423C84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C88:
    // 0x00423C88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C8C: addiu       $v0, $v0, 0x5200
    ctx->r2 = ADD32(ctx->r2, 0X5200);
    // 0x00423C90: j           L_00423CB4
    // 0x00423C94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423CB4;
    // 0x00423C94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C98:
    // 0x00423C98: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C9C: addiu       $v0, $v0, 0x5250
    ctx->r2 = ADD32(ctx->r2, 0X5250);
    // 0x00423CA0: j           L_00423CB4
    // 0x00423CA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423CB4;
    // 0x00423CA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423CA8:
    // 0x00423CA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423CAC: addiu       $v0, $v0, 0x52B0
    ctx->r2 = ADD32(ctx->r2, 0X52B0);
    // 0x00423CB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423CB4:
    // 0x00423CB4: jr          $ra
    // 0x00423CB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423CB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00450ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417B4C:
    // 0x00450ACC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00450AD0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00450AD4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00450AD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450ADC: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00450AE0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00450AE4: addiu       $v0, $v0, -0x5468
    ctx->r2 = ADD32(ctx->r2, -0X5468);
    // 0x00450AE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00450AEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00450AF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00450AF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00450AF8:
    // 0x00450AF8: sb          $zero, 0xA8($v0)
    MEM_B(0XA8, ctx->r2) = 0;
    // 0x00450AFC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00450B00: bgez        $s0, L_00450AF8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00450B04: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00450AF8;
    }
    // 0x00450B04: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00450B08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00450B0C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00450B10: addiu       $s2, $s2, -0x54E8
    ctx->r18 = ADD32(ctx->r18, -0X54E8);
    // 0x00450B14: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00450B18: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00450B1C: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00450B20:
    // 0x00450B20: jal         0x002855E8
    // 0x00450B24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00450B24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00450B28: beql        $v0, $zero, L_00450B40
    if (ctx->r2 == 0) {
        // 0x00450B2C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00450B40;
    }
    goto skip_0;
    // 0x00450B2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00450B30: sb          $s3, 0x28($s2)
    MEM_B(0X28, ctx->r18) = ctx->r19;
    // 0x00450B34: sb          $s0, 0x2F($s2)
    MEM_B(0X2F, ctx->r18) = ctx->r16;
    // 0x00450B38: j           L_00417B4C
    // 0x00450B3C: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
    entry_00417B4C(rdram, ctx);
    return;
    // 0x00450B3C: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
L_00450B40:
    // 0x00450B40: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00450B44: bne         $v0, $zero, L_00450B20
    if (ctx->r2 != 0) {
        // 0x00450B48: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00450B20;
    }
    // 0x00450B48: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x00450B4C: jal         0x00275A74
    // 0x00450B50: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x00450B50: nop

    after_1:
    // 0x00450B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00450B58: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00450B5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00450B60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00450B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00450B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450B6C: jr          $ra
    // 0x00450B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00450B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00428160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428160: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00428164: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x00428168: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042816C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x00428170: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00428174: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x00428178: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0042817C: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x00428180: jal         0x00299FE4
    // 0x00428184: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x00428184: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    after_0:
    // 0x00428188: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042818C: jal         0x00427F80
    // 0x00428190: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00427F80(rdram, ctx);
        goto after_1;
    // 0x00428190: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00428194: jal         0x0029A050
    // 0x00428198: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029A050(rdram, ctx);
        goto after_2;
    // 0x00428198: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0042819C: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x004281A0: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00428314;
    }
    // 0x004281A0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004281A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004281A8: sw          $s1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r17;
    // 0x004281AC: sw          $s3, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r19;
    // 0x004281B0: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x004281B4: jal         0x00429EC4
    // 0x004281B8: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_3;
    // 0x004281B8: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_3:
    // 0x004281BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004281C0: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x004281C4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00428314;
    }
    // 0x004281C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004281C8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004281CC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004281D0: jal         0x00299680
    // 0x004281D4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_4;
    // 0x004281D4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x004281D8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004281DC: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x004281E0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00428314;
    }
    // 0x004281E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x004281E4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x004281E8: jal         0x00429DB4
    // 0x004281EC: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    func_00429DB4(rdram, ctx);
        goto after_5;
    // 0x004281EC: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    after_5:
    // 0x004281F0: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x004281F4: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x004281F8: bne         $v1, $v0, L_00428210
    if (ctx->r3 != ctx->r2) {
        // 0x004281FC: addiu       $s1, $sp, 0x10
        ctx->r17 = ADD32(ctx->r29, 0X10);
            goto L_00428210;
    }
    // 0x004281FC: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x00428200: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x00428204: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x00428208: beq         $v1, $v0, L_00428228
    if (ctx->r3 == ctx->r2) {
        // 0x0042820C: nop
    
            goto L_00428228;
    }
    // 0x0042820C: nop

L_00428210:
    // 0x00428210: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428214: jal         0x00429748
    // 0x00428218: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00429748(rdram, ctx);
        goto after_6;
    // 0x00428218: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0042821C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00428220: bne         $s0, $zero, L_00428314
    if (ctx->r16 != 0) {
        // 0x00428224: nop
    
            goto L_00428314;
    }
    // 0x00428224: nop

L_00428228:
    // 0x00428228: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x0042822C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428230: bne         $v0, $zero, L_00428270
    if (ctx->r2 != 0) {
        // 0x00428234: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428270;
    }
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
        goto after_7;
    // 0x00428248: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
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
        goto after_8;
    // 0x004282F0: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    after_8:
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
        goto after_9;
    // 0x00428304: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
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
RECOMP_FUNC void func_00203068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00203068: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0020306C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00203070: lw          $a1, -0x7E1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7E1C);
    // 0x00203074: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00203078: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0020307C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00203080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00203084: beq         $a1, $zero, L_0020310C
    if (ctx->r5 == 0) {
        // 0x00203088: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0020310C;
    }
    // 0x00203088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0020308C:
    // 0x0020308C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00203090: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x00203094: bne         $v0, $zero, L_002030C0
    if (ctx->r2 != 0) {
        // 0x00203098: nop
    
            goto L_002030C0;
    }
    // 0x00203098: nop

    // 0x0020309C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002030A0: lw          $v0, -0x7210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7210);
    // 0x002030A4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x002030A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002030AC: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x002030B0: beq         $v0, $zero, L_00203110
    if (ctx->r2 == 0) {
        // 0x002030B4: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00203110;
    }
    // 0x002030B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002030B8: j           L_002030CC
    // 0x002030BC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
        goto L_002030CC;
    // 0x002030BC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_002030C0:
    // 0x002030C0: lw          $a1, 0x18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X18);
    // 0x002030C4: bne         $a1, $zero, L_0020308C
    if (ctx->r5 != 0) {
        // 0x002030C8: nop
    
            goto L_0020308C;
    }
    // 0x002030C8: nop

L_002030CC:
    // 0x002030CC: beq         $a1, $zero, L_00203110
    if (ctx->r5 == 0) {
        // 0x002030D0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00203110;
    }
    // 0x002030D0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002030D4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002030D8: lw          $v1, -0x7210($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7210);
L_002030DC:
    // 0x002030DC: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x002030E0: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x002030E4: bne         $v0, $zero, L_00203100
    if (ctx->r2 != 0) {
        // 0x002030E8: nop
    
            goto L_00203100;
    }
    // 0x002030E8: nop

    // 0x002030EC: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x002030F0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x002030F4: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x002030F8: beq         $v0, $zero, L_00203110
    if (ctx->r2 == 0) {
        // 0x002030FC: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00203110;
    }
    // 0x002030FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
L_00203100:
    // 0x00203100: lw          $a1, 0x18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X18);
    // 0x00203104: bne         $a1, $zero, L_002030DC
    if (ctx->r5 != 0) {
        // 0x00203108: nop
    
            goto L_002030DC;
    }
    // 0x00203108: nop

L_0020310C:
    // 0x0020310C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00203110:
    // 0x00203110: bnel        $s0, $zero, L_0020312C
    if (ctx->r16 != 0) {
        // 0x00203114: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020312C;
    }
    goto skip_0;
    // 0x00203114: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x00203118: bne         $a2, $zero, L_00203124
    if (ctx->r6 != 0) {
        // 0x0020311C: nop
    
            goto L_00203124;
    }
    // 0x0020311C: nop

    // 0x00203120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
L_00203124:
    // 0x00203124: beq         $s0, $zero, L_002031D0
    if (ctx->r16 == 0) {
        // 0x00203128: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002031D0;
    }
    // 0x00203128: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020312C:
    // 0x0020312C: jal         0x002065F8
    // 0x00203130: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002065F8(rdram, ctx);
        goto after_0;
    // 0x00203130: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00203134: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00203138: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0020313C: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x00203140: jal         0x002026EC
    // 0x00203144: nop

    entry_002026EC(rdram, ctx);
        goto after_1;
    // 0x00203144: nop

    after_1:
    // 0x00203148: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020314C: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x00203150: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00203154: jal         0x00200738
    // 0x00203158: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x00203158: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0020315C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00203160: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00203164: beq         $v0, $zero, L_0020317C
    if (ctx->r2 == 0) {
        // 0x00203168: nop
    
            goto L_0020317C;
    }
    // 0x00203168: nop

    // 0x0020316C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203170: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x00203174: jal         0x00200738
    // 0x00203178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_3;
    // 0x00203178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_0020317C:
    // 0x0020317C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203180: lw          $v0, -0x7E28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E28);
    // 0x00203184: bnel        $v0, $s0, L_00203198
    if (ctx->r2 != ctx->r16) {
        // 0x00203188: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_00203198;
    }
    goto skip_1;
    // 0x00203188: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_1:
    // 0x0020318C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203190: sw          $zero, -0x7E28($at)
    MEM_W(-0X7E28, ctx->r1) = 0;
    // 0x00203194: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_00203198:
    // 0x00203198: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020319C: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x002031A0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002031A4: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x002031A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002031AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002031B0: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x002031B4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002031B8: lw          $v1, -0x7254($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7254);
    // 0x002031BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002031C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002031C4: sw          $v1, -0x7254($at)
    MEM_W(-0X7254, ctx->r1) = ctx->r3;
    // 0x002031C8: j           L_002031D4
    // 0x002031CC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_002031D4;
    // 0x002031CC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_002031D0:
    // 0x002031D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002031D4:
    // 0x002031D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002031D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002031DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002031E0: jr          $ra
    // 0x002031E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002031E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045D898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042491C:
    // 0x0045D898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045D89C: addiu       $v1, $zero, 0x10FE
    ctx->r3 = ADD32(0, 0X10FE);
    // 0x0045D8A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045D8A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045D8A8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0045D8AC: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x0045D8B0: lh          $a3, 0x20($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X20);
    // 0x0045D8B4: lh          $s0, 0x22($v0)
    ctx->r16 = MEM_H(ctx->r2, 0X22);
    // 0x0045D8B8: beq         $a3, $v1, L_0045D8DC
    if (ctx->r7 == ctx->r3) {
        // 0x0045D8BC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0045D8DC;
    }
    // 0x0045D8BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0045D8C0: addiu       $v0, $zero, 0x1194
    ctx->r2 = ADD32(0, 0X1194);
    // 0x0045D8C4: beq         $a3, $v0, L_0045D914
    if (ctx->r7 == ctx->r2) {
        // 0x0045D8C8: addu        $v0, $a0, $s0
        ctx->r2 = ADD32(ctx->r4, ctx->r16);
            goto L_0045D914;
    }
    // 0x0045D8C8: addu        $v0, $a0, $s0
    ctx->r2 = ADD32(ctx->r4, ctx->r16);
    // 0x0045D8CC: jal         0x00253748
    // 0x0045D8D0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    func_00253748(rdram, ctx);
        goto after_0;
    // 0x0045D8D0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    after_0:
    // 0x0045D8D4: j           L_0042491C
    // 0x0045D8D8: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    entry_0042491C(rdram, ctx);
    return;
    // 0x0045D8D8: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_0045D8DC:
    // 0x0045D8DC: bltz        $s0, L_0045D91C
    if (SIGNED(ctx->r16) < 0) {
        // 0x0045D8E0: slti        $v0, $s0, 0x3
        ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_0045D91C;
    }
    // 0x0045D8E0: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0045D8E4: bne         $v0, $zero, L_0045D8FC
    if (ctx->r2 != 0) {
        // 0x0045D8E8: slti        $v0, $s0, 0x6
        ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_0045D8FC;
    }
    // 0x0045D8E8: slti        $v0, $s0, 0x6
    ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x0045D8EC: bnel        $v0, $zero, L_0045D908
    if (ctx->r2 != 0) {
        // 0x0045D8F0: addiu       $a2, $s0, -0x3
        ctx->r6 = ADD32(ctx->r16, -0X3);
            goto L_0045D908;
    }
    goto skip_0;
    // 0x0045D8F0: addiu       $a2, $s0, -0x3
    ctx->r6 = ADD32(ctx->r16, -0X3);
    skip_0:
    // 0x0045D8F4: j           L_0042491C
    // 0x0045D8F8: nop

    entry_0042491C(rdram, ctx);
    return;
    // 0x0045D8F8: nop

L_0045D8FC:
    // 0x0045D8FC: lbu         $v0, 0xA05($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA05);
    // 0x0045D900: j           L_0042491C
    // 0x0045D904: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    entry_0042491C(rdram, ctx);
    return;
    // 0x0045D904: slt         $a2, $s0, $v0
    ctx->r6 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_0045D908:
    // 0x0045D908: lbu         $v0, 0xA06($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA06);
    // 0x0045D90C: j           L_0042491C
    // 0x0045D910: slt         $a2, $a2, $v0
    ctx->r6 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    entry_0042491C(rdram, ctx);
    return;
    // 0x0045D910: slt         $a2, $a2, $v0
    ctx->r6 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
L_0045D914:
    // 0x0045D914: lbu         $v0, 0x9FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9FC);
    // 0x0045D918: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
L_0045D91C:
    // 0x0045D91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045D920: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045D924: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0045D928: jr          $ra
    // 0x0045D92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045D92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253CF0: lw          $v0, 0x524($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X524);
    // 0x00253CF4: jr          $ra
    // 0x00253CF8: slti        $v0, $v0, 0x6400
    ctx->r2 = SIGNED(ctx->r2) < 0X6400 ? 1 : 0;
    return;
    // 0x00253CF8: slti        $v0, $v0, 0x6400
    ctx->r2 = SIGNED(ctx->r2) < 0X6400 ? 1 : 0;
;}
RECOMP_FUNC void func_0025322C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025322C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00253230: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253234: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253238: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025323C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00253240: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00253244: jal         0x002812CC
    // 0x00253248: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002812CC(rdram, ctx);
        goto after_0;
    // 0x00253248: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0025324C: lw          $s0, 0x20($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X20);
    // 0x00253250: beq         $s0, $zero, L_00253278
    if (ctx->r16 == 0) {
        // 0x00253254: nop
    
            goto L_00253278;
    }
    // 0x00253254: nop

L_00253258:
    // 0x00253258: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x0025325C: bne         $v0, $s1, L_0025326C
    if (ctx->r2 != ctx->r17) {
        // 0x00253260: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025326C;
    }
    // 0x00253260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253264: jal         0x0024C648
    // 0x00253268: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024C648(rdram, ctx);
        goto after_1;
    // 0x00253268: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_0025326C:
    // 0x0025326C: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00253270: bne         $s0, $zero, L_00253258
    if (ctx->r16 != 0) {
        // 0x00253274: nop
    
            goto L_00253258;
    }
    // 0x00253274: nop

L_00253278:
    // 0x00253278: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025327C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253280: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253284: jr          $ra
    // 0x00253288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00253288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00215848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215848: lhu         $v0, 0x16C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16C);
    // 0x0021584C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215850: lwc1        $f0, 0x589C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X589C);
    // 0x00215854: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x00215858: sh          $v0, 0x16C($a0)
    MEM_H(0X16C, ctx->r4) = ctx->r2;
    // 0x0021585C: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
    // 0x00215860: jr          $ra
    // 0x00215864: nop

    return;
    // 0x00215864: nop

;}
RECOMP_FUNC void func_0041C880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C884: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0041C888: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C88C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C890: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x0041C894: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C898: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041C89C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041C89C(rdram, ctx);
;}
