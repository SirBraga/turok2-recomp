#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029DEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DEE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029DEE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029DEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029DEEC: jal         0x0029DFF0
    // 0x0029DEF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029DEF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0029DEF4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029DEF8: addiu       $a0, $a0, -0x76F8
    ctx->r4 = ADD32(ctx->r4, -0X76F8);
    // 0x0029DEFC: nor         $s0, $zero, $s0
    ctx->r16 = ~(0 | ctx->r16);
    // 0x0029DF00: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0029DF04: ori         $s0, $s0, 0x401
    ctx->r16 = ctx->r16 | 0X401;
    // 0x0029DF08: and         $v1, $v1, $s0
    ctx->r3 = ctx->r3 & ctx->r16;
    // 0x0029DF0C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0029DF10: jal         0x0029E010
    // 0x0029DF14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0029DF14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0029DF18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029DF1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DF20: jr          $ra
    // 0x0029DF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029DF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029B020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B020: jr          $ra
    // 0x0029B024: nop

    return;
    // 0x0029B024: nop

;}
RECOMP_FUNC void func_0041760C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041760C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417610: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00417614: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00417618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041761C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00417620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00417624: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417628: lb          $v0, 0x20($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X20);
    // 0x0041762C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417630: lwc1        $f1, 0xEA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XEA0);
    // 0x00417634: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00417638: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041763C: sw          $zero, -0x531C($at)
    MEM_W(-0X531C, ctx->r1) = 0;
    // 0x00417640: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417644: sw          $zero, -0x532C($at)
    MEM_W(-0X532C, ctx->r1) = 0;
    // 0x00417648: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041764C: sw          $zero, -0x5334($at)
    MEM_W(-0X5334, ctx->r1) = 0;
    // 0x00417650: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417654: sw          $zero, -0x5324($at)
    MEM_W(-0X5324, ctx->r1) = 0;
    // 0x00417658: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041765C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00417660: lb          $v0, 0x21($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X21);
    // 0x00417664: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00417668: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041766C: sw          $zero, -0x5320($at)
    MEM_W(-0X5320, ctx->r1) = 0;
    // 0x00417670: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417674: sw          $zero, -0x5328($at)
    MEM_W(-0X5328, ctx->r1) = 0;
    // 0x00417678: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041767C: sw          $zero, -0x5330($at)
    MEM_W(-0X5330, ctx->r1) = 0;
    // 0x00417680: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417684: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x00417688: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0041768C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417690: swc1        $f0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->f0.u32l;
    // 0x00417694: lb          $s2, 0x22($v1)
    ctx->r18 = MEM_B(ctx->r3, 0X22);
    // 0x00417698: bc1f        L_004176AC
    if (!c1cs) {
        // 0x0041769C: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_004176AC;
    }
    // 0x0041769C: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x004176A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004176A4: lwc1        $f0, 0xEA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XEA4);
    // 0x004176A8: swc1        $f0, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->f0.u32l;
L_004176AC:
    // 0x004176AC: addiu       $v0, $v1, 0xC0
    ctx->r2 = ADD32(ctx->r3, 0XC0);
L_004176B0:
    // 0x004176B0: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x004176B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x004176B8: bgez        $s0, L_004176B0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x004176BC: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_004176B0;
    }
    // 0x004176BC: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x004176C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004176C4: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x004176C8: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_004176CC:
    // 0x004176CC: jal         0x002855E8
    // 0x004176D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x004176D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x004176D4: bne         $v0, $zero, L_00417708
    if (ctx->r2 != 0) {
        // 0x004176D8: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_00417708;
    }
    // 0x004176D8: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x004176DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004176E0: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004176E4: bne         $v0, $zero, L_004176CC
    if (ctx->r2 != 0) {
        // 0x004176E8: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_004176CC;
    }
    // 0x004176E8: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
L_004176EC:
    // 0x004176EC: beq         $s2, $zero, L_00417724
    if (ctx->r18 == 0) {
        // 0x004176F0: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_00417724;
    }
    // 0x004176F0: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x004176F4: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x004176F8: beq         $v0, $zero, L_00417724
    if (ctx->r2 == 0) {
        // 0x004176FC: addiu       $a1, $s2, 0x2328
        ctx->r5 = ADD32(ctx->r18, 0X2328);
            goto L_00417724;
    }
    // 0x004176FC: addiu       $a1, $s2, 0x2328
    ctx->r5 = ADD32(ctx->r18, 0X2328);
    // 0x00417700: j           L_00417760
    // 0x00417704: nop

        goto L_00417760;
    // 0x00417704: nop

L_00417708:
    // 0x00417708: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041770C: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00417710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00417714: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00417718: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x0041771C: j           L_004176EC
    // 0x00417720: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
        goto L_004176EC;
    // 0x00417720: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_00417724:
    // 0x00417724: jal         0x002113A4
    // 0x00417728: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00417728: nop

    after_1:
    // 0x0041772C: lui         $v1, 0x4EC4
    ctx->r3 = S32(0X4EC4 << 16);
    // 0x00417730: ori         $v1, $v1, 0xEC4F
    ctx->r3 = ctx->r3 | 0XEC4F;
    // 0x00417734: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00417738: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0041773C: mfhi        $a2
    ctx->r6 = hi;
    // 0x00417740: sra         $a0, $a2, 2
    ctx->r4 = S32(SIGNED(ctx->r6) >> 2);
    // 0x00417744: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x00417748: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0041774C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00417750: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00417754: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00417758: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0041775C: addiu       $a1, $v0, 0x2329
    ctx->r5 = ADD32(ctx->r2, 0X2329);
L_00417760:
    // 0x00417760: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00417764: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00417768: jal         0x00430454
    // 0x0041776C: nop

    func_00430454(rdram, ctx);
        goto after_2;
    // 0x0041776C: nop

    after_2:
    // 0x00417770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00417774: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041777C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417784: jr          $ra
    // 0x00417788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042C194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C194: addiu       $sp, $sp, -0x370
    ctx->r29 = ADD32(ctx->r29, -0X370);
    // 0x0042C198: sw          $s1, 0x34C($sp)
    MEM_W(0X34C, ctx->r29) = ctx->r17;
    // 0x0042C19C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042C1A0: sw          $s6, 0x360($sp)
    MEM_W(0X360, ctx->r29) = ctx->r22;
    // 0x0042C1A4: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0042C1A8: sw          $s2, 0x350($sp)
    MEM_W(0X350, ctx->r29) = ctx->r18;
    // 0x0042C1AC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0042C1B0: sw          $s4, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r20;
    // 0x0042C1B4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0042C1B8: sw          $s0, 0x348($sp)
    MEM_W(0X348, ctx->r29) = ctx->r16;
    // 0x0042C1BC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0042C1C0: lw          $s0, 0x7074($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7074);
    // 0x0042C1C4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0042C1C8: sw          $s3, 0x354($sp)
    MEM_W(0X354, ctx->r29) = ctx->r19;
    // 0x0042C1CC: lw          $s3, 0x380($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X380);
    // 0x0042C1D0: addiu       $a1, $sp, 0x338
    ctx->r5 = ADD32(ctx->r29, 0X338);
    // 0x0042C1D4: sw          $a3, 0x37C($sp)
    MEM_W(0X37C, ctx->r29) = ctx->r7;
    // 0x0042C1D8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042C1DC: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    // 0x0042C1E0: sw          $ra, 0x36C($sp)
    MEM_W(0X36C, ctx->r29) = ctx->r31;
    // 0x0042C1E4: sw          $fp, 0x368($sp)
    MEM_W(0X368, ctx->r29) = ctx->r30;
    // 0x0042C1E8: sw          $s7, 0x364($sp)
    MEM_W(0X364, ctx->r29) = ctx->r23;
    // 0x0042C1EC: sw          $s5, 0x35C($sp)
    MEM_W(0X35C, ctx->r29) = ctx->r21;
    // 0x0042C1F0: jal         0x00205B94
    // 0x0042C1F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_0;
    // 0x0042C1F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0042C1F8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0042C1FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0042C200: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042C204: lw          $a1, 0x338($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X338);
    // 0x0042C208: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042C20C: addiu       $v0, $v0, 0x5FC4
    ctx->r2 = ADD32(ctx->r2, 0X5FC4);
    // 0x0042C210: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0042C214: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042C218: jal         0x00205D0C
    // 0x0042C21C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_1;
    // 0x0042C21C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x0042C220: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x0042C224: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x0042C228: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0042C22C: jal         0x002017D4
    // 0x0042C230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042C230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042C234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042C238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0042C23C: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x0042C240: jal         0x002017D4
    // 0x0042C244: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042C244: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_3:
    // 0x0042C248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042C24C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0042C250: addiu       $a3, $sp, 0x33C
    ctx->r7 = ADD32(ctx->r29, 0X33C);
    // 0x0042C254: addiu       $v1, $sp, 0x340
    ctx->r3 = ADD32(ctx->r29, 0X340);
    // 0x0042C258: addiu       $s5, $v0, 0x8
    ctx->r21 = ADD32(ctx->r2, 0X8);
    // 0x0042C25C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0042C260: jal         0x00266D8C
    // 0x0042C264: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00266D8C(rdram, ctx);
        goto after_4;
    // 0x0042C264: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0042C268: beq         $v0, $zero, L_0042C37C
    if (ctx->r2 == 0) {
        // 0x0042C26C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0042C37C;
    }
    // 0x0042C26C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0042C270: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0042C274: jal         0x00200500
    // 0x0042C278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x0042C278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0042C27C: lw          $s1, 0x33C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X33C);
    // 0x0042C280: lw          $v0, 0x340($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X340);
    // 0x0042C284: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0042C288: bne         $v0, $zero, L_0042C2E4
    if (ctx->r2 != 0) {
        // 0x0042C28C: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_0042C2E4;
    }
    // 0x0042C28C: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x0042C290: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x0042C294: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042C298: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042C29C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C2A0: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
L_0042C2A4:
    // 0x0042C2A4: beq         $s6, $s7, L_0042C2B8
    if (ctx->r22 == ctx->r23) {
        // 0x0042C2A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042C2B8;
    }
    // 0x0042C2A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042C2AC: lh          $v0, 0x10($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X10);
    // 0x0042C2B0: xor         $v0, $v0, $s6
    ctx->r2 = ctx->r2 ^ ctx->r22;
    // 0x0042C2B4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_0042C2B8:
    // 0x0042C2B8: beq         $v0, $zero, L_0042C2D0
    if (ctx->r2 == 0) {
        // 0x0042C2BC: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0042C2D0;
    }
    // 0x0042C2BC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0042C2C0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x0042C2C4: jal         0x00200518
    // 0x0042C2C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_6;
    // 0x0042C2C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0042C2CC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_0042C2D0:
    // 0x0042C2D0: lw          $v0, 0x340($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X340);
    // 0x0042C2D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042C2D8: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0042C2DC: beq         $v0, $zero, L_0042C2A4
    if (ctx->r2 == 0) {
        // 0x0042C2E0: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_0042C2A4;
    }
    // 0x0042C2E0: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_0042C2E4:
    // 0x0042C2E4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0042C2E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042C2EC: beq         $s3, $v0, L_0042C37C
    if (ctx->r19 == ctx->r2) {
        // 0x0042C2F0: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0042C37C;
    }
    // 0x0042C2F0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0042C2F4: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x0042C2F8: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0042C2FC: lw          $t0, 0x37C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X37C);
    // 0x0042C300: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C304: addu        $s1, $v0, $t0
    ctx->r17 = ADD32(ctx->r2, ctx->r8);
L_0042C308:
    // 0x0042C308: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0042C30C: beq         $v0, $zero, L_0042C380
    if (ctx->r2 == 0) {
        // 0x0042C310: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042C380;
    }
    // 0x0042C310: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C314: jal         0x002009F0
    // 0x0042C318: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_002009F0(rdram, ctx);
        goto after_7;
    // 0x0042C318: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x0042C31C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042C320: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0042C324: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0042C328: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0042C32C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042C330: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0042C334: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042C338: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C33C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x0042C340: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0042C344: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0042C348: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0042C34C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0042C350: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x0042C354: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
    // 0x0042C358: sw          $t3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r11;
    // 0x0042C35C: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x0042C360: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x0042C364: sw          $t1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r9;
    // 0x0042C368: jal         0x00200738
    // 0x0042C36C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    func_00200738(rdram, ctx);
        goto after_8;
    // 0x0042C36C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x0042C370: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0042C374: bne         $s3, $s2, L_0042C308
    if (ctx->r19 != ctx->r18) {
        // 0x0042C378: nop
    
            goto L_0042C308;
    }
    // 0x0042C378: nop

L_0042C37C:
    // 0x0042C37C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0042C380:
    // 0x0042C380: jal         0x002052D8
    // 0x0042C384: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x0042C384: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_9:
    // 0x0042C388: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042C38C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042C38C(rdram, ctx);
;}
RECOMP_FUNC void func_004169A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004169A0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x004169A4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x004169A8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x004169AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004169B0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004169B4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004169B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004169BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004169C0: jr          $ra
    // 0x004169C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004169C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0027573C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027573C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00275740: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x00275744: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00275748: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0027574C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00275750: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00275754: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00275758: bne         $v0, $zero, L_002757C8
    if (ctx->r2 != 0) {
        // 0x0027575C: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_002757C8;
    }
    // 0x0027575C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00275760: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00275764: addiu       $s0, $s0, 0x2A00
    ctx->r16 = ADD32(ctx->r16, 0X2A00);
    // 0x00275768: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027576C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00275770: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00275774: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x00275778: jal         0x002718C4
    // 0x0027577C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_002718C4(rdram, ctx);
        goto after_0;
    // 0x0027577C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00275780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00275784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00275788: jal         0x002718BC
    // 0x0027578C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002718BC(rdram, ctx);
        goto after_1;
    // 0x0027578C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00275790: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00275794: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00275798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027579C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002757A0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x002757A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x002757A8: jal         0x00271128
    // 0x002757AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00271128(rdram, ctx);
        goto after_2;
    // 0x002757AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x002757B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002757B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002757B8: jal         0x002718BC
    // 0x002757BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002718BC(rdram, ctx);
        goto after_3;
    // 0x002757BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x002757C0: j           L_002757CC
    // 0x002757C4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_002757CC;
    // 0x002757C4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_002757C8:
    // 0x002757C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002757CC:
    // 0x002757CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002757D0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002757D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002757D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002757DC: jr          $ra
    // 0x002757E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002757E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045A7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A7E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045A7E8: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x0045A7EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045A7F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045A7F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045A7F8: bne         $v0, $zero, L_0045A854
    if (ctx->r2 != 0) {
        // 0x0045A7FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045A854;
    }
    // 0x0045A7FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045A800: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045A804: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0045A808: jal         0x002886AC
    // 0x0045A80C: nop

    func_002886AC(rdram, ctx);
        goto after_0;
    // 0x0045A80C: nop

    after_0:
    // 0x0045A810: jal         0x00284CE0
    // 0x0045A814: nop

    func_00284CE0(rdram, ctx);
        goto after_1;
    // 0x0045A814: nop

    after_1:
    // 0x0045A818: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045A81C: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x0045A820: bne         $v0, $zero, L_0045A854
    if (ctx->r2 != 0) {
        // 0x0045A824: nop
    
            goto L_0045A854;
    }
    // 0x0045A824: nop

    // 0x0045A828: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045A82C: lw          $v0, -0xEBC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEBC);
    // 0x0045A830: beq         $v0, $zero, L_0045A840
    if (ctx->r2 == 0) {
        // 0x0045A834: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045A840;
    }
    // 0x0045A834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A838: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045A83C: sw          $v0, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r2;
L_0045A840:
    // 0x0045A840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A844: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045A848: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0045A84C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A850: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_0045A854:
    // 0x0045A854: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A858: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0045A85C: bne         $v0, $zero, L_0045A8B8
    if (ctx->r2 != 0) {
        // 0x0045A860: nop
    
            goto L_0045A8B8;
    }
    // 0x0045A860: nop

    // 0x0045A864: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045A868: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045A86C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045A870: beq         $a0, $v0, L_0045A8B0
    if (ctx->r4 == ctx->r2) {
        // 0x0045A874: nop
    
            goto L_0045A8B0;
    }
    // 0x0045A874: nop

    // 0x0045A878: jal         0x0028591C
    // 0x0045A87C: nop

    func_0028591C(rdram, ctx);
        goto after_2;
    // 0x0045A87C: nop

    after_2:
    // 0x0045A880: beq         $v0, $zero, L_0045A8B0
    if (ctx->r2 == 0) {
        // 0x0045A884: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045A8B0;
    }
    // 0x0045A884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045A888: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045A88C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045A890: jal         0x0041DCB0
    // 0x0045A894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_3;
    // 0x0045A894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x0045A898: beq         $v0, $zero, L_0045A8B0
    if (ctx->r2 == 0) {
        // 0x0045A89C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045A8B0;
    }
    // 0x0045A89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A8A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045A8A4: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0045A8A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A8AC: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_0045A8B0:
    // 0x0045A8B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A8B4: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
L_0045A8B8:
    // 0x0045A8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045A8BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045A8C0: jr          $ra
    // 0x0045A8C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045A8C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020B5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B5D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B5D8: sw          $zero, -0x71D8($at)
    MEM_W(-0X71D8, ctx->r1) = 0;
    // 0x0020B5DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B5E0: sw          $zero, -0x71CC($at)
    MEM_W(-0X71CC, ctx->r1) = 0;
    // 0x0020B5E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B5E8: sw          $zero, -0x71D4($at)
    MEM_W(-0X71D4, ctx->r1) = 0;
    // 0x0020B5EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B5F0: sw          $zero, -0x71E0($at)
    MEM_W(-0X71E0, ctx->r1) = 0;
    // 0x0020B5F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B5F8: sw          $zero, -0x2E90($at)
    MEM_W(-0X2E90, ctx->r1) = 0;
    // 0x0020B5FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B600: sw          $zero, -0x71E4($at)
    MEM_W(-0X71E4, ctx->r1) = 0;
    // 0x0020B604: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B608: sw          $zero, -0x71E8($at)
    MEM_W(-0X71E8, ctx->r1) = 0;
    // 0x0020B60C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B610: sw          $zero, -0x71C8($at)
    MEM_W(-0X71C8, ctx->r1) = 0;
    // 0x0020B614: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B618: sw          $zero, -0x71D0($at)
    MEM_W(-0X71D0, ctx->r1) = 0;
    // 0x0020B61C: jr          $ra
    // 0x0020B620: nop

    return;
    // 0x0020B620: nop

;}
RECOMP_FUNC void func_00214ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214ED8: lui         $v1, 0x3F
    ctx->r3 = S32(0X3F << 16);
    // 0x00214EDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214EE0: lw          $v0, -0x3510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3510);
    // 0x00214EE4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00214EE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00214EEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00214EF0: sw          $v0, -0x3510($at)
    MEM_W(-0X3510, ctx->r1) = ctx->r2;
    // 0x00214EF4: bne         $v0, $v1, L_00214F04
    if (ctx->r2 != ctx->r3) {
        // 0x00214EF8: lui         $v0, 0x38
        ctx->r2 = S32(0X38 << 16);
            goto L_00214F04;
    }
    // 0x00214EF8: lui         $v0, 0x38
    ctx->r2 = S32(0X38 << 16);
    // 0x00214EFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00214F00: sw          $v0, -0x3510($at)
    MEM_W(-0X3510, ctx->r1) = ctx->r2;
L_00214F04:
    // 0x00214F04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214F08: lw          $v0, -0x3510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3510);
    // 0x00214F0C: jr          $ra
    // 0x00214F10: nop

    return;
    // 0x00214F10: nop

;}
RECOMP_FUNC void func_00416214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00416218: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041621C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00416220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00416224: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x00416228: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041622C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00416230: jal         0x00225EBC
    // 0x00416234: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x00416234: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00416238: bne         $v0, $zero, L_0041624C
    if (ctx->r2 != 0) {
        // 0x0041623C: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_0041624C;
    }
    // 0x0041623C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x00416240: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x00416244: j           L_004162D0
    // 0x00416248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_004162D0;
    // 0x00416248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041624C:
    // 0x0041624C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00416250: addiu       $a1, $v1, 0x90
    ctx->r5 = ADD32(ctx->r3, 0X90);
    // 0x00416254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00416258: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x0041625C: sw          $v0, 0x328($s0)
    MEM_W(0X328, ctx->r16) = ctx->r2;
L_00416260:
    // 0x00416260: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x00416264: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x00416268: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0041626C: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x00416270: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x00416274: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x00416278: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    // 0x0041627C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x00416280: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00416284: bne         $v1, $a1, L_00416260
    if (ctx->r3 != ctx->r5) {
        // 0x00416288: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00416260;
    }
    // 0x00416288: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0041628C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416290: lwc1        $f0, 0xC5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC5C);
    // 0x00416294: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x00416298: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x0041629C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x004162A0: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x004162A4: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x004162A8: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    // 0x004162AC: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x004162B0: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x004162B4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x004162B8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x004162BC: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x004162C0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x004162C4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x004162C8: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x004162CC: swc1        $f1, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_004162D0:
    // 0x004162D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004162D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004162D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004162DC: jr          $ra
    // 0x004162E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004162E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00254924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254924: jr          $ra
    // 0x00254928: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00254928: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00258B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258B74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00258B78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00258B7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00258B80: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00258B84: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00258B88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00258B8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258B90: lw          $s0, 0x1A8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A8);
    // 0x00258B94: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00258B98: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x00258B9C: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x00258BA0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00258BA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00258BA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00258BAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258BB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258BB4: lh          $s2, -0x2098($at)
    ctx->r18 = MEM_H(ctx->r1, -0X2098);
    // 0x00258BB8: jal         0x0024E700
    // 0x00258BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00258BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00258BC0: bne         $v0, $zero, L_00258BD8
    if (ctx->r2 != 0) {
        // 0x00258BC4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00258BD8;
    }
    // 0x00258BC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00258BC8: jal         0x00257BA0
    // 0x00258BCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00257BA0(rdram, ctx);
        goto after_1;
    // 0x00258BCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00258BD0: sh          $v0, 0xB14($s0)
    MEM_H(0XB14, ctx->r16) = ctx->r2;
    // 0x00258BD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00258BD8:
    // 0x00258BD8: jal         0x00257EA0
    // 0x00258BDC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00257EA0(rdram, ctx);
        goto after_2;
    // 0x00258BDC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00258BE0: bne         $v0, $zero, L_00258C04
    if (ctx->r2 != 0) {
        // 0x00258BE4: nop
    
            goto L_00258C04;
    }
    // 0x00258BE4: nop

    // 0x00258BE8: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00258BEC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00258BF0: bne         $v0, $zero, L_00258C04
    if (ctx->r2 != 0) {
        // 0x00258BF4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00258C04;
    }
    // 0x00258BF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00258BF8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00258BFC: jal         0x00243414
    // 0x00258C00: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00258C00: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
L_00258C04:
    // 0x00258C04: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00258C08: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00258C0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00258C10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258C14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258C18: jr          $ra
    // 0x00258C1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00258C1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045B5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B5F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045B5FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B600: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B604: jr          $ra
    // 0x0045B608: nop

    return;
    // 0x0045B608: nop

;}
RECOMP_FUNC void func_0029E3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E3D8: jal         0x00243414
    // 0x0029E3DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0029E3DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // turok2: reconnected split function: a stray ELF symbol at 0x0029E3E0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029E3E0(rdram, ctx);
;}
RECOMP_FUNC void func_00418E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418E4C: addiu       $v0, $v0, 0x614C
    ctx->r2 = ADD32(ctx->r2, 0X614C);
    // 0x00418E50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418E54: jr          $ra
    // 0x00418E58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418E58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00276820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276820: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00276824: jr          $ra
    // 0x00276828: nop

    return;
    // 0x00276828: nop

;}
RECOMP_FUNC void func_00444BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444BF4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444BF8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00444BFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444C00: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444C04: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444C08: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444C0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00444C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444C14: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00444C18: jal         0x00246108
    // 0x00444C1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444C1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444C20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444C24: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444C28: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444C2C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444C30: jal         0x00245BAC
    // 0x00444C34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444C34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444C38: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444C3C: beq         $v0, $zero, L_00444C50
    if (ctx->r2 == 0) {
        // 0x00444C40: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444C50;
    }
    // 0x00444C40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444C44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444C48: jal         0x00243414
    // 0x00444C4C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444C4C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_00444C50:
    // 0x00444C50: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444C54: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444C58: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444C5C: jr          $ra
    // 0x00444C60: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444C60: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0041AAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AAA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041AAA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041AAA8: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041AAAC: addiu       $s0, $s0, 0x1F84
    ctx->r16 = ADD32(ctx->r16, 0X1F84);
    // 0x0041AAB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041AAB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041AAB8: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0041AABC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041AAC0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0041AAC4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0041AAC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AACC: lwc1        $f1, 0x1278($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1278);
    // 0x0041AAD0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041AAD4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041AAD8: nop

    // 0x0041AADC: bc1f        L_0041AAEC
    if (!c1cs) {
        // 0x0041AAE0: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_0041AAEC;
    }
    // 0x0041AAE0: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x0041AAE4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041AAE8: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_0041AAEC:
    // 0x0041AAEC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x0041AAF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041AAF4: bne         $v1, $v0, L_0041AB60
    if (ctx->r3 != ctx->r2) {
        // 0x0041AAF8: nop
    
            goto L_0041AB60;
    }
    // 0x0041AAF8: nop

    // 0x0041AAFC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041AB00: jal         0x00285628
    // 0x0041AB04: nop

    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0041AB04: nop

    after_0:
    // 0x0041AB08: beq         $v0, $zero, L_0041AB28
    if (ctx->r2 == 0) {
        // 0x0041AB0C: nop
    
            goto L_0041AB28;
    }
    // 0x0041AB0C: nop

    // 0x0041AB10: lw          $v0, -0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X4);
    // 0x0041AB14: blez        $v0, L_0041AB28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041AB18: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0041AB28;
    }
    // 0x0041AB18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0041AB1C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x0041AB20: j           L_0041AB60
    // 0x0041AB24: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_0041AB60;
    // 0x0041AB24: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0041AB28:
    // 0x0041AB28: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041AB2C: jal         0x00285670
    // 0x0041AB30: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0041AB30: nop

    after_1:
    // 0x0041AB34: beq         $v0, $zero, L_0041AB60
    if (ctx->r2 == 0) {
        // 0x0041AB38: nop
    
            goto L_0041AB60;
    }
    // 0x0041AB38: nop

    // 0x0041AB3C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041AB40: addiu       $v1, $v1, 0x1F80
    ctx->r3 = ADD32(ctx->r3, 0X1F80);
    // 0x0041AB44: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0041AB48: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0041AB4C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041AB50: beq         $v0, $zero, L_0041AB60
    if (ctx->r2 == 0) {
        // 0x0041AB54: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_0041AB60;
    }
    // 0x0041AB54: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0041AB58: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0041AB5C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_0041AB60:
    // 0x0041AB60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041AB64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AB68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AB6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AB70: jr          $ra
    // 0x0041AB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041AB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023F524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F524: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023F528: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F52C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023F530: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F534: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023F538: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023F53C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F540: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F544: lhu         $v1, 0x528($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X528);
    // 0x0023F548: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x0023F54C: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x0023F550: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0023F554: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0023F558: slti        $v0, $v0, 0x64
    ctx->r2 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x0023F55C: bne         $v0, $zero, L_0023F58C
    if (ctx->r2 != 0) {
        // 0x0023F560: sh          $a0, 0x528($s0)
        MEM_H(0X528, ctx->r16) = ctx->r4;
            goto L_0023F58C;
    }
    // 0x0023F560: sh          $a0, 0x528($s0)
    MEM_H(0X528, ctx->r16) = ctx->r4;
    // 0x0023F564: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0023F568: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x0023F56C: sh          $v0, 0x528($s0)
    MEM_H(0X528, ctx->r16) = ctx->r2;
    // 0x0023F570: lhu         $v0, 0x52A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52A);
    // 0x0023F574: slti        $v1, $v1, 0x9
    ctx->r3 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x0023F578: beq         $v1, $zero, L_0023F58C
    if (ctx->r3 == 0) {
        // 0x0023F57C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0023F58C;
    }
    // 0x0023F57C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0023F580: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
    // 0x0023F584: jal         0x00275624
    // 0x0023F588: addiu       $a0, $zero, 0x3A9D
    ctx->r4 = ADD32(0, 0X3A9D);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0023F588: addiu       $a0, $zero, 0x3A9D
    ctx->r4 = ADD32(0, 0X3A9D);
    after_0:
L_0023F58C:
    // 0x0023F58C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F590: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F594: lh          $s2, 0x6($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X6);
    // 0x0023F598: lh          $s3, 0x8($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X8);
    // 0x0023F59C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x0023F5A0: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F5A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F5A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F5AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F5B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F5B4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F5B8: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F5BC: jal         0x00281060
    // 0x0023F5C0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x0023F5C0: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x0023F5C4: beq         $s1, $zero, L_0023F5E0
    if (ctx->r17 == 0) {
        // 0x0023F5C8: nop
    
            goto L_0023F5E0;
    }
    // 0x0023F5C8: nop

    // 0x0023F5CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F5D0: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F5D4: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F5D8: jal         0x0027FC2C
    // 0x0023F5DC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0027FC2C(rdram, ctx);
        goto after_2;
    // 0x0023F5DC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
L_0023F5E0:
    // 0x0023F5E0: beq         $s2, $zero, L_0023F604
    if (ctx->r18 == 0) {
        // 0x0023F5E4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023F604;
    }
    // 0x0023F5E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023F5E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F5EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023F5F0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0023F5F4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0023F5F8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0023F5FC: jal         0x00275544
    // 0x0023F600: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0023F600: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_0023F604:
    // 0x0023F604: beq         $s3, $zero, L_0023F614
    if (ctx->r19 == 0) {
        // 0x0023F608: nop
    
            goto L_0023F614;
    }
    // 0x0023F608: nop

    // 0x0023F60C: jal         0x0027580C
    // 0x0023F610: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0027580C(rdram, ctx);
        goto after_4;
    // 0x0023F610: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
L_0023F614:
    // 0x0023F614: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0023F618: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F61C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F620: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F624: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023F62C: jr          $ra
    // 0x0023F630: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023F630: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00207A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207A70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00207A74: lw          $v0, -0x4780($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4780);
    // 0x00207A78: beq         $v0, $a0, L_00207FE4
    if (ctx->r2 == ctx->r4) {
        // 0x00207A7C: sltiu       $v0, $a0, 0x2A
        ctx->r2 = ctx->r4 < 0X2A ? 1 : 0;
            goto L_00207FE4;
    }
    // 0x00207A7C: sltiu       $v0, $a0, 0x2A
    ctx->r2 = ctx->r4 < 0X2A ? 1 : 0;
    // 0x00207A80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00207A84: sw          $a0, -0x4780($at)
    MEM_W(-0X4780, ctx->r1) = ctx->r4;
    // 0x00207A88: beq         $v0, $zero, L_00207FE4
    if (ctx->r2 == 0) {
        // 0x00207A8C: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00207FE4;
    }
    // 0x00207A8C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00207A90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00207A94: addu        $at, $at, $v0
    gpr jr_addend_00207A9C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00207A98: lw          $v0, 0x5210($at)
    ctx->r2 = ADD32(ctx->r1, 0X5210);
    // 0x00207A9C: jr          $v0
    // 0x00207AA0: nop

    switch (jr_addend_00207A9C >> 2) {
        case 0: goto L_00207AA4; break;
        case 1: goto L_00207AC4; break;
        case 2: goto L_00207AE4; break;
        case 3: goto L_00207B04; break;
        case 4: goto L_00207B24; break;
        case 5: goto L_00207B44; break;
        case 6: goto L_00207B64; break;
        case 7: goto L_00207B84; break;
        case 8: goto L_00207BA4; break;
        case 9: goto L_00207BC4; break;
        case 10: goto L_00207BE4; break;
        case 11: goto L_00207BF4; break;
        case 12: goto L_00207C14; break;
        case 13: goto L_00207C34; break;
        case 14: goto L_00207C64; break;
        case 15: goto L_00207C84; break;
        case 16: goto L_00207CA4; break;
        case 17: goto L_00207CB4; break;
        case 18: goto L_00207CD4; break;
        case 19: goto L_00207CF4; break;
        case 20: goto L_00207D1C; break;
        case 21: goto L_00207D3C; break;
        case 22: goto L_00207D5C; break;
        case 23: goto L_00207D7C; break;
        case 24: goto L_00207D9C; break;
        case 25: goto L_00207DBC; break;
        case 26: goto L_00207DDC; break;
        case 27: goto L_00207DFC; break;
        case 28: goto L_00207E14; break;
        case 29: goto L_00207E34; break;
        case 30: goto L_00207E44; break;
        case 31: goto L_00207E74; break;
        case 32: goto L_00207E94; break;
        case 33: goto L_00207EB4; break;
        case 34: goto L_00207EDC; break;
        case 35: goto L_00207EF4; break;
        case 36: goto L_00207F14; break;
        case 37: goto L_00207F34; break;
        case 38: goto L_00207F54; break;
        case 39: goto L_00207F74; break;
        case 40: goto L_00207F94; break;
        case 41: goto L_00207FB4; break;
        default: switch_error(__func__, 0x00207A9C, 0x800A5210);
    }
    // 0x00207AA0: nop

L_00207AA4:
    // 0x00207AA4: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207AA8: ori         $a2, $a2, 0xC3FF
    ctx->r6 = ctx->r6 | 0XC3FF;
    // 0x00207AAC: lui         $a1, 0x5FFE
    ctx->r5 = S32(0X5FFE << 16);
    // 0x00207AB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207AB4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207AB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207ABC: j           L_00207FD0
    // 0x00207AC0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207AC0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207AC4:
    // 0x00207AC4: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207AC8: ori         $a2, $a2, 0xC3FF
    ctx->r6 = ctx->r6 | 0XC3FF;
    // 0x00207ACC: lui         $a1, 0x5F16
    ctx->r5 = S32(0X5F16 << 16);
    // 0x00207AD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207AD4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207AD8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207ADC: j           L_00207FD0
    // 0x00207AE0: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
        goto L_00207FD0;
    // 0x00207AE0: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
L_00207AE4:
    // 0x00207AE4: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207AE8: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x00207AEC: lui         $a1, 0x5FFE
    ctx->r5 = S32(0X5FFE << 16);
    // 0x00207AF0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207AF4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207AF8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207AFC: j           L_00207FD0
    // 0x00207B00: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207B00: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207B04:
    // 0x00207B04: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207B08: ori         $a2, $a2, 0xC204
    ctx->r6 = ctx->r6 | 0XC204;
    // 0x00207B0C: lui         $a1, 0x5FFE
    ctx->r5 = S32(0X5FFE << 16);
    // 0x00207B10: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207B14: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207B18: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207B1C: j           L_00207FD0
    // 0x00207B20: ori         $a1, $a1, 0xFFF8
    ctx->r5 = ctx->r5 | 0XFFF8;
        goto L_00207FD0;
    // 0x00207B20: ori         $a1, $a1, 0xFFF8
    ctx->r5 = ctx->r5 | 0XFFF8;
L_00207B24:
    // 0x00207B24: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207B28: ori         $a2, $a2, 0x9604
    ctx->r6 = ctx->r6 | 0X9604;
    // 0x00207B2C: lui         $a1, 0x5FFE
    ctx->r5 = S32(0X5FFE << 16);
    // 0x00207B30: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207B34: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207B38: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207B3C: j           L_00207FD0
    // 0x00207B40: ori         $a1, $a1, 0xFFF8
    ctx->r5 = ctx->r5 | 0XFFF8;
        goto L_00207FD0;
    // 0x00207B40: ori         $a1, $a1, 0xFFF8
    ctx->r5 = ctx->r5 | 0XFFF8;
L_00207B44:
    // 0x00207B44: lui         $a2, 0xFC26
    ctx->r6 = S32(0XFC26 << 16);
    // 0x00207B48: ori         $a2, $a2, 0xA1FF
    ctx->r6 = ctx->r6 | 0XA1FF;
    // 0x00207B4C: lui         $a1, 0x1FFC
    ctx->r5 = S32(0X1FFC << 16);
    // 0x00207B50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207B54: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207B58: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207B5C: j           L_00207FD0
    // 0x00207B60: ori         $a1, $a1, 0x923C
    ctx->r5 = ctx->r5 | 0X923C;
        goto L_00207FD0;
    // 0x00207B60: ori         $a1, $a1, 0x923C
    ctx->r5 = ctx->r5 | 0X923C;
L_00207B64:
    // 0x00207B64: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207B68: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x00207B6C: lui         $a1, 0xFFFC
    ctx->r5 = S32(0XFFFC << 16);
    // 0x00207B70: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207B74: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207B78: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207B7C: j           L_00207FD0
    // 0x00207B80: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207B80: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207B84:
    // 0x00207B84: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207B88: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x00207B8C: lui         $a1, 0xFF14
    ctx->r5 = S32(0XFF14 << 16);
    // 0x00207B90: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207B94: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207B98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207B9C: j           L_00207FD0
    // 0x00207BA0: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
        goto L_00207FD0;
    // 0x00207BA0: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
L_00207BA4:
    // 0x00207BA4: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207BA8: ori         $a2, $a2, 0x96AC
    ctx->r6 = ctx->r6 | 0X96AC;
    // 0x00207BAC: lui         $a1, 0xF0FC
    ctx->r5 = S32(0XF0FC << 16);
    // 0x00207BB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207BB4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207BB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207BBC: j           L_00207FD0
    // 0x00207BC0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207BC0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207BC4:
    // 0x00207BC4: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207BC8: ori         $a2, $a2, 0x96A4
    ctx->r6 = ctx->r6 | 0X96A4;
    // 0x00207BCC: lui         $a1, 0xF0FC
    ctx->r5 = S32(0XF0FC << 16);
    // 0x00207BD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207BD4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207BD8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207BDC: j           L_00207FD0
    // 0x00207BE0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207BE0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207BE4:
    // 0x00207BE4: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207BE8: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x00207BEC: j           L_00207FC0
    // 0x00207BF0: lui         $a1, 0xFF14
    ctx->r5 = S32(0XFF14 << 16);
        goto L_00207FC0;
    // 0x00207BF0: lui         $a1, 0xFF14
    ctx->r5 = S32(0XFF14 << 16);
L_00207BF4:
    // 0x00207BF4: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207BF8: ori         $a2, $a2, 0x96AC
    ctx->r6 = ctx->r6 | 0X96AC;
    // 0x00207BFC: lui         $a1, 0xF00C
    ctx->r5 = S32(0XF00C << 16);
    // 0x00207C00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207C04: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207C08: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207C0C: j           L_00207FD0
    // 0x00207C10: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
        goto L_00207FD0;
    // 0x00207C10: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
L_00207C14:
    // 0x00207C14: lui         $a2, 0xFC26
    ctx->r6 = S32(0XFC26 << 16);
    // 0x00207C18: ori         $a2, $a2, 0xA004
    ctx->r6 = ctx->r6 | 0XA004;
    // 0x00207C1C: lui         $a1, 0x1FFC
    ctx->r5 = S32(0X1FFC << 16);
    // 0x00207C20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207C24: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207C28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207C2C: j           L_00207FD0
    // 0x00207C30: ori         $a1, $a1, 0x93FC
    ctx->r5 = ctx->r5 | 0X93FC;
        goto L_00207FD0;
    // 0x00207C30: ori         $a1, $a1, 0x93FC
    ctx->r5 = ctx->r5 | 0X93FC;
L_00207C34:
    // 0x00207C34: lui         $a1, 0xFC12
    ctx->r5 = S32(0XFC12 << 16);
    // 0x00207C38: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207C3C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207C40: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00207C44: ori         $a1, $a1, 0x17FF
    ctx->r5 = ctx->r5 | 0X17FF;
L_00207C48:
    // 0x00207C48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00207C4C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207C50: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00207C54: addiu       $v0, $zero, -0x1C8
    ctx->r2 = ADD32(0, -0X1C8);
L_00207C58:
    // 0x00207C58: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00207C5C: jr          $ra
    // 0x00207C60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    return;
    // 0x00207C60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_00207C64:
    // 0x00207C64: lui         $a2, 0xFC12
    ctx->r6 = S32(0XFC12 << 16);
    // 0x00207C68: ori         $a2, $a2, 0x17FF
    ctx->r6 = ctx->r6 | 0X17FF;
    // 0x00207C6C: lui         $a1, 0xFF17
    ctx->r5 = S32(0XFF17 << 16);
    // 0x00207C70: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207C74: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207C78: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207C7C: j           L_00207FD0
    // 0x00207C80: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
        goto L_00207FD0;
    // 0x00207C80: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
L_00207C84:
    // 0x00207C84: lui         $a2, 0xFC12
    ctx->r6 = S32(0XFC12 << 16);
    // 0x00207C88: ori         $a2, $a2, 0x16AC
    ctx->r6 = ctx->r6 | 0X16AC;
    // 0x00207C8C: lui         $a1, 0xF0FF
    ctx->r5 = S32(0XF0FF << 16);
    // 0x00207C90: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207C94: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207C98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207C9C: j           L_00207FD0
    // 0x00207CA0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207CA0: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207CA4:
    // 0x00207CA4: lui         $a2, 0xFC12
    ctx->r6 = S32(0XFC12 << 16);
    // 0x00207CA8: ori         $a2, $a2, 0x17FF
    ctx->r6 = ctx->r6 | 0X17FF;
    // 0x00207CAC: j           L_00207FC0
    // 0x00207CB0: lui         $a1, 0xFF17
    ctx->r5 = S32(0XFF17 << 16);
        goto L_00207FC0;
    // 0x00207CB0: lui         $a1, 0xFF17
    ctx->r5 = S32(0XFF17 << 16);
L_00207CB4:
    // 0x00207CB4: lui         $a2, 0xFC12
    ctx->r6 = S32(0XFC12 << 16);
    // 0x00207CB8: ori         $a2, $a2, 0x16AC
    ctx->r6 = ctx->r6 | 0X16AC;
    // 0x00207CBC: lui         $a1, 0xF00F
    ctx->r5 = S32(0XF00F << 16);
    // 0x00207CC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207CC4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207CC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207CCC: j           L_00207FD0
    // 0x00207CD0: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
        goto L_00207FD0;
    // 0x00207CD0: ori         $a1, $a1, 0xFE3F
    ctx->r5 = ctx->r5 | 0XFE3F;
L_00207CD4:
    // 0x00207CD4: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207CD8: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00207CDC: lui         $a1, 0xFFFD
    ctx->r5 = S32(0XFFFD << 16);
    // 0x00207CE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207CE4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207CE8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207CEC: j           L_00207FD0
    // 0x00207CF0: ori         $a1, $a1, 0xF638
    ctx->r5 = ctx->r5 | 0XF638;
        goto L_00207FD0;
    // 0x00207CF0: ori         $a1, $a1, 0xF638
    ctx->r5 = ctx->r5 | 0XF638;
L_00207CF4:
    // 0x00207CF4: lui         $a1, 0xFC32
    ctx->r5 = S32(0XFC32 << 16);
    // 0x00207CF8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207CFC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207D00: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00207D04: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    // 0x00207D08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00207D0C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207D10: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00207D14: j           L_00207C58
    // 0x00207D18: addiu       $v0, $zero, -0x9C8
    ctx->r2 = ADD32(0, -0X9C8);
        goto L_00207C58;
    // 0x00207D18: addiu       $v0, $zero, -0x9C8
    ctx->r2 = ADD32(0, -0X9C8);
L_00207D1C:
    // 0x00207D1C: lui         $a2, 0xFC32
    ctx->r6 = S32(0XFC32 << 16);
    // 0x00207D20: ori         $a2, $a2, 0x7FFF
    ctx->r6 = ctx->r6 | 0X7FFF;
    // 0x00207D24: lui         $a1, 0xFF17
    ctx->r5 = S32(0XFF17 << 16);
    // 0x00207D28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207D2C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207D30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207D34: j           L_00207FD0
    // 0x00207D38: ori         $a1, $a1, 0xF63F
    ctx->r5 = ctx->r5 | 0XF63F;
        goto L_00207FD0;
    // 0x00207D38: ori         $a1, $a1, 0xF63F
    ctx->r5 = ctx->r5 | 0XF63F;
L_00207D3C:
    // 0x00207D3C: lui         $a2, 0xFC32
    ctx->r6 = S32(0XFC32 << 16);
    // 0x00207D40: ori         $a2, $a2, 0x7EAC
    ctx->r6 = ctx->r6 | 0X7EAC;
    // 0x00207D44: lui         $a1, 0xF0FF
    ctx->r5 = S32(0XF0FF << 16);
    // 0x00207D48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207D4C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207D50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207D54: j           L_00207FD0
    // 0x00207D58: ori         $a1, $a1, 0xF638
    ctx->r5 = ctx->r5 | 0XF638;
        goto L_00207FD0;
    // 0x00207D58: ori         $a1, $a1, 0xF638
    ctx->r5 = ctx->r5 | 0XF638;
L_00207D5C:
    // 0x00207D5C: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207D60: ori         $a2, $a2, 0xFEA4
    ctx->r6 = ctx->r6 | 0XFEA4;
    // 0x00207D64: lui         $a1, 0xF0FD
    ctx->r5 = S32(0XF0FD << 16);
    // 0x00207D68: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207D6C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207D70: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207D74: j           L_00207FD0
    // 0x00207D78: ori         $a1, $a1, 0xF638
    ctx->r5 = ctx->r5 | 0XF638;
        goto L_00207FD0;
    // 0x00207D78: ori         $a1, $a1, 0xF638
    ctx->r5 = ctx->r5 | 0XF638;
L_00207D7C:
    // 0x00207D7C: lui         $a2, 0xFC32
    ctx->r6 = S32(0XFC32 << 16);
    // 0x00207D80: ori         $a2, $a2, 0x7FFF
    ctx->r6 = ctx->r6 | 0X7FFF;
    // 0x00207D84: lui         $a1, 0xFF17
    ctx->r5 = S32(0XFF17 << 16);
    // 0x00207D88: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207D8C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207D90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207D94: j           L_00207FD0
    // 0x00207D98: ori         $a1, $a1, 0xF77F
    ctx->r5 = ctx->r5 | 0XF77F;
        goto L_00207FD0;
    // 0x00207D98: ori         $a1, $a1, 0xF77F
    ctx->r5 = ctx->r5 | 0XF77F;
L_00207D9C:
    // 0x00207D9C: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207DA0: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x00207DA4: lui         $a1, 0xFF2C
    ctx->r5 = S32(0XFF2C << 16);
    // 0x00207DA8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207DAC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207DB0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207DB4: j           L_00207FD0
    // 0x00207DB8: ori         $a1, $a1, 0xFE7F
    ctx->r5 = ctx->r5 | 0XFE7F;
        goto L_00207FD0;
    // 0x00207DB8: ori         $a1, $a1, 0xFE7F
    ctx->r5 = ctx->r5 | 0XFE7F;
L_00207DBC:
    // 0x00207DBC: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207DC0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00207DC4: lui         $a1, 0xFFFD
    ctx->r5 = S32(0XFFFD << 16);
    // 0x00207DC8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207DCC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207DD0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207DD4: j           L_00207FD0
    // 0x00207DD8: ori         $a1, $a1, 0xF6FB
    ctx->r5 = ctx->r5 | 0XF6FB;
        goto L_00207FD0;
    // 0x00207DD8: ori         $a1, $a1, 0xF6FB
    ctx->r5 = ctx->r5 | 0XF6FB;
L_00207DDC:
    // 0x00207DDC: lui         $a2, 0xFC51
    ctx->r6 = S32(0XFC51 << 16);
    // 0x00207DE0: ori         $a2, $a2, 0x1BFF
    ctx->r6 = ctx->r6 | 0X1BFF;
    // 0x00207DE4: lui         $a1, 0x3FFD
    ctx->r5 = S32(0X3FFD << 16);
    // 0x00207DE8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207DEC: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207DF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207DF4: j           L_00207FD0
    // 0x00207DF8: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
        goto L_00207FD0;
    // 0x00207DF8: ori         $a1, $a1, 0xFE38
    ctx->r5 = ctx->r5 | 0XFE38;
L_00207DFC:
    // 0x00207DFC: lui         $a1, 0xFC12
    ctx->r5 = S32(0XFC12 << 16);
    // 0x00207E00: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207E04: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207E08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00207E0C: j           L_00207C48
    // 0x00207E10: ori         $a1, $a1, 0xABFF
    ctx->r5 = ctx->r5 | 0XABFF;
        goto L_00207C48;
    // 0x00207E10: ori         $a1, $a1, 0xABFF
    ctx->r5 = ctx->r5 | 0XABFF;
L_00207E14:
    // 0x00207E14: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207E18: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00207E1C: lui         $a1, 0xFFFE
    ctx->r5 = S32(0XFFFE << 16);
    // 0x00207E20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207E24: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207E28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207E2C: j           L_00207FD0
    // 0x00207E30: ori         $a1, $a1, 0x793C
    ctx->r5 = ctx->r5 | 0X793C;
        goto L_00207FD0;
    // 0x00207E30: ori         $a1, $a1, 0x793C
    ctx->r5 = ctx->r5 | 0X793C;
L_00207E34:
    // 0x00207E34: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207E38: ori         $a2, $a2, 0x9661
    ctx->r6 = ctx->r6 | 0X9661;
    // 0x00207E3C: j           L_00207FC0
    // 0x00207E40: lui         $a1, 0x552E
    ctx->r5 = S32(0X552E << 16);
        goto L_00207FC0;
    // 0x00207E40: lui         $a1, 0x552E
    ctx->r5 = S32(0X552E << 16);
L_00207E44:
    // 0x00207E44: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207E48: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00207E4C: lui         $a1, 0xFFFD
    ctx->r5 = S32(0XFFFD << 16);
    // 0x00207E50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207E54: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207E58: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207E5C: ori         $a1, $a1, 0xFCFE
    ctx->r5 = ctx->r5 | 0XFCFE;
    // 0x00207E60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00207E64: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207E68: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00207E6C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00207E70: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
L_00207E74:
    // 0x00207E74: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207E78: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00207E7C: lui         $a1, 0xFFFE
    ctx->r5 = S32(0XFFFE << 16);
    // 0x00207E80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207E84: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207E88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207E8C: j           L_00207FD0
    // 0x00207E90: ori         $a1, $a1, 0xFD7E
    ctx->r5 = ctx->r5 | 0XFD7E;
        goto L_00207FD0;
    // 0x00207E90: ori         $a1, $a1, 0xFD7E
    ctx->r5 = ctx->r5 | 0XFD7E;
L_00207E94:
    // 0x00207E94: lui         $a2, 0xFC50
    ctx->r6 = S32(0XFC50 << 16);
    // 0x00207E98: ori         $a2, $a2, 0xC2A1
    ctx->r6 = ctx->r6 | 0XC2A1;
    // 0x00207E9C: lui         $a1, 0x4486
    ctx->r5 = S32(0X4486 << 16);
    // 0x00207EA0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207EA4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207EA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207EAC: j           L_00207FD0
    // 0x00207EB0: ori         $a1, $a1, 0x7F3F
    ctx->r5 = ctx->r5 | 0X7F3F;
        goto L_00207FD0;
    // 0x00207EB0: ori         $a1, $a1, 0x7F3F
    ctx->r5 = ctx->r5 | 0X7F3F;
L_00207EB4:
    // 0x00207EB4: lui         $a1, 0xFC12
    ctx->r5 = S32(0XFC12 << 16);
    // 0x00207EB8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207EBC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207EC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00207EC4: ori         $a1, $a1, 0x7E24
    ctx->r5 = ctx->r5 | 0X7E24;
    // 0x00207EC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00207ECC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207ED0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00207ED4: j           L_00207C58
    // 0x00207ED8: addiu       $v0, $zero, -0x604
    ctx->r2 = ADD32(0, -0X604);
        goto L_00207C58;
    // 0x00207ED8: addiu       $v0, $zero, -0x604
    ctx->r2 = ADD32(0, -0X604);
L_00207EDC:
    // 0x00207EDC: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x00207EE0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00207EE4: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00207EE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00207EEC: j           L_00207C48
    // 0x00207EF0: ori         $a1, $a1, 0x97FF
    ctx->r5 = ctx->r5 | 0X97FF;
        goto L_00207C48;
    // 0x00207EF0: ori         $a1, $a1, 0x97FF
    ctx->r5 = ctx->r5 | 0X97FF;
L_00207EF4:
    // 0x00207EF4: lui         $a2, 0xFC26
    ctx->r6 = S32(0XFC26 << 16);
    // 0x00207EF8: ori         $a2, $a2, 0xFE60
    ctx->r6 = ctx->r6 | 0XFE60;
    // 0x00207EFC: lui         $a1, 0x15FC
    ctx->r5 = S32(0X15FC << 16);
    // 0x00207F00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207F04: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207F08: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207F0C: j           L_00207FD0
    // 0x00207F10: ori         $a1, $a1, 0xF778
    ctx->r5 = ctx->r5 | 0XF778;
        goto L_00207FD0;
    // 0x00207F10: ori         $a1, $a1, 0xF778
    ctx->r5 = ctx->r5 | 0XF778;
L_00207F14:
    // 0x00207F14: lui         $a2, 0xFC32
    ctx->r6 = S32(0XFC32 << 16);
    // 0x00207F18: ori         $a2, $a2, 0x2007
    ctx->r6 = ctx->r6 | 0X2007;
    // 0x00207F1C: lui         $a1, 0xF5FF
    ctx->r5 = S32(0XF5FF << 16);
    // 0x00207F20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207F24: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207F28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207F2C: j           L_00207FD0
    // 0x00207F30: ori         $a1, $a1, 0x937B
    ctx->r5 = ctx->r5 | 0X937B;
        goto L_00207FD0;
    // 0x00207F30: ori         $a1, $a1, 0x937B
    ctx->r5 = ctx->r5 | 0X937B;
L_00207F34:
    // 0x00207F34: lui         $a2, 0xFC52
    ctx->r6 = S32(0XFC52 << 16);
    // 0x00207F38: ori         $a2, $a2, 0x2067
    ctx->r6 = ctx->r6 | 0X2067;
    // 0x00207F3C: lui         $a1, 0xF0FF
    ctx->r5 = S32(0XF0FF << 16);
    // 0x00207F40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207F44: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207F48: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207F4C: j           L_00207FD0
    // 0x00207F50: ori         $a1, $a1, 0x923B
    ctx->r5 = ctx->r5 | 0X923B;
        goto L_00207FD0;
    // 0x00207F50: ori         $a1, $a1, 0x923B
    ctx->r5 = ctx->r5 | 0X923B;
L_00207F54:
    // 0x00207F54: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207F58: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x00207F5C: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x00207F60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207F64: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207F68: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207F6C: j           L_00207FD0
    // 0x00207F70: ori         $a1, $a1, 0x7E38
    ctx->r5 = ctx->r5 | 0X7E38;
        goto L_00207FD0;
    // 0x00207F70: ori         $a1, $a1, 0x7E38
    ctx->r5 = ctx->r5 | 0X7E38;
L_00207F74:
    // 0x00207F74: lui         $a2, 0xFCFF
    ctx->r6 = S32(0XFCFF << 16);
    // 0x00207F78: ori         $a2, $a2, 0x99FF
    ctx->r6 = ctx->r6 | 0X99FF;
    // 0x00207F7C: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x00207F80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207F84: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207F88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207F8C: j           L_00207FD0
    // 0x00207F90: ori         $a1, $a1, 0x7E38
    ctx->r5 = ctx->r5 | 0X7E38;
        goto L_00207FD0;
    // 0x00207F90: ori         $a1, $a1, 0x7E38
    ctx->r5 = ctx->r5 | 0X7E38;
L_00207F94:
    // 0x00207F94: lui         $a2, 0xFC12
    ctx->r6 = S32(0XFC12 << 16);
    // 0x00207F98: ori         $a2, $a2, 0x1824
    ctx->r6 = ctx->r6 | 0X1824;
    // 0x00207F9C: lui         $a1, 0xFF33
    ctx->r5 = S32(0XFF33 << 16);
    // 0x00207FA0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207FA4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207FA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207FAC: j           L_00207FD0
    // 0x00207FB0: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
        goto L_00207FD0;
    // 0x00207FB0: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
L_00207FB4:
    // 0x00207FB4: lui         $a2, 0xFC30
    ctx->r6 = S32(0XFC30 << 16);
    // 0x00207FB8: ori         $a2, $a2, 0xC261
    ctx->r6 = ctx->r6 | 0XC261;
    // 0x00207FBC: lui         $a1, 0x5586
    ctx->r5 = S32(0X5586 << 16);
L_00207FC0:
    // 0x00207FC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207FC4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207FC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207FCC: ori         $a1, $a1, 0xFF7F
    ctx->r5 = ctx->r5 | 0XFF7F;
L_00207FD0:
    // 0x00207FD0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00207FD4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207FD8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00207FDC: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00207FE0: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
L_00207FE4:
    // 0x00207FE4: jr          $ra
    // 0x00207FE8: nop

    return;
    // 0x00207FE8: nop

;}
RECOMP_FUNC void func_0041A234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A238: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A23C: jal         0x0042452C
    // 0x0041A240: nop

    func_0042452C(rdram, ctx);
        goto after_0;
    // 0x0041A240: nop

    after_0:
    // 0x0041A244: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A24C: jr          $ra
    // 0x0041A250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044F214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004162D0:
    // 0x0044F214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044F218: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044F21C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0044F220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F224: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x0044F228: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044F22C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044F230: jal         0x00225EBC
    // 0x0044F234: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x0044F234: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0044F238: bne         $v0, $zero, L_0044F24C
    if (ctx->r2 != 0) {
        // 0x0044F23C: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_0044F24C;
    }
    // 0x0044F23C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x0044F240: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x0044F244: j           L_004162D0
    // 0x0044F248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_004162D0(rdram, ctx);
    return;
    // 0x0044F248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044F24C:
    // 0x0044F24C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0044F250: addiu       $a1, $v1, 0x90
    ctx->r5 = ADD32(ctx->r3, 0X90);
    // 0x0044F254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044F258: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x0044F25C: sw          $v0, 0x328($s0)
    MEM_W(0X328, ctx->r16) = ctx->r2;
L_0044F260:
    // 0x0044F260: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x0044F264: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x0044F268: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0044F26C: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x0044F270: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x0044F274: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x0044F278: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    // 0x0044F27C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x0044F280: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044F284: bne         $v1, $a1, L_0044F260
    if (ctx->r3 != ctx->r5) {
        // 0x0044F288: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0044F260;
    }
    // 0x0044F288: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0044F28C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044F290: lwc1        $f0, 0xC5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC5C);
    // 0x0044F294: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x0044F298: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x0044F29C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x0044F2A0: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x0044F2A4: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x0044F2A8: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    // 0x0044F2AC: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0044F2B0: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x0044F2B4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0044F2B8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0044F2BC: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0044F2C0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0044F2C4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x0044F2C8: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x0044F2CC: swc1        $f1, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044F2D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0044F2D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044F2D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044F2DC: jr          $ra
    // 0x0044F2E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044F2E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00228AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00228AB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00228AB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00228ABC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00228AC0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00228AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00228AC8: jal         0x00223F70
    // 0x00228ACC: nop

    func_00223F70(rdram, ctx);
        goto after_0;
    // 0x00228ACC: nop

    after_0:
    // 0x00228AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00228AD4: jal         0x00228AEC
    // 0x00228AD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00228AEC(rdram, ctx);
        goto after_1;
    // 0x00228AD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00228ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00228AE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00228AE4: jr          $ra
    // 0x00228AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00228AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B05C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041B060: lw          $v1, 0x924($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X924);
    // 0x0041B064: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041B068: beq         $v0, $zero, L_0041B084
    if (ctx->r2 == 0) {
        // 0x0041B06C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041B084;
    }
    // 0x0041B06C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041B070: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041B074: addu        $at, $at, $v0
    gpr jr_addend_0041B07C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041B078: lw          $v0, 0x12B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X12B0);
    // 0x0041B07C: jr          $v0
    // 0x0041B080: nop

    switch (jr_addend_0041B07C >> 2) {
        case 0: goto L_0041B094; break;
        case 1: goto L_0041B0A4; break;
        case 2: goto L_0041B0B4; break;
        case 3: goto L_0041B0C4; break;
        case 4: goto L_0041B0D4; break;
        case 5: goto L_0041B0E4; break;
        case 6: goto L_0041B0F4; break;
        case 7: goto L_0041B104; break;
        case 8: goto L_0041B114; break;
        case 9: goto L_0041B124; break;
        case 10: goto L_0041B134; break;
        default: switch_error(__func__, 0x0041B07C, 0x800C12B0);
    }
    // 0x0041B080: nop

L_0041B084:
    // 0x0041B084: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041B088: addiu       $v0, $v0, 0x1144
    ctx->r2 = ADD32(ctx->r2, 0X1144);
    // 0x0041B08C: j           L_0041B140
    // 0x0041B090: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B090: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B094:
    // 0x0041B094: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B098: addiu       $v0, $v0, 0x5B2C
    ctx->r2 = ADD32(ctx->r2, 0X5B2C);
    // 0x0041B09C: j           L_0041B140
    // 0x0041B0A0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0A0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B0A4:
    // 0x0041B0A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0A8: addiu       $v0, $v0, 0x5B48
    ctx->r2 = ADD32(ctx->r2, 0X5B48);
    // 0x0041B0AC: j           L_0041B140
    // 0x0041B0B0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0B0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B0B4:
    // 0x0041B0B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0B8: addiu       $v0, $v0, 0x5B64
    ctx->r2 = ADD32(ctx->r2, 0X5B64);
    // 0x0041B0BC: j           L_0041B140
    // 0x0041B0C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B0C4:
    // 0x0041B0C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0C8: addiu       $v0, $v0, 0x5B80
    ctx->r2 = ADD32(ctx->r2, 0X5B80);
    // 0x0041B0CC: j           L_0041B140
    // 0x0041B0D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B0D4:
    // 0x0041B0D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0D8: addiu       $v0, $v0, 0x5B9C
    ctx->r2 = ADD32(ctx->r2, 0X5B9C);
    // 0x0041B0DC: j           L_0041B140
    // 0x0041B0E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B0E4:
    // 0x0041B0E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0E8: addiu       $v0, $v0, 0x5BB8
    ctx->r2 = ADD32(ctx->r2, 0X5BB8);
    // 0x0041B0EC: j           L_0041B140
    // 0x0041B0F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B0F4:
    // 0x0041B0F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0F8: addiu       $v0, $v0, 0x5BF0
    ctx->r2 = ADD32(ctx->r2, 0X5BF0);
    // 0x0041B0FC: j           L_0041B140
    // 0x0041B100: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B100: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B104:
    // 0x0041B104: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B108: addiu       $v0, $v0, 0x5BD4
    ctx->r2 = ADD32(ctx->r2, 0X5BD4);
    // 0x0041B10C: j           L_0041B140
    // 0x0041B110: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B110: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B114:
    // 0x0041B114: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B118: addiu       $v0, $v0, 0x5C0C
    ctx->r2 = ADD32(ctx->r2, 0X5C0C);
    // 0x0041B11C: j           L_0041B140
    // 0x0041B120: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B120: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B124:
    // 0x0041B124: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B128: addiu       $v0, $v0, 0x5C28
    ctx->r2 = ADD32(ctx->r2, 0X5C28);
    // 0x0041B12C: j           L_0041B140
    // 0x0041B130: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B130: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B134:
    // 0x0041B134: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B138: addiu       $v0, $v0, 0x5C44
    ctx->r2 = ADD32(ctx->r2, 0X5C44);
    // 0x0041B13C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B140:
    // 0x0041B140: jr          $ra
    // 0x0041B144: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B144: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00269F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269F7C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00269F80: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x00269F84: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x00269F88: sdc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X70, ctx->r29);
    // 0x00269F8C: mtc1        $a2, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r6;
    // 0x00269F90: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x00269F94: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x00269F98: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x00269F9C: lwc1        $f24, 0x90($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X90);
    // 0x00269FA0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00269FA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00269FA8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x00269FAC: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x00269FB0: beq         $s0, $zero, L_0026A23C
    if (ctx->r16 == 0) {
        // 0x00269FB4: nop
    
            goto L_0026A23C;
    }
    // 0x00269FB4: nop

    // 0x00269FB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00269FBC: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x00269FC0: beq         $s0, $v0, L_00269FFC
    if (ctx->r16 == ctx->r2) {
        // 0x00269FC4: nop
    
            goto L_00269FFC;
    }
    // 0x00269FC4: nop

    // 0x00269FC8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00269FCC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00269FD0: jal         0x0020EF2C
    // 0x00269FD4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00269FD4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x00269FD8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x00269FDC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00269FE0: jal         0x0020EF2C
    // 0x00269FE4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00269FE4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x00269FE8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269FEC: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x00269FF0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x00269FF4: jal         0x0020EFDC
    // 0x00269FF8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x00269FF8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
L_00269FFC:
    // 0x00269FFC: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0026A000: addiu       $t3, $t3, 0x2020
    ctx->r11 = ADD32(ctx->r11, 0X2020);
    // 0x0026A004: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0026A008: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0026A00C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0026A010: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026A014: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026A018: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0026A01C: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A020: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A024: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026A028: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026A02C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026A030: nop

    // 0x0026A034: bc1f        L_0026A070
    if (!c1cs) {
        // 0x0026A038: nop
    
            goto L_0026A070;
    }
    // 0x0026A038: nop

    // 0x0026A03C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A040: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A044: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026A048: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026A04C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A050: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A054: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026A058: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A05C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A060: lwc1        $f0, 0x7F78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F78);
    // 0x0026A064: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026A068: j           L_0026A0C4
    // 0x0026A06C: nop

        goto L_0026A0C4;
    // 0x0026A06C: nop

L_0026A070:
    // 0x0026A070: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A074: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0026A078: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0026A07C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0026A080: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0026A084: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0026A088: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0026A08C: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026A090: sub.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f23.fl;
    // 0x0026A094: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026A098: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A09C: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026A0A0: sub.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f21.fl;
    // 0x0026A0A4: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026A0A8: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026A0AC: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A0B0: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026A0B4: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026A0B8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026A0BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026A0C0: div.s       $f20, $f0, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
L_0026A0C4:
    // 0x0026A0C4: bne         $s0, $zero, L_0026A0DC
    if (ctx->r16 != 0) {
        // 0x0026A0C8: nop
    
            goto L_0026A0DC;
    }
    // 0x0026A0C8: nop

    // 0x0026A0CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A0D0: lwc1        $f0, 0x7F7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F7C);
    // 0x0026A0D4: j           L_0026A1E8
    // 0x0026A0D8: nop

        goto L_0026A1E8;
    // 0x0026A0D8: nop

L_0026A0DC:
    // 0x0026A0DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026A0E0: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026A0E4: beq         $s0, $v0, L_0026A120
    if (ctx->r16 == ctx->r2) {
        // 0x0026A0E8: nop
    
            goto L_0026A120;
    }
    // 0x0026A0E8: nop

    // 0x0026A0EC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026A0F0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026A0F4: jal         0x0020EF2C
    // 0x0026A0F8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0026A0F8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x0026A0FC: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026A100: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026A104: jal         0x0020EF2C
    // 0x0026A108: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0026A108: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x0026A10C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026A110: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026A114: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0026A118: jal         0x0020EFDC
    // 0x0026A11C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_5;
    // 0x0026A11C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_5:
L_0026A120:
    // 0x0026A120: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0026A124: addiu       $t3, $t3, 0x2020
    ctx->r11 = ADD32(ctx->r11, 0X2020);
    // 0x0026A128: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0026A12C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0026A130: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0026A134: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026A138: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026A13C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0026A140: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A144: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A148: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026A14C: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026A150: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026A154: nop

    // 0x0026A158: bc1f        L_0026A194
    if (!c1cs) {
        // 0x0026A15C: nop
    
            goto L_0026A194;
    }
    // 0x0026A15C: nop

    // 0x0026A160: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A164: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A168: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026A16C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026A170: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A174: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A178: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026A17C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026A180: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A184: lwc1        $f0, 0x7F80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F80);
    // 0x0026A188: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026A18C: j           L_0026A1E8
    // 0x0026A190: nop

        goto L_0026A1E8;
    // 0x0026A190: nop

L_0026A194:
    // 0x0026A194: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A198: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0026A19C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0026A1A0: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0026A1A4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0026A1A8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0026A1AC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0026A1B0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026A1B4: sub.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f24.fl;
    // 0x0026A1B8: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026A1BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A1C0: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026A1C4: sub.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x0026A1C8: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026A1CC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0026A1D0: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A1D4: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026A1D8: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026A1DC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026A1E0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026A1E4: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
L_0026A1E8:
    // 0x0026A1E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0026A1EC: nop

    // 0x0026A1F0: bc1f        L_0026A23C
    if (!c1cs) {
        // 0x0026A1F4: nop
    
            goto L_0026A23C;
    }
    // 0x0026A1F4: nop

    // 0x0026A1F8: sub.s       $f2, $f22, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = ctx->f22.fl - ctx->f21.fl;
    // 0x0026A1FC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0026A200: sub.s       $f1, $f24, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = ctx->f24.fl - ctx->f23.fl;
    // 0x0026A204: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0026A208: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0026A20C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026A210: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026A214: add.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0026A218: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026A21C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0026A220: nop

    // 0x0026A224: bc1t        L_0026A23C
    if (c1cs) {
        // 0x0026A228: nop
    
            goto L_0026A23C;
    }
    // 0x0026A228: nop

    // 0x0026A22C: jal         0x00298470
    // 0x0026A230: div.s       $f12, $f2, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    func_00298470(rdram, ctx);
        goto after_6;
    // 0x0026A230: div.s       $f12, $f2, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    after_6:
    // 0x0026A234: j           L_0026A244
    // 0x0026A238: nop

        goto L_0026A244;
    // 0x0026A238: nop

L_0026A23C:
    // 0x0026A23C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A240: lwc1        $f0, 0x7F84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F84);
L_0026A244:
    // 0x0026A244: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0026A248: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0026A24C: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x0026A250: ldc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X70);
    // 0x0026A254: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x0026A258: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0026A25C: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x0026A260: jr          $ra
    // 0x0026A264: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0026A264: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00292D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292D4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00292D50: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00292D54: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x00292D58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00292D5C: bne         $v1, $v0, L_00292DA4
    if (ctx->r3 != ctx->r2) {
        // 0x00292D60: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_00292DA4;
    }
    // 0x00292D60: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00292D64: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x00292D68: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x00292D6C: bne         $v1, $v0, L_00292DA4
    if (ctx->r3 != ctx->r2) {
        // 0x00292D70: nop
    
            goto L_00292DA4;
    }
    // 0x00292D70: nop

    // 0x00292D74: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x00292D78: lbu         $v1, 0xC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC);
    // 0x00292D7C: lbu         $a0, 0xD($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XD);
    // 0x00292D80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00292D84: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00292D88: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00292D8C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00292D90: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00292D94: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00292D98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00292D9C: jal         0x00292DB0
    // 0x00292DA0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_00292DB0(rdram, ctx);
        goto after_0;
    // 0x00292DA0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
L_00292DA4:
    // 0x00292DA4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00292DA8: jr          $ra
    // 0x00292DAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00292DAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00443D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void func_002A1540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A1544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1548: nor         $s0, $zero, $a0
    ctx->r16 = ~(0 | ctx->r4);
    // 0x002A154C: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x002A1550: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x002A1554: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x002A1558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A155C: jal         0x002A1384
    // 0x002A1560: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A1560: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    after_0:
    // 0x002A1564: srlv        $v0, $v0, $s0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r16 & 31));
    // 0x002A1568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A156C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1570: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002A1574: jr          $ra
    // 0x002A1578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A1578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040AD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void func_0029247C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029247C: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x00292480: beq         $v1, $zero, L_002924C4
    if (ctx->r3 == 0) {
        // 0x00292484: nop
    
            goto L_002924C4;
    }
    // 0x00292484: nop

    // 0x00292488: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029248C: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x00292490: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x00292494: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x00292498: bne         $v0, $zero, L_002924A8
    if (ctx->r2 != 0) {
        // 0x0029249C: nop
    
            goto L_002924A8;
    }
    // 0x0029249C: nop

    // 0x002924A0: j           L_002924B0
    // 0x002924A4: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
        goto L_002924B0;
    // 0x002924A4: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
L_002924A8:
    // 0x002924A8: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x002924AC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_002924B0:
    // 0x002924B0: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x002924B4: sb          $a3, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r7;
    // 0x002924B8: sb          $a1, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r5;
    // 0x002924BC: sb          $a2, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r6;
    // 0x002924C0: sw          $v1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r3;
L_002924C4:
    // 0x002924C4: jr          $ra
    // 0x002924C8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x002924C8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_004528C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004528C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004528C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004528C8: jal         0x002759C4
    // 0x004528CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x004528CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x004528D0: jal         0x00275A74
    // 0x004528D4: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x004528D4: nop

    after_1:
    // 0x004528D8: jal         0x00275A2C
    // 0x004528DC: nop

    func_00275A2C(rdram, ctx);
        goto after_2;
    // 0x004528DC: nop

    after_2:
    // 0x004528E0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004528E4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004528E8: jal         0x00430250
    // 0x004528EC: nop

    func_00430250(rdram, ctx);
        goto after_3;
    // 0x004528EC: nop

    after_3:
    // 0x004528F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004528F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004528F8: jr          $ra
    // 0x004528FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004528FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004510B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004510B8: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x004510BC: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x004510C0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004510C4: addiu       $v1, $v1, -0x5475
    ctx->r3 = ADD32(ctx->r3, -0X5475);
    // 0x004510C8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x004510CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004510D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004510D4: jr          $ra
    // 0x004510D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004510D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042F344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042F348: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042F34C: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x0042F350: addiu       $s2, $s2, 0x56B0
    ctx->r18 = ADD32(ctx->r18, 0X56B0);
    // 0x0042F354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0042F358: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042F35C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042F360: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x0042F364: beq         $v0, $zero, L_0042F3CC
    if (ctx->r2 == 0) {
        // 0x0042F368: nop
    
            goto L_0042F3CC;
    }
    // 0x0042F368: nop

    // 0x0042F36C: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x0042F370: blez        $v0, L_0042F460
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042F374: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0042F460;
    }
    // 0x0042F374: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042F378: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
L_0042F37C:
    // 0x0042F37C: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F380: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x0042F384: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F388: jalr        $v0
    // 0x0042F38C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0042F38C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x0042F390: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F394: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    // 0x0042F398: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F39C: jalr        $v0
    // 0x0042F3A0: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0042F3A0: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    after_1:
    // 0x0042F3A4: addiu       $s0, $s0, 0x114
    ctx->r16 = ADD32(ctx->r16, 0X114);
    // 0x0042F3A8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0042F3AC: jalr        $v0
    // 0x0042F3B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0042F3B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042F3B4: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x0042F3B8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042F3BC: bne         $v0, $zero, L_0042F37C
    if (ctx->r2 != 0) {
        // 0x0042F3C0: sll         $s0, $s1, 5
        ctx->r16 = S32(ctx->r17 << 5);
            goto L_0042F37C;
    }
    // 0x0042F3C0: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
    // 0x0042F3C4: j           L_0042F45C
    // 0x0042F3C8: nop

        goto L_0042F45C;
    // 0x0042F3C8: nop

L_0042F3CC:
    // 0x0042F3CC: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x0042F3D0: blez        $v0, L_0042F460
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042F3D4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0042F460;
    }
    // 0x0042F3D4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042F3D8: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
L_0042F3DC:
    // 0x0042F3DC: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F3E0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x0042F3E4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F3E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0042F3EC: bgtz        $v0, L_0042F400
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042F3F0: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0042F400;
    }
    // 0x0042F3F0: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0042F3F4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F3F8: jalr        $v0
    // 0x0042F3FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x0042F3FC: nop

    after_3:
L_0042F400:
    // 0x0042F400: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F404: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    // 0x0042F408: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F40C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0042F410: bgtz        $v0, L_0042F424
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042F414: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0042F424;
    }
    // 0x0042F414: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0042F418: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F41C: jalr        $v0
    // 0x0042F420: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0042F420: nop

    after_4:
L_0042F424:
    // 0x0042F424: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F428: addiu       $a0, $a0, 0x114
    ctx->r4 = ADD32(ctx->r4, 0X114);
    // 0x0042F42C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F430: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0042F434: bgtz        $v0, L_0042F448
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042F438: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0042F448;
    }
    // 0x0042F438: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0042F43C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F440: jalr        $v0
    // 0x0042F444: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x0042F444: nop

    after_5:
L_0042F448:
    // 0x0042F448: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x0042F44C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042F450: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042F454: bne         $v0, $zero, L_0042F3DC
    if (ctx->r2 != 0) {
        // 0x0042F458: sll         $s0, $s1, 5
        ctx->r16 = S32(ctx->r17 << 5);
            goto L_0042F3DC;
    }
    // 0x0042F458: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
L_0042F45C:
    // 0x0042F45C: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
L_0042F460:
    // 0x0042F460: blez        $v0, L_0042F4D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042F464: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0042F4D0;
    }
    // 0x0042F464: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042F468: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042F46C: addiu       $a0, $a0, 0x5F87
    ctx->r4 = ADD32(ctx->r4, 0X5F87);
    // 0x0042F470: addiu       $a2, $a0, -0x1
    ctx->r6 = ADD32(ctx->r4, -0X1);
    // 0x0042F474: addiu       $a1, $a0, -0x17
    ctx->r5 = ADD32(ctx->r4, -0X17);
    // 0x0042F478: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_0042F47C:
    // 0x0042F47C: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x0042F480: beq         $v0, $zero, L_0042F498
    if (ctx->r2 == 0) {
        // 0x0042F484: nop
    
            goto L_0042F498;
    }
    // 0x0042F484: nop

    // 0x0042F488: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0042F48C: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x0042F490: j           L_0042F4B0
    // 0x0042F494: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
        goto L_0042F4B0;
    // 0x0042F494: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_0042F498:
    // 0x0042F498: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0042F49C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0042F4A0: lbu         $v0, 0x97($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X97);
    // 0x0042F4A4: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x0042F4A8: lbu         $v0, 0x117($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X117);
    // 0x0042F4AC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_0042F4B0:
    // 0x0042F4B0: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    // 0x0042F4B4: addiu       $a2, $a2, 0x224
    ctx->r6 = ADD32(ctx->r6, 0X224);
    // 0x0042F4B8: addiu       $a1, $a1, 0x224
    ctx->r5 = ADD32(ctx->r5, 0X224);
    // 0x0042F4BC: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x0042F4C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042F4C4: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042F4C8: bne         $v0, $zero, L_0042F47C
    if (ctx->r2 != 0) {
        // 0x0042F4CC: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_0042F47C;
    }
    // 0x0042F4CC: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
L_0042F4D0:
    // 0x0042F4D0: jal         0x0042F1C4
    // 0x0042F4D4: nop

    func_0042F1C4(rdram, ctx);
        goto after_6;
    // 0x0042F4D4: nop

    after_6:
    // 0x0042F4D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042F4DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042F4E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042F4E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042F4E8: jr          $ra
    // 0x0042F4EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042F4EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00242C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242C00: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00242C04: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x00242C08: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00242C0C: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x00242C10: sw          $ra, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r31;
    // 0x00242C14: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x00242C18: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x00242C1C: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x00242C20: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x00242C24: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x00242C28: jal         0x00267800
    // 0x00242C2C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00267800(rdram, ctx);
        goto after_0;
    // 0x00242C2C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00242C30: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00242C34: beq         $s4, $zero, L_00242DFC
    if (ctx->r20 == 0) {
            // 0x00242C38: lui         $v1, 0xFFF3
    ctx->r3 = S32(0XFFF3 << 16);
    entry_00242DFC(rdram, ctx);
    return;
    }
    // 0x00242C38: lui         $v1, 0xFFF3
    ctx->r3 = S32(0XFFF3 << 16);
    // 0x00242C3C: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x00242C40: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00242C44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00242C48: bne         $v1, $v0, L_00242DE0
    if (ctx->r3 != ctx->r2) {
            // 0x00242C4C: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    entry_00242DE0(rdram, ctx);
    return;
    }
    // 0x00242C4C: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x00242C50: lui         $v1, 0xFFF7
    ctx->r3 = S32(0XFFF7 << 16);
    // 0x00242C54: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00242C58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00242C5C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00242C60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242C64: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x00242C68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00242C6C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00242C70: lw          $t0, 0x4($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X4);
    // 0x00242C74: lw          $t1, 0x8($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X8);
    // 0x00242C78: lw          $t2, 0xC($s5)
    ctx->r10 = MEM_W(ctx->r21, 0XC);
    // 0x00242C7C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00242C80: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00242C84: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00242C88: jal         0x00268798
    // 0x00242C8C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00268798(rdram, ctx);
        goto after_1;
    // 0x00242C8C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x00242C90: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00242C94: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00242C98: beq         $v0, $zero, L_00242CB8
    if (ctx->r2 == 0) {
            // 0x00242C9C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    entry_00242CB8(rdram, ctx);
    return;
    }
    // 0x00242C9C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x00242CA0: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00242CA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00242CA8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
;}
RECOMP_FUNC void func_0040E8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E8C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040E8C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040E8C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040E8CC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x0040E8D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040E8D4: jal         0x00243414
    // 0x0040E8D8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E8D8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040E8DC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040E8E0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040E8E4: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x0040E8E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E8EC: lwc1        $f0, 0x938($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X938);
    // 0x0040E8F0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0040E8F4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040E8F8: addiu       $v0, $v0, 0x24F4
    ctx->r2 = ADD32(ctx->r2, 0X24F4);
    // 0x0040E8FC: sw          $v0, 0x548($s0)
    MEM_W(0X548, ctx->r16) = ctx->r2;
    // 0x0040E900: addiu       $s0, $s0, 0x548
    ctx->r16 = ADD32(ctx->r16, 0X548);
    // 0x0040E904: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040E908: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0040E90C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0040E910: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x0040E914: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0040E918: jal         0x00225C84
    // 0x0040E91C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_00225C84(rdram, ctx);
        goto after_1;
    // 0x0040E91C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0040E920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040E924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E928: jr          $ra
    // 0x0040E92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025E6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025E6E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025E6E8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025E6EC: addiu       $a2, $v0, 0x14
    ctx->r6 = ADD32(ctx->r2, 0X14);
    // 0x0025E6F0: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x0025E6F4: beq         $v1, $zero, L_0025E74C
    if (ctx->r3 == 0) {
        // 0x0025E6F8: addiu       $v0, $zero, 0x1F9
        ctx->r2 = ADD32(0, 0X1F9);
            goto L_0025E74C;
    }
    // 0x0025E6F8: addiu       $v0, $zero, 0x1F9
    ctx->r2 = ADD32(0, 0X1F9);
    // 0x0025E6FC: lhu         $a0, 0xB8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB8);
    // 0x0025E700: beq         $a0, $v0, L_0025E710
    if (ctx->r4 == ctx->r2) {
        // 0x0025E704: addiu       $v0, $zero, 0x385
        ctx->r2 = ADD32(0, 0X385);
            goto L_0025E710;
    }
    // 0x0025E704: addiu       $v0, $zero, 0x385
    ctx->r2 = ADD32(0, 0X385);
    // 0x0025E708: bne         $a0, $v0, L_0025E78C
    if (ctx->r4 != ctx->r2) {
        // 0x0025E70C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0025E78C;
    }
    // 0x0025E70C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0025E710:
    // 0x0025E710: addiu       $v1, $v1, -0x2B16
    ctx->r3 = ADD32(ctx->r3, -0X2B16);
    // 0x0025E714: sltiu       $v0, $v1, 0x29
    ctx->r2 = ctx->r3 < 0X29 ? 1 : 0;
    // 0x0025E718: beq         $v0, $zero, L_0025E740
    if (ctx->r2 == 0) {
        // 0x0025E71C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0025E740;
    }
    // 0x0025E71C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025E720: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E724: addu        $at, $at, $v0
    gpr jr_addend_0025E72C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025E728: lw          $v0, 0x7730($at)
    ctx->r2 = ADD32(ctx->r1, 0X7730);
    // 0x0025E72C: jr          $v0
    // 0x0025E730: nop

    switch (jr_addend_0025E72C >> 2) {
        case 0: goto L_0025E734; break;
        case 1: goto L_0025E740; break;
        case 2: goto L_0025E740; break;
        case 3: goto L_0025E740; break;
        case 4: goto L_0025E740; break;
        case 5: goto L_0025E740; break;
        case 6: goto L_0025E740; break;
        case 7: goto L_0025E740; break;
        case 8: goto L_0025E740; break;
        case 9: goto L_0025E740; break;
        case 10: goto L_0025E734; break;
        case 11: goto L_0025E740; break;
        case 12: goto L_0025E740; break;
        case 13: goto L_0025E740; break;
        case 14: goto L_0025E740; break;
        case 15: goto L_0025E740; break;
        case 16: goto L_0025E740; break;
        case 17: goto L_0025E740; break;
        case 18: goto L_0025E740; break;
        case 19: goto L_0025E740; break;
        case 20: goto L_0025E734; break;
        case 21: goto L_0025E740; break;
        case 22: goto L_0025E740; break;
        case 23: goto L_0025E740; break;
        case 24: goto L_0025E740; break;
        case 25: goto L_0025E740; break;
        case 26: goto L_0025E740; break;
        case 27: goto L_0025E740; break;
        case 28: goto L_0025E740; break;
        case 29: goto L_0025E740; break;
        case 30: goto L_0025E734; break;
        case 31: goto L_0025E740; break;
        case 32: goto L_0025E740; break;
        case 33: goto L_0025E740; break;
        case 34: goto L_0025E740; break;
        case 35: goto L_0025E740; break;
        case 36: goto L_0025E740; break;
        case 37: goto L_0025E740; break;
        case 38: goto L_0025E740; break;
        case 39: goto L_0025E740; break;
        case 40: goto L_0025E734; break;
        default: switch_error(__func__, 0x0025E72C, 0x800A7730);
    }
    // 0x0025E730: nop

L_0025E734:
    // 0x0025E734: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0025E738: j           L_0025E78C
    // 0x0025E73C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_0025E78C;
    // 0x0025E73C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_0025E740:
    // 0x0025E740: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0025E744: j           L_0025E78C
    // 0x0025E748: nop

        goto L_0025E78C;
    // 0x0025E748: nop

L_0025E74C:
    // 0x0025E74C: lb          $v0, 0x130($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X130);
    // 0x0025E750: beq         $v0, $zero, L_0025E768
    if (ctx->r2 == 0) {
        // 0x0025E754: nop
    
            goto L_0025E768;
    }
    // 0x0025E754: nop

    // 0x0025E758: jal         0x00259E60
    // 0x0025E75C: nop

    func_00259E60(rdram, ctx);
        goto after_0;
    // 0x0025E75C: nop

    after_0:
    // 0x0025E760: j           L_0025E78C
    // 0x0025E764: nop

        goto L_0025E78C;
    // 0x0025E764: nop

L_0025E768:
    // 0x0025E768: lb          $v0, 0x131($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X131);
    // 0x0025E76C: bne         $v0, $zero, L_0025E784
    if (ctx->r2 != 0) {
        // 0x0025E770: nop
    
            goto L_0025E784;
    }
    // 0x0025E770: nop

    // 0x0025E774: jal         0x00259EB8
    // 0x0025E778: nop

    func_00259EB8(rdram, ctx);
        goto after_1;
    // 0x0025E778: nop

    after_1:
    // 0x0025E77C: j           L_0025E78C
    // 0x0025E780: nop

        goto L_0025E78C;
    // 0x0025E780: nop

L_0025E784:
    // 0x0025E784: jal         0x00259E8C
    // 0x0025E788: nop

    func_00259E8C(rdram, ctx);
        goto after_2;
    // 0x0025E788: nop

    after_2:
L_0025E78C:
    // 0x0025E78C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025E790: jr          $ra
    // 0x0025E794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025E794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0043F88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00406948:
    // 0x0043F88C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x0043F890: sw          $s4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r20;
    // 0x0043F894: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0043F898: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x0043F89C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0043F8A0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0043F8A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0043F8A8: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x0043F8AC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043F8B0: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043F8B4: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x0043F8B8: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x0043F8BC: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x0043F8C0: sdc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE8, ctx->r29);
    // 0x0043F8C4: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x0043F8C8: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x0043F8CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043F8D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0043F8D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043F8D8: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043F8DC: jal         0x00246108
    // 0x0043F8E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0043F8E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x0043F8E4: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x0043F8E8: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x0043F8EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043F8F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0043F8F4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0043F8F8: beq         $v1, $zero, L_0043F92C
    if (ctx->r3 == 0) {
        // 0x0043F8FC: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0043F92C;
    }
    // 0x0043F8FC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043F900: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0043F904: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0043F908: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0043F90C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0043F910: jal         0x00245BAC
    // 0x0043F914: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0043F914: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0043F918: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0043F91C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F920: swc1        $f0, -0x9D8($at)
    MEM_W(-0X9D8, ctx->r1) = ctx->f0.u32l;
    // 0x0043F924: j           L_00406948
    // 0x0043F928: nop

    entry_00406948(rdram, ctx);
    return;
    // 0x0043F928: nop

L_0043F92C:
    // 0x0043F92C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0043F930: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0043F934: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0043F938: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x0043F93C: lw          $a3, -0x9D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X9D8);
    // 0x0043F940: jal         0x00245BAC
    // 0x0043F944: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x0043F944: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0043F948: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0043F94C: beq         $s1, $zero, L_0043FA1C
    if (ctx->r17 == 0) {
        // 0x0043F950: nop
    
            goto L_0043FA1C;
    }
    // 0x0043F950: nop

    // 0x0043F954: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0043F958: addiu       $s2, $s2, -0x618
    ctx->r18 = ADD32(ctx->r18, -0X618);
    // 0x0043F95C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0043F960: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0043F964: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x0043F968: nop

    // 0x0043F96C: bc1f        L_0043FA1C
    if (!c1cs) {
        // 0x0043F970: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_0043FA1C;
    }
    // 0x0043F970: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x0043F974: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x0043F978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043F97C: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x0043F980: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x0043F984: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x0043F988: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x0043F98C: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x0043F990: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0043F994: jal         0x0020EF2C
    // 0x0043F998: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0043F998: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x0043F99C: jal         0x0020EAA0
    // 0x0043F9A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_4;
    // 0x0043F9A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0043F9A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043F9A8: jal         0x002685F0
    // 0x0043F9AC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002685F0(rdram, ctx);
        goto after_5;
    // 0x0043F9AC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_5:
    // 0x0043F9B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F9B4: lwc1        $f20, 0x4DC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4DC);
    // 0x0043F9B8: beq         $v0, $zero, L_0043F9C8
    if (ctx->r2 == 0) {
        // 0x0043F9BC: nop
    
            goto L_0043F9C8;
    }
    // 0x0043F9BC: nop

    // 0x0043F9C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F9C4: lwc1        $f20, 0x4E0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4E0);
L_0043F9C8:
    // 0x0043F9C8: jal         0x002982F0
    // 0x0043F9CC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0043F9CC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
    // 0x0043F9D0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0043F9D4: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0043F9D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043F9DC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0043F9E0: jal         0x002974C0
    // 0x0043F9E4: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x0043F9E4: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_7:
    // 0x0043F9E8: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0043F9EC: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x0043F9F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043F9F4: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043F9F8: lwc1        $f1, -0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X4);
    // 0x0043F9FC: c.lt.s      $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f22.fl < ctx->f1.fl;
    // 0x0043FA00: nop

    // 0x0043FA04: bc1f        L_0043FA1C
    if (!c1cs) {
        // 0x0043FA08: nop
    
            goto L_0043FA1C;
    }
    // 0x0043FA08: nop

    // 0x0043FA0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043FA10: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043FA14: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043FA18: swc1        $f0, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f0.u32l;
L_0043FA1C:
    // 0x0043FA1C: lb          $v0, 0xC7($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC7);
    // 0x0043FA20: beq         $v0, $zero, L_0043FA7C
    if (ctx->r2 == 0) {
        // 0x0043FA24: nop
    
            goto L_0043FA7C;
    }
    // 0x0043FA24: nop

    // 0x0043FA28: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FA2C: addiu       $v1, $v1, -0x61C
    ctx->r3 = ADD32(ctx->r3, -0X61C);
    // 0x0043FA30: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0043FA34: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0043FA38: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0043FA3C: nop

    // 0x0043FA40: bc1f        L_0043FA7C
    if (!c1cs) {
        // 0x0043FA44: nop
    
            goto L_0043FA7C;
    }
    // 0x0043FA44: nop

    // 0x0043FA48: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0043FA4C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0043FA50: nop

    // 0x0043FA54: bc1f        L_0043FA7C
    if (!c1cs) {
        // 0x0043FA58: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0043FA7C;
    }
    // 0x0043FA58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0043FA5C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0043FA60: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0043FA64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FA68: lwc1        $f0, 0x4E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4E4);
    // 0x0043FA6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043FA70: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x0043FA74: jal         0x00243414
    // 0x0043FA78: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x0043FA78: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    after_8:
L_0043FA7C:
    // 0x0043FA7C: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x0043FA80: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x0043FA84: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0043FA88: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x0043FA8C: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x0043FA90: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x0043FA94: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x0043FA98: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0043FA9C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x0043FAA0: jr          $ra
    // 0x0043FAA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x0043FAA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_00428330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428330: addiu       $sp, $sp, -0x488
    ctx->r29 = ADD32(ctx->r29, -0X488);
    // 0x00428334: sw          $s2, 0x468($sp)
    MEM_W(0X468, ctx->r29) = ctx->r18;
    // 0x00428338: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042833C: sw          $s7, 0x47C($sp)
    MEM_W(0X47C, ctx->r29) = ctx->r23;
    // 0x00428340: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00428344: sw          $ra, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r31;
    // 0x00428348: sw          $fp, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r30;
    // 0x0042834C: sw          $s6, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->r22;
    // 0x00428350: sw          $s5, 0x474($sp)
    MEM_W(0X474, ctx->r29) = ctx->r21;
    // 0x00428354: sw          $s4, 0x470($sp)
    MEM_W(0X470, ctx->r29) = ctx->r20;
    // 0x00428358: sw          $s3, 0x46C($sp)
    MEM_W(0X46C, ctx->r29) = ctx->r19;
    // 0x0042835C: sw          $s1, 0x464($sp)
    MEM_W(0X464, ctx->r29) = ctx->r17;
    // 0x00428360: jal         0x00429DFC
    // 0x00428364: sw          $s0, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r16;
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00428364: sw          $s0, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r16;
    after_0:
    // 0x00428368: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042836C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00428370: bne         $v1, $v0, L_00428384
    if (ctx->r3 != ctx->r2) {
        // 0x00428374: nop
    
            goto L_00428384;
    }
    // 0x00428374: nop

    // 0x00428378: jal         0x004298B8
    // 0x0042837C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_004298B8(rdram, ctx);
        goto after_1;
    // 0x0042837C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00428380: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00428384:
    // 0x00428384: beq         $v1, $zero, L_00428394
    if (ctx->r3 == 0) {
        // 0x00428388: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00428394;
    }
    // 0x00428388: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0042838C:
    // 0x0042838C: j           L_0042873C
    // 0x00428390: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0042873C;
    // 0x00428390: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00428394:
    // 0x00428394: jal         0x0042876C
    // 0x00428398: addiu       $a1, $sp, 0x258
    ctx->r5 = ADD32(ctx->r29, 0X258);
    func_0042876C(rdram, ctx);
        goto after_2;
    // 0x00428398: addiu       $a1, $sp, 0x258
    ctx->r5 = ADD32(ctx->r29, 0X258);
    after_2:
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
        goto after_3;
    // 0x004283D8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_3:
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
        goto after_4;
    // 0x00428434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
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
        goto after_5;
    // 0x0042845C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    after_5:
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
        goto after_6;
    // 0x004284F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
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
        goto after_7;
    // 0x00428524: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_7:
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
        goto after_8;
    // 0x00428570: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_8:
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
        goto after_9;
    // 0x004285F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
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
        goto after_10;
    // 0x004286F4: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_10:
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
RECOMP_FUNC void func_0026E46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E470: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E474: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    // 0x0026E478: jal         0x00275950
    // 0x0026E47C: nop

    func_00275950(rdram, ctx);
        goto after_0;
    // 0x0026E47C: nop

    after_0:
    // 0x0026E480: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E484: jr          $ra
    // 0x0026E488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025EAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EAB0: lw          $v1, 0x2C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2C);
    // 0x0025EAB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025EAB8: addiu       $v0, $v0, 0x17C0
    ctx->r2 = ADD32(ctx->r2, 0X17C0);
    // 0x0025EABC: beq         $v1, $v0, L_0025EAE4
    if (ctx->r3 == ctx->r2) {
        // 0x0025EAC0: nop
    
            goto L_0025EAE4;
    }
    // 0x0025EAC0: nop

    // 0x0025EAC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025EAC8: addiu       $v0, $v0, 0x1840
    ctx->r2 = ADD32(ctx->r2, 0X1840);
    // 0x0025EACC: beq         $v1, $v0, L_0025EAE4
    if (ctx->r3 == ctx->r2) {
        // 0x0025EAD0: nop
    
            goto L_0025EAE4;
    }
    // 0x0025EAD0: nop

    // 0x0025EAD4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025EAD8: addiu       $v0, $v0, 0x18C0
    ctx->r2 = ADD32(ctx->r2, 0X18C0);
    // 0x0025EADC: bne         $v1, $v0, L_0025EAEC
    if (ctx->r3 != ctx->r2) {
            // 0x0025EAE0: nop

    func_0025EAEC(rdram, ctx);
    return;
    }
    // 0x0025EAE0: nop

L_0025EAE4:
    // 0x0025EAE4: jr          $ra
    // 0x0025EAE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0025EAE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0025295C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025295C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00252960: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00252964: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00252968: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0025296C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00252970: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00252974: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00252978: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025297C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00252980: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x00252984: beq         $v0, $zero, L_00252A4C
    if (ctx->r2 == 0) {
        // 0x00252988: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_00252A4C;
    }
    // 0x00252988: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0025298C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00252990: lw          $s0, 0x20($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X20);
    // 0x00252994: beq         $s0, $zero, L_00252AB8
    if (ctx->r16 == 0) {
        // 0x00252998: addu        $s1, $s2, $zero
        ctx->r17 = ADD32(ctx->r18, 0);
            goto L_00252AB8;
    }
    // 0x00252998: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x0025299C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x002529A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_002529A4:
    // 0x002529A4: jal         0x0025340C
    // 0x002529A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x002529A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002529AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002529B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002529B4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_002529B8:
    // 0x002529B8: beql        $a0, $a1, L_00252A04
    if (ctx->r4 == ctx->r5) {
        // 0x002529BC: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00252A04;
    }
    goto skip_0;
    // 0x002529BC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    skip_0:
    // 0x002529C0: lw          $v0, 0xBF4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBF4);
    // 0x002529C4: beq         $v0, $zero, L_002529DC
    if (ctx->r2 == 0) {
        // 0x002529C8: nop
    
            goto L_002529DC;
    }
    // 0x002529C8: nop

    // 0x002529CC: beq         $v0, $s3, L_002529F0
    if (ctx->r2 == ctx->r19) {
        // 0x002529D0: nop
    
            goto L_002529F0;
    }
    // 0x002529D0: nop

    // 0x002529D4: j           L_00252A04
    // 0x002529D8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
        goto L_00252A04;
    // 0x002529D8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_002529DC:
    // 0x002529DC: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002529E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002529E4: lhu         $v0, 0x20($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X20);
    // 0x002529E8: j           L_00252A00
    // 0x002529EC: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
        goto L_00252A00;
    // 0x002529EC: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_002529F0:
    // 0x002529F0: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002529F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002529F8: lhu         $v0, 0x20($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X20);
    // 0x002529FC: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_00252A00:
    // 0x00252A00: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00252A04:
    // 0x00252A04: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00252A08: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00252A0C: bne         $v0, $zero, L_002529B8
    if (ctx->r2 != 0) {
        // 0x00252A10: nop
    
            goto L_002529B8;
    }
    // 0x00252A10: nop

    // 0x00252A14: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00252A18: lw          $v1, -0x5338($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5338);
    // 0x00252A1C: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00252A20: beq         $v0, $zero, L_00252A44
    if (ctx->r2 == 0) {
        // 0x00252A24: slt         $v0, $s2, $v1
        ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_00252A44;
    }
    // 0x00252A24: slt         $v0, $s2, $v1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00252A28: beq         $v0, $zero, L_00252ABC
    if (ctx->r2 == 0) {
        // 0x00252A2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00252ABC;
    }
    // 0x00252A2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00252A30: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00252A34: bnel        $s0, $zero, L_002529A4
    if (ctx->r16 != 0) {
        // 0x00252A38: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_002529A4;
    }
    goto skip_1;
    // 0x00252A38: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    skip_1:
    // 0x00252A3C: j           L_00252ABC
    // 0x00252A40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00252ABC;
    // 0x00252A40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00252A44:
    // 0x00252A44: j           L_00252ABC
    // 0x00252A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00252ABC;
    // 0x00252A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00252A4C:
    // 0x00252A4C: lw          $s0, 0x20($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X20);
    // 0x00252A50: beq         $s0, $zero, L_00252AB8
    if (ctx->r16 == 0) {
        // 0x00252A54: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_00252AB8;
    }
    // 0x00252A54: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x00252A58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_00252A5C:
    // 0x00252A5C: jal         0x0025340C
    // 0x00252A60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_1;
    // 0x00252A60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00252A64: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00252A68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00252A6C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_00252A70:
    // 0x00252A70: beql        $a0, $a2, L_00252A90
    if (ctx->r4 == ctx->r6) {
        // 0x00252A74: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00252A90;
    }
    goto skip_2;
    // 0x00252A74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x00252A78: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00252A7C: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x00252A80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00252A84: lhu         $v0, 0x20($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X20);
    // 0x00252A88: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00252A8C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00252A90:
    // 0x00252A90: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00252A94: bne         $v0, $zero, L_00252A70
    if (ctx->r2 != 0) {
        // 0x00252A98: nop
    
            goto L_00252A70;
    }
    // 0x00252A98: nop

    // 0x00252A9C: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00252AA0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00252AA4: beq         $v0, $zero, L_00252ABC
    if (ctx->r2 == 0) {
        // 0x00252AA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00252ABC;
    }
    // 0x00252AA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00252AAC: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00252AB0: bnel        $s0, $zero, L_00252A5C
    if (ctx->r16 != 0) {
        // 0x00252AB4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00252A5C;
    }
    goto skip_3;
    // 0x00252AB4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    skip_3:
L_00252AB8:
    // 0x00252AB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00252ABC:
    // 0x00252ABC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00252AC0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00252AC4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00252AC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00252ACC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00252AD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00252AD4: jr          $ra
    // 0x00252AD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00252AD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025AD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AD90: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0025AD94: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x0025AD98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025AD9C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x0025ADA0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0025ADA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0025ADA8: sdc1        $f24, 0x90($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X90, ctx->r29);
    // 0x0025ADAC: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x0025ADB0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0025ADB4: addiu       $v0, $v0, 0x7370
    ctx->r2 = ADD32(ctx->r2, 0X7370);
    // 0x0025ADB8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0025ADBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025ADC0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x0025ADC4: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x0025ADC8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x0025ADCC: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x0025ADD0: sdc1        $f23, 0x88($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X88, ctx->r29);
    // 0x0025ADD4: sdc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X80, ctx->r29);
    // 0x0025ADD8: sdc1        $f21, 0x78($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X78, ctx->r29);
    // 0x0025ADDC: sdc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X70, ctx->r29);
    // 0x0025ADE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025ADE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0025ADE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0025ADEC: lw          $a1, 0xA4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA4);
    // 0x0025ADF0: lw          $a2, 0xB0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XB0);
    // 0x0025ADF4: jal         0x0020367C
    // 0x0025ADF8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0025ADF8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0025ADFC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0025AE00: beq         $s3, $zero, L_0025B044
    if (ctx->r19 == 0) {
        // 0x0025AE04: nop
    
            goto L_0025B044;
    }
    // 0x0025AE04: nop

    // 0x0025AE08: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x0025AE0C: jal         0x002017D4
    // 0x0025AE10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0025AE10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0025AE14: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0025AE18: lb          $v0, 0x19($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X19);
    // 0x0025AE1C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x0025AE20: beql        $v0, $a0, L_0025B03C
    if (ctx->r2 == ctx->r4) {
        // 0x0025AE24: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0025B03C;
    }
    goto skip_0;
    // 0x0025AE24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x0025AE28: lb          $v0, 0x18($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X18);
    // 0x0025AE2C: beql        $v0, $a0, L_0025B03C
    if (ctx->r2 == ctx->r4) {
        // 0x0025AE30: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0025B03C;
    }
    goto skip_1;
    // 0x0025AE30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x0025AE34: lb          $s4, 0x1A($v1)
    ctx->r20 = MEM_B(ctx->r3, 0X1A);
    // 0x0025AE38: beql        $s4, $zero, L_0025B03C
    if (ctx->r20 == 0) {
        // 0x0025AE3C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0025B03C;
    }
    goto skip_2;
    // 0x0025AE3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_2:
    // 0x0025AE40: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x0025AE44: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0025AE48: beq         $v0, $zero, L_0025AFC8
    if (ctx->r2 == 0) {
        // 0x0025AE4C: nop
    
            goto L_0025AFC8;
    }
    // 0x0025AE4C: nop

    // 0x0025AE50: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0025AE54: beq         $v0, $zero, L_0025AFC8
    if (ctx->r2 == 0) {
        // 0x0025AE58: nop
    
            goto L_0025AFC8;
    }
    // 0x0025AE58: nop

    // 0x0025AE5C: lw          $v0, 0x80($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X80);
    // 0x0025AE60: bne         $v0, $zero, L_0025AE74
    if (ctx->r2 != 0) {
        // 0x0025AE64: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_0025AE74;
    }
    // 0x0025AE64: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0025AE68: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x0025AE6C: bne         $v1, $v0, L_0025AFC8
    if (ctx->r3 != ctx->r2) {
        // 0x0025AE70: nop
    
            goto L_0025AFC8;
    }
    // 0x0025AE70: nop

L_0025AE74:
    // 0x0025AE74: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0025AE78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025AE7C: lwc1        $f20, 0x7384($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7384);
    // 0x0025AE80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025AE84: jal         0x002671B4
    // 0x0025AE88: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x0025AE88: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x0025AE8C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025AE90: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0025AE94: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025AE98: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x0025AE9C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025AEA0: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025AEA4: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0025AEA8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0025AEAC: lb          $v1, 0x34($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X34);
    // 0x0025AEB0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0025AEB4: bne         $v1, $v0, L_0025AEE4
    if (ctx->r3 != ctx->r2) {
        // 0x0025AEB8: nop
    
            goto L_0025AEE4;
    }
    // 0x0025AEB8: nop

    // 0x0025AEBC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x0025AEC0: addiu       $t3, $t3, 0x6A0
    ctx->r11 = ADD32(ctx->r11, 0X6A0);
    // 0x0025AEC4: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0025AEC8: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0025AECC: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0025AED0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025AED4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0025AED8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0025AEDC: j           L_0025AF18
    // 0x0025AEE0: nop

        goto L_0025AF18;
    // 0x0025AEE0: nop

L_0025AEE4:
    // 0x0025AEE4: lw          $s0, 0x80($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X80);
    // 0x0025AEE8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0025AEEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025AEF0: jal         0x002671B4
    // 0x0025AEF4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_3;
    // 0x0025AEF4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x0025AEF8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025AEFC: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0025AF00: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025AF04: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x0025AF08: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025AF0C: swc1        $f1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025AF10: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0025AF14: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
L_0025AF18:
    // 0x0025AF18: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x0025AF1C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0025AF20: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x0025AF24: jal         0x00246310
    // 0x0025AF28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00246310(rdram, ctx);
        goto after_4;
    // 0x0025AF28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0025AF2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025AF30: lwc1        $f1, 0x7388($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7388);
    // 0x0025AF34: neg.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = -ctx->f0.fl;
    // 0x0025AF38: c.lt.s      $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f23.fl < ctx->f1.fl;
    // 0x0025AF3C: nop

    // 0x0025AF40: bc1f        L_0025AF50
    if (!c1cs) {
        // 0x0025AF44: nop
    
            goto L_0025AF50;
    }
    // 0x0025AF44: nop

    // 0x0025AF48: j           L_0025AF68
    // 0x0025AF4C: mov.s       $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    ctx->f23.fl = ctx->f1.fl;
        goto L_0025AF68;
    // 0x0025AF4C: mov.s       $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    ctx->f23.fl = ctx->f1.fl;
L_0025AF50:
    // 0x0025AF50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025AF54: lwc1        $f0, 0x738C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X738C);
    // 0x0025AF58: c.lt.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl < ctx->f23.fl;
    // 0x0025AF5C: nop

    // 0x0025AF60: bc1tl       L_0025AF68
    if (c1cs) {
        // 0x0025AF64: mov.s       $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
            goto L_0025AF68;
    }
    goto skip_3;
    // 0x0025AF64: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    skip_3:
L_0025AF68:
    // 0x0025AF68: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x0025AF6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025AF70: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0025AF74: jal         0x0020EF2C
    // 0x0025AF78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x0025AF78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x0025AF7C: jal         0x0020F5C0
    // 0x0025AF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F5C0(rdram, ctx);
        goto after_6;
    // 0x0025AF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0025AF84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025AF88: lwc1        $f1, 0x7390($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7390);
    // 0x0025AF8C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x0025AF90: c.lt.s      $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f22.fl < ctx->f1.fl;
    // 0x0025AF94: nop

    // 0x0025AF98: bc1f        L_0025AFA8
    if (!c1cs) {
        // 0x0025AF9C: nop
    
            goto L_0025AFA8;
    }
    // 0x0025AF9C: nop

    // 0x0025AFA0: j           L_0025AFD0
    // 0x0025AFA4: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
        goto L_0025AFD0;
    // 0x0025AFA4: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
L_0025AFA8:
    // 0x0025AFA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025AFAC: lwc1        $f0, 0x7394($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7394);
    // 0x0025AFB0: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x0025AFB4: nop

    // 0x0025AFB8: bc1tl       L_0025AFD0
    if (c1cs) {
        // 0x0025AFBC: mov.s       $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
            goto L_0025AFD0;
    }
    goto skip_4;
    // 0x0025AFBC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    skip_4:
    // 0x0025AFC0: j           L_0025AFD0
    // 0x0025AFC4: nop

        goto L_0025AFD0;
    // 0x0025AFC4: nop

L_0025AFC8:
    // 0x0025AFC8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0025AFCC: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
L_0025AFD0:
    // 0x0025AFD0: mtc1        $s4, $f20
    ctx->f20.u32l = ctx->r20;
    // 0x0025AFD4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0025AFD8: lwc1        $f0, 0x24($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X24);
    // 0x0025AFDC: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0025AFE0: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025AFE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025AFE8: lwc1        $f21, 0x7398($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7398);
    // 0x0025AFEC: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0025AFF0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0025AFF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025AFF8: jal         0x002117DC
    // 0x0025AFFC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_002117DC(rdram, ctx);
        goto after_7;
    // 0x0025AFFC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x0025B000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025B004: add.s       $f22, $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x0025B008: lwc1        $f1, 0x28($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X28);
    // 0x0025B00C: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0025B010: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0025B014: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0025B018: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0025B01C: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025B020: swc1        $f0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f0.u32l;
    // 0x0025B024: jal         0x002117DC
    // 0x0025B028: swc1        $f1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002117DC(rdram, ctx);
        goto after_8;
    // 0x0025B028: swc1        $f1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_8:
    // 0x0025B02C: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0025B030: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0025B034: swc1        $f0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f0.u32l;
    // 0x0025B038: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0025B03C:
    // 0x0025B03C: jal         0x002051F4
    // 0x0025B040: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_9;
    // 0x0025B040: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_9:
L_0025B044:
    // 0x0025B044: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x0025B048: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x0025B04C: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0025B050: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x0025B054: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x0025B058: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x0025B05C: ldc1        $f24, 0x90($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X90);
    // 0x0025B060: ldc1        $f23, 0x88($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X88);
    // 0x0025B064: ldc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X80);
    // 0x0025B068: ldc1        $f21, 0x78($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X78);
    // 0x0025B06C: ldc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X70);
    // 0x0025B070: jr          $ra
    // 0x0025B074: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0025B074: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_0026C434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C434: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0026C438: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0026C43C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0026C440: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0026C444: jal         0x0026AFC0
    // 0x0026C448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0026AFC0(rdram, ctx);
        goto after_0;
    // 0x0026C448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0026C44C: beq         $v0, $zero, L_0026C51C
    if (ctx->r2 == 0) {
        // 0x0026C450: nop
    
            goto L_0026C51C;
    }
    // 0x0026C450: nop

    // 0x0026C454: bne         $s0, $zero, L_0026C484
    if (ctx->r16 != 0) {
        // 0x0026C458: nop
    
            goto L_0026C484;
    }
    // 0x0026C458: nop

    // 0x0026C45C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C460: lwc1        $f0, -0x7FF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7FF4);
    // 0x0026C464: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026C468: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0026C46C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026C470: sw          $zero, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = 0;
    // 0x0026C474: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026C478: swc1        $f0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->f0.u32l;
    // 0x0026C47C: j           L_0026C4C8
    // 0x0026C480: nop

        goto L_0026C4C8;
    // 0x0026C480: nop

L_0026C484:
    // 0x0026C484: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026C488: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026C48C: beq         $s0, $v0, L_0026C4C8
    if (ctx->r16 == ctx->r2) {
        // 0x0026C490: nop
    
            goto L_0026C4C8;
    }
    // 0x0026C490: nop

    // 0x0026C494: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026C498: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026C49C: jal         0x0020EF2C
    // 0x0026C4A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026C4A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x0026C4A4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026C4A8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026C4AC: jal         0x0020EF2C
    // 0x0026C4B0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0026C4B0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x0026C4B4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C4B8: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026C4BC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026C4C0: jal         0x0020EFDC
    // 0x0026C4C4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_0020EFDC(rdram, ctx);
        goto after_3;
    // 0x0026C4C4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
L_0026C4C8:
    // 0x0026C4C8: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026C4CC: addiu       $t1, $t1, 0x2020
    ctx->r9 = ADD32(ctx->r9, 0X2020);
    // 0x0026C4D0: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x0026C4D4: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x0026C4D8: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x0026C4DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0026C4E0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x0026C4E4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026C4E8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026C4EC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026C4F0: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026C4F4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0026C4F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026C4FC: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026C500: jal         0x00298470
    // 0x0026C504: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x0026C504: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x0026C508: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0026C50C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0026C510: nop

    // 0x0026C514: bc1f        L_0026C528
    if (!c1cs) {
        // 0x0026C518: nop
    
            goto L_0026C528;
    }
    // 0x0026C518: nop

L_0026C51C:
    // 0x0026C51C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026C520: j           L_0026C548
    // 0x0026C524: nop

        goto L_0026C548;
    // 0x0026C524: nop

L_0026C528:
    // 0x0026C528: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026C52C: jal         0x0021153C
    // 0x0026C530: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    func_0021153C(rdram, ctx);
        goto after_5;
    // 0x0026C530: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    after_5:
    // 0x0026C534: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026C538: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0026C53C: nop

    // 0x0026C540: bc1fl       L_0026C548
    if (!c1cs) {
        // 0x0026C544: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0026C548;
    }
    goto skip_0;
    // 0x0026C544: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
L_0026C548:
    // 0x0026C548: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0026C54C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0026C550: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0026C554: jr          $ra
    // 0x0026C558: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0026C558: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0027FC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027FC2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0027FC30: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0027FC34: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0027FC38: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0027FC3C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0027FC40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027FC44: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0027FC48: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0027FC4C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0027FC50: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0027FC54: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0027FC58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027FC5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027FC60: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0027FC64: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0027FC68: jal         0x00284174
    // 0x0027FC6C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0027FC6C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    after_0:
    // 0x0027FC70: beq         $v0, $zero, L_0027FCA0
    if (ctx->r2 == 0) {
        // 0x0027FC74: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0027FCA0;
    }
    // 0x0027FC74: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0027FC78: lw          $v0, 0xE28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XE28);
    // 0x0027FC7C: beq         $v0, $zero, L_0027FCA4
    if (ctx->r2 == 0) {
        // 0x0027FC80: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0027FCA4;
    }
    // 0x0027FC80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027FC84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0027FC88: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0027FC8C: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
L_0027FC90:
    // 0x0027FC90: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0027FC94: bnel        $v0, $zero, L_0027FC90
    if (ctx->r2 != 0) {
        // 0x0027FC98: sw          $v1, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r3;
            goto L_0027FC90;
    }
    goto skip_0;
    // 0x0027FC98: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    skip_0:
    // 0x0027FC9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0027FCA0:
    // 0x0027FCA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0027FCA4:
    // 0x0027FCA4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027FCA8: lw          $v0, 0x35D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X35D4);
    // 0x0027FCAC: bne         $a2, $v0, L_0027FCBC
    if (ctx->r6 != ctx->r2) {
        // 0x0027FCB0: addiu       $s7, $zero, -0x1
        ctx->r23 = ADD32(0, -0X1);
            goto L_0027FCBC;
    }
    // 0x0027FCB0: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x0027FCB4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0027FCB8: lw          $a2, 0x2CD0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2CD0);
L_0027FCBC:
    // 0x0027FCBC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0027FCC0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0027FCC4: beq         $v0, $zero, L_0027FDAC
    if (ctx->r2 == 0) {
        // 0x0027FCC8: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_0027FDAC;
    }
    // 0x0027FCC8: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x0027FCCC: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
L_0027FCD0:
    // 0x0027FCD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FCD4: lwc1        $f20, -0x654C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X654C);
    // 0x0027FCD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FCDC: lwc1        $f21, -0x6548($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6548);
    // 0x0027FCE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0027FCE4:
    // 0x0027FCE4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0027FCE8: beq         $v0, $s6, L_0027FCF8
    if (ctx->r2 == ctx->r22) {
        // 0x0027FCEC: nop
    
            goto L_0027FCF8;
    }
    // 0x0027FCEC: nop

    // 0x0027FCF0: bnel        $v0, $zero, L_0027FCD0
    if (ctx->r2 != 0) {
        // 0x0027FCF4: addiu       $s6, $zero, 0xA
        ctx->r22 = ADD32(0, 0XA);
            goto L_0027FCD0;
    }
    goto skip_1;
    // 0x0027FCF4: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    skip_1:
L_0027FCF8:
    // 0x0027FCF8: beq         $s2, $s1, L_0027FDA0
    if (ctx->r18 == ctx->r17) {
        // 0x0027FCFC: nop
    
            goto L_0027FDA0;
    }
    // 0x0027FCFC: nop

    // 0x0027FD00: lw          $s0, 0xF0C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0XF0C);
    // 0x0027FD04: beq         $s0, $zero, L_0027FD30
    if (ctx->r16 == 0) {
        // 0x0027FD08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027FD30;
    }
    // 0x0027FD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027FD0C: jal         0x00281B58
    // 0x0027FD10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281B58(rdram, ctx);
        goto after_1;
    // 0x0027FD10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0027FD14: addiu       $a0, $s4, 0xF0C
    ctx->r4 = ADD32(ctx->r20, 0XF0C);
    // 0x0027FD18: jal         0x00200738
    // 0x0027FD1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x0027FD1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0027FD20: addiu       $a0, $s5, 0xE28
    ctx->r4 = ADD32(ctx->r21, 0XE28);
    // 0x0027FD24: jal         0x00200574
    // 0x0027FD28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_3;
    // 0x0027FD28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0027FD2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0027FD30:
    // 0x0027FD30: beql        $a0, $zero, L_0027FDA0
    if (ctx->r4 == 0) {
        // 0x0027FD34: addiu       $s2, $s1, 0x1
        ctx->r18 = ADD32(ctx->r17, 0X1);
            goto L_0027FDA0;
    }
    goto skip_2;
    // 0x0027FD34: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x0027FD38: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0027FD3C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0027FD40: sw          $s3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r19;
    // 0x0027FD44: sw          $s2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r18;
    // 0x0027FD48: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x0027FD4C: swc1        $f20, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f20.u32l;
    // 0x0027FD50: swc1        $f21, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(21 - 1) * 2];
    // 0x0027FD54: sw          $s7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r23;
    // 0x0027FD58: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x0027FD5C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x0027FD60: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x0027FD64: swc1        $f20, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f20.u32l;
    // 0x0027FD68: swc1        $f20, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f20.u32l;
    // 0x0027FD6C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x0027FD70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0027FD74: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0027FD78: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027FD7C: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0027FD80: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0027FD84: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027FD88: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0027FD8C: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x0027FD90: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027FD94: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027FD98: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0027FD9C: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
L_0027FDA0:
    // 0x0027FDA0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0027FDA4: bne         $v0, $zero, L_0027FCE4
    if (ctx->r2 != 0) {
        // 0x0027FDA8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0027FCE4;
    }
    // 0x0027FDA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0027FDAC:
    // 0x0027FDAC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0027FDB0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0027FDB4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0027FDB8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0027FDBC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0027FDC0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0027FDC4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0027FDC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027FDCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027FDD0: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0027FDD4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0027FDD8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0027FDDC: jr          $ra
    // 0x0027FDE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0027FDE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004292E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004292E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x004292E4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x004292E8: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x004292EC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x004292F0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004292F4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x004292F8: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x004292FC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00429300: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x00429304: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00429308: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0042930C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00429310: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00429314: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00429318: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0042931C: jal         0x00429DFC
    // 0x00429320: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00429320: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00429324: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00429328: beq         $v0, $v1, L_00429428
    if (ctx->r2 == ctx->r3) {
        // 0x0042932C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00429428;
    }
    // 0x0042932C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00429330: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00429334: blez        $v0, L_0042941C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00429338: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042941C;
    }
    // 0x00429338: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042933C: andi        $s6, $s1, 0xFFFF
    ctx->r22 = ctx->r17 & 0XFFFF;
    // 0x00429340: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x00429344: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_00429348:
    // 0x00429348: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0042934C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429350: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429354: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00429358: jal         0x00299680
    // 0x0042935C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x0042935C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x00429360: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00429364: bne         $a3, $zero, L_00429428
    if (ctx->r7 != 0) {
        // 0x00429368: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429428;
    }
    // 0x00429368: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0042936C: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x00429370: bne         $v0, $s6, L_00429408
    if (ctx->r2 != ctx->r22) {
        // 0x00429374: nop
    
            goto L_00429408;
    }
    // 0x00429374: nop

    // 0x00429378: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0042937C: bne         $v0, $s7, L_00429408
    if (ctx->r2 != ctx->r23) {
        // 0x00429380: nop
    
            goto L_00429408;
    }
    // 0x00429380: nop

    // 0x00429384: beq         $s4, $zero, L_004293B4
    if (ctx->r20 == 0) {
        // 0x00429388: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004293B4;
    }
    // 0x00429388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042938C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00429390: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_00429394:
    // 0x00429394: addu        $v1, $s4, $a1
    ctx->r3 = ADD32(ctx->r20, ctx->r5);
    // 0x00429398: lbu         $a0, 0x10($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X10);
    // 0x0042939C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293A0: bne         $a0, $v0, L_00429400
    if (ctx->r4 != ctx->r2) {
        // 0x004293A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00429400;
    }
    // 0x004293A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293A8: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x004293AC: bne         $v0, $zero, L_00429394
    if (ctx->r2 != 0) {
        // 0x004293B0: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_00429394;
    }
    // 0x004293B0: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293B4:
    // 0x004293B4: beq         $s3, $zero, L_004293E8
    if (ctx->r19 == 0) {
        // 0x004293B8: nop
    
            goto L_004293E8;
    }
    // 0x004293B8: nop

    // 0x004293BC: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293C0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00429408;
    }
    // 0x004293C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004293C4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293C8:
    // 0x004293C8: addu        $v1, $s3, $a1
    ctx->r3 = ADD32(ctx->r19, ctx->r5);
    // 0x004293CC: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x004293D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004293D4: bne         $a0, $v0, L_004293F8
    if (ctx->r4 != ctx->r2) {
        // 0x004293D8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_004293F8;
    }
    // 0x004293D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004293DC: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004293E0: bne         $v0, $zero, L_004293C8
    if (ctx->r2 != 0) {
        // 0x004293E4: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_004293C8;
    }
    // 0x004293E4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004293E8:
    // 0x004293E8: bne         $a2, $zero, L_00429408
    if (ctx->r6 != 0) {
        // 0x004293EC: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00429408;
    }
    // 0x004293EC: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x004293F0: j           L_00429428
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
        goto L_00429428;
    // 0x004293F4: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
L_004293F8:
    // 0x004293F8: j           L_004293E8
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293E8;
    // 0x004293FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429400:
    // 0x00429400: j           L_004293B4
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_004293B4;
    // 0x00429404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429408:
    // 0x00429408: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0042940C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429410: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00429414: bne         $v0, $zero, L_00429348
    if (ctx->r2 != 0) {
        // 0x00429418: addiu       $a3, $sp, 0x10
        ctx->r7 = ADD32(ctx->r29, 0X10);
            goto L_00429348;
    }
    // 0x00429418: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_0042941C:
    // 0x0042941C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00429420: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00429424: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00429428:
    // 0x00429428: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0042942C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00429430: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00429434: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00429438: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0042943C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00429440: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00429444: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00429448: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0042944C: jr          $ra
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00429450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_002317E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002317E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002317E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002317EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002317F0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002317F4: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002317F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002317FC: jal         0x0022F1C8
    // 0x00231800: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_0;
    // 0x00231800: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00231804: jal         0x00232B40
    // 0x00231808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_1;
    // 0x00231808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0023180C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00231810: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00231814: jr          $ra
    // 0x00231818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00231818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00213F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00213F2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00213F30: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x00213F34: nop

    // 0x00213F38: bc1t        L_00213F98
    if (c1cs) {
        // 0x00213F3C: nop
    
            goto L_00213F98;
    }
    // 0x00213F3C: nop

    // 0x00213F40: div.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    // 0x00213F44: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x00213F48: nop

    // 0x00213F4C: bc1f        L_00213F64
    if (!c1cs) {
        // 0x00213F50: nop
    
            goto L_00213F64;
    }
    // 0x00213F50: nop

    // 0x00213F54: trunc.w.s   $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f12.fl);
    // 0x00213F58: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00213F5C: j           L_00213F88
    // 0x00213F60: nop

        goto L_00213F88;
    // 0x00213F60: nop

L_00213F64:
    // 0x00213F64: trunc.w.s   $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f12.fl);
    // 0x00213F68: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00213F6C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00213F70: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213F74: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x00213F78: nop

    // 0x00213F7C: bc1tl       L_00213F94
    if (c1cs) {
        // 0x00213F80: sub.s       $f0, $f12, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_00213F94;
    }
    goto skip_0;
    // 0x00213F80: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
    skip_0:
    // 0x00213F84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_00213F88:
    // 0x00213F88: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00213F8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213F90: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
L_00213F94:
    // 0x00213F94: mul.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
L_00213F98:
    // 0x00213F98: jr          $ra
    // 0x00213F9C: nop

    return;
    // 0x00213F9C: nop

;}
RECOMP_FUNC void func_0026E318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E31C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026E320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026E324: jal         0x0021A7EC
    // 0x0026E328: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0021A7EC(rdram, ctx);
        goto after_0;
    // 0x0026E328: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0026E32C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0026E330: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x0026E334: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0026E338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026E33C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026E340: jr          $ra
    // 0x0026E344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00417F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417F18: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00417F1C: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x00417F20: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00417F24: bne         $v0, $zero, L_00417F44
    if (ctx->r2 != 0) {
        // 0x00417F28: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00417F44;
    }
    // 0x00417F28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00417F2C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00417F30: bnel        $v0, $zero, L_00417F48
    if (ctx->r2 != 0) {
        // 0x00417F34: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00417F48;
    }
    goto skip_0;
    // 0x00417F34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00417F38: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00417F3C: beq         $v0, $zero, L_00417F48
    if (ctx->r2 == 0) {
        // 0x00417F40: nop
    
            goto L_00417F48;
    }
    // 0x00417F40: nop

L_00417F44:
    // 0x00417F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00417F48:
    // 0x00417F48: jr          $ra
    // 0x00417F4C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00417F4C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_002603B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002603B0: beq         $a1, $v0, L_002603E0
    if (ctx->r5 == ctx->r2) {
            // 0x002603B4: nop

    func_002603E0(rdram, ctx);
    return;
    }
    // 0x002603B4: nop

    // 0x002603B8: jr          $ra
    // 0x002603BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002603BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
